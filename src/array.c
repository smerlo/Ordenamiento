#include <stdio.h>
#include <stdlib.h>

int arr_calcularMaximoInt(int array[],int limite, int* resultado)
{
	int retorno = -1;
	int maximo;
	if(array !=NULL && limite > 0 && resultado != NULL)
	{
		maximo = array[0];
		for(int i = 0; i<limite;i++)
		{
			if(array[i]>maximo)
			{
				maximo = array[i];
			}
		}
		*resultado = maximo;
		retorno = 0;
	}
	return retorno;
}
int arr_calcularMinimoInt(int* array,int limite, int* resultado)
{
	int retorno = -1;
	int maximo;
	if(array !=NULL && limite > 0 && resultado != NULL)
	{
		maximo = array[0];
		for(int i = 0; i<limite;i++)
		{
			if(array[i]<maximo)
			{
				maximo = array[i];
			}
		}
		*resultado = maximo;
		retorno = 0;
	}
	return retorno;
}
int arr_calcularPromedioInt(int* array,int limite, float* resultado)
{
	int retorno = -1;
	int acumulador =0;
	if(array !=NULL && limite > 0 && resultado != NULL)
	{
		for(int i = 0; i<limite;i++)
		{
			acumulador += array[i];
		}
		*resultado = (float)acumulador/limite;
		retorno = 0;
	}
	return retorno;
}
int arr_calcularSumaInt(int* array,int limite, int* resultado)
{
	int retorno = -1;
	int acumulador =0;
	if(array !=NULL && limite > 0 && resultado != NULL)
	{
		for(int i = 0; i<limite;i++)
		{
			acumulador += array[i];
		}
		*resultado = acumulador;
		retorno = 0;
	}
	return retorno;
}

int arr_OrdenamientoLudmilaInt(int* array, int limite)
{
	int minimo = 0;
	int aux = 0;
	int retorno = -1;
	for(int i  = 0; i<limite; i++)
	{
		minimo = i;
		for(int j=i+1;j<limite-1;j++)
		{
			if(array[minimo]>array[j])
			{
				minimo = j;
			}
		}
		if(array[i] > array[minimo])
		{
			aux = array[i];
			array[i] = array[minimo];
			array[minimo] = aux;
		}
	}
	retorno = 0;
	return retorno;
}
int arr_ImprimirArrayInt(int* array, int limite)
{
	int retorno = -1;
	for(int i = 0; i<limite;i++)
	{
		printf("%d ; ", array[i]);
	}
	retorno = 0;
	return retorno;
}
int arr_OrdenamientoBubbleBobble(int* array, int limite)
{
	int flagswap;
	int aux;
	int j = 0;
	int retorno = -1;
	if(array != NULL && limite > 0)
	{
		retorno = 0;
		do{
			flagswap = 0;
			limite--;
			for(int i=0;i<limite;i++)
			{
				if(array[i]>array[i+1])
				{
					aux= array[i];
					array[i]=array[i+1];
					array[i+1]=aux;
					flagswap =1;
					j++;
				}
			}
			}while(flagswap != 0);

	}

		return retorno;
}
