program asd;
TYPE
   T_NODO = ^NODO;
   NODO = RECORD
      nombre : string;
      sig : T_NODO;
   END;
 PROCEDURE CREA_LISTA(VAR lista : T_NODO;VAR fich :TEXT);
VAR
   aux,aux2 : T_NODO;
   cad,cad2 : INTEGER;
BEGIN
   //Inicializamos la lista
   lista:=NIL;
   //Abrimos el fichero del que vamos a tomar los datos en modo lectura
   RESET(fich);
   //Vamos a ir leyendo línea a línea hasta el final
   WHILE NOT(EOF(fich)) DO
      BEGIN
         READLN(fich,cad);
         NEW(aux);
         aux^.nombre:=COPY(cad,1,POS(',',cad)-2);
         DELETE(cad,1,POS(cad,1,POS(',',cad)));
         //En este punto añadimos los nuevos nodos a la lista
         IF lista=NIL THEN
            BEGIN
               lista:=aux;
               aux2:=lista;
            END
         ELSE
            BEGIN
               aux2^.sig:=aux;
               aux2:=aux2^.sig;
            END;
      END;
   aux2^.sig:=NIL;
   //Cerramos el fichero del cual hemos tomado los datos
   CLOSE(fich);
END;
