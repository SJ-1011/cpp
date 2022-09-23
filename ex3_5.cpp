#include <iostream>
#include <cstring>
#include <string>
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
	void car_reg() {
		if (atol(car_num) >= 1 && atol(car_num) <= 10)
			cout << "서울 등록 차량입니다.\n";
		else if (atol(car_num) >= 11 && atol(car_num) <= 20)
			cout << "경기도 등록 차량입니다.\n";
	}

};

int main()
{
	car_info car1;
	strcpy_s(car1.car_name, "제네시스");
	strcpy_s(car1.car_num, "33나 1234");
	car1.distance = 75000;
	car1.st_msg();
	car_info car2;
	string str;
	cin >> str;
	strcpy_s(car2.car_num, str.substr(0, 2).c_str());
	car2.car_reg();

}