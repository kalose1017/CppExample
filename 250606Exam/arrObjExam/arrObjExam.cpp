#include <iostream>
#include <array>
#include <string>

const int Seasons = 4;
const std::array<std::string, Seasons> Sname = { "Spring", "Summer", "Fall" , "Winter" };

void fill(std::array<double, Seasons>* pa);
void show(std::array<double, Seasons> pa);

int main()
{
	std::array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);
}

void fill(std::array<double, Seasons>* pa)
{
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Sname[i] << "에 소요되는 비용 : ";
		std::cin >> (*pa)[i];
	}
}

void show(std::array<double, Seasons> pa)
{
	int total = 0;
	std::cout << "합계" << std::endl;
	for (int i = 0; i < Seasons; i++)
	{
		std::cout << Sname[i] << " : $" << pa[i] << std::endl;
		total += pa[i];
	}
	std::cout << "총 비용 : $" << total << std::endl;
}
