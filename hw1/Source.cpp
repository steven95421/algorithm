
#include <cstdlib>
#include <vector>
#include <iostream>
#include <algorithm>
#include "algo_hw1.hpp"
int main()
{
	int input[7] = { 7, 14, 6, 5, 1, 3, 8 };
	min_heapify(input, sizeof(input) / sizeof(int), 2);
	system("pause");
}