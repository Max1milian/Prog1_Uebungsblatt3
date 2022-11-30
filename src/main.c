#include <stdio.h>
#include <stdlib.h>
#include "element.h"
#include "list.h"


int main(void)
{
	test_pushPrint();
	testListFindElement();
	testListGetIndexOfElement();
	testListGetElementAtIndex();

	int wait;
	scanf("%d", &wait);
	
	return 0;
}
