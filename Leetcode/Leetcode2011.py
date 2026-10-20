class Solution(object):
    def finalValueAfterOperations(self, operations):
        """
        :type operations: List[str]
        :rtype: int
        """
        sum=0
        s1="++X"
        s2="X++"
        #s3="--X",s4="X--"
        for i in range(len(operations)):
            if operations[i] == s1 or operations[i] == s2: sum+=1
            else: sum-=1
        return sum
