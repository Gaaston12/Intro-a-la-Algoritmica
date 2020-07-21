{
	Introducción a la Algorítmica y Programación 2017
	Ejercicio Prpuesto Guía Practia 8

	Enunciado:
	Una organización conformada por un grupo de personas, que integran en total 3 comisiones, necesita sistematizar la información.
	Para ello, requiere almacenar los datos de cada persona. 
	Cada comisión será considerada integrada por un conjunto de personas (puede haber personas que están en mas de una comisión).
	Una vez asignadas las personas a una comisión, se solicita informar lo siguiente:
	- Listar los integrantes de cada comisión.
	- Listar las personas que pertenezcan a las 3 comisiones.
	- Listar las personas que estén al menos en una comisión.
	- Listar las personas que pertenecen a 2 comisiones.

	Ayuda: realice una acción que tome como parámetro un conjunto (comisión) y liste las información sobre los integrantes de la misma. 
	Luego, puede invocar dicha acción utilizando las operaciones sobre conjuntos para lograr los listados solicitados.

}

program Organizacion;

	const 
	MaxPersonas = 5; {No puede ser mayor que 256 elementos}

	type 
	{define el rango de posibles identificadores de personas}
	TRangoPersonas = 1..MaxPersonas;

	{Tipo Registro que modela la información a gestionar sobre las personas}
	TPersona =
	record
		Nombre: string;
		Apellido: string;
		Dni: integer;
		Dir: string;
		{ ... resto de información la que se pueda sugerir}
	end;

	{Lista (arreglo) de personas de la organización (** una vez completado podría mejorar sin
	 la necesidad de cargarlo por completo,}
	TOrganizacionIntegrantes = array [TRangoPersonas] of TPersona;
	
	{cada comisión es un conjunto de identificadores de personas}
	TComision = set of TRangoPersonas; 

	var 
	OrganizacionIntegrantes: TOrganizacionIntegrantes;
	C1,C2,C3:TComision;

	{====== declaraciones de Procedimientos ======}
	{Procedimiento que                                                    }
	procedure CargarPersona (var p:TPersona);
	begin
		Writeln('Ingrese el Nombre de la Persona');
		Readln(p.Nombre);
		Writeln('Ingrese el Apellido de la Persona');
		Readln(p.Apellido);
		Writeln('Ingrese el DNI');
		Readln(p.Dni);
		Writeln('Ingrese la direccion');
		Readln(p.Dir);
		{... Completar para cargar toda la información como en el ej.2}
	end;
   	
   	{Procedimiento que                              }
	procedure MostrarPersona(p:TPersona);
	begin
		Writeln(p.Apellido,' ',p.Nombre,' ');
		Writeln('DNI: ',p.Dni);
		Writeln('La direccion: ', p.Dir);
	end;

	{Procedimiento que                                               }
	procedure CargarOrganizacion (var org:TOrganizacionIntegrantes);
	var i:TRangoPersonas;
	begin
		for i:=1 to MaxPersonas do
			CargarPersona(org[i]);
	end;

	{Procedimiento que                                            }
	procedure AsignarPersonaComision (id_persona:TRangoPersonas; var c:TComision);
	begin
		c:=c+[id_persona]; {+ es la union de conjuntos, [id_persona] es el conjunto unitario}
	end;

	{Procedimiento que                         }
	procedure MostrarIntegrantesComision ( c:TComision; org:TOrganizacionIntegrantes);
	var id_persona:TRangoPersonas;
	begin
		for id_persona:=1 to MaxPersonas do
			if id_persona in c then {in es el operador de pertenencia de conjuntos}
				MostrarPersona(org[id_persona]);
		Writeln('');
	end;
 	
 	{accion que gestiona las asiganciones de personas a comisiones}
 	procedure GestionarAsignaciones ;
	{variables para control de asignaciones}
	var op:char; id_persona:TRangoPersonas; comision:1..3;
 	begin
		Repeat
			Writeln('Asignar Persona a Comision');
			Writeln('Ingresar id Persona (entre 1 y ',MaxPersonas,')'); 
			Readln(id_persona);
			Writeln('Ingresar la comision (entre 1,2,3)'); 		
			Readln(comision);
			case comision of
				1:AsignarPersonaComision(id_persona,C1);
				2:AsignarPersonaComision(id_persona,C2);
				3:AsignarPersonaComision(id_persona,C3);
			end;
			Writeln('Desea seguir asignando s/n'); 		
			Readln(op);
		until op = 'n';
	end;

{Comienzo del programa principal}
begin
	Writeln('Ingrese los integrantes de la organización');
	CargarOrganizacion(OrganizacionIntegrantes); 
	GestionarAsignaciones;
	{listado solicitados}
	{- Listar los integrantes de cada comisión.}
	Writeln('Integrantes de C1');
	MostrarIntegrantesComision ( C1,OrganizacionIntegrantes);
	Writeln('Integrantes de C2');
	MostrarIntegrantesComision ( C2,OrganizacionIntegrantes);
	Writeln('Integrantes de C3');
	MostrarIntegrantesComision ( C3,OrganizacionIntegrantes);

	{- Listar las personas que pertenezcan a las 3.}
	Writeln('Integrantes de las tres comisiones');
	MostrarIntegrantesComision ( C1*C2*C3,OrganizacionIntegrantes); {* Interseccion}
    
	{- Listar las personas que estén al menos en una comisión.}
	Writeln('Integrantes de al menos una comision');
	MostrarIntegrantesComision ( C1+C2+C3,OrganizacionIntegrantes); {+ Union}	
    
	{- Listar las personas que pertenecen a 2 comisiones.}
	Writeln('Integrantes de al menos dos comisiones');	
	MostrarIntegrantesComision ( (C1*C2)+(C2*C3)+(C3*C1),OrganizacionIntegrantes); 
end.


