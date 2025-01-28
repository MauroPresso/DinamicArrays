/** @file lib.c
*  @brief Implementaciones de funciones para manipular vectores dinámicos.
*/
#include "dinamic_arrays_functions_library.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// SHOW VECTOR.

/**
* @brief Muestra los elementos de un vector de enteros.
* @param vec Puntero al vector de enteros.
* @param cant Cantidad de elementos en el vector.
*/
void show_int_vector(int *vec, uint8_t cant) 
{
    if (vec == NULL) 
    {
        printf("El vector es NULL.\n");
        return;
    }
    for (uint8_t i = 0; i < cant; i++) 
    {
        printf("%d\t", vec[i]);
    }
    printf("\n");
}

/**
* @brief Muestra los elementos de un vector de flotantes.
* @param vec Puntero al vector de flotantes.
* @param cant Cantidad de elementos en el vector.
*/
void show_float_vector(float *vec, uint8_t cant) 
{
    if (vec == NULL) 
    {
        printf("El vector es NULL.\n");
        return;
    }
    for (uint8_t i = 0; i < cant; i++) 
    {
        printf("%.2f\t", vec[i]);
    }
    printf("\n");
}

/**
* @brief Muestra los elementos de un vector de tipo double.
* @param vec Puntero al vector de enteros.
* @param cant Cantidad de elementos en el vector.
*/
void show_double_vector(double *vec, uint8_t cant) 
{
    if (vec == NULL) 
    {
        printf("El vector es NULL.\n");
        return;
    }
    for (uint8_t i = 0; i < cant; i++) 
    {
        printf("%.2f\t", vec[i]);
    }
    printf("\n");
}

/**
* @brief Muestra los elementos de un vector de complejos.
* @param vec Puntero al vector de enteros.
* @param cant Cantidad de elementos en el vector.
*/
void show_Complex_vector(struct Complex *vec, uint8_t cant) 
{
    if (vec == NULL) 
    {
        printf("El vector es NULL.\n");
    }
    for (uint8_t i = 0; i < cant; i++) 
    {
        printf("(%.2f, %.2f)\t", vec[i].real, vec[i].imag);
    }
    printf("\n");
}


// INSERT ITEM.

/**
* @brief Inserta un elemento en un vector de enteros.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param insert_pos Posición donde se insertará el nuevo elemento.
* @param insert_value Valor a insertar.
* @return Puntero al vector resultante.
*/
int* insertItem_int_vector(int* vec, uint8_t vec_size, uint8_t insert_pos, int insert_value) 
{
    if(vec == NULL)
    {
        printf("El vector es NULL\n");
        return NULL;
    }
    
    if (insert_pos > vec_size) 
    {
        printf("Posición inválida para insertar.\n");
        return vec;
    }

    int* resulting_vector = (int*)malloc((vec_size + 1) * sizeof(int));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return vec;
    }

    for (uint8_t k = 0; k < vec_size + 1; k++) 
    {
        if (k < insert_pos) 
        {
            resulting_vector[k] = vec[k];
        } 
        else if (k == insert_pos) 
        {
            resulting_vector[k] = insert_value;
        } 
        else 
        {
            resulting_vector[k] = vec[k - 1];
        }
    }

    return resulting_vector;
}

/**
* @brief Inserta un elemento en un vector de flotantes.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param insert_pos Posición donde se insertará el nuevo elemento.
* @param insert_value Valor a insertar.
* @return Puntero al vector resultante.
*/
float* insertItem_float_vector(float* vec, uint8_t vec_size, uint8_t insert_pos, float insert_value) 
{
    if(vec == NULL)
    {
        printf("El vector es NULL\n");
        return NULL;
    }
    
    if (insert_pos > vec_size) 
    {
        printf("Posicion invalida para insertar.\n");
        return vec;
    }

    float* resulting_vector = (float*)malloc((vec_size + 1) * sizeof(float));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignacion de memoria para el vector resultante.\n");
        return vec;
    }

    for (uint8_t k = 0; k < vec_size + 1; k++) 
    {
        if (k < insert_pos) 
        {
            resulting_vector[k] = vec[k];
        } 
        else if (k == insert_pos) 
        {
            resulting_vector[k] = insert_value;
        } 
        else 
        {
            resulting_vector[k] = vec[k - 1];
        }
    }

    return resulting_vector;
}

/**
* @brief Inserta un elemento en un vector de tipo double.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param insert_pos Posición donde se insertará el nuevo elemento.
* @param insert_value Valor a insertar.
* @return Puntero al vector resultante.
*/
double* insertItem_double_vector(double* vec, uint8_t vec_size, uint8_t insert_pos, double insert_value) 
{
    if(vec == NULL)
    {
        printf("El vector es NULL\n");
        return NULL;
    }
    
    if (insert_pos > vec_size) 
    {
        printf("Posición inválida para insertar.\n");
        return vec;
    }

    double* resulting_vector = (double*)malloc((vec_size + 1) * sizeof(double));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return vec;
    }

    for (uint8_t k = 0; k < vec_size + 1; k++) 
    {
        if (k < insert_pos) 
        {
            resulting_vector[k] = vec[k];
        } 
        else if (k == insert_pos) 
        {
            resulting_vector[k] = insert_value;
        } 
        else 
        {
            resulting_vector[k] = vec[k - 1];
        }
    }

    return resulting_vector;
}

/**
* @brief Inserta un elemento en un vector de complejos.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param insert_pos Posición donde se insertará el nuevo elemento.
* @param insert_value Valor a insertar.
* @return Puntero al vector resultante.
*/
struct Complex* insertItem_Complex_vector(struct Complex* vec, uint8_t vec_size, uint8_t insert_pos, struct Complex insert_value) 
{
    if (vec == NULL) 
    {
        printf("El vector es NULL.\n");
        return NULL;
    }
    if(insert_pos > vec_size)
    {
        printf("Posición inválida para insertar.\n");
        return vec;
    }
    struct Complex* resulting_vector = (struct Complex*)malloc((vec_size + 1) * sizeof(struct Complex));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return vec;
    }

    for (uint8_t k = 0; k < vec_size + 1; k++) 
    {
        if (k < insert_pos) 
        {
            resulting_vector[k].real = vec[k].real;
            resulting_vector[k].imag = vec[k].imag;
        } 
        if (k == insert_pos) 
        {
            resulting_vector[k].real = insert_value.real;
            resulting_vector[k].imag = insert_value.imag;
        } 
        if (k > insert_pos)
        {
            resulting_vector[k].real = vec[k - 1].real;
            resulting_vector[k].imag = vec[k - 1].imag;
        }
    }

    return resulting_vector;
}


// REMOVE ITEM.

/**
* @brief Elimina un elemento de un vector de enteros.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param item_pos Posición del elemento a eliminar.
* @return Puntero al vector resultante.
*/
int* removeItem_int_vector(int* vec, uint8_t vec_size, uint8_t item_pos) 
{
    if(vec == NULL)
    {
        printf("El vector es NULL\n");
        return NULL;
    }
    
    if (item_pos >= vec_size) 
    {
        printf("Posición inválida para eliminar.\n");
        return vec;
    }

    int* resulting_vector = (int*)malloc((vec_size - 1) * sizeof(int));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return vec;
    }

    for (uint8_t k = 0, j = 0; k < vec_size; k++) 
    {
        if (k != item_pos) 
        {
            resulting_vector[j] = vec[k];
            resulting_vector[j] = vec[k];
            j++;
        }
    }

    return resulting_vector;
}

/**
* @brief Elimina un elemento de un vector de flotantes.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param item_pos Posición del elemento a eliminar.
* @return Puntero al vector resultante.
*/
float* removeItem_float_vector(float* vec, uint8_t vec_size, uint8_t item_pos) 
{
    if(vec == NULL)
    {
        printf("El vector es NULL\n");
        return NULL;
    }
    
    if (item_pos >= vec_size) 
    {
        printf("Posicion invalida para eliminar.\n");
        return vec;
    }

    float* resulting_vector = (float*)malloc((vec_size - 1) * sizeof(float));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignacion de memoria para el vector resultante.\n");
        return vec;
    }

    for (uint8_t k = 0, j = 0; k < vec_size; k++) 
    {
        if (k != item_pos) 
        {
            resulting_vector[j] = vec[k];
            resulting_vector[j] = vec[k];
            j++;
        }
    }

    return resulting_vector;
}

/**
* @brief Elimina un elemento de un vector de tipo double.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param item_pos Posición del elemento a eliminar.
* @return Puntero al vector resultante.
*/
double* removeItem_double_vector(double* vec, uint8_t vec_size, uint8_t item_pos) 
{
    if(vec == NULL)
    {
        printf("El vector es NULL\n");
        return NULL;
    }
    
    if (item_pos >= vec_size) 
    {
        printf("Posición inválida para eliminar.\n");
        return vec;
    }

    double* resulting_vector = (double*)malloc((vec_size - 1) * sizeof(double));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return vec;
    }

    for (uint8_t k = 0, j = 0; k < vec_size; k++) 
    {
        if (k != item_pos) 
        {
            resulting_vector[j] = vec[k];
            resulting_vector[j] = vec[k];
            j++;
        }
    }

    return resulting_vector;
}

/**
* @brief Elimina un elemento de un vector de complejos.
* @param vec Puntero al vector.
* @param vec_size Tamaño del vector.
* @param item_pos Posición del elemento a eliminar.
* @return Puntero al vector resultante.
*/
struct Complex* removeItem_Complex_vector(struct Complex* vec, uint8_t vec_size, uint8_t item_pos) 
{
    if (vec == NULL) 
    {
        printf("El vector es NULL.\n");
        return NULL;
    }
    if (item_pos >= vec_size)
    {
        printf("Posición inválida para eliminar.\n");
        return vec;
    }

    struct Complex* resulting_vector = (struct Complex*)malloc((vec_size - 1) * sizeof(struct Complex));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return vec;
    }
    for (uint8_t k = 0, j = 0; k < vec_size; k++) 
    {
        if (k != item_pos) 
        {
            resulting_vector[j].real = vec[k].real;
            resulting_vector[j].imag = vec[k].imag;
            j++;
        }
    }

    return resulting_vector;
}


// RESIZE.

/**
* @brief Cambia el tamaño de un vector de enteros.
* @param old_vector Puntero al vector actual.
* @param old_size Tamaño actual del vector.
* @param new_size Nuevo tamaño deseado.
* @return Puntero al nuevo vector redimensionado.
*/
int* resize_int_vector(int* old_vector, uint8_t old_size, uint8_t new_size) 
{
    if (old_vector == NULL) 
    {
        printf("El vector es NULL.\n");
        return NULL;
    }
    if (new_size == old_size) 
    {
        printf("El nuevo tamaño es igual al tamaño viejo.\n");
        return old_vector;
    }

    int* new_vector = (int*)malloc(new_size * sizeof(int));
    if (new_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return old_vector;
    }

    if (new_size > old_size) 
    {
        for (uint8_t k = 0; k < old_size; k++) 
        {
            new_vector[k] = old_vector[k];
        }
        for (uint8_t k = old_size; k < new_size; k++) 
        {
            new_vector[k] = 0; // Inicialización
        }
    } 
    else 
    {
        for (uint8_t k = 0; k < new_size; k++)
        {
            new_vector[k] = old_vector[k];
        }
    }

    return new_vector;
}

/**
* @brief Cambia el tamaño de un vector de flotantes.
* @param old_vector Puntero al vector actual.
* @param old_size Tamaño actual del vector.
* @param new_size Nuevo tamaño deseado.
* @return Puntero al nuevo vector redimensionado.
*/
float* resize_float_vector(float* old_vector, uint8_t old_size, uint8_t new_size) 
{
    if (old_vector == NULL) 
    {
        printf("El vector es NULL.\n");
        return NULL;
    }
    if (new_size == old_size) 
    {
        printf("El nuevo tamaño es igual al tamaño viejo.\n");
        return old_vector;
    }

    float* new_vector = (float*)malloc(new_size * sizeof(float));
    if (new_vector == NULL) 
    {
        printf("Fallo en la asignacion de memoria para el vector resultante.\n");
        return old_vector;
    }

    if (new_size > old_size) 
    {
        for (uint8_t k = 0; k < old_size; k++) 
        {
            new_vector[k] = old_vector[k];
        }
        for (uint8_t k = old_size; k < new_size; k++) 
        {
            new_vector[k] = 0.0f;
        }
    } 
    else 
    {
        for (uint8_t k = 0; k < new_size; k++) 
        {
            new_vector[k] = old_vector[k];
        }
    }

    return new_vector;
}

/**
* @brief Cambia el tamaño de un vector de tipo double.
* @param old_vector Puntero al vector actual.
* @param old_size Tamaño actual del vector.
* @param new_size Nuevo tamaño deseado.
* @return Puntero al nuevo vector redimensionado.
*/
double* resize_double_vector(double* old_vector, uint8_t old_size, uint8_t new_size) 
{
    if (old_vector == NULL) 
    {
        printf("El vector es NULL.\n");
        return NULL;
    }
    if (new_size == old_size) 
    {
        printf("El nuevo tamaño es igual al tamaño viejo.\n");
        return old_vector;
    }
    double* new_vector = (double*)malloc(new_size * sizeof(double));
    if (new_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return old_vector;
    }

    if (new_size > old_size) 
    {
        for (uint8_t k = 0; k < old_size; k++) 
        {
            new_vector[k] = old_vector[k];
        }
        for (uint8_t k = old_size; k < new_size; k++) 
        {
            new_vector[k] = 0.0;
        }
    } 
    else 
    {
        for (uint8_t k = 0; k < new_size; k++) 
        {
            new_vector[k] = old_vector[k];
        }
    }

    return new_vector;
}

/**
* @brief Cambia el tamaño de un vector de complejos.
* @param old_vector Puntero al vector actual.
* @param old_size Tamaño actual del vector.
* @param new_size Nuevo tamaño deseado.
* @return Puntero al nuevo vector redimensionado.
*/
struct Complex* resize_Complex_vector(struct Complex* old_vector, uint8_t old_size, uint8_t new_size) 
{
    if (old_vector == NULL) 
    {
        printf("El vector es NULL.\n");
        return NULL;
    }

    if (new_size == old_size) 
    {
        printf("El nuevo tamaño es igual al tamaño viejo.\n");
        return old_vector;
    }

    struct Complex* new_vector = (struct Complex*)malloc(new_size * sizeof(struct Complex));
    if (new_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria para el vector resultante.\n");
        return old_vector;
    }

    if (new_size > old_size) 
    {
        for (uint8_t k = 0; k < old_size; k++) 
        {
            new_vector[k].real = old_vector[k].real;
            new_vector[k].imag = old_vector[k].imag;
        }
        for (uint8_t k = old_size; k < new_size; k++) 
        {
            new_vector[k].real = 0.0;
            new_vector[k].imag = 0.0;
        }
    } 
    else 
    {
        for (uint8_t k = 0; k < new_size; k++) 
        {
            new_vector[k].real = old_vector[k].real;
            new_vector[k].imag = old_vector[k].imag;
        }
    }

    return new_vector;
}


// CONCATENAR.

/**
* @brief Concatena dos vectores de enteros.
* @param vec_left Puntero al primer vector.
* @param left_size Tamaño del primer vector.
* @param vec_right Puntero al segundo vector.
* @param right_size Tamaño del segundo vector.
* @return Puntero al vector resultante.
*/
int* concat_int_vector(int* vec_left, uint8_t left_size, int* vec_right, uint8_t right_size) 
{
    if (vec_left == NULL || vec_right == NULL) 
    {
        printf("Uno de los vectores es NULL.\n");
        return NULL;
    }

    int* resulting_vector = (int*)malloc((left_size + right_size) * sizeof(int));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria.\n");
        return NULL;
    }

    for (uint8_t k = 0; k < left_size; k++) 
    {
        resulting_vector[k] = vec_left[k];
    }
    for (uint8_t m = 0; m < right_size; m++) 
    {
        resulting_vector[m + left_size] = vec_right[m];
    }

    return resulting_vector;
}

/**
* @brief Concatena dos vectores de flotantes.
* @param vec_left Puntero al primer vector.
* @param left_size Tamaño del primer vector.
* @param vec_right Puntero al segundo vector.
* @param right_size Tamaño del segundo vector.
* @return Puntero al vector resultante.
*/
float* concat_float_vector(float* vec_left, uint8_t left_size, float* vec_right, uint8_t right_size) 
{
    if (vec_left == NULL || vec_right == NULL) 
    {
        printf("Uno de los vectores es NULL.\n");
        return NULL;
    }

    float* resulting_vector = (float*)malloc((left_size + right_size) * sizeof(float));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignaci\u00f3n de memoria.\n");
        return NULL;
    }

    for (uint8_t k = 0; k < left_size; k++) 
    {
        resulting_vector[k] = vec_left[k];
    }
    for (uint8_t m = 0; m < right_size; m++) 
    {
        resulting_vector[m + left_size] = vec_right[m];
    }

    return resulting_vector;
}

/**
* @brief Concatena dos vectores de tipo double.
* @param vec_left Puntero al primer vector.
* @param left_size Tamaño del primer vector.
* @param vec_right Puntero al segundo vector.
* @param right_size Tamaño del segundo vector.
* @return Puntero al vector resultante.
*/
double* concat_double_vector(double* vec_left, uint8_t left_size, double* vec_right, uint8_t right_size) 
{
    if (vec_left == NULL || vec_right == NULL) 
    {
        printf("Uno de los vectores es NULL.\n");
        return NULL;
    }

    double* resulting_vector = (double*)malloc((left_size + right_size) * sizeof(double));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria.\n");
        return NULL;
    }

    for (uint8_t k = 0; k < left_size; k++) 
    {
        resulting_vector[k] = vec_left[k];
    }
    for (uint8_t m = 0; m < right_size; m++)
    {
        resulting_vector[m + left_size] = vec_right[m];
    }

    return resulting_vector;
}

/**
* @brief Concatena dos vectores de complejos.
* @param vec_left Puntero al primer vector.
* @param left_size Tamaño del primer vector.
* @param vec_right Puntero al segundo vector.
* @param right_size Tamaño del segundo vector.
* @return Puntero al vector resultante.
*/
struct Complex* concat_Complex_vector(struct Complex* vec_left, uint8_t left_size, struct Complex* vec_right, uint8_t right_size) 
{
    if (vec_left == NULL || vec_right == NULL) 
    {
        printf("Uno de los vectores es NULL.\n");
        return NULL;
    }

    struct Complex* resulting_vector = (struct Complex*)malloc((left_size + right_size) * sizeof(struct Complex));
    if (resulting_vector == NULL) 
    {
        printf("Fallo en la asignación de memoria.\n");
        return NULL;
    }

    for (uint8_t k = 0; k < left_size; k++) 
    {
        resulting_vector[k].real = vec_left[k].real;
        resulting_vector[k].imag = vec_left[k].imag;
    }
    for (uint8_t m = 0; m < right_size; m++) 
    {
        resulting_vector[m + left_size].real = vec_right[m].real;
        resulting_vector[m + left_size].imag = vec_right[m].imag;
    }

    return resulting_vector;
}

