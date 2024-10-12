#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab06.4(it)/Lab06.4(it).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int arr[5] = { 1, 9, 5, 3, 7 };
			double result = SumAfterMax(arr, 5);
			Assert::AreEqual(15.0, result);
		}
	};
}
