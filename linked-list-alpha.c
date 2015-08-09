/*
 * File:   main.c
 * Author: Douglas
 *
 * Created on July 20, 2015, 4:40 PM
 */

/*
 * File:   main.c
 * Author: Douglas
 *
 * Created on June 4, 2015, 2:36 PM
 * Revision Completion July 24, 2015
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node {
    char* meaning;
    struct node* a;
    struct node* b;

    struct node* c;
    struct node* d;
    struct node* e;
    struct node* f;
    struct node* g;
    struct node* h;
    struct node* i;
    struct node* j;
    struct node* k;
    struct node* l;
    struct node* m;
    struct node* n;
    struct node* o;
    struct node* p;
    struct node* q;
    struct node* r;
    struct node* s;
    struct node* t;
    struct node* u;
    struct node* v;
    struct node* w;
    struct node* x;
    struct node* y;
    struct node* z;

};

int add;
int iadd;

int q;

int count;
int count2;
int countDown;
char* this1;
char* seek;

char* definition;
struct node* ptrNodeB;
struct node* ptrNode;
struct node* head;
void add_node(char* this1, struct node* ptrNode, int count, char* definition);
void showM(char* seek, struct node* ptrNodeB, int count2);


// Space otter was here
int main() {
    count2 = 0;
    char input[50];
    char* word;
    char definition[50];


    char seek1[50];

    struct node* ptrNode;
    //ptrNode = malloc(sizeof(struct node));
    //ptrNode->a = ptrNode->b = NULL;
    //ptrNode->meaning[5000] = '\0';
    struct node* head;
    head  = malloc(sizeof(struct node));
    head->a = head->b = head->c = head->d = head->e = head->f = head->g = head->h = head->i = head->j = head->k = head->l = head->m = head->n = head->o =head->p = head->q = NULL;
    head->r = head->s = head->t = head->u = head->v = head->w = head->x = head->y = head->z = NULL;



    char my_string[50];
    int loop = 0;
    while(loop == 0){
    countDown = 0;
    printf("\nPress 'a' to add a word and meaning.\nPress 'b' to lookup a word.\nPress 'c' to exit.\n");

    scanf("%s",&input);
    switch (*input){
        case 'a':
            printf("What is your word? \n");

            scanf("%s",&input);
            getchar();
            printf("What is your definition? \n");
            fgets(my_string, 50, stdin);
            sscanf(my_string, "%s", definition);
 /*   if (my_string[0] == '\n'){
        add_node(input,head,countDown,definition);
        break;
    }

            }*/

           add_node(input,head,countDown,definition);
           //C:\Users\Douglas\Documents\NetBeansProjects\CppApplication_10\cdata


            break;
        case 'b':
            printf("What word are you looking up?");
            scanf("%s",&seek1);
            showM(seek1,head,countDown);
            break;
        case 'c':
            loop++;

            return (EXIT_SUCCESS);
            break;
    }


}
}


void showM(char* seek, struct node* ptrNodeB, int count2){



        switch(*(seek + count2)){

            case 'a':
                printf("\ncount2=  %d\n", count2);

                printf("\nptrNodeB->a->meaning= %s\nptrNodeB->a= %d", ptrNodeB->a->meaning, ptrNodeB->a);
                if((count2 + 1) == strlen(seek)){
                    printf("\n\nmeaning is %s\nptrNodeB->a =  %d",ptrNodeB->a->meaning, ptrNodeB->a);

                    break;
                }
                if((count2 + 1) < strlen(seek)){
                count2++;
                showM(seek,ptrNodeB->a,count2);

                }break;

            case 'b':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->b->meaning= %s\nptrNodeB->b= %d", ptrNodeB->b->meaning, ptrNodeB->b);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->b->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
               // struct node* nextB;
               // nextB = ptrNodeB->b;
                count2++;
                showM(seek,ptrNodeB->b,count2);

                }break;
            case 'c':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->c->meaning= %s\nptrNodeB->c= %d", ptrNodeB->c->meaning, ptrNodeB->c);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->c->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->c;
                count2++;
                showM(seek,nextB,count2);

                }break;

            case 'd':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->d->meaning= %s\nptrNodeB->d= %d", ptrNodeB->d->meaning, ptrNodeB->d);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->d->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->d;
                count2++;
                showM(seek,nextB,count2);

                }break;

            case 'e':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->e->meaning= %s\nptrNodeB->e= %d", ptrNodeB->e->meaning, ptrNodeB->e);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->e->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->e;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'f':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->f->meaning= %s\nptrNodeB->f= %d", ptrNodeB->f->meaning, ptrNodeB->f);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->f->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->f;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'g':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->g->meaning= %s\nptrNodeB->g= %d", ptrNodeB->g->meaning, ptrNodeB->g);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->g->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->g;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'h':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->h->meaning= %s\nptrNodeB->h= %d", ptrNodeB->h->meaning, ptrNodeB->h);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->h->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->h;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'i':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->i->meaning= %s\nptrNodeB->i= %d", ptrNodeB->i->meaning, ptrNodeB->i);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->i->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->i;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'j':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->j->meaning= %s\nptrNodeB->j= %d", ptrNodeB->j->meaning, ptrNodeB->j);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->j->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->j;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'k':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->k->meaning= %s\nptrNodeB->k= %d", ptrNodeB->k->meaning, ptrNodeB->k);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->k->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->k;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'l':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->l->meaning= %s\nptrNodeB->l= %d", ptrNodeB->l->meaning, ptrNodeB->l);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->l->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->l;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'm':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->m->meaning= %s\nptrNodeB->m= %d", ptrNodeB->m->meaning, ptrNodeB->m);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->m->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->m;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'n':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->n->meaning= %s\nptrNodeB->n= %d", ptrNodeB->n->meaning, ptrNodeB->n);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->n->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->n;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'o':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->o->meaning= %s\nptrNodeB->o= %d", ptrNodeB->o->meaning, ptrNodeB->o);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->o->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->o;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'p':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->p->meaning= %s\nptrNodeB->p= %d", ptrNodeB->p->meaning, ptrNodeB->p);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->p->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->p;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'q':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->q->meaning= %s\nptrNodeB->q= %d", ptrNodeB->q->meaning, ptrNodeB->q);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->q->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->q;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'r':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->r->meaning= %s\nptrNodeB->r= %d", ptrNodeB->r->meaning, ptrNodeB->r);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->r->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->r;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 's':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->s->meaning= %s\nptrNodeB->s= %d", ptrNodeB->s->meaning, ptrNodeB->s);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->s->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->s;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 't':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->t->meaning= %s\nptrNodeB->t= %d", ptrNodeB->t->meaning, ptrNodeB->t);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->t->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->t;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'u':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->u->meaning= %s\nptrNodeB->u= %d", ptrNodeB->u->meaning, ptrNodeB->u);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->u->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->u;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'v':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->v->meaning= %s\nptrNodeB->v= %d", ptrNodeB->v->meaning, ptrNodeB->v);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->v->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->v;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'w':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->w->meaning= %s\nptrNodeB->w= %d", ptrNodeB->w->meaning, ptrNodeB->w);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->w->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->w;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'x':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->x->meaning= %s\nptrNodeB->x= %d", ptrNodeB->x->meaning, ptrNodeB->x);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->x->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->x;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'y':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->y->meaning= %s\nptrNodeB->y= %d", ptrNodeB->y->meaning, ptrNodeB->y);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->y->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->y;
                count2++;
                showM(seek,nextB,count2);

                } break;

            case 'z':
                printf("\ncount2=  %d\n", count2);
                printf("\nptrNodeB->z->meaning= %s\nptrNodeB->z= %d", ptrNodeB->z->meaning, ptrNodeB->z);
                if((count2 + 1) == strlen(seek)){
                    printf("\n meaning is %s\n ",ptrNodeB->z->meaning);
                    break;
                }
                if((count2 + 1) < strlen(seek)){
                struct node* nextB;
                nextB = ptrNodeB->z;
                count2++;
                showM(seek,nextB,count2);

                } break;
                break;

        }
}


void add_node(char* this1,struct node* ptrNode,int count,char* definition){

                        printf("\n %cgreetings\nptrNode = %d  \ncount is  %d",*this1, ptrNode, count);

                       // char add;
                       // int iadd;

    switch (*(this1 + count)){




                        case 'a':

                          if(ptrNode->a == NULL && strlen(this1) > count + 1){

                            ptrNode->a = malloc(sizeof(struct node));
                            ptrNode->a->a = ptrNode->a->b = ptrNode->a->c = ptrNode->a->d = ptrNode->a->e = ptrNode->a->f = ptrNode->a->g = ptrNode->a->h = ptrNode->a->i = NULL;
                            ptrNode->a->j = ptrNode->a->k = ptrNode->a->l = ptrNode->a->m = ptrNode->a->n = ptrNode->a->o = ptrNode->a->p = ptrNode->a->q = NULL;
                            ptrNode->a->r = ptrNode->a->s = ptrNode->a->t = ptrNode->a->u = ptrNode->a->v = ptrNode->a->w = ptrNode->a->x = ptrNode->a->y = ptrNode->a->z = NULL;

                            count++;
                            add_node(this1,ptrNode->a,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->a != NULL){
                              count++;
                              add_node(this1,ptrNode->a,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->a == NULL){

                              printf("\nNull");


                            ptrNode->a = malloc(sizeof(struct node));
                            ptrNode->a->a = ptrNode->a->b = ptrNode->a->c = ptrNode->a->d = ptrNode->a->e = ptrNode->a->f = ptrNode->a->g = ptrNode->a->h = ptrNode->a->i = NULL;
                            ptrNode->a->j = ptrNode->a->k = ptrNode->a->l = ptrNode->a->m = ptrNode->a->n = ptrNode->a->o = ptrNode->a->p = ptrNode->a->q = NULL;
                            ptrNode->a->r = ptrNode->a->s = ptrNode->a->t = ptrNode->a->u = ptrNode->a->v = ptrNode->a->w = ptrNode->a->x = ptrNode->a->y = ptrNode->a->z = NULL;
                            ptrNode->a->meaning = strdup(definition);
                            printf("\n\nptrNode->a->meaning=  %s\n\n",ptrNode->a->meaning);
                            break;
                          }




                          if(count + 1 == strlen(this1) && ptrNode->a != NULL){

                              printf("\nnotnull");
                            int q;
                            q = 0;


                            ptrNode->a->meaning = strdup(definition);
                            printf("\n\nptrNode->a->meaning=  %s\n\n",ptrNode->a->meaning);
                            break;


                            printf("\n\nptrNode->a->meaning=  %s\n\n",ptrNode->a->meaning);
                            break;
                          }
                        break;


                    case 'b':




                          if(ptrNode->b == NULL && strlen(this1) > count + 1){

                            ptrNode->b = malloc(sizeof(struct node));
                            ptrNode->b->a = ptrNode->b->b = ptrNode->b->c = ptrNode->b->d = ptrNode->b->e = ptrNode->b->f = ptrNode->b->g = ptrNode->b->h = ptrNode->b->i = NULL;
                            ptrNode->b->j = ptrNode->b->k = ptrNode->b->l = ptrNode->b->m = ptrNode->b->n = ptrNode->b->o = ptrNode->b->p = ptrNode->b->q = NULL;
                            ptrNode->b->r = ptrNode->b->s = ptrNode->b->t = ptrNode->b->u = ptrNode->b->v = ptrNode->b->w = ptrNode->b->x = ptrNode->b->y = ptrNode->b->z = NULL;

                              count++;
                              add_node(this1,ptrNode->b,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->b != NULL){

                              count++;
                              add_node(this1,ptrNode->b,count,definition);
                              break;
                              //return;
                             // return;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->b == NULL){
                            ptrNode->b = malloc(sizeof(struct node));
                            ptrNode->b->a = ptrNode->b->b = ptrNode->b->c = ptrNode->b->d = ptrNode->b->e = ptrNode->b->f = ptrNode->b->g = ptrNode->b->h = ptrNode->b->i = NULL;
                            ptrNode->b->j = ptrNode->b->k = ptrNode->b->l = ptrNode->b->m = ptrNode->b->n = ptrNode->b->o = ptrNode->b->p = ptrNode->b->q = NULL;
                            ptrNode->b->r = ptrNode->b->s = ptrNode->b->t = ptrNode->b->u = ptrNode->b->v = ptrNode->b->w = ptrNode->b->x = ptrNode->b->y = ptrNode->b->z = NULL;
                            ptrNode->b->meaning = strdup(definition);
                            printf("\nwell?\n");


                            printf("\ndefinition is of length %d",strlen(definition));

                            printf("\nptrNode->b->meaning=  %s ",ptrNode->b->meaning);
                            break;
                            return;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->b != NULL){

                            ptrNode->b->meaning = strdup(definition);
                            printf("\ndefinition is of length %d",strlen(definition));


                            printf("\nptrNode->b->meaning=  %s",ptrNode->b->meaning);
                            break;
                          }
                        break;

                        case 'c':

                          if(ptrNode->c == NULL && strlen(this1) > count + 1){
                               ptrNode->c = malloc(sizeof(struct node));
                               ptrNode->c->a = ptrNode->c->b = ptrNode->c->c = NULL;
                              count++;
                              add_node(this1,ptrNode->c,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->c != NULL){
                              count++;
                              add_node(this1,ptrNode->c,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->c == NULL){

                            ptrNode->c = malloc(sizeof(struct node));
                            ptrNode->c->a = ptrNode->c->b = ptrNode->c->c = NULL;

                            ptrNode->c->meaning = strdup(definition);


                            printf("\n\nptrNode->c->meaning=  %s\n\n",ptrNode->c->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->c != NULL){
                              ptrNode->c->meaning = strdup(definition);

                            printf("\n\nptrNode->c->meaning=  %s\n\n",ptrNode->c->meaning);
                            break;
                          }



                        break;

                    case 'd':

                          if(ptrNode->d == NULL && strlen(this1) > count + 1){
                               ptrNode->d = malloc(sizeof(struct node));
                               ptrNode->d->a = ptrNode->d->b = ptrNode->d->c = ptrNode->d->d = ptrNode->d->e = ptrNode->d->f = ptrNode->d->g = ptrNode->d->h = ptrNode->d->i = NULL;
                               ptrNode->d->j = ptrNode->d->k = ptrNode->d->l = ptrNode->d->m = ptrNode->d->n = ptrNode->d->o = ptrNode->d->p = ptrNode->d->q = NULL;
                               ptrNode->d->r = ptrNode->d->s = ptrNode->d->t = ptrNode->d->u = ptrNode->d->v = ptrNode->d->w = ptrNode->d->x = ptrNode->d->y = ptrNode->d->z = NULL;
                              count++;
                              add_node(this1,ptrNode->d,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->d != NULL){
                              count++;
                              add_node(this1,ptrNode->d,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->d == NULL){

                            ptrNode->d = malloc(sizeof(struct node));
                            ptrNode->d->a = ptrNode->d->b = ptrNode->d->c = ptrNode->d->d = ptrNode->d->e = ptrNode->d->f = ptrNode->d->g = ptrNode->d->h = ptrNode->d->i = NULL;
                            ptrNode->d->j = ptrNode->d->k = ptrNode->d->l = ptrNode->d->m = ptrNode->d->n = ptrNode->d->o = ptrNode->d->p = ptrNode->d->q = NULL;
                            ptrNode->d->r = ptrNode->d->s = ptrNode->d->t = ptrNode->d->u = ptrNode->d->v = ptrNode->d->w = ptrNode->d->x = ptrNode->d->y = ptrNode->d->z = NULL;

                            ptrNode->d->meaning = strdup(definition);


                            printf("\n\nptrNode->d->meaning=  %s\n\n",ptrNode->d->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->d != NULL){
                              ptrNode->d->meaning = strdup(definition);

                            printf("\n\nptrNode->d->meaning=  %s\n\n",ptrNode->d->meaning);
                            break;
                          }



                        break;

                    case 'e':

                          if(ptrNode->e == NULL && strlen(this1) > count + 1){
                            ptrNode->e = malloc(sizeof(struct node));
                            ptrNode->e->a = ptrNode->e->b = ptrNode->e->c = ptrNode->e->d = ptrNode->e->e = ptrNode->e->f = ptrNode->e->g = ptrNode->e->h = ptrNode->e->i = NULL;
                            ptrNode->e->j = ptrNode->e->k = ptrNode->e->l = ptrNode->e->m = ptrNode->e->n = ptrNode->e->o = ptrNode->e->p = ptrNode->e->q = NULL;
                            ptrNode->e->r = ptrNode->e->s = ptrNode->e->t = ptrNode->e->u = ptrNode->e->v = ptrNode->e->w = ptrNode->e->x = ptrNode->e->y = ptrNode->e->z = NULL;
                              count++;
                              add_node(this1,ptrNode->e,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->e != NULL){
                              count++;
                              add_node(this1,ptrNode->e,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->e == NULL){

                           ptrNode->e = malloc(sizeof(struct node));
                           ptrNode->e->a = ptrNode->e->b = ptrNode->e->c = ptrNode->e->d = ptrNode->e->e = ptrNode->e->f = ptrNode->e->g = ptrNode->e->h = ptrNode->e->i = NULL;
                           ptrNode->e->j = ptrNode->e->k = ptrNode->e->l = ptrNode->e->m = ptrNode->e->n = ptrNode->e->o = ptrNode->e->p = ptrNode->e->q = NULL;
                           ptrNode->e->r = ptrNode->e->s = ptrNode->e->t = ptrNode->e->u = ptrNode->e->v = ptrNode->e->w = ptrNode->e->x = ptrNode->e->y = ptrNode->e->z = NULL;

                            ptrNode->e->meaning = strdup(definition);


                            printf("\n\nptrNode->e->meaning=  %s\n\n",ptrNode->e->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->e != NULL){
                              ptrNode->e->meaning = strdup(definition);

                            printf("\n\nptrNode->e->meaning=  %s\n\n",ptrNode->e->meaning);
                            break;
                          }



                        break;

                    case 'f':

                          if(ptrNode->f == NULL && strlen(this1) > count + 1){
                            ptrNode->f = malloc(sizeof(struct node));
                            ptrNode->f->a = ptrNode->f->b = ptrNode->f->c = ptrNode->f->d = ptrNode->f->e = ptrNode->f->f = ptrNode->f->g = ptrNode->f->h = ptrNode->f->i = NULL;
                            ptrNode->f->j = ptrNode->f->k = ptrNode->f->l = ptrNode->f->m = ptrNode->f->n = ptrNode->f->o = ptrNode->f->p = ptrNode->f->q = NULL;
                            ptrNode->f->r = ptrNode->f->s = ptrNode->f->t = ptrNode->f->u = ptrNode->f->v = ptrNode->f->w = ptrNode->f->x = ptrNode->f->y = ptrNode->f->z = NULL;
                              count++;
                              add_node(this1,ptrNode->f,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->f != NULL){
                              count++;
                              add_node(this1,ptrNode->f,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->f == NULL){

                            ptrNode->f = malloc(sizeof(struct node));
                            ptrNode->f->a = ptrNode->f->b = ptrNode->f->c = ptrNode->f->d = ptrNode->f->e = ptrNode->f->f = ptrNode->f->g = ptrNode->f->h = ptrNode->f->i = NULL;
                            ptrNode->f->j = ptrNode->f->k = ptrNode->f->l = ptrNode->f->m = ptrNode->f->n = ptrNode->f->o = ptrNode->f->p = ptrNode->f->q = NULL;
                            ptrNode->f->r = ptrNode->f->s = ptrNode->f->t = ptrNode->f->u = ptrNode->f->v = ptrNode->f->w = ptrNode->f->x = ptrNode->f->y = ptrNode->f->z = NULL;

                            ptrNode->f->meaning = strdup(definition);


                            printf("\n\nptrNode->f->meaning=  %s\n\n",ptrNode->f->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->f != NULL){
                              ptrNode->f->meaning = strdup(definition);

                            printf("\n\nptrNode->f->meaning=  %s\n\n",ptrNode->f->meaning);
                            break;
                          }



                        break;

                    case 'g':

                          if(ptrNode->g == NULL && strlen(this1) > count + 1){
                            ptrNode->g = malloc(sizeof(struct node));
                            ptrNode->g->a = ptrNode->g->b = ptrNode->g->c = ptrNode->g->d = ptrNode->g->e = ptrNode->g->f = ptrNode->g->g = ptrNode->g->h = ptrNode->g->i = NULL;
                            ptrNode->g->j = ptrNode->g->k = ptrNode->g->l = ptrNode->g->m = ptrNode->g->n = ptrNode->g->o = ptrNode->g->p = ptrNode->g->q = NULL;
                            ptrNode->g->r = ptrNode->g->s = ptrNode->g->t = ptrNode->g->u = ptrNode->g->v = ptrNode->g->w = ptrNode->g->x = ptrNode->g->y = ptrNode->g->z = NULL;
                              count++;
                              add_node(this1,ptrNode->g,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->g != NULL){
                              count++;
                              add_node(this1,ptrNode->g,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->g == NULL){

                            ptrNode->g = malloc(sizeof(struct node));
                            ptrNode->g->a = ptrNode->g->b = ptrNode->g->c = ptrNode->g->d = ptrNode->g->e = ptrNode->g->f = ptrNode->g->g = ptrNode->g->h = ptrNode->g->i = NULL;
                            ptrNode->g->j = ptrNode->g->k = ptrNode->g->l = ptrNode->g->m = ptrNode->g->n = ptrNode->g->o = ptrNode->g->p = ptrNode->g->q = NULL;
                            ptrNode->g->r = ptrNode->g->s = ptrNode->g->t = ptrNode->g->u = ptrNode->g->v = ptrNode->g->w = ptrNode->g->x = ptrNode->g->y = ptrNode->g->z = NULL;

                            ptrNode->g->meaning = strdup(definition);


                            printf("\n\nptrNode->g->meaning=  %s\n\n",ptrNode->g->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->g != NULL){
                              ptrNode->g->meaning = strdup(definition);

                            printf("\n\nptrNode->g->meaning=  %s\n\n",ptrNode->g->meaning);
                            break;
                          }



                        break;

                    case 'h':

                          if(ptrNode->h == NULL && strlen(this1) > count + 1){
                            ptrNode->h = malloc(sizeof(struct node));
                            ptrNode->h->a = ptrNode->h->b = ptrNode->h->c = ptrNode->h->d = ptrNode->h->e = ptrNode->h->f = ptrNode->h->g = ptrNode->h->h = ptrNode->h->i = NULL;
                            ptrNode->h->j = ptrNode->h->k = ptrNode->h->l = ptrNode->h->m = ptrNode->h->n = ptrNode->h->o = ptrNode->h->p = ptrNode->h->q = NULL;
                            ptrNode->h->r = ptrNode->h->s = ptrNode->h->t = ptrNode->h->u = ptrNode->h->v = ptrNode->h->w = ptrNode->h->x = ptrNode->h->y = ptrNode->h->z = NULL;
                              count++;
                              add_node(this1,ptrNode->h,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->h != NULL){
                              count++;
                              add_node(this1,ptrNode->h,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->h == NULL){

                            ptrNode->h = malloc(sizeof(struct node));
                            ptrNode->h->a = ptrNode->h->b = ptrNode->h->c = ptrNode->h->d = ptrNode->h->e = ptrNode->h->f = ptrNode->h->g = ptrNode->h->h = ptrNode->h->i = NULL;
                            ptrNode->h->j = ptrNode->h->k = ptrNode->h->l = ptrNode->h->m = ptrNode->h->n = ptrNode->h->o = ptrNode->h->p = ptrNode->h->q = NULL;
                            ptrNode->h->r = ptrNode->h->s = ptrNode->h->t = ptrNode->h->u = ptrNode->h->v = ptrNode->h->w = ptrNode->h->x = ptrNode->h->y = ptrNode->h->z = NULL;

                            ptrNode->h->meaning = strdup(definition);


                            printf("\n\nptrNode->h->meaning=  %s\n\n",ptrNode->h->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->h != NULL){
                              ptrNode->h->meaning = strdup(definition);

                            printf("\n\nptrNode->h->meaning=  %s\n\n",ptrNode->h->meaning);
                            break;
                          }



                        break;

                    case 'i':

                          if(ptrNode->i == NULL && strlen(this1) > count + 1){
                            ptrNode->i = malloc(sizeof(struct node));
                            ptrNode->i->a = ptrNode->i->b = ptrNode->i->c = ptrNode->i->d = ptrNode->i->e = ptrNode->i->f = ptrNode->i->g = ptrNode->i->h = ptrNode->i->i = NULL;
                            ptrNode->i->j = ptrNode->i->k = ptrNode->i->l = ptrNode->i->m = ptrNode->i->n = ptrNode->i->o = ptrNode->i->p = ptrNode->i->q = NULL;
                            ptrNode->i->r = ptrNode->i->s = ptrNode->i->t = ptrNode->i->u = ptrNode->i->v = ptrNode->i->w = ptrNode->i->x = ptrNode->i->y = ptrNode->i->z = NULL;
                              count++;
                              add_node(this1,ptrNode->i,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->i != NULL){
                              count++;
                              add_node(this1,ptrNode->i,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->i == NULL){

                            ptrNode->i = malloc(sizeof(struct node));
                            ptrNode->i->a = ptrNode->i->b = ptrNode->i->c = ptrNode->i->d = ptrNode->i->e = ptrNode->i->f = ptrNode->i->g = ptrNode->i->h = ptrNode->i->i = NULL;
                            ptrNode->i->j = ptrNode->i->k = ptrNode->i->l = ptrNode->i->m = ptrNode->i->n = ptrNode->i->o = ptrNode->i->p = ptrNode->i->q = NULL;
                            ptrNode->i->r = ptrNode->i->s = ptrNode->i->t = ptrNode->i->u = ptrNode->i->v = ptrNode->i->w = ptrNode->i->x = ptrNode->i->y = ptrNode->i->z = NULL;

                            ptrNode->i->meaning = strdup(definition);


                            printf("\n\nptrNode->i->meaning=  %s\n\n",ptrNode->i->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->i != NULL){
                              ptrNode->i->meaning = strdup(definition);

                            printf("\n\nptrNode->i->meaning=  %s\n\n",ptrNode->i->meaning);
                            break;
                          }



                        break;

                    case 'j':

                          if(ptrNode->j == NULL && strlen(this1) > count + 1){
                            ptrNode->j = malloc(sizeof(struct node));
                            ptrNode->j->a = ptrNode->j->b = ptrNode->j->c = ptrNode->j->d = ptrNode->j->e = ptrNode->j->f = ptrNode->j->g = ptrNode->j->h = ptrNode->j->i = NULL;
                            ptrNode->j->j = ptrNode->j->k = ptrNode->j->l = ptrNode->j->m = ptrNode->j->n = ptrNode->j->o = ptrNode->j->p = ptrNode->j->q = NULL;
                            ptrNode->j->r = ptrNode->j->s = ptrNode->j->t = ptrNode->j->u = ptrNode->j->v = ptrNode->j->w = ptrNode->j->x = ptrNode->j->y = ptrNode->j->z = NULL;
                              count++;
                              add_node(this1,ptrNode->j,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->j != NULL){
                              count++;
                              add_node(this1,ptrNode->j,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->j == NULL){

                            ptrNode->j = malloc(sizeof(struct node));
                            ptrNode->j->a = ptrNode->j->b = ptrNode->j->c = ptrNode->j->d = ptrNode->j->e = ptrNode->j->f = ptrNode->j->g = ptrNode->j->h = ptrNode->j->i = NULL;
                            ptrNode->j->j = ptrNode->j->k = ptrNode->j->l = ptrNode->j->m = ptrNode->j->n = ptrNode->j->o = ptrNode->j->p = ptrNode->j->q = NULL;
                            ptrNode->j->r = ptrNode->j->s = ptrNode->j->t = ptrNode->j->u = ptrNode->j->v = ptrNode->j->w = ptrNode->j->x = ptrNode->j->y = ptrNode->j->z = NULL;

                            ptrNode->j->meaning = strdup(definition);


                            printf("\n\nptrNode->j->meaning=  %s\n\n",ptrNode->j->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->j != NULL){
                              ptrNode->j->meaning = strdup(definition);

                            printf("\n\nptrNode->j->meaning=  %s\n\n",ptrNode->j->meaning);
                            break;
                          }



                        break;

                    case 'k':

                          if(ptrNode->k == NULL && strlen(this1) > count + 1){
                            ptrNode->k = malloc(sizeof(struct node));
                            ptrNode->k->a = ptrNode->k->b = ptrNode->k->c = ptrNode->k->d = ptrNode->k->e = ptrNode->k->f = ptrNode->k->g = ptrNode->k->h = ptrNode->k->i = NULL;
                            ptrNode->k->j = ptrNode->k->k = ptrNode->k->l = ptrNode->k->m = ptrNode->k->n = ptrNode->k->o = ptrNode->k->p = ptrNode->k->q = NULL;
                            ptrNode->k->r = ptrNode->k->s = ptrNode->k->t = ptrNode->k->u = ptrNode->k->v = ptrNode->k->w = ptrNode->k->x = ptrNode->k->y = ptrNode->k->z = NULL;
                              count++;
                              add_node(this1,ptrNode->k,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->k != NULL){
                              count++;
                              add_node(this1,ptrNode->k,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->k == NULL){

                            ptrNode->k = malloc(sizeof(struct node));
                            ptrNode->k->a = ptrNode->k->b = ptrNode->k->c = ptrNode->k->d = ptrNode->k->e = ptrNode->k->f = ptrNode->k->g = ptrNode->k->h = ptrNode->k->i = NULL;
                            ptrNode->k->j = ptrNode->k->k = ptrNode->k->l = ptrNode->k->m = ptrNode->k->n = ptrNode->k->o = ptrNode->k->p = ptrNode->k->q = NULL;
                            ptrNode->k->r = ptrNode->k->s = ptrNode->k->t = ptrNode->k->u = ptrNode->k->v = ptrNode->k->w = ptrNode->k->x = ptrNode->k->y = ptrNode->k->z = NULL;

                            ptrNode->k->meaning = strdup(definition);


                            printf("\n\nptrNode->k->meaning=  %s\n\n",ptrNode->k->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->k != NULL){
                              ptrNode->k->meaning = strdup(definition);

                            printf("\n\nptrNode->k->meaning=  %s\n\n",ptrNode->k->meaning);
                            break;
                          }



                        break;

                    case 'l':

                          if(ptrNode->l == NULL && strlen(this1) > count + 1){
                            ptrNode->l = malloc(sizeof(struct node));
                            ptrNode->l->a = ptrNode->l->b = ptrNode->l->c = ptrNode->l->d = ptrNode->l->e = ptrNode->l->f = ptrNode->l->g = ptrNode->l->h = ptrNode->l->i = NULL;
                            ptrNode->l->j = ptrNode->l->k = ptrNode->l->l = ptrNode->l->m = ptrNode->l->n = ptrNode->l->o = ptrNode->l->p = ptrNode->l->q = NULL;
                            ptrNode->l->r = ptrNode->l->s = ptrNode->l->t = ptrNode->l->u = ptrNode->l->v = ptrNode->l->w = ptrNode->l->x = ptrNode->l->y = ptrNode->l->z = NULL;
                              count++;
                              add_node(this1,ptrNode->l,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->l != NULL){
                              count++;
                              add_node(this1,ptrNode->l,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->l == NULL){

                            ptrNode->l = malloc(sizeof(struct node));
                            ptrNode->l->a = ptrNode->l->b = ptrNode->l->c = ptrNode->l->d = ptrNode->l->e = ptrNode->l->f = ptrNode->l->g = ptrNode->l->h = ptrNode->l->i = NULL;
                            ptrNode->l->j = ptrNode->l->k = ptrNode->l->l = ptrNode->l->m = ptrNode->l->n = ptrNode->l->o = ptrNode->l->p = ptrNode->l->q = NULL;
                            ptrNode->l->r = ptrNode->l->s = ptrNode->l->t = ptrNode->l->u = ptrNode->l->v = ptrNode->l->w = ptrNode->l->x = ptrNode->l->y = ptrNode->l->z = NULL;

                            ptrNode->l->meaning = strdup(definition);


                            printf("\n\nptrNode->l->meaning=  %s\n\n",ptrNode->l->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->l != NULL){
                              ptrNode->l->meaning = strdup(definition);

                            printf("\n\nptrNode->l->meaning=  %s\n\n",ptrNode->l->meaning);
                            break;
                          }



                        break;

                    case 'm':

                          if(ptrNode->m == NULL && strlen(this1) > count + 1){
                            ptrNode->m = malloc(sizeof(struct node));
                            ptrNode->m->a = ptrNode->m->b = ptrNode->m->c = ptrNode->m->d = ptrNode->m->e = ptrNode->m->f = ptrNode->m->g = ptrNode->m->h = ptrNode->m->i = NULL;
                            ptrNode->m->j = ptrNode->m->k = ptrNode->m->l = ptrNode->m->m = ptrNode->m->n = ptrNode->m->o = ptrNode->m->p = ptrNode->m->q = NULL;
                            ptrNode->m->r = ptrNode->m->s = ptrNode->m->t = ptrNode->m->u = ptrNode->m->v = ptrNode->m->w = ptrNode->m->x = ptrNode->m->y = ptrNode->m->z = NULL;
                              count++;
                              add_node(this1,ptrNode->m,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->m != NULL){
                              count++;
                              add_node(this1,ptrNode->m,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->m == NULL){

                            ptrNode->m = malloc(sizeof(struct node));
                            ptrNode->m->a = ptrNode->m->b = ptrNode->m->c = ptrNode->m->d = ptrNode->m->e = ptrNode->m->f = ptrNode->m->g = ptrNode->m->h = ptrNode->m->i = NULL;
                            ptrNode->m->j = ptrNode->m->k = ptrNode->m->l = ptrNode->m->m = ptrNode->m->n = ptrNode->m->o = ptrNode->m->p = ptrNode->m->q = NULL;
                            ptrNode->m->r = ptrNode->m->s = ptrNode->m->t = ptrNode->m->u = ptrNode->m->v = ptrNode->m->w = ptrNode->m->x = ptrNode->m->y = ptrNode->m->z = NULL;

                            ptrNode->m->meaning = strdup(definition);


                            printf("\n\nptrNode->m->meaning=  %s\n\n",ptrNode->m->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->m != NULL){
                              ptrNode->m->meaning = strdup(definition);

                            printf("\n\nptrNode->m->meaning=  %s\n\n",ptrNode->m->meaning);
                            break;
                          }



                        break;

                    case 'n':

                          if(ptrNode->n == NULL && strlen(this1) > count + 1){
                            ptrNode->n = malloc(sizeof(struct node));
                            ptrNode->n->a = ptrNode->n->b = ptrNode->n->c = ptrNode->n->d = ptrNode->n->e = ptrNode->n->f = ptrNode->n->g = ptrNode->n->h = ptrNode->n->i = NULL;
                            ptrNode->n->j = ptrNode->n->k = ptrNode->n->l = ptrNode->n->m = ptrNode->n->n = ptrNode->n->o = ptrNode->n->p = ptrNode->n->q = NULL;
                            ptrNode->n->r = ptrNode->n->s = ptrNode->n->t = ptrNode->n->u = ptrNode->n->v = ptrNode->n->w = ptrNode->n->x = ptrNode->n->y = ptrNode->n->z = NULL;
                              count++;
                              add_node(this1,ptrNode->n,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->n != NULL){
                              count++;
                              add_node(this1,ptrNode->n,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->n == NULL){

                            ptrNode->n = malloc(sizeof(struct node));
                            ptrNode->n->a = ptrNode->n->b = ptrNode->n->c = ptrNode->n->d = ptrNode->n->e = ptrNode->n->f = ptrNode->n->g = ptrNode->n->h = ptrNode->n->i = NULL;
                            ptrNode->n->j = ptrNode->n->k = ptrNode->n->l = ptrNode->n->m = ptrNode->n->n = ptrNode->n->o = ptrNode->n->p = ptrNode->n->q = NULL;
                            ptrNode->n->r = ptrNode->n->s = ptrNode->n->t = ptrNode->n->u = ptrNode->n->v = ptrNode->n->w = ptrNode->n->x = ptrNode->n->y = ptrNode->n->z = NULL;

                            ptrNode->n->meaning = strdup(definition);


                            printf("\n\nptrNode->n->meaning=  %s\n\n",ptrNode->n->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->n != NULL){
                              ptrNode->n->meaning = strdup(definition);

                            printf("\n\nptrNode->n->meaning=  %s\n\n",ptrNode->n->meaning);
                            break;
                          }



                        break;

                    case 'o':

                          if(ptrNode->o == NULL && strlen(this1) > count + 1){
                            ptrNode->o = malloc(sizeof(struct node));
                            ptrNode->o->a = ptrNode->o->b = ptrNode->o->c = ptrNode->o->d = ptrNode->o->e = ptrNode->o->f = ptrNode->o->g = ptrNode->o->h = ptrNode->o->i = NULL;
                            ptrNode->o->j = ptrNode->o->k = ptrNode->o->l = ptrNode->o->m = ptrNode->o->n = ptrNode->o->o = ptrNode->o->p = ptrNode->o->q = NULL;
                            ptrNode->o->r = ptrNode->o->s = ptrNode->o->t = ptrNode->o->u = ptrNode->o->v = ptrNode->o->w = ptrNode->o->x = ptrNode->o->y = ptrNode->o->z = NULL;
                              count++;
                              add_node(this1,ptrNode->o,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->o != NULL){
                              count++;
                              add_node(this1,ptrNode->o,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->o == NULL){

                            ptrNode->o = malloc(sizeof(struct node));
                            ptrNode->o->a = ptrNode->o->b = ptrNode->o->c = ptrNode->o->d = ptrNode->o->e = ptrNode->o->f = ptrNode->o->g = ptrNode->o->h = ptrNode->o->i = NULL;
                            ptrNode->o->j = ptrNode->o->k = ptrNode->o->l = ptrNode->o->m = ptrNode->o->n = ptrNode->o->o = ptrNode->o->p = ptrNode->o->q = NULL;
                            ptrNode->o->r = ptrNode->o->s = ptrNode->o->t = ptrNode->o->u = ptrNode->o->v = ptrNode->o->w = ptrNode->o->x = ptrNode->o->y = ptrNode->o->z = NULL;

                            ptrNode->o->meaning = strdup(definition);


                            printf("\n\nptrNode->o->meaning=  %s\n\n",ptrNode->o->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->o != NULL){
                              ptrNode->o->meaning = strdup(definition);

                            printf("\n\nptrNode->o->meaning=  %s\n\n",ptrNode->o->meaning);
                            break;
                          }



                        break;

                    case 'p':

                          if(ptrNode->p == NULL && strlen(this1) > count + 1){
                            ptrNode->p = malloc(sizeof(struct node));
                            ptrNode->p->a = ptrNode->p->b = ptrNode->p->c = ptrNode->p->d = ptrNode->p->e = ptrNode->p->f = ptrNode->p->g = ptrNode->p->h = ptrNode->p->i = NULL;
                            ptrNode->p->j = ptrNode->p->k = ptrNode->p->l = ptrNode->p->m = ptrNode->p->n = ptrNode->p->o = ptrNode->p->p = ptrNode->p->q = NULL;
                            ptrNode->p->r = ptrNode->p->s = ptrNode->p->t = ptrNode->p->u = ptrNode->p->v = ptrNode->p->w = ptrNode->p->x = ptrNode->p->y = ptrNode->p->z = NULL;
                              count++;
                              add_node(this1,ptrNode->p,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->p != NULL){
                              count++;
                              add_node(this1,ptrNode->p,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->p == NULL){

                            ptrNode->p = malloc(sizeof(struct node));
                            ptrNode->p->a = ptrNode->p->b = ptrNode->p->c = ptrNode->p->d = ptrNode->p->e = ptrNode->p->f = ptrNode->p->g = ptrNode->p->h = ptrNode->p->i = NULL;
                            ptrNode->p->j = ptrNode->p->k = ptrNode->p->l = ptrNode->p->m = ptrNode->p->n = ptrNode->p->o = ptrNode->p->p = ptrNode->p->q = NULL;
                            ptrNode->p->r = ptrNode->p->s = ptrNode->p->t = ptrNode->p->u = ptrNode->p->v = ptrNode->p->w = ptrNode->p->x = ptrNode->p->y = ptrNode->p->z = NULL;

                            ptrNode->p->meaning = strdup(definition);


                            printf("\n\nptrNode->p->meaning=  %s\n\n",ptrNode->p->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->p != NULL){
                              ptrNode->p->meaning = strdup(definition);

                            printf("\n\nptrNode->p->meaning=  %s\n\n",ptrNode->p->meaning);
                            break;
                          }



                        break;

                    case 'q':

                          if(ptrNode->q == NULL && strlen(this1) > count + 1){
                            ptrNode->q = malloc(sizeof(struct node));
                            ptrNode->q->a = ptrNode->q->b = ptrNode->q->c = ptrNode->q->d = ptrNode->q->e = ptrNode->q->f = ptrNode->q->g = ptrNode->q->h = ptrNode->q->i = NULL;
                            ptrNode->q->j = ptrNode->q->k = ptrNode->q->l = ptrNode->q->m = ptrNode->q->n = ptrNode->q->o = ptrNode->q->p = ptrNode->q->q = NULL;
                            ptrNode->q->r = ptrNode->q->s = ptrNode->q->t = ptrNode->q->u = ptrNode->q->v = ptrNode->q->w = ptrNode->q->x = ptrNode->q->y = ptrNode->q->z = NULL;
                              count++;
                              add_node(this1,ptrNode->q,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->q != NULL){
                              count++;
                              add_node(this1,ptrNode->q,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->q == NULL){

                            ptrNode->q = malloc(sizeof(struct node));
                            ptrNode->q->a = ptrNode->q->b = ptrNode->q->c = ptrNode->q->d = ptrNode->q->e = ptrNode->q->f = ptrNode->q->g = ptrNode->q->h = ptrNode->q->i = NULL;
                            ptrNode->q->j = ptrNode->q->k = ptrNode->q->l = ptrNode->q->m = ptrNode->q->n = ptrNode->q->o = ptrNode->q->p = ptrNode->q->q = NULL;
                            ptrNode->q->r = ptrNode->q->s = ptrNode->q->t = ptrNode->q->u = ptrNode->q->v = ptrNode->q->w = ptrNode->q->x = ptrNode->q->y = ptrNode->q->z = NULL;

                            ptrNode->q->meaning = strdup(definition);


                            printf("\n\nptrNode->q->meaning=  %s\n\n",ptrNode->q->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->q != NULL){
                              ptrNode->q->meaning = strdup(definition);

                            printf("\n\nptrNode->q->meaning=  %s\n\n",ptrNode->q->meaning);
                            break;
                          }



                        break;

                    case 'r':

                          if(ptrNode->r == NULL && strlen(this1) > count + 1){
                            ptrNode->r = malloc(sizeof(struct node));
                            ptrNode->r->a = ptrNode->r->b = ptrNode->r->c = ptrNode->r->d = ptrNode->r->e = ptrNode->r->f = ptrNode->r->g = ptrNode->r->h = ptrNode->r->i = NULL;
                            ptrNode->r->j = ptrNode->r->k = ptrNode->r->l = ptrNode->r->m = ptrNode->r->n = ptrNode->r->o = ptrNode->r->p = ptrNode->r->q = NULL;
                            ptrNode->r->r = ptrNode->r->s = ptrNode->r->t = ptrNode->r->u = ptrNode->r->v = ptrNode->r->w = ptrNode->r->x = ptrNode->r->y = ptrNode->r->z = NULL;
                              count++;
                              add_node(this1,ptrNode->r,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->r != NULL){
                              count++;
                              add_node(this1,ptrNode->r,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->r == NULL){

                            ptrNode->r = malloc(sizeof(struct node));
                            ptrNode->r->a = ptrNode->r->b = ptrNode->r->c = ptrNode->r->d = ptrNode->r->e = ptrNode->r->f = ptrNode->r->g = ptrNode->r->h = ptrNode->r->i = NULL;
                            ptrNode->r->j = ptrNode->r->k = ptrNode->r->l = ptrNode->r->m = ptrNode->r->n = ptrNode->r->o = ptrNode->r->p = ptrNode->r->q = NULL;
                            ptrNode->r->r = ptrNode->r->s = ptrNode->r->t = ptrNode->r->u = ptrNode->r->v = ptrNode->r->w = ptrNode->r->x = ptrNode->r->y = ptrNode->r->z = NULL;

                            ptrNode->r->meaning = strdup(definition);


                            printf("\n\nptrNode->r->meaning=  %s\n\n",ptrNode->r->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->r != NULL){
                              ptrNode->r->meaning = strdup(definition);

                            printf("\n\nptrNode->r->meaning=  %s\n\n",ptrNode->r->meaning);
                            break;
                          }



                        break;

                    case 's':

                          if(ptrNode->s == NULL && strlen(this1) > count + 1){
                            ptrNode->s = malloc(sizeof(struct node));
                            ptrNode->s->a = ptrNode->s->b = ptrNode->s->c = ptrNode->s->d = ptrNode->s->e = ptrNode->s->f = ptrNode->s->g = ptrNode->s->h = ptrNode->s->i = NULL;
                            ptrNode->s->j = ptrNode->s->k = ptrNode->s->l = ptrNode->s->m = ptrNode->s->n = ptrNode->s->o = ptrNode->s->p = ptrNode->s->q = NULL;
                            ptrNode->s->r = ptrNode->s->s = ptrNode->s->t = ptrNode->s->u = ptrNode->s->v = ptrNode->s->w = ptrNode->s->x = ptrNode->s->y = ptrNode->s->z = NULL;
                              count++;
                              add_node(this1,ptrNode->s,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->s != NULL){
                              count++;
                              add_node(this1,ptrNode->s,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->s == NULL){

                            ptrNode->s = malloc(sizeof(struct node));
                            ptrNode->s->a = ptrNode->s->b = ptrNode->s->c = ptrNode->s->d = ptrNode->s->e = ptrNode->s->f = ptrNode->s->g = ptrNode->s->h = ptrNode->s->i = NULL;
                            ptrNode->s->j = ptrNode->s->k = ptrNode->s->l = ptrNode->s->m = ptrNode->s->n = ptrNode->s->o = ptrNode->s->p = ptrNode->s->q = NULL;
                            ptrNode->s->r = ptrNode->s->s = ptrNode->s->t = ptrNode->s->u = ptrNode->s->v = ptrNode->s->w = ptrNode->s->x = ptrNode->s->y = ptrNode->s->z = NULL;

                            ptrNode->s->meaning = strdup(definition);


                            printf("\n\nptrNode->s->meaning=  %s\n\n",ptrNode->s->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->s != NULL){
                              ptrNode->s->meaning = strdup(definition);

                            printf("\n\nptrNode->s->meaning=  %s\n\n",ptrNode->s->meaning);
                            break;
                          }



                        break;

                    case 't':

                          if(ptrNode->t == NULL && strlen(this1) > count + 1){
                            ptrNode->t = malloc(sizeof(struct node));
                            ptrNode->t->a = ptrNode->t->b = ptrNode->t->c = ptrNode->t->d = ptrNode->t->e = ptrNode->t->f = ptrNode->t->g = ptrNode->t->h = ptrNode->t->i = NULL;
                            ptrNode->t->j = ptrNode->t->k = ptrNode->t->l = ptrNode->t->m = ptrNode->t->n = ptrNode->t->o = ptrNode->t->p = ptrNode->t->q = NULL;
                            ptrNode->t->r = ptrNode->t->s = ptrNode->t->t = ptrNode->t->u = ptrNode->t->v = ptrNode->t->w = ptrNode->t->x = ptrNode->t->y = ptrNode->t->z = NULL;
                              count++;
                              add_node(this1,ptrNode->t,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->t != NULL){
                              count++;
                              add_node(this1,ptrNode->t,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->t == NULL){

                            ptrNode->t = malloc(sizeof(struct node));
                            ptrNode->t->a = ptrNode->t->b = ptrNode->t->c = ptrNode->t->d = ptrNode->t->e = ptrNode->t->f = ptrNode->t->g = ptrNode->t->h = ptrNode->t->i = NULL;
                            ptrNode->t->j = ptrNode->t->k = ptrNode->t->l = ptrNode->t->m = ptrNode->t->n = ptrNode->t->o = ptrNode->t->p = ptrNode->t->q = NULL;
                            ptrNode->t->r = ptrNode->t->s = ptrNode->t->t = ptrNode->t->u = ptrNode->t->v = ptrNode->t->w = ptrNode->t->x = ptrNode->t->y = ptrNode->t->z = NULL;

                            ptrNode->t->meaning = strdup(definition);


                            printf("\n\nptrNode->t->meaning=  %s\n\n",ptrNode->t->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->t != NULL){
                              ptrNode->t->meaning = strdup(definition);

                            printf("\n\nptrNode->t->meaning=  %s\n\n",ptrNode->t->meaning);
                            break;
                          }



                        break;

                    case 'u':

                          if(ptrNode->u == NULL && strlen(this1) > count + 1){
                            ptrNode->u = malloc(sizeof(struct node));
                            ptrNode->u->a = ptrNode->u->b = ptrNode->u->c = ptrNode->u->d = ptrNode->u->e = ptrNode->u->f = ptrNode->u->g = ptrNode->u->h = ptrNode->u->i = NULL;
                            ptrNode->u->j = ptrNode->u->k = ptrNode->u->l = ptrNode->u->m = ptrNode->u->n = ptrNode->u->o = ptrNode->u->p = ptrNode->u->q = NULL;
                            ptrNode->u->r = ptrNode->u->s = ptrNode->u->t = ptrNode->u->u = ptrNode->u->v = ptrNode->u->w = ptrNode->u->x = ptrNode->u->y = ptrNode->u->z = NULL;
                              count++;
                              add_node(this1,ptrNode->u,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->u != NULL){
                              count++;
                              add_node(this1,ptrNode->u,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->u == NULL){

                            ptrNode->u = malloc(sizeof(struct node));
                            ptrNode->u->a = ptrNode->u->b = ptrNode->u->c = ptrNode->u->d = ptrNode->u->e = ptrNode->u->f = ptrNode->u->g = ptrNode->u->h = ptrNode->u->i = NULL;
                            ptrNode->u->j = ptrNode->u->k = ptrNode->u->l = ptrNode->u->m = ptrNode->u->n = ptrNode->u->o = ptrNode->u->p = ptrNode->u->q = NULL;
                            ptrNode->u->r = ptrNode->u->s = ptrNode->u->t = ptrNode->u->u = ptrNode->u->v = ptrNode->u->w = ptrNode->u->x = ptrNode->u->y = ptrNode->u->z = NULL;

                            ptrNode->u->meaning = strdup(definition);


                            printf("\n\nptrNode->u->meaning=  %s\n\n",ptrNode->u->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->u != NULL){
                              ptrNode->u->meaning = strdup(definition);

                            printf("\n\nptrNode->u->meaning=  %s\n\n",ptrNode->u->meaning);
                            break;
                          }



                        break;

                    case 'v':

                          if(ptrNode->v == NULL && strlen(this1) > count + 1){
                            ptrNode->v = malloc(sizeof(struct node));
                            ptrNode->v->a = ptrNode->v->b = ptrNode->v->c = ptrNode->v->d = ptrNode->v->e = ptrNode->v->f = ptrNode->v->g = ptrNode->v->h = ptrNode->v->i = NULL;
                            ptrNode->v->j = ptrNode->v->k = ptrNode->v->l = ptrNode->v->m = ptrNode->v->n = ptrNode->v->o = ptrNode->v->p = ptrNode->v->q = NULL;
                            ptrNode->v->r = ptrNode->v->s = ptrNode->v->t = ptrNode->v->u = ptrNode->v->v = ptrNode->v->w = ptrNode->v->x = ptrNode->v->y = ptrNode->v->z = NULL;
                              count++;
                              add_node(this1,ptrNode->v,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->c != NULL){
                              count++;
                              add_node(this1,ptrNode->v,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->v == NULL){

                            ptrNode->v = malloc(sizeof(struct node));
                            ptrNode->v->a = ptrNode->v->b = ptrNode->v->c = ptrNode->v->d = ptrNode->v->e = ptrNode->v->f = ptrNode->v->g = ptrNode->v->h = ptrNode->v->i = NULL;
                            ptrNode->v->j = ptrNode->v->k = ptrNode->v->l = ptrNode->v->m = ptrNode->v->n = ptrNode->v->o = ptrNode->v->p = ptrNode->v->q = NULL;
                            ptrNode->v->r = ptrNode->v->s = ptrNode->v->t = ptrNode->v->u = ptrNode->v->v = ptrNode->v->w = ptrNode->v->x = ptrNode->v->y = ptrNode->v->z = NULL;

                            ptrNode->v->meaning = strdup(definition);


                            printf("\n\nptrNode->v->meaning=  %s\n\n",ptrNode->v->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->v != NULL){
                              ptrNode->v->meaning = strdup(definition);

                            printf("\n\nptrNode->v->meaning=  %s\n\n",ptrNode->v->meaning);
                            break;
                          }



                        break;

                    case 'w':

                          if(ptrNode->w == NULL && strlen(this1) > count + 1){
                            ptrNode->w = malloc(sizeof(struct node));
                            ptrNode->w->a = ptrNode->w->b = ptrNode->w->c = ptrNode->w->d = ptrNode->w->e = ptrNode->w->f = ptrNode->w->g = ptrNode->w->h = ptrNode->w->i = NULL;
                            ptrNode->w->j = ptrNode->w->k = ptrNode->w->l = ptrNode->w->m = ptrNode->w->n = ptrNode->w->o = ptrNode->w->p = ptrNode->w->q = NULL;
                            ptrNode->w->r = ptrNode->w->s = ptrNode->w->t = ptrNode->w->u = ptrNode->w->v = ptrNode->w->w = ptrNode->w->x = ptrNode->w->y = ptrNode->w->z = NULL;
                              count++;
                              add_node(this1,ptrNode->w,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->w != NULL){
                              count++;
                              add_node(this1,ptrNode->w,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->w == NULL){

                            ptrNode->w = malloc(sizeof(struct node));
                            ptrNode->w->a = ptrNode->w->b = ptrNode->w->c = ptrNode->w->d = ptrNode->w->e = ptrNode->w->f = ptrNode->w->g = ptrNode->w->h = ptrNode->w->i = NULL;
                            ptrNode->w->j = ptrNode->w->k = ptrNode->w->l = ptrNode->w->m = ptrNode->w->n = ptrNode->w->o = ptrNode->w->p = ptrNode->w->q = NULL;
                            ptrNode->w->r = ptrNode->w->s = ptrNode->w->t = ptrNode->w->u = ptrNode->w->v = ptrNode->w->w = ptrNode->w->x = ptrNode->w->y = ptrNode->w->z = NULL;

                            ptrNode->w->meaning = strdup(definition);


                            printf("\n\nptrNode->w->meaning=  %s\n\n",ptrNode->w->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->w != NULL){
                              ptrNode->w->meaning = strdup(definition);

                            printf("\n\nptrNode->w->meaning=  %s\n\n",ptrNode->w->meaning);
                            break;
                          }



                        break;

                    case 'x':

                          if(ptrNode->x == NULL && strlen(this1) > count + 1){
                            ptrNode->x = malloc(sizeof(struct node));
                            ptrNode->x->a = ptrNode->x->b = ptrNode->x->c = ptrNode->x->d = ptrNode->x->e = ptrNode->x->f = ptrNode->x->g = ptrNode->x->h = ptrNode->x->i = NULL;
                            ptrNode->x->j = ptrNode->x->k = ptrNode->x->l = ptrNode->x->m = ptrNode->x->n = ptrNode->x->o = ptrNode->x->p = ptrNode->x->q = NULL;
                            ptrNode->x->r = ptrNode->x->s = ptrNode->x->t = ptrNode->x->u = ptrNode->x->v = ptrNode->x->w = ptrNode->x->x = ptrNode->x->y = ptrNode->x->z = NULL;
                              count++;
                              add_node(this1,ptrNode->x,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->x != NULL){
                              count++;
                              add_node(this1,ptrNode->x,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->x == NULL){

                            ptrNode->x = malloc(sizeof(struct node));
                            ptrNode->x->a = ptrNode->x->b = ptrNode->x->c = ptrNode->x->d = ptrNode->x->e = ptrNode->x->f = ptrNode->x->g = ptrNode->x->h = ptrNode->x->i = NULL;
                            ptrNode->x->j = ptrNode->x->k = ptrNode->x->l = ptrNode->x->m = ptrNode->x->n = ptrNode->x->o = ptrNode->x->p = ptrNode->x->q = NULL;
                            ptrNode->x->r = ptrNode->x->s = ptrNode->x->t = ptrNode->x->u = ptrNode->x->v = ptrNode->x->w = ptrNode->x->x = ptrNode->x->y = ptrNode->x->z = NULL;

                            ptrNode->x->meaning = strdup(definition);


                            printf("\n\nptrNode->x->meaning=  %s\n\n",ptrNode->x->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->x != NULL){
                              ptrNode->x->meaning = strdup(definition);

                            printf("\n\nptrNode->x->meaning=  %s\n\n",ptrNode->x->meaning);
                            break;
                          }



                        break;

                    case 'y':

                          if(ptrNode->y == NULL && strlen(this1) > count + 1){
                            ptrNode->y = malloc(sizeof(struct node));
                            ptrNode->y->a = ptrNode->y->b = ptrNode->y->c = ptrNode->y->d = ptrNode->y->e = ptrNode->y->f = ptrNode->y->g = ptrNode->y->h = ptrNode->y->i = NULL;
                            ptrNode->y->j = ptrNode->y->k = ptrNode->y->l = ptrNode->y->m = ptrNode->y->n = ptrNode->y->o = ptrNode->y->p = ptrNode->y->q = NULL;
                            ptrNode->y->r = ptrNode->y->s = ptrNode->y->t = ptrNode->y->u = ptrNode->y->v = ptrNode->y->w = ptrNode->y->x = ptrNode->y->y = ptrNode->y->z = NULL;
                              count++;
                              add_node(this1,ptrNode->y,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->y != NULL){
                              count++;
                              add_node(this1,ptrNode->y,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->y == NULL){

                            ptrNode->y = malloc(sizeof(struct node));
                            ptrNode->y->a = ptrNode->y->b = ptrNode->y->c = ptrNode->y->d = ptrNode->y->e = ptrNode->y->f = ptrNode->y->g = ptrNode->y->h = ptrNode->y->i = NULL;
                            ptrNode->y->j = ptrNode->y->k = ptrNode->y->l = ptrNode->y->m = ptrNode->y->n = ptrNode->y->o = ptrNode->y->p = ptrNode->y->q = NULL;
                            ptrNode->y->r = ptrNode->y->s = ptrNode->y->t = ptrNode->y->u = ptrNode->y->v = ptrNode->y->w = ptrNode->y->x = ptrNode->y->y = ptrNode->y->z = NULL;

                            ptrNode->y->meaning = strdup(definition);


                            printf("\n\nptrNode->y->meaning=  %s\n\n",ptrNode->y->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->y != NULL){
                              ptrNode->y->meaning = strdup(definition);

                            printf("\n\nptrNode->y->meaning=  %s\n\n",ptrNode->y->meaning);
                            break;
                          }



                        break;

                    case 'z':

                          if(ptrNode->z == NULL && strlen(this1) > count + 1){
                            ptrNode->z = malloc(sizeof(struct node));
                            ptrNode->z->a = ptrNode->z->b = ptrNode->z->c = ptrNode->z->d = ptrNode->z->e = ptrNode->z->f = ptrNode->z->g = ptrNode->z->h = ptrNode->z->i = NULL;
                            ptrNode->z->j = ptrNode->z->k = ptrNode->z->l = ptrNode->z->m = ptrNode->z->n = ptrNode->z->o = ptrNode->z->p = ptrNode->z->q = NULL;
                            ptrNode->z->r = ptrNode->z->s = ptrNode->z->t = ptrNode->z->u = ptrNode->z->v = ptrNode->z->w = ptrNode->z->x = ptrNode->z->y = ptrNode->z->z = NULL;
                              count++;
                              add_node(this1,ptrNode->z,count,definition);
                              break;

                          }


                          if(count + 1 < strlen(this1) && ptrNode->z != NULL){
                              count++;
                              add_node(this1,ptrNode->z,count,definition);
                              break;
                          }


                          if(count + 1 == strlen(this1) && ptrNode->z == NULL){

                            ptrNode->z = malloc(sizeof(struct node));
                            ptrNode->z->a = ptrNode->z->b = ptrNode->z->c = ptrNode->z->d = ptrNode->z->e = ptrNode->z->f = ptrNode->z->g = ptrNode->z->h = ptrNode->z->i = NULL;
                            ptrNode->z->j = ptrNode->z->k = ptrNode->z->l = ptrNode->z->m = ptrNode->z->n = ptrNode->z->o = ptrNode->z->p = ptrNode->z->q = NULL;
                            ptrNode->z->r = ptrNode->z->s = ptrNode->z->t = ptrNode->z->u = ptrNode->z->v = ptrNode->z->w = ptrNode->z->x = ptrNode->z->y = ptrNode->z->z = NULL;

                            ptrNode->z->meaning = strdup(definition);


                            printf("\n\nptrNode->z->meaning=  %s\n\n",ptrNode->z->meaning);
                            break;
                          }



                          if(count + 1 == strlen(this1) && ptrNode->z != NULL){
                              ptrNode->z->meaning = strdup(definition);

                            printf("\n\nptrNode->z->meaning=  %s\n\n",ptrNode->z->meaning);
                            break;
                          }
                        break;
                        return;

    }  return;
}


















