class Tree():
    def __init__(self, data):
        self.data = data
        self.parent = None
        self.children = []

    def add_child(self, child):
        child.parent = self
        self.children.append(child)

    def pretty_print(self):
        spaces = "   " * self.get_level()
        prefix = spaces + "-->" if self.parent else ""
        print(prefix + self.data)
        if self.children:
            for child in self.children:
                child.pretty_print()

    def get_level(self):
        level, z = 0, self.parent
        while z:
            level += 1
            z = z.parent

        return level


def build_tree():
    root = Tree("Electronics")
    
    phones = Tree("Phones")
    phones.add_child(Tree("i-phone"))
    phones.add_child(Tree("samsung"))


    laptop = Tree("laptop")
    laptop.add_child(Tree("HP"))
    laptop.add_child(Tree("Macbook"))

    tv = Tree("tv")
    tv.add_child(Tree("samsung"))
    tv.add_child(Tree("LG"))

    root.add_child(laptop)
    root.add_child(tv)
    root.add_child(phones)

    return root


if __name__== "__main__":
    root = build_tree()
    root.pretty_print()