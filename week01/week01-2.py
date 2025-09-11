#week01-2.py
#LeeCode 28.:Find the Index of the Firth Occurence in a String
#在 haystack 乾稻草堆裡找到needle針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        H = len(haystack)  #字串長度
        N = len(needle)
        for i in range(H-N+1): #要記得加一
            #切片slicing
            if haystack[i:i+N] == needle:
                return i #把位置當答案
        return -1 #沒有找到