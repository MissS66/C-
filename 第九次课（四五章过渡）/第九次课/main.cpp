#include"SavingAmount.h"
#include<iostream>
using namespace std;
int main() {
	SavingAmount user1(1, 111, 0.015);
	SavingAmount user2(1, 1112, 0.015);
	cout << "开户信息" << endl;
	user1.show();

	user1.deposit(5, 500);
	user1.deposit(45, 5500);
	user1.settle(90);//90天结息
	cout << "账户信息" << endl;
	user1.show();

	user2.deposit(25, 10000);
	user2.withdraw(60, 7000);
	user2.show();

	SavingAmount::showALLB();
	return 0;

}