#ifndef Benchmark_H
#define Benchmark_H
#include <chrono>

//    TO DO



typedef std::chrono::steady_clock s_clock;
typedef std::chrono::high_resolution_clock hres_time;

//Standard
typedef std::chrono::seconds sec;
typedef std::chrono::milliseconds ms;
typedef std::chrono::microseconds micro;
typedef std::chrono::nanoseconds nano;

//Precision
typedef std::chrono::duration<float> fsec; //seconds in float ~ 7 digits
typedef std::chrono::duration<double> dsec; //seconds in double ~ 15 digits

typedef std::chrono::duration<float, std::milli> fms; //milliseconds in float ~ 7 digits
typedef std::chrono::duration<double, std::milli> dms; //milliseconds in double ~ 15 digits

typedef std::chrono::duration<float, std::micro> fmicro; //microseconds in float ~ 7 digits
typedef std::chrono::duration<double, std::micro> dmicro; //microseconds in double ~ 15 digits

typedef std::chrono::duration<float, std::nano> fnano; //nanoseconds in float ~ 7 digits
typedef std::chrono::duration<double, std::nano> dnano; //nanoseconds in double ~ 15 digits


/* Template Functions 
* Measure function execution time
* High Resolution Timers only
*/

//Seconds
template<typename F, typename... Args> 
int ftime_sec(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<std::chrono::seconds>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

template<typename F, typename... Args>
float ftime_fsec(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<fsec>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

template<typename F, typename... Args>
double ftime_dsec(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<dsec>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

//Milliseconds
template<typename F, typename... Args>
int ftime_ms(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<std::chrono::milliseconds>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

template<typename F, typename... Args>
float ftime_fms(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<fms>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

template<typename F, typename... Args>
double ftime_dms(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<dms>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

//Microseconds
template<typename F, typename... Args>
int ftime_micro(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<std::chrono::milliseconds>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

template<typename F, typename... Args>
float ftime_fmicro(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<fms>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

template<typename F, typename... Args>
double ftime_dmicro(F func, Args&&... args){
	auto t1 = std::chrono::high_resolution_clock::now();
	func(std::forward<Args>(args)...);
	return std::chrono::duration_cast<dms>
		(std::chrono::high_resolution_clock::now() - t1).count();
}

#endif
