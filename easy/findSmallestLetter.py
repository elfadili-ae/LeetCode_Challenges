class Solution:
    def nextGreatestLetter(self, letters: List[str], target: str) -> str:
        small = letters[0]
        for i in range(0, len(letters)):
            if small <= letters[i] and letters[i] > target:
                small = letters[i]
                break
        return small