/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: CashContext.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/27
// Description:  收费策略Context
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

	CashContext(CashSuper *cashsuper);  //设置策略行为，参数为具体的现金收费子类（正常，打折或返利）
	~CashContext();
	double GetResult(double money);     //得到现金促销计算结果（利用了多态机制，不同的策略行为导致不同的结果）
private:
	CashSuper *_cs;    //声明一个现金收费父类对象
};

