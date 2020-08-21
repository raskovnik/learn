class Transaction:
    def __init__(self, amount, date, currency, usd_rate):
        self.amount = amount
        self.date = date
        self.currency = currency
        self.usd_rate = usd_rate

    
    def usd(self):
        return self.amount * self.usd_rate


money = Transaction(500, "15-5-2020", "Ksh", 4)
print(money.usd())