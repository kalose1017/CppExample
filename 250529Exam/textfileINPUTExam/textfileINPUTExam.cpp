#include <iostream>
#include <fstream>

int main()
{
	char automobile[50];
	int year = 0;
	int a_price;
	int d_price;

	std::ofstream outFile;
	outFile.open("carinfo.txt");

	std::cout << "자동차 메이커와 차종을 입력하시오. : ";
	std::cin.getline(automobile, 50);
	std::cout << "연식을 입력하시오. : ";
	std::cin >> year;
	std::cout << "구입 가격을 입력하시오. : ";
	std::cin >> a_price;
	d_price = 2 * a_price;

	std::cout.precision(2);
	std::cout.setf(std::ios_base::showpoint);
	std::cout << "메이커와 차종 : " << automobile << std::endl;
	std::cout << "연식 : " << year << std::endl;
	std::cout << "구입 가격 : " << a_price << std::endl;
	std::cout << "현재 가격 : " << d_price << std::endl;

	outFile.precision(2);
	outFile.setf(std::ios_base::showpoint);
	outFile << "메이커와 차종 : " << automobile << std::endl;
	outFile << "연식 : " << year << std::endl;
	outFile << "구입 가격 : " << a_price << std::endl;
	outFile << "현재 가격 : " << d_price << std::endl;

	outFile.close();
}