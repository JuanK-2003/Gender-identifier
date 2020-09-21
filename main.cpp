//Create by Juan Carlos Neil Palacios Escobar.
#include <iostream>
#include <conio.h>
#include <cmath>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "spanish");
	cout<<"\t\t\t **** APP  PARA  DETERMINAR  SU  SEXO ****\n\n";
	cout<<"\t\tLea detenidamente las siguientes instrucciones.\n\n";
	char preguntas[13][40] =
	{
		{"\n\t\tTiene barba?"},
		{"\n\t\tUsa vestido?"},
		{"\n\t\tUsted se maquilla?"},
		{"\n\t\tUsa tacones?"},
		{"\n\t\tTe gusta el fútbol?"},
		{"\n\t\tSe pinta las uñas?"},
		{"\n\t\tLe gustan las películas románticas?"},
		{"\n\t\tSe pinta el cabello?"},
		{"\n\t\tLe gustan los videojuegos?"},
		{"\n\t\tTe gustan los corazones?"},
		{"\n\t\tTe gustan las películas de acción?"},
		{"\n\t\tTiene bigote?"},
		{"\n\t\tUsa blusa?"}
	};
	// hombre - mujer
	int punteos[13][2] = {
		{90, 10},
		{20, 80},
		{30, 70},
		{30, 70},
		{60, 40},
		{20, 80},
		{10, 90},
		{40, 60},
		{70, 30},
		{30, 70},
		{65, 35},
		{90, 10},
		{10, 90},
	};
	int mini = 5, i = 0;
	float user[2]={0.0, 0.0};
	string opcion;
	cout << "\t\tResponda las preguntas!"<<endl;
	cout << "\t\tResponda s para si y n para no"<<endl;

	do {
		i=i+1;
		if (i == 14) i = 1;
		cout << preguntas[i-1] <<endl;
		cin >> opcion;
		if (opcion == "s" or opcion == "S" ) {
			user[0] = user[0] + punteos[i-1][0];
			user[1] = user[1] + punteos[i-1][1];
		}
		else {
			if (opcion == "n" or opcion == "N" ) {
				user[0] = user[0] + punteos[i-1][1];
				user[1] = user[1] + punteos[i-1][0];
			}
			else {
				cout << "Opción incorrecta!"<<endl;
				cout << "Responda s para si y n para no"<<endl<<endl;
				i--;
			}
		}
	} while(mini > i or abs(user[0]-user[1]) < 175);

	if (user[0] > user[1]) {
		cout <<endl<<"\t\t\t\t\t\tUsted es Hombre!!!";
	}
	else {
		cout <<endl<<"\t\t\t\t\t\tUsted es Mujer!!!";
	}
	getch();
	return 0;
}
