#include <iostream>
void countdown(int n);

int main()
{
	int a = 0;
	int b = 0;
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
}

void countdown(int n)
{
	std::cout << "카운트 다운 ... " << n << " (n at " << &n << ")" << std::endl;
	if (n > 0)
	{
		countdown(n-1);
	}
	std::cout << n << ": Kaboom!" << " (n at " << &n << ")" << std::endl;
}
