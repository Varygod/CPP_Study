/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: CashSuper.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/27
// Description: 收银虚基类
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/27
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
class CashSuper
{
public:
	CashSuper();
	virtual double acceptCash(double money) = 0;
	virtual ~CashSuper();
};

