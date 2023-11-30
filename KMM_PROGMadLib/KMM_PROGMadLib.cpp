#include <iostream>
#include <string>

using namespace std;

// Declaracions de les funcions
string demanaText(string prompt);
int demanaNumero(string prompt);
void explicaHistoria(string nom, string nomPlural, int numero, string partCos, string verb);

int main()
{
    // Missatges de benvinguda
    cout << "Benvingut a Mad Lib. \n\n";
    cout << "Respon les seguents preguntes per ajudar a crear una nova historia.\n";

    string nom = demanaText("Si us plau, introdueix un nom: ");
    string nomPlural = demanaText("Si us plau, introdueix un nom en plural: ");
    int numero = demanaNumero("Si us plau, introdueix un numero: ");
    string partCos = demanaText("Si us plau, introdueix una part del cos: ");
    string verb = demanaText("Si us plau, introdueix un verb: ");

    // Crida a la funció que crea la història
    explicaHistoria(nom, nomPlural, numero, partCos, verb);

    return 0;
}

// Implementació de les funcions

/// <summary>
/// Funció per llegir una cadena de text de l'usuari
/// </summary>
/// <param name="prompt">Pregunta que vull fer a l'usuari</param>
/// <returns>Resposta introduida per l'usuari en forma de paraula</returns>
string demanaText(string prompt)
{
    string text;
    cout << prompt;
    cin >> text;
    return text;
}

/// <summary>
/// Funció per llegir un número enter de l'usuari amb validació d'entrada.
/// </summary>
/// <param name="prompt">Pregunta que vull fer a l'usuari</param>
/// <returns>Número introduït per l'usuari</returns>
int demanaNumero(string prompt)
{
    int numero;
    cout << prompt;
    // Validació d'entrada per assegurar-se que s'introdueixi un número vàlid.
    while (!(cin >> numero))
    {
        cout << "Si us plau, introdueix un numero valid: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    return numero;
}

/// <summary>
/// Funció per imprimir la història utilitzant les respostes de l'usuari
/// </summary>
/// <param name="nom">Nom de l'element protagonista de la història</param>
/// <param name="nomPlural">Nom plural d'un element en la història</param>
/// <param name="numero">Número relacionat amb la història</param>
/// <param name="partCos">Part del cos relacionada amb la història</param>
/// <param name="verb">Verb d'acció relacionat amb la història</param>
void explicaHistoria(string nom, string nomPlural, int numero, string partCos, string verb)
{
    // Funció per imprimir la història utilitzant les respostes de l'usuari
    cout << "\nPreparat per una historia mega divertida!\n";
    cout << "En una dimensio on regnava la rebelia, va sorgir " << nom << ", posseidor/a de " << numero << " " << nomPlural << " letals.\n";
    cout << nom << ", decidit/a a desafiar les lleis de l'avorriment, va optar per " << verb << " amb el seu " << partCos << " de manera explosiva.\n";
    cout << "Les ones d'adrenalina van ressonar com un himne de la intensitat.\n";
    cout << "Fi de la historia extremadament divertida.\n";
}