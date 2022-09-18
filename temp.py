from collections import Counter

def firstRepeat(input) :
    words = input.split(' ')
    dict = Counter(words)
    for key in words:
        if dict[key]>1:
            print(key)
            return
if __name__== "__main__":
    input = ' My name is amit amit  gupta'
    firstRepeat(input)
 
 #amit gupta
 #r2142210966