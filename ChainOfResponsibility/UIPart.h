#pragma once
#include "GrayChangeHandler.h"
#include "SoftChangeHandler.h"
#include "RedEyeChangeHandler.h"

class UIPart
{
private:
	ChangeHandler *head;
	ChangeHandler *tail;
public:
	UIPart(void);
	~UIPart(void);
	void AddChangeHandler(ChangeHandler *handler);
	string ChangeRequest(Mode mode, string subject);
};
