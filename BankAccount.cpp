#include "BankAccount.h"
#include <iostream>

BankAccount::BankAccount()
{
	this->accountID = 0;
	this->balance = 0;
}
BankAccount::BankAccount(double Id, double b)
{
	this->accountID = Id;
	this->balance = b;
}
void BankAccount::setAccountId(double Id) { accountID = Id; }
void BankAccount::setBalance(double b) { balance = b; }
double BankAccount::getAccountId() { return accountID; }
double BankAccount::getBalance() { return balance; }
void BankAccount::withDraw()
{
	std::cout << "Please Enter The Withdrawn Needed Value: ";
	double value = 0;
	std::cin >> value;
	if (value < this->balance)
	{
		this->balance = (this->balance - value);
		std::cout << "Account ID : " << this->accountID << std::endl;
		std::cout << "Your New Balance : " << this->balance << std::endl;
	}
	else {
		std::cout << "Sorry. This is More Than What You Can Withdraw." << std::endl;
	}
}
void BankAccount::deposit()
{
	std::cout << "Please Enter The Deposit Value: ";
	double value;
	std::cin >> value;
	this->balance = (this->balance) + value;
	std::cout << "Account ID : " << this->accountID << std::endl;
	std::cout << "Your New Balance : " << this->balance << std::endl;
}
void BankAccount::coutData() {
	cout << "endl " << "---------------------------------------------";
	/*cout << " name :: "<<this->name << endl;
	cout << " address :: " << this->address << endl;*/
	cout << "phone :: " << this->phNum << endl;
	cout << " ID :: " << getAccountId() << endl;
	if (getaccType() == 1)cout << " account type is nourmal bankAccount" << endl;
	else cout << "account tyoe is savingBankAcount" << endl;
	cout << "balance :: " << getBalance() << endl;

}


BankAccount::~BankAccount()
{
}
