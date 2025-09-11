#week01-2b.py
#LeeCode 28.:Find the Index of the Firth Occurence in a String
#在 haystack 乾稻草堆裡找到needle針(大海撈針)
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)