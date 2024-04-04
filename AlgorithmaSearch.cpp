#include <iostream>
using namespace std;

int arr[20];    //Array to be searched
int n;          //Number of elements in the array
int i;          //Index of array element

void input()
{
    while (true)
    {
        cout << "enter the number of elements in the array: ";
        cin >> n;
        if ((n > 0) && (n <=20))
            break;
        else
            cout << "\nArray should have minimum 1 and maximum 20 element. \n\n";
    }

    // Accept array element
    cout << "\n-------------------\n";
    cout << "Enter array elements \n";
    cout << "---------------------\n";
    for (i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr [i];
    }
}

void linearSearch()
{
    char ch;
    int ctr;    //Number of comparisons
    int item;

    do
    {
        //Accept the number to be searched
        cout << "\nEnter the element you want to search"; //step 1
        cin >> item;

        ctr = 0;
        i = 0; //step 2
        while (i < n) //step 3
        {
            ctr++;
            if (arr[i] == item)
        }
    }
    
}