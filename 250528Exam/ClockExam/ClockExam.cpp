#include <iostream>
#include <ctime>

int main()
{
	float secs;
	std::cout << "지연시간을 초단위로 입력 : ";
	std::cin >> secs;
	clock_t delay = secs * CLOCKS_PER_SEC; // 지연시간을 알려주는 단위 클록 수로 변환
	std::cout << "카운트를 시작합니다.\a\n";
	clock_t start = clock();
	while (clock() - start < delay)
	{
		;
	}
	std::cout << "종료\a\n";
	return 0;
}