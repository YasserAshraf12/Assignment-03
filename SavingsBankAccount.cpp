#include "SavingsBankAccount.h"
#include<iostream>
//--------------------------------------------------------------------------
SavingsBankAccount::SavingsBankAccount()
{
	balance = 0;
	accountID = 0;
}
//---------------------------------------------------------------------------
SavingsBankAccount::SavingsBankAccount(double x, double y)
{
	this->balance = x;
	if (balance >= minimumBalance)
	{
		std::cout << "Welcome!" << std::endl;
	}
	else {
		std::cout << "Your Balance Can't Manage this Operation" << std::endl;
	}
}
//------------------------------------------------------------------------------
void SavingsBankAccount::setAccountId(int Id) { accountID = Id; }
void SavingsBankAccount::setBalance(double b) { balance = b; }
double SavingsBankAccount::getAccountId() { return accountID; }

double SavingsBankAccount::getBalance() { return balance; }
//------------------------------------------------------------------------------
void SavingsBankAccount::withDraw()
{
	std::cout << "Please Enter The Withdrawn Needed Value: ";
	double value = 0;
	std::cin >> value;
	if ((this->balance - value) < this->minimumBalance)
	{
		this->balance = (this->balance - value);
		std::cout << "Account ID : " << this->accountID << std::endl;
		std::cout << "Your New Balance : " << this->balance << std::endl;
	}
	else {
		std::cout << "Sorry. This is More Than What You Can Withdraw." << std::endl;
	}
}
//------------------------------------------------------------------------------------
void SavingsBankAccount::deposit()
{
	std::cout << "Please Enter The Deposit Value: ";
	double value;
	std::cin >> value;
	if (value >= 100)
	{
		this->balance = (this->balance) + value;
		std::cout << "Account ID : " << this->accountID << std::endl;
		std::cout << "Your New Balance : " << this->balance << std::endl;
	}
	else {
		std::cout << "Very Small Value Of Money To Be Deposited " << std::endl;
	}
}
//--------------------------------------------------------------------------------------
void SavingsBankAccount::coutData() {
	cout << "endl "<<"---------------------------------------------";
	/*cout << " name :: "<<this->name << endl;
	cout << " address :: " << this->address << endl;*/
	cout << "phone :: " << this->phNum << endl;
	cout << " ID :: " << getAccountId() << endl;
	if (getaccType() == 1)cout << " account type is nourmal bankAccount" << endl;
	else cout << "account tyoe is savingBankAcount" << endl;
	cout << "balance :: " << getBalance() << endl;

}

