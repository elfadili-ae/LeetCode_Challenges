class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        lo, hi = 0, len(nums) - 1
        List = [-1, -1]
        while lo <= hi:
            mid = (lo + hi) // 2
            if nums[mid] == target:
                if mid > 0 and nums[mid - 1] == target:
                    hi = mid - 1
                else:
                    List[0] = mid
                    break
            elif nums[mid] > target:
                hi = mid - 1
            else:
                lo = mid + 1
        lo = List[0] if List[0] != -1 else 0
        hi = len(nums) - 1
        while lo <= hi:
            mid = (lo + hi) // 2
            if nums[mid] == target:
                if mid < hi and nums[mid + 1] == target:
                    lo = mid + 1
                else:
                    List[1] = mid
                    break
            else:
                hi = mid - 1
        return List
