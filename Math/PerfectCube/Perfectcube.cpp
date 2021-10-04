#include <bits/stdc++.h>
using namespace std;
bool Perfectcube(int x)
{
    float temp = pow(x, 1 / 3.0);
    return (pow(ceil(temp),3) == floor(x)) ? true : false;
}

int main()
{
    int x;
    cin >> x;
    if (Perfectcube(x))   cout << "Perfectcube" << endl;
    else     cout << "No perfectcube" << endl;
    
    return 0;
}
