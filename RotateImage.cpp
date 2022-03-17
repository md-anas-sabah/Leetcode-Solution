class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        vector<int> v;
        int row = matrix.size();
        int col = matrix[0].size();
        
        int n = (row*col);
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                v.push_back(matrix[i][j]);                
            }
        }
        int index =0;
        for(int j = col-1;j>=0;j--){
            for(int i=0;i<row;i++){
                matrix[i][j] = v[index];
                index++;
            }
        }
        
    }
};