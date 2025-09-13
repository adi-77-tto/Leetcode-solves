class Solution {
public:
    int maxFreqSum(string s) {
        int maxiC = 0, maxiV = 0, countV = 1, countC = 1; 
        int n = s.length();
        if (n == 0) return 0;

        sort(s.begin(), s.end());
        if (isVowel(s[0])) maxiV = 1;
        else maxiC = 1;
        for (int i = 1; i < n; i++) {
            if (!isVowel(s[i])) {
                if (s[i] == s[i - 1]) countC++;
                else countC = 1;
                maxiC = max(maxiC, countC);
            }
            else {
                if (s[i] == s[i - 1]) countV++;
                else countV = 1;
                maxiV = max(maxiV, countV);
            }
        }
        if(maxiC>0 && maxiV>0) return maxiC + maxiV;
        else return max(maxiC, maxiV);
    }
    private:
    bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
};