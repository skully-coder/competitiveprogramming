# Run-Length Encoding
# Compress the string using Run-Length Encoding
#
#   O(N) Time | O(N) Space


def runLengthEncoding(string):
    encodedString = []
    currentRunLength = 1 
    for i in range(1, len(string)):
        if string[i] != string[i - 1] or currentRunLength == 9:
            encodedString.append(str(currentRunLength))
            encodedString.append(string[i - 1])
            currentRunLength = 0
        currentRunLength += 1
    encodedString.append(str(currentRunLength))
    encodedString.append(string[-1])
    return ''.join(encodedString)
    

string = input()
print(runLengthEncoding(string))
