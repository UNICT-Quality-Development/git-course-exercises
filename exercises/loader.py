import time

class loader:
    def __init__(self, seconds):
        self.seconds = seconds
        self.velocity = 1
    def load(self):
        for i in range (self.seconds):
            symb = ""
            if i%4 == 0:
                symb = "|"
            elif i%4 == 1:
                symb = "/"
            elif i%4 == 2:
                symb = "-"
            elif i%4 == 3:
                symb = "\\"
            print(f"Loading {symb}", end="\r")            
            time.sleep(1/self.velocity)
            
            if self.velocity == self.seconds/100:
                #print(f"\n{self.velocity}")
                self.velocity = 0

                
            self.velocity+=1
if __name__ == "__main__":
    l = loader(2000)
    l.load()