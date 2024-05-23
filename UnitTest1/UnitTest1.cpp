#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_13_2_1/var.h"
#include "../LAB_13_2_1/Main.cpp"
#include "../LAB_13_2_1/var.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:

		TEST_METHOD(Testcalculate_min)
		{
			// Тестуємо функцію calculate_min
			Assert::AreEqual(16, calculate_min(3, 2, 1));
		}
	};
}
