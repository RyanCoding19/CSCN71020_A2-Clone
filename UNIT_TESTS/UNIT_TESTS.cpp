#include "pch.h"
#include "CppUnitTest.h"

extern "C" {
#include "main.h"
}
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UNITTESTS
{
	TEST_CLASS(UNIT_TESTS)
	{
	public:

		TEST_METHOD(GetPerimeter_test_LengthAndWidth)
		{
			int Expected = 230; //the number that is expected from the function
			int length = 58;
			int width = 57;
			int input = getPerimeter(&length, &width);//storing the permiter recieved from the function into integer input

			Assert::AreEqual(Expected, input);//checking to see if the Expected and result of the function equal each other

		}
		TEST_METHOD(GetArea_test_LengthAndWidth)
		{
			int ExpectedArea = 50;//the number the area is expected to be
			int length = 25;
			int width = 2;
			int Area = getArea(&length, &width);//storing area recived from the function

			Assert::AreEqual(Area, ExpectedArea);//asserts to see if the expected area is the same as gained area from the function

		}
		TEST_METHOD(TestMethod2)
		{
		}
		TEST_METHOD(TestMethod3)
		{
		}
		TEST_METHOD(TestMethod4)
		{
		}
		TEST_METHOD(TestMethod5)
		{
		}
		TEST_METHOD(TestMethod6)
		{
		}
		TEST_METHOD(TestMethod7)
		{
		}
	};
}