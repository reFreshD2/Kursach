#include "generation.h"

using namespace std;

void Generator::Generate(string type, __int64 count, __int64 low, __int64 high, __int64 part) {
	ofstream F;
	/*auto time1 = std::chrono::system_clock::now();
	time_t t = std::chrono::system_clock::to_time_t(time1);
	string t1 = ctime(&t);*/
	string file =
		"C:\\Users\\днс\\Desktop\\" + type + to_string(count) + '(' + to_string(low) + '-' + to_string(high) + ") - " + to_string(part) +
		".txt";
	F.open(file, ios::out);
	string numbers;
	__int64 num = low;
	srand(time(nullptr));
	if (type == "Up") {
		numbers = numbers + to_string(num) + ',';
		for (__int64 i = 1; i < count; i++) {
			__int64 delta;
			if (rand() % 100 < 40) {
				delta = (rand() % (high - low + 1) + low) % (count/50);
			}
			else {
				if (rand() % 100 < 50) {
					delta = 1;
				}
				else {
					delta = 0;
				}
			}
			if (num + delta <= high) {
				num = num + delta;
			}
			numbers = numbers + to_string(num) + ',';
		}
	}
	if (type == "Down") {
		num = high;
		numbers = numbers + to_string(num) + ',';
		for (__int64 i = 1; i < count; i++) {
		__int64 delta;
			if (rand() % 100 < 40) {
				delta = (rand() % (high - low + 1) + low) % (count / 50);
			}
			else {
				if (rand() % 100 < 50) {
					delta = 1;
				}
				else {
					delta = 0;
				}
			}
			if (num - delta >= low) {
				num = num - delta;
			}
			numbers = numbers + to_string(num) + ',';
		}
	}
	if (type == "Rand") {
		for (__int64 i = 0; i < count; i++) {
			num = rand() % (high - low + 1) + low;
			numbers = numbers + to_string(num) + ',';
		}
	}
	if (type == "PartRand") {
		if (rand() % 100 < 50) {
			num = low;
			numbers = numbers + to_string(num) + ',';
			for (__int64 i = 1; i < count; i++) {
				__int64 delta;
				if (i % part) {
					if (rand() % 100 < 40) {
						delta = (rand() % (high - low) / (count / 4));
					}
					else {
						if (rand() % 100 < 50) {
							delta = 1;
						}
						else {
							delta = 0;
						}
					}
					if (num + delta <= high) {
						num = num + delta;
					}
				}
				else {
					num = rand() % (high - low + 1 + low);
				}
				numbers = numbers + to_string(num) + ',';
			}
		}
		else {
			num = high;
			numbers = numbers + to_string(num) + ',';
			for (__int64 i = 1; i < count; i++) {
				__int64 delta;
				if (i % part) {
					if (rand() % 100 < 40) {
						delta = rand() % (high - low) / (count / 4);
					}
					else {
						if (rand() % 100 < 50) {
							delta = 1;
						}
						else {
							delta = 0;
						}
					}
					if (num - delta <= high) {
						num = num - delta;
					}
				}
				else {
					num = rand() % (high - low + 1) + low;
				}
				numbers = numbers + to_string(num) + ',';
			}
		}
	}
	numbers = numbers + '\0';
	F << numbers;
	F.close();
}
