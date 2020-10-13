#include <iostream>
#include <string>
using namespace std;

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

