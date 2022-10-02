#include "Calculator.h"

double Calculator::calculate(double x, char ops, double y)
{
	switch (ops)
	{
	case '+':
		return x + y;
		break;

	case '-':
		return x - y;
		break;

	case '*':
		return x * y;
		break;

	case '/':
		return x / y;
		break;

	default:
		return 0.0;
		break;
	}
}
 