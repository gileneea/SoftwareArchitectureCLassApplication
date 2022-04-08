#pragma once
#include "AppFeaturesOpsExports.h"
#include "..\Core\GuidObject.h"
#include <string.h>

enum JournalPartBuilderTypes
{
	JournalTypesSinglePart, /**Represents the part is a single part object. */
	JournalTypesMultiPart /**Represents the part is a multi part object. */
};

namespace Application
{
	class Part;

	class APPLIBRARY_API PartBuilder : public GuidObject
	{
	public:
		PartBuilder() = delete;
		PartBuilder(Application::Part* part, int guid);
		JournalPartBuilderTypes GetType();
		void SetType(JournalPartBuilderTypes type);

	private:
		Part* m_part;
		JournalPartBuilderTypes m_journalPartBuilderTypes;
	};
}
#pragma once
