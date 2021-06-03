# simple implementation of a trie

class Node:
    def __init__(self, value):
        self.value = value
        self.children = {}
        self.word_finished = False
    
    def insert(self, string, idx):
        char = string[idx]
        if char not in self.children:
            self.children[char] = Node(char)
        if len(string) == idx + 1:
            self.children[char].word_finished = True
        else:
            self.children[char].insert(string, idx + 1)

    def pprint(self, level):
        if len(self.children) == 0:
            return f"{self.value}\n"
        r = f"{self.value}\n{''.join(['|  ' for _ in range(level)])}|\n"
        for char_key in self.children:
            r += f"{''.join(['|  ' for _ in range(level)])}|---{self.children[char_key].pprint(level + 1)}"
        return r

class Trie:
    def __init__(self):
        self.root = Node('*')
    
    def __repr__(self):
        return self.root.pprint(0)
    
    def insert(self, string):
        self.root.insert(string, 0)

if __name__ == "__main__":
    t = Trie()
    t.insert("tony")
    t.insert("toy")
    t.insert("tree")
    t.insert("boy")
    t.insert("blue")
    t.insert("active")
    t.insert("extra")
    t.insert("extinct")
    print(t)