#include "CashRebate.h"



CashRebate::CashRebate(string moneyRebate)
{
	//this.moneyRebate = double.Parse(moneyRebate);
	this->moneyRebate = atof(moneyRebate.c_str());
}


CashRebate::~CashRebate()
{
}

double CashRebate::acceptCash(double money)
{
	return money * moneyRebate;
}
