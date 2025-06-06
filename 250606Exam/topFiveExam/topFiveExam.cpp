#include <iostream>
#include <string>
const int SIZE = 5;

void display(const std::string sa[], int n);

int main()
{
	std::string list[SIZE];
	std::cout << "좋아하는 밤하늘의 광경을 " << SIZE << "개 입력하시오:\n";
	int i = 0;
	for (int i = 0; i < SIZE; i++)
	{
		std::cout << i + 1 << ": ";
		std::getline(std::cin, list[i]);
	}
	std::cout << "입력하신 내용은 다음과 같습니다. : " << std::endl;
	display(list, SIZE);
}

void display(const std::string sa[], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << i + 1 << ": " << sa[i] << std::endl;
	}
}
