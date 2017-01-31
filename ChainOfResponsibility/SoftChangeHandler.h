#pragma once
#include "ChangeHandler.h"

class SoftChangeHandler : public ChangeHandler
{
public:
	SoftChangeHandler(int hid);
	virtual string ChangeRequest(Mode mode, string picture);
};
