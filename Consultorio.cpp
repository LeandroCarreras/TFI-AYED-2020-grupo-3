#include<stdio.h>
#include<conio.h>
#include<string.h>








main()
{
	
	FILE *p;
	
	do{
		printf("\t1)\n");
		printf("\t2)\n");
		printf("\t3)\n");
		printf("\t4)\n");
		printf("\t5)\n");
		printf("\t6)SALIR\n");
		printf("ELIJA UNA OPCION DEL 1 AL 6: ");
		scanf("%d", &opc);
		
		system("CLS");
		switch(opc)
		{
			case 1:;break;
			case 2:;break;
			case 3:;break;
		    case 4:(p,n);break;
		    case 5:(p,n);break;
			case 6: return 0; break;
			default: printf("LA OPCION INGRESADA ES INCORRECTA"); break;
		}
		system("CLS");
	}while(opc!=6);	
}
