#include <stdio.h>
int main(){
	int n, i, tv=0, radio=0, per=0, sel;
	printf("Cuantas personas desea encuestar?\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Persona %d:\n",i+1);
		printf("1. tv\n2. radio\n3. periódicos\nSeleccione: ");
		scanf("%d",&sel);
		if(sel==1)
			tv++;
		else if(sel==2)
			radio++;
		else
			per++;
	}
	printf("\n--------\n");
	if(tv>radio && tv>per)
		printf("tv");
	else if(radio>tv && radio>per)
		printf("radio");
	else
		printf("periódicos");
	return 0;
}
