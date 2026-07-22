class Solution {
public:
    bool rotateString(string s, string goal) {
    int n = s.size();
    string k = s;
    
    if(s == goal) return true; // ✅ 0 rotation case
    
    for(int i = 1; i < n; i++) {
        s = k;
        reverse(s.begin(), s.end());
        reverse(s.begin(), s.end()-i);
        reverse(s.end()-i, s.end());
        if(s == goal) return true;
    }
    return false;
}
};