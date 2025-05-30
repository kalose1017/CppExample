#include <iostream>

void printAlpha(char, int);

int main()
{
	char ch;
	int num;
	std::cout << "문자를 하나 입력하십시오 : ";
	std::cin >> ch;
	while (ch != 'q' && ch != 'Q')
	{
		std::cout << "정수를 하나 입력하십시오 : ";
		std::cin >> num;
		printAlpha(ch, num);
		std::cout << "계속하려면 다른 문자를 입력하고, 끝내려면 Q(또는 q)를 누르십시오. : ";
		std::cin >> ch;
	}
	std::cout << "프로그램을 종료합니다. 현재 num의 값은 " << num << "입니다." << std::endl;
}

void printAlpha(char ch, int num)
{
	while (num-- > 0)
	{
		std::cout << ch << " ";
	}
	std::cout << "\n";
}