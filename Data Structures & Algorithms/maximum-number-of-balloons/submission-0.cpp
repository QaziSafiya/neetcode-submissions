class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int>mpcount;
        for(auto &c:text){
            mpcount[c]++;
        }

        unordered_map<char,int>ballon={
            {'b',1},{'a',1},{'l',2},{'o',2},{'n',1}};
        int res= text.length();
        for(auto&entry:ballon){
            res=min(res,mpcount[entry.first]/entry.second);
        }
        return res;

    }
};