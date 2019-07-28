#include "Subject.h"
#include "Observer.h"

Subject::Subject()
{
}

Subject::~Subject()
{
}

void Subject::Attach(Observer *pObserver)
{
	m_ListObserver.push_back(pObserver);
}
void Subject::Detach(Observer *pObserver)
{
	std::list<Observer *>::iterator it;
	for (it = m_ListObserver.begin(); it != m_ListObserver.end(); )
	{
		if (*it == pObserver)
		{
			 m_ListObserver.erase(it++); //移除元素的时候，it++防止迭代器失效，引起崩溃
			 //return;  删除单个元素，直接退出也可以
		}
		else
		{
			it++;
		}
	}
}
void Subject::Notify()
{
	std::list<Observer *>::iterator it;
	for (it = m_ListObserver.begin(); it != m_ListObserver.end(); it++)
	{
		(*it)->Update(this);
	}
}

