/*
 * Course: COEN 2220 - Programming 2
 * Name: Joewel Maldonado
 * Lab: Lab 3 - Object-Oriented Programming, Part 1
 * Description: Class skeletons - restaurant case design
 * Due date: September 3, 2026
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Reminder of the scenario (see "Contexto" above for the full version):
// "A restaurant takes orders from tables. Each order has a list of
//  dishes, each with a name and a price. At the end, the restaurant
//  calculates the order total, including a 10% service charge."

// TODO (Parte G): Declara la clase Dish.
//   - Miembros privados que necesita saber un plato (piensa en tu
//     respuesta a la pregunta 1 de arriba).
//   - Constructor(es) que consideres necesarios.
//   - Getters para sus atributos.
//   No hace falta implementar el cuerpo de cada funcion - un prototipo
//   dentro de la clase es suficiente para este ejercicio.

class Dish
{
private:
    string name;
    double price;

public:
    Dish();
    Dish(string dishName, double dishPrice);

    string getName() const;
    double getPrice() const;
};

// TODO (Parte G): Declara la clase Order.
//   - Como guarda la lista de platos (ver tu respuesta a la pregunta 2).
//   - Necesita un metodo para calcular el total, incluyendo el 10%
//     de cargo de servicio - decide tu si ese calculo vive aqui o
//     en Restaurant (ver tu respuesta a la pregunta 3).

class Order
{
private:
    int tableNumber;
    vector<Dish> dishes;

public:
    Order();
    Order(int table);

    void addDish(const Dish& dish);

    int getTableNumber() const;
    const vector<Dish>& getDishes() const;

    double calculateTotal() const;
};

// TODO (Parte G, opcional): Declara Restaurant si decidiste que el
// calculo del cargo de servicio le pertenece a esta clase en vez de
// a Order.
//
// Decidi colocar el calculo del cargo de servicio en Order porque cada
// orden contiene los platos y sus precios. Por lo tanto, Order tiene
// la informacion necesaria para sumar los platos y calcular el total
// con el 10% de cargo de servicio. Esto tambien mantiene la
// responsabilidad del calculo dentro de la clase que representa la orden.

int main()
{
    cout << "Esqueletos de diseno - sin logica de ejecucion en este bloque.\n";

    return 0;
}