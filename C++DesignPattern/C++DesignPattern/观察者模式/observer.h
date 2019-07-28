/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: observer.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/28
// Description: 抽象观察者类，为所有的具体观察者定义了统一的更新接口，得到主题的通知时更新自己
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/28
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
class Subject;
class Observer
{
public:
	Observer();
	virtual ~Observer();
	virtual void Update(Subject* pSubject) = 0;
};

