#include <iostream>
#include <string>
#include <cctype>
using namespace std;

bool isPalindrome(string& pal){
    //create pointer at end and start of string
    //while both pointers are not equal to eachother
    //check both pointers are actual characters 
    //if not actual character, increment/decrement 
    //convert both to lower and check if they are the same
    //if not same, return false else go back to start of loop

    int sPointer = 0;
    int ePointer = pal.size() - 1;
    while(sPointer<=ePointer){
        while(!isalnum(pal[sPointer]) && sPointer<ePointer){
            sPointer++;
        }
        while(!isalnum(pal[ePointer]) && ePointer>sPointer){
            ePointer--;
        }
        if(tolower(pal[sPointer]) != tolower(pal[ePointer])){
            return false;
        }
        sPointer++;
        ePointer--;


    }

    return true;

}

int main(){
    string pal = "A man, a plan, a canal: Panama";

    if(isPalindrome(pal) == true){
        cout << "Your string is a palindrome";
    }else{
        cout << "Your string is not a palindrome";
    }

    return 0;

}




