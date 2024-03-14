#include <stdio.h>
#include <stdlib.h>

struct phonebook
{
    /* Data Member */
    char *name;
    char *phone;
};
void printCustomers(struct phonebook* customersArray);
struct phonebook *fillCustomers(char *_names[], char *_phones[], int _length);
int main()
{
    // Init one Customer
    struct phonebook cst1 = {"Ahmed", "01063806110"};
    
    char *names[] = {"mohamed", "mahmoud", "nader", "nada", "mona", "lamia"};
    char *phones[] = {"0112736009", "0091999928", "01223000948", "01112988374", "0158383767", "010847-029"};
    int length = (sizeof(names) / sizeof(names[0]));
    // Fill customers phonebook
    struct phonebook *customers = fillCustomers(names, phones, length);
    printCustomers(customers);
    // Free the allocated memory before program termination
    free(customers);
}
struct phonebook *fillCustomers(char *_names[], char *_phones[], int _length)
{
    // Allocate memory for the array inside the function.
    struct phonebook *_customers = malloc(_length * sizeof(struct phonebook));

    for (int i = 0; i < _length; i++)
    {
        _customers[i].name = _names[i];
        _customers[i].phone = _phones[i];
    }
    return _customers;
}

void printCustomers(struct phonebook* customersArray)
{
    int length = sizeof(customersArray) * sizeof(customersArray[0]);
    for (int i=0; i<length;i++)
    {
        printf("Name: %s, Mobile number: %s\n", customersArray[i].name, customersArray[i].phone);
    }
}