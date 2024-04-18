# Funzione di Ricerca di Stringhe con Sensibilità e Insensibilità alle Maiuscole e Minuscole
### (Case-Sensitive and Case-Insensitive String Search Function)

Questo programma implementa una funzione di ricerca di stringhe in una stringa di origine, consentendo di scegliere tra una ricerca sensibile e insensibile alle maiuscole e minuscole. È utile quando si desidera trovare una sottostringa all'interno di una stringa, prendendo in considerazione o ignorando la differenza tra maiuscole e minuscole.

This program implements a string search function within a source string, allowing to choose between a case-sensitive and a case-insensitive search. It's useful when you want to find a substring within a string, taking into account or ignoring case sensitivity.

## Utilizzo (Usage)

La funzione `Find` è definita nel file sorgente e accetta i seguenti parametri:

The `Find` function is defined in the source file and accepts the following parameters:

```cpp
size_t Find(
 const std::string &source,         // Stringa di origine da cercare (Source string to be searched)
 const std::string &search_string,  // Stringa da cercare (The string to search for)
 Case searchCase = Case::INSENSITIVE, // Scegli la ricerca sensibile/insensibile alle maiuscole e minuscole (Choose case sensitive/insensitive search)
 size_t offset = 0 )                // Inizia la ricerca da questo offset (Start the search from this offset)
