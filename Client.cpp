#include "Client.h"	
#include<iostream>
#include<string>
using namespace std;



Client::Client()
{
	phNum = 0;
	ClientNums++;
}
//---------------------------------------------------------------
Client::Client(string x,  string y, double z)
{
	
	this->address = y;
	this->phNum = z;
	ClientNums++;
}
//-----------------------------------------------------------------
int Client::getClientNums() { return ClientNums; }
void Client::setName(string k) { name = k; }
void Client::setAddress(const string h) { address = h; }
void Client::setPhNum(int g) { this ->phNum = g; }
std::string Client::getName() { return name; }
std::string Client::getAddress() { return address; }
int Client::getPhNum() { return phNum; }
void Client::setaccType(int x) {
	while (!(x > 0 && x < 3)) {
		cout << "wrong choice enter a num between 1:2 ==============>";
		cin >> x;
	}
	this->accType = x;
}
int Client::getaccType() {
	return accType;
}

void Client::cinData()
{
	/*string x ;
	std::cout << "please enter the client name ==========> ";
	cin >> x;
	setName(x);
	
	string y;
	std::cout << "please enter the client address =======> ";
	cin >> y;
	setAddress(y);*/
	double phno;
	std::cout << "please enter the client phone =========> ";
	std::cin >> phno;
	setPhNum(phno);
	int choice;
	std::cout << "what type of account do you like ? (1)basic  (2)saving - type(1) or type(2) ====> ";
	std::cin >> choice;
	setaccType(choice);


	
}

void Client:: withDraw(){}
void Client::deposit(){}
void Client ::coutData(){}
void Client::setAccountId(int ){}
int Client::ClientNums = 0;

