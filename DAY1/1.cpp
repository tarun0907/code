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
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
         return true;
    return false;
}
    
bool isNameValid(string s)
{
    int size=s.size();
    int count[256]={0};
    
    int prev=-1;
    int Tcharindex=-1;
    
    for(int i=0;i<size;i++)
    {
         count[s[i]]++;
        
        
        if(s[i]=='T')
            Tcharindex=i;
        else if(isvowel(s[i]) and count[s[i]]>1)
             return false;
        else if(s[i]=='S' and prev==-1)
            prev=i;
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