{Este es un simple programa que calcula la distancia entre dos puntos de un plano carteciano hecho por Gaaston Martin}
program Distanciade2puntos;
	type Tpuntox=record
		x1:real;			{tipo de variables X}
		x2:real;		
	end;
   type Tpuntoy=record
		y1:real;			{tipo de variables Y}
		y2:real;
	
function DistanciaPunto(x:Tpuntox;y:Tpuntoy):real;		
var distancia:real;
begin 
	distancia:=sqrt(sqr(x.x1-x.x2)+sqr(y.y1-y.y2));
	DistanciaPunto:=distancia;				
end;
var 
	xx:Tpuntox;						
	yy:Tpuntoy;						
begin
	writeln('ingrese el punto x1:');
	readln(xx.x1);
	writeln('ingrese el punto y1:');	
	readln(yy.y1);				
	writeln('ingrese el punto x2:');
	readln(xx.x2);
	writeln('ingrese el punto y2:');
	readln(yy.y2);
	writeln('La distancia es'(DistanciaPunto(xx,yy):2:2)	   
end.
