#pragma once

#include <string>

using std::string;

class SimilarityChecker
{
public:
	int checkLength(string str1, string str2)
	{
		int length1 = str1.length();
		int length2 = str2.length();
		int result = 0;

		if (length1 == length2)
			return 60;

		if ( (length1 >= (length2 * 2)) || (length2 >= (length1 * 2)) )
			return 0;

		if (length1 > length2)
		{
			result = 60 - ((length1 - length2) * 60 / length2);
		}
		else
		{
			result = 60 - ((length2 - length1) * 60 / length1);
		}

		return result;
	}

private:

};