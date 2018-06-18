

class Solution:
    def is_same(self, strs, index):
        try:
            count = 0
            for i in range(len(strs) - 1):
                if strs[i][index] == strs[i + 1][index]:
                    count += 1
            if count == len(strs) - 1:
                return True
            return False
        except Exception as err:
            return False
          
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        return_str = ""
        min_str_len = 4000000000
        n = len(strs)
        for i in range(n):
            now_str = strs[i]
            now_str_len = len(now_str)
            if now_str_len <= min_str_len:
                min_str_len = now_str_len
        for i in range(min_str_len):
            if self.is_same(strs, i) == True:
                return_str = return_str + str(strs[0][i])
            else:
                break
        return return_str
