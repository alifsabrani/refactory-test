#include<iostream>

using namespace std;

bool isPalindrome(string text){
    char* input = new char[text.length()];
    char* reversed = new char[text.length()];
    int j = 0;
    for(int i = text.length() - 1;i >= 0;i--){
        input[j] = tolower(text[j]);
        reversed[j] = tolower(text[i]);
        if(input[j] != reversed[j]){
            return false;
        }
        j++;
    }
    return true;
}

int main(){
    string input;
    string string_type;
    cout<<"Enter string : ";
    cin>>input;
    string_type = isPalindrome(input) ? "is Palindrome" : "is not Palindrome";
    cout<<"Text "<<string_type<<endl;
    return 0;
}