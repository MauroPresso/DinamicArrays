#include "dinamic_arrays_lib.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <time.h>

/*void llenar_int_vector(int *vec, uint8_t cant);

void llenar_float_vector(float *vec, uint8_t cant);*/

void llenar_double_vector(double *vec, uint8_t cant);

/*void llenar_Complex_vector(struct Complex *vec, uint8_t cant);*/

int main()
{
    srand(time(NULL));
    /*
    // VECTORES ENTEROS
    printf("\n\n\nVECTORES ENTEROS:");

    int* vi = (int*)malloc(10 * sizeof(int));
    if (vi == NULL) {
        fprintf(stderr, "Error al asignar memoria para vi\n");
        return 1;
    }
    int* ui = (int*)malloc(5 * sizeof(int));
    if (ui == NULL) {
        fprintf(stderr, "Error al asignar memoria para ui\n");
        free(vi);
        return 1;
    }

    // vector dinamico V
    llenar_int_vector(vi, 10);
    printf("\nVector V:\n");
    show_int_vector(vi, 10);

    // vector dinamico U
    llenar_int_vector(ui, 5);
    printf("\nVector U:\n");
    show_int_vector(ui, 5);

    // Concatenar
    int *cadi = concat_int_vector(vi, 10, ui, 5);
    if (cadi == NULL) {
        fprintf(stderr, "Error al concatenar vectores\n");
        free(vi);
        free(ui);
        return 1;
    }
    printf("\nVector concatenado:\n");
    show_int_vector(cadi, 15);

    // Resizing vector V.
    vi = resize_int_vector(vi, 10, 5);
    if (vi == NULL) {
        fprintf(stderr, "Error al redimensionar vi\n");
        free(ui);
        free(cadi);
        return 1;
    }
    printf("\nVector V resized (new_size < old_size):\n");
    show_int_vector(vi, 5);

    vi = resize_int_vector(vi, 5, 10);
    if (vi == NULL) {
        fprintf(stderr, "Error al redimensionar vi\n");
        free(ui);
        free(cadi);
        return 1;
    }
    printf("\nVector V resized (new_size > old_size):\n");
    llenar_int_vector(vi, 10);
    show_int_vector(vi, 10);

    // Inserting an item in vector V.
    vi = insertItem_int_vector(vi, 10, 7, 137);
    if (vi == NULL) {
        fprintf(stderr, "Error al insertar elemento en vi\n");
        free(ui);
        free(cadi);
        return 1;
    }
    printf("\nVector V (with a new item):\n");
    show_int_vector(vi, 11);

    // Removing an item from vector V.
    vi = removeItem_int_vector(vi, 11, 7);
    if (vi == NULL) {
        fprintf(stderr, "Error al eliminar elemento de vi\n");
        free(ui);
        free(cadi);
        return 1;
    }
    printf("\nVector V (without an old item):\n");
    show_int_vector(vi, 10);

    free(vi);
    free(ui);
    free(cadi);

    vi = NULL;
    ui = NULL;
    cadi = NULL;
    

    // VECTORES FLOTANTES
    printf("\n\n\nVECTORES FLOTANTES:");

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

    // Resizing vector V.
    vf = resize_float_vector(vf, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_float_vector(vf, 5);

    vf = resize_float_vector(vf, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    llenar_float_vector(vf, 10);
    show_float_vector(vf, 10);

    // Inserting an item in vector V.
    vf = insertItem_float_vector(vf, 10, 7, 137.9876);
    printf("\nVector V (with a new item):\n");
    show_float_vector(vf, 11);

    // Removing an item from vector V.
    vf = removeItem_float_vector(vf, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_float_vector(vf, 10);

    free(vf);
    free(uf);
    free(cadf);

    vf = NULL;
    uf = NULL;
    cadf = NULL;

    */
    // VECTORES DE TIPO DOUBLE
    printf("\n\n\nVECTORES DE TIPO DOUBLE:");

    // Inserting an item in vector V.
    double* vod = (double*)malloc(10 * sizeof(double));
    llenar_double_vector(vod, 10);
    printf("\nVector V:\n");
    show_double_vector(vod, 10);
    double value;
    value = (rand() / (float) RAND_MAX);
    vod = insertItem_double_vector(vod, 10, 7, value);
    printf("\nVector V (with a new item):\n");
    show_double_vector(vod, 11);

    // Removing an item from vector V.
    vod = removeItem_double_vector(vod, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_double_vector(vod, 10);

    free(vod);
    vod = NULL;
    

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
    
    /*
    // VECTORES COMPLEJOS
    printf("\n\n\nVECTORES COMPLEJOS:");
    

    // Inserting an item in vector V.
    struct Complex* voc = (struct Complex*)malloc(10 * sizeof(struct Complex));
    llenar_Complex_vector(voc, 10);
    printf("\nVector V:\n");
    show_Complex_vector(voc, 10);
    //printf("\nMaria paso por aqui\n");
    struct Complex value;
    value.real = rand() / (float) RAND_MAX;
    value.imag = rand() / (float) RAND_MAX; 
    voc = insertItem_Complex_vector(voc, 10, 7, value);
    printf("\nVector V (with a new item):\n");
    show_Complex_vector(voc, 11);
    //printf("\nMaria paso por aqui\n");
    
    // Removing an item from vector V.
    voc = removeItem_Complex_vector(voc, 11, 7);
    printf("\nVector V (without an old item):\n");
    show_Complex_vector(voc, 10);
    //printf("\nMaria paso por aqui\n");
    free(voc);
    //printf("\nMaria paso por aqui\n");
    voc = NULL;
    //printf("\nMaria paso por aqui\n");
    
    // Resizing vector V.
    struct Complex* vco = (struct Complex*)malloc(10 * sizeof(struct Complex));
    llenar_Complex_vector(vco, 10);
    printf("\nVector V:\n");
    show_Complex_vector(vco, 10);
    //printf("\nMaria paso por aqui\n");
    vco = resize_Complex_vector(vco, 10, 5);
    printf("\nVector V resized (new_size < old_size):\n");
    show_Complex_vector(vco, 5);
    //printf("\nMaria paso por aqui\n");
    vco = resize_Complex_vector(vco, 5, 10);
    printf("\nVector V resized (new_size > old_size):\n");
    //llenar_Complex_vector(vco, 10);
    show_Complex_vector(vco, 10);
    //printf("\nMaria paso por aqui\n");
    free(vco);
    //printf("\nMaria paso por aqui\n");
    vco = NULL;

    //("\nMaria paso por aqui\n");
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
    struct Complex* cadc;
    cadc = concat_Complex_vector(vc, 10, uc, 5);
    printf("\nVector concatenado:\n");
    show_Complex_vector(cadc, 15);
    //printf("\nMaria paso por aqui\n");
    free(vc);
    free(uc);
    free(cadc);
    //printf("\nMaria paso por aqui\n");
    vc = NULL;
    uc = NULL;
    cadc = NULL;
    //printf("\nMaria paso por aqui\n");
    */
    // FIN DEL PROGRAMA
    return 0;
}

/*void llenar_int_vector(int *vec, uint8_t cant)
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
        vec[i] = (rand() / (float) RAND_MAX)*(1.0);
    }
}
*/
void llenar_double_vector(double *vec, uint8_t cant)
{
    for (int i = 0; i < cant; i++)
    {
        vec[i] = (rand() / (float) RAND_MAX);
    }
}
/*
void llenar_Complex_vector(struct Complex *vec, uint8_t cant)
{
    for (int i = 0; i < cant; i++)
    {
        vec[i].real = (rand() / (float) RAND_MAX);
        vec[i].imag = (rand() / (float) RAND_MAX);
    }
}
*/