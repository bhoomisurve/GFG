class Solution:
    def getSecondLargest(self, arr):
        largest = -1
        sec_larg = -1
        for x in arr:
            if x > largest:
                sec_larg = largest
                largest = x
            elif x > sec_larg and x!= largest:
                sec_larg = x
        return sec_larg