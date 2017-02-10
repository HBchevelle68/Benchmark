#include <iostream>
#include <chrono>

#include "Benchmark.h"

void test(){ for (int i = 0; i<99994523; ++i){} }

int main() {
	std::cout << "seconds (int): " << ftime_sec(test) << std::endl;
	std::cout << "seconds (float): " << ftime_fsec(test) << std::endl;
	std::cout << "seconds (double): " << ftime_dsec(test) << std::endl;
	return 0;
}
