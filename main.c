#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int rta2, rta3, rtaE;
float rta, hambre1=100, hambre2=100, hambre3=100, hambre4=100, hambre5=100, salud1=100, salud2=100, salud3=100, salud4=100, salud5=100;
main(){
srand (getpid());
printf("\nc;:::::::::::::::::::::::::::::::::::::::::::::::::::;c");
printf("\n.'lxxddddddddxdddddddddxxdddddddddddddddddddddddddddo'.");
printf("\n.cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMMWWWWWWWWWWWWWWWWMMWWWWMMMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMW0oc::::::::::cxKWW0dxKNWMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMWKkdddo;..:oddxOXWNx,:kXWMMMMMMMMMMMMMMMMMMMMMMMXc.");
printf("\n.cXMMMMMMMNd,:kNWMMMMMNx,;kXNWWWWMMMMMMMWWWWWWWWMMMMXc.");
printf("\n.cXMMMMMMMNd,:kNWMMMMMNx,,ool:cokKWMMMWKkocccldONWMMXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx'.;lool:;oKWWXOoccoddolldONMXc.");
printf("\n.cXMMMMMMWXd,:kXWMMMMMNx,,o0NWNd,:ONNO::d0NWWX0o,c0WXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMNx,;kXXd'.,:cccc:'.;kNXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMNx,;kXXx,.;loooooookKWXc.");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,;kXWMNx,;kXNOc;lkXWWNXOdxXWXc.");
printf("\n.cXMMMMMMMNd,:ONWMMMMMNx,:kXWMNx;:kXWN0d:;cccc::lkXWXc.");
printf("\n.cXMMMMMMMWKkOXWMMMMMMWKkOXWMMWKkOXWMMWXOxdooodkXWMMXc.");
printf("\n.cMMWNKOkkkkOKNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.......................");
printf("\n.cMMWWNNNNNNNWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cWNKkl;;;;:lOXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cXkc:codddoc:lkXWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cdlco0NMMWN0oclxKWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.c::kXWMMMMMWKx:;dKKOkkxdx0K0xoooox0NWMMWKkdoooodx0NWWNOdoooodkKWWNKOkOkdoodkKN");
printf("\n.c;:ONWMMMMMWNk:'lko,,:cccodl:;::;:lxKNXOo:,;;;,''l0X0xc;,,;;,:oOK0o,,:cc:;;:oO");
printf("\n.c;cONWMMMMMWNO:,lxl';xKX0o;;codxdc,,oOxccdOXNX0o;lO0o:lkOKXKOo:cxOl',d0XNXOo:o");
printf("\n.c;:kNWMMMMMWXk:,lko;l0WNO:..',,,,,',lxo;cONMMWKd:ckkc:xXWWMWXkc:dOo;l0WMWNKo:o");
printf("\n.clcdOXWMMMWXOdccxOd:l0WNO:':x0KKK00O00d:cONWWWKd:ckkc:dXWWMWXkc:dOo:lKWMWN0o:o");
printf("\n.cOo;:xKXXX0x::oOK0d:l0WWKd:cxOKXKOolxKklcokKXKOo;lO0o:lxk0K0koclkOd:l0WMWN0o;l");
printf("\n.cNKkl:,,,,,:okKNNKdcoKWMWXOo:,,,,;lxKNX0d:,,;,'.'c0NKkc,',,;;cx0XKdcoKWMWNKd:o");
printf("\n.cMWWXOxxxxxOXWMMMWX0KNMMMMWKOxxxxkKNWMWNKkxddlc;;lKWWN0kxxxxk0NWMWX0KNMMMWNK0K");
printf("\n.cMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKdlcccc::coONMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMWKxolllllokKNWMMMMMMMMMMMMMMMMMMMMMMMMMMM");
printf("\n.cXc.ll:cccccccccccccccccccccccccccccccccccccccccccccccccccc:::::::::::::::::;");
printf("\n.cXMMMMWWWWWMWWWMWWWMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.l");
printf("\n.cXMW0dlllllllllllokKWMMMMMMMMMMMMMMMMMMMMMMMMWK;;KNWKkkKNXc.l");
printf("\n.cXMW0xollc,..;cllokKWMMMMMMMMMMMMMMMMMMMMMMMMWX;;KNNk;;xXXc.l");
printf("\n.cXMMMWWWWXd,:kXWMWMMMMMMMMMMMMMMMMMWMMMMMMMMMMMWWMMWk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kNWMMMMMWKxxkxdkXWN0dolllllx0NWMWKkkKWNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,':cokK0dc::cllc:;;dKWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,,o0NMWKxx0XWWWN0l';OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMMMWXOxooolc,.;OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMWKxolclllc:'.;ONNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNd,:kXWMNx,;dKNWWN0l.;OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMNd,:kXWMMMMMNx,:kXWMW0o::cloool,.;OWNk;;xXNk;;xXXc.l");
printf("\n.cXMMMMMMMW0xkKWMMMMMMW0xkKNMMMWXOoccccoddokXWWKxxKNWKxxKNXc.l");
printf("\n.cXMMMMMMMMMWWMMMMMMMMMMWWMMMMMMMWWWWWWWWWWWMMMMWWMMMMWWMMXc.l");
printf("\n.cXMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMXc.l");
printf("\n.'loooooooooooooooooooooooooooooooooooooooooooooooooooooool'.l");
printf("\nl:ccccccccccccccccccccccccccccccccccccccccccccccccccccccccc:lO");
getch();

printf("\n Pulse una tecla para continuar ");
getch();

printf("\n Esta es una adaptacion independiente del juego THE OREGON TRAIL a C, ");
printf("\n probablemente no sea 100*/. fiel al material original.....");

printf("\n Pulse una tecla para continuar ");
getch();


	char nombre1 [20];
	char nombre2 [20];
	char nombre3 [20];
	char nombre4 [20];
	char nombre5 [20];
	do {
	printf("\n Ingrese el nombre de su primer personaje: ");
	scanf("%s", &nombre1);
	printf("\n Ingrese el nombre de su segundo personaje: ");
	scanf("%s", &nombre2);
	printf("\n Ingrese el nombre de su tercer personaje: ");
	scanf("%s", &nombre3);
	printf("\n Ingrese el nombre de su cuarto personaje: ");
	scanf("%s", &nombre4);
	printf("\n Ingrese el nombre de su quinto personaje: ");
	scanf("%s", &nombre5);

	printf("\n");

	printf("Nombre 1: %s", nombre1);
	printf("\n");
	printf("Nombre 2: %s", nombre2);
	printf("\n");
	printf("Nombre 3: %s", nombre3);
	printf("\n");
	printf("Nombre 4: %s", nombre4);
	printf("\n");
	printf("Nombre 5: %s", nombre5);

	printf("\n ¿Estas seguro de que quieres llamarlos asi? 1=Si/0=No: ");
	scanf("%f", &rta);
	} while (rta == 0);

	printf("\n DIA 0");
	
	do{
	
	printf("\n ¿Que quieres hacer?");
	printf("\n 1. Comenzar el viaje - 2. Revisar estado de los tripulantes");
	printf("\n 3. Revisar suministros - 4. Observar el paÃ­saje - 5. Revisar estado de la carreta");
	scanf("%d", &rta2);
	
	printf("\n Opcion elegida: %d", rta2);
	
	if (rta2 == 1){
		printf("\n ¿Estas Seguro? 1=si/0=no: ");
		scanf("%d", &rta3);
	} 
	
		
	if (rta2 == 2){
		printf("\n Estado de la tripulacion: ");
		do {
			printf("\n Opciones:");
			printf("\n 1=%s - 2= %s", nombre1, nombre2);
			printf("\n 3=%s - 4=%s", nombre3, nombre4);
			printf("\n 5=%s 0=Salir", nombre5);
			
			printf("\n ¿A quien desea revisar?: ");
			scanf("%d", &rtaE);
		} while(rtaE != 0);
	} 
	
	if (rta2 == 3){
		printf("\n Hola 2");
	} 
	
	if (rta2 == 4){
		printf("\n Hola 3");
	} 
	
	if (rta2 == 5){
		printf("\n Hola 4");
	} 
	
	}while (rta3 != 1);

	
	
	
	getch();
}
