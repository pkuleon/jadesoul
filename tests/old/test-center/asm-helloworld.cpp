/**
 * File: asm-helloworld.cpp
 * Description: 
 *
 * Copyright (c) 2011 Jadesoul (Home Page: http://jadesoul.org)
 * Licensed under the GNU General Public License:
 * http://www.gnu.org/licenses/gpl.html
 * 
 * Date: 2011-06-13 23:47:13.762000
 * Written In: Peking University, beijing, China
 */

#include <stdio.h>

int main(int argc, char* argv[]) {
       char szFormat[] = "%s %s\n";
       char szHello[] = "Hello";
       char szWorld[] = " world";
       __asm { 
              MOV     EAX, OFFSET szWorld       ; //把szWorld的地址送到EAX中
              PUSH    EAX; //把EAX值（也就是szWorld的地址）压栈
              MOV     EAX, OFFSET szHello        ;
              PUSH    EAX                                     ;
              MOV     EAX, OFFSET szFormat      ;
              PUSH    EAX                                    ;
              CALL    printf                                      ; //调用printf函数: printf(szFormat, szHello, szWorld);

              // 压入了 3 个参数在堆栈中，调用函数之后要调整堆栈
              ADD     ESP, 12
       }
       return 0;
}