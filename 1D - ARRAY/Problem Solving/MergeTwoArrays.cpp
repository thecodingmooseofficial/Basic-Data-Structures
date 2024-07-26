#include <iostream>
using namespace std;

int main()
{
    int length1, length2, index;
    cout<<"Enter the length of the First Array: ";
    cin>>length1;
    int myFirstArray[length1];
    cout<<"Enter Array Elements: ";
    for(index = 0; index<length1; index++)
    {
        cin>>myFirstArray[index]; // scanf("%d", &myArray[index]);
    }

    cout<<"Enter the length of the Second Array: ";
    cin>>length2;
    int mySecondArray[length2];
    cout<<"Enter Array Elements: ";
    for(index = 0; index<length2; index++)
    {
        cin>>mySecondArray[index]; // scanf("%d", &myArray[index]);
    }
    int CombinedArray[length1+length2];
    for(index=0; index<length1; index++)
    {
        CombinedArray[index] =  myFirstArray[index];
    }

    for(index=0; index<length2; index++)
    {
        CombinedArray[length1+index] =  mySecondArray[index];
    }

    cout<<"\Merged Array Elements: "<<endl;
    for(index = 0; index<length1+length2; index++)
    {
        cout<<CombinedArray[index]<<" ";
    }
}
