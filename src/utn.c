#include <stdio.h>

int utn_getNumero(int* pNumero,char* pTexto,char* pError, int min, int max, int reintentos)
{
	int i=0;
	int retorno = -1;
	while(i < reintentos)
		{
			printf("%s",pTexto);
			__fpurge(stdin);
			if(scanf("%d", pNumero)==1)
			{
				if(*pNumero >= min && *pNumero <= max)
				{
					retorno = 0;
					break;
				}
				else
				{
					printf("%s",pError);
					retorno = -1;
				}
			}
			else
			{
				printf("%s",pError);
				retorno = -1;

			}
			i++;
		}

	return retorno;
}
