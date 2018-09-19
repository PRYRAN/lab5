#include <stdio.h>
#include <pthread.h>


void * fun(void *input){
    printf("I am thread#:%d\n",*(int*)input);
    pthread_join(input, NULL);
}
int main() {
    int n;
    scanf("%d",&n);
    for( int i = 0; i <n; i++ ){
        pthread_t thread_id;
        pthread_create(&thread_id, NULL, fun, (void *) &thread_id);
        printf("Thread#:%d has been created\n",*(int *)thread_id);
    }
    return 0;
}
