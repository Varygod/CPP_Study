/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: Subject.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: Subject（主题或目标） 可以有任意多个观察者观察同一个目标。提供注册和删除观察者对象的接口。
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include <list>
class Observer;
typedef  int  STATE;
class Subject
{
public:
	Subject();
	virtual ~Subject();
	void Attach(Observer *pObserver);			//增加观察者对象
	void Detach(Observer *pObserver);			//删除观察者对象
	void Notify();								//通知观察者对象改变状态
	virtual void SetState(STATE nState) = 0;	//设置状态
	virtual STATE GetState() = 0;			    //获取状态
private:
	std::list<Observer*> m_ListObserver;		//保存Observer指针的链表
};

