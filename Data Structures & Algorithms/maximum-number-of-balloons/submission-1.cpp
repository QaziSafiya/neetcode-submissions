class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>map;
        for(auto&ch:text){
            map[ch]++;
        }
         unordered_map<char,int>ballon={
            {'b',1},{'a',1},{'l',2},{'o',2},{'n',1}};
        int res = text.length();
        for(auto&entry:ballon){
            res=min(res , map[entry.first]/entry.second);
        }
        return res;
    }
};