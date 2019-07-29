#include "ConcreteDecoratorA.h"
#include <iostream>
using namespace std;

ConcreteDecoratorA::ConcreteDecoratorA(Component * pComponent):Decorator(pComponent)
{
}


ConcreteDecoratorA::~ConcreteDecoratorA()
{
}

void ConcreteDecoratorA::Operation()
{
	cout << "DecoratorA" << endl;
}
