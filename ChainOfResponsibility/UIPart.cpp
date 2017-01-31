#include "stdafx.h"
#include "UIPart.h"

UIPart::UIPart(void)
{
	head = tail = 0;
}

UIPart::~UIPart(void)
{
	delete head;
	delete tail;
}

void UIPart::AddChangeHandler(ChangeHandler *handler)
{
	if (head)
	{
		tail->SetSuccessor(handler);
		tail = handler;
	}
	else
	{
		head = tail = handler;
	}
}

string UIPart::ChangeRequest(Mode mode, string subject)
{
	if (head)
	{
		return head->ChangeRequest(mode, subject);

	}

	return subject;
}