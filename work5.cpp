
//5. Write a function to calculate factorial of a given integer number if that number is a prime number. If it is not, it will give an error.


#include <iostream>

using namespace std;

int functionOfPrimeNumber(int a)

{  int check =0;

    for(int i=2; i<3 ; i++)

    {

         if(a<2)

    {

        check =0;



    }

    else if(a%i!=0)

    {

    check= 1;

    }



    else

    {

    check=0;

     break;

    }

}

return check;

}

int functionOfFactorial(int a)

{

int Factorial=1;

 for(int counter=a; counter>=2; counter--)

            {

                Factorial=Factorial*counter;

            }

return Factorial;

      }

int main()

{

    while(1){

   int n;

    cout<<"Enter a integer number:"<<" ";

    cin>>n;

    if(functionOfPrimeNumber(n)==1)

    {   cout<<n<< " is a Prime Number"<<endl;

        cout<< "Factorial of "<<n<<" is "<<functionOfFactorial(n)<<endl;}

    else

    cout<<"Error!"<<""<<n<<""<<" is not a prime number"<<endl;

    }

}
