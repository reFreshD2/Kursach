#pragma once
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <string>

class Generator {
public:
	void Generate(std::string type, __int64 count, __int64 low, __int64 high, __int64 part);
};