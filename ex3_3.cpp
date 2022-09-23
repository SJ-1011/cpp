#include <iostream>
using namespace std;
struct people
{
	char irum[20];
	int age;
	char job[20];
	int pay;
	void calc_pay();
};

void people::calc_pay()
{
	pay = pay - (pay * 0.033);
}

int main(void)
{
	people a = { "홍길동", 30, "회사원", 3000000 };
	people a2 = { "장길동", 40, "회사원", 4000000 };
	a.calc_pay();
	a2.calc_pay();
	cout << "실 수령액은 " << a.pay << "입니다." << endl;
	cout << "실 수령액은 " << a2.pay << "입니다." << endl;
}
// 구조체의 재사용성
