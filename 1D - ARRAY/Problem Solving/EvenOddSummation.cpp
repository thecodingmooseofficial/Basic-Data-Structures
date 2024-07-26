#include <iostream>
using namespace std;

int main()
{
    int length;
    cout<<"Enter the length of Array: ";
    cin>>length;
    int myArray[length], index,  SumEven, SumOdd;
    cout<<"Enter Array Elements: ";
    for(index = 0; index<length; index++)
    {
        cin>>myArray[index]; // scanf("%d", &myArray[index]);
    }

    for (index = 0; index<length; index++)
    {
        if(myArray[index] %2 == 0){ SumEven += myArray[index];}
        else{SumOdd += myArray[index];}
    }
    cout<<"Summation of all the Even Numbers present in the Array is - "<<SumEven;
    cout<<"\nSummation of all the Odd Numbers present in the Array is - "<<SumOdd;

}
