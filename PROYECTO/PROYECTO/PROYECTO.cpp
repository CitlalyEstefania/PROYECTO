#include <sstream> 
#include <iostream>
#include <bitset>

using namespace std;
#define DEFAULT0 "\x1b[0m" //TEXTO
#define DEFAULT1 "\x1b[39m" // COLOR
#define DEFAULTF "\x1b[49m" // FONDO

// Colores  
//Texto 
//-Rojo 
#define RED "\x1b[31m" 
//- Verde 
#define GREEN "\x1b[32m" 
//- Negro
#define BLACK "\x1b[30m" 
//- Azul 
#define BLUE "\x1b[34m" 
//- Amarillo 
#define YELLOW "\x1b[33m" 
//- Magenta 
#define MAGENTA "\x1b[35m" 
//- Cyan
#define CYAN "\x1b[36m" 
//- Blanco 
#define WHITE "\x1b[37m" 
//- Gris Claro
#define LIGHT_GRAY "\x1b[90m" 
//- Rojo Claro 
#define LIGHT_RED "\x1b[91m" 
//- Verde Claro 
#define LIGHT_GREEN "\x1b[92m" 
//- Amarillo Claro
#define LIGHT_YELLOW "\x1b[93m" 
//- Azul Claro 
#define LIGHT_BLUE "\x1b[94m" 
//- Magenta Claro 
#define LIGHT_MAGENTA "\x1b[95m" 
//- Cyan Claro 
#define LIGHT_CYAN "\x1b[96m"
//- Blanco Claro 
#define LIGHT_WHITE "\x1b[97m" 

//== = Modificadores == = 
//== = Texto == = 
//-Dim(No identificado aun) 
#define DIM "\x1b[2m" 
//- Reverse(Si el fondo es negro, el texto sera blanco y al contrario) 
#define REVERSE "\x1b[7m"
//- Hidden(No identificado aun) 
#define HIDDEN "\x1b[8b" 
//- Bold(ON / OFF) (No identificado aun) 
#define BOLD_ON "\x1b[1m" 
#define BOLD_OFF "\x1b[21m" 
//- Underline(ON / OFF) (Subraya el texto) 
#define UNDERLINE_ON "\x1b[4m" 
#define UNDERLINE_OFF "\x1b[24m" 
//- Blink(ON / OFF) (No identificado aun) 
#define BLINK_ON "\x1b[5m" 
#define BLINK_OFF "\x1b[25m" 

//== = Fondos == = 
//== = Texto == = 
//-Negro 
#define BLACKF "\x1b[40m" 
//- Rojo 
#define REDF "\x1b[41m" 
//- Verde 
#define GREENF "\x1b[42m" 
//- Amarillo 
#define YELLOWF "\x1b[43m" 
//- Azul 
#define BLUEF "\x1b[44m" 
//- Magenta
#define MAGENTAF "\x1b[45m" 
//- Cyan
#define CYANF "\x1b[46m" 
//- Blanco
#define WHITEF "\x1b[47m"
//- Gris Claro
#define LIGHT_GRAYF "\x1b[100m" 
//- Rojo Claro
#define LIGHT_REDF "\x1b[101m" 
//- Verde Claro
#define LIGHT_GREENF "\x1b[102m" 
//- Amarillo Claro
#define LIGHT_YELLOWF "\x1b[103m" 
//- Azul Claro 
#define LIGHT_BLUEF "\x1b[104m" 
//- Magenta Claro
#define LIGHT_MAGENTAF "\x1b[105m" 
//- Cyan Claro 
#define LIGHT_CYANF "\x1b[106m" 
//- Blanco Claro
#define LIGHT_WHITEF "\x1b[107m" 

int main()
{
	int exp, digito;
	double binario, decimal;
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << BLUEF << CYAN << "---------------------------------------------" DEFAULT0 << endl;
		cout << BLUEF << LIGHT_CYAN << "          C o n v e r s i o n e s            " << endl;
		cout << BLUEF << CYAN << "---------------------------------------------" DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " DEFAULT0 << endl;
		cout << BLUEF << LIGHT_YELLOW << "       \t1 .-" DEFAULT0 << BLUEF << LIGHT_WHITE << "Convertir Binario a Decimal      " DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " << endl;
		cout << BLUEF << LIGHT_YELLOW << "       \t2 .-" DEFAULT0 << BLUEF << LIGHT_WHITE << "Convertir Decimal a Binario      " DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " << endl;
		cout << BLUEF << LIGHT_YELLOW << "       \t3 .-" DEFAULT0 << BLUEF << LIGHT_WHITE << "Convertir Binario a Octal        " << DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " << endl;
		cout << BLUEF << LIGHT_YELLOW << "       \t4 .-" DEFAULT0 << BLUEF << LIGHT_WHITE << "Convertir Octal a Binario        " << DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " << endl;
		cout << BLUEF << LIGHT_YELLOW << "       \t5 .-" DEFAULT0 << BLUEF << LIGHT_WHITE << "Convertir Binario a Hexadecimal  " << DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " << endl;
		cout << BLUEF << LIGHT_YELLOW << "       \t6 .-" DEFAULT0 << BLUEF << LIGHT_WHITE << "Convertir Hexadecimal a Binario  " << DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " << endl;
		cout << BLUEF << LIGHT_YELLOW << "       \t7 .-" DEFAULT0 << BLUEF << LIGHT_WHITE << "Convertir texto a binario        " << DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " << endl;
		cout << BLUEF << LIGHT_CYAN << "        Elige una opcion: " DEFAULT0 << BLUEF << LIGHT_WHITE << "                   " << DEFAULT0 << endl;
		cout << BLUEF << CYAN << "                                             " DEFAULT0 << endl;
		cin >> tecla;
		switch (tecla)
		{
		case '1':
			system("cls");
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_WHITEF << "Has elegido Convertir Binario a Decimal. \n" << DEFAULT0;
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			cout << CYANF << BLACK << "Introduce numero binario " << DEFAULT0;
			cin >> binario;
			exp = 0;
			decimal = 0;
			while (((int)(binario / 10)) != 0)
			{
				digito = (int)binario % 10;
				decimal = decimal + digito * pow(2.0, exp);
				exp++;
				binario = (int)(binario / 10);
			}
			decimal = decimal + binario * pow(2.0, exp);
			cout << endl << "Conversion a Decimal: " << BLUEF << BLACK << decimal << DEFAULT0 << endl;
			system("pause");

			break;
		case '2':
			system("cls");
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_WHITE << "  Has elegido Convertir Decimal a Binario. \n" << DEFAULT0;
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			using namespace std;

			int main(); {
				int numero, dividendo, resto, divisor = 2;
				string binario = "", ordenado = "";
				stringstream stream; // De int a string
				cout << CYANF << BLACK << "Ingrese el numero decimal a convertir a sistema binario" << DEFAULT0 << endl;
				cin >> numero;
				dividendo = numero;
				while (dividendo >= divisor) {
					resto = dividendo % 2;
					stream << resto;
					dividendo = dividendo / divisor;
				}
				stream << dividendo;
				binario = stream.str();
				for (unsigned int i = 0; i < binario.size(); i++)
					ordenado = binario[i] + ordenado;
				cout << "En sistema binario " << numero << " se escribe " << LIGHT_YELLOWF << BLACK << ordenado << DEFAULT0 << endl;
				return 0;
			}
			break;
		case '3':
			system("cls");
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_WHITEF << "Has elegido Convertir Binario a Octal. \n" << DEFAULT0;
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			using namespace std;

			int main();
			{
				int binnum1, binaryNumber, rem, decnum = 0, quot, i = 1, j;
				int octnum[100];

				cout << CYANF << BLACK << " Introduzca el numero binario: " << DEFAULT0;
				cin >> binaryNumber;
				binnum1 = binaryNumber;
				while (binaryNumber > 0)
				{
					rem = binaryNumber % 10;
					decnum = decnum + rem * i;
					i = i * 2;
					binaryNumber = binaryNumber / 10;
				}
				i = 1;
				quot = decnum;

				while (quot > 0)
				{
					octnum[i++] = quot % 8;
					quot = quot / 8;
				}
				cout << " la equivalencia de binario a octal de " << binnum1 << " es : ";
				for (j = i - 1; j > 0; j--)
				{
					cout << LIGHT_YELLOWF << BLACK << octnum[j] << DEFAULT0;
				}
				cout << "\n";
			} return 0;


			break;
		case '4':
			system("cls");
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_WHITEF << "Has elegido Convertir Octal a Binario. \n" << DEFAULT0;
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			using namespace std;
			int main();
			{
				void();
				long int i = 0;
				char octnum[1000];
				cout << CYANF << BLACK << "Introduzca el numero en octal =" << DEFAULT0;
				cin >> octnum;
				cout << "Su valor en Binario es =";
				while (octnum[i])
				{
					switch (octnum[i])
					{
					case '0': cout << "000";
						break;
					case '1': cout << "001";
						break;
					case '2': cout << "010";
						break;
					case '3': cout << "011";
						break;
					case '4': cout << "100";
						break;
					case '5': cout << "101";
						break;
					case '6': cout << "110";
						break;
					case '7': cout << "111";
						break;
					default: cout << "\nInvalid Octal Digit " << octnum[i];
						break;
					}
					i++;
				}
				void();
				return 0;
			}



			break;
		case '5':
			system("cls");
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;

			cout << BLUEF << LIGHT_WHITEF << "Has elegido Convertir Binario a Hexadecimal. \n" << DEFAULT0;

			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
#define MAX 1000
			using namespace std;

			int main();
			{
				char binnum[MAX], hexa[MAX];
				int temp;
				long int i = 0, j = 0;
				cout << CYANF << BLACK << "Introduzca el numero binario : " << DEFAULT0;
				cin >> binnum;
				while (binnum[i])
				{
					binnum[i] = binnum[i] - 48;
					++i;
				}
				--i;
				while (i - 2 >= 0)
				{
					temp = binnum[i - 3] * 8 + binnum[i - 2] * 4 + binnum[i - 1] * 2 + binnum[i];
					if (temp > 9)
						hexa[j++] = temp + 55;
					else
						hexa[j++] = temp + 48;
					i = i - 4;
				}
				if (i == 1)
					hexa[j] = binnum[i - 1] * 2 + binnum[i] + 48;
				else if (i == 0)
					hexa[j] = binnum[i] + 48;
				else
					--j;
				cout << "En Hexadecimal es : ";
				while (j >= 0)
				{
					cout << BLUEF << BLACK << hexa[j--] << DEFAULT0;
				}
				return 0;
			}
			break;

		case '6':
			system("cls");
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_WHITEF << "Has elegido Convertir Hexadecimal a Binario. \n" << DEFAULT0;
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			using namespace std;
			int main();
			{
				void();
				long int i = 0;
				char binnum[100], hexdec[100];
				cout << CYANF << BLACK << "Introduzca el valor en Hexadecimal :" << DEFAULT0;
				cin >> hexdec;
				cout << "Su equivalencia en Binario es : ";
				while (hexdec[i])
				{
					switch (hexdec[i])
					{
					case '0': cout << "0000";
						break;
					case '1': cout << "0001";
						break;
					case '2': cout << "0010";
						break;
					case '3': cout << "0011";
						break;
					case '4': cout << "0100";
						break;
					case '5': cout << "0101";
						break;
					case '6': cout << "0110";
						break;
					case '7': cout << "0111";
						break;
					case '8': cout << "1000";
						break;
					case '9': cout << "1001";
						break;
					case 'A': cout << "1010";
						break;
					case 'B': cout << "1011";
						break;
					case 'C': cout << "1100";
						break;
					case 'D': cout << "1101";
						break;
					case 'E': cout << "1110";
						break;
					case 'F': cout << "1111";
						break;
					case 'a': cout << "1010";
						break;
					case 'b': cout << "1011";
						break;
					case 'c': cout << "1100";
						break;
					case 'd': cout << "1101";
						break;
					case 'e': cout << "1110";
						break;
					case 'f': cout << "1111";
						break;
					default: cout << "\nInvalid hexadecimal digit " << hexdec[i];
					}
					i++;

				}
				return 0;
			}
			break;

		case '7':
			system("cls");
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			cout << BLUEF << LIGHT_WHITEF << "Has elegido Convertir texto a binario . \n" << DEFAULT0;
			cout << WHITE << "========================================================================================================================" DEFAULT0 << endl;
			using namespace std;

			int main();
			{
				char letter = ' ', playAgain = 'y';
				string word = " ";


				cout << CYANF << BLACK << "Introduzca una palabra, letra o caracter: " << DEFAULT0;

				cin >> word;

				cout << "La conversion a binario " << word << " es \n";

				for (unsigned int wordPosition = 0; wordPosition < word.size(); ++wordPosition) {

					letter = word[wordPosition];

					bitset <8> binary(letter);

					cout << BLUEF << BLACK << binary << DEFAULT0 << endl;
				}

				return 0;
			}
			break;


		case '9':
			bandera = true;
			// exit(1);
			break;
		default:
			system("cls");
			cout << "Opcion no valida. \a\n";

			break;

		}


	} while (bandera != true);
	return 0;

}