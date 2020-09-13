import collections
from typing import List


class Solution:
    def findAnagrams(self, s: str, p: str) -> List[int]:
        need, window = collections.defaultdict(int), collections.defaultdict(int)
        for c in p:
            need[c] += 1
        
        left, right, vaild = 0, 0, 0
        s_len, p_len, need_len = len(s), len(p), len(need)
        res = []

        while right < s_len:
            c = s[right]
            right += 1

            if c in list(need.keys()):
                window[c] += 1
                if window[c] == need[c]:
                    vaild += 1

                while right - left >= p_len:
                    if vaild == need_len:
                        res.append(left)

                    d = s[left]
                    left += 1

                    if d in list(need.keys()):
                        if window[d] == need[d]:
                            vaild -= 1
                        window[d] -= 1
                    
        
        return res


if __name__ == "__main__":
    s = Solution()
    print(s.findAnagrams("acdcaeccde", "c"))