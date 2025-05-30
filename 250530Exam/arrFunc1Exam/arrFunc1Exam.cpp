#include <iostream>

const int ArSize = 9;
int sum_Arr(int* arr, int n);

int main()
{
	int cookies[ArSize] = { 1,2,4,8,16,32,64,128,256 };
	std::cout << "먹은 과자 수 합계 : " << sum_Arr(cookies, ArSize);
}

int sum_Arr(int* arr, int n)
{
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res += *(arr + i);
	}
	return res;
}