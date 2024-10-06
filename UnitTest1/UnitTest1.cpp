#include "pch.h"
#include "CppUnitTest.h"
#include <sstream>
#include "../lab6.3(rec).cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;
namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		TEST_METHOD(TestInput)
		{
			const int size = 6;
			int k[size];
			int expected[size] = { 1, 2, 3, 4, 5, 6 };
			for (int i = 0; i < size; i++)
			{
				k[i] = expected[i];
			}
			for (int i = 0; i < size; i++)
			{
				Assert::AreEqual(expected[i], k[i]);
			}
		}
		TEST_METHOD(TestPrint)
		{
			const int size = 6;
			int k[size] = { 1, 2, 3, 4, 5, 6 };
			stringstream buffer;
			streambuf* prevcoutbuf = cout.rdbuf(buffer.rdbuf());
			Print(k, size, 0);
			cout.rdbuf(prevcoutbuf);
			Assert::AreEqual(buffer.str(), string("   1   2   3   4   5   6\n"));
		}
	};
}

