#simple implementation of a binary search tree

from random import randint

class Node:
    def __init__(self, value):
        self.value = value
        self.left, self.right = None, None
    
    def insert(self, val):
        if val <= self.value:
            if self.left is None:
                self.left = Node(val)
            else:
                self.left.insert(val)
        else:
            if self.right is None:
                self.right = Node(val)
            else:
                self.right.insert(val)
    
    def traverse(self, traversal):
        traversal += str(self.value) + "-->"
        if self.left is not None:
            traversal = self.left.traverse(traversal)
        if self.right is not None:
            traversal = self.right.traverse(traversal)
        return traversal

    def pprint(self, level):
        if self.left is None and self.right is None:
            return f"{self.value}\n"
        r = f"{self.value}\n{''.join(['|  ' for _ in range(level)])}|\n"
        if self.left is not None:
            r += f"{''.join(['|  ' for _ in range(level)])}|---{self.left.pprint(level + 1)}"
        if self.right is not None:
            r += f"{''.join(['|  ' for _ in range(level)])}|---{self.right.pprint(level + 1)}"
        return r

class BinarySearchTree:
    def __init__(self):
        self.root = None
    
    def __repr__(self):
        return self.root.pprint(0)
    
    def insert(self, val):
        if self.root is None:
            self.root = Node(val)
        else:
            self.root.insert(val)

    def traverse(self):
        return self.root.traverse("")[:-3]        

tree = BinarySearchTree()
for _ in range(8):
    tree.insert(randint(1,16))
print(tree.traverse())

print(tree)