
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
	 static int b; //类中声明
 };

 //类外定义
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
 命令格式如下：
 cl –d1reportSingleClassLayout[classname] xxx.cpp

 classname 为类名，－d1reportSingleClassLayout[classname] 之间没有空格。
 xxx.cpp为源代码文件名
 cl.exe为VS原生的工具

 */