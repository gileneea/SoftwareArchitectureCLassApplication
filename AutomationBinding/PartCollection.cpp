#include "AutomationAPI_PartCollection.h"
#include "AutomationAPI_Part.h"
#include "AutomationAPI_PartBuilder.h"
#include <iostream>
#include "..\AppLibrary\Journaling_PartCollection.h"
#include "..\AppLibrary\Part.h"
#include "..\AppLibrary\PartBuilder.h"
#include "..\AppPartOps\PartOps.h"

AutomationAPI::PartCollection::PartCollection(int guid) : m_guid(guid)
{

}

AutomationAPI::PartCollection::~PartCollection()
{

}

AutomationAPI::PartBuilder* AutomationAPI::PartCollection::CreatePartBuilder(AutomationAPI::Part* part)
{
	Application::PartBuilder* partBuilder =
		Journaling_PartCollection_CreatePartBuilder(part, nullptr);

	return nullptr;

}
