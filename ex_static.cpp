// example static local variables
// compute the running average of a set of numbers

#include <iostream>
using namespace std;

double running_average(int num);

double global_sum = 0.0;
int global_count = 0;

int main()
{
    int num = 0;
    cout  << "Enter an integer value greater than 0" << endl;
    cin >> num;
    
    double run_average = 0.0;
    while (num > 0)
    {
        run_average = running_average(num);
        cout  << "Current average is " << run_average << endl;

        global_sum += num;     
        global_count ++;

        cout  << "Enter an integer value greater than 0 = ";
        cin >> num;
        cout << endl;
    }

    cout << "The running average is " << run_average << endl;
    
    string answer;
    cout << "" << endl;
    cout << "Q1: Are count_times and sum variables known inside main? Explain your answer" << endl; 
    answer = ""; // write your answer
    cout << "Q1 answer: " << answer << endl;


    if (global_count > 0)
        cout << "\nGlobal running average " << global_sum/global_count << endl;
    else
        cout << "\nGlobal running average is 0.0" << endl; 
    
    cout << "" << endl;
    cout << "Q2: What is the difference between global_count and count_times \n";
    cout << " and global_sum and sum? Explain your answer" << endl;
    answer = ""; // write your answer
    cout << "Q2 answer: " <<  answer << endl;

    // For Q3:
    //      delete static in the function definition running_average
    //      recompile the program and run it again

    cout << "" << endl;
    cout << "Q3: What is the difference between count_times and sum\n";
    cout <<  "declared with static versus without static. Explain your answer." << endl; 
    answer = ""; // write your answer
    cout << "Q3 answer: " << answer << endl;

 

}

// running_average(int):
// Purpose: computes the average when a new number is passed
// Input: an integer value
// Returns the updated average
// Preconditions: none
double running_average(int num)
{
   static int count_times = 0;
   static int sum         = 0;
   
   count_times++;
   sum  += num;

   cout << "\tcount_times = " << count_times << endl;
   cout << "\tsum         = " << sum         << endl;
   return sum/(double)count_times;
}