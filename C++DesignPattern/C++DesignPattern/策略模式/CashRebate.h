/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: CashRebate.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/27
// Description: ’€ø€ ’“¯
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
class CashRebate :
	public CashSuper
{
private:
	double moneyRebate = 0.0;
public:
	CashRebate(string moneyRebate);
	~CashRebate();
	double acceptCash(double money);
};

