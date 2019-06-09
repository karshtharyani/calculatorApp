#ifndef CALC_H
#define CALC_H
#include <cmath>

class Calculator
{
	double value;
	public:
		/* compute the value of co2x
			cos2(x) = cos(x) * cos(x) - sin(x) * sin(x)
		*/
		double cos2() const
		{
			return (cos(value) * cos(value) - sin(value) * sin(value));
		}

		Calculator(double value):value{value}{}

		void setValue(double newValue)
		{
			value = newValue;
		}
};
#endif 
