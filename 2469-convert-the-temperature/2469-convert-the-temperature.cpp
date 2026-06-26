class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        double kel = 273.15+ celsius;
        double far = celsius* 1.80 + 32.00;
        return {kel , far};
    }
};