# Sistem de Gestiune Smart City 🏙️
**Proiect 1 - Programare Orientată pe Obiecte (POO)**

## 1. Descriere
Acest proiect reprezintă un sistem de management pentru elementele de infrastructură dintr-un oraș inteligent (Smart City). Sistemul permite adăugarea și monitorizarea diferitelor entități urbane, cum ar fi clădirile, spitalele și senzorii meteorologici, utilizând conceptele fundamentale de Programare Orientată pe Obiecte (POO) în C++.

## 2. Maparea Cerințelor Tehnice

Proiectul bifează toate cerințele tehnice obligatorii, implementate după cum urmează:

* **Separarea claselor:** Toate clasele sunt organizate modular în fișiere `.h` (declarații) și `.cpp` (implementări).
* **Complexitate structurală (10 clase):** `ElementUrban`, `Cladire`, `Spital`, `Senzor`, `SenzorTemp`, `SenzorUmid`, `StatieMeteo`, `Gestionar`, `Meniu`, `ExceptieOras`.
* **Ierarhie de moștenire (Minim 6 clase):** Baza este reprezentată de `ElementUrban`.
    * *Ramura 1:* `Cladire` -> `Spital`
    * *Ramura 2:* `Senzor` -> `SenzorTemp`, `SenzorUmid` -> `StatieMeteo`
* **Moștenire în Diamant:** Implementată prin clasa `StatieMeteo`, care derivă din `SenzorTemp` și `SenzorUmid`. Soluționată corect folosind **moștenirea virtuală** (`virtual public`) față de baza comună `Senzor`.
* **Membri și metode statice:** Variabila `contorID` din `ElementUrban` este utilizată pentru a genera un identificator unic și secvențial pentru fiecare element instanțiat.
* **Encapsulare și Gestiunea Resurselor:**
    * Utilizarea corectă a modificatorilor de acces (`private`, `protected`, `public`).
    * **Regula celor 3** (Constructor de copiere, Operator de atribuire `=`, Destructor) este implementată complet și corect în clasa `Gestionar` pentru a asigura un *Deep Copy* pe baza metodei polimorfice `clone()` și pentru a preveni memory leak-urile.
    * Elementele sunt stocate polimorfic folosind `std::vector<ElementUrban*>`.
* **Polimorfism:** Clasa `ElementUrban` este abstractă (conține metoda virtuală pură `afisare()`), garantând comportamentul polimorfic la rulare pentru toate clasele derivate.
* **Tratarea Excepțiilor:** Definirea clasei `ExceptieOras` (derivată din `std::exception`). Excepțiile sunt aruncate la validarea datelor (ex: pointer null la adăugare, vector gol la afișare) și prinse prin blocuri `try-catch` în clasa `Meniu`.
* **Interfață de tip Meniu:** Utilizatorul poate interacționa cu programul pentru a crea obiecte de diverse tipuri, citind atributele de la tastatură și afișând starea orașului.

## 3. Rulare și Compilare

Acest proiect folosește **CMake** pentru build și poate fi compilat standard pe orice sistem de operare (configurat și pentru testarea automată prin GitHub Actions).

Pentru compilarea manuală din linia de comandă:
```bash
mkdir build
cd build
cmake ..
cmake --build .