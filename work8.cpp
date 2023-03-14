
//8. Initialize an array. Size should be more than FIVE. Write you program to change the array in such a way so that there cannot be any duplicate element in the array anymore. Print the changed array. If the initialized array already had no duplicate elements from the beginning, output a message saying “Array already unique!”;


#include<iostream>

 using namespace std;

 int main()

{

    int i,j,k,n,a[30];

    cout<<"Enter your array size:"<<" ";

    cin>>n;

    cout<<"\nEnter elements of array:"<<" ";

    for(i=0;i<n;++i)

        {

            cin>>a[i];

        }

 for(i=0;i<n;++i)

    {

        for(j=i+1;j<n;)

        {

            if(a[i]==a[j])

            {

                for(k=j;k<n-1;++k)

                    a[k]=a[k+1];

                     --n;

            }

            else

                ++j;

        }

    }





    cout<<"Your array elements without any duplicates elements:"<<" ";

    for(i=0;i<n;++i)

    {

        cout<<a[i]<<" ";

    }

   cout<<endl;

    for(int i=0; i<n; i++)

    {

        if(a[i]==n)

        {

            cout<<"Array already unique."<<endl;

            break;

        }

    }



    return 0;

}
