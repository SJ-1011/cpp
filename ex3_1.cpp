#include <iostream>
using namespace std;
struct people
{
	char irum[20];
	int age;
	char job[20];
	int pay;
	void calc_pay()
	{
		pay = pay - (pay * 0.033);
	}
};
int main(void)
{
	struct people a = { "홍길동", 30, "회사원", 3000000 };
	cout << "월급은 " << a.pay << "입니다." << endl;
	a.calc_pay();
	cout << "실 수령액은 " << a.pay << "입니다." << endl;
}
