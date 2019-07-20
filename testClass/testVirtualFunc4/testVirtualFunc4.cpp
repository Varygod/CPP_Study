/*
*  Copyright (C), 2012-2019, CS&S. Co., Ltd.
*  @file        testVirtualFunc4.cpp
*  @author      pengsh(pshenghua2006@163.com)
*  @date        2019/07/20 16:59:31
*  @brief       brief
*  @note        нч
*  @version
*    - vVerNO    2019/07/20 16:59:31   pengsh    VerNoBrief
*/

#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		f();
	}
	virtual void f()
	{
		cout << "base" << endl;
	}
};

class Derived :public Base
{
public:
	Derived()
	{

	}
	void f()
	{
		cout << "Derived" << endl;
	}
};
int main() {
	Base *p = new Derived;
	p->f();
	getchar();
	return 0;
}

/*
base
Derived
 */

