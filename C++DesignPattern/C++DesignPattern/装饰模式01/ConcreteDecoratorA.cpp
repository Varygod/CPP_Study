#include "ConcreteDecoratorA.h"



Cream::Cream(IBeverages *pIBeverages):CondimentDecorator(pIBeverages)
{
}


Cream::~Cream()
{
}


string Cream::Name()
{
	return m_pIBeverages->Name() + "Cream";
}
double Cream::Price()
{
	return m_pIBeverages->Price() + 5.0;
}