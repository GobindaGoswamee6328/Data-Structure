
//7. Initialize TWO integer arrays A and B of different sizes. Make a new array with the common elements between A and B. Print the new array element(s). If there is no common element, output “No common element!”.

#include<iostream>

#include<conio.h>

using namespace std;

 int main()

{

  int n1,n2,i,j;

  cout<<"Enter your first array size: "<<" ";

  cin>>n1;

 int array1[n1];

 /* Enter distinct elements */

  cout<<"Enter the elements of the first array: "<<" ";

  for(i=0;i<n1;i++)

  {

    cin>>array1[i];

  }

 cout<<"\nEnter your second array size: "<<" ";

  cin>>n2;

  int array2[n2];

  cout<<"Enter the elements of the second array: "<<" ";

  for(i=0;i<n2;i++)

  {

    cin>>array2[i];

  }

  /* printing elements that are common in both the arrays */

  cout<<"\nYour common elements of the two arrays: "<<" ";

  for(i=0;i<n1;i++)

  {

    for(j=0;j<n2;j++)

    {

      if(array1[i]==array2[j])

      {

        cout<<array1[i]<<" ";

        }

    }

  }

  getch();

  return 0;

}
