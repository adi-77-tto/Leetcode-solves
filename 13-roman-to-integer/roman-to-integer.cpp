#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
    int count=0;
    char arr[100];
    strcpy(arr,s.c_str());
    for(int i=0;i<s.length();i++)
    {
        if(arr[i]=='I')
        {
            if(arr[i+1]=='V' && i<s.length()) {
                count+=4;
                i++;
            }
            else if(arr[i+1]=='X' && i<s.length()) {
                count+=9;
                i++;
            }
            else count+=1;
        } 
        else if(arr[i]=='V') count+=5;
        else if(arr[i]=='X') 
        {
            if(arr[i+1]=='L' && i<s.length()) 
            {
                count+=40;
                i++;
            }
            else if(arr[i+1]=='C' && i<s.length()) {
                count+=90;
                i++;
            }
            else count+=10;
        }
        else if(arr[i]=='L') count+=50;
        else if(arr[i]=='C')
        {
            if(arr[i+1]=='D' && i<s.length()) 
            {
            count+=400;
            i++;
            }
            else if(arr[i+1]=='M' && i<s.length()) 
            {
                count+=900;
                i++;
            }
            else count+=100;
        } 
        else if(arr[i]=='D') count+=500;
        else if(arr[i]=='M') count+=1000;
    }
       return count;
}

};