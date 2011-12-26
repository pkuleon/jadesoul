
call.o:     file format pe-i386


Disassembly of section .text:

00000000 <_swap>:
   0:	55                   	push   %ebp
   1:	89 e5                	mov    %esp,%ebp
   3:	83 ec 10             	sub    $0x10,%esp
   6:	8b 45 08             	mov    0x8(%ebp),%eax
   9:	8b 00                	mov    (%eax),%eax
   b:	89 45 fc             	mov    %eax,-0x4(%ebp)
   e:	8b 45 0c             	mov    0xc(%ebp),%eax
  11:	8b 10                	mov    (%eax),%edx
  13:	8b 45 08             	mov    0x8(%ebp),%eax
  16:	89 10                	mov    %edx,(%eax)
  18:	8b 45 0c             	mov    0xc(%ebp),%eax
  1b:	8b 55 fc             	mov    -0x4(%ebp),%edx
  1e:	89 10                	mov    %edx,(%eax)
  20:	c9                   	leave  
  21:	c3                   	ret    

00000022 <_main>:
  22:	55                   	push   %ebp
  23:	89 e5                	mov    %esp,%ebp
  25:	83 e4 f0             	and    $0xfffffff0,%esp
  28:	83 ec 20             	sub    $0x20,%esp
  2b:	e8 00 00 00 00       	call   30 <_main+0xe>
  30:	c7 44 24 1c 02 00 00 	movl   $0x2,0x1c(%esp)
  37:	00 
  38:	c7 44 24 18 01 00 00 	movl   $0x1,0x18(%esp)
  3f:	00 
  40:	8d 44 24 18          	lea    0x18(%esp),%eax
  44:	89 44 24 04          	mov    %eax,0x4(%esp)
  48:	8d 44 24 1c          	lea    0x1c(%esp),%eax
  4c:	89 04 24             	mov    %eax,(%esp)
  4f:	e8 ac ff ff ff       	call   0 <_swap>
  54:	b8 ff ff 00 00       	mov    $0xffff,%eax
  59:	c9                   	leave  
  5a:	c3                   	ret    
  5b:	90                   	nop    
