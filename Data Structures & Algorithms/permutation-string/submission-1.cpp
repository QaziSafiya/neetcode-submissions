class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size(), n2 = s2.size();
        if (n1 > n2) return false;

        vector<int> count1(26, 0), count2(26, 0);

        // Build initial frequency counts
        for (int i = 0; i < n1; i++) {
            count1[s1[i] - 'a']++;
            count2[s2[i] - 'a']++;
        }

        if (count1 == count2) return true;

        // Slide the window
        for (int right = n1; right < n2; right++) {
            count2[s2[right] - 'a']++;              // add new char
            count2[s2[right - n1] - 'a']--;          // remove leftmost char of previous window

            if (count1 == count2) return true;
        }

        return false;
    }
};
