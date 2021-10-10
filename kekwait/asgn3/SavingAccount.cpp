#include "SavingAccount.h"
SavingAccount::SavingAccount() {
	name = "unnamed";
	balance = 0.0;
	interest_rate = 1.0;
}
SavingAccount::SavingAccount(string name,double balance,double interest_rate)
{
	this->name = name;
	this->balance = balance;
	this->interest_rate = interest_rate;
}
void SavingAccount::setInterest_rate(double interest_rate)
{
	this->interest_rate = interest_rate;
}
double SavingAccount::getInterest_rate()
{
	return interest_rate;
}
 void SavingAccount::deposit(SavingAccount sva,double dollar)
{
	 double blnc = sva.getBalance() ;
	 double bl = (blnc + dollar) * ((1 + interest_rate) / 100);
	 setBalance(blnc + dollar + bl);
}
 void SavingAccount::print_data()
 {
	 cout << getName() << " " << getBalance() << endl;
 }