#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.1/Lab_06.1.cpp" 
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int n = 21;
            int b[n] = { 49, 83, 55, 39, 20, 47, 33, 78, 44, 26, 16, 36, 88, 35, 76, 39, 25, 27, 79, 53, 19 };

            // Тест для CountElements
            int count = CountElements(b, n, 0);
            Assert::AreEqual(count, 4);  

            // Тест для SumElements
            int sum = SumElements(b, n, 0);
            Assert::AreEqual(sum, 138);

            // Тест для ReplaceElements
            ReplaceElements(b, n, 0);

           
            Assert::AreEqual(b[3], 0);  
            Assert::AreEqual(b[6], 0);  
            Assert::AreEqual(b[15], 0);  
            Assert::AreEqual(b[17], 0); 
        }
    };
}
