#pragma once
#include "Decorator.h"
/********** ��������ϣ���ζƷ��**********/

// ����
class Cream :public CondimentDecorator
{
public:
	Cream(IBeverages *pIBeverages);
	~Cream();

	string Name();
	double Price();
};

