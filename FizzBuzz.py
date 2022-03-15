# This caculates the if input is a multipule of num and then adds word to output if it is
def modulo(input,num,word,output):
	if input%num==0:
		return output+word 
	else:
		return output

# This loops from 1 to n printing output or num if output is empty
def fizzbuzz(n):
	for i in range(1,n):
		output = ""
		output = modulo(i,3,"Fizz ",output)
		output = modulo(i,5,"Buzz ",output)

		if output == "": 
				print(i)
		else:
 			print(output)


fizzbuzz(25)