#include <iostream>
#include <string>
#include <vector> 

using namespace std;

int main() {
    vector<string> voc_german;
    vector<string> voc_spanish;
    
    cout << "Vokabeltrainer\n";
    cout << "Bitte treffe eine Auswahl:\n";
    cout << "(1) Neue Vokabel hinzufügen\n";
    cout << "(2) Vokabeltest starten\n";
    string option;
    cin >> option;

    if(option == "1") {
        cout << "Welche Vokabel (Deutsch)?";
        string german_word;
        string spanish_word;
        cin >> german_word;
        cout << "Wie lautet die Übersetzung?";
        cin >> spanish_word;
        // Deutsches Wort hinzufügen
        voc_german.push_back(german_word);
        voc_spanish.push_back(spanish_word);
        cout << "Vokabel wurde hinzugefügt.\n";
        cout << "Hinzugefügte Vokabeln: " + to_string(voc_german.size());


    } else {
        cout << "Vokabeltest wird gestartet...";
    }
    
    


    return 0;
}