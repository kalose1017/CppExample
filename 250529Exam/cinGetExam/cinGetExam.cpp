#include <iostream>

int textin4()
{
	int ch;
	int count = 0;

	while ((ch = std::cin.get()) != EOF)
	{
		std::cout.put(ch);
		++count;
	}
	std::cout << count << "문자를 읽었습니다." << std::endl;
	return 0;
}

int main()
{
	textin4();
}