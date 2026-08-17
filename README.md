# 🖥️ 42 C++ Modules 00 - 09

---

## Projektinfos

Die **C++ Modules** sind eine Einführung in die **objektorientierten Programmierung (OOP)** in C++. Die Module decken alle fundamentalen Konzepte ab. Klassenstrukturen, Speicherverwaltung, Templates, Exceptions sowie die Standard Template Library (STL).

Alle Aufgaben sind in **C++98-Standard** verfasst und werden mit den Flags `-Wall -Wextra -Werror -std=c++98` kompiliert.

---

## Module

| Modul | Konzepte | Funktionen |
| :--- | :--- | :--- |
| **CPP 00** | Classes, Namespaces, Member functions, Stdio streams | `iostream`, `class`, `const`, `static`, Member Initializer Lists |
| **CPP 01** | Memory allocation, Pointers to members, References, Switch | Stack vs. Heap, `new`/`delete`, Pointers vs. References, File I/O (`fstream`) |
| **CPP 02** | Polymorphism, Operator Overloading, Canonical Form | Fixed-Point Numbers, Fixed-Point Arithmetic, Orthodox Canonical Class Form |
| **CPP 03** | Inheritance | Base/Derived Classes, Access Specifiers (`public`, `protected`, `private`), Chaining Constructors |
| **CPP 04** | Subtype Polymorphism, Abstract Classes, Interfaces | `virtual` functions, Dynamic Binding, Virtual Destructors, Pure Virtual Functions |
| **CPP 05** | Repetition & Exceptions | `try-catch` blocks, Custom Exceptions, Form Signatures, Grade Mechanics |
| **CPP 06** | C++ Type Casts | `scalar_conversion`, `static_cast`, `dynamic_cast`, `const_cast`, `reinterpret_cast` |
| **CPP 07** | Function & Class Templates | Generic Programming, Template Functions (`swap`, `min`, `max`), Template Classes (`Array<T>`) |
| **CPP 08** | Templated Containers, Iterators, Algorithms | `std::vector`, `std::list`, `std::deque`, STL Algorithms (`std::find`, `std::sort`) |
| **CPP 09** | STL Containers & Advanced Data Structures | `std::map` (Bitcoin Exchange), `std::stack` (RPN), `std::deque` / `std::vector` (Ford-Johnson / PmergeMe) |

---

## Nutzung

Jedes Modul hat eine eigene `Makefile`.

### Use the Makefile
- `make` – um das Projekt zu kompilieren.
- `make clean` – um alle (`.o`) Dateien zu entfernen
- `make fclean` – um alle (`.o`) Dateien sowie das executable zu entfernen.
- `make re` – neue Kompilierung sowie `fclean`.
