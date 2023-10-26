//#include "fff.h"
#include "canIBuyBeer.h"
#include <gtest/gtest.h>
//DEFINE_FFF_GLOBALS;

class GreeterTests : public testing::Test {
protected:
	void SetUp() override {
		//game_initialize();	/* Without this the Tests could break*/
	}
};


TEST_F(GreeterTests, allowedWhenKrogenAnd18)
{
    bool b = canIBuyBeer('K',18);
    ASSERT_EQ(b,true);
}