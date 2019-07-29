#include "Decorator.h"



Decorator::Decorator(Component *_Component)
{
	pComponent = _Component;
}


Decorator::~Decorator()
{
}

void Decorator::Operation()
{
	pComponent->Operation();
}
