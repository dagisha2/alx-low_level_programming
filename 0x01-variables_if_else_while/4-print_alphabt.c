#include <stdio.h>

int main()
{
	int n;
	for(n='a'; n<='z';n++){
		if(n=='e'){
			continue;
		}
		if(n=='q'){
			continue;}
		putchar(n);

	}
	putchar('\n');
		return 0;
}
