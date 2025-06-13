#include "stack.h"
#include <stdio.h> // Para printf, si es necesario
#define MAX_STACK_TAMA 100 // Definición del tamaño máximo de la pila

static int stack_elementos[MAX_STACK_TAMA]; // Array para almacenar los elementos de la pila
static unsigned int tamaño_actual = 0;

void stack_init() {
    tamaño_actual = 0;
}

int stack_push(unsigned int data) { // Inserta un elemento en la pila
    // Verifica si la pila no está llena antes de insertar
    if (tamaño_actual < MAX_STACK_TAMA) {
        stack_elementos[tamaño_actual] = data;
        tamaño_actual++;
        return 0; // Arroja cero si se inserta correctamente
    } else {
        return -1; // Pila llena, no se puede insertar
    }
}

int stack_pop() { // Elimina el elemento superior de la pila
    // Verifica si la pila no está vacía antes de eliminar
    if (tamaño_actual > 0) {
        tamaño_actual--;
        return stack_elementos[tamaño_actual]; // Retorna el elemento eliminado
    } else {
        return -1; // Pila vacía
    }
}

unsigned int stack_size() {
    return tamaño_actual; // Retorna el tamaño actual de la pila
}

int stack_is_full() { // Verifica si la pila está llena
    return (tamaño_actual == MAX_STACK_TAMA);
}

int stack_is_empty() {
    return (tamaño_actual == 0);
}