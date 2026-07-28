class Solution {
public:
    bool isPalindrome(string s) {
        string str="";

for(auto&ch:s){
    if (isalnum(ch))
                str += tolower(ch);
}

string rev=str;
reverse(rev.begin(),rev.end());
return rev==str;
    }
};
