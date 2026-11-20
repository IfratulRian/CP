class Solution:
    def findWordsContaining(self, words: List[str], x: str) -> List[int]:
        arr = []
        count = 0
        for i in words:
            for j in i:
                if j == x:
                    arr.append(count)
                    break
            count+=1
        return arr
