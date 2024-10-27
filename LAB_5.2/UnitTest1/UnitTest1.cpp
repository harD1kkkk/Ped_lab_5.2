#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.2\lab_5.2.cpp"  

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestSeriesSum)
        {
            double x = 1.0;       
            double eps = 1e-6;    
            double expected = sin(x) / x;  

            int n = 0;
            double s = 0;

            S(x, eps, n, s);  

            Assert::AreEqual(expected, s, 1e-6); 
        }
    };
}
