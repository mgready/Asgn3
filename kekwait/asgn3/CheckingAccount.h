#pragma once
#include"Account.h"
#include"I_printable.h"
#include<iostream>
class CheckingAccount:public Account, public I_printable
{
private:
	string name;
	double balance;
	double fee=1.5;

public:
	CheckingAccount();
	CheckingAccount(string name, double balance, double fee);
	virtual void print_data();
	const string getName()const;
	void setName(string name);
	double getBalance() const;
	void setBalance(double balance);
	void setFee(double fee);
	double getFee();
	virtual void withdraw(CheckingAccount cha,double dollar);

};

