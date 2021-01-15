def reverseLeftKcharToTheEnd(s, k):
	res = ""
	for i in range(k, k+len(s)):
		res += s[i % len(s)]
	return res

x = input()
y = input()

print(reverseLeftKcharToTheEnd(str(x),int(y)))
