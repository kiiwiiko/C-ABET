/*En una Institución educativa se almacenan datos sobre el número de alumnos que han ingresado a sus
diferentes carreras en los dos semestres anuales y en los últimos 5 años. Cada carrera tiene un 
numero asociado que la identifica: 1. Ingeniería de Software. 2. Administración. 3. Economía.
4. Relaciones Internacionales. 5. Matemáticas. 6. Contabilidad. 7. Ingeniería Industrial.
Escriba un programa que calcule:
a) El año en que ingresó la mayor cantidad de alumnos a la universidad.
b) La Carrera que recibió la mayor cantidad de alumnos en el último año.
c) ¿En qué año la carrera de Ingeniería de Software recibió la mayor cantidad de alumnos?*/

/*Anthony Almeida-Jeison Quimi-Romina Villavicencio*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
    //se utiliza srand para cada vez que se corre salgan numeros diferentes
    srand(time(NULL));

    int suma, ingresos=0, año=0;
    int alumnos=0, carrera=0;
    int sof=0, años=0;
    int car[6][8];

    for (int i = 1; i < 6; i++)
    {
        suma=0;
        for (int j = 1; j < 8; j++)
        {
            car[i][j]=rand()%300;
            suma+=car[i][j];
        if (i==5 && car[i][j]> alumnos)
        {
            alumnos=car[i][j];
            carrera=j;
        }
        if (j==1 && car[i][j] >sof)
        {
            sof=car[i][j];
            años=i;
        }
        

        }

        if (suma>ingresos)
        {
            ingresos=suma;
            año=i;
        }
        
    }

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 8; j++)
        {
            printf("anio #%d. carrera #%d %d \n", i, j, car[i][j]);
        }
        
    }
    printf("a) El año en que ingresó la mayor cantidad de alumnos a la universidad fue el #%d con %d estudiantes \n", año, ingresos);
    printf("b) La Carrera que recibió la mayor cantidad de alumnos en el último año fue la carrera #%d con %d estudiantes \n", carrera, alumnos);
    printf("LEYENDA DE CARRERAS \n");
    printf(" 1. Ingeniería de Software \n 2. Administración \n 3. Economía\n 4. Relaciones Internacionales\n 5. Matemáticas\n 6. Contabilidad\n 7. Ingeniería Industrial\n");
    printf("c) El año en que la carrera de Ingeniería de Software recibió la mayor cantidad de alumnos fue el #%d con %d estudiantes \n", años, sof);
    
    return 0;
}