//1.Take an array of any size asking from the user input for the array size. Next calculate the highest and lowest value of the array. At last, print the elements of the array in reverse order

#include <iostream>
using namespace std;

int main()

 {
 int n, arr[100], highest, lowest;

 cout << "Enter the size of the array: ";
cin >> n;

 cout << "Input the array: ";
 for(int i=0; i<n; i++)

   {
 cin >> arr[i];
}

   highest = arr[0];
   lowest = arr[0];

 for(int i=1; i<n; i++)
     {
       if(arr[i] > highest)
       {
          highest = arr[i];
       }
     if(arr[i] < lowest)
        {
     lowest = arr[i];
        }
     }

 cout << "The Highest value is: " << highest << endl;
 cout << "The Lowest value is: " << lowest << endl;

 cout << " InReverse Order: ";

 for(int i=n-1; i>=0; i--)
    {
 cout << arr[i] << " ";
    }

    return 0;
}
