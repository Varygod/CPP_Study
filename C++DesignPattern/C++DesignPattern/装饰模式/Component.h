/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: Component.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: Component����һ������ӿڣ����Ը���Щ����̬�����ְ��
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
class Component
{
public:
	Component();
	virtual ~Component();

	virtual void Operation() = 0;
};

