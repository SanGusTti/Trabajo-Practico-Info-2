# Horno calentador de barrotes
Este proyecto es la primer parte del proceso productivo de perfiles de aluminio.

__Constitución del horno:__

- Mesa de carga de barrotes.

- Puerta de entrada.

- Horno de barrotes.

- Puerta de salida.

- Termocuplas.

__Procedimiento:__ 

Inicio: Pregunto valores de temperatura (Varían según la aleación utilizar). Corroboro el estado del horno, en caso de estar apagado, deben encenderse los pilotos y cerrarse las puertas una vez que encienden.

__1°Paso:__ *Movimiento de la cadena transportadora:* 
                                                - Sólo si hay tocho en la entrada del horno, la puerta de ingreso se abre. 
                                                - Sólo si hay tocho en Zona 4, la puerta de egreso se abre. }
                                                - Avanza la cadena transportadora.

__2°Paso:__ *Control de temperatura:* 
                        - {
          *Calentamiento:*
                        - {
Manualmente, se cargan barrotes en la mesa de carga al horno, una vez habilitado para ingresar en el horno, se abre la puerta del horno y mediante una cadena transportadora avanza el barrote.

El horno calienta gradualmente el barrote, por zonas. Hasta que no llega a la temperatura correspondiente en cada zona, no avanzará. La lectura de la temperatura se realiza por medio de termocuplas que entran y salen, pinchando el barrote. 

En la salida del horno, la puerta permanece cerrada hasta que el extremo del barrote no llega a la temperatura deseada. Una vez que alcanza la temperatura correspondiente, se abre la puerta del horno, el barrote avanza la medida correspondiente para el corte del tocho (Un tocho es una porción del barrote, el cual luego se utiliza para la extrusión del perfil). Una vez cortado el barrote, la parte restante retrocede hacia el interior del horno, se cierra la puerta de salida y sigue el proceso de calentado para el futuro corte.
