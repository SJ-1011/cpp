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
			cout << car_num << "�� Ÿ�̹� ��Ʈ ��ü ����Դϴ�.\n";
		else
			cout << car_num << "�� ��ü����� �ƴմϴ�.\n";
	}
	void car_reg() {
		if (atol(car_num) >= 1 && atol(car_num) <= 10)
			cout << "���� ��� �����Դϴ�.\n";
		else if (atol(car_num) >= 11 && atol(car_num) <= 20)
			cout << "��⵵ ��� �����Դϴ�.\n";
	}

};

int main()
{
	car_info car1;
	strcpy_s(car1.car_name, "���׽ý�");
	strcpy_s(car1.car_num, "33�� 1234");
	car1.distance = 75000;
	car1.st_msg();
	car_info car2;
	string str;
	cin >> str;
	strcpy_s(car2.car_num, str.substr(0, 2).c_str());
	car2.car_reg();

}