#include<iostream>

using namespace std;

bool isEven(int n){
    if(n % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int number;
    string n_type;
    cout<<"Enter number : ";
    cin>>number;
    n_type = isEven(number) ? "Genap" : "Ganjil";
    cout<<number<<" is "<<n_type<<endl;
    return 0;
}