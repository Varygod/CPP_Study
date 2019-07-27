/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: CashContext.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/27
// Description:  �շѲ���Context
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/27
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "CashSuper.h"

class CashContext
{
public:

	CashContext(CashSuper *cashsuper);  //���ò�����Ϊ������Ϊ������ֽ��շ����ࣨ���������ۻ�����
	~CashContext();
	double GetResult(double money);     //�õ��ֽ�����������������˶�̬���ƣ���ͬ�Ĳ�����Ϊ���²�ͬ�Ľ����
private:
	CashSuper *_cs;    //����һ���ֽ��շѸ������
};

