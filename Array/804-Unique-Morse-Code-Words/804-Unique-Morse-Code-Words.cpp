class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string> morseCode = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_map<string, int> morse_map;
        for(auto word: words) {
            string code = "";
            for(auto ch: word) {
                code = code + morseCode[ch - 'a'];
            }
            morse_map[code]++;
        }
        return morse_map.size();
    }
};