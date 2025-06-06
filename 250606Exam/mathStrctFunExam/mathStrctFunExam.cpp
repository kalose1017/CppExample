#include <iostream>
#include <cmath>

struct polar
{
	double distance;
	double angle;
};

struct Rect
{
	double x;
	double y;
};

void rect_to_polar(const Rect* pxy, polar* pda);
void show_polar(const polar* pda);

int main()
{
	Rect rplace;
	polar ppolar;

	std::cout << "x값과 y값을 입력하십시오. : ";
	while (std::cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &ppolar);
		show_polar(&ppolar);
		std::cout << "x값과 y값을 입력하십시오 (끝내려면 q를 입력) : ";
	}
	std::cout << "프로그램을 종료합니다." << std::endl;
}

void rect_to_polar(const Rect* pxy, polar* pda)
{
	pda->distance = sqrt(pxy->x * pxy->x + pxy->y * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}

void show_polar(const polar *dapos)
{
	const double Rad_to_ang = 180 / 3.141592;
	std::cout << "거리 : " << dapos->distance << std::endl;
	std::cout << "각도 : " << dapos->angle * Rad_to_ang << "도" << std::endl;
}
