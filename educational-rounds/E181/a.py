t = int(input())

while(t > 0):
    s = input()
    s = sorted(s)
    s = reversed(s)
    s = ''.join(s)
    print(s)
    t -= 1