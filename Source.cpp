/*program Banking system
Author:Yasser Ashraf - Youssef Ahmed Abd El Samad
Date: 17-11-2018
version: 2.0
*/

#include <iostream>
#include"BankApplication.h"
#include"BankAccount.h"
#include"Client.h"
#include"SavingsBankAccount.h"

using namespace std;
int Clientnums = 0;


int main() {
	
	BankApplication A1;
	Client** c1 = new Client*[100];
	int x=9;
	while (x) {
		std::cout <<endl << "-------------------------------------------"<<endl <<"Welcome to FCI Banking Application" << std::endl;
		std::cout << "1. Create a New Account" << std::endl;
		std::cout << "2. List Clients and Accounts" << std::endl;
		std::cout << "3. Withdraw Money" << std::endl;
		std::cout << "4. Deposit Money " << std::endl;
		cout << "0. for exist"<<endl;
		std::cout << "Please Enter The Choice =============>  ";
		bool check = true;
		cin >> x;
		A1.setChoice(x);
		if (A1.getChoice() == 1) {
			c1[Clientnums] = new BankAccount();
			c1[Clientnums]->cinData();
			if (c1[Clientnums]->getaccType() == 2) {
				c1[Clientnums] = new SavingsBankAccount;
				cout << "you must add 1000 $ first to make this "<<endl;
				c1[Clientnums]->setAccountId(Clientnums+1);
				c1[Clientnums]->deposit();
				Clientnums++;
				
				cout <<endl<<"----------------------------------------------";
			}
			else {
				Clientnums++;
				cout << "your ID " << Clientnums ;
			}

		}
		else if (A1.getChoice() == 2) {
			for (int i = 0; i < Clientnums; i++) {
				c1[i]->coutData();
			}

		}
		else if (A1.getChoice() == 3) {
			int id;
			cout << "enter your id";
			cin >> id;
			c1[id-1]->withDraw();

		}
		else if (A1.getChoice() == 4) {
			int id;
			cout << "enter your id";
			cin >> id;
			c1[id-1]->deposit();

		}
		else if (A1.getChoice() == 0) {

		}
	}
}