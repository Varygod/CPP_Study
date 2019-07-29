
#include "Component.h"
#include <iostream>
#include "Decorator.h"
#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorC.h"
#include "ConcreteDecoratorB.h"
using namespace std;
int main(int argc, char* argv[])
{
	/********** ºÚ¿§·È **********/
	IBeverages *pBlackCoffee = new BlackCoffee;
	cout << pBlackCoffee->Name() <<"¡¾ºÚ¿§·È¡¿"<< " : " << pBlackCoffee->Price() << endl;

	// ºÚ¿§·È + ÄÌÓÍ
	CondimentDecorator *pCream = new Cream(pBlackCoffee);
	cout << pCream->Name() << "¡¾ºÚ¿§·È + ÄÌÓÍ¡¿"<<" : " << pCream->Price() << endl;

	// ºÚ¿§·È + Ä¦¿¨
	CondimentDecorator *pMocha = new MoCha(pBlackCoffee);
	cout << pMocha->Name() << "¡¾ºÚ¿§·È + Ä¦¿¨¡¿"<<" : " << pMocha->Price() << endl;

	// ºÚ¿§·È + ÌÇ½¬
	CondimentDecorator *pSyrup = new Syrup(pBlackCoffee);
	cout << pSyrup->Name() << "¡¾ºÚ¿§·È + ÌÇ½¬¡¿"<<" : " << pSyrup->Price() << endl;

	/********** Éî¶ÈºæÅà¿§·È¶¹ **********/
	IBeverages *pDarkRoast = new DarkRoast();
	cout << pDarkRoast->Name() <<"¡¾Éî¶ÈºæÅà¿§·È¶¹¡¿" <<" : " << pDarkRoast->Price() << endl;

	// Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ
	CondimentDecorator *pCreamDR = new Cream(pDarkRoast);
	cout << pCreamDR->Name() <<" ¡¾Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ¡¿" <<" : " << pCreamDR->Price() << endl;

	// Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨
	CondimentDecorator *pCreamMocha = new MoCha(pCreamDR);
	cout << pCreamMocha->Name() << "¡¾Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨¡¿"<<" : " << pCreamMocha->Price() << endl;

	// Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨ + ÌÇ½¬
	CondimentDecorator *pCreamMochaSyrup = new Syrup(pCreamMocha);
	cout << pCreamMochaSyrup->Name() <<"¡¾Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨ + ÌÇ½¬¡¿"<< " : " << pCreamMochaSyrup->Price() << endl;

	getchar();
}

/**
BlackCoffee¡¾ºÚ¿§·È¡¿ : 30.5
BlackCoffeeCream¡¾ºÚ¿§·È + ÄÌÓÍ¡¿ : 35.5
BlackCoffeeMoCha¡¾ºÚ¿§·È + Ä¦¿¨¡¿ : 34.5
BlackCoffeeSyrup¡¾ºÚ¿§·È + ÌÇ½¬¡¿ : 32.5
DarkRoast¡¾Éî¶ÈºæÅà¿§·È¶¹¡¿ : 28.5
DarkRoastCream ¡¾Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ¡¿ : 33.5
DarkRoastCreamMoCha¡¾Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨¡¿ : 37.5
DarkRoastCreamMoChaSyrup¡¾Éî¶ÈºæÅà¿§·È¶¹ + ÄÌÓÍ + Ä¦¿¨ + ÌÇ½¬¡¿ : 39.5
 */