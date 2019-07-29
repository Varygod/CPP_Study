#include "Decorator.h"



CondimentDecorator::CondimentDecorator(IBeverages *_IBeverages):m_pIBeverages(_IBeverages)
{
}


CondimentDecorator::~CondimentDecorator()
{
}

string CondimentDecorator::Name()
{
	return m_pIBeverages->Name();
}
double CondimentDecorator::Price()
{
	return m_pIBeverages->Price();
}
