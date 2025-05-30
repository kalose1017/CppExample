#include <iostream>

void cheers(int);
double cube(int);

int main()
{
	int num;
	cheers(5);
	std::cout << "하나의 수를 입력하십시오. : ";
	std::cin >> num;
	std::cout << "한 변의 길이가 " << num << 
		" 센티미터인 정육면체의 부피는 " << cube(num) << " 세제곱센티미터입니다." << std::endl;
	std::cout << sizeof(cube(num)) << std::endl;
	cheers(8);
}

double cube(int num)
{
	return num * num * num;
}

void cheers(int num) 
{
	for (int i = 0; i < num; i++)
	{
		std::cout << "Cheers! ";
	}
	std::cout << std::endl;
}