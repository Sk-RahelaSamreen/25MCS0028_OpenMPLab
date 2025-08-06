#include <stdio.h>
#include <omp.h>

void fn_ret_tid_helloworld_srl() {
    printf("Hello World Printed by Thread Id : %d\n", omp_get_thread_num());
}

void fn_ret_tid_helloworld_prl() {
#pragma omp parallel
    printf("Hello World Printed by Thread Id : %d\n", omp_get_thread_num());
}
