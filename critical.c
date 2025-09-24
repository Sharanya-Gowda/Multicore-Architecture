#include <omp.h>
#include <stdio.h>

int main() {
    int x = 0;

    #pragma omp parallel shared(x)
    {
        #pragma omp critical
        {
            x = x + 1;
            //printf("x = %d (thread %d)\n", x, omp_get_thread_num());
        }
    }

    printf("Final x = %d\n", x);

    return 0;
}

