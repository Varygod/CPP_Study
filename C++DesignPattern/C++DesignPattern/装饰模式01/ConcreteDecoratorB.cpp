#include "ConcreteDecoratorB.h"



MoCha::MoCha(IBeverages *pIBeverages) : CondimentDecorator(pIBeverages)
{
}


MoCha::~MoCha()
{
}

string MoCha::Name()
{
	return m_pIBeverages->Name() + "MoCha";
}
double MoCha::Price()
{
	return m_pIBeverages->Price() + 4.0;
}
