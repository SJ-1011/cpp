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
	struct people a = { "ȫ�浿", 30, "ȸ���", 3000000 };
	a.calc_pay();
	cout << "�� ���ɾ��� " << a.pay << "�Դϴ�." << endl;
}