#include<stdio.h>

struct Product {
    int product_id;
    char name[100];
    int price;
};

int main(){
    int NUM_PROD = 2;
    struct Product arr[100];
    struct Product *ptr;
    ptr = arr;
    for(int i = 0; i < NUM_PROD; i++){
        printf("enter product name: ");
        scanf(" %[^\n]", (ptr+i)->name);
        printf("enter product id: ");
        scanf(" %d", &((ptr+i)->product_id));
        printf("enter product price: ");
        scanf(" %d", &((ptr+i)->price));
    }
    for(int i = 0; i < NUM_PROD; i++){
        printf("\n\n product %d:\n", i+1);
        printf("name: %s\n", (ptr+i)->name);
        printf("id: %d\n", (ptr+i)->product_id);
        printf("price: %d\n", (ptr+i)->price);
    }
}
