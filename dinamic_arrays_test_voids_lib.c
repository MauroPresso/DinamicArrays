/**
 * @file test_voids_lib.c
 * @brief Implementación de funciones de prueba para vectores dinámicos.
 *
 * Este archivo contiene la implementación de las funciones que realizan
 * pruebas de llenado, inserción, eliminación, redimensionamiento y concatenación
 * de vectores dinámicos para diferentes tipos de datos.
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include "dinamic_arrays_functions_library.h"
#include "dinamic_arrays_test_voids_lib.h"


// LLENAR_VECTOR.

void llenar_int_vector(int *vec, uint8_t cant)
{
    for (int i = 0; i < cant; i++)
    {
        vec[i] = rand() % 100;
    }
}

void llenar_float_vector(float *vec, uint8_t cant)
{
    for (int i = 0; i < cant; i++)
    {
        vec[i] = (rand() / (float) RAND_MAX);
    }
}


void llenar_double_vector(double *vec, uint8_t cant)
{
    for (int i = 0; i < cant; i++)
    {
        vec[i] = (rand() / (float) RAND_MAX);
    }
}

void llenar_Complex_vector(struct Complex *vec, uint8_t cant)
{
    for (int i = 0; i < cant; i++)
    {
        vec[i].real = (rand() / (float) RAND_MAX);
        vec[i].imag = (rand() / (float) RAND_MAX);
    }
}


// TESTING_INSERT_AND_REMOVE_ITEM.

void testing_insert_and_remove_Item_int(void)
{
    int* vi = (int*)malloc(10 * sizeof(int));
    // vector dinamico V
    llenar_int_vector(vi, 10);
    printf("\nVector V:\n");
    show_int_vector(vi, 10);
    
    // Inserting an item in vector V.
    vi = insertItem_int_vector(vi, 10, 7, 137);
    printf("\nVector V (with a new item):\n");
    show_int_vector(vi, 11);

    // Removing an item from vector V.
    vi = removeItem_int_vector(vi, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_int_vector(vi, 10);

    free(vi);
    vi = NULL;
}

void testing_insert_and_remove_Item_float(void)
{
    // Inserting an item in vector V.
    float* vof = (float*)malloc(10 * sizeof(float));
    llenar_float_vector(vof, 10);
    printf("\nVector V:\n");
    show_float_vector(vof, 10);
    float value_float;
    value_float = (rand() / (float) RAND_MAX);
    vof = insertItem_float_vector(vof, 10, 7,value_float);
    printf("\nVector V (with a new item):\n");
    show_float_vector(vof, 11);

    // Removing an item from vector V.
    vof = removeItem_float_vector(vof, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_float_vector(vof, 10);

    free(vof);
    vof = NULL;
}

void testing_insert_and_remove_Item_double(void)
{
    // Inserting an item in vector V.
    double* vod = (double*)malloc(10 * sizeof(double));
    llenar_double_vector(vod, 10);
    printf("\nVector V:\n");
    show_double_vector(vod, 10);
    double value_double;
    value_double = (rand() / (float) RAND_MAX);
    vod = insertItem_double_vector(vod, 10, 7, value_double);
    printf("\nVector V (with a new item):\n");
    show_double_vector(vod, 11);

    // Removing an item from vector V.
    vod = removeItem_double_vector(vod, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_double_vector(vod, 10);

    free(vod);
    vod = NULL;
}

void testing_insert_and_remove_Item_Complex(void)
{
    // Inserting an item in vector V.
    struct Complex* voc = (struct Complex*)malloc(10 * sizeof(struct Complex));
    llenar_Complex_vector(voc, 10);
    printf("\nVector V:\n");
    show_Complex_vector(voc, 10);
    struct Complex value_Complex;
    value_Complex.real = rand() / (float) RAND_MAX;
    value_Complex.imag = rand() / (float) RAND_MAX; 
    voc = insertItem_Complex_vector(voc, 10, 7, value_Complex);
    printf("\nVector V (with a new item):\n");
    show_Complex_vector(voc, 11);

    // Removing an item from vector V.
    voc = removeItem_Complex_vector(voc, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_Complex_vector(voc, 10);
    
    free(voc);
    voc = NULL;
}


// TESTING_RESIZE.

void testing_resize_int(void)
{
    int* vi = (int*)malloc(10 * sizeof(int));
    // vector dinamico V
    llenar_int_vector(vi, 10);
    printf("\nVector V:\n");
    show_int_vector(vi, 10);

    // Resizing vector V.
    vi = resize_int_vector(vi, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_int_vector(vi, 5);

    vi = resize_int_vector(vi, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    //llenar_int_vector(vi, 10);
    show_int_vector(vi, 10);

    free(vi);
    vi = NULL;
    
}

void testing_resize_float(void)
{
    // Resizing vector V.
    float* vfo = (float*)malloc(10 * sizeof(float));
    llenar_float_vector(vfo, 10);
    printf("\nVector V:\n");
    show_float_vector(vfo, 10);
    vfo = resize_float_vector(vfo, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_float_vector(vfo, 5);

    vfo = resize_float_vector(vfo, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    //llenar_float_vector(vfo, 10);
    show_float_vector(vfo, 10);
    
    free(vfo);
    vfo = NULL;
}

void testing_resize_double(void)
{
    // Resizing vector V.
    double* vdo = (double*)malloc(10 * sizeof(double));
    llenar_double_vector(vdo, 10);
    printf("\nVector V:\n");
    show_double_vector(vdo, 10);
    vdo = resize_double_vector(vdo, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_double_vector(vdo, 5);

    vdo = resize_double_vector(vdo, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    //llenar_double_vector(vdo, 10);
    show_double_vector(vdo, 10);

    free(vdo);
    vdo = NULL;
}

void testing_resize_Complex(void)
{
    // Resizing vector V.
    struct Complex* vco = (struct Complex*)malloc(10 * sizeof(struct Complex));
    llenar_Complex_vector(vco, 10);
    printf("\nVector V:\n");
    show_Complex_vector(vco, 10);
    vco = resize_Complex_vector(vco, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_Complex_vector(vco, 5);
    vco = resize_Complex_vector(vco, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    //llenar_Complex_vector(vco, 10);
    show_Complex_vector(vco, 10);
    
    free(vco);
    vco = NULL;
}


// TESTING_CONCATENAR

void testing_concatenar_int(void)
{
    int* vi = (int*)malloc(10 * sizeof(int));
    int* ui = (int*)malloc(5 * sizeof(int));
    // vector dinamico V
    llenar_int_vector(vi, 10);
    printf("\nVector V:\n");
    show_int_vector(vi, 10);
    // vector dinamico U
    llenar_int_vector(ui, 5);
    printf("\nVector U:\n");
    show_int_vector(ui, 5);

    // Concatenar
    int* cadi = concat_int_vector(vi, 10, ui, 5);
    printf("\nVector concatenado:\n");
    show_int_vector(cadi, 15);

    free(vi);
    free(ui);
    free(cadi);

    vi = NULL;
    ui = NULL;
    cadi = NULL;
}

void testing_concatenar_float(void)
{
    // Chaining vectors
    float* vf = (float*)malloc(10 * sizeof(float));
    float* uf = (float*)malloc(5 * sizeof(float));

    // vector dinamico V
    llenar_float_vector(vf, 10);
    printf("\nVector V:\n");
    show_float_vector(vf, 10);

    // vector dinamico U
    llenar_float_vector(uf, 5);
    printf("\nVector U:\n");
    show_float_vector(uf, 5);

    // Concatenar
    float* cadf = concat_float_vector(vf, 10, uf, 5);
    printf("\nVector concatenado:\n");
    show_float_vector(cadf, 15);

    free(vf);
    free(uf);
    free(cadf);

    vf = NULL;
    uf = NULL;
    cadf = NULL;
}

void testing_concatenar_double(void)
{
    // Chaining vectors
    double* vd = (double*)malloc(10 * sizeof(double));
    double* ud = (double*)malloc(5 * sizeof(double));

    // vector dinamico V
    llenar_double_vector(vd, 10);
    printf("\nVector V:\n");
    show_double_vector(vd, 10);

    // vector dinamico U
    llenar_double_vector(ud, 5);
    printf("\nVector U:\n");
    show_double_vector(ud, 5);

    // Concatenar
    double* cadd = concat_double_vector(vd, 10, ud, 5);
    printf("\nVector concatenado:\n");
    show_double_vector(cadd, 15);
    
    free(vd);
    free(ud);
    free(cadd);
    
    vd = NULL;
    ud = NULL;
    cadd = NULL;
}

void testing_concatenar_Complex(void)
{
    // Chaining vectors
    struct Complex* vc = (struct Complex*)malloc(10 * sizeof(struct Complex));
    struct Complex* uc = (struct Complex*)malloc(5 * sizeof(struct Complex));
    // vector dinamico V
    llenar_Complex_vector(vc, 10);
    printf("\nVector V:\n");
    show_Complex_vector(vc, 10);
    // vector dinamico U
    llenar_Complex_vector(uc, 5);
    printf("\nVector U:\n");
    show_Complex_vector(uc, 5);
    // Concatenar
    struct Complex* cadc = concat_Complex_vector(vc, 10, uc, 5);
    printf("\nVector concatenado:\n");
    show_Complex_vector(cadc, 15);
    
    free(vc);
    free(uc);
    free(cadc);
    
    vc = NULL;
    uc = NULL;
    cadc = NULL;
}
