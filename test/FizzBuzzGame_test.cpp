/*
 * FizzBuzzGame_test.cpp
 *
 *  Created on: 2016Äê5ÔÂ4ÈÕ
 *      Author: Administrator
 */

#include <FizzBuzzGame.h>
#include "gtest/gtest.h"
using namespace std;
namespace kata {

class FizzBuzzGameTest : public testing::Test
{
public:
	virtual void SetUp()
	{
		game = new FizzBuzzGame(3, 5, 7);
	}
	virtual void TearDown()
	{
		delete game;
	}
protected:
	FizzBuzzGame* game;
};

TEST_F(FizzBuzzGameTest, should_say_number_given_a_normal_number)
{
	ASSERT_STREQ("2", game->handle(2).c_str());
}

TEST_F(FizzBuzzGameTest, should_say_fizz_given_a_number_which_is_multiple_of_3)
{
	ASSERT_STREQ("fizz", game->handle(3).c_str());
	ASSERT_STREQ("fizz", game->handle(6).c_str());
}
TEST_F(FizzBuzzGameTest, should_say_buzz_given_a_number_which_is_multiple_of_5)
{
	ASSERT_STREQ("buzz", game->handle(5).c_str());
	ASSERT_STREQ("buzz", game->handle(10).c_str());
}
TEST_F(FizzBuzzGameTest, should_say_whizz_given_a_number_which_is_multiple_of_7)
{
	ASSERT_STREQ("whizz", game->handle(7).c_str());
	ASSERT_STREQ("whizz", game->handle(14).c_str());
}

TEST_F(FizzBuzzGameTest, should_say_fizz_given_a_number_which_contain_3)
{
	ASSERT_STREQ("fizz", game->handle(13).c_str());
	ASSERT_STREQ("fizz", game->handle(31).c_str());
	ASSERT_STREQ("fizz", game->handle(35).c_str());
}

TEST_F(FizzBuzzGameTest, should_say_fizzbuzz_given_a_number_which_is_multiple_of_3_and_5)
{
	ASSERT_STREQ("fizzbuzz", game->handle(15).c_str());
}

TEST_F(FizzBuzzGameTest, should_say_buzzwhizz_given_a_number_which_is_multiple_of_7_and_5)
{
	ASSERT_STREQ("buzzwhizz", game->handle(70).c_str());
}
TEST_F(FizzBuzzGameTest, should_say_fizzbuzzwhizz_given_a_number_which_is_multiple_of_7_and_5_and_3)
{
	ASSERT_STREQ("fizzbuzzwhizz", game->handle(105).c_str());
}

} /* namespace kata */
