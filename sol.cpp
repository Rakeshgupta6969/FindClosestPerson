class Solution {
public:
    int findClosest(int x, int y, int z) {
          
          int dis1  = fabs(z-x);
          int dis2 = fabs(z-y);

          if(dis1<dis2){
            return 1;
          }

          else if(dis2<dis1){
            return 2;
          }
          else{
            return 0;
          }


    return -1;
    }
};