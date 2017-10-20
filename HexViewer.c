#include <stdio.h>

void form(FILE *fp, int index, int num);

int main(){
    FILE *fp;
    char filename[1000];
    int num, data, index;
    
    printf("Put the filename: ");
    scanf("%s", filename);
    fp = fopen(filename,"rb");
    
    if(fp!=NULL){
        printf("Success to open \"%s\"!!!\n", filename);
        printf("How many characters would you like to see in a line??? ");
        scanf("%d", &num);
        index=0;
        printf("00000 ");
        while((data = fgetc(fp)) != EOF){
            printf("%02x ", data);
            index++;
            if(index%num==0){
                form(fp,num,num);
                printf("%05x ", index);
            }
        }
        index%=num;
        form(fp, index, num);
        return 0;
    }
    else{
        printf("Fail to open \"%s\"!!!\n", filename);
        return -1;
    }
}

void itoa(int data){
    if(data>=33&&data<127)
        printf("%c", data);
    else
        printf(".");
}

void form(FILE *fp, int index, int num){
    if(num!=index){
        for(int i=0;i<num-index;i++)
            printf("   ");
    }
    printf(" |");
    fseek(fp,-index,SEEK_CUR);
    for(int i=0;i<index;i++){
        itoa(fgetc(fp));
    }
    if(num!=index){
        for(int i=0;i<num-index;i++)
            printf(" ");
    }
    printf("|\n");
}
