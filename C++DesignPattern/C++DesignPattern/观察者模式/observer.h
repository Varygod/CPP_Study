/*************************************************
// Copyright (C), 2012-2019, CS&S. Co., Ltd.
// File name: observer.h
// Author: pengsh 
// Version: 1.0 
// Date: 2019/07/28
// Description: ����۲����࣬Ϊ���еľ���۲��߶�����ͳһ�ĸ��½ӿڣ��õ������֪ͨʱ�����Լ�
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

