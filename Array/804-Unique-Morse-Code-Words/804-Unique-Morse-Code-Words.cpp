class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        set<string> s;
        vector<string> vec ={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        string st;
        for(int i=0; i<words.size(); i++){
            st = "";
            for(int j=0; j<words[i].length(); j++)
                st+=vec[words[i][j]-'a'];
            s.insert(st);
        }
        return s.size();
    }
};