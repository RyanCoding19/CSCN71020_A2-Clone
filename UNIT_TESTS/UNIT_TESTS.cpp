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
		TEST_METHOD(GetArea_Test_LengthAndWidth)
		{
			int ExpectedArea = 50;//the number the area is expected to be
			int length = 25;
			int width = 2;
			int Area = getArea(&length, &width);//storing area recived from the function

			Assert::AreEqual(Area, ExpectedArea);//asserts to see if the expected area is the same as gained area from the function

		}
		TEST_METHOD(CheckSetLength_Through_Equals)
		{

			int NewLength = 5;//sets a length and width
			int OldLength = 5;

			setLength(NewLength, &OldLength);//calls for the function

			Assert::AreEqual(NewLength, OldLength);//checks to see if the two equal each other
		}
		TEST_METHOD(CheckSetLength_ToSesIf_WasRequiredOrSameEnter)
		{
			bool checkerlength = false;//this is to determine weather or not they entered the same number calling an exception if they did
			int NewLength = 50;
			int OldLength = 69;
			if (NewLength == OldLength)//this checks before setting both to having the same length
			{
				checkerlength = true;
			}

			setLength(NewLength, &OldLength);

			Assert::IsFalse(checkerlength);//if the bool is true then the user entered the same number if its false than they didn't
		}
		TEST_METHOD(CheckSetLength_DidntEnterValue)
		{
			bool checkerlength = false;//sets a checker to make sure everthing works
			int NewLength = 50;
			int OldLength = 60;

			setLength(NewLength, &OldLength);//calls for the function

			if ((NewLength) == NULL)//checks if any values were entered at all
			{
				checkerlength = true;
			}
			Assert::IsFalse(checkerlength);//if nothing was entered when wanting to change the length than it outputs a exception

		}
		TEST_METHOD(CheckSetWidth_Through_Equals)
		{
			int NewWidth = 50; //sets a length and width
			int OldWidth = 60;
			

			setLength(NewWidth, &OldWidth);//uses the function

			Assert::AreEqual(NewWidth, OldWidth);//checks if they are equal 
		}
		TEST_METHOD(CheckSetWidth_ToSesIf_WasRequiredOrSameEnter)
		{
			bool checkerwidth = false;//this is to determine weather or not they entered the same number calling an exception if they did
			int NewWidth = 50;
			int OldWidth = 60;
			if (NewWidth == OldWidth)//this checks before setting both to having the same length
			{
				checkerwidth = true;
			}

			setLength(NewWidth, &OldWidth);

			Assert::IsFalse(checkerwidth);//if the bool is true then the user entered the same number if its false than they didn't
		}
		TEST_METHOD(CheckSetWidth_NoValueEntered)
		{
			bool checkerWidth = false;//sets a bool value for checking width
			int NewWidth = 50;
			int OldWidth = 60;

			setLength(NewWidth, &OldWidth);//states an if statment to check if the user didn't enter anything

			if ((NewWidth) == NULL)
			{
				checkerWidth = true;
			}
			Assert::IsFalse(checkerWidth);//throws exception if nothing was entered
		}
	};
}