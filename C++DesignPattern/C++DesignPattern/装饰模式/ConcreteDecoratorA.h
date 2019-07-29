/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: ConcreteDecoratorA.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description:  向组件添加职责。
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "Decorator.h"
class ConcreteDecoratorA :public Decorator
{
public:
	ConcreteDecoratorA(Component * pComponent);
	~ConcreteDecoratorA();
	void Operation();
};

