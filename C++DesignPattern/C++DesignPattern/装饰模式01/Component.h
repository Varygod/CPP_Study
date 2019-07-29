#pragma once
#include <string>
using namespace  std;
//饮料类（抽象类）接口
class IBeverages
{
public:
	IBeverages();
	~IBeverages();
	virtual string Name() = 0;
	virtual double Price() = 0;
};

