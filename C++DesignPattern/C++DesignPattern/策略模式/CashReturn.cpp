#include "CashReturn.h"
CashReturn::CashReturn(string moneyCondition, string moneyReturn)
{
	this->moneyCondition = atof(moneyCondition.c_str());
	this->moneyReturn = atof(moneyReturn.c_str());
}


CashReturn::~CashReturn()
{
}


double CashReturn::acceptCash(double money)
{
	
	double result = money;
	if (money >= moneyCondition)
		result = money - floor(money / moneyCondition) * moneyReturn;

	return result;
}
