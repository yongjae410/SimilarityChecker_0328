#pragma once

#include <string>

using std::string;

class SimilarityChecker
{
public:
	int checkLength(string str1, string str2)
	{
		if (str1.size() == str2.size())
			return 60;
		return 40;
	}

private:

};