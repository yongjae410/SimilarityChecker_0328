#pragma once

#include <string>

using std::string;

class SimilarityChecker
{
public:
	int checkLength(string s1, string s2)
	{
		if (s1.size() != s2.size())
			return 40;
		return 60;
	}

private:

};