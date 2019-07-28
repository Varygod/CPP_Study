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
			 m_ListObserver.erase(it++); //�Ƴ�Ԫ�ص�ʱ��it++��ֹ������ʧЧ���������
			 //return;  ɾ������Ԫ�أ�ֱ���˳�Ҳ����
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

