#include <iostream>


using namespace std;

bool isEven(unsigned long long int value) { return value % 2 == 0; }

// скобки для подстраховки, т.к. по приоритету операций битовые операторы ниже приоритетом чем операторы отношений
bool isEven2(unsigned long long int value) { return (value & 1) == 0; }


int main() {
	if (isEven(123141241241235348)) {
		cout << "Chetnoe";
	}
	else {
		cout << "Ne chetnoe";
	}
	cout << "\n------------------------------------\n";
	if (isEven2(123141241241235348)){
		cout << "Chetnoe";
	}
	else {
		cout << "Ne chetnoe";
	}

	return 0;
}