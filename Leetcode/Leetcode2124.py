class Solution:
    def checkString(self, s: str) -> bool:
        f=0
        for x in s:
            if x=='b':
                f=1
            if f==1 and x=='a':
                return False
        return True
