#include <iostream>
using namespace std;

int main() {
    int arr[5]={3,1,7,4,5};
    int max = arr[0];
    for(int i =1;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    
    cout<<"The Smallest Number in the array is : " << max <<endl;
    

    return 0;
}