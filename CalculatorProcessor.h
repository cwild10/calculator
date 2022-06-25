#pragma once
#include <iostream>

class CalculatorProcessor
{
private:
	static CalculatorProcessor* instance;
	CalculatorProcessor();
public:
	static CalculatorProcessor* getInstance();

	char pro;
	int a;
	int b;
switch(pro)
	{
		case '+'
			cout << "" << a + b
			break;
		case '-'
			cout << "" << a - b
			break;
		case '*'
			cout << "" << a * b
			break;
		case '/'
			cout << "" << a / b
			break;
	}

};

CalculatorProcessor* CalculatorProcessor::instance = 0;

CalculatorProcessor* CalculatorProcessor::getInstance()
{
	if (instance == 0)
	{
		instance = new CalculatorProcessor();
	}
	return instance;
}

CalculatorProcessor::CalculatorProcessor()
{}


