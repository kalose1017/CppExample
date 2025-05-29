#include <iostream>

const int ArrSize = 6;

int main()
{
	float arr[ArrSize];
	std::cout << "동료들의 IQ를 입력하세요.\n"
		<< ArrSize << "명의 데이터를 모두 입력했거나, 음수를 입력하면\n"
		<< "while 루프를 탈출합니다.\n";

	int i = 0;
	float temp;
	std::cout << "첫번째 값 : ";
	std::cin >> temp;
	while (i < ArrSize && temp >= 0)
	{
		arr[i] = temp;
		++i;
		if (i < ArrSize)
		{
			std::cout << "그 다음 값 : ";
			std::cin >> temp;
		}
	}
	if (i == 0)
	{
		std::cout << "입력한 데이터가 없으므로 프로그램을 종료합니다.\n";
	}
	else if (temp < 0)
	{
		std::cout << "프로그램을 종료합니다.\n";
	}
	else
	{
		float youIq;
		std::cout << "당신의 IQ를 입력하세요. : ";
		std::cin >> youIq;
		int count = 0;
		for (int k = 0; k < i; k++)
		{
			if (arr[k] > youIq)
			{
				++count;
			}
		}
		std::cout << "동료들 중에서 " << count << "명보다 IQ가 높습니다.\n";
	}
}