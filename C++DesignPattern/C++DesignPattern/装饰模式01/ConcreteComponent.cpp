#include "ConcreteComponent.h"
BlackCoffee::BlackCoffee()
{
}


BlackCoffee::~BlackCoffee()
{
}


string BlackCoffee::Name()
{
	return "BlackCoffee";
}
double BlackCoffee::Price()
{
	return 30.50;
}

DarkRoast::DarkRoast()
{
	
}
DarkRoast::~DarkRoast()
{
	
}
string DarkRoast::Name()
{
	return "DarkRoast";
}
double DarkRoast::Price()
{
	return 28.50;
}