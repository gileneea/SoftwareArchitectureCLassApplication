#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class PartBuilder;
	class Part;
	/// <summary>
	/// PartCollection comment
	/// </summary>
	class AUTOMATIONBINDING_API PartCollection
	{
	public:
		PartCollection(int guid);

		virtual ~PartCollection();

		/// <summary>
		/// Create a Part builder.
		/// </summary>
		/// <param name="part"> if nullptr is passed in this will be created in 
		/// create mode, otherwise it be in edit mode.</param>
		/// <returns></returns>
		PartBuilder* CreatePartBuilder(Part* part);


	private:
		int m_guid;
	};
}
#pragma once
