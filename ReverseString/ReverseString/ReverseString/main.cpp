//
//  main.cpp
//  ReverseString
//
//  Created by Kevin Keith on 2022-05-06.
//

#include <iostream>
#include <cctype>
using namespace std;


string reverseString(string s){
    for(int i=0; i<s.size(); i+=2){
        if(i+1<s.size()){
            s[i] = tolower(s[i]);
            char temp = s[i];
            s[i] = s[i+1];
            s[i+1] = temp;
        }
    }
    return s;
}
int countVowels(string s){
    int count =0;
    if(s[s.size()-1]=='y'){
        count++;
    }
    for(int i=0; i<s.size(); i++){
        s[i] = tolower(s[i]);
        if(s[i]=='a' || s[i]=='e' || s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    return count;
}
bool checkPalindrome(string s){
    for(int i=0; i<s.size(); i++){
        cout << s[i] <<"\n";
        cout << s[(s.size()-1)-i] <<"\n";
        
        if(s[i]!=s[(s.size()-1)-i]){
            return false;
        }
    }
    return true;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << countVowels("hellycopter")<<"\n";
    cout << reverseString("Jesus");
    cout << checkPalindrome("racecar");
    return 0;
}
