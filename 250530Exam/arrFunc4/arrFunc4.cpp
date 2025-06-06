﻿#include <iostream>
const int ArSize = 8;

int sum_arr(const int* begin, const int* end);

int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128 };
	
	int sum = sum_arr(cookies, cookies + ArSize);
	std::cout << "먹은 과자 수 합계 : " << sum << std::endl;
	sum = sum_arr(cookies, cookies + 3);
	std::cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다.\n";
	sum = sum_arr(cookies + 4, cookies + 8);
	std::cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다.\n";
}

int sum_arr(const int* begin, const int* end)
{
	const int* pt;
	int total = 0;
	for (pt = begin; pt != end; pt++)
	{
		total += *pt;
	}
	return total;
}