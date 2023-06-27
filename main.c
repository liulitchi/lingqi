/******************************************************************************
 * Copyright (C) 2023 Nymph <Academy of Artemis>
 * Copyright (C) 2023 liulitchi <kz-xy@163.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 *
 * Ακαδημία της Αρτέμιδος(Academy of Artemis) is a loosely connected 
 * network of math learning group, whose members share a common interest 
 * in mathematics and statistics and often exchange their learning 
 * experiences with one another.
 *  
 * main.c 
 * Last edited: 2023/6/23
 ******************************************************************************/


#if defined(__linux__) || defined(__APPLE__)
    #include <unistd.h>
#elif defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
#endif

void sleeps(int Time) {
    #if defined(__linux__) || defined(__APPLE__)
        sleep(Time);
    #elif defined(_WIN32) || defined(_WIN64)
        Sleep((Time*1000));
    #endif
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "branch.h"

int main(void) {

    // combination(4, x), x from 0 to 4
    int comb4[16] = {0, 1, 1, 1, 1, 2, 2, 2, 2, 2, 2, 3, 3, 3, 3, 4};
    int value = 0; 
    srand((unsigned)time(NULL)) ;


    int i = rand() % 16; // top
    int j = rand() % 16; // middle
    int k = rand() % 16; // down

    value = 100 * comb4[i] + 10 * comb4[j] + comb4[k];
    
    sleeps(3);
    printf("天清地宁，河图秉灵。\n");
    sleeps(3);
    printf("焚香一炷，十方肃清。\n");
    sleeps(3);
    printf("发鼓三通，万神咸听：\n");
    
    sleeps(3);    
    puts("天地合德，四时合序。");
    sleeps(3);
    puts("皇天无私，惟德是辅。"); 
    sleeps(3);
    puts("吉当言吉，凶当言凶。");
    sleeps(3);
    puts("得失是非，惟卦是推。");
    
    sleeps(3);   
    printf("\n\n");
    puts("出卦中……");
    printf("\n\n");
    sleeps(12);
    //printf("value = %d\n", value);
    branch1(value);
    
    return 0;
}

