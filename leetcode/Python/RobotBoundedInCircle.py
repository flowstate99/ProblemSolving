class Solution:
    def findDirection(self, instructions: str) -> str:
        x, y = 0, 0
        angle = 0
        directions = ["north", "east", "south", "west"]

        for ins in instructions:
            if ins == "L":
                angle = (angle + 1) % 4
            elif ins == "R":
                angle = (angle - 1) % 4
            elif ins == "G":
                if directions[angle] == "north":
                    y += 1
                elif directions[angle] == "east":
                    x += 1
                elif directions[angle] == "south":
                    y -= 1
                elif directions[angle] == "west":
                    x -= 1

        return (x, y, directions[angle])

    def isRobotBounded(self, instructions: str) -> bool:
        x, y, direction = self.findDirection(instructions)

        return (x == 0 and y == 0) or direction != "north"

def main():
    sol = Solution()
    print(sol.isRobotBounded("GGLLGG"))

if __name__ == "__main__":
    main()
