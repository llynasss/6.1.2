#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace ut612
{
	TEST_CLASS(ut612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int k = 0;

			int s[4] = { 1, 2, 3, 3 };

			int real = sum(s, 4, k, 0, k);

			int expected = 6;

			Assert::AreEqual(real, expected);


		}
	};
}
