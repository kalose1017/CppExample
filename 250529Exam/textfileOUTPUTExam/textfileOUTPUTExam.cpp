#include <iostream>
#include <fstream>
#include <cstdlib>
const int SIZE = 60;

int main()
{
	char filename[60];
	std::ifstream inFile;
	std::cout << "데이터 파일의 이름을 입력하세요. : ";
	std::cin.getline(filename, SIZE);
	inFile.open(filename);
	if (!inFile.is_open())
	{
		std::cout << filename << " 파일을 열 수 없습니다!" << std::endl;
		std::cout << "프로그램을 종료합니다!" << std::endl;
		exit(EXIT_FAILURE);
	}
	double value;
	double sum = 0.0;
	int count = 0;
	inFile >> value;
	while (inFile.good()) {
		++count;
		std::cout << value << " ";
		sum += value;
		inFile >> value;
	}
	std::cout << "\n";
	if (inFile.eof())
		std::cout << "파일의 끝에 도달했습니다!\n";
	else if (inFile.fail())
		std::cout << "데이터 불일치로 입력이 종료되었습니다.\n";
	else
		std::cout << "알 수 없는 이유로 입력이 종료되었습니다.\n";

	if (count == 0)
		std::cout << "데이터가 없습니다.\n";
	else
	{
		std::cout << "읽은 항목의 개수 : " << count << std::endl;
		std::cout << "합계 : " << sum << std::endl;
		std::cout << "평균 : " << sum / count << std::endl;
	}
	inFile.close();
}