#pragma once
#include "AppFeaturesOpsExports.h"

namespace Application
{
	class Part;
	class PartFile;
	class PartBuilder;
	/// <summary>
	/// Implements Journaling for Part builders
	/// </summary>
}


APPLIBRARY_API void Journaling_PartCollection_CreatePartBuilder(Application::PartFile* part, Application::Part* part);

#pragma once
