
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
	/********** �ڿ��� **********/
	IBeverages *pBlackCoffee = new BlackCoffee;
	cout << pBlackCoffee->Name() <<"���ڿ��ȡ�"<< " : " << pBlackCoffee->Price() << endl;

	// �ڿ��� + ����
	CondimentDecorator *pCream = new Cream(pBlackCoffee);
	cout << pCream->Name() << "���ڿ��� + ���͡�"<<" : " << pCream->Price() << endl;

	// �ڿ��� + Ħ��
	CondimentDecorator *pMocha = new MoCha(pBlackCoffee);
	cout << pMocha->Name() << "���ڿ��� + Ħ����"<<" : " << pMocha->Price() << endl;

	// �ڿ��� + �ǽ�
	CondimentDecorator *pSyrup = new Syrup(pBlackCoffee);
	cout << pSyrup->Name() << "���ڿ��� + �ǽ���"<<" : " << pSyrup->Price() << endl;

	/********** ��Ⱥ��࿧�ȶ� **********/
	IBeverages *pDarkRoast = new DarkRoast();
	cout << pDarkRoast->Name() <<"����Ⱥ��࿧�ȶ���" <<" : " << pDarkRoast->Price() << endl;

	// ��Ⱥ��࿧�ȶ� + ����
	CondimentDecorator *pCreamDR = new Cream(pDarkRoast);
	cout << pCreamDR->Name() <<" ����Ⱥ��࿧�ȶ� + ���͡�" <<" : " << pCreamDR->Price() << endl;

	// ��Ⱥ��࿧�ȶ� + ���� + Ħ��
	CondimentDecorator *pCreamMocha = new MoCha(pCreamDR);
	cout << pCreamMocha->Name() << "����Ⱥ��࿧�ȶ� + ���� + Ħ����"<<" : " << pCreamMocha->Price() << endl;

	// ��Ⱥ��࿧�ȶ� + ���� + Ħ�� + �ǽ�
	CondimentDecorator *pCreamMochaSyrup = new Syrup(pCreamMocha);
	cout << pCreamMochaSyrup->Name() <<"����Ⱥ��࿧�ȶ� + ���� + Ħ�� + �ǽ���"<< " : " << pCreamMochaSyrup->Price() << endl;

	getchar();
}

/**
BlackCoffee���ڿ��ȡ� : 30.5
BlackCoffeeCream���ڿ��� + ���͡� : 35.5
BlackCoffeeMoCha���ڿ��� + Ħ���� : 34.5
BlackCoffeeSyrup���ڿ��� + �ǽ��� : 32.5
DarkRoast����Ⱥ��࿧�ȶ��� : 28.5
DarkRoastCream ����Ⱥ��࿧�ȶ� + ���͡� : 33.5
DarkRoastCreamMoCha����Ⱥ��࿧�ȶ� + ���� + Ħ���� : 37.5
DarkRoastCreamMoChaSyrup����Ⱥ��࿧�ȶ� + ���� + Ħ�� + �ǽ��� : 39.5
 */