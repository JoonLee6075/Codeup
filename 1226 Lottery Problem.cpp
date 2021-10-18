#include <stdio.h>

int main()
{
	int a[7], b[6], cnt = 0, i, j, lucky = 0;
	
	for(i = 0; i < 7; i++) scanf("%d", &a[i]);
	for(i = 0; i < 6; i++) scanf("%d", &b[i]);
		
	for(i = 0; i < 7; i++){
		for(j = 0; j < 6; j++){
			if(a[i] == b[j])
			{
				if(i == 6)
					lucky = 1;
				else
					cnt++;
			}
		}
	}
			
	if	    (cnt == 6) 			    printf("1");
	else if (cnt ==5 && lucky == 1) printf("2");
	else if (cnt == 5) 			    printf("3");
	else if (cnt == 4) 			    printf("4");
	else if (cnt == 3) 			    printf("5");
	else 						    printf("0");
}
