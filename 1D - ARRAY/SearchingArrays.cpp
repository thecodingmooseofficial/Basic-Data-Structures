/* C++ Code to Search an element from a 1-Dimensional Array */
//This searching approach is known as 'Linear Search'

#include <iostream>
using namespace std;

int main (void)
{
    int length;
    cout<<"Enter the length of the Array: ";
    cin>>length;
    int myArray[length], index, number;
    cout<<"Enter the Array elements: ";
    for (index = 0; index<length; index++)
    {
        cin>>myArray[index];
    }

    bool foundflag = false;
    cout<<"\nSearching for the value? ";
    cin>>number;
    for(index = 0; index<length; index++)
    {
        if(myArray[index] == number){cout<<"Value exists at index "<<index<<" of the Array"<<endl; foundflag = true;}
    }
    if(foundflag == false){cout<<"Not found!";}
}
