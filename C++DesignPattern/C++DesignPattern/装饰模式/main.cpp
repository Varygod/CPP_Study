
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
#include <cstdio>

int  main(int argc, char* argv[])
{
	ConcreteComponent *cc = new ConcreteComponent;
	//��̬������Ϊ 
	//ConcreteDecoratorA *cda = new ConcreteDecoratorA(cc);
	////������̬������Ϊ 
	//ConcreteDecoratorB *cdb = new ConcreteDecoratorB(cda);
	//Component *component = cdb;
	Component *pA = new ConcreteDecoratorA(cc);
	pA->Operation();
	Component *pB = new ConcreteDecoratorB(pA);
	pB->Operation();

	delete cc;
	//delete cda;
	//delete cdb;
	getchar();
}

/****************************���н��*************************************/
/* DecoratorA
   DecoratorB                                                           */
/************************************************************************/
