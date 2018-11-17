#pragma once
#include"BankApplication.h"
#include"Client.h"
class BankAccount:public Client	 
{
protected:
	double accountID;
	double balance;
public:
	BankAccount();
	~BankAccount();
	BankAccount(double, double);
	void setAccountId(double);
	void setBalance(double);
	double getAccountId();
	double getBalance();
	virtual void withDraw();
	virtual void deposit();
	virtual void coutData();

};

