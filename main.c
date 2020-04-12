#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct Node{
	char *name;
	struct Node *next;
	struct Node *prev;
}Node;

Node* push(Node *last){
    Node *a = (Node*)malloc(sizeof(Node));
    char element[10];

    scanf("%s", element);

    a->name = strdup(element);
    a->next = NULL;


    return a;
}

Node *getLast (Node *last) {
    Node *p;
    Node *a = (Node*)malloc(sizeof(Node));
    char element[10];


    if(last!=NULL){
        printf("Введите элемент: ");
        scanf("%s", element);

        p = last->next;
        last->next = a;
        a->name = strdup(element);
        a->next = p;

        return a;
    }
    else{
        printf("\nОшибочка\n");
    }

    return a;


}

Node* popBack(Node *last, Node *start){
    Node *temp;
    temp = start;

    if(last!=NULL){
        while(temp->next != last){
        temp = temp->next;
        }
        temp->next = last->next;
        free(last);
        printf("\nУдалено\n");

    }
    else{
        printf("\nОшибочка!\n");
    }
}

void display(Node *start){
    Node *a = start;
    for ( ; a != NULL; a=a->next){
        printf("%s, ", a->name);
    }
}


Node* deleteList(Node* start){
    Node* temp, *tmp;
    temp = start;

    while(temp!=NULL){
        tmp = temp->next;
        free(temp);
        temp = tmp;
    }
    start = NULL;
}



Node* element_searching(Node *start, char *name){
    Node* temp;
    temp = start;

    for( ; temp!=NULL; temp=temp->next){
        if(strcmp(temp->name, name) == 0){
            return temp;
            break;
        }
        temp = temp->next;
    }
    return NULL;
}


int main(){
    setlocale(LC_ALL, "");

    int n, count=0;
    Node *start = NULL;
    Node *last = NULL;
    Node *a = NULL;
    char elements[20];
    Node* temp = NULL;


    while(1){
        printf("\n");
        printf("1)Создать первый элемент односвязного списка\n");
        printf("2)Добавить элемент в конец односвязного списка\n");
        printf("3)Удалить элемент с конца односвязного списка\n");
        printf("4)Просмотреть односвязный список\n");
        printf("5)Удалить весь односвязный список\n");
        printf("6)Выполнить последовательный поиск заданного элемента в односвязном списке\n");
        printf("7)Выйти из программы\n");
        printf("\n");

        printf("Введите нужную команду: \n");

        scanf("%d", &n);


        switch(n){
        case 1:
            printf("Введите элемент: ");

            a = push(last);
            if (count>=1){
                last = a;
                count++;
                printf("Сделано! \n");
            }
            else {
                start = a;
                last = a;
                count++;
                printf("Сделано! \n");
            }
            break;


        case 2:

            a = getLast(last);
            last = a;
            printf("Сделано! \n");
            break;

        case 3:
            a = popBack(last, start);
            printf("Сделано! \n");
            break;


        case 4:
            if(start -> name != NULL){
                display(start);
            }
            printf("Сделано! \n");
            break;


        case 5:
            a = deleteList(start);
            last = NULL;
            printf("Сделано! \n");
            break;


        case 6:


            printf("Введите элемент:\n ");
            scanf("%s", elements);
            temp = element_searching(start, elements);
            if(temp!=NULL){
                printf("%s\n", temp->name);
            }
            else{
                printf("Элемент не найден:(");
            }
            break;



        case 7:
            printf("До свидания!");
            break;


    }
    }
    return 0;

}
