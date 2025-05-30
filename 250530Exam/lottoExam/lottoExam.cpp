#include <iostream>
#include <cctype>

long double probability(unsigned numbers, unsigned picks);

int main()
{
	int total = 0;
	int count = 0;
	std::cout << "전체 수의 개수와 뽑을 수의 개수를 입력하십시오 : ";
	while ((std::cin >> total >> count) && count <= total)
	{
		std::cout << "당신이 이길 확률은 " << probability(total, count) << "번 중에서 한 번입니다.\n";
		std::cout << "다시 두 수를 입력하세요. (끝내려면 q를 입력) : ";
		std::cin >> total >> count;
	}
	std::cout << "프로그램을 종료합니다.\n";
}

long double probability(unsigned numbers, unsigned picks)
{
	long double result = 1.0;
	long double n;
	unsigned p;
	for(n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p;
	return result;
}