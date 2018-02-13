#include <iostream>
#include <cmath>
using namespace std;


int add(int first_number,int second_number){
	cout << "Your answer is: ";
	cout << first_number + second_number << endl;
}	
int sub(int first_number,int second_number){
	cout << "Your answer is: ";
	cout << first_number - second_number << endl;
}
int mult(int first_number,int second_number){
	cout << "Your answer is: ";
	cout << first_number * second_number << endl;
}
int divi(int first_number,int second_number){
	cout << "Your answer is: ";
	cout << first_number / second_number << endl;
}
int mod(int first_number,int second_number){
	cout << "Your answer is: ";
	cout << first_number % second_number << endl;
}
int squarert(int first_number){
	
	//cout << sqrt(first_number) << endl;
	int result = sqrt(first_number);
	cout << "Your answer is: " << result <<endl;
}

int main(){
	int first_number = 1;
	int second_number = 1;
	char action;
	char question;
	bool keep_running = true;
	
	while (keep_running){
	// request for input and inputs from user
		cout << "What would you like to do? Please enter one of the following: " << endl <<
			"+" << endl << "-" << endl << "*" << endl << "/" << endl << "%" << endl << "For square root enter: q" << endl;
		cin >> action;

		// user selects the action to do
		if (action == '+'){
			cout << "Please enter your first number: " << endl;
			cin >> first_number;
			cout << "Please enter your second number: " << endl;
			cin >> second_number;
			add(first_number,second_number);
		}
		
		if (action == '-'){
			cout << "Please enter your first number: " << endl;
			cin >> first_number;
			cout << "Please enter your second number: " << endl;
			cin >> second_number;
			sub(first_number,second_number);
		}
		
		if (action == '*'){
			cout << "Please enter your first number: " << endl;
			cin >> first_number;
			cout << "Please enter your second number: " << endl;
			cin >> second_number;
			mult(first_number,second_number);
		}
		
		if (action == '/'){
			cout << "Please enter your first number: " << endl;
			cin >> first_number;
			cout << "Please enter your second number: " << endl;
			cin >> second_number;
			divi(first_number,second_number);
		}
		if (action == '%'){
			cout << "Please enter your first number: " << endl;
			cin >> first_number;
			cout << "Please enter your second number: " << endl;
			cin >> second_number;
			mod(first_number,second_number);
		}
		if (action == 'q'){
			cout << "Please enter your first number: " << endl;
			cin >> first_number;
			squarert(first_number);
		}
		// user decides to continue or not
		cout << "Do you want to keep running? Enter y or n" << endl;
		cin >> question;
		if (question != 'y'){keep_running = false;}
	}
}

	
	
		
	
