#My simple implementation of a binary tree
# using preorder traversal

class Node(object):
    def __init__(self, value):
        self.value = value
        self.right, self.left = None, None

    def traverse(self,traversal):
        traversal += (str(self.value) + "->")
        if self.left is not None:
            traversal = self.left.traverse(traversal)
        if self.right is not None:
            traversal = self.right.traverse(traversal)

        return traversal

class BinaryTree(object):
    def __init__(self, root):
        self.root = Node(root)

    def pprint(self):
        return self.root.traverse("")

    def __repr__(self):
        return self.pprint()[:-2]

tree = BinaryTree("F")
tree.root.left = Node("S")
tree.root.right = Node("I")
tree.root.left.left = Node("O")
tree.root.left.left.left = Node("C")
tree.root.right.left = Node("E")
tree.root.right.right = Node("T")
tree.root.right.right.left = Node("Y")

print(tree)