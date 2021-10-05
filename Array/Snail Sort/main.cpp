#include <bits/stdc++.h>

using namespace std;

vector<int> snail(const vector<vector<int>> &snail_map)
{
    vector<vector<int>> input = snail_map;

    //check if the vector size is greater than 1
    if (input.size() > 1)
    {

        vector<int> answer;

        // push the first row in the answer vector
        for (int j = 0; j < input[0].size(); j++)
        {
            answer.push_back(input[0][j]);
        }

        // remove first row from the input
        input[0].erase(input[0].begin(), input[0].end());
        input.erase(input.begin());

        // insert the last element from other all the rows
        for (int j = 0; j < input.size(); j++)
        {
            answer.push_back(input[j].back());
            // remove the element
            input[j].pop_back();
        }

        // iterate the last row
        for (int j = input[input.size() - 1].size() - 1; j >= 0; j--)
        {
            answer.push_back(input[input.size() - 1][j]);
        }

        input[input.size() - 1].erase(input[input.size() - 1].begin(), input[input.size() - 1].end());
        input.erase(input.end());
        reverse(input.begin(), input.end());

        for (int i = 0; i < input.size(); i++)
        {
            answer.push_back(input[i][0]);
            input[i].erase(input[i].begin());
        }

        if (input.size() > 0)
        {
            reverse(input.begin(), input.end());
            vector<int> add = snail(input);
            answer.insert(answer.end(), add.begin(), add.end());
        }

        return answer;
    }
    else
    {
        return snail_map[0];
    }
}

//main function
int main()
{
    vector<vector<int>> v = {{1, 2, 3}, {8, 9, 4}, {7, 6, 5}};
    // feed the input to the function
    vector<int> ans = snail(v);
    cout << "Output" << endl;
    // print the final output
    for (int &ele : ans)
    {
        cout << ele;
    }
}
