#include "stdafx.h"
#include "GrayChangeHandler.h"

GrayChangeHandler::GrayChangeHandler(int hid) :ChangeHandler(hid)
{

}

string GrayChangeHandler::ChangeRequest(Mode mode, string picture)
{
	if (IncludeMode(mode))
	{
		int index = -1;

		while ((index = picture.find("Ä®¶ó", index + 1)) != -1)
		{
			picture.replace(index, strlen("Ä®¶ó"), "Èæ¹é");
		}
	}

	ChangeHandler *successor = GetSuccessor();

	if (successor != 0)
	{
		picture = successor->ChangeRequest(mode, picture);
	}

	return picture;
}