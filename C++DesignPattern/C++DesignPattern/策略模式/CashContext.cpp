#include "CashContext.h"



CashContext::CashContext(CashSuper *cashsuper)
{
	this->_cs = cashsuper;
}


CashContext::~CashContext()
{
}

double CashContext::GetResult(double money)
{
	return _cs->acceptCash(money);
}
