class Solution {
public:
    bool isAnagram(string s, string t) {
       multiset<char>m;
       multiset<char>p;
       for(auto c:s) {
        m.insert(c);
       }
       for(auto c:t){
        p.insert(c);

       }
       return m==p;
        
    }
};