#include <stdio.h>

int main()
{
	int n,k;
	for(k= 'A'; k<='Z' ; k++){
		for(n = 'a' ; n<='z'; n++){
			putchar(n);
		}
		putchar(k);
	}
	return 0;
}
