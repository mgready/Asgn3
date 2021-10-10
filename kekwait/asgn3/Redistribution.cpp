
#include<iostream>
#include"Account.h"
#include"SavingAccount.h"
#include"CheckingAccount.h"
#include"TrustAccount.h"
#include<vector>
class Redistribution
{

public:
    Redistribution() {
        
    }
    static void  redTenge(double tenge, vector <Account> &v1) {
        for (int i = 0; i < v1.size(); i++) {
            v1[i].setBalance(v1[i].getBalance() + tenge / v1.size());
        }
    }
};


