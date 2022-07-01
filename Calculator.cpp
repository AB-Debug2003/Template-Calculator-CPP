#include<iostream>
#include<string>
using namespace std;

template <class C>

class Calculator {
	C a, b;
	int input;

	C Add(C a, C b) {
		return a + b;
	}

	C Subtract(C a, C b) {
		return a - b;
	}

	C Multiply(C a, C b) {
		return a * b;
	}

	C Divide(C a, C b) {
		return a / b;
	}

public:
	void numberInput() {
		cout << "Enter first number: " << endl;
		cin >> a;
		cout << "Enter second number: " << endl;
		cin >> b;
	}

	Calculator() {
		numberInput();
		cout << "Enter desired number against operation:" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Multiplication" << endl;
		cout << "4. Division" << endl;
		cin >> input;

		if (input == 1) {
			cout << "Result: " << Add(a, b) << endl;
		}
		else if (input == 2) {
			cout << "Result: " << Subtract(a, b) << endl;
		}
		else if (input == 3) {
			cout << "Result: " << Multiply(a, b) << endl;
		}
		else {
			cout << "Result: " << Divide(a, b) << endl;
		}
	
		cout << "Program Exited" << endl;
	}

	Calculator(string a, string b) {
		cout << a + b << endl;
	}
};

int main() {
	Calculator <int> c1;
	Calculator <float> c2;
	Calculator <string> c3("abdullah","shaheen");

	return 0;
}