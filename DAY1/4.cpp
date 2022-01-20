#include <iostream>
#include <regex>
using namespace std;

/*
iv) Write a function Boolean isValidURL(String url).
*/

bool isValidURL(string url)
{

//using regular expression to check url
const regex pattern("((http|https)://)(www.)?[a-zA-Z0-9@:%._\\+~#?&//=]{2,256}\\.[a-z]{2,6}\\b([-a-zA-Z0-9@:%._\\+~#?&//=]*)");

if (url.empty())
{
	return false;
}
//if pattren matches return true
if(regex_match(url, pattern))
{
	return true;
}
else
{
	return false;
}
}

int main()
{
string url = "https://candidate.speedexam.net/startexam.aspx?SSTATE=FfjJnxM01qCAXN6loX8howlAMLYjuSIlhwO375SbpUzrdA/3+B8J9rTDZIgtdXct2NgfTOg50vDf2egGWNVhLU+zDBR5EzlcLi761wJ9k49+cUM0tEJBdTGX8RZfjrN4";

if (isValidURL(url))
{
	cout << "YES";
}
else
{
	cout << "NO";
}
return 0;
}
