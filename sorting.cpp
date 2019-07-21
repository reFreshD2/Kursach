#include "sorting.h"
#include "sort.cpp"

using namespace std;

Sorts::Sorts(string file) {
	Analist(file);
	Parser(file);
}

void Sorts::Analist(string file) {
	__int64 i = 0, j = i;
	char *c = new char[6];
	for (i; file[i] != '('; i++) {
		if (isdigit(file[i])) {
			c[j] = file[i];
			j++;
		}
	}
	c[j] = '\0';
	count = atoi(c);
}

void Sorts::Parser(string file) {
	__int64 i = 0, j = i;
	char *c = new char[6];
	arr1 = new int[count];
	arr2 = new int[count];
	ifstream F;
	F.open(file, ios::in);
	__int64 k = 0;
	while (!F.eof()) {
		char a;
		F >> a;
		if (a != ',') {
			c[j] = a;
			j++;
		}
		else {
			c[j] = '\0';
			arr1[k] = atoi(c);
			arr2[k] = atoi(c);
			k++;
			j = 0;
		}
	}
}

void Sorts::Insertion() {
	__int64 s = 0;
	__int64 c = 0;
	auto start = chrono::system_clock::now();
	for (__int64 i = 1; i < count; i++) {
		for (int j = i; j > 0; j--) {
			if (arr1[j - 1] > arr1[j]) {
				swap(arr1[j - 1], arr1[j]);
				s++;
			}
			c++;
		}
	}
	auto end = chrono::system_clock::now();
	chrono::duration<double> time = end - start;
	ITime = time.count();
	ISwap = s;
	IComp = c;
}

void Sorts::Tim() {
	auto start = chrono::system_clock::now();
	sorter_tim_sort(arr2, count);
	auto end = chrono::system_clock::now();
	chrono::duration<double> time = end - start;
	TTime = time.count();
	TComp = getCmp();
	TSwap = getSwaps();
}

__int64 Sorts::GetIComp(){
	return IComp;
}

__int64 Sorts::GetISwap() {
	return ISwap;
}

double Sorts::GetITime() {
	return ITime;
}

__int64 Sorts::GetTComp() {
	return TComp;
}

__int64 Sorts::GetTSwap() {
	return TSwap;
}

double Sorts::GetTTime() {
	return TTime;
}