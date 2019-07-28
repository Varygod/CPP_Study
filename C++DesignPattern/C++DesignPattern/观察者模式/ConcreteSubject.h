/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: ConcreteSubject.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: 将有关状态存入各ConcreteObserver对象。 当它的状态发生改变时, 向它的各个观察者发出通知
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "Subject.h"
class ConcreteSubject :	public Subject
{
public:
	ConcreteSubject();
	virtual ~ConcreteSubject();
	virtual void SetState(STATE nState) ;	  //设置状态
	virtual STATE GetState() ;				  //获取状态
private:
	STATE m_nSubjectState; // 模拟保存SubjectOb状态的变量
};

