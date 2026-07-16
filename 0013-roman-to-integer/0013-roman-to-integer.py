class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        result=0
        dic = {"I": 1,"V": 5,"X": 10,"L": 50,"C": 100,"D": 500,"M": 1000}
        n=len(s)
        for i in range(n):
            if i + 1 < n and dic[s[i]] < dic[s[i+1]]:
                result -= dic[s[i]]
            else:
                result += dic[s[i]]
        return result