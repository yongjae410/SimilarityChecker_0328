#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"
#include <string>

using namespace testing;
using std::string;


TEST(Group, tc1)
{
	SimilarityChecker checker;
	EXPECT_EQ(checker.checkLength("abc", "def"), 60);
}

TEST(Group, tc2)
{
	SimilarityChecker checker;
	EXPECT_EQ(checker.checkLength("abc", "defg"), 40);
}

int main()
{
	::InitGoogleMock();
	return RUN_ALL_TESTS();
}