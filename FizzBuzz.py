# This caculates the if input is a multipule of num and then adds word to output if it is
def modulo(input,num,word):
	if input%num==0:
		return word 
	else:
		return ""

# This loops from 1 to n printing output or num if output is empty
def fizzbuzz(n):
	for i in range(1,n):
		output = ""
		output += modulo(i,3,"Fizz ")
		output += modulo(i,5,"Buzz ")

		if output == "": 
				print(i)
		else:
 			print(output)


fizzbuzz(25)