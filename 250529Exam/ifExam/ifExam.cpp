#include <iostream>

int main()
{
	char ch;
	int spaces = 0;
	int total = 0;
	std::cin.get(ch);
	while (ch != '.')
	{
		if(ch == ' ')
		{
			++spaces;
		}
		++total;
		std::cin.get(ch);
	}
	std::cout << "입력된 문자는 " << total << "개이고\n 공백은 " << spaces << "개입니다." << std::endl;
}