#pragma once
#include "Decorator.h"
/********** 具体的饮料（调味品）**********/

// 糖浆
class Syrup :public CondimentDecorator
{
public:
	Syrup(IBeverages *pIBeverages);
	~Syrup();
	string Name();
	double Price();
};

