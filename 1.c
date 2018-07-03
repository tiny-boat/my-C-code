/* 1.preprocessor directive */

#include <stdio.h> // stdio.h: standard input/output header 

/* 2.function prototyping/declaration */

void br(void);  // void means a large empty space in English
void ic(void);

/* 3.1 function main(): the int means the output of function is an integer, and the void means function has no parameters */

int main(void) // the following block {...} is a compound-statement
{
	int fingers, toes, twofold_fingers, square_toes;
	
	br();  // an expression-statement
	printf(", ");
	ic();
	printf("\n");
	
	ic();
	printf("\n");
	
	br();
	printf("\n");
	
	fingers = 10;  // an expression-statement
	toes = 10;
	twofold_fingers = fingers*2;
	square_toes = toes * toes;
	printf("Every normal human has %d fingers and %d toes.\nIf you have %d fingers and %d toes, you may be an extraterrestrial.", fingers, toes, twofold_fingers, square_toes);
	
	getchar();  // to wait for a keystroke
	return 0;  // a jump-statement
}

/* 3.2 function br() */

void br(void)
{
	printf("Brazil, Russia");
}

/* 3.3 function ic() */

void ic(void)
{
	printf("India, China");
}
