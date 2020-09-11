#include<stdio.h>
#include<stdlib.h>
#include<string.h>



typedef struct D{

char c;
char x;
char o;
struct D *next;
}D;


void even(int *input, D *k);
void odd(D *p);
void algorithm(D *p);


int temp[11] = {0,0,0,0,0,0,0,0,0,0}; // used for putting 'X' on the screen
int t[11] = {20,20,20,20,20,20,20,20,20,20,20}; // used for putting 'O' on the screen
int a = 1;                            // looping variable 
int got[11] = {0,0,0,0,0,0,0,0,0,0}; // used for checking if a number has been typed twice
int s[11] = {'-','-','-','-','-','-','-','-','-','-',};

int one = 1;
int two = 2;
char c = '-';
char x = 'X';
char o = 'O';
int i=1;

void board(D *ptr){

int z=1;
D *i = ptr;

printf("Board\n\n");

for(;i!=NULL;i=i->next){

printf("%c",i->c);

if(z%3==0){

printf("\n");
}

if(z%3!=0){

printf("%c",'|');
}
++z;
    }
}



void even(int *input, D *k){


int z = 1;

while(a<10){

printf("\n");
printf("Enter a number from 1-9\n");
printf("Player %d (%c): ",two,o);
scanf("%d",input);
printf("\n");


while(got[*input]==*input){

printf("That position is taken, Please try again\n");
printf("\n");
printf("\n");
printf("Enter a number from 1-9\n");
printf("Player %d (%c): ",two,o);
scanf("%d",input);
printf("\n\n");

}

while(*input<1 || *input>9){


printf("Wrong input. Please Enter a number from 1-9\n");
printf("\n\n");
printf("Enter a number from 1-9\n");
printf("Player %d (%c): ",two,o);
scanf("%d",input);
printf("\n\n");

}

got[*input] = *input;
s[*input] = o;


int j=1;

D *d = k;

for(;d!=NULL;d=d->next){

t[*input] = *input;


if(temp[i]!=0){

d->x =x;
printf("%c\t",d->x);
}

if(t[i]!=20){

d->o = o;
printf("%c\t",d->o);
}


if((t[i]==20)&&(temp[i]==0)){

printf("%c\t",d->c);
}

if(z%3==0){

printf("\n");
  }

++i;
++z;

}


if(a>=5){

algorithm(k);
}

++a;

i=1;
z=1;

odd(k);
    }
}

void odd(D *p){


while(a<10){


int z=1;

int input;

printf("\n");
printf("Enter a number from 1-9\n");
printf("Player %d (%c): ",one,x);
scanf("%d",&input);
printf("\n");

while(got[input]==input){

printf("That position is taken,Please try again\n\n");
printf("Enter a number from 1-9\n");
printf("Player %d (%c): ",one,x);
scanf("%d",&input);
printf("\n\n");

}

while(input<1 || input>9){


printf("Wrong input. Please Enter a number from 1-9\n");
printf("\n\n");
printf("Enter a number from 1-9\n");
printf("Player %d (%c): ",one,x);
scanf("%d",&input);
printf("\n\n");

}

got[input] = input;
s[input] = x;

D *j = p;



j = p;


for(;j!=NULL;j=j->next){

temp[input] = input;

if(t[i]!=20){

j->o = o;
printf("%c\t",j->o);
}


if(temp[i]!=0){

j->x = x;
printf("%c\t",j->x);
}


if((temp[i]==0)&&(t[i]==20)){

printf("%c\t",j->c);
}

if(z%3==0){

printf("\n");
 }

++i;
++z;

}

if(a>=5){

algorithm(p);
}

++a;

i=1;
z=1;

j = p;

even(&input, p);

    }    ///while loop
}


void algorithm(D *z){

D *u = z;



printf("\n\n");


for(int i=1;i<10;i++){

//Checking if Rows are equal


if(i%3==0){

if(s[i]==x &&s[i-1]==x && s[i-2] ==x) {

printf("Player %d wins\n",one);
a=10;
break;
 }                  // nested if

else if(s[i]==o &&s[i-1]==o && s[i-2] ==o){

printf("Player %d wins\n",two);
a=10;
break;

      }                   // else if statement
 }                       // if statement


// Checking if columns are equal
if(i==1 ||i==2||i==3){


if(s[i]==x && s[i+3]==x && s[i+6]==x){

printf("Player %d wins\n",one);
a=10;
break;

}                    //nested if statement

else if(s[i]==o && s[i+3]==o && s[i+6]==o){

printf("Player %d wins\n",two);
a=10;
break;

    }                    //nested else if statement
}                       // if statement

if(i==4 ||i==5||i==6){


if(s[i]==x && s[i-3]==x && s[i+3]==x){

printf("Player %d wins\n",one);
a=10;
break;

}                    //nested if statement

else if(s[i]==o && s[i-3]==o && s[i+3]==o){

printf("Player %d wins\n",two);
a=10;
break;

    }                    //nested else if statement
}                       // if statment

if(i==7 ||i==8||i==9){


if(s[i]==x && s[i-3]==x && s[i-6]==x){

printf("Player %d wins\n",one);
a=10;
break;

}                    //nested if statement

else if(s[i]==o && s[i-3]==o && s[i-6]==o){

printf("Player %d wins\n",two);
a=10;
break;

      }                    //nested else if statement
 }                        // if statement


//For the right Diagonals
if(i==1){

if(s[i]==x && s[i+4] ==x && s[i+8]==x){


printf("Player %d wins\n",one);
a=10;
break;
}                   // if statement

else if(s[i]==o && s[i+4] ==o && s[i+8]==o){


printf("Player %d wins\n",two);
a=10;
break;
          }                    // else if statement
       }                      // if statement


if(i==5){

if(s[i]==x && s[i-4] ==x && s[i+4]==x){


printf("Player %d wins\n",one);
a=10;
break;
}                   // if statement

else if(s[i]==o && s[i-4] ==o && s[i+4]==o){


printf("Player %d wins\n",two);
a=10;
break;
          }                    // else if statement
       }                      // if statement

if(i==9){

if(s[i]==x && s[i-4] ==x && s[i-8]==x){


printf("Player %d wins\n",one);
a=10;
break;
}                   // if statement

else if(s[i]==o && s[i-4] ==o && s[i-8]==o){


printf("Player %d wins\n",two);
a=10;
break;
          }                    // else if statement

       }                      // if statement
if(i==9){

if(s[i]==x && s[i-4] ==x && s[i-8]==x){


printf("Player %d wins\n",one);
a=10;
break;
}                   // if statement

else if(s[i]==o && s[i-4] ==o && s[i-8]==o){


printf("Player %d wins\n",two);
a=10;
break;
          }                    // else if statement

       }                      // if statement

// For the Left Diagonals
if(i==3){

if(s[i]==x && s[i+2] ==x && s[i+4]==x){


printf("Player %d wins\n",one);
a=10;
break;
}                   // if statement

else if(s[i]==o && s[i+2] ==o && s[i+4]==o){


printf("Player %d wins\n",two);
a=10;
break;

       }                    // else if statement
  }                        // if statement

if(i==5){

if(s[i]==x && s[i-2] ==x && s[i+2]==x){


printf("Player %d wins\n",one);
a=10;
break;
}                   // if statement

else if(s[i]==o && s[i-2] ==o && s[i+2]==o){


printf("Player %d wins\n",one);
a=10;
break;

       }                    // else if statement
  }                        // if statement

if(i==7){

if(s[i]==x && s[i-2] ==x && s[i-4]==x){


printf("Player %d wins\n",one);
a=10;
break;
}                   // if statement

else if(s[i]==o && s[i-2] ==o && s[i-4]==o){


printf("Player %d wins\n",two);
a=10;
break;

            }                      // else if statement

else if(a==9){

printf("The Match is a Draw\n");
            }                      //else if statement
        }                         // if statement
    }                            //for loop
}                               // Algorithm function

int main(){

D *one = (D *)malloc(sizeof(D));
D *two= (D *)malloc(sizeof(D));
D *three= (D *)malloc(sizeof(D));
D *four= (D *)malloc(sizeof(D));
D *five = (D *)malloc(sizeof(D));
D *six= (D *)malloc(sizeof(D));
D *seven= (D *)malloc(sizeof(D));
D *eight= (D *)malloc(sizeof(D));
D *nine = (D *)malloc(sizeof(D));

one->c = c;
one->next = two;
one->x = x;

two->c = c;
two->next = three;
two->x = x;

three->c = c;
three->next = four;
three->x = x;

four->c = c;
four->next = five;
four->x =x;

five->c = c;
five->next = six;
five->x = x;

six->c = c;
six->next = seven;
six->x = x;

seven->c = c;
seven->next = eight;
seven->x = x;

eight->c = c;
eight->next = nine;
eight->x = x;

nine->c = c;
nine->x = x;
nine->next = NULL;

board(one);
odd(one);

free(one);
free(two);
free(three);
free(four);
free(five);
free(six);
free(seven);
free(eight);
free(nine);
return 0;
}
