/**
 * @file test_voids_lib.h
 * @brief Declaraciones de funciones para procedimientos de testing de vectores dinámicos.
 *
 * Este archivo contiene las funciones de prueba para operaciones como
 * llenar, insertar, eliminar, redimensionar y concatenar vectores dinámicos
 * de diferentes tipos de datos (int, float, double y Complex).
 */

#pragma once
#include <stdint.h>

/**
 * @brief Llena un vector dinámico con valores de prueba.
 *
 * @param vec Puntero al vector a llenar.
 * @param cant Cantidad de elementos a llenar en el vector.
 */
void llenar_int_vector(int *vec, uint8_t cant);

/**
 * @brief Llena un vector dinámico con valores de prueba.
 *
 * @param vec Puntero al vector a llenar.
 * @param cant Cantidad de elementos a llenar en el vector.
 */
void llenar_float_vector(float *vec, uint8_t cant);

/**
 * @brief Llena un vector dinámico con valores de prueba.
 *
 * @param vec Puntero al vector a llenar.
 * @param cant Cantidad de elementos a llenar en el vector.
 */
void llenar_double_vector(double *vec, uint8_t cant);

/**
 * @brief Llena un vector dinámico de números complejos con valores de prueba.
 *
 * @param vec Puntero al vector de números complejos a llenar.
 * @param cant Cantidad de elementos a llenar en el vector.
 */
void llenar_Complex_vector(struct Complex *vec, uint8_t cant);

/**
 * @brief Prueba la inserción y eliminación de elementos en un vector de tipo int.
 */
void testing_insert_and_remove_Item_int(void);

/**
 * @brief Prueba la inserción y eliminación de elementos en un vector de tipo float.
 */
void testing_insert_and_remove_Item_float(void);

/**
 * @brief Prueba la inserción y eliminación de elementos en un vector de tipo double.
 */
void testing_insert_and_remove_Item_double(void);

/**
 * @brief Prueba la inserción y eliminación de elementos en un vector de números complejos.
 */
void testing_insert_and_remove_Item_Complex(void);

/**
 * @brief Prueba la redimensión de un vector de tipo int.
 */
void testing_resize_int(void);

/**
 * @brief Prueba la redimensión de un vector de tipo float.
 */
void testing_resize_float(void);

/**
 * @brief Prueba la redimensión de un vector de tipo double.
 */
void testing_resize_double(void);

/**
 * @brief Prueba la redimensión de un vector de números complejos.
 */
void testing_resize_Complex(void);

/**
 * @brief Prueba la concatenación de dos vectores de tipo int.
 */
void testing_concatenar_int(void);

/**
 * @brief Prueba la concatenación de dos vectores de tipo float.
 */
void testing_concatenar_float(void);

/**
 * @brief Prueba la concatenación de dos vectores de tipo double.
 */
void testing_concatenar_double(void);

/**
 * @brief Prueba la concatenación de dos vectores de números complejos.
 */
void testing_concatenar_Complex(void);
