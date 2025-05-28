#include <iostream>

int textin1()
{
	char ch;
	int count = 0;
	std::cout << "문자들을 입력하세요. : " << std::endl;
	std::cout << "끝내려면 $를 누르세요." << std::endl;
	std::cin >> ch;
	while (ch != '$')
	{
		std::cout << ch << std::endl;
		++count;
		std::cin >> ch;
	}
	std::cout << std::endl << count << " 문자를 읽었습니다.\n";
	return 0;
}

int textin2()
{
	char ch;
	int count = 0;
	std::cout << "문자들을 입력하세요. : " << std::endl;
	std::cout << "끝내려면 $를 누르세요." << std::endl;
	std::cin.get(ch);
	while (ch != '$')
	{
		std::cout << ch << std::endl;
		++count;
		std::cin.get(ch);
	}
	std::cout << std::endl << count << " 문자를 읽었습니다.\n";
	return 0;
}

int textin3()
{
	char ch;
	int count = 0;
	std::cin.get(ch);
	while (std::cin.fail() == false)
	{
		std::cout << ch;
		++count;
		std::cin.get(ch);
	}
	std::cout << std::endl << (count - 1) << " 문자를 읽었습니다.\n";
	return 0;
}

int main()
{
	textin3();
}