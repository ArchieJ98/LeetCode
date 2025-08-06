class Solution {
public:
    int binaryGap(int n) {
        if(n <= 0){return 0;}
        if((n & (n-1)) == 0){return 0;}
        string binN = "";
        while(n > 0)
        {
            if(n%2 == 1){binN += "1";}
            else{binN += "0";}
            n /= 2;
        }
        reverse(binN.begin(), binN.end());
        int index = -1;
        int ans =0;
        for(int i=0; i<binN.size(); i++)
        {
            if((binN[i] - '0') == 1)
            {
                if(index == -1){index = i;}
                else
                {
                    ans = max(ans, i - index);
                    index = i;
                        
                }
            }
        }
        return ans;
    }
};