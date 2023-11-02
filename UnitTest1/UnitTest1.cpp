#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 6.2/Lab 6.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int a[] = { 10, -2, 3, 9, 7, 6, 2, -10, 9, 10 };
			int n = sizeof(a) / sizeof(a[0]);
			swapArrayHalves(a, 10);
			int b[] = { 6, 2, - 10, 9, 10, 10, - 2, 3, 9, 7 };
			for (int i = 0; i < 10; i++) {
				Assert::AreEqual(a[i], b[i]);
			}
		}
	};
}
