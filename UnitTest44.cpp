#include "pch.h"
#include "CppUnitTest.h"
#include "../OOP Lab4.4/Time.cpp"
#include "../OOP Lab4.4/Date.cpp"
#include "../OOP Lab4.4/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time A(1, 2, 3, 0), B(2, 3, 4, 0);
			Assert::AreEqual(A == B, false);
		}
	};
}
