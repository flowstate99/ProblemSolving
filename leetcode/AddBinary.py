class Solution:
    def  addBinary(self, a: str, b: str) -> str:
      x = int(a,2)
      y = int(b,2)
      sum = bin(x+y)
      return sum[2:]

def main():
    solution = Solution()
    a = "1010"
    b = "1011"
    result = solution.addBinary(a, b)
    print(result)



if __name__ == "__main__":
    main()
