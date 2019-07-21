#pragma once
#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <chrono>
#include <ctime>

class Sorts {
	double ITime, TTime;
	__int64 ISwap, IComp, TSwap, TComp;
	__int64 count;
	int* arr1;
	int* arr2;
public:
	Sorts(std::string file);
	void Analist(std::string file);
	void Parser(std::string file);
	void Insertion();
	void Tim();
	__int64 GetIComp();
	__int64 GetISwap();
	double GetITime();
	__int64 GetTComp();
	__int64 GetTSwap();
	double GetTTime();
};
