#include "Journaling_PartCollection.h"
#include "Part.h";
#include "PartBuilder.h";
#include "..\AppPartOps\PartOps.h"
#include "..\Journaling\Journaling.h"
#include "..\Journaling\JournalHelpers.h"

void Journaling_PartCollection_CreatePartBuilder(Application::PartFile* part, Application::Part* part)
{
	//If Journaling write the thing things
	if (IsJournaling())
	{
		JournalStartCall("CreateBlockBuilder", part);
		JournalInClassParam(part, "AutomationAPI::Block", "block");
	}

	if (IsJournaling())
	{
		JournalEndCall();
	}

}
