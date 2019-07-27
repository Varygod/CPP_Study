/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: CashReturn.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/27
// Description: ÂúXX¼õXXÊÕÒø
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/27
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "CashSuper.h"
#include <string>
using namespace  std;
class CashReturn :
	public CashSuper
{
private:
	 double moneyCondition = 0.0;
	 double moneyReturn = 0.0;
public:
	CashReturn(string moneyCondition, string moneyReturn);
	~CashReturn();
	double acceptCash(double money);
};

