class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        sort(s1.begin(), s1.end());
        sort(s2.begin() , s2.end());
         bool s1_breaks_s2 = true;
        bool s2_breaks_s1 = true;
        
        for (int i = 0; i < s1.size(); i++) {
            // If s1 is smaller at any point, s1 cannot break s2
            if (s1[i] < s2[i]) {
                s1_breaks_s2 = false;
            }
            // If s2 is smaller at any point, s2 cannot break s1
            if (s2[i] < s1[i]) {
                s2_breaks_s1 = false;
            }
        }
        
        // Return true if at least one string completely breaks the other
        return s1_breaks_s2 || s2_breaks_s1;

    }
};