#include <iostream>
#include <stdio.h>

using namespace std;

struct nama_struct {
    int data;
    nama_struct *next;
};

nama_struct *node, *head = NULL, *tail = NULL;

main () {
    bool exit = false;
    int chooseMenu;
    do{
        printf("MENU\n1. Tambah Belakang\n2. Lihat\n3. Exit\nPILIH : "); cin >> chooseMenu;
        switch(chooseMenu){
            case 1 :
                node = new nama_struct;
                printf("Input Data : "); cin >> node->data;
                if(tail == NULL){
                    head = node;
                    tail = node;
                }else{
                    tail->next = node;
                    tail = node;
                }
                break;
            case 2 :
                node = head;
                printf("\nDATA\n");
                while(node != NULL){
                    printf("Data : %d <-prev, next-> ",node->data);
                    node = node->next;
                }
                if(node == NULL){
                    printf(" NULL\n");
                }
                break;
            case 3 :
                exit = true;
                break;
        }
    }while(exit == false);
}