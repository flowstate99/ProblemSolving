import re
def isPalindrome(s: str) -> bool:
			lowered = s.lower()
			stripped = re.sub('[\W_]', '', lowered)
			reverseS = "".join(reversed(stripped))
			return stripped + reverseS == reverseS + stripped

print(isPalindrome("A man, a plan, a canal: Panama"))