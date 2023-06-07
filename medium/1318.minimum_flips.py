class Solution:
    def minFlips(self, a: int, b: int, c: int) -> int:
        if a == b and a == c:
            return 0

        count = 0
        len = max(a.bit_length(), b.bit_length(), c.bit_length())
        for i in range(0, len):
            mask = 1 << i
            abit = (a & mask) >> i
            bbit = (b & mask) >> i
            cbit = (c & mask) >> i

            if (abit or bbit) == 1 and cbit == 0:
                if abit == 1:
                    count += 1
                if bbit == 1:
                    count += 1
            elif (abit or bbit) == 0 and cbit == 1:
                count += 1
        return count
