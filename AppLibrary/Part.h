#pragma once
#include "AppFeaturesOpsExports.h"
#include "Part.h"

#include <iostream>
#include <fstream>
#include "..\Core\GuidObject.h"

void ProcessPart(std::ifstream& streamObject);

namespace Application
{
	/// <summary>
	///  Part Object
	/// </summary>
	class APPLIBRARY_API IPart : public GuidObject
	{
	public:
		/// <summary>
		///  Returns version of the specified Part
		/// </summary>
		virtual std::string GetVersion() = 0;
		IPart(int guid) : GuidObject(guid)
		{

		}
		IPart() = delete;
	};


	class APPLIBRARY_API Part : public Application::Part, public IPart
	{
	public:
		Part() = delete;
		Part(int guid) : IPart(guid)
		{

		}
		std::string GetVersion() override
		{
			return "1";
		}
	};
}

