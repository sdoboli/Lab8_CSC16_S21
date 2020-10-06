#include <iostream>
#include <string>
using namespace std;

int int2bit(int);
bool is_palindrome(string str);

int main()
{
	/*int n;
	cout << "Enter an integer " << endl;
	cin >> n;
	while (n >= 0)
	{
		int bits = int2bit(n);
		cout << "OUTPUT " <<  n << " needs " << bits << " bits"<<  endl;
		cout << "\nEnter an integer " << endl;
	    cin >> n;
	}
    */
   string test[] = {"noon", "reviver", "", "a", "ab", "abc"};
   bool results[] = {true, true, true, true, false, false};
   const int SIZE_TEST = 6;
   for (int i = 0; i < SIZE_TEST; i++)
   {
       if (is_palindrome(test[i]) == results[i])
            cout << "Correct ";
        else
            cout << "Incorrect ";
        cout << test[i] << endl;
   }
	
} 

int int2bit(int n)
{
    cout << "BEGIN int2bit(" << n << ")" << endl;
     if (n < 2)
       return 1;
     else
	{
       int bits = int2bit(n/2)+1;
       cout << "END int2bit(" << n << ") = " << bits << endl;
       return bits;
	}
}


bool is_palindrome(string str) // objects are passed by value
{
    if (str.length() <=1)
        return true;
    else
    {
        // compare first and last characters
        if (str[0] == str[str.length()-1])
        {
            // shrink the string by one character from both ends
            // substr - extracts a string starting from position = first
            // parameter, and a number of characters = second parameter
            string remain_str = str.substr(1,str.length()-2);
            //  cout << "Remain str " << remain_str << endl;
            // recursive call
            return is_palindrome(remain_str);
        }
        else
            return false;   
    }
     
}