#include "ConcreteObserver.h"
#include <iostream>

ConcreteObserver::ConcreteObserver(string name)
{
	m_objName = name;
}


ConcreteObserver::~ConcreteObserver()
{
}



void ConcreteObserver::Update(Subject * sub)
{
	if (NULL == sub)
		return;
	m_observerState = sub->GetState();
	cout << "update oberserver[" << m_objName << "] state:" << m_observerState << endl;
}