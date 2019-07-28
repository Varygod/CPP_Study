/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: ConcreteObserver.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: ConcreteObserver为具体的观察者，实现了抽象观察者所要求的更新接口，以便使本身的状态与主题的状态相协调
— 维护一个指向ConcreteSubject对象的引用。
— 存储有关状态，这些状态应与目标的状态保持一致。
— 实现Observer的更新接口以使自身状态与目标的状态保持一致。
// Others:
// History:
// <author> pengsh 
// <time> 2019/07/29
// <version> 1.0 
// <desc> build this moudle 
*************************************************/
#pragma once
#include "Observer.h"
#include <string>
#include "Subject.h"
using namespace std;
class ConcreteObserver: public Observer
{
public:
	ConcreteObserver(string name);
	virtual ~ConcreteObserver();
	virtual void Update(Subject * sub);
private:
	string m_objName;
	int m_observerState;
};

