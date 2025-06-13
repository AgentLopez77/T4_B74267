# Tarea 4 - Implementación de Stack y Lista Enlazada

Este repositorio contiene la implementación de una estructura de datos de Pila (Stack) y de Lista Enlazada (Linked List) en C, como parte de la Tarea 4 del curso IE-0117 Programación Bajo Plataformas Abiertas. 

## Estructura del Repositorio

El repositorio está organizado de la siguiente manera:

* `main.c`: Contiene las funciones `test_stack()` y `test_linked_list()` para probar las implementaciones de la pila y la lista enlazada, respectivamente.
* `stack.h`: Archivo de cabecera que declara las funciones para la implementación de la Pila.
* `stack.c`: Archivo fuente que implementa las funciones declaradas en `stack.h`.
* `linked_list.h`: Archivo de cabecera que declara las funciones para la implementación de la Lista Enlazada.
* `linked_list.c`: Archivo fuente que implementa las funciones declaradas en `linked_list.h`.

## Compilación del Programa

Para compilar este programa, necesitarás un compilador de C (como GCC). Sigue estos pasos:

1.  **Clonar el Repositorio:**
    

    ```bash
    git clone <URL_DEL_REPOSITORIO>
    cd <NOMBRE_DEL_REPOSITORIO>
    ```
    (Reemplaza `<URL_DEL_REPOSITORIO>` y `<NOMBRE_DEL_REPOSITORIO>` con los datos reales de tu repositorio).

2.  **Compilar:**
    Una vez dentro del directorio del repositorio, ejecuta el siguiente comando en tu terminal para compilar el programa:

    ```bash
    gcc main.c stack.c linked_list.c -o my_program
    ```
    Este comando compilará los archivos `main.c`, `stack.c`, y `linked_list.c` y creará un ejecutable llamado `my_program`.

3.  **Ejecutar:**
    Después de la compilación exitosa, puedes ejecutar el programa con el siguiente comando:

    ```bash
    ./my_program
    ```
    Esto ejecutará las pruebas para la pila y la lista enlazada, mostrando los resultados en la consola.

