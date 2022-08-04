class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int ans = 0;
        int n = heights.size();
        stack<int> st;
        for(int i=0; i<=n; i++)
        {
            while(!st.empty() && (i==n || heights[st.top()] >= heights[i]))
            {
                int currHeight = heights[st.top()];
                int width;
                
                st.pop();
                if(st.empty())
                    width = i;
                else
                    width = i-st.top()-1;
                
                ans = max(ans, currHeight*width);
            }
            
            st.push(i);
        }
        
        return ans;
    }
    
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix[0].size();
        int m = matrix.size();
        
        vector<int> histogram(n, 0);
        
        
        int maxArea = 0;
        
        for(int i=0; i<m; i++)
        {
			// O(n)
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j] == '1')
                {
                    histogram[j]++;
                }
                else
                {
                    histogram[j] = 0;
                }
                
            }
            for(auto x : histogram) cout << x << "\t";
                cout << endl;
            // O(n)
            maxArea = max(maxArea, largestRectangleArea(histogram));
            
        }
        
        return maxArea;
    }
};