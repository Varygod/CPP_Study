/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: Decorator.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: Decoratorά��һ��ָ��Component�����ָ�룬������һ����Component�ӿ�һ�µĽӿ�
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "Component.h"
class Decorator:public Component
{
public:
	Decorator(Component *_Component);
	~Decorator();
	virtual void Operation();
private:
	Component *pComponent;
};

