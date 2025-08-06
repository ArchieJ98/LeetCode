class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> res;
        int counte =0; 
        int counto = 0;
         int i =1;
        
        while(n>0)
        {
            if((n&1) == 1)
            {
                if(i%2 == 0){counte++;}
                else{counto++;}
            }
            n = n >> 1;
            i++;
        }
        res.push_back(counto);
        res.push_back(counte);
        return res;
    }
};