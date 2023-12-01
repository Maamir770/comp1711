#include<stdio.h>
#include<stdlib.h>

typedef struct list
{
    int data;
    struct list* next_element;
}list;

int main()
{
    list first_node;
    first_node.data = 5;
    first_node.next_element = (list*)malloc(sizeof(struct list));
    //number of elements = sizeof(struct list) // 1 is byte allocated to each element
    //first_node.next_element = (list*)calloc(sizeof(struct list),1);

    printf("first node data = %d\n", first_node.data);
    printf("first node next element address = %p\n", first_node.next_element);
    printf("next element data = %d\n", first_node.next_element->data);
    //alternate way 
    printf("next element data = %d\n", (*(first_node.next_element)).data);

}