#include<iostream>

using namespace std;

int max(int array[]){
    int max = 0;
    for(int i = 0;i < 5;i++){
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}

int min(int array[]){
    int min = 100000;
    for(int i = 0;i < 5;i++){
        if(array[i] < min){
            min = array[i];
        }
    }
    return min;
}

float average(int array[]){
    int sum = 0;
    for(int i = 0;i < 5;i++){
        sum += array[i];
    }
    return sum / 5;
}

int main(){
    int numbers[5];
    cout<<"Enter 5 numbers : ";
    for(int i = 0;i < 5;i++){
        cin>>numbers[i];
    }
    cout<<" Max is : "<<max(numbers)<<endl;
    cout<<" Min is : "<<min(numbers)<<endl;
    cout<<" Average is : "<<average(numbers)<<endl;
    return 0;
}