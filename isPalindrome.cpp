#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
bool isPalindrome(string str)
{
    int i, j, len = 0, flag = 1;
    len = str.length();
    for (i = len-1, j = 0; i >= 0 ; i--, j++)
    {   if(str[j] == str[i])
        flag = 1;
        else  return !flag;
    }
    return flag;
}
int main()
{
    string str;
    cout<<"Enter string: ";
    getline(cin,str);
    cout<<str<<endl;
    if(isPalindrome(str))
        cout<<"Given String is palindrome";
    else 
        cout<<"Given String is not a palindrome";
    
    return 0;
}
