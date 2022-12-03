class Solution(object):
    def singleNumber(self, nums):
        f={}
        a=[]
        for i in nums:
            if i in f:
                f[i]+=1
            else:
                f[i]=1
        for i in f:
            if f[i]==1:
                a.append(i)
        return a
        
