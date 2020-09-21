// Simple Arithmetic Calculator

#include <stdio.h>

int main() {
	int x;
	char o;
	int y;

	scanf("%d%c%d",&x,&o,&y);

	switch(o) {

		case '*':
			printf("\n	%d\n",x*y);
		break;

		case '/':
			printf("\n	%d\n",x/y);
		break;

		case '+':
			printf("\n	%d\n",x+y);
		break;

		case '-':
			printf("\n	%d\n",x-y);
		break;
	}

	return 0;
}
