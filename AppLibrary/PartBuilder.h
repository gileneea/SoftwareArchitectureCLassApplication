#pragma once
#include "AppFeaturesOpsExports.h"
#include "..\Core\GuidObject.h"
#include <string.h>

enum JournalPartBuilderTypes
{
	JournalTypesSinglePart, /**Represents that the part is a single part object. */
	JournalTypesMultiPart /**Represents that the part is a multi-part object. */
};

namespace Application
{
	/// <summary>
	/// Builds a part
	/// </summary>
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
