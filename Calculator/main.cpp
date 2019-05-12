//
//  main.cpp
//  Calculator
//
//  Created by Андрей Коноплев on 12/05/2019.
//  Copyright © 2019 Андрей Коноплев. All rights reserved.
//
#include <stdio.h>

//MARK: -  Калькулятор
void calculate() {
    double a, b, c;
    char d;
    int p = 1;
    while (p != 2)
    {
        printf("1- Колькулятор \n2 - Выход\n");
        printf("Ввод: ");
        scanf("%d", &p);
        if (p != 1) break;
        printf("Введите первое число: ");
        scanf("%lf", &a);
        printf("Второе число: ");
        scanf("%lf", &b);
        printf("Что с ними сделать?:");
        scanf("%s", &d);
        while(getchar() != '\n');
        switch(d)
        {
            case '+': c = a + b; break;
            case '-': c = a - b; break;
            case '*': c = a * b; break;
            case '/': c = a / b; break;
            default:
                printf("Вы сделали что то не так\n");
                continue;
        }
        printf("Результат = %lf\n", c);
    }
}

//MARK:
//Дан вещественный массив A[5][5]. Опpеделить значения вещественного массива E[5] по правилу: E[i]=сумме значений i‐й строки массива A, если A[i][4]>0
//E[i]=0 A[i][4]<=0
//Значение переменной i изменяется от 0 до 4.
int exercise() {
    const int N = 5, M = 5;
    double A[N][M], D[N];
    for(int s = 0; s < N; s++) {
        for(int st = 0; st < M; st++) {
            printf("C[%d][%d]: ", s + 1, st + 1);
            if(scanf("%lf", & A[s][st]) != 1) {
                fprintf(stderr, "Ошибка");
                return -1;
            }
        }
    }
    
    for(int i = 0; i < 4; i++) {
        if(A[i][4] > 0) {
            //k - сумма значений i строки
            int k = 0;
            for(int j = 0; j < N; j++) {
                k = k + A[i][j];
            }
            D[i] = k;
        } else { D[i] = 0; }
    }
    
    printf("------------------------\n");
    for(int j = 0; j < N; j++) {
        printf(" E[%d]: %g\n", j + 1, D[j]);
    }
    
    return 0;
}

int main()
{
    
    //calculate();
    exercise();

}




