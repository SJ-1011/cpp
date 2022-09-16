#include <iostream>
using namespace std;


int main(){
	cout << "이름을 입력하세요: ";
	
	char name[11];
	//한글은 5글자, 알파벳은 10개까지 입력 가능 한글 한 글자 당 2바이트
	//cin >> name; // 띄어쓰기하면 입력 안됨
	cin.getline(name, 11); // 띄어쓰기까지 입력 됨
	cout << "이름은 " << name << "입니다." << endl;
}
