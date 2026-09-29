class Solution(object):
    def findMedianSortedArrays(self, nums1, nums2):
        """
        :type nums1: List[int]
        :type nums2: List[int]
        :rtype: float
        """
        ans=[]
        for i in nums1:
            ans.append(i)
        for i in nums2:
            ans.append(i)
        ans.sort()
        # print(ans)
        length=len(ans)
        mid=length//2
        if length%2==0:
            total=ans[mid]+ans[mid-1]
            return total/2.0
        else:
            return ans[mid]             
        return ans[0]