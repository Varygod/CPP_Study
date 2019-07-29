#include <iostream>
#include "Subject.h"
#include "observer.h"
#include "ConcreteObserver.h"
#include "ConcreteSubject.h"

using namespace std;

int main(int argc, char *argv[])
{
	Subject * subject = new ConcreteSubject();
	Observer * objA = new ConcreteObserver("A");
	Observer * objB = new ConcreteObserver("B");
	Observer * objC = new ConcreteObserver("C");
	subject->Attach(objA);
	subject->Attach(objB);
	subject->Attach(objC);
	subject->SetState(1);
	subject->Notify();


	cout << "--------------------" << endl;
	subject->Detach(objC);
	subject->Detach(objB);

	subject->SetState(2);
	subject->Notify();

	delete subject;
	delete objA;
	delete objB;
	delete objC;
	getchar();
}