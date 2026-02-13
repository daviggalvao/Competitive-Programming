class Solution:
    def search(self, nums: List[int], target: int) -> int:
        r, l = 0, len(nums)-1
        while r<=l:
            m = (r+l)//2
            if nums[m] == target: return m
            if nums[m] < target:
                r = m+1
                continue
            if nums[m] > target:
                l = m-1
                continue
        return -1