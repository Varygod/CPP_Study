#include <iostream>
using namespace std;
class A
{
public:
	virtual void func()
	{
		cout << "A:func()" << endl;
	}
	virtual void funcA()
	{
		cout << "A:funcA()" << endl;
	}

protected:
private:
};

class B:public A
{
public:
	virtual void func()
	{
		cout << "B:func()" << endl;
	}
	virtual void funcB()
	{
		cout << "B:funcB()" << endl;
	}
protected:
private:
};

class C:public A
{
public:
	virtual void funcC1()
	{
		cout << "C:funcC1()" << endl;
	}
	virtual void funcC()
	{
		cout << "C:funcC()" << endl;
	}
protected:
private:
};

typedef void(*FUNC)(void);   //定义一个函数指针FUNC

void main()
{
	A a;
	B b;
	C c;
	cout << "class A:虚函数表" << endl;
	cout << "虚函数表首地址：" << (int*)(&a) << endl;
	cout << "虚函数表 — 第一个虚函数入口地址：" << (int*)*(int*)(&a) << endl;
	cout << "虚函数表 — 第一个虚函数入口地址：" << (int*)*(int*)(&a) + 0 << endl;
	cout << "虚函数表 — 第二个虚函数入口地址：" << (int*)*(int*)(&a) + 1 << endl;
	FUNC pFunA1, pFunA2 = NULL;
	pFunA1 = (FUNC)*(int*)*(int*)(&a);
	pFunA2 = (FUNC)*((int*)*(int*)(&a) + 1);
	pFunA1();
	pFunA2();
	cout << "-------------------------------------" << endl;


	cout << "class B:虚函数表" << endl;
	cout << "虚函数表首地址：" << (int*)(&b) << endl;
	cout << "虚函数表 — 第一个虚函数入口地址：" << (int*)*(int*)(&b) << endl;
	cout << "虚函数表 — 第一个虚函数入口地址：" << (int*)*(int*)(&b) + 0 << endl;
	cout << "虚函数表 — 第二个虚函数入口地址：" << (int*)*(int*)(&b) + 1 << endl;
	cout << "虚函数表 — 第三个虚函数入口地址：" << (int*)*(int*)(&b) + 2 << endl;
//	cout << "虚函数表 — 第四个虚函数入口地址：" << (int*)*(int*)(&b) + 3 << endl;

	
	FUNC pFunB1, pFunB2, pFunB3, pFunB4 = NULL;
	pFunB1 = (FUNC)*(int*)*(int*)(&b);
	pFunB2 = (FUNC)*((int*)*(int*)(&b) + 1);
	pFunB3 = (FUNC)*((int*)*(int*)(&b) + 2);
	pFunB4 = (FUNC)*((int*)*(int*)(&b) + 3);
	pFunB1();
	pFunB2();
	pFunB3();
	//pFunB4();
	cout << "-------------------------------------" << endl;


	cout << "class C:虚函数表" << endl;
	cout << "虚函数表首地址：" << (int*)(&c) << endl;
	cout << "虚函数表 — 第一个虚函数入口地址：" << (int*)*(int*)(&c) << endl;
	cout << "虚函数表 — 第一个虚函数入口地址：" << (int*)*(int*)(&c) + 0 << endl;
	cout << "虚函数表 — 第二个虚函数入口地址：" << (int*)*(int*)(&c) + 1 << endl;
	cout << "虚函数表 — 第三个虚函数入口地址：" << (int*)*(int*)(&c) + 2 << endl;
	cout << "虚函数表 — 第四个虚函数入口地址：" << (int*)*(int*)(&c) + 3 << endl;
	//cout << "虚函数表 — 第二个虚函数入口地址：" << (int*)(&a) + 1 << endl;

	FUNC pFunC1, pFunC2, pFunC3, pFunC4 = NULL;
	pFunC1 = (FUNC)*(int*)*(int*)(&c);
	pFunC2 = (FUNC)*((int*)*(int*)(&c) + 1);
	pFunC3 = (FUNC)*((int*)*(int*)(&c) + 2);
	pFunC4 = (FUNC)*((int*)*(int*)(&c) + 3);
	pFunC1();
	pFunC2();
	pFunC3();
	pFunC4();
	cout << "-------------------------------------" << endl;
	getchar();
}