#ifndef CALC_APP_H
#define CALC_APP_H
#include "calc.h"

class CalculatorApp
{
	private: 
		const double INITIAL_VALUE = 0;
		Calculator calc;
	public:
		CalculatorApp():calc{INITIAL_VALUE}
		{
		}

		void setValue(double newValue)
		{
			calc.setValue(newValue);
		}

		double computeResult()
		{
			return calc.cos2();
		}

};
#endif 
