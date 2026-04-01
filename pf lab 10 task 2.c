#include<stdio.h>
#include<string.h>

int main(){
    char names[10][50], temp[50];
    int i, j;

    printf("Enter 10 names:");

    for(i = 0; i < 10; i++){
        gets(names[i]);
    }

    for(i = 0; i < 10; i++){
        for(j = i + 1; j < 10; j++){
            if(strcmp(names[i], names[j]) > 0){
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }

    for(i = 0; i < 10; i++){
        printf("%s", names[i]);
    }

    return 0;
}