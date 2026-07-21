class Solution {
public:
    int characterReplacement(string s, int k) {

        int left = 0;
        int maxlen = 0;
        int res = 0;

        vector<int> freq(26, 0);

        for (int right = 0; right < s.size(); right++) {

            freq[s[right] - 'A']++;

            maxlen = max(maxlen, freq[s[right] - 'A']);

            int window = right - left + 1;

         if (window - maxlen > k) {
                freq[s[left] - 'A']--;
                left++;
               
            }

            res = max(res, right - left + 1);
        }

        return res;
    }
};