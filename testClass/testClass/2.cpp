class A
{
public:
	A(int a) :x(a){}

	int x;
};

class B : virtual public A
{
public:
	B(int x) :A(x){}
};

class C : virtual public A
{
public:
	C(int x) : A(x){}
};

class D :public B, public C
{
public:
	//��������������������Ĺ��캯������
	D(int a, int b, int c) : B(b), C(c), A(a){}
};

int main()
{
	return 0;
}