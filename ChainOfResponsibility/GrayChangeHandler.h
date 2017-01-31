#pragma once
#include "ChangeHandler.h"

class GrayChangeHandler : public ChangeHandler
{
public:
	GrayChangeHandler(int hid);
	virtual string ChangeRequest(Mode mode, string picture);

};
