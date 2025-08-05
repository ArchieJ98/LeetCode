class Solution {
public:
    int findComplement(int num) {
        string res = "";
        int t = num;
        while(t > 0)
        {
            if(t % 2 == 1){res += "1";}
            else {res += "0";}
            t /= 2;
        }
        reverse(res.begin(), res.end());
        int l = res.length();
        double temp = pow(2, l) - 1;
        int ans = num ^ (static_cast<int>(temp));
        return ans;
    }
};