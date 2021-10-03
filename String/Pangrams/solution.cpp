#include <bits/stdc++.h>
using namespace std;
bool arr[123];
string pangrams(string s) {
    int a,counter; string q=""; counter=0;
    for(int i=0; i<s.size(); i++)
    {
        a=s[i];
        if(a==32)
        {
            continue;
        }
        if(a<91)
        {
            a+=32;
        }
        if(arr[a]==false)
        {
            counter++;
            arr[a]=true;
            q+=s[i];
        }
        if(counter==26)
        {
            return "pangram";
        }
    } return "not pangram";
}

int main()
{
    string s;
    getline(cin, s);

    string result = pangrams(s);

    cout<<result<<endl;
}
