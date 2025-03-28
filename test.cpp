#include "gmock/gmock.h"
#include "SimilarityChecker.cpp"
#include <string>

using namespace testing;
using std::string;

class SimilarityTestFixture : public Test
{
public:
	SimilarityChecker checker;
};


TEST_F(SimilarityTestFixture, SameLengthTest)
{
	EXPECT_EQ(checker.checkLength("abc", "def"), 60);
}

TEST_F(SimilarityTestFixture, DifferentLengthTest)
{
	EXPECT_EQ(checker.checkLength("abc", "defg"), 40); 
	EXPECT_EQ(checker.checkLength("ab", "cde"), 30);
	EXPECT_EQ(checker.checkLength("ab", "cdef"), 0);
	EXPECT_EQ(checker.checkLength("abcdef", "abcde"), 48);
}

int main()
{
	::InitGoogleMock();
	return RUN_ALL_TESTS();
}