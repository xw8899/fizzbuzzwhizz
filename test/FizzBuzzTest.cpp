/*
 * FizzBuzzTest.cpp
 *
 *  Created on: 2016��5��2��
 *      Author: Administrator
 */
#include <iostream>
using namespace std;

#include "gtest/gtest.h"
#include "test.h"



int main(int argc, char **argv) {
	cout << "!!!Hello World!!!" << MY_TEST << endl; // prints !!!Hello World!!!
	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}

