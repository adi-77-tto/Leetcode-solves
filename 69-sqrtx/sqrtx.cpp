class Solution {
public:
    int mySqrt(int x) {
        if (x < 0) return -1;
        if (x == 0 || x == 1) return x;

        double guess = x;
        double eps = 1e-6;

        while (true) {
            double next = 0.5 * (guess + x / guess);
            if (abs(next - guess) < eps) break;
            guess = next;
        }

        return (int)guess; 
    }
};
