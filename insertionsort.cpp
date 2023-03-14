
#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {99,33,44,55,26};
    int min_index = 0;
    int temp =0;

    for (int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }
    cout<<"End of line -------------"<<endl;


    for(int i=0; i<4; i++){
        min_index = i;

        for(int j=i+1; j<5; j++){
            if(arr[min_index] > arr[j]){
                min_index = j;
            }
        }

        temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }

    for (int i=0; i<5; i++){
        cout<<arr[i]<<endl;
    }


    return 0;
}
