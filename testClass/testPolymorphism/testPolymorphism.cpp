
#include <iostream>
using namespace  std;

class	A
{
public:
	A()
	{
		
	}
	virtual void foo()
	{
		cout << "This is A" << endl;
	}
protected:
private:
};


class B: public A
{
public:
	B()
	{
		
	}
	 void foo()
	{
		cout << "This is B" << endl;
	}
protected:
private:
};

void main()
{
	A *a = new B;
	a->foo();
	getchar();
}
/************************************************************************/
/* ��̬demo             C++��Ҫ��ͨ���麯��ʵ�ֶ�̬                       */
/*�����This is B														*/
/************************************************************************/