#include <iostream>

void doWhileEx()
{
	int num = 0;
	std::cout << "숫자를 입력하세요. : \n";
	do
	{
		std::cin >> num;
	} while (num != 23);
	std::cout << "정답입니다!\n";
}

void SpecialForEx()
{
	int i = 0;
	for (;;i++)
	{	
		std::cout << i << std::endl;
		if (i >= 50) break;
	}
	std::cout << i << std::endl;
}

int main()
{
	SpecialForEx();
}

