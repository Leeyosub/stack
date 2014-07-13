#include "arraystack.h"
#include "arraystack.c"

int main(void)
{
	int i = 0;
	ArrayStack *Stack = NULL;
	
	AS_CreateStack(&Stack, 10);

	AS_Push(Stack,3);
	AS_Push(Stack,37);
	AS_Push(Stack, 11);
	AS_Push(Stack, 12);

	printf ("Capacity : %d, Size = %d , Top : %d\r\n",
		Stack->Capacity, AS_GetSize(Stack), AS_Top(Stack));
		
	return 0;
	
	

}
