
 #include <iostream>

 class A{
 public:
	 void doX(){
		 std::cout << "A function of X";
	 }

 private:
	 int a;
 };

 class B : public A{
 public:
	 virtual void doX(){
		 std::cout << "B function of X";
	 }
 };


 class Base
 {
 public:
	 void fun()
	 {
	 }
 private:
	 int a;
	 static int b; //��������
 };

 //���ⶨ��
 int Base::b = 0;

 class Derive : public Base
 {
 public:
	 void test()
	 {
	 }
	 int c;

 private:
	 int d;
 };

 int main()
 {
	 return 0;
 }
 /*
 �����ʽ���£�
 cl �Cd1reportSingleClassLayout[classname] xxx.cpp

 classname Ϊ��������d1reportSingleClassLayout[classname] ֮��û�пո�
 xxx.cppΪԴ�����ļ���
 cl.exeΪVSԭ���Ĺ���

 */