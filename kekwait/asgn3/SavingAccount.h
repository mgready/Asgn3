#pragma once
#include"Account.h"
#include"I_printable.h"
#include<iostream>
class SavingAccount: public Account,public I_printable
{
private:
	string name;
	double balance;
	double interest_rate = 1;
public:
	SavingAccount();
	SavingAccount(string name, double balance, double interest_rate);
	void setInterest_rate(double interest_rate);
	double getInterest_rate();
	virtual void deposit(SavingAccount sva,double dollar);
	virtual void print_data();
};

