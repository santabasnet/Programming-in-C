00000000	
00000001	
00000010	
00000100	
00001000	
00010000	
00100000	
01000000


 [ op  |  rs |  rt |  rd |shamt| funct]
    0     1     2     6     0     32     decimal
 000000 00001 00010 00110 00000 100000   binary
 
	MOV  	C,A     
	MVI   	A,00    
L:  ADD    	B      
	DCR    	C         
	JNZ     L          
	STA    	2010   
	HLT
	
	Algorithm to find LargestNumber in a list.
		/*Input: a list of numbers.
		Output: The largest number in the list.*/	
	if size_of_list = 0 then return null.
	Assign Largest <- List[0]
	for each Element in List, do
		if Element is_greater_than Largest then
			Assign Largest <- Element
	return Largest
	
	
	