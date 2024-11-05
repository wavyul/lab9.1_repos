#include "pch.h"
#include "CppUnitTest.h"
#include "../LB9.1/var.h"
#include "../LB9.1/sum.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace nsSum;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumFunction)
        {
            nsVar::x = 0.9;
            nsVar::e = 0.0000001;

            sum();

            Assert::AreEqual(1.47222, nsVar::s, 0.0001);
        }
    };
}
