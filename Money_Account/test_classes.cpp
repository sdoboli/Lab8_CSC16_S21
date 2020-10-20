#include <iostream>
#include <string>
#include <cstdlib>
#include <random>
#include <ctime>
using namespace std;
#include "header.h"

int main()
{
    srand(time(NULL));
    cout << "TEST ACCOUNT CLASS \n";
    // ADD CODE FOR EACH NUMBERED COMMENT LINES

    // Declare an Account object called my_account with $80.50.
    Account my_money(80,50);
    cout << "my_account "; 
    // 2. Add code to display my_account. 
    // 3. Add $20.75 amount to my_account. Call function deposit in the Account class 
    cout << "my_account  ";
    // 4. Display the amount in my_account.
    
    Money test_money(101, 25);
    // uncomment line below: 
    // cout << "TEST DEPOSIT $20.75 " << ((my_account.isEqual(test_money) ? "PASSED ": "NOT PASSED")<< endl;
    
    Account my_savings(200,0);
    // 5. Withdraw from my_savings the amount $5.50 (call function withdraw)
    // 6. Display the amount in my_savings. 
    cout << "my_savings ";
    Money test_sub_money(194,50);
    // uncomment line below: 
    // cout << "TEST WITHDRAW $5.50 " << ((savings.isEqual(test_sub_money) ? "PASSED ": "NOT PASSED")<< endl;

    // 7. Transfer $15.75 from my_savings account into my_money: call function 
    //    transfer_from
    cout << "my_money ";
    my_money.display();
    cout << "my_savings ";
    my_savings.display();
    // uncomment line below
    // cout << "TEST TRANSFER INTO savings " << ((savings.isEqual(178, 75) ? "PASSED ": "NOT PASSED")<< endl;  

    cout << "TEST WITHDRAW TOO MUCH MONEY " << endl;
    my_money.withdraw(200,0);

    cout << "TEST TRANSFER TOO MUCH MONEY " << endl;
    Money need_money(200,0);
    my_money.transfer_from(my_savings, need_money);

}