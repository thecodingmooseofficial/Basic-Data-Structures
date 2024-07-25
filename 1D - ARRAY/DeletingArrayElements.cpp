/* Code to delete an element from an Array*/

#include <iostream>
using namespace std;

int main(void)
{
    int length;
    cout<<"Enter the length of the Array: ";
    cin>>length;
    int myArray[length], index, elementindexposition;
    cout<<"Enter Array Elements: ";
    for(index = 0; index<length; index++)
    {
        cin>>myArray[index];
    }
    cout<<"\nAt which Index Position is the element you want to Delete? ";
    cin>>elementindexposition;
    for(index = elementindexposition; index<length; index++)
    {
        myArray[index] = myArray[index+1];
    }

    cout<<"\nModified Array Elements: "<<endl;
    for(index = 0; index<length; index++)
    {
        cout<<myArray[index]<<" ";
    }
}
