# Doble Linked Lists 

This is a basic implementation of a double linked list in C programming language. Double linked lists are data structures that consist of a series of elements, each containing a pointer to the next and the previous element in the sequence. This README provides an overview of the functionalities and usage of the double linked list implementation.

### Struct to use

    /**
    * struct dlistint_s - doubly linked list
    * @n: integer
    * @prev: points to the previous node
    * @next: points to the next node
    *
    * Description: doubly linked list node structure
    * 
    */
    typedef struct dlistint_s
    {
        int n;
        struct dlistint_s *prev;
        struct dlistint_s *next;
    } dlistint_t;

## Functions

- Prints all the elements of a **dlistint_t** list.
~~~
size_t print_dlistint(const dlistint_t *h); 
~~~
- Returns the number of elements in a linked __dlistint_t__ list.
~~~
size_t dlistint_len(const dlistint_t *h);
~~~
-  Adds a new node at the beginning of a **dlistint_t** list.
~~~
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
~~~
-  Adds a new node at the end of a **dlistint_t** list.
~~~
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
~~~
-  Frees a **dlistint_t** list.
~~~
void free_dlistint(dlistint_t *head);
~~~
- Returns the nth node of a **dlistint_t** linked list.
~~~
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
~~~
- Returns the sum of all the data (n) of a **dlistint_t** linked list.
~~~
int sum_dlistint(dlistint_t *head);
~~~
- Function that inserts a new node at a given position.
~~~
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
~~~
- Deletes the node at index index of a **dlistint_t** linked list.
~~~
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
~~~
