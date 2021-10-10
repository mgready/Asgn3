#include "TrustAccount.h"
TrustAccount::TrustAccount() {
	name = "Unnamed";
	balance = 0.0;
	interest_rate = 1.0;
}
TrustAccount::TrustAccount(string name,double balance,double interest_rate) {
	this->name = name;
	this->balance = balance;
	this->interest_rate = interest_rate;
}

void TrustAccount::deposit(TrustAccount sva, double dollar)
{
	int bonus=0;
	if (dollar >= 1000)
	{
		bonus = 10;
	}
	double blnc = sva.getBalance();
	double bl = (blnc + dollar) * ((1 + interest_rate) / 100);
	setBalance(blnc + dollar + bl+bonus);
}
void TrustAccount::withdraw(TrustAccount cha, double dollar)
{
	double blnc = cha.getBalance();
		if (blnc * 20 / 100 > dollar) {
			double bl = blnc - dollar;
			setBalance(bl - dollar - (bl * cha.getInterest_rate() / 100));
		}
		else
		{
			cout << "The withdraw should not bigger than 20%" << endl;
		}
}
	
void TrustAccount::print_data()
{
	cout << getName() << " " << getBalance() << endl;
}
const string TrustAccount::getName() const
{
	return name;
}

double TrustAccount::getBalance() const
{
	return balance;
}

double TrustAccount::getInterest_rate() const
{
	return interest_rate;
}

void TrustAccount::setName(string name)
{
	this->name = name;
}

void TrustAccount::setBalance( double balance)
{
	this->balance = balance;
}

void TrustAccount::setInterest_rate( double interest_rate)
{
	this->interest_rate = interest_rate;
}
