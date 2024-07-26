#include <iostream>
using namespace std;

int main(void)
{
    int length;
    cout<<"Enter the length of Array: ";
    cin>>length;
    int myArray[length], index,  Max;
    cout<<"Enter Array Elements: ";
    for(index = 0; index<length; index++)
    {
        cin>>myArray[index]; // scanf("%d", &myArray[index]);
    }
    Max = myArray[0]; //Assigning the first element as the largest value
    for (index = 0; index<length; index++)
    {
        if(myArray[index]>Max) {Max = myArray[index];}
    }
    cout<<"Largest Number in the Array is - "<<Max;
}
