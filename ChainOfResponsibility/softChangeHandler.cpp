#include "stdafx.h"
#include "SoftChangeHandler.h"

SoftChangeHandler::SoftChangeHandler(int hid) :ChangeHandler(hid)
{

}

string SoftChangeHandler::ChangeRequest(Mode mode, string picture)
{
	if (IncludeMode(mode))
	{
		int index = -1;

		while ((index = picture.find("ปþวม", index + 1)) != -1)
		{
			picture.replace(index, strlen("ปþวม"), "ผาวมฦฎ");
		}
	}

	ChangeHandler *successor = GetSuccessor();

	if (successor != 0)
	{
		picture = successor->ChangeRequest(mode, picture);
	}

	return picture;
}