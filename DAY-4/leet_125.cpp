//a phrse is a palinrome if,fte converting all upeercase letters to lowercase letters and removing all non-alphanumeric characters,it eads the same forward and backward
#include<iostream>
#include<string>
#include<sstream>

using namespace std;
bool palindrome(string s){
    string cleaned;

    for(char ch :  s){
        if(isalnum(ch)){
            cleaned=tolower(ch);
        }
    }

int left=0;int right=cleaned.size()-1;
while(left<= right){
    if(cleaned[left]!=cleaned[right]){
        return false;
    }
    left++;right--;
}