#include "pch.h"
#include "CppUnitTest.h"
#include "c:\соломія чунис\Політехніка\Алгоритмізація та програмування\lab№5.1\pr5.1\PR5.1\PR5.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = 0, b = 0;
			int t;
			t = (a * a) + (b * b);
			Assert::AreEqual(t, 0);
		}
	};
}
