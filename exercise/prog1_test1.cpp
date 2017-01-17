#include <gtest/gtest.h>
#include "include/prog1.hpp"

TEST(Addition, boring){
	ASSERT_EQ(2, add(1,1));
}

int main(int argc, char **argv){
	::testing::InitGoogleTest(&argc,argv);
	return RUN_ALL_TESTS();
}
