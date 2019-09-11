// C program to reverse a string using stack 
#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 
#include <limits.h> 
  
// A structure to represent a stack 
struct Stack 
{ 
    int top; 
    unsigned capacity; 
    char* array; 
}; 
  
// function to create a stack of given  
// capacity. It initializes size of stack as 0 
struct Stack* createStack(unsigned capacity) 
{ 
    struct Stack* stack = (struct Stack*) malloc(sizeof(struct Stack)); 
    stack->capacity = capacity; 
    stack->top = -1; 
    stack->array = (char*) malloc(stack->capacity * sizeof(char)); 
    return stack; 
} 
  
// Stack is full when top is equal to the last index 
int isFull(struct Stack* stack) 
{ return stack->top == stack->capacity - 1; } 
  
// Stack is empty when top is equal to -1 
int isEmpty(struct Stack* stack) 
{ return stack->top == -1; } 
  
// Function to add an item to stack.  
// It increases top by 1 
void push(struct Stack* stack, char item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
} 
  
// Function to remove an item from stack.  
// It decreases top by 1 
char pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 
  
// A stack based function to reverse a string 
void reverse(char str[]) 
{ 
    // Create a stack of capacity  
    //equal to length of string 
    int n = strlen(str); 
    struct Stack* stack = createStack(n); 
  
    // Push all characters of string to stack 
    int i; 
    for (i = 0; i < n; i++) 
        push(stack, str[i]); 
  
    // Pop all characters of string and  
    // put them back to str 
    for (i = 0; i < n; i++) 
        str[i] = pop(stack); 
} 
  
// Driver program to test above functions 
int main() 
{ 
	int num;
	int num1;
	char str[50];
	char str2[50];
    //char str[] = "GeeksQuiz"; 
    puts("1. Inicializar la estructura cola:");
    puts("2. Inicializar la estructura pila:");
	
	
	printf( "Introduce un numero: " );
	scanf ( "%i", &num );
    while(1){
    
    puts("Ingrese la cadena:");
	scanf( "%s", str );
	if(num==1){
	printf("La cola es: %s \n", str); 
    	printf("3. Insertar dato \n"); 
    	printf("4. Extraer dato \n");
    	printf("5. Cambiar estructura de los datos \n");
    	printf("6. Imprimir lista \n");
    	while(-1){
    	printf("Introduce un numero: ");
    		scanf ( "%i", &num1 );
    			if(num1==3)
    			{
    				    puts("Ingrese dato:");
						scanf( "%s", str2 );
						strcat( str, str2 );
						printf("La cola es: %s \n", str); 
    			}
    			else if(num1==4){
    			printf("El resultado es: %s \n", str2); 
				}
    			else if(num1==5)break;
    			else if(num1==6)printf("La cola es: %s \n", str); 
			}
	}
	
	else if(num==2){
    reverse(str); 
    printf("La pila es: %s \n", str); 
    	printf("3. Insertar dato \n"); 
    	printf("4. Extraer dato \n");
    	printf("5. Cambiar estructura de los datos \n");
    	printf("6. Imprimir lista \n");
    	while(-1){
    	
    	    	printf("Introduce un numero: ");
    		scanf ( "%i", &num1 );
    			if(num1==3)
    			{
    				    puts("Ingrese dato:");
						scanf( "%s", str2 );
						strcat( str, str2 );
						printf("La cola es: %s \n", str); 
    			}
    			else if(num1==4){
				printf("El resultado es: %s \n", str2); 
				}
    			else if(num1==5)break;
    			else if(num1==6)printf("La pila es: \n", str); 
    			}
    }
    }
    
    
    
	return 0; 
} 
