#include <string>
#include <vector>
#include <iostream>
#include "stack.h"

using namespace std;

const string Symbols = "0123456789.()+-/* ";

class Symbol{
private:
	char operation;
	double value;
	bool type;

public:
	Symbol() = default;
	Symbol(const double &_value){
		value = _value;
		type = true;
	}
	Symbol(const char &_operation){
		operation = _operation;
		type = false;
	}
	void printSymbol(){
		if (type)
			std::cout << value << " ";
		else
			std::cout << operation << " ";
	}
	double getValue() { return value; }
	char getOperation() { return operation; }
	bool getType() { return type; }
	int priority();
};

class Arithmetic{
private:
	vector<Symbol> smbls;

public:
	Arithmetic() = default;
	void stringTo(string &expression);
	void ToPostfix();
	double calculate();
	void print();
};

bool checkBrackets(const string &s);
bool checkSymbols(const string &s);
bool isCorrect(const string &s);
