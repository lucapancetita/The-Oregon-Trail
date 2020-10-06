#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int i,rta2, rta3, rta4, rtaE, cantcomida, municion, materiales, est1, est2, est3, est4, est5, estC, suerte, robo, start, contdia=0;
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
	contdia=0;
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

	printf("\n Estas seguro de que quieres llamarlos asi? 1=Si/0=No: ");
	scanf("%f", &rta);
	} while (rta == 0);

	printf("\n DIA 0");

	do{
	printf("\n");
	printf("\n Que quieres hacer?");
	printf("\n 1. Comenzar el viaje - 2. Revisar estado de los tripulantes");
	printf("\n 3. Revisar suministros - 4. Observar el paisaje");
	printf("\n 5. Revisar estado de la carreta");
	printf("\n Escriba aqui: ");
	scanf("%d", &rta2);

	printf("\n");
	printf("\n Opcion elegida: %d", rta2);
	printf("\n");

	if (rta2 == 1){
		printf("\n Estas Seguro? 1=si/0=no: ");
		scanf("%d", &rta3);
		printf("\n");
	}


	if (rta2 == 2){
		printf("\n Estado de la tripulacion: ");
		do {
			printf("\n");
			printf("\n Opciones:");
			printf("\n 1=%s - 2= %s", nombre1, nombre2);
			printf("\n 3=%s - 4=%s", nombre3, nombre4);
			printf("\n 5=%s 0=Salir", nombre5);
			printf("\n");
			printf("\n A quien desea revisar?: ");
			scanf("%d", &rtaE);
			printf("\n");
			if(rtaE == 1){
			printf("\n %s: ", nombre1);
			printf("\n Salud: %f", salud1);
			printf("\n Hambre: %f", hambre1);
			getch();
			}
			if(rtaE == 2){
			printf("\n %s: ", nombre2);
			printf("\n Salud: %f", salud2);
			printf("\n Hambre: %f", hambre2);
			getch();
			}
			if(rtaE == 3){
			printf("\n %s: ", nombre3);
			printf("\n Salud: %f", salud3);
			printf("\n Hambre: %f", hambre3);
			getch();
			}
			if(rtaE == 4){
			printf("\n %s: ", nombre4);
			printf("\n Salud: %f", salud4);
			printf("\n Hambre: %f", hambre4);
			getch();
			}
			if(rtaE == 5){
			printf("\n %s: ", nombre5);
			printf("\n Salud: %f", salud5);
			printf("\n Hambre: %f", hambre5);
			getch();
			}
		printf("\n");
		} while(rtaE != 0);
	}

	if (rta2 == 3){
		printf("\n Suministros: ");
		cantcomida=15;
		municion=4;
		materiales=25;
		printf("\n Comida: %d", cantcomida);
		printf("\n Municion: %d", municion);
		printf("\n Materiales: %d", materiales);
		getch();
		printf("\n");
	}

	if (rta2 == 4){
		printf("\n Paisaje: ");
		printf("\n Falta implementar :)");
		getch();
		printf("\n");
	}

	if (rta2 == 5){
		printf("\n Carreta: ");
		estC=100;
		printf("\n100-75 = Como Nuevo");
		printf("\n75-50 = Aceptable");
		printf("\n50-25 = Mal");
		printf("\n25-1 = PELIGROSO");

		printf("\nEl estado de la carreta es: %d", estC);
		getch();
		printf("\n");
	}

	}while (rta3 != 1);

	contdia++;


for(i=0;i<10;i++){

	if (salud1 == -5 && salud2 == -5 && salud3 == -5 && salud4 == -5 && salud5 == -5){
		goto F;
	}

	printf("\n DIA %d", contdia);
	estC = estC-20;

	if(salud1 > 0 && salud1 < 101){
	hambre1 = hambre1 - (100/3);}
	if(salud2 > 0 && salud2 < 101){
	hambre2 = hambre2 - (100/3);}
	if(salud3 > 0 && salud3 < 101){
	hambre3 = hambre3 - (100/3);}
	if(salud4 > 0 && salud4 < 101){
	hambre4 = hambre4 - (100/3);}
	if(salud5 > 0 && salud5 < 101){
	hambre5 = hambre5 - (100/3);}

	if(salud1 > 0 && salud1 < 101){

	if (hambre1 < 50 && salud1 > 0){
		salud1 = salud1 - 35;
		if(salud1 < 0){
			salud1==0;
		}
	}
	if (hambre1 > 80 && salud1 < 100){
		salud1 = salud1 + 15;
	}
	}
	if (salud1>100){
		salud1=100;
	}

	if(salud2 > 0 && salud2 < 101){

		if (hambre2 < 50 && salud2 > 0){
		salud2 = salud2 - 35;
	}
	if (hambre2 > 80 && salud2 < 100){
		salud2 = salud2 + 15;
		if (salud2>100){
			salud2=100;
		}
	}
	}
	if(salud2 < 0){
		salud2==0;
	}

	if(salud3 > 0 && salud3 < 101){

		if (hambre3 < 50 && salud3 > 0){
		salud3 = salud3 - 35;
	}
	if (hambre3 > 80 && salud3 < 100){
		salud3 = salud3 + 15;
		if (salud3>100){
			salud3=100;
		}
	}
	}
	if(salud3 < 0){
		salud3==0;
	}

	if(salud4 > 0 && salud4 < 101){

		if (hambre4 < 50 && salud4 > 0){
		salud4 = salud4 - 35;
	}
	if (hambre4 > 80 && salud4 < 100){
		salud4 = salud4 + 15;
		if (salud4>100){
			salud4=100;
		}
	}
	}
	if(salud4 < 0){
		salud4==0;
	}

	if(salud5 > 0 && salud5 < 101){

		if (hambre5 < 50 && salud5 > 0){
		salud5 = salud5 - 35;
	}
	if (hambre5 > 80 && salud5 < 100){
		salud5 = salud5 + 15;
		if (salud5>100){
			salud5=100;
		}
	}
	}
	if(salud5 < 0){
		salud5==0;
	}

	do{

	rta3=0;

	printf("\n");
	printf("\n Que quieres hacer?");
	printf("\n 1. Continuar el viaje - 2. Revisar estado de los tripulantes");
	printf("\n 3. Revisar suministros - 4. Observar el paisaje");
	printf("\n 5. Revisar estado de la carreta - 6. Cazar");
	printf("\n Escriba aqui: ");
	scanf("%d", &rta2);

	printf("\n");
	printf("\n Opcion elegida: %d", rta2);
	printf("\n");

	if (rta2 == 1){
		printf("\n Estas Seguro? 1=si/0=no: ");
		scanf("%d", &rta3);
		printf("\n");
	}


	if (rta2 == 2){
		printf("\n Estado de la tripulacion: ");
		do {
			printf("\n");
			printf("\n Opciones:");
			printf("\n 1=%s - 2= %s", nombre1, nombre2);
			printf("\n 3=%s - 4=%s", nombre3, nombre4);
			printf("\n 5=%s 0=Salir", nombre5);
			printf("\n");
			printf("\n A quien desea revisar?: ");
			scanf("%d", &rtaE);
			printf("\n");
			if(rtaE == 1){
			printf("\n %s: ", nombre1);
			if (salud1 == -5){
				printf("\nEstado: MUERTO");
			}
			if (salud1 > 0 && salud1 < 101) {
			printf("\n Salud: %f", salud1);
			printf("\n Hambre: %f", hambre1);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1){
				hambre1 = hambre1 + 25;
				cantcomida = cantcomida - 3;
			}else{
				getch();
			}
		}
			getch();
			}
			if(rtaE == 2){
			printf("\n %s: ", nombre2);
			printf("\n %f", hambre2);
			if (salud2 == -5){
				printf("\nEstado: MUERTO");
			}
			if (salud2 > 0 && salud2 < 101) {
			printf("\n Salud: %f", salud2);
			printf("\n Hambre: %f", hambre2);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1){
				hambre2 = hambre2 + 25;
				cantcomida = cantcomida - 3;
			}else{
				getch();
			}
		}
			getch();
			}
			if(rtaE == 3){
			printf("\n %s: ", nombre3);
			if (salud3 == -5){
				printf("\nEstado: MUERTO");
			}
			if (salud3 > 0 && salud3 < 101) {
			printf("\n Salud: %f", salud3);
			printf("\n Hambre: %f", hambre3);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1){
				hambre3 = hambre3 + 25;
				cantcomida = cantcomida - 3;
			}else{
				getch();
			}
		}
			getch();
			}
			if(rtaE == 4){
			printf("\n %s: ", nombre4);
			if (salud4 == -5){
				printf("\nEstado: MUERTO");
			}
			if (salud4 > 0 && salud4 < 101) {
			printf("\n Salud: %f", salud4);
			printf("\n Hambre: %f", hambre4);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1){
				hambre4 = hambre4 + 25;
				cantcomida = cantcomida - 3;
			}else{
				getch();
			}
		}
			getch();
			}
			if(rtaE == 5){
			printf("\n %s: ", nombre5);
			if (salud5 == -5){
				printf("\nEstado: MUERTO");
			}
			if (salud5 > 0 && salud5 < 101) {

			printf("\n Salud: %f", salud5);
			printf("\n Hambre: %f", hambre5);
			printf("\n");
			printf("Desea alimentar a este tripulante? 1=si/0=no: ");
			scanf("%d", &rta4);
			if(rta4 == 1){
				hambre5 = hambre5 + 25;
				cantcomida = cantcomida - 3;
			}else{
				getch();
			}
			}
			getch();
			}
		printf("\n");
		} while(rtaE != 0);
	}

	if (rta2 == 3){
		printf("\n Suministros: ");
		printf("\n Comida: %d", cantcomida);
		printf("\n Municion: %d", municion);
		printf("\n Materiales: %d", materiales);
		getch();
		printf("\n");
	}

	if (rta2 == 4){
		printf("\n Paisaje: ");
		printf("\n Falta implementar :)");
		getch();
		printf("\n");
	}

	if (rta2 == 5){
		printf("\n Carreta: ");
		printf("\n100-75 = Como Nuevo");
		printf("\n75-50 = Aceptable");
		printf("\n50-25 = Mal");
		printf("\n25-1 = PELIGROSO");

		printf("\nEl estado de la carreta es: %d", estC);
		getch();
		printf("\n");
	}

	}while (rta3 != 1);






	contdia++;
	}



	F:
		printf("\n *_GAME OVER_*");
		printf("\n No pudiste superar el dia %d", i);
		getch();
}
