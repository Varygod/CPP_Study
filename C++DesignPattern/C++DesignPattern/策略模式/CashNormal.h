
/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: CashNormal.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/27
// Description: 正常收银
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/27
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "CashSuper.h"
class CashNormal :
	public CashSuper
{
public:
	CashNormal();
	~CashNormal();
	double acceptCash(double money);

};

