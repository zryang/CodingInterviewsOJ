class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        int row = array.size();
        int column = array[0].size();
        int i=0,j=column-1;
        while(i<row&&j>=0){
            if(array[i][j] == target)
                return true;
            if(array[i][j] > target)
                j--;
            if(array[i][j] < target)
                i++;
        }
        return false;
    }
};