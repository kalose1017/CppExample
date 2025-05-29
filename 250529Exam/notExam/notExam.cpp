#include <iostream>
#include <climits>

bool is_int(double);

int main()
{
	double num;
	std::cout << "정수 값을 하나 입력하세요.(" 
		<< INT_MIN << " ~ " << INT_MAX << ") : ";
	std::cin >> num;
	while (not(is_int(num)))
	{
		std::cout << "int 형에 대입할 수 없는 값입니다. 다시 입력 ㄱㄱ : ";
		std::cin >> num;
	}
	int val = int(num);
	std::cout << "당신이 입력한 정수는 " << val << "입니다.\n";
}

bool is_int(double x)
{
	if (x >= INT_MIN && x <= INT_MAX)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}