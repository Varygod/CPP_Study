#pragma once
#include "Decorator.h"
/********** ��������ϣ���ζƷ��**********/

// �ǽ�
class Syrup :public CondimentDecorator
{
public:
	Syrup(IBeverages *pIBeverages);
	~Syrup();
	string Name();
	double Price();
};

