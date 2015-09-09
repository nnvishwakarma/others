sequence={0:"Zero",1:"One",2:"Two",3:"Three",4:"Four",5:"Five",6:"Six",7:"Seven",8:"Eight",9:"Nine",
		10:"Ten",20:"Twenty",30:"Thirty",40:"Fourty",50:"Fifty",60:"Sixty",70:"Seventy",80:"Eighty",90:"Ninety",
		100:"Hundred",1000:"Thousand",1000000:"Million",1000000000:"Billion"}
dec_count={10:"Ten",20:"Twenty",30:"Thirty",40:"Fourty",50:"Fifty",60:"Sixty",70:"Seventy",80:"Eighty",90:"Ninety"}

zero_positon={2:10,3:100,4:1000,7:1000000,10:1000000000}
fraction={1:{0:"Zero",1:"One",2:"Two",3:"Three",4:"Four",5:"Five",6:"Six",7:"Seven",8:"Eight",9:"Nine"},
			2:{1:"Ten",2:"Twenty",3:"Thirty",4:"Fourty",5:"Fifty",6:"Sixty",7:"Seventy",8:"Eighty",9:"Ninety"},
			3:"Hundred",
			4:"Thousand",
			7:"Million",
			10:"Billion"
		}

	
def number_as_word(number):		
		number=int(number)
		numstr=str(number)
		word=""		
		num_as_list=list(numstr[0:])
		c=len(num_as_list)-1
		print("*****"+str(c))
		while c >= 0:
			print(c)
			temp=fraction[c+1]
			t_w=str(fraction[c+1])
			if c in {0,1}:
				temp_fra=fraction[c+1]			
				print(num_as_list[c])
				t_w=str(fraction[c+1][int(num_as_list[c])])
			word=t_w+" "+word
			c-=1
			print(word)
		return word
		

			
s=number_as_word("126")
print(s)
