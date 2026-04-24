class Solution {
public:
    bool wordPattern(string pattern, string s) {
        // index mapping
        vector<string>words;
        string temp;
    for(auto&c:s){
        if(c==' '){
            words.push_back(temp);
            temp="";
        }
        else{
            temp=temp+c;
        }
    }
    words.push_back(temp);
    if(pattern.size()!= words.size()) return false;
unordered_map<char,int>mp1;
unordered_map<string,int>mp2;
for(int i=0;i<pattern.size();i++){
    if(mp1[pattern[i]]!=mp2[words[i]]){
        return false;
    } 
    mp1[pattern[i]] = mp2[words[i]] = i + 1;
}

return true;
    }
};