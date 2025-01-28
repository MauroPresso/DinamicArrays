#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include "dinamic_arrays_functions_library.h"
#include "dinamic_arrays_test_voids_lib.h"

int main()
{
    srand(time(NULL));
    
    // TESTING DE LAS FUNCIONES DE LA BIBLIOTECA
    printf("\n\n\nTESTING_INSERT_AND_REMOVE:");
    printf("\n\nINT:\n");
    testing_insert_and_remove_Item_int();
    printf("\n\nFLOAT:\n");
    testing_insert_and_remove_Item_float();
    printf("\n\nDOUBLE:\n");
    testing_insert_and_remove_Item_double();
    printf("\n\nCOMPLEX:\n");
    testing_insert_and_remove_Item_Complex();
    
    printf("\n\n\nTESTING_RESIZE:");
    printf("\n\nINT:\n");
    testing_resize_int();
    printf("\n\nFLOAT:\n");
    testing_resize_float();
    printf("\n\nDOUBLE:\n");
    testing_resize_double();
    printf("\n\nCOMPLEX:\n");
    testing_resize_Complex();
    
    printf("\n\n\nTESTING_CONCATENAR:");
    printf("\n\nINT:\n");
    testing_concatenar_int();
    printf("\n\nFLOAT:\n");
    testing_concatenar_float();
    printf("\n\nDOUBLE:\n");
    testing_concatenar_double();
    printf("\n\nCOMPLEX:\n");
    testing_concatenar_Complex();
    
    // FIN DEL PROGRAMA
    return 0;
}