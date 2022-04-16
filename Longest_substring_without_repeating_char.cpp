class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       
        unordered_set<char> St;
        int n = s.length();
        int maxLength = 0;
        
        int i = 0;
        int j = 0;
        
        while(i<n && j <n){
            if(St.find(s[j]) == St.end()) {
                St.insert(s[j]);
                maxLength = max(maxLength,j-i+1);
                j++;
            }
            else{
                St.erase(s[i]);
                i++;
            }
        }
        return maxLength;
    }
};
