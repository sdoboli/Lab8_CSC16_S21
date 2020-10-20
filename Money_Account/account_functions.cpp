#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
#include "header.h"

/*
    Default/Specific constructor: 
    Purpose: sets a new account with random id and  $start_dollars.start_cents money
    Processing: 
  		Set id: initialize account_id with empty string
                repeat 10 times 
  		           generate a random integer between 0 and 9 -> n = rand()
  		           convert integer to character char c = '0' + n;
  		           append c to the string account_id
*/
Account::Account(int start_dollars, int start_cents)
: money(start_dollars, start_cents)  // initialization list - calls the specific constructor in Money
{
    cout << "Account constructor" << endl;
    // add your code to set the random account_id
}

/*	
    withdraw(int minus_dollars, int minus_cents) 
    Purpose: subtract $minus_dollars.minus_cents from the account
    Processing: 
        Check that you have enough money in the calling account object
            if (amount.get_dollars() > minus_dollars || ...)
  	            amount.subtract(minus_dollars, minus_cents);
        Use functions in the Money class (the money data member is a Money object)  		
  	Precondition - you have enough money in the account
      
*/
void Account::withdraw(int minus_dollars, int minus_cents)
{
     // add your code 
}

/*
  	deposit(int add_dollars, int add_cents) 
    Purpose: add $add_dollars.add_cents to the account 
    Processing: 
            use the function add in the Money class to add to the
            money object 
  	Precondition = add_dollars and add_cents are positive
*/
void Account::deposit(int add_dollars, int add_cents)
{
     // add your code 

}

/*				
  	transfer_from(Account &source, const Money &tr_amount) 
  	Purpose: transfer tr_amount from the source Account object into the 
             calling object
    Processing: use functions you already wrote in Account and Money
  	Precondition: check that enough money are available in object source
                  (use  isBigger function in the Money class )
*/
void Account::transfer_from(Account &source, const Money &tr_amount)
{
    // add your code 
}

/*			
  	isLess(int sub_dollars, int sub_cents) 
    Purpose: returns true if amount in calling object 
  	         is less than amount in other_dollars.other_cents. 
    Processing: use functions in the Money account. 
                You can declare a new Money object with other_dollars and other_cents
*/
bool Account::isLess(int other_dollars, int other_cents) const
{
    // add your code 
}

/*  	
   isLess(const Money &amount)
   Purpose: does the same thing as above, but the amount is stored 
            in a Money object amount
    Processing: use functions in the Money class
 */
bool Account::isLess(const Money &amount) const
{
    // add your code 
}
/*
    bool isEqual(int other_dollars, int other_cents) const
    Purpose: returns true if account has the same amount as
            $ other_dollars.other_cents
     Processing: use functions in the Money account. 
                You can declare a new Money object with other_dollars and other_cents
*/
bool Account::isEqual(int other_dollars, int other_cents) const
{

}
/*
    bool Account::isEqual(const Money &amount) const
    Purpose: returns true if account has the same amount as
             in Money object amount
     Processing: use functions in the Money account. 
*/
bool Account::isEqual(const Money &amount) const
{

}
/*
    void Account::display()
    Purpose: displays account information
*/
void Account::display() const
{
    cout << "account " << account_id << " has $" << money.get_dollar() << 
         "." << money.get_cents() << endl;
}
