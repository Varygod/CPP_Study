#pragma once
#include "Decorator.h"
/********** ��������ϣ���ζƷ��**********/

// Ħ��
class MoCha :public CondimentDecorator
{
public:
	MoCha(IBeverages *pIBeverages);
	~MoCha();
	string Name();
	double Price();
};

