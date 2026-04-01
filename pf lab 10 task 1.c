#include<stdio.h>
#include<string.h>

int main(){
    char feedback[200], temp[200];

    printf("Enter feedback:");
    gets(feedback);

    printf("Total characters:%d", strlen(feedback));

    if(strstr(feedback, "good"))
        printf("Word good found");

    if(strstr(feedback, "bad"))
        printf("Word bad found");

    char *pos = strstr(feedback, "bad");

    if(pos){
        int index = pos - feedback;

        strncpy(temp, feedback,index);
        temp[index] = '\0';

        strcat(temp, "not good");
        strcat(temp, feedback + index + 3);

        strcpy(feedback, temp);
    }

    printf("Updated feedback: %s", feedback);

    return 0;
}