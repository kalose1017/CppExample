#include <iostream>
const double* f1(const double ar[], int n);
const double* f2(const double[], int);
const double* f3(const double*, int);

int main()
{
	double av[3] = { 1112.3, 1542.6, 2227.9 };

	const double* (*p1)(const double*, int) = f1;
	auto p2 = *f2;
	std::cout << "함수 포인터 :\n";
	std::cout << "주소 값\n";
	std::cout << (*p1)(av, 3) << ": " << *(*p1)(av, 3) << std::endl;
	std::cout << p2(av, 3) << ": " << *p2(av, 3) << std::endl;

	const double* (*pa[3])(const double*, int) = { f1,f2,f3 };
	auto pb = pa;
	std::cout << "\n함수 포인터를 원소로 가지는 배열:\n";
	std::cout << "주소 값\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << pa[i](av, 3) << ": " << *pa[i](av, 3) << std::endl;
	}
	std::cout << "\n함수 포인터를 가리키는 포인터:\n";
	std::cout << "주소 값\n";
	for (int i = 0; i < 3; i++)
	{
		std::cout << pb[i](av, 3) << ": " << *pb[i](av, 3) << std::endl;
	}
	std::cout << "\n포인터를 원소로 가지는 배열을 가리키는 포인터\n";
	std::cout << "주소 값\n";
	auto pc = &pa;
	std::cout << (*pc)[0](av, 3) << ": " << *(*pc)[0](av, 3) << std::endl;
	const double*(*(*pd)[3])(const double*, int) = &pa;
	const double* pdb = (*pd)[1](av, 3);
	std::cout << pdb << ": " << *pdb << std::endl;
	std::cout << (*(*pd)[2])(av, 3) << ": " << *(*(*pd)[2])(av, 3) << std::endl;
}

const double* f1(const double ar[], int n)
{
	return ar;
}

const double* f2(const double ar[], int n)
{
	return ar+1;
}

const double* f3(const double ar[], int n)
{
	return ar+2;
}
