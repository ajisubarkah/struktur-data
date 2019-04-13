# Linked List

Jenis Linked List :

- [Single Linked List](#single-linked-list)
- [Double Linked List](#double-linked-list)

Deklarasi node :

```cpp
node = new nama_node;
```

## Single Linked List

- Deklarasi Struct :

```cpp
struct nama_struct {
    type_data nama_variable;
    nama_struct *nama_pointer_next;
};
```

- Tambah Depan

![screen](https://media.giphy.com/media/PO6zB5HjfoGY7eQodV/giphy.gif)

Source Code :

```cpp
if(head == NULL){
    head = node;
    tail = node;
}else{
    node->next = head;
    head = node;
}
```

- Tambah Belakang

![screen](https://media.giphy.com/media/3MafRyY4FweJBjrMtq/giphy.gif)

Source Code :

```cpp
if(tail == NULL){
    head = node;
    tail = node;
}else{
    tail->next = node;
    tail = node;
}
```

- Tampilkan

![screen](https://media.giphy.com/media/3JXI6HyAHmHbW6YnLM/giphy.gif)

Source Code :

```cpp
node = head;
while( node != NULL ) {
    printf("Data : %type_data", node->variable_data);
    node = node->next;
}
```

## Double Linked List

- Deklarasi Struct :

```cpp
struct nama_struct {
    type_data nama_variable;
    nama_struct *nama_pointer_next;
    nama_struct *nama_pointer_prev;
};
```

- Tambah Depan

Source Code :

```cpp
if(head == NULL){
    head = node;
    tail = node;
}else{
    node->next = head;
    head->prev = node;
    head = node;
}
```

- Tambah Belakang

![screen](https://media.giphy.com/media/1xkOTx6VaNScyJllr5/giphy.gif)

Source Code :

```cpp
if(tail == NULL){
    head = node;
    tail = node;
}else{
    tail->next = node;
    node->prev = node;
    tail = node;
}
```

- Tampilkan

Source Code :

```cpp
node = head;
while( node != NULL ) {
    printf("Data : %type_data", node->variable_data);
    node = node->next;
}
```
