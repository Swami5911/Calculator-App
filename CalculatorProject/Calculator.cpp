#include "Calculator.h"

double Calculator::Calculate(double x, char opera, double y)
{
    switch (opera) {
    case '+':
        return x + y;
    case '-':
        return x - y;
    case '*':
        return x * y;
    case '/':
        return x / y;
    default:
        return 0.0;
    }
   
}
