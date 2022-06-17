class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> r(m);
        vector<int> c(n);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    r[i]++;
                    c[j]++;
                }
            }
        }
        for(int i=0;i<m;i++){
            if(r[i]>0){
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
          for(int i=0;i<n;i++){
            if(c[i]>0){
                for(int j=0;j<m;j++){
                    matrix[j][i]=0;
                }
            }
        }
    }
};