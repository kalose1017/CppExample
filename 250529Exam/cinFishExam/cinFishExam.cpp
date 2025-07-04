﻿#include <iostream>
const int Max = 5;

int main()
{
	double fish[Max];
	std::cout << "오늘 낚은 물고기의 무게를 입력하세요.\n";
	std::cout << "물고기는 최대 " << Max << "마리까지 낚을 수 있습니다.\n";
	std::cout << "<입력을 끝내려면 q를 누르십시오.>\n";
	std::cout << "fish #1 : ";
	int i = 0;
	while (i < Max && std::cin >> fish[i])
	{
		if (++i < Max)
		{
			std::cout << "fish #" << i + 1 << ": ";
		}
	}
	double total = 0.0;
	for (int j = 0; j < i; j++)
	{
		total += fish[j];
	}
	if (i == 0)
		std::cout << "물고기를 한 마리도 낚지 못하셨군요.\n";
	else
		std::cout << "물고기 " << i << "마리의 평균 무게는 " << total / i << "그램입니다.\n";
	std::cout << "프로그램을 종료합니다.\n";
}