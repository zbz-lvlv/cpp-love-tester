#include "calculator.h"
#include <cmath>
#include <cstdlib>
#include <ctime>

Calculator::Calculator()
{
}

int Calculator::getLoveValue(){

	//Random number from 1 to 100
	//log base 10 the number
	//times 50 to get numbers closer to 100
	srand(time(NULL));
	int raw = rand() % 100 + 1;
	double logged = log10(raw);
	return logged * 50;

}

Calculator::~Calculator()
{
}
