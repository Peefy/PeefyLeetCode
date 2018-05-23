
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        symbol = 'IVXLCDM'
        value = [1, 5, 10, 50, 100, 500, 1000]
        count = len(s)
        sum = 0
        j = 0
        while j < count - 1:
            b_val_index = symbol.index(s[j])
            b_val = value[b_val_index]
            b_val_next_index = symbol.index(s[j + 1])
            b_val_next = value[b_val_next_index]
            if b_val_next <= b_val:
                sum += b_val
                j += 1
            else:
                sum += b_val_next - b_val
                j += 2
        if j >= count:
            return sum
        else:
            return sum + value[symbol.index(s[j])]

