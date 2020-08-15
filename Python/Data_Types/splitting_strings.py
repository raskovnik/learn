record = "Leo Tolstoy*1828-8-28*1910-11-20"
fields = record.split("*")
born = fields[1].split("-")
died = fields[2].split("-")

print(f"{fields[0]} lived about ", int(died[0]) - int(born[0]), "years")