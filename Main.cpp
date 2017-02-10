#include <iostream>
#include <chrono>
#include <thread>

#include "Benchmark.h"

using namespace std;

void test(){for (int i = 0; i<99994523; ++i){}}

int main() {
	std::cout << "seconds (int): " << ftime_sec(test) << endl;
	std::cout << "seconds (float): " << ftime_fsec(test) << endl;	
	std::cout << "seconds (double): " << ftime_dsec(test) << endl;
	return 0;
}
