class Solution
{
public:
    string longestPalindrome(string s)
    {
        int n = s.length();
        string res;
        int maxLength = 0;
        int l, r;

        for (int i = 0; i < n; i++)
        {
            l = i;
            r = i;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                if (r - l + 1 > maxLength)
                {
                    maxLength = r - l + 1;
                    res = s.substr(l, maxLength);
                }
                l--;
                r++;
            }

            // for even length
            l = i;
            r = i + 1;
            while (l >= 0 && r < n && s[l] == s[r])
            {
                if (r - l + 1 > maxLength)
                {
                    maxLength = r - l + 1;
                    res = s.substr(l, maxLength);
                }
                l--;
                r++;
            }
        }

        return res;
    }
};
