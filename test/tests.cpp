#include <gtest/gtest.h>
#include "../src/Calculator.h"

TEST(CalculatorAdd, Add) {
	Calculator Calc;
	std::cout << "Hello World. I'm Matt's first test in c++" << std::endl;
	EXPECT_EQ(Calc.Add(9, 8), 16);
}