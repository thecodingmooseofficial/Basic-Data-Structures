/* C++ Code to Access element from a 1-Dimensional Array */

#include <iostream>
using namespace std;

int main (void)
{
    int myArray[5], a, b, index;
    myArray[2] = 75; //the third element(second index) of the array holds the integer value 75
    a = myArray[2]; // variable 'a' holds the value of 75
    cout<<"Enter a value for myArray[2]: ";
    cin>>myArray[2]; //New value by the user replaces the previous value


    for(index=0; index<5; index++)
    {
        cout<<"Enter value for index "<<index<<" : ";
        cin>>myArray[index]; //User input provides new values to all subscripts of the array
    }
    a = 4; //Previous value of '75' is overwritten with '4'
    myArray[2] = a;
    myArray[a] = 3; //the fifth element(fourth index) of the array holds the integer value 3
    b = myArray[a-2] + 2;  //b = myArray[4-2] + 2 -> b = myArray[2] + 2 -> the value of b is dependent of the user input previously
    myArray[myArray[a]] = myArray[2] + b; //myArray[3] = 4 + b

    cout<<"\nArray Elements: "<<endl;
    for(index = 0; index<5; index++)
    {
        cout<<myArray[index]<<" ";
    }
    cout<<"\nValue of a: "<<a<<endl;
    cout<<"Value of b: "<<b<<endl;
}
