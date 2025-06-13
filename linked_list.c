#include "linked_list.h"
#include <stdio.h> // Para printf, si es necesario
#include <stdlib.h> // Para malloc y free

// Definición de la estructura del nodo de la lista enlazada
// Cada nodo contiene un dato y un puntero al siguiente nodo
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Definición de la lista enlazada
static Node* head = NULL;
static unsigned int list_size = 0;

void linked_list_init() {
    // Liberar los nodos existentes, si los hay, para asegurar una reinicialización limpia
    Node* current = head;
    Node* next_node;
    while (current != NULL) {
        next_node = current->next;
        free(current);
        current = next_node;
    }
    head = NULL;
    list_size = 0;
}

int linked_list_append(int data) { // Añade un nuevo nodo al final de la lista enlazada
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) { // Verifica si la memoria se ha asignado correctamente
        return -1; // Error: fallo en la asignación de memoria
    }
    new_node->data = data;
    new_node->next = NULL;
    if (head == NULL) {
        head = new_node;
    } else {
        Node* current = head;
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = new_node;
    }
    list_size++;
    return 0; // Éxito
}

int linked_list_prepend(int data) { // Añade un nuevo nodo al principio de la lista enlazada
    Node* new_node = (Node*)malloc(sizeof(Node));
    if (new_node == NULL) {
        return -1; // Error: fallo en la asignación de memoria
    }
    new_node->data = data;
    new_node->next = head;
    head = new_node;
    list_size++;
    return 0; // Éxito
}

int linked_list_remove(int data) {
    if (head == NULL) {
        return -1; // Error: la lista está vacía
    }

    Node* current = head;
    Node* prev = NULL;

    // Si el propio nodo head contiene los datos
    if (current != NULL && current->data == data) {
        head = current->next;
        free(current);
        list_size--;
        return 0; // Éxito
    }

    // Buscar los datos a eliminar, manteniendo un registro del nodo anterior
    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    // Si los datos no estaban presentes en la lista enlazada
    if (current == NULL) {
        return -1; // Error: elemento no encontrado
    }

    // Desvincular el nodo de la lista enlazada
    prev->next = current->next;
    free(current);
    list_size--;
    return 0; // Éxito
}

int linked_list_contains(int data) {
    Node* current = head;
    while (current != NULL) {
        if (current->data == data) {
            return 1; // Encontrado
        }
        current = current->next;
    }
    return 0; // No encontrado
}

unsigned int linked_list_size() {
    return list_size;
}

void linked_list_print() {
    Node* current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}