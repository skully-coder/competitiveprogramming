#include "bits/stdc++.h"
using namespace std;

void rabinKarpAlgo(char* text, char* pattern)
{
    int m = strlen(text);
    int n = strlen(pattern);
    
    int prime = 31;
    int mod = 1e9 + 9;
    
    vector<long long> p_pow(m);
    p_pow[0] = 1; 
    
    for (int i = 1; i < m; i++) 
    {
        p_pow[i] = (p_pow[i-1] * prime) % mod;
    }
       
    vector<long long> h(m + 1, 0); 
    
    for (int i = 0; i < m; i++)
    {
        h[i+1] = (h[i] + (text[i] - 'a' + 1) * p_pow[i]) % mod;
    }
    
    long long hash_pattern = 0; 
    
    for (int i = 0; i < n; i++) 
    {
        hash_pattern = (hash_pattern + (pattern[i] - 'a' + 1) * p_pow[i]) % mod; 
    }
      
    for (int i = 0; i + n - 1 < m; i++) 
    { 
        long long curr_hash = (h[i+n] + mod - h[i]) % mod; 
        
        if (curr_hash == hash_pattern * p_pow[i] % mod)
            cout<<"Pattern found at index: "<<i<<endl;
    }
}

int main()
{
    char pattern[100], text[100];
    
    cout<<"Enter the pattern to be found: "<<endl;
    cin>>pattern;
    
    cout<<"Enter the string in which the pattern is to be found: "<<endl;
    cin>>text;
    
    rabinKarpAlgo(text, pattern); //Function call
    
    return 0;
}
