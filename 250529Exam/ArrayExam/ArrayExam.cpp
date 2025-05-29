#include <iostream>
const int Cities = 5;
const int Years = 4;

void CityYearTemp()
{
	const char cities[Cities][25]{ "Seoul", "Jeju", "Busan", "Gangneung", "Daegu" };
	int maxTemps[Years][Cities]
	{
		{35,32,33,36,35},
		{33,32,34,35,31},
		{33,34,32,35,34},
		{36,35,34,37,35}
	};
	std::cout << "2011년부터 2015년까지 연중 최고 온도\n";
	for (int i = 0; i < Cities; i++)
	{
		std::cout << cities[i] << "\t";
		for (int j = 0; j < Years; j++)
		{
			std::cout << maxTemps[j][i] << "\t";
		}
		std::cout << std::endl;
	}
}

int main()
{
	CityYearTemp();
}