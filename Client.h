#pragma once
#include <iostream>
#include<string>

#include"BankApplication.h"
using namespace std;

class Client 
{
private:
	int accType;
protected:
	string name;
	string address;
	int phNum;
	static int ClientNums;

public:
	void setaccType(int);
	void virtual setAccountId(int);
	Client();
	Client(string, string, double);
	static int getClientNums();
	int getaccType();
	void setName( string);
	void setAddress(const string);
	void setPhNum(int);
	std::string getName();
	std::string getAddress();
	 int getPhNum();
	void cinData();
	virtual void withDraw();
	virtual void deposit();
	virtual void coutData();
	//----------------------------------------------------

};



