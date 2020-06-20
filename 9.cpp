#include<iostream>

using namespace std;

int main(){
    int numbers[5];
    int tmp;
    cout<<"Enter 5 numbers : "<<endl;
    for(int i = 0;i < 5;i++){
        cin>>numbers[i];
    }
    for(int i = 0;i < 5;i++){
        for(int j = 0;j < 5;j++){
            if(numbers[j] > numbers[i]){
                tmp = numbers[j];
                numbers[j] = numbers[i];
                numbers[i] = tmp;
            }
        }
    }
    cout<<"Sorted : "<<endl;
    for(int i = 0;i < 5;i++){
        cout<<numbers[i]<<endl;
    }
    return 0;
}