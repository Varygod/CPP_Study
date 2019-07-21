/*
*  Copyright (C), 2012-2019, CS&S. Co., Ltd.
*  @file        testVirtualFunc5.cpp
*  @author      pengsh(pshenghua2006@163.com)
*  @date        2019/07/21 23:14:28
*  @brief       brief
*  @note        нч
*  @version
*    - vVerNO    2019/07/21 23:14:28   pengsh    VerNoBrief
*/

#include <iostream>
using namespace std;
class human
{
public:
	~human()
	{
		cout << "human over" << endl;
	}
	void Disp()
	{
		cout << "human disp" << endl;
	}
protected:
private:
};


class man :public human
{
public:
	~man()
	{
		cout << "man over" << endl;
	}
	void Disp()
	{
		cout << "man disp" << endl;
	}
protected:
private:
};
int  main(int argc, char* argv[])
{
	human *p = new man;
	p->Disp();
	delete p;
	getchar();
}

/*
human disp
human over
 */