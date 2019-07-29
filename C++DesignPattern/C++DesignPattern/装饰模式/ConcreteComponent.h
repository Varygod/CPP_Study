/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: ConcreteComponent.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: ConcreteComponent定义一个对象，可以给这个对象添加一些职责
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "Component.h"
class ConcreteComponent :
	public Component
{
public:
	ConcreteComponent();
	virtual ~ConcreteComponent();
	void Operation();
};

