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
 * Ακαδημία της Αρτέμιδος(Academy of Artemis) is a loosely connected 
 * network of math learning group, whose members share a common interest 
 * in mathematics and statistics and often exchange their learning 
 * experiences with one another.

 *
 * branch.c 
 * Last edited: 2023/6/16
 ******************************************************************************/
 
 
#include <stdio.h>
#include "words.h"

// with 125 kinds of output
void branch1(int n) {

    switch (n) {
    
        case 111:
            printf("%s\n", gram111);
            break;
        case 112:
            printf("%s\n", gram112);
            break;
        case 113:
            printf("%s\n", gram113);
            break;
        case 114:
            printf("%s\n", gram114);
            break;
        case 121:
            printf("%s\n", gram121);
            break;
        case 122:
            printf("%s\n", gram122);
            break;
        case 123:
            printf("%s\n", gram123);
            break;
        case 124:
            printf("%s\n", gram124);
            break;
        case 131:
            printf("%s\n", gram131);
            break;
        case 132:
            printf("%s\n", gram132);
            break;
        case 133:
            printf("%s\n", gram133);
            break;
        case 134:
            printf("%s\n", gram134);
            break;
        case 141:
            printf("%s\n", gram141);
            break;
        case 142:
            printf("%s\n", gram142);
            break;
        case 143:
            printf("%s\n", gram143);
            break;
        case 144:
            printf("%s\n", gram144);
            break;
            
        case 211:
            printf("%s\n", gram211);
            break;
        case 212:
            printf("%s\n", gram212);
            break;
        case 213:
            printf("%s\n", gram213);
            break;
        case 214:
            printf("%s\n", gram214);
            break;
        case 221:
            printf("%s\n", gram221);
            break;
        case 222:
            printf("%s\n", gram222);
            break;
        case 223:
            printf("%s\n", gram223);
            break;
        case 224:
            printf("%s\n", gram224);
            break;
        case 231:
            printf("%s\n", gram231);
            break;
        case 232:
            printf("%s\n", gram232);
            break;
        case 233:
            printf("%s\n", gram233);
            break;
        case 234:
            printf("%s\n", gram234);
            break;
        case 241:
            printf("%s\n", gram241);
            break;
        case 242:
            printf("%s\n", gram242);
            break;
        case 243:
            printf("%s\n", gram243);
            break;
        case 244:
            printf("%s\n", gram244);
            break;
            
        case 311:
            printf("%s\n", gram311);
            break;
        case 312:
            printf("%s\n", gram312);
            break;
        case 313:
            printf("%s\n", gram313);
            break;
        case 314:
            printf("%s\n", gram314);
            break;
        case 321:
            printf("%s\n", gram321);
            break;
        case 322:
            printf("%s\n", gram322);
            break;
        case 323:
            printf("%s\n", gram323);
            break;
        case 324:
            printf("%s\n", gram324);
            break;
        case 331:
            printf("%s\n", gram331);
            break;
        case 332:
            printf("%s\n", gram332);
            break;
        case 333:
            printf("%s\n", gram333);
            break;
        case 334:
            printf("%s\n", gram334);
            break;
        case 341:
            printf("%s\n", gram341);
            break;
        case 342:
            printf("%s\n", gram342);
            break;
        case 343:
            printf("%s\n", gram343);
            break;
        case 344:
            printf("%s\n", gram344);
            break;
            
        case 411:
            printf("%s\n", gram411);
            break;
        case 412:
            printf("%s\n", gram412);
            break;
        case 413:
            printf("%s\n", gram413);
            break;
        case 414:
            printf("%s\n", gram414);
            break;
        case 421:
            printf("%s\n", gram421);
            break;
        case 422:
            printf("%s\n", gram422);
            break;
        case 423:
            printf("%s\n", gram423);
            break;
        case 424:
            printf("%s\n", gram424);
            break;
        case 431:
            printf("%s\n", gram431);
            break;
        case 432:
            printf("%s\n", gram432);
            break;
        case 433:
            printf("%s\n", gram433);
            break;
        case 434:
            printf("%s\n", gram434);
            break;
        case 441:
            printf("%s\n", gram441);
            break;
        case 442:
            printf("%s\n", gram442);
            break;
        case 443:
            printf("%s\n", gram443);
            break;
        case 444:
            printf("%s\n", gram444);
            break; 
            
        case 110:
            printf("%s\n", gram110);
            break;
        case 120:
            printf("%s\n", gram120);
            break;
        case 130:
            printf("%s\n", gram130);
            break;
        case 140:
            printf("%s\n", gram140);
            break;             
        case 210:
            printf("%s\n", gram210);
            break;
        case 220:
            printf("%s\n", gram220);
            break;
        case 230:
            printf("%s\n", gram230);
            break;
        case 240:
            printf("%s\n", gram240);
            break;                
        case 310:
            printf("%s\n", gram310);
            break;
        case 320:
            printf("%s\n", gram320);
            break;
        case 330:
            printf("%s\n", gram330);
            break;
        case 340:
            printf("%s\n", gram340);
            break;     
        case 410:
            printf("%s\n", gram410);
            break;
        case 420:
            printf("%s\n", gram420);
            break;
        case 430:
            printf("%s\n", gram430);
            break;
        case 440:
            printf("%s\n", gram440);
            break;                 
        
        case 11:
            printf("%s\n", gram11);
            break;
        case 12:
            printf("%s\n", gram12);
            break;
        case 13:
            printf("%s\n", gram13);
            break;
        case 14:
            printf("%s\n", gram14);
            break;                                                                                   
        case 21:
            printf("%s\n", gram21);
            break;
        case 22:
            printf("%s\n", gram22);
            break;
        case 23:
            printf("%s\n", gram23);
            break;
        case 24:
            printf("%s\n", gram24);
            break;                
        case 31:
            printf("%s\n", gram31);
            break;
        case 32:
            printf("%s\n", gram32);
            break;
        case 33:
            printf("%s\n", gram33);
            break;
        case 34:
            printf("%s\n", gram34);
            break;     
        case 41:
            printf("%s\n", gram41);
            break;
        case 42:
            printf("%s\n", gram42);
            break;
        case 43:
            printf("%s\n", gram43);
            break;
        case 44:
            printf("%s\n", gram44);
            break;                 

        case 101:
            printf("%s\n", gram101);
            break;
        case 102:
            printf("%s\n", gram102);
            break;
        case 103:
            printf("%s\n", gram103);
            break;
        case 104:
            printf("%s\n", gram104);
            break;                                                                                 
        case 201:
            printf("%s\n", gram201);
            break;
        case 202:
            printf("%s\n", gram202);
            break;
        case 203:
            printf("%s\n", gram203);
            break;
        case 204:
            printf("%s\n", gram204);
            break;                
        case 301:
            printf("%s\n", gram301);
            break;
        case 302:
            printf("%s\n", gram302);
            break;
        case 303:
            printf("%s\n", gram303);
            break;
        case 304:
            printf("%s\n", gram304);
            break;     
        case 401:
            printf("%s\n", gram401);
            break;
        case 402:
            printf("%s\n", gram402);
            break;
        case 403:
            printf("%s\n", gram403);
            break;           
        case 404:
            printf("%s\n", gram404);
            break;         

        case 100:
            printf("%s\n", gram100);
            break;
        case 200:
            printf("%s\n", gram200);
            break;
        case 300:
            printf("%s\n", gram300);
            break;
        case 400:
            printf("%s\n", gram400);
            break;      
        case 10:
            printf("%s\n", gram10);
            break;
        case 20:
            printf("%s\n", gram20);
            break;
        case 30:
            printf("%s\n", gram30);
            break;
        case 40:
            printf("%s\n", gram40);
            break;      
        case 1:
            printf("%s\n", gram1);
            break;
        case 2:
            printf("%s\n", gram2);
            break;
        case 3:
            printf("%s\n", gram3);
            break;
        case 4:
            printf("%s\n", gram4);
            break; 
                                                                 
        // 000                                                             
        default:
            printf("%s\n", gram0);
            break;
    }
}
