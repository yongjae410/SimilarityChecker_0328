#pragma once

#include <string>

#define LENGTH_CHECK_MAX_SCORE 60

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
			return LENGTH_CHECK_MAX_SCORE;

		if ( (length1 >= (length2 * 2)) || (length2 >= (length1 * 2)) )
			return 0;

		if (length1 > length2)
		{
			result = LENGTH_CHECK_MAX_SCORE - ((length1 - length2) * LENGTH_CHECK_MAX_SCORE / length2);
		}
		else
		{
			result = LENGTH_CHECK_MAX_SCORE - ((length2 - length1) * LENGTH_CHECK_MAX_SCORE / length1);
		}

		return result;
	}

	int checkAlphabet(string str1, string str2)
	{
		if (str1.compare(str2) != 0)
			return 20;
		return 40;
	}

private:

};