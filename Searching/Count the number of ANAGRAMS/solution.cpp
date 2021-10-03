//Author : Sundar

//Read the readme for question.

#include<iostream>
#include<vector>
using namespace std;

//This method is popularly known as SLIDING WINDOW TECHNIQUE


vector<int> find_anagrams(string a,string b)
{
    vector<int> start_index; //a vector to store the starting indices of anagrams
    if(a.length()<b.length())
    {
        return start_index;
    }
    vector<int> hash_for_b(26);
    vector<int> hash_for_a(26);

    int n=a.length(),m=b.length();

    for(int i=0;i<m;i++)
    {
        hash_for_b[b[i]-'a']++; //storing the characters that appear in String B
        hash_for_a[a[i]-'a']++; //Stroring the first m characters of String A
    }   

    if(hash_for_a==hash_for_b)
    {
        start_index.push_back(0);
    }

    for(int i=m;i<n;i++)
    {
        hash_for_a[a[i]-'a']++;
        hash_for_a[a[i-m]-'a']--;

        if(hash_for_a==hash_for_b)
            start_index.push_back(i-m+1); //i-m+1 gives the starting index of the anagram
    }
    return start_index;
}
int main()
{
    string a,b;
    cin>>a>>b;

    vector<int> count=find_anagrams(a,b);

    cout<<'\n';
    if(count.size()==0)
        cout<<"No anagrams exist "<<endl;
    else{
        cout<<"Count of anagrams of B in A : "<<count.size()<<endl;

        cout<<"The anagrams are \n";

        int num=1;
        for(int it:count)
        {
            cout<<num++<<". ";
            for(int i=it;i<it+b.length();i++)
            {
                cout<<a[i];
            }
            cout<<'\n';
        }
    }
    return 0;
}
