class MyHashSet:
	def	__init__(self) -> None:
		self.myHashSet = set()

	def	add(self, key: int) -> None:
		self.myHashSet.update({key})
	def	remove(self, key: int) -> None:
		if key in self.myHashSet:
			self.myHashSet.remove(key)
	def	contains(self, key: int) -> None:
		return key in self.myHashSet