class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>word;
        string temp;
        for(auto&c:s){
            if(c==' '){
                word.push_back(temp);
              temp="";
            }
            else{
                temp=temp+c;
            }
        }
        word.push_back(temp);

        if(pattern.length()!=word.size()) return false;

        unordered_map<char,string>map1;
        unordered_map<string,char>map2;
       for(int i=0;i<pattern.size();i++){
         if(map1.count(pattern[i]) && map1[pattern[i]]!=word[i]) return false;
         if(map2.count(word[i])&& map2[word[i]]!=pattern[i]) return false;

         map1[pattern[i]]=word[i];
         map2[word[i]]=pattern[i];
       }
       return true;
    }
};