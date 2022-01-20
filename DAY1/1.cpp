#include <bits/stdc++.h>
#include <iostream>
using namespace std;
/*
i) Write down a method boolean isNameValid(String  name).
A name is valid if following conditions are satisfied:
• It does not contain any vowel more than once.
• If the name contains two ‘S’, then there is not any ‘T’ in between them (both in capital cases)
*/
bool isvowel(char ch)
{   
    //checking is character is vowel
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
         return true;
    return false;
}
    
bool isNameValid(string s)
{
    int size=s.size();
    //to store count of every char
    int count[256]={0};
    
    int prev=-1;
    int Tcharindex=-1;
    
    for(int i=0;i<size;i++)
    {
         count[s[i]]++;
        
        //saving index of 'T' if found
        if(s[i]=='T')
            Tcharindex=i;
        //verifying if count of a vowel if more than 1 or not
        else if(isvowel(s[i]) and count[s[i]]>1)
             return false;
        //saving index of 'S' if found
        else if(s[i]=='S' and prev==-1)
            prev=i;
        //if 'S' found more than once checking if 'T' is between them
        else if(s[i]=='S' and prev!=-1)
        {
            if(Tcharindex!=-1 and prev<Tcharindex and Tcharindex<i)
                return false;
            else
                prev=i;
        }
        
    }
    
    return true;
}

int main()
{
    string s;
    cin>>s;
    cout<<isNameValid(s)<<endl;
    return 0;

}