#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int start, end, count;
    int index = 0;
    int* years;
    string n_type;
    cout<<"Enter start year : ";
    cin>>start;
    cout<<"Enter end year : ";
    cin>>end;
    if(end <= start){
        cout<<"Invalid year"<<endl;
        return 0;
    }
    count = floor((end - (start + 1)) / 4);
    years = new int[count];
    
    for(int i = start + 1;i < end;i++){
        if(i % 4 == 0){
            years[index] = i;
            index++;
        }
    }
    cout<<"Tahun kabisat : "<<endl;
    for(int i = 0;i < count;i++){
        cout<<years[i]<<endl;
    }
    return 0;
}