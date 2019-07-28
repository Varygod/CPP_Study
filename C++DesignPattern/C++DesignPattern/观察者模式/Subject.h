/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: Subject.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: Subject�������Ŀ�꣩ �������������۲��߹۲�ͬһ��Ŀ�ꡣ�ṩע���ɾ���۲��߶���Ľӿڡ�
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
	void Attach(Observer *pObserver);			//���ӹ۲��߶���
	void Detach(Observer *pObserver);			//ɾ���۲��߶���
	void Notify();								//֪ͨ�۲��߶���ı�״̬
	virtual void SetState(STATE nState) = 0;	//����״̬
	virtual STATE GetState() = 0;			    //��ȡ״̬
private:
	std::list<Observer*> m_ListObserver;		//����Observerָ�������
};

