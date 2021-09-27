#include <stdio.h>
/*


//TD 3
//Exo1
int main(void)
{
    int a=0;
    int b=0;
    printf("donne un premier nombre");
    scanf("%d",&a);
    printf("et un deuxième");
    scanf("%d",&b);
    if (a<=b){
        return b;
    }
    else{
        return a;
    }

}

Exo 2

int main (void){
    int longueur=0;
    int largeur=0;
    int perimetre=0;
    int aire=0;
    printf("donne la longueur");
    scanf("%d",&longueur);
    printf("donne la largeur");
    scanf("%d",&largeur);
    perimetre=2*longueur+2*largeur;
    aire=longueur*largeur;
    printf("Le périmètre et l'aire est %d,%d",P,A);
}

Exo3

int main(void){
    int nombre=0;
    printf("donner un nombre");
    scanf("%d",&nombre);
    if (nombre%3==0 && nombre>10){
        return nombre;
    }
    return 0;
}

Exo4


int main(void){
    int age=0;
    int etudiant=0; // 1 si étudiant, 0 sinon
    printf("donner age");
    scanf("%d",&age);
    if (age<12){
        return 4;
    }
    if (age<17){
        return 6;
    }
    if (age>65){
        return 6;
    }
    printf("si tu es étudiant réponds 1, sinon réponds 0");
    scanf("%d",&etudiant);
    if (age<27 && etudiant==1){
        return 6;
    }
    else{
        return 9;

    }
}

Exo 5


int main(void){
    int n=0;
    printf("donner votre numéro");
    scanf("%d",&n);
    switch(n){
        case 1:{
            printf("coca");
            break;
        }
        case 2:{
            printf("ice tea");
            break;
        };
        case 3:{
            printf("jus d'orange");
            break;
        };
        case 10:{
            printf("the");
            break;
        };
        case 11:{
            printf("cafe");

        };
        default:{
            printf("aucune boisson ne correspond à votre demande");
            break;
        }
    }
}


Exo6

int main(void){
    int note1=0; int note2=0; int note3=0; int moyenne=0;
    printf("note1\n");
    scanf("%d",&note1);
    printf("note2\n");
    scanf("%d",&note2);
    printf("note3\n");
    scanf("%d",&note3);
    moyenne=(note1+note2+note3)/3;
    return moyenne;
}


Exo7

int main(void){
    int a=0;
    int n=0;
    int somme=0;
    int nombre_classe=0;
    int nombre_d_eleves=0;
    printf("directeur donne nombre de classe ouverte");
    scanf("%d",&nombre_classe);
    printf("nombre de classe");
    for (a=0;a<nombre_classe;a+=1){
        printf("donner le nombre d'élève dans a classe");
        scanf("%d",&nombre_d_eleves);
        somme+=nombre_d_eleves;
        n+=1;
    }
    return somme;
}

Exo8


int main(void){
    int nombre=1;
    while(!(nombre%14==0)){
        printf("choisir un nombre");
        scanf("%d",&nombre);
    }
    return nombre;
}

Exo9


int main(void){
    int nombre_pierre=0;
    int cpt=0;
    int cpt2=0;
    printf("nombre de pierre");
    scanf("%d",nombre_pierre);
    if (nombre_pierre<1){
        return 0;
    }
    while(nombre_pierre>=cpt2){
        cpt+=1;
        cpt2=cpt*cpt;
    }
    return cpt2; //sqrt cpt2
}

exo10
*/

int main(void){
    float m=0;
    float nombre=0;
    float n=0;
    float somme=0;
    while(nombre>=0){
        printf("nombre");
        scanf("%d",&nombre);
        if (nombre>=0){
        somme+=nombre;
        n+=1;
        }
    }
m =somme/n;
    printf ("la moyenne est %f",m);
    return 0;
}


