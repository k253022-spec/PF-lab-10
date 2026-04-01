#include<stdio.h>
#include<string.h>

int main(){
    char email[100], domain[100];
    char *pos;

    printf("Enter email:");
    gets(email);

    pos = strchr(email, '@');

    if(pos){
        strcpy(domain, pos + 1);
        printf("Domain: %s", domain);
    }
    else{
        printf("Invalid email");
    }

    return 0;
}