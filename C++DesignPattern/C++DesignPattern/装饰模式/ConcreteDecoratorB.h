/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: ConcreteDecoratorB.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: ��������ְ��
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "Decorator.h"
class ConcreteDecoratorB :public Decorator
{
public:
	ConcreteDecoratorB(Component * pComponent);
	~ConcreteDecoratorB();
	void Operation();
};

