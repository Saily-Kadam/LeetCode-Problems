class Solution {
public:
    int guessNumber(int n) {
        int low = 0, high = n;
        while(low<=high){
            int pick = low + (high-low)/2;
            int res = guess(pick);
            if(res == 0)
                return pick;
            if(res == -1){
                high = pick - 1;
            }    
            else{
                if(res==1){
                    low=pick+1;
                }
               
            }
        }
         return -1;
    }
};