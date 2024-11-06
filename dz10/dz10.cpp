#include <iostream>

using namespace std;

// Make hte function which cout the area of square
void square(double* a) {
	cout << "The area of square with side " << *a << " is : " << *a * *a << endl;
}

/*Make a function which calc an area of rectangle
In function we make a variable called b which save a value of 
second side of rectangle*/
void rectangle(double* a) {
	double b;
	cout << "Write a lenght of second side : ";
	cin >> b;
	cout << "The area of rectangle with sides " << *a << " and " << b << " is : " << *a * b << endl;
}

/*Make the function which calc the area of trapezoid
In function we make two variables which save a value of
second side of trapezoid and the height of trapezoid*/
void trapezoid(double* a) {
	double b, h;
	cout << "Write the second base of trapezoid : ";
	cin >> b;
	cout << "Write the height of trapezoid : ";
	cin >> h;
	cout << "The area of traezoid with bases " << *a << " and " << b << " and the height " << h << " is : " << *a * b * (h / 2);
}

/*Make the function which calc the area of rombus
In function we make one variable which save a value of 
the second diagonale of rhombus*/
void rhombus(double* a) {
	double d;
	cout << "Write the second diagonale of rhombus : ";
	cin >> d;
	cout << "The area of rhombus with diagonales " << *a << " and " << d << " is : " << (*a * d) / 2;
}

/*Make the function which calc the area of parallelepiped
In function we make one variable which save a value of
the height of parallelepiped*/
void parallelepiped(double* a) {
	double h;
	cout << "Write the lenght of height of parallelepiped : ";
	cin >> h;
	cout << "The area of parallelepiped with sides " << *a << " and a height " << h << " is : " << *a * h ;
}

int main()
{
	/*Create two variables 
	The first save a value of sides or smth else to calc the area of figure
	The second save a value of choice which make an user which figure's area he\she want to calc*/
	double a;
	int choice;

	//Create a massive with pointer 
	void (*operat[5])(double*) = {square , rectangle , trapezoid , rhombus , parallelepiped };

	//Enter a value in cariable
	cout << "make a choice which figure's area : \n1 - square\n2 - rectangle\n3 - trapezoid\n4 - rhombus\n5 - parallelepiped : " << endl;
	cin >> choice;

	/*Create the operator(if , else) in which the programm
	check the user choice and decided which figure's area 
	computer must calc*/
	if (choice == 1) {
		cout << "Write the lenght a side of square : ";
		cin >> a;
		operat[0](&a);
	}
	else if (choice == 2) {
		cout << "Write the first lenght a side of retangle : ";
		cin >> a;
		operat[1](&a);
	}
	else if (choice == 3) {
		cout << "Write the lenght of the first base of retangle : ";
		cin >> a;
		operat[2](&a);
	}
	else if (choice == 4) {
		cout << "Write the lenght of the first diagonale of rhombus : ";
		cin >> a;
		operat[3](&a);
	}
	else if (choice == 5) {
		cout << "Write the lenght of the first side of parallelepiped : ";
		cin >> a;
		operat[4](&a);
	}
	else {
		cout << "Error";
	}

	//Close the programm
	return 0;
}