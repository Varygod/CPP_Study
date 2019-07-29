#pragma once
#include "Component.h"

// µ÷Î¶Æ·
class CondimentDecorator :	public IBeverages
{
public:
	CondimentDecorator(IBeverages *_IBeverages);
	virtual ~CondimentDecorator();
	string Name();
	double Price();
protected :
	IBeverages *m_pIBeverages;
};

