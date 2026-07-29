class Solution(object):
    def smallestNumber(self, n, t):
        """
        :type n: int
        :type t: int
        :rtype: int
        """
        x=n
        while True:
            p=1
            for i in str(x):
                p=p*int(i)
            if p%t==0:
                return x
            x=x+1
