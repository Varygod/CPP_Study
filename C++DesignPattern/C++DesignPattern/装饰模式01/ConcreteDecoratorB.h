#pragma once
#include "Decorator.h"
/********** 具体的饮料（调味品）**********/

// 摩卡
class MoCha :public CondimentDecorator
{
public:
	MoCha(IBeverages *pIBeverages);
	~MoCha();
	string Name();
	double Price();
};

