#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_06.3_rec/lab_06.3_rec.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest063rec
{
	TEST_CLASS(UnitTest063rec)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			int arr1[] = { 1,5,-9,-12,23,-3 };
			Assert::AreEqual(sum1(arr1, 6, 0), 5);
		}
		TEST_METHOD(TestMethod2)
		{
			int arr2[] = { 1,5,-9,-12,23,-3,1,-9,-2 };
			Assert::AreEqual(sum2(arr2, 9, 0), -5);
		}
	};
}
