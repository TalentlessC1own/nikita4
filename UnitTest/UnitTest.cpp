
#include "CppUnitTest.h"
#include "..\nikita4\DialogFinder.h"
#include "..\nikita4\DialogFinder.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	private:
		
		std::string  testText = "\n-A.\n-B!\n-C?\n";
		std::vector < std::string> testAnswerList = {"-A.\n","-B!\n","-C?\n"};
	public:
		
		TEST_METHOD(TestMethod1)
		{
			DialogFinder finder(testText);
			finder.FindDialogs();

			Assert::IsTrue(testAnswerList == finder.GetVector());
		}
	};
}
