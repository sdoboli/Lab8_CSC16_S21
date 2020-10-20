#include <iostream>
#include <string>
using namespace std;

// INCLUDES THE MONEY AND ACCOUNT CLASS DEFINITIONS

#ifndef CLASSES
#define CLASSES
class Money{
		
	private:
            int dollars; // >= 0
			int cents;   // >=0 and < 100		  		
	public: 
		Money();  
		Money (int new_dollars, int new_cents); 
		void add(int add_dollars, int add_cents); 
        void add(const Money &add_money); 
		void subtract(int sub_dollars, int sub_cents);
		void subtract(const Money &sub_money);
		void display() const;  		 									   
	    int  get_dollar() const;  
        int  get_cents()  const;  
		bool isBigger(const Money &other); 	
        bool operator==(const Money &other);
};

class Account
{
  	private: 
  	   	Money money;       // no direct access to data members of amount
  	   	string account_id;  // a random string of 10 digits 				
  	public: 
  		Account(int start_dollars = 0, int start_cents = 0);
  		void withdraw(int minus_dollars, int minus_cents);
  		void deposit(int add_dollars, int add_cents);
  		void transfer_from(Account &source, const Money &tr_amount);	
		void display() const;
  		bool isLess(int sub_dollars, int sub_cents) const;
  		bool isLess(const Money &sub_amount) const;	
		bool isEqual(int sub_dollars, int sub_cents) const;
  		bool isEqual(const Money &sub_amount) const;	
}; 
#endif