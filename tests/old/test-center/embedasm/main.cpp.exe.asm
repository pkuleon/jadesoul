
main.cpp.exe:     file format pei-i386


Disassembly of section .text:

00401000 <__gnu_exception_handler@4>:
  401000:	55                   	push   %ebp
  401001:	89 e5                	mov    %esp,%ebp
  401003:	83 ec 18             	sub    $0x18,%esp
  401006:	89 5d f8             	mov    %ebx,-0x8(%ebp)
  401009:	8b 45 08             	mov    0x8(%ebp),%eax
  40100c:	31 db                	xor    %ebx,%ebx
  40100e:	89 75 fc             	mov    %esi,-0x4(%ebp)
  401011:	8b 00                	mov    (%eax),%eax
  401013:	31 f6                	xor    %esi,%esi
  401015:	8b 00                	mov    (%eax),%eax
  401017:	3d 91 00 00 c0       	cmp    $0xc0000091,%eax
  40101c:	77 43                	ja     401061 <__gnu_exception_handler@4+0x61>
  40101e:	3d 8d 00 00 c0       	cmp    $0xc000008d,%eax
  401023:	72 5b                	jb     401080 <__gnu_exception_handler@4+0x80>
  401025:	be 01 00 00 00       	mov    $0x1,%esi
  40102a:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
  401031:	31 d2                	xor    %edx,%edx
  401033:	89 54 24 04          	mov    %edx,0x4(%esp)
  401037:	e8 c4 05 00 00       	call   401600 <_signal>
  40103c:	83 f8 01             	cmp    $0x1,%eax
  40103f:	74 7a                	je     4010bb <__gnu_exception_handler@4+0xbb>
  401041:	85 c0                	test   %eax,%eax
  401043:	74 0e                	je     401053 <__gnu_exception_handler@4+0x53>
  401045:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
  40104c:	ff d0                	call   *%eax
  40104e:	bb ff ff ff ff       	mov    $0xffffffff,%ebx
  401053:	89 d8                	mov    %ebx,%eax
  401055:	8b 75 fc             	mov    -0x4(%ebp),%esi
  401058:	8b 5d f8             	mov    -0x8(%ebp),%ebx
  40105b:	89 ec                	mov    %ebp,%esp
  40105d:	5d                   	pop    %ebp
  40105e:	c2 04 00             	ret    $0x4
  401061:	3d 94 00 00 c0       	cmp    $0xc0000094,%eax
  401066:	74 c2                	je     40102a <__gnu_exception_handler@4+0x2a>
  401068:	77 4a                	ja     4010b4 <__gnu_exception_handler@4+0xb4>
  40106a:	3d 93 00 00 c0       	cmp    $0xc0000093,%eax
  40106f:	74 b4                	je     401025 <__gnu_exception_handler@4+0x25>
  401071:	89 d8                	mov    %ebx,%eax
  401073:	8b 75 fc             	mov    -0x4(%ebp),%esi
  401076:	8b 5d f8             	mov    -0x8(%ebp),%ebx
  401079:	89 ec                	mov    %ebp,%esp
  40107b:	5d                   	pop    %ebp
  40107c:	c2 04 00             	ret    $0x4
  40107f:	90                   	nop    
  401080:	3d 05 00 00 c0       	cmp    $0xc0000005,%eax
  401085:	74 5b                	je     4010e2 <__gnu_exception_handler@4+0xe2>
  401087:	3d 1d 00 00 c0       	cmp    $0xc000001d,%eax
  40108c:	75 c5                	jne    401053 <__gnu_exception_handler@4+0x53>
  40108e:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
  401095:	31 f6                	xor    %esi,%esi
  401097:	89 74 24 04          	mov    %esi,0x4(%esp)
  40109b:	e8 60 05 00 00       	call   401600 <_signal>
  4010a0:	83 f8 01             	cmp    $0x1,%eax
  4010a3:	74 6a                	je     40110f <__gnu_exception_handler@4+0x10f>
  4010a5:	85 c0                	test   %eax,%eax
  4010a7:	74 aa                	je     401053 <__gnu_exception_handler@4+0x53>
  4010a9:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
  4010b0:	ff d0                	call   *%eax
  4010b2:	eb 9a                	jmp    40104e <__gnu_exception_handler@4+0x4e>
  4010b4:	3d 96 00 00 c0       	cmp    $0xc0000096,%eax
  4010b9:	eb d1                	jmp    40108c <__gnu_exception_handler@4+0x8c>
  4010bb:	c7 04 24 08 00 00 00 	movl   $0x8,(%esp)
  4010c2:	b8 01 00 00 00       	mov    $0x1,%eax
  4010c7:	89 44 24 04          	mov    %eax,0x4(%esp)
  4010cb:	e8 30 05 00 00       	call   401600 <_signal>
  4010d0:	85 f6                	test   %esi,%esi
  4010d2:	0f 84 76 ff ff ff    	je     40104e <__gnu_exception_handler@4+0x4e>
  4010d8:	e8 f3 04 00 00       	call   4015d0 <__fpreset>
  4010dd:	e9 6c ff ff ff       	jmp    40104e <__gnu_exception_handler@4+0x4e>
  4010e2:	c7 04 24 0b 00 00 00 	movl   $0xb,(%esp)
  4010e9:	31 c0                	xor    %eax,%eax
  4010eb:	89 44 24 04          	mov    %eax,0x4(%esp)
  4010ef:	e8 0c 05 00 00       	call   401600 <_signal>
  4010f4:	83 f8 01             	cmp    $0x1,%eax
  4010f7:	74 30                	je     401129 <__gnu_exception_handler@4+0x129>
  4010f9:	85 c0                	test   %eax,%eax
  4010fb:	0f 84 52 ff ff ff    	je     401053 <__gnu_exception_handler@4+0x53>
  401101:	c7 04 24 0b 00 00 00 	movl   $0xb,(%esp)
  401108:	ff d0                	call   *%eax
  40110a:	e9 3f ff ff ff       	jmp    40104e <__gnu_exception_handler@4+0x4e>
  40110f:	c7 04 24 04 00 00 00 	movl   $0x4,(%esp)
  401116:	b9 01 00 00 00       	mov    $0x1,%ecx
  40111b:	89 4c 24 04          	mov    %ecx,0x4(%esp)
  40111f:	e8 dc 04 00 00       	call   401600 <_signal>
  401124:	e9 25 ff ff ff       	jmp    40104e <__gnu_exception_handler@4+0x4e>
  401129:	c7 04 24 0b 00 00 00 	movl   $0xb,(%esp)
  401130:	b8 01 00 00 00       	mov    $0x1,%eax
  401135:	89 44 24 04          	mov    %eax,0x4(%esp)
  401139:	e8 c2 04 00 00       	call   401600 <_signal>
  40113e:	e9 0b ff ff ff       	jmp    40104e <__gnu_exception_handler@4+0x4e>
  401143:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
  401149:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00401150 <___mingw_CRTStartup>:
  401150:	55                   	push   %ebp
  401151:	89 e5                	mov    %esp,%ebp
  401153:	53                   	push   %ebx
  401154:	83 ec 24             	sub    $0x24,%esp
  401157:	c7 04 24 00 10 40 00 	movl   $0x401000,(%esp)
  40115e:	e8 c5 04 00 00       	call   401628 <_SetUnhandledExceptionFilter@4>
  401163:	83 ec 04             	sub    $0x4,%esp
  401166:	e8 65 03 00 00       	call   4014d0 <___cpu_features_init>
  40116b:	e8 60 04 00 00       	call   4015d0 <__fpreset>
  401170:	c7 45 f8 00 00 00 00 	movl   $0x0,-0x8(%ebp)
  401177:	8d 45 f8             	lea    -0x8(%ebp),%eax
  40117a:	89 44 24 10          	mov    %eax,0x10(%esp)
  40117e:	a1 00 20 40 00       	mov    0x402000,%eax
  401183:	c7 04 24 04 40 40 00 	movl   $0x404004,(%esp)
  40118a:	89 44 24 0c          	mov    %eax,0xc(%esp)
  40118e:	8d 45 f4             	lea    -0xc(%ebp),%eax
  401191:	89 44 24 08          	mov    %eax,0x8(%esp)
  401195:	b8 00 40 40 00       	mov    $0x404000,%eax
  40119a:	89 44 24 04          	mov    %eax,0x4(%esp)
  40119e:	e8 75 04 00 00       	call   401618 <___getmainargs>
  4011a3:	a1 28 40 40 00       	mov    0x404028,%eax
  4011a8:	85 c0                	test   %eax,%eax
  4011aa:	74 64                	je     401210 <___mingw_CRTStartup+0xc0>
  4011ac:	a3 04 20 40 00       	mov    %eax,0x402004
  4011b1:	8b 15 dc 50 40 00    	mov    0x4050dc,%edx
  4011b7:	85 d2                	test   %edx,%edx
  4011b9:	0f 85 a1 00 00 00    	jne    401260 <___mingw_CRTStartup+0x110>
  4011bf:	83 fa e0             	cmp    $0xffffffe0,%edx
  4011c2:	74 1f                	je     4011e3 <___mingw_CRTStartup+0x93>
  4011c4:	a1 28 40 40 00       	mov    0x404028,%eax
  4011c9:	89 44 24 04          	mov    %eax,0x4(%esp)
  4011cd:	a1 dc 50 40 00       	mov    0x4050dc,%eax
  4011d2:	8b 40 30             	mov    0x30(%eax),%eax
  4011d5:	89 04 24             	mov    %eax,(%esp)
  4011d8:	e8 33 04 00 00       	call   401610 <__setmode>
  4011dd:	8b 15 dc 50 40 00    	mov    0x4050dc,%edx
  4011e3:	83 fa c0             	cmp    $0xffffffc0,%edx
  4011e6:	74 28                	je     401210 <___mingw_CRTStartup+0xc0>
  4011e8:	a1 28 40 40 00       	mov    0x404028,%eax
  4011ed:	89 44 24 04          	mov    %eax,0x4(%esp)
  4011f1:	a1 dc 50 40 00       	mov    0x4050dc,%eax
  4011f6:	8b 40 50             	mov    0x50(%eax),%eax
  4011f9:	89 04 24             	mov    %eax,(%esp)
  4011fc:	e8 0f 04 00 00       	call   401610 <__setmode>
  401201:	eb 0d                	jmp    401210 <___mingw_CRTStartup+0xc0>
  401203:	90                   	nop    
  401204:	90                   	nop    
  401205:	90                   	nop    
  401206:	90                   	nop    
  401207:	90                   	nop    
  401208:	90                   	nop    
  401209:	90                   	nop    
  40120a:	90                   	nop    
  40120b:	90                   	nop    
  40120c:	90                   	nop    
  40120d:	90                   	nop    
  40120e:	90                   	nop    
  40120f:	90                   	nop    
  401210:	e8 f3 03 00 00       	call   401608 <___p__fmode>
  401215:	8b 15 04 20 40 00    	mov    0x402004,%edx
  40121b:	89 10                	mov    %edx,(%eax)
  40121d:	e8 7e 02 00 00       	call   4014a0 <__pei386_runtime_relocator>
  401222:	83 e4 f0             	and    $0xfffffff0,%esp
  401225:	e8 56 02 00 00       	call   401480 <___main>
  40122a:	e8 c9 03 00 00       	call   4015f8 <___p__environ>
  40122f:	8b 00                	mov    (%eax),%eax
  401231:	89 44 24 08          	mov    %eax,0x8(%esp)
  401235:	a1 00 40 40 00       	mov    0x404000,%eax
  40123a:	89 44 24 04          	mov    %eax,0x4(%esp)
  40123e:	a1 04 40 40 00       	mov    0x404004,%eax
  401243:	89 04 24             	mov    %eax,(%esp)
  401246:	e8 78 01 00 00       	call   4013c3 <_main>
  40124b:	89 c3                	mov    %eax,%ebx
  40124d:	e8 9e 03 00 00       	call   4015f0 <__cexit>
  401252:	89 1c 24             	mov    %ebx,(%esp)
  401255:	e8 d6 03 00 00       	call   401630 <_ExitProcess@4>
  40125a:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
  401260:	89 44 24 04          	mov    %eax,0x4(%esp)
  401264:	a1 dc 50 40 00       	mov    0x4050dc,%eax
  401269:	8b 40 10             	mov    0x10(%eax),%eax
  40126c:	89 04 24             	mov    %eax,(%esp)
  40126f:	e8 9c 03 00 00       	call   401610 <__setmode>
  401274:	8b 15 dc 50 40 00    	mov    0x4050dc,%edx
  40127a:	e9 40 ff ff ff       	jmp    4011bf <___mingw_CRTStartup+0x6f>
  40127f:	90                   	nop    

00401280 <_mainCRTStartup>:
  401280:	55                   	push   %ebp
  401281:	89 e5                	mov    %esp,%ebp
  401283:	83 ec 08             	sub    $0x8,%esp
  401286:	c7 04 24 01 00 00 00 	movl   $0x1,(%esp)
  40128d:	ff 15 d4 50 40 00    	call   *0x4050d4
  401293:	e8 b8 fe ff ff       	call   401150 <___mingw_CRTStartup>
  401298:	90                   	nop    
  401299:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

004012a0 <_WinMainCRTStartup>:
  4012a0:	55                   	push   %ebp
  4012a1:	89 e5                	mov    %esp,%ebp
  4012a3:	83 ec 08             	sub    $0x8,%esp
  4012a6:	c7 04 24 02 00 00 00 	movl   $0x2,(%esp)
  4012ad:	ff 15 d4 50 40 00    	call   *0x4050d4
  4012b3:	e8 98 fe ff ff       	call   401150 <___mingw_CRTStartup>
  4012b8:	90                   	nop    
  4012b9:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

004012c0 <_atexit>:
  4012c0:	55                   	push   %ebp
  4012c1:	8b 0d e8 50 40 00    	mov    0x4050e8,%ecx
  4012c7:	89 e5                	mov    %esp,%ebp
  4012c9:	5d                   	pop    %ebp
  4012ca:	ff e1                	jmp    *%ecx
  4012cc:	8d 74 26 00          	lea    0x0(%esi,%eiz,1),%esi

004012d0 <__onexit>:
  4012d0:	55                   	push   %ebp
  4012d1:	8b 0d e0 50 40 00    	mov    0x4050e0,%ecx
  4012d7:	89 e5                	mov    %esp,%ebp
  4012d9:	5d                   	pop    %ebp
  4012da:	ff e1                	jmp    *%ecx
  4012dc:	90                   	nop    
  4012dd:	90                   	nop    
  4012de:	90                   	nop    
  4012df:	90                   	nop    

004012e0 <___gcc_register_frame>:
  4012e0:	55                   	push   %ebp
  4012e1:	89 e5                	mov    %esp,%ebp
  4012e3:	83 ec 18             	sub    $0x18,%esp
  4012e6:	c7 04 24 00 30 40 00 	movl   $0x403000,(%esp)
  4012ed:	e8 46 03 00 00       	call   401638 <_GetModuleHandleA@4>
  4012f2:	52                   	push   %edx
  4012f3:	85 c0                	test   %eax,%eax
  4012f5:	74 65                	je     40135c <___gcc_register_frame+0x7c>
  4012f7:	c7 44 24 04 13 30 40 	movl   $0x403013,0x4(%esp)
  4012fe:	00 
  4012ff:	89 04 24             	mov    %eax,(%esp)
  401302:	e8 39 03 00 00       	call   401640 <_GetProcAddress@8>
  401307:	83 ec 08             	sub    $0x8,%esp
  40130a:	85 c0                	test   %eax,%eax
  40130c:	74 11                	je     40131f <___gcc_register_frame+0x3f>
  40130e:	c7 44 24 04 08 40 40 	movl   $0x404008,0x4(%esp)
  401315:	00 
  401316:	c7 04 24 68 30 40 00 	movl   $0x403068,(%esp)
  40131d:	ff d0                	call   *%eax
  40131f:	8b 0d 0c 20 40 00    	mov    0x40200c,%ecx
  401325:	85 c9                	test   %ecx,%ecx
  401327:	74 31                	je     40135a <___gcc_register_frame+0x7a>
  401329:	c7 04 24 29 30 40 00 	movl   $0x403029,(%esp)
  401330:	e8 03 03 00 00       	call   401638 <_GetModuleHandleA@4>
  401335:	52                   	push   %edx
  401336:	85 c0                	test   %eax,%eax
  401338:	74 2a                	je     401364 <___gcc_register_frame+0x84>
  40133a:	c7 44 24 04 36 30 40 	movl   $0x403036,0x4(%esp)
  401341:	00 
  401342:	89 04 24             	mov    %eax,(%esp)
  401345:	e8 f6 02 00 00       	call   401640 <_GetProcAddress@8>
  40134a:	83 ec 08             	sub    $0x8,%esp
  40134d:	85 c0                	test   %eax,%eax
  40134f:	74 09                	je     40135a <___gcc_register_frame+0x7a>
  401351:	c7 04 24 0c 20 40 00 	movl   $0x40200c,(%esp)
  401358:	ff d0                	call   *%eax
  40135a:	c9                   	leave  
  40135b:	c3                   	ret    
  40135c:	b8 e8 15 40 00       	mov    $0x4015e8,%eax
  401361:	eb a7                	jmp    40130a <___gcc_register_frame+0x2a>
  401363:	90                   	nop    
  401364:	b8 00 00 00 00       	mov    $0x0,%eax
  401369:	eb e2                	jmp    40134d <___gcc_register_frame+0x6d>
  40136b:	90                   	nop    

0040136c <___gcc_deregister_frame>:
  40136c:	55                   	push   %ebp
  40136d:	89 e5                	mov    %esp,%ebp
  40136f:	83 ec 18             	sub    $0x18,%esp
  401372:	c7 04 24 00 30 40 00 	movl   $0x403000,(%esp)
  401379:	e8 ba 02 00 00       	call   401638 <_GetModuleHandleA@4>
  40137e:	51                   	push   %ecx
  40137f:	85 c0                	test   %eax,%eax
  401381:	74 25                	je     4013a8 <___gcc_deregister_frame+0x3c>
  401383:	c7 44 24 04 4a 30 40 	movl   $0x40304a,0x4(%esp)
  40138a:	00 
  40138b:	89 04 24             	mov    %eax,(%esp)
  40138e:	e8 ad 02 00 00       	call   401640 <_GetProcAddress@8>
  401393:	83 ec 08             	sub    $0x8,%esp
  401396:	85 c0                	test   %eax,%eax
  401398:	74 09                	je     4013a3 <___gcc_deregister_frame+0x37>
  40139a:	c7 04 24 68 30 40 00 	movl   $0x403068,(%esp)
  4013a1:	ff d0                	call   *%eax
  4013a3:	c9                   	leave  
  4013a4:	c3                   	ret    
  4013a5:	8d 76 00             	lea    0x0(%esi),%esi
  4013a8:	b8 e0 15 40 00       	mov    $0x4015e0,%eax
  4013ad:	eb e7                	jmp    401396 <___gcc_deregister_frame+0x2a>
  4013af:	90                   	nop    

004013b0 <__Z1fv>:
  4013b0:	55                   	push   %ebp
  4013b1:	89 e5                	mov    %esp,%ebp
  4013b3:	83 ec 10             	sub    $0x10,%esp
  4013b6:	a1 10 00 00 00       	mov    0x10,%eax
  4013bb:	89 45 fc             	mov    %eax,-0x4(%ebp)
  4013be:	8b 45 f8             	mov    -0x8(%ebp),%eax
  4013c1:	c9                   	leave  
  4013c2:	c3                   	ret    

004013c3 <_main>:
  4013c3:	55                   	push   %ebp
  4013c4:	89 e5                	mov    %esp,%ebp
  4013c6:	83 e4 f0             	and    $0xfffffff0,%esp
  4013c9:	83 ec 10             	sub    $0x10,%esp
  4013cc:	e8 af 00 00 00       	call   401480 <___main>
  4013d1:	e8 da ff ff ff       	call   4013b0 <__Z1fv>
  4013d6:	89 44 24 04          	mov    %eax,0x4(%esp)
  4013da:	c7 04 24 64 30 40 00 	movl   $0x403064,(%esp)
  4013e1:	e8 3a 02 00 00       	call   401620 <_printf>
  4013e6:	b8 00 00 00 00       	mov    $0x0,%eax
  4013eb:	c9                   	leave  
  4013ec:	c3                   	ret    
  4013ed:	90                   	nop    
  4013ee:	90                   	nop    
  4013ef:	90                   	nop    

004013f0 <___do_global_dtors>:
  4013f0:	55                   	push   %ebp
  4013f1:	89 e5                	mov    %esp,%ebp
  4013f3:	83 ec 08             	sub    $0x8,%esp
  4013f6:	a1 08 20 40 00       	mov    0x402008,%eax
  4013fb:	83 38 00             	cmpl   $0x0,(%eax)
  4013fe:	74 17                	je     401417 <___do_global_dtors+0x27>
  401400:	ff 10                	call   *(%eax)
  401402:	8b 15 08 20 40 00    	mov    0x402008,%edx
  401408:	8d 42 04             	lea    0x4(%edx),%eax
  40140b:	8b 52 04             	mov    0x4(%edx),%edx
  40140e:	a3 08 20 40 00       	mov    %eax,0x402008
  401413:	85 d2                	test   %edx,%edx
  401415:	75 e9                	jne    401400 <___do_global_dtors+0x10>
  401417:	c9                   	leave  
  401418:	c3                   	ret    
  401419:	8d b4 26 00 00 00 00 	lea    0x0(%esi,%eiz,1),%esi

00401420 <___do_global_ctors>:
  401420:	55                   	push   %ebp
  401421:	89 e5                	mov    %esp,%ebp
  401423:	53                   	push   %ebx
  401424:	83 ec 04             	sub    $0x4,%esp
  401427:	a1 64 16 40 00       	mov    0x401664,%eax
  40142c:	83 f8 ff             	cmp    $0xffffffff,%eax
  40142f:	74 29                	je     40145a <___do_global_ctors+0x3a>
  401431:	85 c0                	test   %eax,%eax
  401433:	89 c3                	mov    %eax,%ebx
  401435:	74 13                	je     40144a <___do_global_ctors+0x2a>
  401437:	89 f6                	mov    %esi,%esi
  401439:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi
  401440:	ff 14 9d 64 16 40 00 	call   *0x401664(,%ebx,4)
  401447:	4b                   	dec    %ebx
  401448:	75 f6                	jne    401440 <___do_global_ctors+0x20>
  40144a:	c7 04 24 f0 13 40 00 	movl   $0x4013f0,(%esp)
  401451:	e8 6a fe ff ff       	call   4012c0 <_atexit>
  401456:	59                   	pop    %ecx
  401457:	5b                   	pop    %ebx
  401458:	5d                   	pop    %ebp
  401459:	c3                   	ret    
  40145a:	31 c0                	xor    %eax,%eax
  40145c:	83 3d 68 16 40 00 00 	cmpl   $0x0,0x401668
  401463:	eb 0a                	jmp    40146f <___do_global_ctors+0x4f>
  401465:	40                   	inc    %eax
  401466:	8b 1c 85 68 16 40 00 	mov    0x401668(,%eax,4),%ebx
  40146d:	85 db                	test   %ebx,%ebx
  40146f:	75 f4                	jne    401465 <___do_global_ctors+0x45>
  401471:	eb be                	jmp    401431 <___do_global_ctors+0x11>
  401473:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
  401479:	8d bc 27 00 00 00 00 	lea    0x0(%edi,%eiz,1),%edi

00401480 <___main>:
  401480:	55                   	push   %ebp
  401481:	a1 30 40 40 00       	mov    0x404030,%eax
  401486:	89 e5                	mov    %esp,%ebp
  401488:	85 c0                	test   %eax,%eax
  40148a:	74 04                	je     401490 <___main+0x10>
  40148c:	5d                   	pop    %ebp
  40148d:	c3                   	ret    
  40148e:	66 90                	xchg   %ax,%ax
  401490:	5d                   	pop    %ebp
  401491:	b8 01 00 00 00       	mov    $0x1,%eax
  401496:	a3 30 40 40 00       	mov    %eax,0x404030
  40149b:	eb 83                	jmp    401420 <___do_global_ctors>
  40149d:	90                   	nop    
  40149e:	90                   	nop    
  40149f:	90                   	nop    

004014a0 <__pei386_runtime_relocator>:
  4014a0:	55                   	push   %ebp
  4014a1:	b9 6c 30 40 00       	mov    $0x40306c,%ecx
  4014a6:	89 e5                	mov    %esp,%ebp
  4014a8:	eb 14                	jmp    4014be <__pei386_runtime_relocator+0x1e>
  4014aa:	8d b6 00 00 00 00    	lea    0x0(%esi),%esi
  4014b0:	8b 51 04             	mov    0x4(%ecx),%edx
  4014b3:	8b 01                	mov    (%ecx),%eax
  4014b5:	83 c1 08             	add    $0x8,%ecx
  4014b8:	01 82 00 00 40 00    	add    %eax,0x400000(%edx)
  4014be:	81 f9 6c 30 40 00    	cmp    $0x40306c,%ecx
  4014c4:	72 ea                	jb     4014b0 <__pei386_runtime_relocator+0x10>
  4014c6:	5d                   	pop    %ebp
  4014c7:	c3                   	ret    
  4014c8:	90                   	nop    
  4014c9:	90                   	nop    
  4014ca:	90                   	nop    
  4014cb:	90                   	nop    
  4014cc:	90                   	nop    
  4014cd:	90                   	nop    
  4014ce:	90                   	nop    
  4014cf:	90                   	nop    

004014d0 <___cpu_features_init>:
  4014d0:	55                   	push   %ebp
  4014d1:	89 e5                	mov    %esp,%ebp
  4014d3:	53                   	push   %ebx
  4014d4:	9c                   	pushf  
  4014d5:	9c                   	pushf  
  4014d6:	58                   	pop    %eax
  4014d7:	89 c3                	mov    %eax,%ebx
  4014d9:	35 00 00 20 00       	xor    $0x200000,%eax
  4014de:	50                   	push   %eax
  4014df:	9d                   	popf   
  4014e0:	9c                   	pushf  
  4014e1:	58                   	pop    %eax
  4014e2:	9d                   	popf   
  4014e3:	31 d8                	xor    %ebx,%eax
  4014e5:	a9 00 00 20 00       	test   $0x200000,%eax
  4014ea:	0f 84 c0 00 00 00    	je     4015b0 <___cpu_features_init+0xe0>
  4014f0:	31 c0                	xor    %eax,%eax
  4014f2:	0f a2                	cpuid  
  4014f4:	85 c0                	test   %eax,%eax
  4014f6:	0f 84 b4 00 00 00    	je     4015b0 <___cpu_features_init+0xe0>
  4014fc:	b8 01 00 00 00       	mov    $0x1,%eax
  401501:	0f a2                	cpuid  
  401503:	f6 c6 01             	test   $0x1,%dh
  401506:	0f 85 a7 00 00 00    	jne    4015b3 <___cpu_features_init+0xe3>
  40150c:	89 d0                	mov    %edx,%eax
  40150e:	25 00 80 00 00       	and    $0x8000,%eax
  401513:	66 85 c0             	test   %ax,%ax
  401516:	74 07                	je     40151f <___cpu_features_init+0x4f>
  401518:	83 0d 40 40 40 00 02 	orl    $0x2,0x404040
  40151f:	f7 c2 00 00 80 00    	test   $0x800000,%edx
  401525:	74 07                	je     40152e <___cpu_features_init+0x5e>
  401527:	83 0d 40 40 40 00 04 	orl    $0x4,0x404040
  40152e:	f7 c2 00 00 00 01    	test   $0x1000000,%edx
  401534:	74 07                	je     40153d <___cpu_features_init+0x6d>
  401536:	83 0d 40 40 40 00 08 	orl    $0x8,0x404040
  40153d:	f7 c2 00 00 00 02    	test   $0x2000000,%edx
  401543:	74 07                	je     40154c <___cpu_features_init+0x7c>
  401545:	83 0d 40 40 40 00 10 	orl    $0x10,0x404040
  40154c:	81 e2 00 00 00 04    	and    $0x4000000,%edx
  401552:	74 07                	je     40155b <___cpu_features_init+0x8b>
  401554:	83 0d 40 40 40 00 20 	orl    $0x20,0x404040
  40155b:	f6 c1 01             	test   $0x1,%cl
  40155e:	74 07                	je     401567 <___cpu_features_init+0x97>
  401560:	83 0d 40 40 40 00 40 	orl    $0x40,0x404040
  401567:	f6 c5 20             	test   $0x20,%ch
  40156a:	74 0a                	je     401576 <___cpu_features_init+0xa6>
  40156c:	81 0d 40 40 40 00 80 	orl    $0x80,0x404040
  401573:	00 00 00 
  401576:	b8 00 00 00 80       	mov    $0x80000000,%eax
  40157b:	0f a2                	cpuid  
  40157d:	3d 00 00 00 80       	cmp    $0x80000000,%eax
  401582:	76 2c                	jbe    4015b0 <___cpu_features_init+0xe0>
  401584:	b8 01 00 00 80       	mov    $0x80000001,%eax
  401589:	0f a2                	cpuid  
  40158b:	85 d2                	test   %edx,%edx
  40158d:	78 30                	js     4015bf <___cpu_features_init+0xef>
  40158f:	81 e2 00 00 00 40    	and    $0x40000000,%edx
  401595:	74 19                	je     4015b0 <___cpu_features_init+0xe0>
  401597:	81 0d 40 40 40 00 00 	orl    $0x200,0x404040
  40159e:	02 00 00 
  4015a1:	eb 0d                	jmp    4015b0 <___cpu_features_init+0xe0>
  4015a3:	90                   	nop    
  4015a4:	90                   	nop    
  4015a5:	90                   	nop    
  4015a6:	90                   	nop    
  4015a7:	90                   	nop    
  4015a8:	90                   	nop    
  4015a9:	90                   	nop    
  4015aa:	90                   	nop    
  4015ab:	90                   	nop    
  4015ac:	90                   	nop    
  4015ad:	90                   	nop    
  4015ae:	90                   	nop    
  4015af:	90                   	nop    
  4015b0:	5b                   	pop    %ebx
  4015b1:	5d                   	pop    %ebp
  4015b2:	c3                   	ret    
  4015b3:	83 0d 40 40 40 00 01 	orl    $0x1,0x404040
  4015ba:	e9 4d ff ff ff       	jmp    40150c <___cpu_features_init+0x3c>
  4015bf:	81 0d 40 40 40 00 00 	orl    $0x100,0x404040
  4015c6:	01 00 00 
  4015c9:	eb c4                	jmp    40158f <___cpu_features_init+0xbf>
  4015cb:	90                   	nop    
  4015cc:	90                   	nop    
  4015cd:	90                   	nop    
  4015ce:	90                   	nop    
  4015cf:	90                   	nop    

004015d0 <__fpreset>:
  4015d0:	55                   	push   %ebp
  4015d1:	89 e5                	mov    %esp,%ebp
  4015d3:	db e3                	fninit 
  4015d5:	5d                   	pop    %ebp
  4015d6:	c3                   	ret    
  4015d7:	90                   	nop    
  4015d8:	90                   	nop    
  4015d9:	90                   	nop    
  4015da:	90                   	nop    
  4015db:	90                   	nop    
  4015dc:	90                   	nop    
  4015dd:	90                   	nop    
  4015de:	90                   	nop    
  4015df:	90                   	nop    

004015e0 <___deregister_frame_info>:
  4015e0:	ff 25 fc 50 40 00    	jmp    *0x4050fc
  4015e6:	90                   	nop    
  4015e7:	90                   	nop    

004015e8 <___register_frame_info>:
  4015e8:	ff 25 00 51 40 00    	jmp    *0x405100
  4015ee:	90                   	nop    
  4015ef:	90                   	nop    

004015f0 <__cexit>:
  4015f0:	ff 25 d8 50 40 00    	jmp    *0x4050d8
  4015f6:	90                   	nop    
  4015f7:	90                   	nop    

004015f8 <___p__environ>:
  4015f8:	ff 25 cc 50 40 00    	jmp    *0x4050cc
  4015fe:	90                   	nop    
  4015ff:	90                   	nop    

00401600 <_signal>:
  401600:	ff 25 f0 50 40 00    	jmp    *0x4050f0
  401606:	90                   	nop    
  401607:	90                   	nop    

00401608 <___p__fmode>:
  401608:	ff 25 d0 50 40 00    	jmp    *0x4050d0
  40160e:	90                   	nop    
  40160f:	90                   	nop    

00401610 <__setmode>:
  401610:	ff 25 e4 50 40 00    	jmp    *0x4050e4
  401616:	90                   	nop    
  401617:	90                   	nop    

00401618 <___getmainargs>:
  401618:	ff 25 c8 50 40 00    	jmp    *0x4050c8
  40161e:	90                   	nop    
  40161f:	90                   	nop    

00401620 <_printf>:
  401620:	ff 25 ec 50 40 00    	jmp    *0x4050ec
  401626:	90                   	nop    
  401627:	90                   	nop    

00401628 <_SetUnhandledExceptionFilter@4>:
  401628:	ff 25 bc 50 40 00    	jmp    *0x4050bc
  40162e:	90                   	nop    
  40162f:	90                   	nop    

00401630 <_ExitProcess@4>:
  401630:	ff 25 b0 50 40 00    	jmp    *0x4050b0
  401636:	90                   	nop    
  401637:	90                   	nop    

00401638 <_GetModuleHandleA@4>:
  401638:	ff 25 b4 50 40 00    	jmp    *0x4050b4
  40163e:	90                   	nop    
  40163f:	90                   	nop    

00401640 <_GetProcAddress@8>:
  401640:	ff 25 b8 50 40 00    	jmp    *0x4050b8
  401646:	90                   	nop    
  401647:	90                   	nop    

00401648 <_register_frame_ctor>:
  401648:	55                   	push   %ebp
  401649:	89 e5                	mov    %esp,%ebp
  40164b:	83 ec 18             	sub    $0x18,%esp
  40164e:	e8 8d fc ff ff       	call   4012e0 <___gcc_register_frame>
  401653:	c7 04 24 6c 13 40 00 	movl   $0x40136c,(%esp)
  40165a:	e8 61 fc ff ff       	call   4012c0 <_atexit>
  40165f:	c9                   	leave  
  401660:	c3                   	ret    
  401661:	90                   	nop    
  401662:	90                   	nop    
  401663:	90                   	nop    

00401664 <__CTOR_LIST__>:
  401664:	ff                   	(bad)  
  401665:	ff                   	(bad)  
  401666:	ff                   	(bad)  
  401667:	ff 48 16             	decl   0x16(%eax)

00401668 <.ctors.65535>:
  401668:	48                   	dec    %eax
  401669:	16                   	push   %ss
  40166a:	40                   	inc    %eax
  40166b:	00 00                	add    %al,(%eax)
  40166d:	00 00                	add    %al,(%eax)
	...

00401670 <__DTOR_LIST__>:
  401670:	ff                   	(bad)  
  401671:	ff                   	(bad)  
  401672:	ff                   	(bad)  
  401673:	ff 00                	incl   (%eax)
  401675:	00 00                	add    %al,(%eax)
	...
