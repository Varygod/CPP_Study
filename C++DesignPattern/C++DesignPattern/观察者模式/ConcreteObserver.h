/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: ConcreteObserver.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: ConcreteObserverΪ����Ĺ۲��ߣ�ʵ���˳���۲�����Ҫ��ĸ��½ӿڣ��Ա�ʹ�����״̬�������״̬��Э��
�� ά��һ��ָ��ConcreteSubject��������á�
�� �洢�й�״̬����Щ״̬Ӧ��Ŀ���״̬����һ�¡�
�� ʵ��Observer�ĸ��½ӿ���ʹ����״̬��Ŀ���״̬����һ�¡�
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

