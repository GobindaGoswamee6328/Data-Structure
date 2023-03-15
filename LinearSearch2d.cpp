#include<iostream>
using namespace std;


int main(){

  int number_of_row,number_of_coloumn;

  cout<<"Enter Number of Row : ";
  cin>>number_of_row;

  cout<<"Enter Number of Coloumn : ";
  cin>>number_of_coloumn;

  int array[number_of_row][number_of_coloumn];

//input option :
   cout<<"Input the value : ";
  for(int a=0; a<number_of_row; a++){
    for(int b=0; b<number_of_coloumn; b++){
        cin>>array[a][b];
    }
  }


//output option :
  for(int a=0; a<number_of_row; a++){
    for(int b=0; b<number_of_coloumn; b++){
        cout<<array[a][b]<<" ";
    }
    cout<<endl;
  }


  //Search :
  int search_value;
  cout<<"Enter search the Value : ";
  cin>>search_value;

  for(int a=0; a<number_of_row; a++){
    for(int b=0; b<number_of_coloumn; b++){
        if(search_value==array[a][b]){
            cout<<"Index ("<<a<<","<<b<<") "<< " is Found"<<endl;
        }
        else{
             cout<<"Index ("<<a<<","<<b<<") "<< " is not  Found"<<endl;
        }
    }
  }


    return 0;
}
