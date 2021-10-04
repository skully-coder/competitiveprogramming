/*
    String Reversal
    Srijan Singh 
    01 October 2021
    Hacktoberfest 2021
*/
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;
using std::endl;


string reversal(string input){
    if (input == "")
    {
        return "";
    }
    int l = input.length();
    return reversal(input.substr(1,l-1)) + input[0];
}


int main()
{
    string input;
    cout<<"Enter the string: ";
    cin>>input;
    cout<<reversal(input)<<endl;
    return 0;
}
