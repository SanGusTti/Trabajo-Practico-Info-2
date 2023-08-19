# Horno calentador de barrotes
Este proyecto es la primer parte del proceso productivo de perfiles de aluminio. El caul consta de un horno calentador de barrotes. Los barrotes ingresan por medio de una mesa de carga al horno. El horno calienta los barrotes a temperaturas seteadas por el maquinista, según características del material. Cada vez que los barrotes alcanzan la temperatura seteada para cada zona, avanzan a la siguiente. En la última zona, se abrira la puerta de salida para enviar el barrote a la prensa extrusora.

__Constitución del horno:__

- Mesa de carga de barrotes.

- Puerta de entrada.

- Horno de barrotes.

- Puerta de salida.

- Termocuplas.

__Procedimiento:__ 

Inicio: Pregunto valores de temperatura (Varían según la aleación utilizar). Corroboro el estado del horno, en caso de estar apagado, deben encenderse los pilotos y cerrarse las puertas una vez que encienden.

__1°Paso (Avance):__ *Movimiento de la cadena transportadora:* 

                                                - Sólo si hay tocho en la entrada del horno, la puerta de ingreso se abre. 
                                                
                                                - Sólo si hay tocho en Zona 4, la puerta de egreso se abre. 
                                                
                                                - Avanza la cadena transportadora cuando las condiciones de avance lo permiten (Cond_Avance==1).

__2°Paso (Calentamiento):__ *Control de temperatura y calentamiento:*

                                                - Las termocuplas ingresan al horno por un orificio. Pinchan en el barrote y realizan la medición (Temp[i]). 
                                                
                                                - Se encienden o apagan los quemadores segun la temperatura que posean los barrotes hasta llegar a la temperatura correspondiente del primer barrote (Temp[4]>=Temp_Set[4]. 

__Máquina de estados:__

![Máquina de estados Prensa](https://github.com/SanGusTti/Trabajo-Practico-Info-2/assets/129624449/16c2c6b3-143b-4fc6-8f9d-bc01a60f11d9)



