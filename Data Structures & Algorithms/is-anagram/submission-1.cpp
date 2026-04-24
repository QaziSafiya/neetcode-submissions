class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // if(s==t) return true;
        // return false;

        // second approch 
      

        vector<int>freq(26,0);
       for(int i=0;i<s.length();i++){
    freq[s[i]-'a']++;
    freq[t[i]-'a']--;
       }
for(auto&count:freq){
    if(count!=0){
        return false;
    }
}
return true;

    }
};
