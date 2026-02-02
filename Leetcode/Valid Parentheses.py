class Solution:
    def isValid(self, s: str) -> bool:
        if len(s)%2 != 0:
            return False
        stack = []
        close = {')' : '(', ']': '[', '}': '{'}
        for i in s:
            if i in close:
                if not stack or stack[-1] != close[i]:
                    return False
                stack.pop()
            else:
                stack.append(i)
        return not stack