#include "ConcreteSubject.h"

ConcreteSubject::ConcreteSubject()
{
}


ConcreteSubject::~ConcreteSubject()
{
}

void ConcreteSubject::SetState(STATE nState)
{
	 m_nSubjectState = nState;
}

STATE ConcreteSubject::GetState()
{
	return m_nSubjectState;
}
