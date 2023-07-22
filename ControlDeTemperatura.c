//Aqui se define la funcion de control de temperatura en el horno y el calentamiento del mismo//

	//Inicio: Preguntar setteos de temperaturas iniciales (Set_TempZona[4]) *Ver de ampliar a cargar un archivo de base de datos seteada 
	//Toma de mediciones con termocuplas 
	//Barrote en la entrada? Sí, abrir puerta y avanzar cadena.
	//Avanzar barrote lentamente por zonas, hasta que alcance la temperatura seteada por zona
	//Abrir puerta, avanzar cadena, cae el barrote, cerrar puerta.

//Proyecto más próximo. Hasta ahora, Usa datos actuales y entrega los valores de temperatura

#include <stdio.h>
#include <stdlib.h>

int ImpTemp();

int main()
{
    int i, Inicio_Temp[4], Temp[4];
    
    printf ("   MENU DE OPCIONES\n\n1)Cargar datos\n2)Usar datos actuales\n");
    scanf ("%d", &i);
    
    switch (i) 
    {
        case 1:
        i=0;
        ImpTemp();
        break;
        
        case 2: 
        i=0;
        ImpTemp();
        break;
    }
    
    i=0;
    do
    {
        printf ("Temperatura seteada para zona %d = %d\n", i+1, Inicio_Temp[i]);
        i++;
    }while(i<4);
    
    scanf("%d", &i);
    return 0;
}

int ImpTemp()
{
    int i, Temp[4];
    i=0;
    do 
    {
        printf ("Temp. zona %d: %d\n", i+1, Temp[i]);
        i++;
            
    }while (i<4);
    return Temp;
}
