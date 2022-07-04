#include <stdio.h>

int main()
{
      int n;
      for(n='0'; n<='9' ; n++){
	      putchar(n);
	      if(n=='9'){
		      for(n='a' ; n<='f' ;n++){
			      putchar(n);
		      }
		      break;
	      }
      }
      putchar('\n');
      return 0;
}
