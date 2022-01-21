#include <iostream>
#include<string>
#include<vector>

using namespace std;

/*
 Given a string s, find the length of the longest substring without repeating characters.
*/

int longestUniqueSubsttr(string str)
{
    int n = str.size();
    int output = 0; 
 
    for (int i = 0; i < n; i++) {
         

        vector<bool> count(256);  
 
        for (int j = i; j < n; j++) {

            if (count[str[j]] == true)    
                break;
 

            else {
                output = max(output, j - i + 1);
                count[str[j]] = true;
            }
        }

        count[str[i]] = false;
    }
    return output;
}

int main()
{
    string s;
    cin>>s;

    cout<<longestUniqueSubsttr(s)<<endl;


    return 0;
}