#include "Part.h"
#include <fstream>
#include "..\Core\StringUtils.h"


void ProcessPart(std::ifstream& streamObject)
{
	std::cout << "    ProcessPart" << std::endl;

	std::string line;
	bool done = false;
	while (!done)
	{
		getline(streamObject, line);
		std::cout << line << '\n';
	}
}