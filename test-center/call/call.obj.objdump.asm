
call.obj:     file format pe-i386


Disassembly of section .text:

00000000 <_swap>:
   0:	55                   	push   %ebp
   1:	8b ec                	mov    %esp,%ebp
   3:	51                   	push   %ecx
   4:	8b 45 08             	mov    0x8(%ebp),%eax
   7:	8b 08                	mov    (%eax),%ecx
   9:	89 4d fc             	mov    %ecx,-0x4(%ebp)
   c:	8b 55 08             	mov    0x8(%ebp),%edx
   f:	8b 45 0c             	mov    0xc(%ebp),%eax
  12:	8b 08                	mov    (%eax),%ecx
  14:	89 0a                	mov    %ecx,(%edx)
  16:	8b 55 0c             	mov    0xc(%ebp),%edx
  19:	8b 45 fc             	mov    -0x4(%ebp),%eax
  1c:	89 02                	mov    %eax,(%edx)
  1e:	8b e5                	mov    %ebp,%esp
  20:	5d                   	pop    %ebp
  21:	c3                   	ret    
  22:	cc                   	int3   
  23:	cc                   	int3   
  24:	cc                   	int3   
  25:	cc                   	int3   
  26:	cc                   	int3   
  27:	cc                   	int3   
  28:	cc                   	int3   
  29:	cc                   	int3   
  2a:	cc                   	int3   
  2b:	cc                   	int3   
  2c:	cc                   	int3   
  2d:	cc                   	int3   
  2e:	cc                   	int3   
  2f:	cc                   	int3   

00000030 <_main>:
  30:	55                   	push   %ebp
  31:	8b ec                	mov    %esp,%ebp
  33:	83 ec 08             	sub    $0x8,%esp
  36:	c7 45 fc 02 00 00 00 	movl   $0x2,-0x4(%ebp)
  3d:	c7 45 f8 01 00 00 00 	movl   $0x1,-0x8(%ebp)
  44:	8d 45 f8             	lea    -0x8(%ebp),%eax
  47:	50                   	push   %eax
  48:	8d 4d fc             	lea    -0x4(%ebp),%ecx
  4b:	51                   	push   %ecx
  4c:	e8 00 00 00 00       	call   51 <_main+0x21>
  51:	83 c4 08             	add    $0x8,%esp
  54:	b8 33 55 00 00       	mov    $0x5533,%eax
  59:	8b e5                	mov    %ebp,%esp
  5b:	5d                   	pop    %ebp
  5c:	c3                   	ret    
