///week09-1b.cpp 學習計畫 Matrix 第三題
///LeetCode 54. Spiral Matrix
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int M = matrix.size();
        int N = matrix[0].size();
        int i = 0,j = 0,dir=0; //dir方向:0右，1下，2左，3上
        int dI[4] = {0,1,0,-1}; //左手i的增減值
        int dJ[4] = {1,0,-1,0}; //右手j的增減值
        vector<int> ans;
        for(int k=0;k<N-1;k++){
            ans.push_back(matrix[i][j]);
            i+=dI[dir];
            j+=dJ[dir];
        }
        dir = (dir+1) % 4;
        for(int kk=1;kk<=M+1;kk++){
            for(int k=0;k<M-kk;k++)
            {
                ans.push_back(matrix[i][j]);
                i+=dI[dir];
                j+=dJ[dir];
            }        
            dir = (dir+1) % 4;
            for(int k=0;k<N-2;k++){
                ans.push_back(matrix[i][j]);
                i+=dI[dir];
                j+=dJ[dir];
            }
        }
        return ans;
    }
};