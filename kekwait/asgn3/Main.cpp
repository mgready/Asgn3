#include<iostream>
#include"Account.h"
#include"SavingAccount.h"
#include"CheckingAccount.h"
#include"TrustAccount.h"
#include<vector>
#include"Redistribution.cpp"
using namespace std;
vector <Account> v1;
int main()
{

	CheckingAccount a1("Azamat", 200, 1.5);
	a1.withdraw(a1, 200);
	
	SavingAccount a2("Andreu", 30000, 1.5);
	a2.deposit(a2, 5000);
	
	TrustAccount a3("Magzhan", -500, 1.5);
	a3.deposit(a3,500);
	
	TrustAccount a4("Conor",5000, 1.5);
	a4.withdraw(a4, 5000);




	cout << "These are our accounts balances:" << endl;
	v1.push_back(a1);
	v1.push_back(a2);
	v1.push_back(a3);
	v1.push_back(a4);
	
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i].getBalance() << endl;
	}
	cout << "lets increase our accounts balance for 50000 in total by method redTenge():"<<endl;
	Redistribution ::redTenge(50000, v1);
	
	for (int i = 0; i < v1.size(); i++) {
		cout << v1[i].getBalance()<<endl;
	}
 



	return 0;
}