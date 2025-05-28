#include <iostream>

int main()
{
	char name[10] = { 'l','e','e','j', 'i', 'h', 'o' };
	int i = 0;
	while (name[i] != '\0')
	{
		std::cout << name[i] << std::endl;
		i++;
	}
	std::cout << "종료!" << std::endl;
}