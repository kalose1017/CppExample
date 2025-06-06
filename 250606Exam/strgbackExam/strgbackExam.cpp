#include <iostream>

char* buildstr(char c, int n);

int main()
{
	int time;
	char ch;

	std::cout << "문자 하나를 입력하십시오. : ";
	std::cin >> ch;
	std::cout << "정수 하나를 입력하십시오. : ";
	std::cin >> time;
	char* ps = buildstr(ch, time);
	std::cout << ps << std::endl;
	delete[] ps;
	ps = buildstr('+', 20);
	std::cout << ps << "-DONE-" << ps << std::endl;
	delete[] ps;
}

char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1];
	pstr[n] = '\0';
	while(n-- > 0)
	{
		pstr[n] = c;
	}
	return pstr;
}
