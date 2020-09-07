/*
    Understanding input: cin, getline
*/

#include <iostream>
#include <vector>
#include <fstream> 
using namespace std;

int main()
{

    ofstream output_file;
    output_file.open("out_lab2_2_answers");
    vector<string> array_values; // declares an empty vector of strings
    array_values.push_back("10");
    array_values.push_back("4.5");
    array_values.push_back("abc");
    array_values.push_back("a");

    int val;

    cout << "Code for Q1" << endl;
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
    
        cout << "\tEnter an int "; 
        cin >> val; 

        cout << "\n\tCheck fail flag in cin " <<  cin.fail() << endl;
        cout << "\tYou entered " << val << endl << endl;
    }

    // Read the characters left in the cin buffer
    cin.clear();  // sets all flags to false
    string s;
    getline(cin, s);
    cout << "Check what is left unread in the cin buffer: " << s << endl;
    cout << "Nr. characters left unred in cin buffer: " << s.length() << endl;
  

    output_file << "\nQ1: (cin only) What happens when you run the code above? Explain why" << endl;
    string answer = ""; // enter your answer in between ""
    output_file << "Answer Q1: " << answer << endl;

    cout << "\nCode for Q2 and Q3" << endl;
    /* //uncomment when you get to Q2 and Q3
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 
        cin >> val;

        cout << "\n\tCheck fail flag in cin " <<  cin.fail()<< endl;

        string s; 
        getline(cin,s); 
        cout << "\tCheck what is left unread in the cin buffer: Length =" << s.length() 
             << "\tString " << s << endl;

        if (cin.fail())
        {
            cin.clear(); // clears the flags   
            cin.ignore(INT_MAX,'\n'); // ignore all characters from cin until new line '\n'
            cout << "\tERROR: The value you entered is not an integer. Try again." << endl;
        }
        
        cout << "\tYou entered " << val << endl << endl;
    }  
    */

    output_file << "\nQ2: (cin + fail+ignore) What happens when you run the code above? Explain why." << endl;
    answer = ""; // enter your answer in between ""
    output_file << "Answer Q2: " << answer << endl;

    output_file << "\nQ3: Is the problem of reading an integer value solved? Explain why." << endl;
    answer = ""; // enter your answer in between ""
    output_file << "Answer Q3: " << answer << endl;

    cout << "\nCode for Q4" << endl;
    // uncomment when you get to Q4
   /*
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 
        string s;
        getline(cin,s);     // read a line of input from the cin buffer - 
                            // up to and including '\n'
        val = stoi(s);  // stoi = converts a string into an integer 
                            // read more at http://www.cplusplus.com/reference/string/stoi/?kw=stoi
        cout << "\tYou entered " << val << endl << endl;
    }  
*/
    output_file << "\nQ4: (getline only) What happens when you run the code above? Explain why." << endl;
    answer = ""; // enter your answer in between ""
    output_file << "Answer Q4: " << answer << endl;

    // Comment the for loop for Q4 above - leave the answer to Q4
    
    cout << "\nCode for Q5" << endl;
    for (int i = 0; i < array_values.size(); i++)
    {
        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 
        string s;
        getline(cin,s); 
 
        try{     // read more about exceptions at https://www.tutorialspoint.com/cplusplus/cpp_exceptions_handling.htm
            val = stoi(s);
        }
        catch(const std::invalid_argument& ia)
        {
            cerr << "\tInvalid argument: " << ia.what() << '\n';
        }
        cout << "\tYou entered " << val << endl << endl;
    }  
    output_file << "\nQ5: (getline+stoi) What happens when you run the code above? Explain why." << endl;
    answer = ""; // enter your answer in between ""
    output_file << "Answer Q5: " << answer << endl;

    //6. Q6 Add code to enter a correct integer value = accept only 10, not 4.5, abc or a)
    cout << "\nCode for Q6" << endl;
    for (int i = 0; i < array_values.size(); i++)
    {

        cout << "\tEnter the value " << array_values.at(i) << endl;
        cout << "\tEnter an int "; 

        // add your code - it should display correct and value 10 only for 10, 
        //                 and incorrect, for rest of input values
    }
    output_file << "\nQ6: Explain your method to validate integer values entered" << endl;
    answer = ""; // enter your answer in between ""
    output_file << "Answer Q6: " << answer << endl;
    output_file.close();
}