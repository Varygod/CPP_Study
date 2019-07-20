/*
*  Copyright (C), 2012-2019, CS&S. Co., Ltd.
*  @file        testVirtualFunc3.cpp
*  @author      pengsh(pshenghua2006@163.com)
*  @date        2019/07/20 0:06:17
*  @brief       brief
*  @note        无
*  @version
*    - vVerNO    2019/07/20 0:06:17   pengsh    VerNoBrief
*/
#include <iostream>
using namespace  std;


class CPerson
{
public:
	virtual ~CPerson();
protected:
	char *m_lpszName;
	char *m_lpszSex;
private:
};


class CStudent:public CPerson
{
public:

	~CStudent();
protected:
	int m_iNumjber;

private:
};

CPerson::~CPerson()
{
	cout << "~CPerson!" << endl;
}

CStudent::~CStudent()
{
	cout << "~CStudent!" << endl;
}


void  main(int argc, char* argv[])
{
	CPerson *poCPerson = new CStudent;
	if (NULL==poCPerson)
	{
		exit(0);
	}

	delete poCPerson;
	cout << "CStudent对象已经析构完成" << endl;
	CStudent oCStudent;
	getchar();
}


/*   
~CStudent!
~CPerson!
CStudent对象已经析构完成   
*/
