#pragma once
#include "ChangeHandler.h"

class RedEyeChangeHandler : public ChangeHandler
{
public:
	RedEyeChangeHandler(int hid);
	virtual string ChangeRequest(Mode mode, string picture);

};
