#include <iostream>
using namespace std;


void MyFunction(string Fname, string Lname) {

}

double AddNumbers(double num1, double num2) {

	return num1 + num2;
}

double DivideNumbers(double num1, double num2) {

	return num2 / num1;
}
double SubNumbers(double num1, double num2) {

	return num1 - num2;
}
double MultiplyNumbers(double num1, double num2) {

	return num1 * num2;
}

int main() {
	double num1, num2;
	string Fname, Lname;
	int Operator;
	int result;

	MyFunction;
	cout << "Enter your name and surname" << endl;
	cin >> Fname >> Lname;

	cout << "Hello, your name is " << Fname << " and your surname is " << Lname << endl;
	cout << " Enter two numbers" << endl;
	cin >> num1 >> num2;
	cout << "Choose the type of operators which you want to use " << endl;

	cout << " 1: AddNumbers " << endl;
	cout << " 2: DivideNumbers " << endl;
	cout << " 3: SubNumbers " << endl;
	cout << " 4: MultiplyNumbers " << endl;
	cin >> Operator;

	switch (Operator) {

	case 1:
		result = num1 + num2;
		cout << "The result is " << result << endl;
		break;

	case 2:
		if (num2 == 0) {
			cout << "You can't divide by zero please enter other number " << endl;
			cin >> num2;

			result = num1 / num2;
			cout << "The result is " << result << endl;
		}
		else {
			result = num1 / num2;
			cout << "The result is " << result << endl;

		}
		break;

	case 3:
		result = num1 - num2;
		cout << "The result is " << result << endl;
		break;

	case 4:
		result = num1 * num2;
		cout << "The result is " << result << endl;
		break;


	default:
		cout << "Invalid operator selected, Please enter the number operator shown above " << endl;
	}




	return 0;
}