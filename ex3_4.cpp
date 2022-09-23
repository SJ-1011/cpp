#include <iostream>
#include <cstring>
using namespace std;
class car_info
{
public:
	char car_name[30];
	char car_num[12];
	int distance;

public:
	void st_msg()
	{
		if (distance >= 80000)
			cout << car_num << "의 타이밍 벨트 교체 대상입니다.\n";
		else
			cout << car_num << "의 교체대상이 아닙니다.\n";
	}
};

int main()
{
	car_info car1;
	strcpy_s(car1.car_name, "제네시스");
	strcpy_s(car1.car_num, "33나 1234");
	car1.distance = 75000;
	car1.st_msg();


}


