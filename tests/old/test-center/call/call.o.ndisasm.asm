00000000  4C                dec sp
00000001  0103              add [bp+di],ax
00000003  0000              add [bx+si],al
00000005  0000              add [bx+si],al
00000007  00F2              add dl,dh
00000009  0000              add [bx+si],al
0000000B  000C              add [si],cl
0000000D  0000              add [bx+si],al
0000000F  0000              add [bx+si],al
00000011  0004              add [si],al
00000013  012E7465          add [0x6574],bp
00000017  7874              js 0x8d
00000019  0000              add [bx+si],al
0000001B  0000              add [bx+si],al
0000001D  0000              add [bx+si],al
0000001F  0000              add [bx+si],al
00000021  0000              add [bx+si],al
00000023  005C00            add [si+0x0],bl
00000026  0000              add [bx+si],al
00000028  8C00              mov [bx+si],es
0000002A  0000              add [bx+si],al
0000002C  E80000            call word 0x2f
0000002F  0000              add [bx+si],al
00000031  0000              add [bx+si],al
00000033  0001              add [bx+di],al
00000035  0000              add [bx+si],al
00000037  0020              add [bx+si],ah
00000039  0030              add [bx+si],dh
0000003B  60                pushaw
0000003C  2E6461            fs popaw
0000003F  7461              jz 0xa2
00000041  0000              add [bx+si],al
00000043  0000              add [bx+si],al
00000045  0000              add [bx+si],al
00000047  0000              add [bx+si],al
00000049  0000              add [bx+si],al
0000004B  0000              add [bx+si],al
0000004D  0000              add [bx+si],al
0000004F  0000              add [bx+si],al
00000051  0000              add [bx+si],al
00000053  0000              add [bx+si],al
00000055  0000              add [bx+si],al
00000057  0000              add [bx+si],al
00000059  0000              add [bx+si],al
0000005B  0000              add [bx+si],al
0000005D  0000              add [bx+si],al
0000005F  004000            add [bx+si+0x0],al
00000062  30C0              xor al,al
00000064  2E627373          bound si,[cs:bp+di+0x73]
00000068  0000              add [bx+si],al
0000006A  0000              add [bx+si],al
0000006C  0000              add [bx+si],al
0000006E  0000              add [bx+si],al
00000070  0000              add [bx+si],al
00000072  0000              add [bx+si],al
00000074  0000              add [bx+si],al
00000076  0000              add [bx+si],al
00000078  0000              add [bx+si],al
0000007A  0000              add [bx+si],al
0000007C  0000              add [bx+si],al
0000007E  0000              add [bx+si],al
00000080  0000              add [bx+si],al
00000082  0000              add [bx+si],al
00000084  0000              add [bx+si],al
00000086  0000              add [bx+si],al
00000088  800030            add byte [bx+si],0x30
0000008B  C05589E5          rcl byte [di-0x77],0xe5
0000008F  83EC10            sub sp,byte +0x10
00000092  8B4508            mov ax,[di+0x8]
00000095  8B00              mov ax,[bx+si]
00000097  8945FC            mov [di-0x4],ax
0000009A  8B450C            mov ax,[di+0xc]
0000009D  8B10              mov dx,[bx+si]
0000009F  8B4508            mov ax,[di+0x8]
000000A2  8910              mov [bx+si],dx
000000A4  8B450C            mov ax,[di+0xc]
000000A7  8B55FC            mov dx,[di-0x4]
000000AA  8910              mov [bx+si],dx
000000AC  C9                leave
000000AD  C3                ret
000000AE  55                push bp
000000AF  89E5              mov bp,sp
000000B1  83E4F0            and sp,byte -0x10
000000B4  83EC20            sub sp,byte +0x20
000000B7  E80000            call word 0xba
000000BA  0000              add [bx+si],al
000000BC  C744241C02        mov word [si+0x24],0x21c
000000C1  0000              add [bx+si],al
000000C3  00C7              add bh,al
000000C5  44                inc sp
000000C6  2418              and al,0x18
000000C8  0100              add [bx+si],ax
000000CA  0000              add [bx+si],al
000000CC  8D4424            lea ax,[si+0x24]
000000CF  18894424          sbb [bx+di+0x2444],cl
000000D3  048D              add al,0x8d
000000D5  44                inc sp
000000D6  241C              and al,0x1c
000000D8  8904              mov [si],ax
000000DA  24E8              and al,0xe8
000000DC  AC                lodsb
000000DD  FF                db 0xff
000000DE  FF                db 0xff
000000DF  FF                db 0xff
000000E0  B8FFFF            mov ax,0xffff
000000E3  0000              add [bx+si],al
000000E5  C9                leave
000000E6  C3                ret
000000E7  90                nop
000000E8  2C00              sub al,0x0
000000EA  0000              add [bx+si],al
000000EC  0B00              or ax,[bx+si]
000000EE  0000              add [bx+si],al
000000F0  1400              adc al,0x0
000000F2  2E66696C65000000  imul ebp,[cs:si+0x65],dword 0x0
         -00
000000FB  0000              add [bx+si],al
000000FD  00FE              add dh,bh
000000FF  FF00              inc word [bx+si]
00000101  006701            add [bx+0x1],ah
00000104  63616C            arpl [bx+di+0x6c],sp
00000107  6C                insb
00000108  2E6300            arpl [cs:bx+si],ax
0000010B  0000              add [bx+si],al
0000010D  0000              add [bx+si],al
0000010F  0000              add [bx+si],al
00000111  0000              add [bx+si],al
00000113  0000              add [bx+si],al
00000115  005F73            add [bx+0x73],bl
00000118  7761              ja 0x17b
0000011A  7000              jo 0x11c
0000011C  0000              add [bx+si],al
0000011E  0000              add [bx+si],al
00000120  0000              add [bx+si],al
00000122  0100              add [bx+si],ax
00000124  2000              and [bx+si],al
00000126  0201              add al,[bx+di]
00000128  0000              add [bx+si],al
0000012A  0000              add [bx+si],al
0000012C  0000              add [bx+si],al
0000012E  0000              add [bx+si],al
00000130  0000              add [bx+si],al
00000132  0000              add [bx+si],al
00000134  0000              add [bx+si],al
00000136  0000              add [bx+si],al
00000138  0000              add [bx+si],al
0000013A  5F                pop di
0000013B  6D                insw
0000013C  61                popaw
0000013D  696E000000        imul bp,[bp+0x0],word 0x0
00000142  2200              and al,[bx+si]
00000144  0000              add [bx+si],al
00000146  0100              add [bx+si],ax
00000148  2000              and [bx+si],al
0000014A  0200              add al,[bx+si]
0000014C  2E7465            cs jz 0x1b4
0000014F  7874              js 0x1c5
00000151  0000              add [bx+si],al
00000153  0000              add [bx+si],al
00000155  0000              add [bx+si],al
00000157  0001              add [bx+di],al
00000159  0000              add [bx+si],al
0000015B  0003              add [bp+di],al
0000015D  015B00            add [bp+di+0x0],bx
00000160  0000              add [bx+si],al
00000162  0100              add [bx+si],ax
00000164  0000              add [bx+si],al
00000166  0000              add [bx+si],al
00000168  0000              add [bx+si],al
0000016A  0000              add [bx+si],al
0000016C  0000              add [bx+si],al
0000016E  0000              add [bx+si],al
00000170  2E6461            fs popaw
00000173  7461              jz 0x1d6
00000175  0000              add [bx+si],al
00000177  0000              add [bx+si],al
00000179  0000              add [bx+si],al
0000017B  0002              add [bp+si],al
0000017D  0000              add [bx+si],al
0000017F  0003              add [bp+di],al
00000181  0100              add [bx+si],ax
00000183  0000              add [bx+si],al
00000185  0000              add [bx+si],al
00000187  0000              add [bx+si],al
00000189  0000              add [bx+si],al
0000018B  0000              add [bx+si],al
0000018D  0000              add [bx+si],al
0000018F  0000              add [bx+si],al
00000191  0000              add [bx+si],al
00000193  002E6273          add [0x7362],ch
00000197  7300              jnc 0x199
00000199  0000              add [bx+si],al
0000019B  0000              add [bx+si],al
0000019D  0000              add [bx+si],al
0000019F  0003              add [bp+di],al
000001A1  0000              add [bx+si],al
000001A3  0003              add [bp+di],al
000001A5  0100              add [bx+si],ax
000001A7  0000              add [bx+si],al
000001A9  0000              add [bx+si],al
000001AB  0000              add [bx+si],al
000001AD  0000              add [bx+si],al
000001AF  0000              add [bx+si],al
000001B1  0000              add [bx+si],al
000001B3  0000              add [bx+si],al
000001B5  0000              add [bx+si],al
000001B7  005F5F            add [bx+0x5f],bl
000001BA  5F                pop di
000001BB  6D                insw
000001BC  61                popaw
000001BD  696E000000        imul bp,[bp+0x0],word 0x0
000001C2  0000              add [bx+si],al
000001C4  0000              add [bx+si],al
000001C6  2000              and [bx+si],al
000001C8  0200              add al,[bx+si]
000001CA  0400              add al,0x0
000001CC  0000              add [bx+si],al
