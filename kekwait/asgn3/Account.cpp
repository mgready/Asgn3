#include "Account.h"
Account::Account() {
	name = "Unnamed";
	balance = 0.0;
}
Account::Account(string name, double balance)
{
	this->name = name;
	this-> balance = balance;
}

void Account::deposit(Account acc, double dollar){}
 void Account::wihdraw(Account acc,double dollar) {}
void Account::setName(string name)
{
	this->name = name;
}
void Account::setBalance(double balance)
{
	this->balance= balance;
}
void Account::setDollar(double dollar)
{
	this->dollar = dollar;
}
void Account::setEuros(double euros)
{
	this->euros = euros;
}
void Account::setTenge(double tenge)
{
	this->tenge = tenge;
}

double Account:: getBalance() 
{
	return balance;
}
double Account::getTenge() const
{
	return tenge;
}
double Account::getDollar() const
{
	return dollar;
}
double Account::getEuros() const
{
	return euros;
}
string Account:: getName() const {
	return name;
}
