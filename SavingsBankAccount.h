#pragma once
#include"BankAccount.h"

class SavingsBankAccount   :public BankAccount
{
protected:
	double accountID;
	double balance;
private:
	const double minimumBalance=1000;
public:
	SavingsBankAccount();
	SavingsBankAccount(double, double);
	void setAccountId(int);
	void setBalance(double);
	double getAccountId();
	double getBalance();
	void coutData();
	void withDraw();
	void deposit();
};

