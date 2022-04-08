#pragma once
#include "AppFeaturesOpsExports.h"

namespace Application
{
	class Part;
	class PartFile;
	class PartBuilder;
}


APPLIBRARY_API void Journaling_PartCollection_CreatePartBuilder(Application::PartFile* part, Application::Part* part);

#pragma once
