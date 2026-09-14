class Solution {
public:
  void dfs(vector<vector<int>>& image,int i,int j,int nc,int oc){
    int m = image.size();
    int n = image[0].size();
    if(i<0||j<0||i>=m||j>=n||image[i][j]!=oc||image[i][j]==nc){
        return ;
    }
     image[i][j] = nc;
          dfs(image,i-1,j,nc,oc);
          dfs(image,i,j+1,nc,oc);
          dfs(image,i+1,j,nc,oc);
          dfs(image,i,j-1,nc,oc);
  }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
          int oc = image[sr][sc];
          dfs(image,sr,sc,color,oc);
            return image;
          
    }
};