#include <stdio.h> 

int global;//uninitialized variables stored in BSS(block started by symbol)
int main(void)

{
	static int i;
	return 0;
}

 	
