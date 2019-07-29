
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
#include <cstdio>

int  main(int argc, char* argv[])
{
	ConcreteComponent *cc = new ConcreteComponent;
	//动态增加行为 
	//ConcreteDecoratorA *cda = new ConcreteDecoratorA(cc);
	////继续动态增加行为 
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

/****************************运行结果*************************************/
/* DecoratorA
   DecoratorB                                                           */
/************************************************************************/
