/* C++ Code to Insert an element in the middle of a 1-Dimensional Array */

#include <iostream>
using namespace std;

int main(void)
{
    int length;
    cout<<"Enter the length of Array: ";
    cin>>length;
    int myArray[length], index, newelement, numindexposition;
    cout<<"Enter Array Elements: ";
    for(index = 0; index<length; index++)
    {
        cin>>myArray[index]; // scanf("%d", &myArray[index]);
    }

    cout<<"Enter the value for Insertion: ";
    cin>>newelement;
    cout<<"\nAt which Index Position do you want to Insert? ";
    cin>>numindexposition;

    for (index = length; index>numindexposition-1; index--)
    {
        myArray[index] = myArray[index - 1];
    }
    myArray[numindexposition] = newelement;
    cout<<"\nModified Array Elements: "<<endl;
    for(index = 0; index<length; index++)
    {
        cout<<myArray[index]<<" ";// printf("%d", myArray[index]);
    }
}
