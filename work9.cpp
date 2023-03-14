
//9. Initialize an integer array A of size 10. Take an integer as input and print how many times that integer occurs in A.


#include <iostream>

using namespace std;

int main()

{

    int array[10],dup[10];

    int size,i,j,InputNumber;

    cout<<"Enter your array size:"<<" ";

    cin>>size;

    cout<<"Enter your array elements:"<<" ";

   for(i=0; i<size; i++)

    {

        cin>>array[i];

        dup[i]=-1;

    }

    for(i=0; i<size; i++)

    {

        int cnt=1;

        for(j=i+1; j<size; j++)

        {

            if(array[i]==array[j])

            {

                cnt++;

                dup[j]=0;

            }

        }

                if(dup[i]!=0)

        {

            dup[i]=cnt;

        }

    }

    cout<<"Enter a integer number from array :"<<" "<<endl;

    cin>>InputNumber;

    for(i=0; i<=1; i++)

    {

        if(InputNumber==array[i])

        {

         cout<<"your number"<<" "<<array[i]<<" "<<" occured"<<" "<<dup[i]<<" "<<"times"<<endl;

        }

    }

return 0;

    }
