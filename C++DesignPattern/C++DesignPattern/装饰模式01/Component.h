#pragma once
#include <string>
using namespace  std;
//�����ࣨ�����ࣩ�ӿ�
class IBeverages
{
public:
	IBeverages();
	~IBeverages();
	virtual string Name() = 0;
	virtual double Price() = 0;
};

