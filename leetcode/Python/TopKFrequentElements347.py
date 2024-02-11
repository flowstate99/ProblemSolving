from typing import List

class	Solution:
	def	topKFrequent(self, nums: List[int], k: int) -> List[int]:
		"""
		We create a dictionary lis cause dicts have unique indexes which allows us to increment the value of the index 
		"""
		lis = {
		}
		ans = []
		for x in nums:
			if x in lis:
				lis[x] +=1
			else:
				lis[x] = 1
		"""
		sorted(iterable: sequence, key : func, reverse: bool)

		param1 - iterable: Required. the sequence to sort, list, dictionary, tuple etc...
		param2 - key: Optional. A function to execute to decide the order. Default is none
		param3 - reverse: Optional. A Boolean, False will sort ascending, True will sort descending, default is False

		lambda = anonymous function, in our case its a function that takes a dict element and returns its second element which allows us to sort based on item[1] value.
		"""
		sortedList = sorted(lis.items(), key=lambda item: item[1], reverse=True)
		for i in range(k):
			ans.append(sortedList[i][0])
		return ans

	
def	main():
	sol = Solution()
	print(sol.topKFrequent([1,1,1,2,2,3], 2))

main()