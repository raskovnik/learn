import string
import sys

fil = open("/home/stephen/Tony/learn/Python/Collection_data_types/lorem_ipsum.txt")

words = {}
strip = string.whitespace + string.punctuation + string.digits + "\"'"
for fil in sys.argv[1:]:
    for line in fil.read():
        for word in line.lower().split():
            word = word.strip(strip)
            if len(word) > 2:
                words[word] = words.get(word, 0) + 1
for word in sorted(words):
    print("{0} occurs {1} times".format(word, words[word]))
fil.close()
print(words)