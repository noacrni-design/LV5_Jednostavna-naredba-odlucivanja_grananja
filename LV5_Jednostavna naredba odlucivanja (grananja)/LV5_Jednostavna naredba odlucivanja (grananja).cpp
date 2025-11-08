// LV5_Jednostavna naredba odlucivanja (grananja).cpp : This file contains the 'main' function. Program execution begins and ends there.
// Autor: Noa Crnoja 1.G

#include <iostream>
using namespace std;

//deklaracija funkcija
void temperatura();
void vrijeme();
void PitagorineTrojke();
void polozaj();
void kalkulator();
//void NogometniTurnir();

int main()
{
	kalkulator();
}

void temperatura()
{
	int temp;
	cout << "Unesi vrijednost temperature: ";
	cin >> temp;

	if (temp < 20)
		cout << "hladno je ili prohladno";
	else if (temp == 20 || temp < 25)
		cout << "ugodno je toplo";
	else
		cout << "toplo je ili jako toplo";

}

void vrijeme()
{
	int dan1, dan2, dan3;
	cout << "Unesi temperaturu prvog dana: ";
	cin >> dan1;
	cout << "Unesi temperaturu drugog dana: ";
	cin >> dan2;
	cout << "Unesi temperaturu treceg dana: ";
	cin >> dan3;

	if (dan1 > 0 && dan2 > 0 && dan3 > 0)
		cout << "Tri dana je temperatura bila pozitivna";
	else if (dan1 < 0 && dan2 < 0 && dan3 < 0)
		cout << "Tri dana je temperatura bila negativna";
	else if (dan1 > 0 && dan2 > 0 && dan3 < 0 || dan1 > 0 && dan2 < 0 && dan3 > 0 || dan1 < 0 && dan2 > 0 && dan3 > 0)
		cout << "jedan dan je temperatura bila ispod nule, a dva dana je bila pozitivna";
	else if (dan1 == 0 && dan2 == 0 && dan3 == 0)
		cout << "Tri dana je temperatura bila 0";
	else if (dan1 == 0 && dan2 == 0 && dan3 < 0 || dan1 == 0 && dan2 < 0 && dan3 == 0 || dan1 < 0 && dan2 == 0 && dan3 == 0)
		cout << "dva dana je temperatura bila nula, a jedan dan je bila ispod nule";
	else if (dan1 == 0 && dan2 == 0 && dan3 > 0 || dan1 == 0 && dan2 > 0 && dan3 == 0 || dan1 > 0 && dan2 == 0 && dan3 < 0)
		cout << "dva dana je temperatura bila nula, a jedan dan je bila pozitivna";
	else if (dan1 < 0 && dan2 < 0 && dan3 == 0 || dan1 < 0 && dan2 == 0 && dan3 < 0 || dan1 == 0 && dan2 < 0 && dan3 < 0)
		cout << "dva dana je temperatura bila ispod nule, a jedan dan je bila nula";
	else if (dan1 > 0 && dan2 > 0 && dan3 == 0 || dan1 > 0 && dan2 == 0 && dan3 > 0 || dan1 == 0 && dan2 > 0 && dan3 > 0)
		cout << "dva dana je temperatura bila pozitivna, a jedan dan je bila nula";
	else
		cout << "jedan dan je temperatura bila nula, jedan dan je bila ispod nule, a jedan dan je bila pozitivna";

}

void PitagorineTrojke()
{
	int a, b, c;
	cout << "Unesi prvi broj: ";
	cin >> a;
	cout << "Unesi drugi broj: ";
	cin >> b;
	cout << "Unesi treci broj: ";
	cin >> c;

	if (pow(a, 2) + pow(b, 2) == pow(c, 2))
		cout << "Brojevi zadovoljavaju Pitagorin uvjet";
	else if (pow(a, 2) + pow(c, 2) == pow(b, 2))
		cout << "Brojevi zadovoljavaju Pitagorin uvjet";
	else if (pow(b, 2) + pow(c, 2) == pow(a, 2))
		cout << "Brojevi zadovoljavaju Pitagorin uvjet";
	else
		cout << "Brojevi ne zadovoljavaju Pitagorin uvjet";

}

void polozaj()
{
	double osX;
	double osY;
	cout << "Unesi kordinatu na osi x: ";
	cin >> osX;
	cout << "Unesi kordinatu na osi y: ";
	cin >> osY;

	if (osX > 0 && osY > 0)
		cout << "Prvi kvadrant";
	else if (osX < 0 && osY > 0)
		cout << "Drugi kvadrant";
	else if (osX < 0 && osY < 0)
		cout << "Treci kvadrant";
	else if (osX > 0 && osY < 0)
		cout << "Cetvrti kvadrant";
	else if (osX > 0 && osY == 0 || osX < 0 && osY == 0)
		cout << "os X";
	else if (osX == 0 && osY > 0 || osX == 0 && osY < 0)
		cout << "os Y";
	else
		cout << "Tocka je (0,0)";

}

void kalkulator()
{
	double a;
	double b;
	cout << "Unesi prvi broj: ";
	cin >> a;
	cout << "Unesi drugi broj: ";
	cin >> b;
	char operacija;
	cout << "Koju racunsku operaciju zelite obaviti: ";
	cin >> operacija;

	if (operacija == '*')
		cout << "Rezultat je: " << a * b;
	else if (operacija == '+')
		cout << "Rezultat je: " << a + b;
	else if (operacija == '-')
		cout << "Rezultat je: " << a - b;
	else if (operacija == '/')
		cout << "Rezultat je: " << a / b;

}

void NogometniTurnir()
{
	int Zagreb1;
	int Split2;
	int Split1;
	int Zagreb2;
	int ukupnoZG;
	int ukupnoST;
	cout << "U prvoj utakmici domacin (Zagreb) je zabio: ";
	cin >> Zagreb1;
	cout << "U prvoj utakmici gosti (Split) su zabili: ";
	cin >> Split2;
	cout << "U drugoj utakmici gosti (Zagreb) su zabili: ";
	cin >> Zagreb2;
	cout << "U drugoj utakmici domacin (Split) je zabio: ";
	cin >> Split1;
	ukupnoZG = Zagreb1 + Zagreb2;
	ukupnoST = Split1 + Split2;

	if (ukupnoZG > ukupnoST)
		cout << "Zagreb - razlika u golovima je " << ukupnoZG - ukupnoST;
	else if (ukupnoZG < ukupnoST)
		cout << "Split - razlika u golovima je " << ukupnoST - ukupnoZG;
	else if (ukupnoZG == ukupnoST)
	{
	if (Zagreb2 > Split1)
		cout << "Zagreb - razlika u golovima je nula";
	else if ((Zagreb2 + Split1) == (Zagreb1 + Split2))
		cout << "Jedanaesterci";
	else if (Zagreb2 < Split1)
		cout << "Split - razlika u golovima je nula";

	}
}
