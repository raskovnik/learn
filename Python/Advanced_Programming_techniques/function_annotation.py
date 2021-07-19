import unicodedata

def bool_unicode_punctuation(s : str) -> bool:
    for c in s:
        if unicodedata.category(c)[0] != "P":
            return False

        return True
print("Testing if zebr\a and !@#? are punctuations and return True of False")
print(bool_unicode_punctuation("zebr\a"))
print(bool_unicode_punctuation(s="!@#?"))
print()

def int_unicode_punctuation(s : str) -> int:
    for c in s:
        if unicodedata.category(c)[0] != "P":
            return 0

        return 1

print("Testing if zebr\a and !@#? are punctuations and return 1 or 0")
print(int_unicode_punctuation("zebr\a"))
print(int_unicode_punctuation("!@#?"))
