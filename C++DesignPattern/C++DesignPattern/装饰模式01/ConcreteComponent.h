#pragma once
#include "Component.h"

/********** 具体的饮料（咖啡）**********/

// 黑咖啡，属于混合咖啡
class BlackCoffee :	public IBeverages
{
public:
	BlackCoffee();
	~BlackCoffee();

	 string Name();
	 double Price();
};


// 深度烘培咖啡豆
class DarkRoast : public IBeverages
{
public:
	DarkRoast();
	~DarkRoast();
	string Name();
	double Price();
};

