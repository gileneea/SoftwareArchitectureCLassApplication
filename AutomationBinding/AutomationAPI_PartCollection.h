#pragma once
#include "AutomationBindingExports.h"
namespace AutomationAPI
{
	class PartBuilder;
	class Part;
	/// <summary>
	/// Creates Part builders
	/// </summary>
	class AUTOMATIONBINDING_API PartCollection
	{
	public:
		PartCollection(int guid);

		virtual ~PartCollection();

		/// <summary>
		/// Creates a Part builder.
		/// </summary>
		/// <param name="part"> if nullptr is passed in this will be created in 
		/// create mode, otherwise it will be in edit mode.</param>
		/// <returns>
		/// Null
		/// </returns>
		PartBuilder* CreatePartBuilder(Part* part);


	private:
		int m_guid;
	};
}
#pragma once
