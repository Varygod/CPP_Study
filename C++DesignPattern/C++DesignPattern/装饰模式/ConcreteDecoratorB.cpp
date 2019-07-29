#include "ConcreteDecoratorB.h"
#include <iostream>
using namespace std;

ConcreteDecoratorB::ConcreteDecoratorB(Component * pComponent):Decorator(pComponent)
{

}


ConcreteDecoratorB::~ConcreteDecoratorB()
{
}

void ConcreteDecoratorB::Operation()
{
	cout << "DecoratorB" << endl;
}
