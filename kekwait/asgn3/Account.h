#pragma once
#include<string>
#include<cstring>
using namespace std;
class Account
{
private:
	string name="Unnamed Account";
	double balance=0.0;
	double dollar;
	double euros;
	double tenge;
	
public:

	Account();
	Account(string name, double balance);
	string getName() const;
	virtual void deposit(Account acc,double dollar);
	virtual void wihdraw(Account acc, double dollar);
	void setName(string name);
	void setBalance(double balance);
	void setDollar(double dollar);
	void setEuros(double euros);
	void setTenge(double tenge);
	double getBalance() ;
	double getTenge() const;
	double getDollar() const;
	double getEuros() const;
	





};

