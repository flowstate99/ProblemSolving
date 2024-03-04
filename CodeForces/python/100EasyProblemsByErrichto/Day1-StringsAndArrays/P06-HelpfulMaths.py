oper = input()
nums = []
for i in range(0,len(oper), 2):
    nums.append(oper[i])

nums.sort()
reversedOper = ""
for i in range(len(nums)):
    if i != len(nums) -1:
        reversedOper += nums[i] + '+'
    else:
        reversedOper += nums[i]
print(reversedOper)