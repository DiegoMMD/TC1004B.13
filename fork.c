#include <stdio.h>
#include <unistd.h>


int main(){// fork lo que hace es estar creabdo el clon y te regresa un un numer en el pid
    int pid = fork(); //un identificador pid identificador de su proceso hijo.
    if( pid == 0){
        printf("soy el proceso hijo; pid = %d\n", pid); //aumenta el id
    }else {
        printf("soy el proceso padre; pid = %d\n", pid);
    }
    //}
    return 0;
  

}
