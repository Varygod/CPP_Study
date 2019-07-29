#pragma once
#include "Decorator.h"
/********** 具体的饮料（调味品）**********/

// 奶油
class Cream :public CondimentDecorator
{
public:
	Cream(IBeverages *pIBeverages);
	~Cream();

	string Name();
	double Price();
};

