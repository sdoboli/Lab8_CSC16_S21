#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "POINTERS " << endl;
 	int i =10; 
    cout << "\n1. -----------------------------------------------" << endl;
    cout << "Value of i is \t\t"      << i << endl;
    cout << "Address of i is \t"      << &i << endl;
 	cout << "Size of i in bytes is \t" << sizeof(i) << endl;
 	
    double j = 20.5;
    cout << "\nValue of j is: \t\t"     << j << endl;
    cout << "Address of j is: \t"       << &j << endl;
 	cout << "Size of j in bytes is: \t" << sizeof(j) << endl;

    // Q1 add to string answer your answer to Q1 (HINT: look at the last two hexa digits of each address)
    string answer = "Q1 answer:"; 
    cout << "\nQ1: What is the difference in bytes between the address of i and the address of j? \n" <<
            "      Explain what you observe in terms of the size of i and size of j. \n";
    cout << answer << endl;

 	int *ptr1 = 0; // ptr1 is declared as a pointer to an integer
                   // ptr1's value is 0 meaning that it points to no actual data (null pointer)
                      
 	ptr1 = &i;    // ptr1 is initialized with the memory address where i stored.
                  // pointers values are memory addresses of data.
                  // pointer type limits the type of data stored in those addreses:
                  // e.g. a pointer to an int cannot be initialized with the address of a double
 	
    cout << "\n2. -----------------------------------------------" << endl;
    cout << "Value of the pointer ptr1 is: \t"    << ptr1 << endl; // expect a memory address
  	cout << "Value pointed by ptr1 is: \t"        << *ptr1 << endl; // expect an integer value
 	cout << "Address of ptr1 is: \t\t"            << &ptr1 << endl; // expect a memory address
 	cout << "Size of ptr1 in bytes is: \t"        << sizeof(ptr1) << endl;
 	
    // Q2 add to string answer your answer to Q2
    answer = "\nQ2 answer:"; 
    cout  << "\nQ2: What is the difference in bytes between the address of j and the address of ptr1? \n" << 
             "      Explain what you observe in terms of the size of j and the size of ptr1. \n";
    cout  << answer << endl;

    double *ptr2 = &j; // ptr2 is a pointer to a double; ptr2 is initialized with the address of j

    cout << "\n3. -----------------------------------------------" << endl;
    cout << "Value of the pointer ptr2 is: \t" << ptr2 << endl; // expect a memory address
  	cout << "Value pointed by ptr2 is: \t"     << *ptr2 << endl; // expect a double value
 	cout << "Address of ptr2 is: \t\t"         << &ptr2 << endl; // expect a memory address
 	cout << "Size of ptr2 in bytes is: \t"     << sizeof(ptr2) << endl;
    
    // Q3 add to string answer your answer to Q3
    answer = "Q3 answer:"; 
    cout  << "\nQ3: What is the relationship between *ptr2 and j and what\n" << 
             "     is the role of the '*' in front of the pointer? Explain what you observe.\n";
    cout  << answer << endl;
 	
    // Q4 add to string answer your answer to Q4
    cout  << "\n4. -----------------------------------------------" << endl;
    answer = "Q4 answer:";
    cout  << "Q4: What is the relationship between ptr2 and &j? \n" <<  
             "    Explain what you observe. \n";
    cout  << answer << endl;
    
    // Q5 add to string answer your answer to Q5
    cout  << "\n5. -----------------------------------------------" << endl;
    answer = "Q5 answer:"; 
    cout  << "Q5: Why is the size of ptr1 the same as the size of ptr2?\n" << 
             "    Explain your answer. \n";
    cout  << answer << endl;

    cout <<  "DYNAMIC MEMORY ALLOCATION" << endl;
 	int *ptr3 = 0;      // declare a pointer to an integer and initialize it to 0 
    ptr3 = new int;     // new = allocates or reserves dynamic memory
                        //       dynamic memory = memory allocated at run time (when the program is running)
                        //                        different than the stack where local variables are stored

                        // new int  -> allocates or reserves dynamic memory for an integer value
                        // new returns the memory address of the first byte reserved
                        // ptr3 = new int; -> ptr3 stores the address of the new integer
    *ptr3 = 30;         // initialize the new integer location to value 30
    
    // Add your code as expressions of ptr3 - not actual values - in the following 
    // cout statements
    cout << "\n6. -----------------------------------------------" << endl;
    cout << "Value of ptr3 is: \t\t"       << "add your code" << endl; // expect a memory address different than the ones before
 	   	 		 	   	  	  		  	   	  		  	 	            // because it is a memory address in dynamic memory not on the stack
  	cout << "Value pointed by ptr3 is: \t" << "add your code" << endl; 
 	cout << "Address of ptr3 is: \t\t"     << "add your code" << endl; 
 	cout << "Size of ptr3 in bytes is: \t" << "add your code" << endl;

     // Q7 add to string answer your answer to Q7
    cout  << "\n7. -----------------------------------------------" << endl;
    answer = "Q7 answer:"; 
    cout  << "Q7: What is the relation between the value of ptr1 and that of ptr3?\n" << 
             "    Explain your answer. \n";
    cout  << answer << endl;
    
    // Q8 add to string answer your answer to Q8
    cout  << "\n8. -----------------------------------------------" << endl;
    answer = "Q8 answer: "; 
    cout  << "Q8: What is the relationship between the address of ptr2 and the address of ptr3?\n" 
          << "    Explain your answer \n";
    cout  << answer << endl;
    
    // Q9 add to string answer your answer to Q9
    cout  << "\n9. -----------------------------------------------" << endl;
    cout << "ptr1     = " << ptr1     << endl; 
    cout << "ptr1 + 1 = " << ptr1 + 1 << endl; 
    answer = "Q9 answer: ";
    cout  << "Q9: What is the difference in bytes between ptr1 and ptr1+1? Why?\n" << 
             "    Explain what you observe. \n";
    cout  << answer << endl;

    cout << "\n10. -----------------------------------------------" << endl;
    *ptr3 = 15;
    answer = "Q10 answer: ";
    cout  << "Q10: What changes after the statement: *ptr3 = 15; ? Explain your answer in terms of\n" 
          << "     the value of ptr3, the value pointed by ptr3 or the address of ptr3. \n";
    cout  << answer << endl;

    cout << "\n11. -----------------------------------------------" << endl;
    ptr3 = ptr1; 
    answer = "Q11 answer: ";
    cout  << "Q11: What changes after the statement: ptr3 = ptr1;? Explain your answer in terms of\n" 
          << "     the value of ptr3, the value pointed by ptr3 or the address of ptr3. \n";
    cout  << answer << endl;

    cout << "\n12. -----------------------------------------------" << endl;
    int size = 0;
    cout << "Dynamic array example" << endl; 
    cout << "\nEnter 10 for the size for the array: "; // enter 10 
    cin  >> size;
     
    // allocate dynamic memory for an array of integers of length size
    // ptrArray is a pointer to an array of integers allocated on the heap
    int *ptrArray = new int[size]; 
     
    // initialize all array elements to 1
    for (int i= 0; i < size; i++)
    {
 	   ptrArray[i] = 1;
 	   cout << ptrArray[i] << ' ';
    }
    cout << endl;
     
    for (int i= 0; i < size; i++)
 	   cout << *(ptrArray+i) << ' ';
    cout << endl;
    
    answer = "Q12 answer: ";
    cout  << "\nQ12: What is the difference between the previous two lines?\n" << 
              "      Explain your answer in terms of what the expression *(ptrArray+i) means. \n";
    cout  << answer << endl; 
    
}



