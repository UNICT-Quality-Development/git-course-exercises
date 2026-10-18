import time

class loader:
    def __init__(self, seconds):
        self.seconds = seconds
        self.velocity = 1
    def load(self):
        for i in range (self.seconds):
            if i%4 == 0:
                print("|", end="\r")
            elif i%4 == 1:
                print("/", end="\r")
            elif i%4 == 2:
                print("-", end="\r")
            elif i%4 == 3:
                print("\\", end="\r")
            time.sleep(1/self.velocity)
            
            if self.velocity > self.seconds/2:
                self.velocity = self.seconds/2
                
            self.velocity+=1
if __name__ == "__main__":
    l = loader(2000)
    l.load()