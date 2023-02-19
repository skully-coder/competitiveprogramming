#include "bits/stdc++.h"
using namespace std;

void findLpsArray(char* pattern, int* lps, int m) 
{
    
    int len = 0;
  
    lps[0] = 0;   
    int i = 1;
    
    while (i < m) 
    {
        if (pattern[i] == pattern[len]) 
        {
            len++;
            lps[i] = len;
            i++;
        }
        else
        {
           if (len != 0) 
           {
                len = lps[len - 1];
           }
            else
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void patternSearchKMP(char* pattern, char* text) 
{
    int m = strlen(pattern);
    int n = strlen(text);
  
    int lps[m]; //longest-prefix-suffix array
    
    findLpsArray(pattern, lps, m); //calling findLpsArray function
  
    int i = 0; 
    int j = 0;
    
    while (i < n) 
    {
        if (pattern[j] == text[i]) 
        {
            j++;
            i++;
        }
  
        if (j == m) 
        {
            cout<<"Pattern found at index: "<<i - j;
            j = lps[j - 1];
        }
        
        else if (i < n && pattern[j] != text[i]) 
        {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}
  
int main()
{
    char pattern[100], text[100];
    
    cout<<"Enter the pattern to be found: "<<endl;
    cin>>pattern;
    
    cout<<"Enter the string in which the pattern is to be found: "<<endl;
    cin>>text;
    
    patternSearchKMP(pattern, text); //Function call
    
    return 0;
}

