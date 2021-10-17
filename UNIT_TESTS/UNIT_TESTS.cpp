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
			int Expected = 396; //the number that is expected from the function
			int length = 99;
			int width = 99;
			int input = getPerimeter(&length, &width);//storing the permiter recieved from the function into integer input

			Assert::AreEqual(Expected, input);//checking to see if the Expected and result of the function equal each other

		}
		TEST_METHOD(GetArea_test_LengthAndWidth)
		{
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