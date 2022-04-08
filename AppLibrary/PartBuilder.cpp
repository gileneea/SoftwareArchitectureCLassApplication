#include "PartBuilder.h"
#include <iostream>

Application::PartBuilder::PartBuilder(Application::Part* part, int guid) : GuidObject(guid), m_part(part)
{
	if (m_part == nullptr) {
		std::cout << "Part is creation mode" << std::endl;
	} else {
		std::cout << "Part is edit/query mode" << std::endl;
	}
}



JournalPartBuilderTypes Application::PartBuilder::GetType()
{
	return m_journalPartBuilderTypes;
}
void Application::PartBuilder::SetType(JournalPartBuilderTypes type)
{
	m_journalPartBuilderTypes = type;
}
