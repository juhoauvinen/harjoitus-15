/*/***********************************************
*Harjoitus 15
*Juho Auvinen
*Kuvaus: 
*
*TäSSä TEHTÄVÄSSÄ ON KÄYTETTÄVÄ C - kielen primitiivisiä merkkitaulukoita!
*
*Tee ohjelma, joka kysyy käyttäjältä 17 merkkiä
*pitkän merkkijonon (ei välilyäntejä).
*a) Ohjelma tulostaa merkkijonon käänteisessä järjestyksessä näytälle
*(tulostus tyyppiä "cout << mjono1[4];" jne)
*b) Ohjelma kääntää annetun merkkijonon toiseen
*merkkijonoon ja tulostaa sen näytälle
*(tulostus tyyppiä "cout << mjono2;")
*c) merkkijono voi olla kuinka pitkä
*tahansa (max 100 kirjainta).
*Syätetyn merkkijonon pituutta ei saa
*laskea millään kirjastofunktiolla
*(esim. lenght tms.) Ohjelma
*tutkii onko annettu merkkijono
*palindromi ja ilmoittaa sen käyttäjälle.
*Välilyännit jonossa ovat sallittuja.
*
*Käyttäjä syättää jonon: ABC_Kissa_kavelee
*ohjelma tulostaa: eelevak_assiK_CBA
*
*Versio: 1.0
*PVM: 5.11.-14
************************************************

//a) kohta
#include <iostream>
using namespace std;
int main()
{
	
	int ind;
	char jono[17 + 1];
	cout << "Anna 17 merkkia pitka merkkijono: \n";
	cin >> jono;
	for (ind = 16; ind >= 0; ind--)
	{
		cout << jono[ind];
	}
	cout << endl;
}

//b) kohta
#include <iostream>
using namespace std;
void main()
{
	int ind;
	int ind2=0;
	char jono[17 + 1];
	char jono2[17 + 1];
	cout << "Anna 17 merkkia pitka merkkijono: \n";
	cin >> jono;
	for (ind = 16; ind >= 0; ind--)
	{
		jono2[ind2] = jono[ind];
		ind2++;
		jono2[17] = '\0';
		
	}
	cout << jono2;
	cout << endl;
}
*/
//c) kohta
#include <iostream>
using namespace std;
#include <cstring>
void main()
{
	int y;
	int x;
	int ind=0;
	
	char jono[100 + 1];
	char jono2[100 + 1];
	char jono3[100 + 1];
	cout << "Anna max 100 merkkia pitka merkkijono: \n";
	cin.getline(jono,100);
	
	while (jono[ind] != '\0')
			{
				ind++;
			}

	for (x = 0, y = 0; x < ind; x++)
	{
		if (jono[x] != ' ')
		{
			jono3[y] = jono[x];
			y++;
		}

	}

	jono3[y] = '\0';

	cout << "tiivistetty:" << jono3 << endl;
	ind = 0;
	while (jono3[ind] != '\0')
	{
		ind++;
	}

	int ind2=0;

	for (x = y-1; x >= 0; x--)
	{
		jono2[ind2] = jono3[x];
		ind2++;
	}
	
	
	jono2[ind] = '\0';


	if (!strcmp(jono3, jono2))
		cout << "PALINDROMI!" << endl;
	else
		cout << "ei palindromi" << endl;

}