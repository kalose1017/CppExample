﻿#include <iostream>
const int ArrSize = 8;

int sum_arr(int arr[], int n);

int main()
{
	int cookies[ArrSize] = {1, 2, 4, 8, 16, 32, 64, 128};
	std::cout << cookies << " = 배열 주소, ";
	std::cout << "Sizeof cookies = " << sizeof cookies << std::endl;
	int sum = sum_arr(cookies, ArrSize);
	std::cout << "먹은 과자 수 합계 : " << sum << std::endl;
	sum = sum_arr(cookies, 3);
	std::cout << "처음 세 사람은 과자 " << sum << "개를 먹었습니다.\n";
	sum = sum_arr(cookies + 4, 4);
	std::cout << "마지막 네 사람은 과자 " << sum << "개를 먹었습니다.\n";
}

int sum_arr(int arr[], int n)
{
	int total = 0;
	std::cout << arr << " = arr, ";
	std::cout << "sizeof arr = " << sizeof arr << std::endl;
	for (int i = 0; i < n; i++)
	{
		total += arr[i];
	}
	return total;
}