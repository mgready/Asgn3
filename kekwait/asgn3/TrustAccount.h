#pragma once
#include"SavingAccount.h"
#include"CheckingAccount.h"
#include<iostream>
class TrustAccount:public Account, public I_printable
{
private:
	string name;
	double balance;
	double interest_rate;

public:
	TrustAccount();
	TrustAccount(string name, double balance, double interest_rate);
	virtual void deposit(TrustAccount sva, double dollar);
	virtual void withdraw(TrustAccount cha, double dollar);
	virtual void print_data();
	const string getName() const;
	 double getBalance() const;
	 double getInterest_rate() const;
	 void setName(string name);
	 void setBalance(double balance);
	 void setInterest_rate(double interest_rate);


};

