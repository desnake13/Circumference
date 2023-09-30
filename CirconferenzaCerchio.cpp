
// Tonsuso Michael, 3A inf, 28/09/2023
// letto il raggio in input ci calcoliamo la circonferenza e l'area

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath> // libreria per utilizzare il pigreco
using namespace std;

class Circonferenza {
	public:
		float raggio;
		
		// funzione per l'inserimento del raggio
		void InserimentoRaggio() {
			cout << "Inserisci il raggio: ";
			cin >> raggio;
		};

		// la funzione CalcoloCirconferenza ci calcola la circonferenza
		float CalcoloCirconferenza() {
			return 2 * M_PI *raggio;
		};

		// la funzione CalcoloArea ci calcola l'area della circonferenza
		float CalcoloArea() {
			return M_PI  * raggio * raggio;
		};
};

int main() {


	// Creiamo un oggetto della classe Cerchio
	Circonferenza objC;  

	// chiamiamo la funzione per l'inserimento del raggio
	objC.InserimentoRaggio();

	// ed infine stampiamo 
	cout << "Questa è la circonferenza: " << objC.CalcoloCirconferenza() << "\n";
	cout << "Questa è l'area della circonferenza: " << objC.CalcoloArea();

	return 0;

}

 