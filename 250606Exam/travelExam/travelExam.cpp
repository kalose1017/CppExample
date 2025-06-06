#include <iostream>

struct travel_time
{
	int hour;
	int min;
};

travel_time sum(travel_time t1, travel_time t2);
void show_time(travel_time t);

int main()
{
	travel_time day1 = { 5,45 };
	travel_time day2 = { 4,55 };

	travel_time trip = sum(day1, day2);
	std::cout << "이틀간 소요시간 : ";
	show_time(trip); 

	travel_time day3 = { 4,32 };
	std::cout << "사흘간 소요시간 : ";
	show_time(sum(trip, day3));
}

travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;
	int Total = (t1.hour * 60) + t1.min + (t2.hour * 60) + t2.min;
	total.hour = Total / 60;
	total.min = Total % 60;
	return total;
}

void show_time(travel_time t)
{
	std::cout << t.hour << "시간 " << t.min << "분" << std::endl;
}
