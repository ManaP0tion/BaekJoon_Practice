str = input()
reversed_str = ''.join(reversed(str))
if str == reversed_str:
    print(1)
else:
    print(0)