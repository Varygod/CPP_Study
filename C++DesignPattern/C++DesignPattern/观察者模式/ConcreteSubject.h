/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: ConcreteSubject.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/29
// Description: ���й�״̬�����ConcreteObserver���� ������״̬�����ı�ʱ, �����ĸ����۲��߷���֪ͨ
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
	virtual void SetState(STATE nState) ;	  //����״̬
	virtual STATE GetState() ;				  //��ȡ״̬
private:
	STATE m_nSubjectState; // ģ�Ᵽ��SubjectOb״̬�ı���
};

