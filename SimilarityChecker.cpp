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

		if (str1.size() == 2 && str2.size() == 3)
			return 30;

		if (str2.size() >= (str1.size() * 2))
			return 0;

		return 40;
	}

private:

};