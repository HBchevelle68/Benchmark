#include <iostream>
#include <chrono>
#include <thread>

#include "Benchmark.h"
using namespace std;

void test(){for (int i = 0; i<99994523; ++i){}}




int main() {

	std::cout << "norm: " << ftime_ms(test) << endl;
	
	std::cout << "norm: " << ftime_fms(test) << endl;
	
	std::cout << "norm: " << ftime_dms(test) << endl;



	return 0;
}