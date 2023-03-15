
#include<iostream>
using namespace std;


int main(){


int array_Size;

cout<<"Enter Array Size : ";
cin>>array_Size;

int array[array_Size];

cout<<"Enter Value of Array : ";
for(int i=0; i<array_Size; i++){
    cin>>array[i];
}

cout<<"Array's Value : ";
for(int i=0; i<array_Size; i++){
    cout<<array[i]<<"  ";
}

int search_value;

cout<<endl;
cout<<"Enter Search Value : ";
cin>>search_value;

for(int a=0; a<array_Size; a++){
    if(search_value==array[a]){
        cout<<"Found"<<endl;

    }else{

    }
    cout<<"Not Found"<<endl;
}



    return 0;
}
