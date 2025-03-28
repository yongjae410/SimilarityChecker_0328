#pragma once

#include <string>
#include <set>

#define LENGTH_CHECK_MAX_SCORE 60
#define ALPHABET_CHECK_MAX_SCORE 40

using std::string;
using std::set;

class SimilarityChecker
{
public:
	int checkSimilarity(string str1, string str2)
	{
		return checkLength(str1, str2) + checkAlphabet(str1, str2);
	}

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
		set<char> alphabet_str1 = { };
		set<char> alphabet_str2 = { };
		set<char> alphabet_all = { };

		for (char& c : str1)
		{
			alphabet_str1.insert(c);
			alphabet_all.insert(c);
		}

		for (char& c : str2)
		{
			alphabet_str2.insert(c);
			alphabet_all.insert(c);
		}

		int count_str1 = alphabet_str1.size();
		int count_str2 = alphabet_str2.size();
		int count_all = alphabet_all.size();

		if ((count_str1 == count_str2) && (count_str1 == count_all))
			return ALPHABET_CHECK_MAX_SCORE;

		int count_common = count_str1 + count_str2 - count_all;

		return (count_common * ALPHABET_CHECK_MAX_SCORE) / count_all;
	}

private:

};