#ifndef BANK_H
#define BANK_H

using namespace std;

class Bank
{
private:
	double bank;			//Holds the players bank

public:
	Bank();
	/*
	Function Purpose: To add money to a players bank
	Precondition: None
	Post Condition: Money has been added to a players bank.
	*/
	void addMoney(double amount);
	/*
	Function Purpose: To remove money from a players bank
	Precondition: bank - amount must be greater than or equal to 0
	Post Condition: Money has been removed from a players bank
	*/
	void removeMoney(double amount);

	double getBank();

}

#endif
