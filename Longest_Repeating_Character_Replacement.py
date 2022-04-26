class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        mp = {}
        maxLength = 0
        
        l = 0
        for r in range(0,len(s)):
            mp[s[r]] = 1 + mp.get(s[r],0)
            
            while (r-l+1)- max(mp.values()) > k:
                mp[s[l]] -= 1
                l = l + 1
            
            maxLength = max(maxLength,r-l+1)
        return maxLength
            
        
