class Solution {
public:
    int addDigits(int num) {
        if(num<10) return num;
        string s = to_string(num);
    int count=0;
    while (s.size() > 1){
        count=0;
        for (int i = 0; i < s.size(); i++) 
        {
            count += s[i] - '0'; 
        }
        s = to_string(count);
        }
        return count;
    }
};