#pragma once
#include "Component.h"

/********** ��������ϣ����ȣ�**********/

// �ڿ��ȣ����ڻ�Ͽ���
class BlackCoffee :	public IBeverages
{
public:
	BlackCoffee();
	~BlackCoffee();

	 string Name();
	 double Price();
};


// ��Ⱥ��࿧�ȶ�
class DarkRoast : public IBeverages
{
public:
	DarkRoast();
	~DarkRoast();
	string Name();
	double Price();
};

