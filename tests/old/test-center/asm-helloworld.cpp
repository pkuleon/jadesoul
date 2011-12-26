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
              MOV     EAX, OFFSET szWorld       ; //��szWorld�ĵ�ַ�͵�EAX��
              PUSH    EAX; //��EAXֵ��Ҳ����szWorld�ĵ�ַ��ѹջ
              MOV     EAX, OFFSET szHello        ;
              PUSH    EAX                                     ;
              MOV     EAX, OFFSET szFormat      ;
              PUSH    EAX                                    ;
              CALL    printf                                      ; //����printf����: printf(szFormat, szHello, szWorld);

              // ѹ���� 3 �������ڶ�ջ�У����ú���֮��Ҫ������ջ
              ADD     ESP, 12
       }
       return 0;
}