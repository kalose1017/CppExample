#include <iostream>
#include <cstdlib>

int main()
{
	srand(time(NULL));
	int randomNum = (std::rand() % 1000) + 1;
	int num = 0;

	do
	{
		std::cout << "숫자를 입력하세요. : ";
		std::cin >> num;
		if (num < randomNum)
		{
			std::cout << "업!" << std::endl;
		}
		else if (num > randomNum)
		{
			std::cout << "다운!" << std::endl;
		}
	} while (num != randomNum);
	std::cout << "정답입니다!" << std::endl;
}