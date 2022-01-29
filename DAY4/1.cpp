#include<bits/stdc++.h>
#include<string>
using namespace std;

/*
Make a StringUtils class which contains following methods
NOTE: You can use only String.charAt(), methods to code this problem.(Don't use any other inbuilt functions)
static int countChar(String str,char ch)
- Returns occurrence of the given character in the given String (str).
static String substring(String str,int start,int end)
- Returns a substring from the start index to end index with all validation checks.
static String[] split(String str,char ch)
- Returns an array of strings broken according to the occurrence of the given character with validation checks.
static Boolean hasPattern(String str,String pattern)
- Returns true if the give string (pattern) found in the main string (str) otherwise false.
static Boolean allWordsContainsChar(String str,char ch)
- Returns true if all words of the given string (str) contains the given character (ch)  otherwise false.
static String reverse(String str)
- Returns the reverse of the String (Without using extra String or array)
static String reverseVowels(String str)
- Reverse only all the vowels in the string and return it 
*/

class  StringUtils{

    public:
        
         int countChar(string str,char ch){

             int count[256]={0};
             for(int i=0;str[i]!='\0';i++)
             {
                 count[str[i]]++;
             }
             //cout<<count[ch];
             return count[ch];
         }


        string substring(string str,int start,int end){
            string s;
            for(int i=start;i<=end;i++)
            {
                s[i]=str[i];
                s = s + str[i];
            }
            //cout<<endl;
            return s;
        }

        string reverseWord(string str){
            int x=0,y=str.length()-1;
             while(x<=y)
            {
                swap(str[x++],str[y--]);
            }
            return str;
        }

        bool isVowel(char c){
            return (c=='a' || c=='A' || c=='e' ||
                    c=='E' || c=='i' || c=='I' ||
                    c=='o' || c=='O' || c=='u' ||
                    c=='U');
        }

        string reverseVowel(string str){
            int x=0,y=str.length()-1;
            while (x < y){
                if (!isVowel(str[x])){
                    x++;
                    continue;
                }
                if (!isVowel(str[y])){
                   y--;
                    continue;
                }
                swap(str[x], str[y]);
                x++;
                y--;
            }
            return str;
        }

        bool hasPattern(string s1, string s2){
            int lenS1 = s1.length();
            int lenS2 = s2.length();

            for (int i = 0; i <= lenS2- lenS1; i++) {
                int j;
                for (j = 0; j < lenS1; j++)
                    if (s2[i + j] != s1[j])
                        break;
                if (j == lenS1)
                    return true;
            }
            return false;
        }

        vector<string> splitString(string str, char ch)
        {
            int countWord = countChar(str, ch);
            int idx = 0;
            vector<string> result(countWord);
            string temp = "";
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] != ch)
                {
                    temp = temp + str[i];
                }
                else
                {
                    result[idx] = temp;
                    idx++;
                    temp = "";
                }
            }
            return result;
        }
};


int main()
{
    StringUtils s;
    //s.countChar("strintg",'t');
    //cout<<s.substring("strintg",1,4);
    //cout<<st.length()<<endl;
    //cout<<s.reverseWord("string")<<endl;
    //cout<<s.reverseVowel("stieng")<<endl;
    //cout<<s.hasPattern("pqr","sssstrig")<<endl;
    //vector<string> p=s.splitString("tarunatrr",'a');
    // for(auto it:p)
    // {
    //     cout<<it<<endl;
    // }    

    return 0;
}