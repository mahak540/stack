class Solution {
    private:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> s;
        heights.push_back(0); 
        int maxArea = 0;
        for (int i = 0; i < heights.size(); ++i) {
            while (!s.empty() && heights[s.top()] > heights[i]) {
                int h = heights[s.top()];
                s.pop();
                int width = s.empty() ? i : i - s.top() - 1;
                maxArea = max(maxArea, h * width);
            }
            s.push(i);
        }
        heights.pop_back(); 
        return maxArea;
    }
    

public:
    int maximalRectangle(vector<vector<char>>& matrix) {
         if (matrix.empty() || matrix[0].empty()) return 0;
        int rows = matrix.size();
        int cols = matrix[0].size();
        vector<int> heights(cols, 0);
        int maxArea = 0;
        for (int i = 0; i < rows; ++i) {
            // Update the heights for the histogram
            for (int j = 0; j < cols; ++j) {
                if (matrix[i][j] == '1') {
                    heights[j] += 1; // Increase height
                } else {
                    heights[j] = 0; 
                }
            }
            maxArea = max(maxArea, largestRectangleArea(heights));
        }
        return maxArea;
        
    }
};
