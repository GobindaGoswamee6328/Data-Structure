
//3. Write a function that takes TWO parameters to print all the odd numbers between a given range. Input the starting value of the range and ending value of the range. Then, send them as the parameters to your function.


#include <iostream>
using namespace std;


int main(){

    int number;
    int start,end;

    cout << "Enter The Starting Value: ";
    cin >> start;

   cout << "Enter The Ending Value: ";
    cin >> end;

    cout << "Odd numbers in given range are: ";
    for(number = start;number <= end; number++)

         if(number % 2 !=0)
             cout << number<< " ";

    printf("\nEven numbers in given range are: ");
    for(number = start;number <= end; number++)

         if(number % 2 ==0)
             cout << number << " ";

    return 0;
}

