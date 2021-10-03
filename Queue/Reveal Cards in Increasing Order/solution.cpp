#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        sort(deck.begin(),deck.end());
        reverse(deck.begin(),deck.end());
        deque<int> q;
        q.push_back(deck[0]);
        for(int i=1;i<deck.size();i++){
            q.push_front(q.back());
            q.pop_back();
            q.push_front(deck[i]);
        }
        int j=0;
        for(auto i:q) deck[j++] = i;
        return deck;
    }
};


int main()
{
    Solution sol;
    vector<int> v = {17,13,11,2,3,5,7};
    vector<int> m = sol.deckRevealedIncreasing(v);
    for(auto i:m) cout<<i<<" ";

    return 0;
}
