#include<iostream>

using namespace std;

int main(){
    cout<<"Enter number : ";
    char input;
    int sum = 0;
    int num;
    while(input != '='){
        cin>>input;
        if(input != '=')
            sum += (int)input;
    }
    cout<<"Sum is "<<sum<<endl;
    return 0;
}