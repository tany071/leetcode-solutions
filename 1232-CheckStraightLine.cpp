class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
      if (coordinates.size()==2){
        return true;
      }
      int xslope=coordinates[1][0]-coordinates[0][0];
      int yslope=coordinates[1][1]-coordinates[0][1];
      for(int i=2;i<coordinates.size();i++){
        int y = coordinates[i][1]-coordinates[0][1];
        int x = coordinates[i][0]-coordinates[0][0];
        if(xslope*y!=yslope*x){
          return false;
        }
      }
      return true;
    }
};
