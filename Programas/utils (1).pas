Unit utils;

Interface

uses crt;

Const
N= 256;

Type

TRango = 1..N;
//el arreglo de enteros
TArray = array [TRango] of Integer;

//un registro con la secuencia y la marca virtual.
TData=record
          seq : TArray;
          mark: TRango;
       end;


//llena el arreglo con una cantidad aleatoria de
//numeros aleatorios y deja una marca virtual en el campo mark.
Procedure fullAleatory (var arr : TData);
//muestra los elementos del arreglo
Procedure show (arr : TData);


Implementation


//llena el arreglo con una cantidad aleatoria de
//numeros aleatorios y deja una marca virtual en el campo mark.
Procedure fullAleatory (var arr : TData);
var
  i : TRango;
  aNum, cant : Integer;
begin
   randomize;
  cant := random(10)+1;
  for i:=1 to cant do
    begin
      aNum := random(10)+1;
      arr.seq[i] := aNum;
      arr.mark += 1;
  end;
  arr.mark += 1;
end;


//muestra los elementos del arreglo
Procedure show (arr : TData);
var
  i : TRango;
begin
  write('[ ');
  for i:=1 to (arr.mark - 1) do
  begin
    write(arr.seq[i], ' ');
  end;
  writeln(']');
end;

End.
