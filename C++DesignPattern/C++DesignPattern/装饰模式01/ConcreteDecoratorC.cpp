#include "ConcreteDecoratorC.h"



Syrup::Syrup(IBeverages *pIBeverages):CondimentDecorator(pIBeverages)
{
}


Syrup::~Syrup()
{
}


string Syrup::Name()
{
	return m_pIBeverages->Name() + "Syrup";
}
double Syrup::Price()
{
	return m_pIBeverages->Price() + 2.0;
}