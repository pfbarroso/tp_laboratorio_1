#include <stdio.h>
#include "gerflix_users.h"

void userABM(int opcionABM, estUsuario users[], int cantidad)
{
	switch(opcionABM)
		{
		case 1://ALTA
			altaUsuario(users);
			break;
		case 2://LISTAR
			listarUsers(users, cantidad);
			break;
		case 3://MODIFICAR
			modUsuario(users);
			break;
		case 4://BAJA
			bajaUsuario(users);
			break;
		case 5://ORDENAR
			break;
		case 6://HARDCODE
			break;
		case 7://CLEAR SCREEN
			system("clear");
			break;
		case 9:
			break;
		default:
			printf("OPCION NO RECONOCIDA. REINGRESE\n");
			break;
		}
}

void altaUsuario(estUsuario viewers[])
{
	char pwd[30];
	printf("Ingrese numero de usuario: ");
	scanf("%d",&viewers[0].idUser);
	printf("Ingrese direccion de email: ");
	getchar();
	fgets(viewers[0].email, EMAIL, stdin);
	eliminarNuevaLinea(viewers[0].email);
	strcpy(viewers[0].password,getpass("Ingrese su password: \n")) ;

	printf("Ingrese numero ID de Show: ");
	scanf("%d",&viewers[0].idSerie);

    viewers[0].estado = 1;
	printf("\t Carga...OK\n");

}

void listarUsers(estUsuario viewers[], int qty)
{
	int i;
	for(i=0; i<qty; i++)
		{
			if(viewers[i].estado != 0)
				{
					printf(
                        "\n- Nro. de Usuario: %d\n"
					    "- eMail: %s\n"
					    //"- Password: %s\n"
					   // "- ID de Serie: %d\n"
					   ,viewers[i].idUser, viewers[i].email//, viewers[i].password, viewers[i].idSerie
					);
				}

		}
}

void modUsuario(estUsuario viewers[])
{

}

void bajaUsuario(estUsuario viewers[])
{

}
