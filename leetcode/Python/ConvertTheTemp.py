from typing import List
class Solution:
    def convertTemperature(self, celsius: float) -> List[float]:
        return [round(celsius, 5) + 273.15, round(celsius*1.80, 5) + 32.00]