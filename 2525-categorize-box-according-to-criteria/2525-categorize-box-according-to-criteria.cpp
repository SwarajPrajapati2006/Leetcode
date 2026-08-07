class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {

        long long vol = 1LL * length * width * height;

        int max = 1000000000;
        int min = 10000;

        if (((length >= min || width >= min || height >= min) || (vol >= max))
            && (mass >= 100)) {

            return "Both";
        }

        else if ((length >= min || width >= min || height >= min) || (vol >= max)) {

            return "Bulky";
        }

        else if (mass >= 100) {

            return "Heavy";
        }

        else {

            return "Neither";
        }
    }
};