/**
 * @file lib.h
 * @brief Declaraciones de funciones para manipulación de arrays dinámicos.
 *
 * Este archivo contiene las declaraciones de funciones para manipular vectores dinámicos
 * de diferentes tipos de datos: int, float, double, y estructuras Complex.
 */

#pragma once
#include <stdint.h>

/**
 * @brief Representa un número complejo.
 */
struct Complex {
    float real; /**< Parte real del número complejo. */
    float imag; /**< Parte imaginaria del número complejo. */
};

// SHOW VECTOR.

/**
 * @brief Muestra los elementos de un vector de enteros.
 * @param vec Puntero al vector de enteros.
 * @param cant Cantidad de elementos en el vector.
 */
void show_int_vector(int *vec, uint8_t cant);

/**
 * @brief Muestra los elementos de un vector de flotantes.
 * @param vec Puntero al vector de flotantes.
 * @param cant Cantidad de elementos en el vector.
 */
void show_float_vector(float *vec, uint8_t cant);

/**
 * @brief Muestra los elementos de un vector de dobles.
 * @param vec Puntero al vector de dobles.
 * @param cant Cantidad de elementos en el vector.
 */
void show_double_vector(double *vec, uint8_t cant);

/**
 * @brief Muestra los elementos de un vector de estructuras Complex.
 * @param vec Puntero al vector de estructuras Complex.
 * @param cant Cantidad de elementos en el vector.
 */
void show_Complex_vector(struct Complex *vec, uint8_t cant);


// INSERT ITEM.

/**
 * @brief Inserta un elemento en un vector de enteros.
 * @param vec Puntero al vector de enteros.
 * @param vec_size Tamaño actual del vector.
 * @param insert_pos Posición donde se insertará el elemento (0-indexado).
 * @param insert_value Valor del elemento a insertar.
 * @return Puntero al vector resultante tras la inserción.
 */
int* insertItem_int_vector(int* vec, uint8_t vec_size, uint8_t insert_pos, int insert_value);

/**
 * @brief Inserta un elemento en un vector de flotantes.
 * @param vec Puntero al vector de flotantes.
 * @param vec_size Tamaño actual del vector.
 * @param insert_pos Posición donde se insertará el elemento (0-indexado).
 * @param insert_value Valor del elemento a insertar.
 * @return Puntero al vector resultante tras la inserción.
 */
float* insertItem_float_vector(float* vec, uint8_t vec_size, uint8_t insert_pos, float insert_value);

/**
 * @brief Inserta un elemento en un vector de dobles.
 * @param vec Puntero al vector de dobles.
 * @param vec_size Tamaño actual del vector.
 * @param insert_pos Posición donde se insertará el elemento (0-indexado).
 * @param insert_value Valor del elemento a insertar.
 * @return Puntero al vector resultante tras la inserción.
 */
double* insertItem_double_vector(double* vec, uint8_t vec_size, uint8_t insert_pos, double insert_value);

/**
 * @brief Inserta un elemento en un vector de estructuras Complex.
 * @param vec Puntero al vector de estructuras Complex.
 * @param vec_size Tamaño actual del vector.
 * @param insert_pos Posición donde se insertará el elemento (0-indexado).
 * @param insert_value Estructura Complex a insertar.
 * @return Puntero al vector resultante tras la inserción.
 */
struct Complex* insertItem_Complex_vector(struct Complex* vec, uint8_t vec_size, uint8_t insert_pos, struct Complex insert_value);


// REMOVE ITEM.

/**
 * @brief Elimina un elemento de un vector de enteros.
 * @param vec Puntero al vector de enteros.
 * @param vec_size Tamaño actual del vector.
 * @param item_pos Posición del elemento a eliminar (0-indexado).
 * @return Puntero al vector resultante tras la eliminación.
 */
int* removeItem_int_vector(int* vec, uint8_t vec_size, uint8_t item_pos);

/**
 * @brief Elimina un elemento de un vector de flotantes.
 * @param vec Puntero al vector de flotantes.
 * @param vec_size Tamaño actual del vector.
 * @param item_pos Posición del elemento a eliminar (0-indexado).
 * @return Puntero al vector resultante tras la eliminación.
 */
float* removeItem_float_vector(float* vec, uint8_t vec_size, uint8_t item_pos);

/**
 * @brief Elimina un elemento de un vector de dobles.
 * @param vec Puntero al vector de dobles.
 * @param vec_size Tamaño actual del vector.
 * @param item_pos Posición del elemento a eliminar (0-indexado).
 * @return Puntero al vector resultante tras la eliminación.
 */
double* removeItem_double_vector(double* vec, uint8_t vec_size, uint8_t item_pos);

/**
 * @brief Elimina un elemento de un vector de estructuras Complex.
 * @param vec Puntero al vector de estructuras Complex.
 * @param vec_size Tamaño actual del vector.
 * @param item_pos Posición del elemento a eliminar (0-indexado).
 * @return Puntero al vector resultante tras la eliminación.
 */
struct Complex* removeItem_Complex_vector(struct Complex* vec, uint8_t vec_size, uint8_t item_pos);


//  RESIZE.

/**
 * @brief Redimensiona un vector de enteros.
 * @param vec Puntero al vector de enteros.
 * @param size Tamaño actual del vector.
 * @param new_size Nuevo tamaño deseado.
 * @return Puntero al vector redimensionado.
 */
int* resize_int_vector(int* vec, uint8_t size, uint8_t new_size);

/**
 * @brief Redimensiona un vector de flotantes.
 * @param vec Puntero al vector de flotantes.
 * @param size Tamaño actual del vector.
 * @param new_size Nuevo tamaño deseado.
 * @return Puntero al vector redimensionado.
 */
float* resize_float_vector(float* vec, uint8_t size, uint8_t new_size);

/**
 * @brief Redimensiona un vector de dobles.
 * @param vec Puntero al vector de dobles.
 * @param size Tamaño actual del vector.
 * @param new_size Nuevo tamaño deseado.
 * @return Puntero al vector redimensionado.
 */
double* resize_double_vector(double* vec, uint8_t size, uint8_t new_size);

/**
 * @brief Redimensiona un vector de estructuras Complex.
 * @param vec Puntero al vector de estructuras Complex.
 * @param size Tamaño actual del vector.
 * @param new_size Nuevo tamaño deseado.
 * @return Puntero al vector redimensionado.
 */
struct Complex* resize_Complex_vector(struct Complex* vec, uint8_t size, uint8_t new_size);

// CONCATENAR VECTORES.

/**
 * @brief Concatena dos vectores de enteros.
 * @param vec_left Puntero al primer vector de enteros.
 * @param left_size Tamaño del primer vector.
 * @param vec_right Puntero al segundo vector de enteros.
 * @param right_size Tamaño del segundo vector.
 * @return Puntero al vector resultante tras la concatenación.
 */
int* concat_int_vector(int* vec_left, uint8_t left_size, int* vec_right, uint8_t right_size);

/**
 * @brief Concatena dos vectores de flotantes.
 * @param vec_left Puntero al primer vector de flotantes.
 * @param left_size Tamaño del primer vector.
 * @param vec_right Puntero al segundo vector de flotantes.
 * @param right_size Tamaño del segundo vector.
 * @return Puntero al vector resultante tras la concatenación.
 */
float* concat_float_vector(float* vec_left, uint8_t left_size, float* vec_right, uint8_t right_size);

/**
 * @brief Concatena dos vectores de dobles.
 * @param vec_left Puntero al primer vector de dobles.
 * @param left_size Tamaño del primer vector.
 * @param vec_right Puntero al segundo vector de dobles.
 * @param right_size Tamaño del segundo vector.
 * @return Puntero al vector resultante tras la concatenación.
 */
double* concat_double_vector(double* vec_left, uint8_t left_size, double* vec_right, uint8_t right_size);

/**
 * @brief Concatena dos vectores de estructuras Complex.
 * @param vec_left Puntero al primer vector de estructuras Complex.
 * @param left_size Tamaño del primer vector.
 * @param vec_right Puntero al segundo vector de estructuras Complex.
 * @param right_size Tamaño del segundo vector.
 * @return Puntero al vector resultante tras la concatenación.
 */
struct Complex* concat_Complex_vector(struct Complex* vec_left, uint8_t left_size, struct Complex* vec_right, uint8_t right_size);
