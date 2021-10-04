# First Non-Repeating Character
# Find the first non-repeating character in the string of lower case letters.
#
#   O(N) Time | O(1) Space


def non_repeatingCharacter1(string):
    characters = {}
    for char in string:
        characters[char] = characters.get(char, 0) + 1 
        
    for i in range(len(string)):
        if characters[string[i]] == 1:
            return i 
    return -1
    

string = input()
print(non_repeatingCharacter1(string))
