#include<iostream>

using namespace std;

char getGrade(int n){
    if(n >= 90){
        return 'A';
    }
    else if(n >= 80){
        return 'B';
    }
    else if(n >= 70){
        return 'C';
    }
    else if(n >= 60){
        return 'D';
    }
    else {
        return 'E';
    }
}

int main(){
    int number;
    char grade;
    cout<<"Enter number : ";
    cin>>number;
    grade = getGrade(number);
    cout<<"Grade is : "<<grade<<endl;
    return 0;
}