
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
/* 多态demo             C++主要是通过虚函数实现多态                       */
/*结果：This is B														*/
/************************************************************************/