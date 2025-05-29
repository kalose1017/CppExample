#include <iostream>

void Exer1()
{
	int i;
	for (i = 0; i < 11; i += 3)
	{
		std::cout << i << std::endl;
	}
	std::cout << i << std::endl;
}

void Exer2()
{
	int i = 5;
	while (++i < 9)
	{
		std::cout << i++ << std::endl;
	}
}

void Exer3()
{
	int i = 8;
	do
	{
		std::cout << " i = " << i << std::endl;
	} while (i++ < 16);
}

void 제곱(int num)
{
	int tot = 1;
	for (int i = 2; i <= num; i++)
	{
		tot *= 2;
	}
	std::cout << tot << std::endl;
}

void Exer4()
{
	/*for (int i = 1; i <= 7; i++)
	{
		제곱(i);
	}*/
	for (int i = 1; i <= 64; i *= 2)
	{
		std::cout << i << std::endl;
	}
}

int main()
{
	Exer4();
}