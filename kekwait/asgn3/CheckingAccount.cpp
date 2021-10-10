#include "CheckingAccount.h"
CheckingAccount::CheckingAccount()
{
	name = "Unnamed acc";
	balance = 0.0;
	fee = 1.5;
}
CheckingAccount::CheckingAccount(string name,double balance, double fee)
{
	this->name = name;
	this->balance=balance;
	this->fee=fee;
}
const string CheckingAccount::getName()const {
	return name;
}

void CheckingAccount::setName(string name)
{
	this->name = name;
}

double CheckingAccount::getBalance() const
{
	return balance;
}

void CheckingAccount::setBalance(double balance)
{
	this->balance = balance;
}
void CheckingAccount::setFee(double fee)
{
	this->fee=fee;
}
double CheckingAccount::getFee()
{
	return fee;
}
void CheckingAccount::print_data()
{
	cout << getName() << " " << getBalance() << endl;
}
void CheckingAccount::withdraw(CheckingAccount cha, double dollar)
{
	double blnc = cha.getBalance();
	double bl = blnc - dollar;
	setBalance(bl - dollar - (bl * fee / 100));
}
