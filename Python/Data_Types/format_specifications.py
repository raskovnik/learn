import locale
locale.setlocale(locale.LC_ALL, "C")
x, y = 1234567890, 1234.56

c = "{0:n} {1:n}".format(x, y)
print(c)

locale.setlocale(locale.LC_ALL, "en_US.UTF-8")
en  = "{0:n} {1:n}".format(x, y)
print(en)

locale.setlocale(locale.LC_ALL, "de_DE.UTF-8")
de = "{0:n} {1:n}".format(x, y)
print(de)