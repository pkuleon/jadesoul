
vcasm.cpp.exe:     file format pei-i386


Disassembly of section .text:

00401000 <.text>:
  401000:	55                   	push   %ebp
  401001:	8b ec                	mov    %esp,%ebp
  401003:	53                   	push   %ebx
  401004:	8b 45 08             	mov    0x8(%ebp),%eax
  401007:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  40100a:	03 c3                	add    %ebx,%eax
  40100c:	5b                   	pop    %ebx
  40100d:	5d                   	pop    %ebp
  40100e:	c3                   	ret    
  40100f:	cc                   	int3   
  401010:	55                   	push   %ebp
  401011:	8b ec                	mov    %esp,%ebp
  401013:	83 ec 08             	sub    $0x8,%esp
  401016:	8d 45 f8             	lea    -0x8(%ebp),%eax
  401019:	50                   	push   %eax
  40101a:	8d 4d fc             	lea    -0x4(%ebp),%ecx
  40101d:	51                   	push   %ecx
  40101e:	68 50 c1 40 00       	push   $0x40c150
  401023:	e8 72 01 00 00       	call   0x40119a
  401028:	83 c4 0c             	add    $0xc,%esp
  40102b:	8b 55 f8             	mov    -0x8(%ebp),%edx
  40102e:	52                   	push   %edx
  40102f:	8b 45 fc             	mov    -0x4(%ebp),%eax
  401032:	50                   	push   %eax
  401033:	e8 c8 ff ff ff       	call   0x401000
  401038:	83 c4 08             	add    $0x8,%esp
  40103b:	50                   	push   %eax
  40103c:	68 58 c1 40 00       	push   $0x40c158
  401041:	e8 09 00 00 00       	call   0x40104f
  401046:	83 c4 08             	add    $0x8,%esp
  401049:	33 c0                	xor    %eax,%eax
  40104b:	8b e5                	mov    %ebp,%esp
  40104d:	5d                   	pop    %ebp
  40104e:	c3                   	ret    
  40104f:	6a 0c                	push   $0xc
  401051:	68 e0 d3 40 00       	push   $0x40d3e0
  401056:	e8 15 14 00 00       	call   0x402470
  40105b:	33 c0                	xor    %eax,%eax
  40105d:	33 f6                	xor    %esi,%esi
  40105f:	39 75 08             	cmp    %esi,0x8(%ebp)
  401062:	0f 95 c0             	setne  %al
  401065:	3b c6                	cmp    %esi,%eax
  401067:	75 1d                	jne    0x401086
  401069:	e8 b7 13 00 00       	call   0x402425
  40106e:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  401074:	56                   	push   %esi
  401075:	56                   	push   %esi
  401076:	56                   	push   %esi
  401077:	56                   	push   %esi
  401078:	56                   	push   %esi
  401079:	e8 3f 13 00 00       	call   0x4023bd
  40107e:	83 c4 14             	add    $0x14,%esp
  401081:	83 c8 ff             	or     $0xffffffff,%eax
  401084:	eb 5f                	jmp    0x4010e5
  401086:	e8 b1 02 00 00       	call   0x40133c
  40108b:	6a 20                	push   $0x20
  40108d:	5b                   	pop    %ebx
  40108e:	03 c3                	add    %ebx,%eax
  401090:	50                   	push   %eax
  401091:	6a 01                	push   $0x1
  401093:	e8 bc 03 00 00       	call   0x401454
  401098:	59                   	pop    %ecx
  401099:	59                   	pop    %ecx
  40109a:	89 75 fc             	mov    %esi,-0x4(%ebp)
  40109d:	e8 9a 02 00 00       	call   0x40133c
  4010a2:	03 c3                	add    %ebx,%eax
  4010a4:	50                   	push   %eax
  4010a5:	e8 47 04 00 00       	call   0x4014f1
  4010aa:	59                   	pop    %ecx
  4010ab:	8b f8                	mov    %eax,%edi
  4010ad:	8d 45 0c             	lea    0xc(%ebp),%eax
  4010b0:	50                   	push   %eax
  4010b1:	56                   	push   %esi
  4010b2:	ff 75 08             	pushl  0x8(%ebp)
  4010b5:	e8 82 02 00 00       	call   0x40133c
  4010ba:	03 c3                	add    %ebx,%eax
  4010bc:	50                   	push   %eax
  4010bd:	e8 2c 06 00 00       	call   0x4016ee
  4010c2:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  4010c5:	e8 72 02 00 00       	call   0x40133c
  4010ca:	03 c3                	add    %ebx,%eax
  4010cc:	50                   	push   %eax
  4010cd:	57                   	push   %edi
  4010ce:	e8 ba 04 00 00       	call   0x40158d
  4010d3:	83 c4 18             	add    $0x18,%esp
  4010d6:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  4010dd:	e8 09 00 00 00       	call   0x4010eb
  4010e2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  4010e5:	e8 cb 13 00 00       	call   0x4024b5
  4010ea:	c3                   	ret    
  4010eb:	e8 4c 02 00 00       	call   0x40133c
  4010f0:	83 c0 20             	add    $0x20,%eax
  4010f3:	50                   	push   %eax
  4010f4:	6a 01                	push   $0x1
  4010f6:	e8 c7 03 00 00       	call   0x4014c2
  4010fb:	59                   	pop    %ecx
  4010fc:	59                   	pop    %ecx
  4010fd:	c3                   	ret    
  4010fe:	a1 00 e4 40 00       	mov    0x40e400,%eax
  401103:	83 c8 01             	or     $0x1,%eax
  401106:	33 c9                	xor    %ecx,%ecx
  401108:	39 05 00 f0 40 00    	cmp    %eax,0x40f000
  40110e:	0f 94 c1             	sete   %cl
  401111:	8b c1                	mov    %ecx,%eax
  401113:	c3                   	ret    
  401114:	6a 0c                	push   $0xc
  401116:	68 00 d4 40 00       	push   $0x40d400
  40111b:	e8 50 13 00 00       	call   0x402470
  401120:	33 c0                	xor    %eax,%eax
  401122:	33 f6                	xor    %esi,%esi
  401124:	39 75 0c             	cmp    %esi,0xc(%ebp)
  401127:	0f 95 c0             	setne  %al
  40112a:	3b c6                	cmp    %esi,%eax
  40112c:	75 1d                	jne    0x40114b
  40112e:	e8 f2 12 00 00       	call   0x402425
  401133:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  401139:	56                   	push   %esi
  40113a:	56                   	push   %esi
  40113b:	56                   	push   %esi
  40113c:	56                   	push   %esi
  40113d:	56                   	push   %esi
  40113e:	e8 7a 12 00 00       	call   0x4023bd
  401143:	83 c4 14             	add    $0x14,%esp
  401146:	83 c8 ff             	or     $0xffffffff,%eax
  401149:	eb 38                	jmp    0x401183
  40114b:	e8 ec 01 00 00       	call   0x40133c
  401150:	50                   	push   %eax
  401151:	56                   	push   %esi
  401152:	e8 fd 02 00 00       	call   0x401454
  401157:	59                   	pop    %ecx
  401158:	59                   	pop    %ecx
  401159:	89 75 fc             	mov    %esi,-0x4(%ebp)
  40115c:	ff 75 14             	pushl  0x14(%ebp)
  40115f:	ff 75 10             	pushl  0x10(%ebp)
  401162:	ff 75 0c             	pushl  0xc(%ebp)
  401165:	e8 d2 01 00 00       	call   0x40133c
  40116a:	50                   	push   %eax
  40116b:	ff 55 08             	call   *0x8(%ebp)
  40116e:	83 c4 10             	add    $0x10,%esp
  401171:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  401174:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40117b:	e8 0b 00 00 00       	call   0x40118b
  401180:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  401183:	e8 2d 13 00 00       	call   0x4024b5
  401188:	c3                   	ret    
  401189:	33 f6                	xor    %esi,%esi
  40118b:	e8 ac 01 00 00       	call   0x40133c
  401190:	50                   	push   %eax
  401191:	56                   	push   %esi
  401192:	e8 2b 03 00 00       	call   0x4014c2
  401197:	59                   	pop    %ecx
  401198:	59                   	pop    %ecx
  401199:	c3                   	ret    
  40119a:	8b ff                	mov    %edi,%edi
  40119c:	55                   	push   %ebp
  40119d:	8b ec                	mov    %esp,%ebp
  40119f:	8d 45 0c             	lea    0xc(%ebp),%eax
  4011a2:	50                   	push   %eax
  4011a3:	6a 00                	push   $0x0
  4011a5:	ff 75 08             	pushl  0x8(%ebp)
  4011a8:	68 26 27 40 00       	push   $0x402726
  4011ad:	e8 62 ff ff ff       	call   0x401114
  4011b2:	83 c4 10             	add    $0x10,%esp
  4011b5:	5d                   	pop    %ebp
  4011b6:	c3                   	ret    
  4011b7:	8b ff                	mov    %edi,%edi
  4011b9:	55                   	push   %ebp
  4011ba:	8b ec                	mov    %esp,%ebp
  4011bc:	83 3d 0c f0 40 00 02 	cmpl   $0x2,0x40f00c
  4011c3:	74 05                	je     0x4011ca
  4011c5:	e8 4c 2a 00 00       	call   0x403c16
  4011ca:	ff 75 08             	pushl  0x8(%ebp)
  4011cd:	e8 99 28 00 00       	call   0x403a6b
  4011d2:	68 ff 00 00 00       	push   $0xff
  4011d7:	e8 db 25 00 00       	call   0x4037b7
  4011dc:	59                   	pop    %ecx
  4011dd:	59                   	pop    %ecx
  4011de:	5d                   	pop    %ebp
  4011df:	c3                   	ret    
  4011e0:	6a 14                	push   $0x14
  4011e2:	68 20 d4 40 00       	push   $0x40d420
  4011e7:	e8 84 12 00 00       	call   0x402470
  4011ec:	b8 4d 5a 00 00       	mov    $0x5a4d,%eax
  4011f1:	66 39 05 00 00 40 00 	cmp    %ax,0x400000
  4011f8:	75 38                	jne    0x401232
  4011fa:	a1 3c 00 40 00       	mov    0x40003c,%eax
  4011ff:	81 b8 00 00 40 00 50 	cmpl   $0x4550,0x400000(%eax)
  401206:	45 00 00 
  401209:	75 27                	jne    0x401232
  40120b:	b9 0b 01 00 00       	mov    $0x10b,%ecx
  401210:	66 39 88 18 00 40 00 	cmp    %cx,0x400018(%eax)
  401217:	75 19                	jne    0x401232
  401219:	83 b8 74 00 40 00 0e 	cmpl   $0xe,0x400074(%eax)
  401220:	76 10                	jbe    0x401232
  401222:	33 c9                	xor    %ecx,%ecx
  401224:	39 88 e8 00 40 00    	cmp    %ecx,0x4000e8(%eax)
  40122a:	0f 95 c1             	setne  %cl
  40122d:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
  401230:	eb 04                	jmp    0x401236
  401232:	83 65 e4 00          	andl   $0x0,-0x1c(%ebp)
  401236:	6a 01                	push   $0x1
  401238:	e8 1a 38 00 00       	call   0x404a57
  40123d:	59                   	pop    %ecx
  40123e:	85 c0                	test   %eax,%eax
  401240:	75 08                	jne    0x40124a
  401242:	6a 1c                	push   $0x1c
  401244:	e8 6e ff ff ff       	call   0x4011b7
  401249:	59                   	pop    %ecx
  40124a:	e8 7b 36 00 00       	call   0x4048ca
  40124f:	85 c0                	test   %eax,%eax
  401251:	75 08                	jne    0x40125b
  401253:	6a 10                	push   $0x10
  401255:	e8 5d ff ff ff       	call   0x4011b7
  40125a:	59                   	pop    %ecx
  40125b:	e8 0e 32 00 00       	call   0x40446e
  401260:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  401264:	e8 b1 2f 00 00       	call   0x40421a
  401269:	85 c0                	test   %eax,%eax
  40126b:	7d 08                	jge    0x401275
  40126d:	6a 1b                	push   $0x1b
  40126f:	e8 ef 24 00 00       	call   0x403763
  401274:	59                   	pop    %ecx
  401275:	ff 15 00 c0 40 00    	call   *0x40c000
  40127b:	a3 c4 0b 41 00       	mov    %eax,0x410bc4
  401280:	e8 5e 2e 00 00       	call   0x4040e3
  401285:	a3 04 f0 40 00       	mov    %eax,0x40f004
  40128a:	e8 99 2d 00 00       	call   0x404028
  40128f:	85 c0                	test   %eax,%eax
  401291:	7d 08                	jge    0x40129b
  401293:	6a 08                	push   $0x8
  401295:	e8 c9 24 00 00       	call   0x403763
  40129a:	59                   	pop    %ecx
  40129b:	e8 10 2b 00 00       	call   0x403db0
  4012a0:	85 c0                	test   %eax,%eax
  4012a2:	7d 08                	jge    0x4012ac
  4012a4:	6a 09                	push   $0x9
  4012a6:	e8 b8 24 00 00       	call   0x403763
  4012ab:	59                   	pop    %ecx
  4012ac:	6a 01                	push   $0x1
  4012ae:	e8 6f 25 00 00       	call   0x403822
  4012b3:	59                   	pop    %ecx
  4012b4:	85 c0                	test   %eax,%eax
  4012b6:	74 07                	je     0x4012bf
  4012b8:	50                   	push   %eax
  4012b9:	e8 a5 24 00 00       	call   0x403763
  4012be:	59                   	pop    %ecx
  4012bf:	a1 30 f0 40 00       	mov    0x40f030,%eax
  4012c4:	a3 34 f0 40 00       	mov    %eax,0x40f034
  4012c9:	50                   	push   %eax
  4012ca:	ff 35 28 f0 40 00    	pushl  0x40f028
  4012d0:	ff 35 24 f0 40 00    	pushl  0x40f024
  4012d6:	e8 35 fd ff ff       	call   0x401010
  4012db:	83 c4 0c             	add    $0xc,%esp
  4012de:	89 45 e0             	mov    %eax,-0x20(%ebp)
  4012e1:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
  4012e5:	75 06                	jne    0x4012ed
  4012e7:	50                   	push   %eax
  4012e8:	e8 e6 26 00 00       	call   0x4039d3
  4012ed:	e8 0d 27 00 00       	call   0x4039ff
  4012f2:	eb 2e                	jmp    0x401322
  4012f4:	8b 45 ec             	mov    -0x14(%ebp),%eax
  4012f7:	8b 08                	mov    (%eax),%ecx
  4012f9:	8b 09                	mov    (%ecx),%ecx
  4012fb:	89 4d dc             	mov    %ecx,-0x24(%ebp)
  4012fe:	50                   	push   %eax
  4012ff:	51                   	push   %ecx
  401300:	e8 4b 29 00 00       	call   0x403c50
  401305:	59                   	pop    %ecx
  401306:	59                   	pop    %ecx
  401307:	c3                   	ret    
  401308:	8b 65 e8             	mov    -0x18(%ebp),%esp
  40130b:	8b 45 dc             	mov    -0x24(%ebp),%eax
  40130e:	89 45 e0             	mov    %eax,-0x20(%ebp)
  401311:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
  401315:	75 06                	jne    0x40131d
  401317:	50                   	push   %eax
  401318:	e8 cc 26 00 00       	call   0x4039e9
  40131d:	e8 ec 26 00 00       	call   0x403a0e
  401322:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  401329:	8b 45 e0             	mov    -0x20(%ebp),%eax
  40132c:	e8 84 11 00 00       	call   0x4024b5
  401331:	c3                   	ret    
  401332:	e8 50 37 00 00       	call   0x404a87
  401337:	e9 a4 fe ff ff       	jmp    0x4011e0
  40133c:	b8 08 e0 40 00       	mov    $0x40e008,%eax
  401341:	c3                   	ret    
  401342:	a1 c0 0b 41 00       	mov    0x410bc0,%eax
  401347:	56                   	push   %esi
  401348:	6a 14                	push   $0x14
  40134a:	5e                   	pop    %esi
  40134b:	85 c0                	test   %eax,%eax
  40134d:	75 07                	jne    0x401356
  40134f:	b8 00 02 00 00       	mov    $0x200,%eax
  401354:	eb 06                	jmp    0x40135c
  401356:	3b c6                	cmp    %esi,%eax
  401358:	7d 07                	jge    0x401361
  40135a:	8b c6                	mov    %esi,%eax
  40135c:	a3 c0 0b 41 00       	mov    %eax,0x410bc0
  401361:	6a 04                	push   $0x4
  401363:	50                   	push   %eax
  401364:	e8 f9 37 00 00       	call   0x404b62
  401369:	59                   	pop    %ecx
  40136a:	59                   	pop    %ecx
  40136b:	a3 bc fb 40 00       	mov    %eax,0x40fbbc
  401370:	85 c0                	test   %eax,%eax
  401372:	75 1e                	jne    0x401392
  401374:	6a 04                	push   $0x4
  401376:	56                   	push   %esi
  401377:	89 35 c0 0b 41 00    	mov    %esi,0x410bc0
  40137d:	e8 e0 37 00 00       	call   0x404b62
  401382:	59                   	pop    %ecx
  401383:	59                   	pop    %ecx
  401384:	a3 bc fb 40 00       	mov    %eax,0x40fbbc
  401389:	85 c0                	test   %eax,%eax
  40138b:	75 05                	jne    0x401392
  40138d:	6a 1a                	push   $0x1a
  40138f:	58                   	pop    %eax
  401390:	5e                   	pop    %esi
  401391:	c3                   	ret    
  401392:	33 d2                	xor    %edx,%edx
  401394:	b9 08 e0 40 00       	mov    $0x40e008,%ecx
  401399:	eb 05                	jmp    0x4013a0
  40139b:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  4013a0:	89 0c 02             	mov    %ecx,(%edx,%eax,1)
  4013a3:	83 c1 20             	add    $0x20,%ecx
  4013a6:	83 c2 04             	add    $0x4,%edx
  4013a9:	81 f9 88 e2 40 00    	cmp    $0x40e288,%ecx
  4013af:	7c ea                	jl     0x40139b
  4013b1:	6a fe                	push   $0xfffffffe
  4013b3:	5e                   	pop    %esi
  4013b4:	33 d2                	xor    %edx,%edx
  4013b6:	b9 18 e0 40 00       	mov    $0x40e018,%ecx
  4013bb:	57                   	push   %edi
  4013bc:	8b c2                	mov    %edx,%eax
  4013be:	c1 f8 05             	sar    $0x5,%eax
  4013c1:	8b 04 85 a0 fa 40 00 	mov    0x40faa0(,%eax,4),%eax
  4013c8:	8b fa                	mov    %edx,%edi
  4013ca:	83 e7 1f             	and    $0x1f,%edi
  4013cd:	c1 e7 06             	shl    $0x6,%edi
  4013d0:	8b 04 07             	mov    (%edi,%eax,1),%eax
  4013d3:	83 f8 ff             	cmp    $0xffffffff,%eax
  4013d6:	74 08                	je     0x4013e0
  4013d8:	3b c6                	cmp    %esi,%eax
  4013da:	74 04                	je     0x4013e0
  4013dc:	85 c0                	test   %eax,%eax
  4013de:	75 02                	jne    0x4013e2
  4013e0:	89 31                	mov    %esi,(%ecx)
  4013e2:	83 c1 20             	add    $0x20,%ecx
  4013e5:	42                   	inc    %edx
  4013e6:	81 f9 78 e0 40 00    	cmp    $0x40e078,%ecx
  4013ec:	7c ce                	jl     0x4013bc
  4013ee:	5f                   	pop    %edi
  4013ef:	33 c0                	xor    %eax,%eax
  4013f1:	5e                   	pop    %esi
  4013f2:	c3                   	ret    
  4013f3:	e8 0d 3b 00 00       	call   0x404f05
  4013f8:	80 3d 48 f0 40 00 00 	cmpb   $0x0,0x40f048
  4013ff:	74 05                	je     0x401406
  401401:	e8 d6 38 00 00       	call   0x404cdc
  401406:	ff 35 bc fb 40 00    	pushl  0x40fbbc
  40140c:	e8 3d 38 00 00       	call   0x404c4e
  401411:	59                   	pop    %ecx
  401412:	c3                   	ret    
  401413:	8b ff                	mov    %edi,%edi
  401415:	55                   	push   %ebp
  401416:	8b ec                	mov    %esp,%ebp
  401418:	56                   	push   %esi
  401419:	8b 75 08             	mov    0x8(%ebp),%esi
  40141c:	b8 08 e0 40 00       	mov    $0x40e008,%eax
  401421:	3b f0                	cmp    %eax,%esi
  401423:	72 22                	jb     0x401447
  401425:	81 fe 68 e2 40 00    	cmp    $0x40e268,%esi
  40142b:	77 1a                	ja     0x401447
  40142d:	8b ce                	mov    %esi,%ecx
  40142f:	2b c8                	sub    %eax,%ecx
  401431:	c1 f9 05             	sar    $0x5,%ecx
  401434:	83 c1 10             	add    $0x10,%ecx
  401437:	51                   	push   %ecx
  401438:	e8 4d 3c 00 00       	call   0x40508a
  40143d:	81 4e 0c 00 80 00 00 	orl    $0x8000,0xc(%esi)
  401444:	59                   	pop    %ecx
  401445:	eb 0a                	jmp    0x401451
  401447:	83 c6 20             	add    $0x20,%esi
  40144a:	56                   	push   %esi
  40144b:	ff 15 04 c0 40 00    	call   *0x40c004
  401451:	5e                   	pop    %esi
  401452:	5d                   	pop    %ebp
  401453:	c3                   	ret    
  401454:	8b ff                	mov    %edi,%edi
  401456:	55                   	push   %ebp
  401457:	8b ec                	mov    %esp,%ebp
  401459:	8b 45 08             	mov    0x8(%ebp),%eax
  40145c:	83 f8 14             	cmp    $0x14,%eax
  40145f:	7d 16                	jge    0x401477
  401461:	83 c0 10             	add    $0x10,%eax
  401464:	50                   	push   %eax
  401465:	e8 20 3c 00 00       	call   0x40508a
  40146a:	8b 45 0c             	mov    0xc(%ebp),%eax
  40146d:	81 48 0c 00 80 00 00 	orl    $0x8000,0xc(%eax)
  401474:	59                   	pop    %ecx
  401475:	5d                   	pop    %ebp
  401476:	c3                   	ret    
  401477:	8b 45 0c             	mov    0xc(%ebp),%eax
  40147a:	83 c0 20             	add    $0x20,%eax
  40147d:	50                   	push   %eax
  40147e:	ff 15 04 c0 40 00    	call   *0x40c004
  401484:	5d                   	pop    %ebp
  401485:	c3                   	ret    
  401486:	8b ff                	mov    %edi,%edi
  401488:	55                   	push   %ebp
  401489:	8b ec                	mov    %esp,%ebp
  40148b:	8b 45 08             	mov    0x8(%ebp),%eax
  40148e:	b9 08 e0 40 00       	mov    $0x40e008,%ecx
  401493:	3b c1                	cmp    %ecx,%eax
  401495:	72 1f                	jb     0x4014b6
  401497:	3d 68 e2 40 00       	cmp    $0x40e268,%eax
  40149c:	77 18                	ja     0x4014b6
  40149e:	81 60 0c ff 7f ff ff 	andl   $0xffff7fff,0xc(%eax)
  4014a5:	2b c1                	sub    %ecx,%eax
  4014a7:	c1 f8 05             	sar    $0x5,%eax
  4014aa:	83 c0 10             	add    $0x10,%eax
  4014ad:	50                   	push   %eax
  4014ae:	e8 fd 3a 00 00       	call   0x404fb0
  4014b3:	59                   	pop    %ecx
  4014b4:	5d                   	pop    %ebp
  4014b5:	c3                   	ret    
  4014b6:	83 c0 20             	add    $0x20,%eax
  4014b9:	50                   	push   %eax
  4014ba:	ff 15 08 c0 40 00    	call   *0x40c008
  4014c0:	5d                   	pop    %ebp
  4014c1:	c3                   	ret    
  4014c2:	8b ff                	mov    %edi,%edi
  4014c4:	55                   	push   %ebp
  4014c5:	8b ec                	mov    %esp,%ebp
  4014c7:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4014ca:	83 f9 14             	cmp    $0x14,%ecx
  4014cd:	8b 45 0c             	mov    0xc(%ebp),%eax
  4014d0:	7d 13                	jge    0x4014e5
  4014d2:	81 60 0c ff 7f ff ff 	andl   $0xffff7fff,0xc(%eax)
  4014d9:	83 c1 10             	add    $0x10,%ecx
  4014dc:	51                   	push   %ecx
  4014dd:	e8 ce 3a 00 00       	call   0x404fb0
  4014e2:	59                   	pop    %ecx
  4014e3:	5d                   	pop    %ebp
  4014e4:	c3                   	ret    
  4014e5:	83 c0 20             	add    $0x20,%eax
  4014e8:	50                   	push   %eax
  4014e9:	ff 15 08 c0 40 00    	call   *0x40c008
  4014ef:	5d                   	pop    %ebp
  4014f0:	c3                   	ret    
  4014f1:	8b ff                	mov    %edi,%edi
  4014f3:	55                   	push   %ebp
  4014f4:	8b ec                	mov    %esp,%ebp
  4014f6:	56                   	push   %esi
  4014f7:	8b 75 08             	mov    0x8(%ebp),%esi
  4014fa:	56                   	push   %esi
  4014fb:	e8 21 3c 00 00       	call   0x405121
  401500:	50                   	push   %eax
  401501:	e8 b7 3b 00 00       	call   0x4050bd
  401506:	59                   	pop    %ecx
  401507:	59                   	pop    %ecx
  401508:	85 c0                	test   %eax,%eax
  40150a:	74 7c                	je     0x401588
  40150c:	e8 2b fe ff ff       	call   0x40133c
  401511:	83 c0 20             	add    $0x20,%eax
  401514:	3b f0                	cmp    %eax,%esi
  401516:	75 04                	jne    0x40151c
  401518:	33 c0                	xor    %eax,%eax
  40151a:	eb 0f                	jmp    0x40152b
  40151c:	e8 1b fe ff ff       	call   0x40133c
  401521:	83 c0 40             	add    $0x40,%eax
  401524:	3b f0                	cmp    %eax,%esi
  401526:	75 60                	jne    0x401588
  401528:	33 c0                	xor    %eax,%eax
  40152a:	40                   	inc    %eax
  40152b:	ff 05 10 f0 40 00    	incl   0x40f010
  401531:	f7 46 0c 0c 01 00 00 	testl  $0x10c,0xc(%esi)
  401538:	75 4e                	jne    0x401588
  40153a:	53                   	push   %ebx
  40153b:	57                   	push   %edi
  40153c:	8d 3c 85 14 f0 40 00 	lea    0x40f014(,%eax,4),%edi
  401543:	83 3f 00             	cmpl   $0x0,(%edi)
  401546:	bb 00 10 00 00       	mov    $0x1000,%ebx
  40154b:	75 20                	jne    0x40156d
  40154d:	53                   	push   %ebx
  40154e:	e8 ca 35 00 00       	call   0x404b1d
  401553:	59                   	pop    %ecx
  401554:	89 07                	mov    %eax,(%edi)
  401556:	85 c0                	test   %eax,%eax
  401558:	75 13                	jne    0x40156d
  40155a:	8d 46 14             	lea    0x14(%esi),%eax
  40155d:	6a 02                	push   $0x2
  40155f:	89 46 08             	mov    %eax,0x8(%esi)
  401562:	89 06                	mov    %eax,(%esi)
  401564:	58                   	pop    %eax
  401565:	89 46 18             	mov    %eax,0x18(%esi)
  401568:	89 46 04             	mov    %eax,0x4(%esi)
  40156b:	eb 0d                	jmp    0x40157a
  40156d:	8b 3f                	mov    (%edi),%edi
  40156f:	89 7e 08             	mov    %edi,0x8(%esi)
  401572:	89 3e                	mov    %edi,(%esi)
  401574:	89 5e 18             	mov    %ebx,0x18(%esi)
  401577:	89 5e 04             	mov    %ebx,0x4(%esi)
  40157a:	81 4e 0c 02 11 00 00 	orl    $0x1102,0xc(%esi)
  401581:	33 c0                	xor    %eax,%eax
  401583:	5f                   	pop    %edi
  401584:	40                   	inc    %eax
  401585:	5b                   	pop    %ebx
  401586:	eb 02                	jmp    0x40158a
  401588:	33 c0                	xor    %eax,%eax
  40158a:	5e                   	pop    %esi
  40158b:	5d                   	pop    %ebp
  40158c:	c3                   	ret    
  40158d:	8b ff                	mov    %edi,%edi
  40158f:	55                   	push   %ebp
  401590:	8b ec                	mov    %esp,%ebp
  401592:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
  401596:	74 27                	je     0x4015bf
  401598:	56                   	push   %esi
  401599:	8b 75 0c             	mov    0xc(%ebp),%esi
  40159c:	f7 46 0c 00 10 00 00 	testl  $0x1000,0xc(%esi)
  4015a3:	74 19                	je     0x4015be
  4015a5:	56                   	push   %esi
  4015a6:	e8 d0 37 00 00       	call   0x404d7b
  4015ab:	81 66 0c ff ee ff ff 	andl   $0xffffeeff,0xc(%esi)
  4015b2:	83 66 18 00          	andl   $0x0,0x18(%esi)
  4015b6:	83 26 00             	andl   $0x0,(%esi)
  4015b9:	83 66 08 00          	andl   $0x0,0x8(%esi)
  4015bd:	59                   	pop    %ecx
  4015be:	5e                   	pop    %esi
  4015bf:	5d                   	pop    %ebp
  4015c0:	c3                   	ret    
  4015c1:	8b ff                	mov    %edi,%edi
  4015c3:	55                   	push   %ebp
  4015c4:	8b ec                	mov    %esp,%ebp
  4015c6:	8b 45 08             	mov    0x8(%ebp),%eax
  4015c9:	56                   	push   %esi
  4015ca:	8b f1                	mov    %ecx,%esi
  4015cc:	c6 46 0c 00          	movb   $0x0,0xc(%esi)
  4015d0:	85 c0                	test   %eax,%eax
  4015d2:	75 63                	jne    0x401637
  4015d4:	e8 a8 31 00 00       	call   0x404781
  4015d9:	89 46 08             	mov    %eax,0x8(%esi)
  4015dc:	8b 48 6c             	mov    0x6c(%eax),%ecx
  4015df:	89 0e                	mov    %ecx,(%esi)
  4015e1:	8b 48 68             	mov    0x68(%eax),%ecx
  4015e4:	89 4e 04             	mov    %ecx,0x4(%esi)
  4015e7:	8b 0e                	mov    (%esi),%ecx
  4015e9:	3b 0d 50 ec 40 00    	cmp    0x40ec50,%ecx
  4015ef:	74 12                	je     0x401603
  4015f1:	8b 0d 6c eb 40 00    	mov    0x40eb6c,%ecx
  4015f7:	85 48 70             	test   %ecx,0x70(%eax)
  4015fa:	75 07                	jne    0x401603
  4015fc:	e8 e4 44 00 00       	call   0x405ae5
  401601:	89 06                	mov    %eax,(%esi)
  401603:	8b 46 04             	mov    0x4(%esi),%eax
  401606:	3b 05 70 ea 40 00    	cmp    0x40ea70,%eax
  40160c:	74 16                	je     0x401624
  40160e:	8b 46 08             	mov    0x8(%esi),%eax
  401611:	8b 0d 6c eb 40 00    	mov    0x40eb6c,%ecx
  401617:	85 48 70             	test   %ecx,0x70(%eax)
  40161a:	75 08                	jne    0x401624
  40161c:	e8 58 3d 00 00       	call   0x405379
  401621:	89 46 04             	mov    %eax,0x4(%esi)
  401624:	8b 46 08             	mov    0x8(%esi),%eax
  401627:	f6 40 70 02          	testb  $0x2,0x70(%eax)
  40162b:	75 14                	jne    0x401641
  40162d:	83 48 70 02          	orl    $0x2,0x70(%eax)
  401631:	c6 46 0c 01          	movb   $0x1,0xc(%esi)
  401635:	eb 0a                	jmp    0x401641
  401637:	8b 08                	mov    (%eax),%ecx
  401639:	89 0e                	mov    %ecx,(%esi)
  40163b:	8b 40 04             	mov    0x4(%eax),%eax
  40163e:	89 46 04             	mov    %eax,0x4(%esi)
  401641:	8b c6                	mov    %esi,%eax
  401643:	5e                   	pop    %esi
  401644:	5d                   	pop    %ebp
  401645:	c2 04 00             	ret    $0x4
  401648:	f6 41 0c 40          	testb  $0x40,0xc(%ecx)
  40164c:	74 06                	je     0x401654
  40164e:	83 79 08 00          	cmpl   $0x0,0x8(%ecx)
  401652:	74 24                	je     0x401678
  401654:	ff 49 04             	decl   0x4(%ecx)
  401657:	78 0b                	js     0x401664
  401659:	8b 11                	mov    (%ecx),%edx
  40165b:	88 02                	mov    %al,(%edx)
  40165d:	ff 01                	incl   (%ecx)
  40165f:	0f b6 c0             	movzbl %al,%eax
  401662:	eb 0c                	jmp    0x401670
  401664:	0f be c0             	movsbl %al,%eax
  401667:	51                   	push   %ecx
  401668:	50                   	push   %eax
  401669:	e8 ed 44 00 00       	call   0x405b5b
  40166e:	59                   	pop    %ecx
  40166f:	59                   	pop    %ecx
  401670:	83 f8 ff             	cmp    $0xffffffff,%eax
  401673:	75 03                	jne    0x401678
  401675:	09 06                	or     %eax,(%esi)
  401677:	c3                   	ret    
  401678:	ff 06                	incl   (%esi)
  40167a:	c3                   	ret    
  40167b:	8b ff                	mov    %edi,%edi
  40167d:	55                   	push   %ebp
  40167e:	8b ec                	mov    %esp,%ebp
  401680:	56                   	push   %esi
  401681:	8b f0                	mov    %eax,%esi
  401683:	eb 13                	jmp    0x401698
  401685:	8b 4d 10             	mov    0x10(%ebp),%ecx
  401688:	8a 45 08             	mov    0x8(%ebp),%al
  40168b:	ff 4d 0c             	decl   0xc(%ebp)
  40168e:	e8 b5 ff ff ff       	call   0x401648
  401693:	83 3e ff             	cmpl   $0xffffffff,(%esi)
  401696:	74 06                	je     0x40169e
  401698:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
  40169c:	7f e7                	jg     0x401685
  40169e:	5e                   	pop    %esi
  40169f:	5d                   	pop    %ebp
  4016a0:	c3                   	ret    
  4016a1:	8b ff                	mov    %edi,%edi
  4016a3:	55                   	push   %ebp
  4016a4:	8b ec                	mov    %esp,%ebp
  4016a6:	f6 47 0c 40          	testb  $0x40,0xc(%edi)
  4016aa:	53                   	push   %ebx
  4016ab:	56                   	push   %esi
  4016ac:	8b f0                	mov    %eax,%esi
  4016ae:	8b d9                	mov    %ecx,%ebx
  4016b0:	74 32                	je     0x4016e4
  4016b2:	83 7f 08 00          	cmpl   $0x0,0x8(%edi)
  4016b6:	75 2c                	jne    0x4016e4
  4016b8:	8b 45 08             	mov    0x8(%ebp),%eax
  4016bb:	01 06                	add    %eax,(%esi)
  4016bd:	eb 2b                	jmp    0x4016ea
  4016bf:	8a 03                	mov    (%ebx),%al
  4016c1:	ff 4d 08             	decl   0x8(%ebp)
  4016c4:	8b cf                	mov    %edi,%ecx
  4016c6:	e8 7d ff ff ff       	call   0x401648
  4016cb:	43                   	inc    %ebx
  4016cc:	83 3e ff             	cmpl   $0xffffffff,(%esi)
  4016cf:	75 13                	jne    0x4016e4
  4016d1:	e8 4f 0d 00 00       	call   0x402425
  4016d6:	83 38 2a             	cmpl   $0x2a,(%eax)
  4016d9:	75 0f                	jne    0x4016ea
  4016db:	8b cf                	mov    %edi,%ecx
  4016dd:	b0 3f                	mov    $0x3f,%al
  4016df:	e8 64 ff ff ff       	call   0x401648
  4016e4:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
  4016e8:	7f d5                	jg     0x4016bf
  4016ea:	5e                   	pop    %esi
  4016eb:	5b                   	pop    %ebx
  4016ec:	5d                   	pop    %ebp
  4016ed:	c3                   	ret    
  4016ee:	8b ff                	mov    %edi,%edi
  4016f0:	55                   	push   %ebp
  4016f1:	8b ec                	mov    %esp,%ebp
  4016f3:	81 ec 78 02 00 00    	sub    $0x278,%esp
  4016f9:	a1 00 e4 40 00       	mov    0x40e400,%eax
  4016fe:	33 c5                	xor    %ebp,%eax
  401700:	89 45 fc             	mov    %eax,-0x4(%ebp)
  401703:	53                   	push   %ebx
  401704:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  401707:	56                   	push   %esi
  401708:	8b 75 08             	mov    0x8(%ebp),%esi
  40170b:	33 c0                	xor    %eax,%eax
  40170d:	57                   	push   %edi
  40170e:	8b 7d 14             	mov    0x14(%ebp),%edi
  401711:	ff 75 10             	pushl  0x10(%ebp)
  401714:	8d 8d a4 fd ff ff    	lea    -0x25c(%ebp),%ecx
  40171a:	89 b5 b4 fd ff ff    	mov    %esi,-0x24c(%ebp)
  401720:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401726:	89 85 b8 fd ff ff    	mov    %eax,-0x248(%ebp)
  40172c:	89 85 f0 fd ff ff    	mov    %eax,-0x210(%ebp)
  401732:	89 85 cc fd ff ff    	mov    %eax,-0x234(%ebp)
  401738:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
  40173e:	89 85 d0 fd ff ff    	mov    %eax,-0x230(%ebp)
  401744:	89 85 c0 fd ff ff    	mov    %eax,-0x240(%ebp)
  40174a:	89 85 c8 fd ff ff    	mov    %eax,-0x238(%ebp)
  401750:	e8 6c fe ff ff       	call   0x4015c1
  401755:	85 f6                	test   %esi,%esi
  401757:	75 35                	jne    0x40178e
  401759:	e8 c7 0c 00 00       	call   0x402425
  40175e:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  401764:	33 c0                	xor    %eax,%eax
  401766:	50                   	push   %eax
  401767:	50                   	push   %eax
  401768:	50                   	push   %eax
  401769:	50                   	push   %eax
  40176a:	50                   	push   %eax
  40176b:	e8 4d 0c 00 00       	call   0x4023bd
  401770:	83 c4 14             	add    $0x14,%esp
  401773:	80 bd b0 fd ff ff 00 	cmpb   $0x0,-0x250(%ebp)
  40177a:	74 0a                	je     0x401786
  40177c:	8b 85 ac fd ff ff    	mov    -0x254(%ebp),%eax
  401782:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  401786:	83 c8 ff             	or     $0xffffffff,%eax
  401789:	e9 c8 0a 00 00       	jmp    0x402256
  40178e:	f6 46 0c 40          	testb  $0x40,0xc(%esi)
  401792:	75 5e                	jne    0x4017f2
  401794:	56                   	push   %esi
  401795:	e8 87 39 00 00       	call   0x405121
  40179a:	59                   	pop    %ecx
  40179b:	ba d8 e4 40 00       	mov    $0x40e4d8,%edx
  4017a0:	83 f8 ff             	cmp    $0xffffffff,%eax
  4017a3:	74 1b                	je     0x4017c0
  4017a5:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4017a8:	74 16                	je     0x4017c0
  4017aa:	8b c8                	mov    %eax,%ecx
  4017ac:	83 e1 1f             	and    $0x1f,%ecx
  4017af:	8b f0                	mov    %eax,%esi
  4017b1:	c1 fe 05             	sar    $0x5,%esi
  4017b4:	c1 e1 06             	shl    $0x6,%ecx
  4017b7:	03 0c b5 a0 fa 40 00 	add    0x40faa0(,%esi,4),%ecx
  4017be:	eb 02                	jmp    0x4017c2
  4017c0:	8b ca                	mov    %edx,%ecx
  4017c2:	f6 41 24 7f          	testb  $0x7f,0x24(%ecx)
  4017c6:	75 91                	jne    0x401759
  4017c8:	83 f8 ff             	cmp    $0xffffffff,%eax
  4017cb:	74 19                	je     0x4017e6
  4017cd:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4017d0:	74 14                	je     0x4017e6
  4017d2:	8b c8                	mov    %eax,%ecx
  4017d4:	83 e0 1f             	and    $0x1f,%eax
  4017d7:	c1 f9 05             	sar    $0x5,%ecx
  4017da:	c1 e0 06             	shl    $0x6,%eax
  4017dd:	03 04 8d a0 fa 40 00 	add    0x40faa0(,%ecx,4),%eax
  4017e4:	eb 02                	jmp    0x4017e8
  4017e6:	8b c2                	mov    %edx,%eax
  4017e8:	f6 40 24 80          	testb  $0x80,0x24(%eax)
  4017ec:	0f 85 67 ff ff ff    	jne    0x401759
  4017f2:	33 c9                	xor    %ecx,%ecx
  4017f4:	3b d9                	cmp    %ecx,%ebx
  4017f6:	0f 84 5d ff ff ff    	je     0x401759
  4017fc:	8a 13                	mov    (%ebx),%dl
  4017fe:	89 8d d8 fd ff ff    	mov    %ecx,-0x228(%ebp)
  401804:	89 8d e0 fd ff ff    	mov    %ecx,-0x220(%ebp)
  40180a:	89 8d bc fd ff ff    	mov    %ecx,-0x244(%ebp)
  401810:	88 95 ef fd ff ff    	mov    %dl,-0x211(%ebp)
  401816:	84 d2                	test   %dl,%dl
  401818:	0f 84 1f 0a 00 00    	je     0x40223d
  40181e:	43                   	inc    %ebx
  40181f:	83 bd d8 fd ff ff 00 	cmpl   $0x0,-0x228(%ebp)
  401826:	89 9d c4 fd ff ff    	mov    %ebx,-0x23c(%ebp)
  40182c:	0f 8c 0b 0a 00 00    	jl     0x40223d
  401832:	8a c2                	mov    %dl,%al
  401834:	2c 20                	sub    $0x20,%al
  401836:	3c 58                	cmp    $0x58,%al
  401838:	77 11                	ja     0x40184b
  40183a:	0f be c2             	movsbl %dl,%eax
  40183d:	0f be 80 58 c1 40 00 	movsbl 0x40c158(%eax),%eax
  401844:	83 e0 0f             	and    $0xf,%eax
  401847:	33 f6                	xor    %esi,%esi
  401849:	eb 04                	jmp    0x40184f
  40184b:	33 f6                	xor    %esi,%esi
  40184d:	33 c0                	xor    %eax,%eax
  40184f:	0f be 84 c1 78 c1 40 	movsbl 0x40c178(%ecx,%eax,8),%eax
  401856:	00 
  401857:	6a 07                	push   $0x7
  401859:	c1 f8 04             	sar    $0x4,%eax
  40185c:	59                   	pop    %ecx
  40185d:	89 85 94 fd ff ff    	mov    %eax,-0x26c(%ebp)
  401863:	3b c1                	cmp    %ecx,%eax
  401865:	0f 87 ad 09 00 00    	ja     0x402218
  40186b:	ff 24 85 66 22 40 00 	jmp    *0x402266(,%eax,4)
  401872:	83 8d e8 fd ff ff ff 	orl    $0xffffffff,-0x218(%ebp)
  401879:	89 b5 90 fd ff ff    	mov    %esi,-0x270(%ebp)
  40187f:	89 b5 c0 fd ff ff    	mov    %esi,-0x240(%ebp)
  401885:	89 b5 cc fd ff ff    	mov    %esi,-0x234(%ebp)
  40188b:	89 b5 d0 fd ff ff    	mov    %esi,-0x230(%ebp)
  401891:	89 b5 f0 fd ff ff    	mov    %esi,-0x210(%ebp)
  401897:	89 b5 c8 fd ff ff    	mov    %esi,-0x238(%ebp)
  40189d:	e9 76 09 00 00       	jmp    0x402218
  4018a2:	0f be c2             	movsbl %dl,%eax
  4018a5:	83 e8 20             	sub    $0x20,%eax
  4018a8:	74 4a                	je     0x4018f4
  4018aa:	83 e8 03             	sub    $0x3,%eax
  4018ad:	74 36                	je     0x4018e5
  4018af:	83 e8 08             	sub    $0x8,%eax
  4018b2:	74 25                	je     0x4018d9
  4018b4:	48                   	dec    %eax
  4018b5:	48                   	dec    %eax
  4018b6:	74 15                	je     0x4018cd
  4018b8:	83 e8 03             	sub    $0x3,%eax
  4018bb:	0f 85 57 09 00 00    	jne    0x402218
  4018c1:	83 8d f0 fd ff ff 08 	orl    $0x8,-0x210(%ebp)
  4018c8:	e9 4b 09 00 00       	jmp    0x402218
  4018cd:	83 8d f0 fd ff ff 04 	orl    $0x4,-0x210(%ebp)
  4018d4:	e9 3f 09 00 00       	jmp    0x402218
  4018d9:	83 8d f0 fd ff ff 01 	orl    $0x1,-0x210(%ebp)
  4018e0:	e9 33 09 00 00       	jmp    0x402218
  4018e5:	81 8d f0 fd ff ff 80 	orl    $0x80,-0x210(%ebp)
  4018ec:	00 00 00 
  4018ef:	e9 24 09 00 00       	jmp    0x402218
  4018f4:	83 8d f0 fd ff ff 02 	orl    $0x2,-0x210(%ebp)
  4018fb:	e9 18 09 00 00       	jmp    0x402218
  401900:	80 fa 2a             	cmp    $0x2a,%dl
  401903:	75 2c                	jne    0x401931
  401905:	83 c7 04             	add    $0x4,%edi
  401908:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  40190e:	8b 7f fc             	mov    -0x4(%edi),%edi
  401911:	3b fe                	cmp    %esi,%edi
  401913:	89 bd cc fd ff ff    	mov    %edi,-0x234(%ebp)
  401919:	0f 8d f9 08 00 00    	jge    0x402218
  40191f:	83 8d f0 fd ff ff 04 	orl    $0x4,-0x210(%ebp)
  401926:	f7 9d cc fd ff ff    	negl   -0x234(%ebp)
  40192c:	e9 e7 08 00 00       	jmp    0x402218
  401931:	8b 85 cc fd ff ff    	mov    -0x234(%ebp),%eax
  401937:	6b c0 0a             	imul   $0xa,%eax,%eax
  40193a:	0f be ca             	movsbl %dl,%ecx
  40193d:	8d 44 08 d0          	lea    -0x30(%eax,%ecx,1),%eax
  401941:	89 85 cc fd ff ff    	mov    %eax,-0x234(%ebp)
  401947:	e9 cc 08 00 00       	jmp    0x402218
  40194c:	89 b5 e8 fd ff ff    	mov    %esi,-0x218(%ebp)
  401952:	e9 c1 08 00 00       	jmp    0x402218
  401957:	80 fa 2a             	cmp    $0x2a,%dl
  40195a:	75 26                	jne    0x401982
  40195c:	83 c7 04             	add    $0x4,%edi
  40195f:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401965:	8b 7f fc             	mov    -0x4(%edi),%edi
  401968:	3b fe                	cmp    %esi,%edi
  40196a:	89 bd e8 fd ff ff    	mov    %edi,-0x218(%ebp)
  401970:	0f 8d a2 08 00 00    	jge    0x402218
  401976:	83 8d e8 fd ff ff ff 	orl    $0xffffffff,-0x218(%ebp)
  40197d:	e9 96 08 00 00       	jmp    0x402218
  401982:	8b 85 e8 fd ff ff    	mov    -0x218(%ebp),%eax
  401988:	6b c0 0a             	imul   $0xa,%eax,%eax
  40198b:	0f be ca             	movsbl %dl,%ecx
  40198e:	8d 44 08 d0          	lea    -0x30(%eax,%ecx,1),%eax
  401992:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
  401998:	e9 7b 08 00 00       	jmp    0x402218
  40199d:	80 fa 49             	cmp    $0x49,%dl
  4019a0:	74 55                	je     0x4019f7
  4019a2:	80 fa 68             	cmp    $0x68,%dl
  4019a5:	74 44                	je     0x4019eb
  4019a7:	80 fa 6c             	cmp    $0x6c,%dl
  4019aa:	74 18                	je     0x4019c4
  4019ac:	80 fa 77             	cmp    $0x77,%dl
  4019af:	0f 85 63 08 00 00    	jne    0x402218
  4019b5:	81 8d f0 fd ff ff 00 	orl    $0x800,-0x210(%ebp)
  4019bc:	08 00 00 
  4019bf:	e9 54 08 00 00       	jmp    0x402218
  4019c4:	80 3b 6c             	cmpb   $0x6c,(%ebx)
  4019c7:	75 16                	jne    0x4019df
  4019c9:	43                   	inc    %ebx
  4019ca:	81 8d f0 fd ff ff 00 	orl    $0x1000,-0x210(%ebp)
  4019d1:	10 00 00 
  4019d4:	89 9d c4 fd ff ff    	mov    %ebx,-0x23c(%ebp)
  4019da:	e9 39 08 00 00       	jmp    0x402218
  4019df:	83 8d f0 fd ff ff 10 	orl    $0x10,-0x210(%ebp)
  4019e6:	e9 2d 08 00 00       	jmp    0x402218
  4019eb:	83 8d f0 fd ff ff 20 	orl    $0x20,-0x210(%ebp)
  4019f2:	e9 21 08 00 00       	jmp    0x402218
  4019f7:	8a 03                	mov    (%ebx),%al
  4019f9:	3c 36                	cmp    $0x36,%al
  4019fb:	75 1d                	jne    0x401a1a
  4019fd:	80 7b 01 34          	cmpb   $0x34,0x1(%ebx)
  401a01:	75 17                	jne    0x401a1a
  401a03:	43                   	inc    %ebx
  401a04:	43                   	inc    %ebx
  401a05:	81 8d f0 fd ff ff 00 	orl    $0x8000,-0x210(%ebp)
  401a0c:	80 00 00 
  401a0f:	89 9d c4 fd ff ff    	mov    %ebx,-0x23c(%ebp)
  401a15:	e9 fe 07 00 00       	jmp    0x402218
  401a1a:	3c 33                	cmp    $0x33,%al
  401a1c:	75 1d                	jne    0x401a3b
  401a1e:	80 7b 01 32          	cmpb   $0x32,0x1(%ebx)
  401a22:	75 17                	jne    0x401a3b
  401a24:	43                   	inc    %ebx
  401a25:	43                   	inc    %ebx
  401a26:	81 a5 f0 fd ff ff ff 	andl   $0xffff7fff,-0x210(%ebp)
  401a2d:	7f ff ff 
  401a30:	89 9d c4 fd ff ff    	mov    %ebx,-0x23c(%ebp)
  401a36:	e9 dd 07 00 00       	jmp    0x402218
  401a3b:	3c 64                	cmp    $0x64,%al
  401a3d:	0f 84 d5 07 00 00    	je     0x402218
  401a43:	3c 69                	cmp    $0x69,%al
  401a45:	0f 84 cd 07 00 00    	je     0x402218
  401a4b:	3c 6f                	cmp    $0x6f,%al
  401a4d:	0f 84 c5 07 00 00    	je     0x402218
  401a53:	3c 75                	cmp    $0x75,%al
  401a55:	0f 84 bd 07 00 00    	je     0x402218
  401a5b:	3c 78                	cmp    $0x78,%al
  401a5d:	0f 84 b5 07 00 00    	je     0x402218
  401a63:	3c 58                	cmp    $0x58,%al
  401a65:	0f 84 ad 07 00 00    	je     0x402218
  401a6b:	89 b5 94 fd ff ff    	mov    %esi,-0x26c(%ebp)
  401a71:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
  401a77:	50                   	push   %eax
  401a78:	0f b6 c2             	movzbl %dl,%eax
  401a7b:	50                   	push   %eax
  401a7c:	89 b5 c8 fd ff ff    	mov    %esi,-0x238(%ebp)
  401a82:	e8 6d 44 00 00       	call   0x405ef4
  401a87:	59                   	pop    %ecx
  401a88:	85 c0                	test   %eax,%eax
  401a8a:	8a 85 ef fd ff ff    	mov    -0x211(%ebp),%al
  401a90:	59                   	pop    %ecx
  401a91:	74 22                	je     0x401ab5
  401a93:	8b 8d b4 fd ff ff    	mov    -0x24c(%ebp),%ecx
  401a99:	8d b5 d8 fd ff ff    	lea    -0x228(%ebp),%esi
  401a9f:	e8 a4 fb ff ff       	call   0x401648
  401aa4:	8a 03                	mov    (%ebx),%al
  401aa6:	43                   	inc    %ebx
  401aa7:	89 9d c4 fd ff ff    	mov    %ebx,-0x23c(%ebp)
  401aad:	84 c0                	test   %al,%al
  401aaf:	0f 84 a4 fc ff ff    	je     0x401759
  401ab5:	8b 8d b4 fd ff ff    	mov    -0x24c(%ebp),%ecx
  401abb:	8d b5 d8 fd ff ff    	lea    -0x228(%ebp),%esi
  401ac1:	e8 82 fb ff ff       	call   0x401648
  401ac6:	e9 4d 07 00 00       	jmp    0x402218
  401acb:	0f be c2             	movsbl %dl,%eax
  401ace:	83 f8 64             	cmp    $0x64,%eax
  401ad1:	0f 8f e8 01 00 00    	jg     0x401cbf
  401ad7:	0f 84 79 02 00 00    	je     0x401d56
  401add:	83 f8 53             	cmp    $0x53,%eax
  401ae0:	0f 8f f2 00 00 00    	jg     0x401bd8
  401ae6:	0f 84 80 00 00 00    	je     0x401b6c
  401aec:	83 e8 41             	sub    $0x41,%eax
  401aef:	74 10                	je     0x401b01
  401af1:	48                   	dec    %eax
  401af2:	48                   	dec    %eax
  401af3:	74 58                	je     0x401b4d
  401af5:	48                   	dec    %eax
  401af6:	48                   	dec    %eax
  401af7:	74 08                	je     0x401b01
  401af9:	48                   	dec    %eax
  401afa:	48                   	dec    %eax
  401afb:	0f 85 92 05 00 00    	jne    0x402093
  401b01:	80 c2 20             	add    $0x20,%dl
  401b04:	c7 85 90 fd ff ff 01 	movl   $0x1,-0x270(%ebp)
  401b0b:	00 00 00 
  401b0e:	88 95 ef fd ff ff    	mov    %dl,-0x211(%ebp)
  401b14:	83 8d f0 fd ff ff 40 	orl    $0x40,-0x210(%ebp)
  401b1b:	39 b5 e8 fd ff ff    	cmp    %esi,-0x218(%ebp)
  401b21:	8d 9d f4 fd ff ff    	lea    -0x20c(%ebp),%ebx
  401b27:	b8 00 02 00 00       	mov    $0x200,%eax
  401b2c:	89 9d e4 fd ff ff    	mov    %ebx,-0x21c(%ebp)
  401b32:	89 85 a0 fd ff ff    	mov    %eax,-0x260(%ebp)
  401b38:	0f 8d 48 02 00 00    	jge    0x401d86
  401b3e:	c7 85 e8 fd ff ff 06 	movl   $0x6,-0x218(%ebp)
  401b45:	00 00 00 
  401b48:	e9 a5 02 00 00       	jmp    0x401df2
  401b4d:	f7 85 f0 fd ff ff 30 	testl  $0x830,-0x210(%ebp)
  401b54:	08 00 00 
  401b57:	0f 85 98 00 00 00    	jne    0x401bf5
  401b5d:	81 8d f0 fd ff ff 00 	orl    $0x800,-0x210(%ebp)
  401b64:	08 00 00 
  401b67:	e9 89 00 00 00       	jmp    0x401bf5
  401b6c:	f7 85 f0 fd ff ff 30 	testl  $0x830,-0x210(%ebp)
  401b73:	08 00 00 
  401b76:	75 0a                	jne    0x401b82
  401b78:	81 8d f0 fd ff ff 00 	orl    $0x800,-0x210(%ebp)
  401b7f:	08 00 00 
  401b82:	8b 8d e8 fd ff ff    	mov    -0x218(%ebp),%ecx
  401b88:	83 f9 ff             	cmp    $0xffffffff,%ecx
  401b8b:	75 05                	jne    0x401b92
  401b8d:	b9 ff ff ff 7f       	mov    $0x7fffffff,%ecx
  401b92:	83 c7 04             	add    $0x4,%edi
  401b95:	f7 85 f0 fd ff ff 10 	testl  $0x810,-0x210(%ebp)
  401b9c:	08 00 00 
  401b9f:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401ba5:	8b 7f fc             	mov    -0x4(%edi),%edi
  401ba8:	89 bd e4 fd ff ff    	mov    %edi,-0x21c(%ebp)
  401bae:	0f 84 b1 04 00 00    	je     0x402065
  401bb4:	3b fe                	cmp    %esi,%edi
  401bb6:	75 0b                	jne    0x401bc3
  401bb8:	a1 8c e2 40 00       	mov    0x40e28c,%eax
  401bbd:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
  401bc3:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
  401bc9:	c7 85 c8 fd ff ff 01 	movl   $0x1,-0x238(%ebp)
  401bd0:	00 00 00 
  401bd3:	e9 7f 04 00 00       	jmp    0x402057
  401bd8:	83 e8 58             	sub    $0x58,%eax
  401bdb:	0f 84 da 02 00 00    	je     0x401ebb
  401be1:	48                   	dec    %eax
  401be2:	48                   	dec    %eax
  401be3:	74 79                	je     0x401c5e
  401be5:	2b c1                	sub    %ecx,%eax
  401be7:	0f 84 27 ff ff ff    	je     0x401b14
  401bed:	48                   	dec    %eax
  401bee:	48                   	dec    %eax
  401bef:	0f 85 9e 04 00 00    	jne    0x402093
  401bf5:	83 c7 04             	add    $0x4,%edi
  401bf8:	f7 85 f0 fd ff ff 10 	testl  $0x810,-0x210(%ebp)
  401bff:	08 00 00 
  401c02:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401c08:	74 30                	je     0x401c3a
  401c0a:	0f b7 47 fc          	movzwl -0x4(%edi),%eax
  401c0e:	50                   	push   %eax
  401c0f:	68 00 02 00 00       	push   $0x200
  401c14:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
  401c1a:	50                   	push   %eax
  401c1b:	8d 85 e0 fd ff ff    	lea    -0x220(%ebp),%eax
  401c21:	50                   	push   %eax
  401c22:	e8 b0 42 00 00       	call   0x405ed7
  401c27:	83 c4 10             	add    $0x10,%esp
  401c2a:	85 c0                	test   %eax,%eax
  401c2c:	74 1f                	je     0x401c4d
  401c2e:	c7 85 c0 fd ff ff 01 	movl   $0x1,-0x240(%ebp)
  401c35:	00 00 00 
  401c38:	eb 13                	jmp    0x401c4d
  401c3a:	8a 47 fc             	mov    -0x4(%edi),%al
  401c3d:	88 85 f4 fd ff ff    	mov    %al,-0x20c(%ebp)
  401c43:	c7 85 e0 fd ff ff 01 	movl   $0x1,-0x220(%ebp)
  401c4a:	00 00 00 
  401c4d:	8d 85 f4 fd ff ff    	lea    -0x20c(%ebp),%eax
  401c53:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
  401c59:	e9 35 04 00 00       	jmp    0x402093
  401c5e:	8b 07                	mov    (%edi),%eax
  401c60:	83 c7 04             	add    $0x4,%edi
  401c63:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401c69:	3b c6                	cmp    %esi,%eax
  401c6b:	74 3b                	je     0x401ca8
  401c6d:	8b 48 04             	mov    0x4(%eax),%ecx
  401c70:	3b ce                	cmp    %esi,%ecx
  401c72:	74 34                	je     0x401ca8
  401c74:	f7 85 f0 fd ff ff 00 	testl  $0x800,-0x210(%ebp)
  401c7b:	08 00 00 
  401c7e:	0f bf 00             	movswl (%eax),%eax
  401c81:	89 8d e4 fd ff ff    	mov    %ecx,-0x21c(%ebp)
  401c87:	74 14                	je     0x401c9d
  401c89:	99                   	cltd   
  401c8a:	2b c2                	sub    %edx,%eax
  401c8c:	d1 f8                	sar    %eax
  401c8e:	c7 85 c8 fd ff ff 01 	movl   $0x1,-0x238(%ebp)
  401c95:	00 00 00 
  401c98:	e9 f0 03 00 00       	jmp    0x40208d
  401c9d:	89 b5 c8 fd ff ff    	mov    %esi,-0x238(%ebp)
  401ca3:	e9 e5 03 00 00       	jmp    0x40208d
  401ca8:	a1 88 e2 40 00       	mov    0x40e288,%eax
  401cad:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
  401cb3:	50                   	push   %eax
  401cb4:	e8 27 40 00 00       	call   0x405ce0
  401cb9:	59                   	pop    %ecx
  401cba:	e9 ce 03 00 00       	jmp    0x40208d
  401cbf:	83 f8 70             	cmp    $0x70,%eax
  401cc2:	0f 8f fb 01 00 00    	jg     0x401ec3
  401cc8:	0f 84 e3 01 00 00    	je     0x401eb1
  401cce:	83 f8 65             	cmp    $0x65,%eax
  401cd1:	0f 8c bc 03 00 00    	jl     0x402093
  401cd7:	83 f8 67             	cmp    $0x67,%eax
  401cda:	0f 8e 34 fe ff ff    	jle    0x401b14
  401ce0:	83 f8 69             	cmp    $0x69,%eax
  401ce3:	74 71                	je     0x401d56
  401ce5:	83 f8 6e             	cmp    $0x6e,%eax
  401ce8:	74 28                	je     0x401d12
  401cea:	83 f8 6f             	cmp    $0x6f,%eax
  401ced:	0f 85 a0 03 00 00    	jne    0x402093
  401cf3:	f6 85 f0 fd ff ff 80 	testb  $0x80,-0x210(%ebp)
  401cfa:	c7 85 e0 fd ff ff 08 	movl   $0x8,-0x220(%ebp)
  401d01:	00 00 00 
  401d04:	74 61                	je     0x401d67
  401d06:	81 8d f0 fd ff ff 00 	orl    $0x200,-0x210(%ebp)
  401d0d:	02 00 00 
  401d10:	eb 55                	jmp    0x401d67
  401d12:	8b 37                	mov    (%edi),%esi
  401d14:	83 c7 04             	add    $0x4,%edi
  401d17:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401d1d:	e8 dc f3 ff ff       	call   0x4010fe
  401d22:	85 c0                	test   %eax,%eax
  401d24:	0f 84 2f fa ff ff    	je     0x401759
  401d2a:	f6 85 f0 fd ff ff 20 	testb  $0x20,-0x210(%ebp)
  401d31:	74 0c                	je     0x401d3f
  401d33:	66 8b 85 d8 fd ff ff 	mov    -0x228(%ebp),%ax
  401d3a:	66 89 06             	mov    %ax,(%esi)
  401d3d:	eb 08                	jmp    0x401d47
  401d3f:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
  401d45:	89 06                	mov    %eax,(%esi)
  401d47:	c7 85 c0 fd ff ff 01 	movl   $0x1,-0x240(%ebp)
  401d4e:	00 00 00 
  401d51:	e9 a6 04 00 00       	jmp    0x4021fc
  401d56:	83 8d f0 fd ff ff 40 	orl    $0x40,-0x210(%ebp)
  401d5d:	c7 85 e0 fd ff ff 0a 	movl   $0xa,-0x220(%ebp)
  401d64:	00 00 00 
  401d67:	8b 8d f0 fd ff ff    	mov    -0x210(%ebp),%ecx
  401d6d:	f7 c1 00 80 00 00    	test   $0x8000,%ecx
  401d73:	0f 84 a9 01 00 00    	je     0x401f22
  401d79:	8b 07                	mov    (%edi),%eax
  401d7b:	8b 57 04             	mov    0x4(%edi),%edx
  401d7e:	83 c7 08             	add    $0x8,%edi
  401d81:	e9 d5 01 00 00       	jmp    0x401f5b
  401d86:	75 11                	jne    0x401d99
  401d88:	80 fa 67             	cmp    $0x67,%dl
  401d8b:	75 65                	jne    0x401df2
  401d8d:	c7 85 e8 fd ff ff 01 	movl   $0x1,-0x218(%ebp)
  401d94:	00 00 00 
  401d97:	eb 59                	jmp    0x401df2
  401d99:	39 85 e8 fd ff ff    	cmp    %eax,-0x218(%ebp)
  401d9f:	7e 06                	jle    0x401da7
  401da1:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
  401da7:	81 bd e8 fd ff ff a3 	cmpl   $0xa3,-0x218(%ebp)
  401dae:	00 00 00 
  401db1:	7e 3f                	jle    0x401df2
  401db3:	8b b5 e8 fd ff ff    	mov    -0x218(%ebp),%esi
  401db9:	81 c6 5d 01 00 00    	add    $0x15d,%esi
  401dbf:	56                   	push   %esi
  401dc0:	e8 58 2d 00 00       	call   0x404b1d
  401dc5:	8a 95 ef fd ff ff    	mov    -0x211(%ebp),%dl
  401dcb:	59                   	pop    %ecx
  401dcc:	89 85 bc fd ff ff    	mov    %eax,-0x244(%ebp)
  401dd2:	85 c0                	test   %eax,%eax
  401dd4:	74 10                	je     0x401de6
  401dd6:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
  401ddc:	89 b5 a0 fd ff ff    	mov    %esi,-0x260(%ebp)
  401de2:	8b d8                	mov    %eax,%ebx
  401de4:	eb 0a                	jmp    0x401df0
  401de6:	c7 85 e8 fd ff ff a3 	movl   $0xa3,-0x218(%ebp)
  401ded:	00 00 00 
  401df0:	33 f6                	xor    %esi,%esi
  401df2:	8b 07                	mov    (%edi),%eax
  401df4:	83 c7 08             	add    $0x8,%edi
  401df7:	89 85 88 fd ff ff    	mov    %eax,-0x278(%ebp)
  401dfd:	8b 47 fc             	mov    -0x4(%edi),%eax
  401e00:	89 85 8c fd ff ff    	mov    %eax,-0x274(%ebp)
  401e06:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
  401e0c:	50                   	push   %eax
  401e0d:	ff b5 90 fd ff ff    	pushl  -0x270(%ebp)
  401e13:	0f be c2             	movsbl %dl,%eax
  401e16:	ff b5 e8 fd ff ff    	pushl  -0x218(%ebp)
  401e1c:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401e22:	50                   	push   %eax
  401e23:	ff b5 a0 fd ff ff    	pushl  -0x260(%ebp)
  401e29:	8d 85 88 fd ff ff    	lea    -0x278(%ebp),%eax
  401e2f:	53                   	push   %ebx
  401e30:	50                   	push   %eax
  401e31:	ff 35 78 ec 40 00    	pushl  0x40ec78
  401e37:	e8 f9 26 00 00       	call   0x404535
  401e3c:	59                   	pop    %ecx
  401e3d:	ff d0                	call   *%eax
  401e3f:	8b bd f0 fd ff ff    	mov    -0x210(%ebp),%edi
  401e45:	83 c4 1c             	add    $0x1c,%esp
  401e48:	81 e7 80 00 00 00    	and    $0x80,%edi
  401e4e:	74 20                	je     0x401e70
  401e50:	39 b5 e8 fd ff ff    	cmp    %esi,-0x218(%ebp)
  401e56:	75 18                	jne    0x401e70
  401e58:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
  401e5e:	50                   	push   %eax
  401e5f:	53                   	push   %ebx
  401e60:	ff 35 84 ec 40 00    	pushl  0x40ec84
  401e66:	e8 ca 26 00 00       	call   0x404535
  401e6b:	59                   	pop    %ecx
  401e6c:	ff d0                	call   *%eax
  401e6e:	59                   	pop    %ecx
  401e6f:	59                   	pop    %ecx
  401e70:	80 bd ef fd ff ff 67 	cmpb   $0x67,-0x211(%ebp)
  401e77:	75 1c                	jne    0x401e95
  401e79:	3b fe                	cmp    %esi,%edi
  401e7b:	75 18                	jne    0x401e95
  401e7d:	8d 85 a4 fd ff ff    	lea    -0x25c(%ebp),%eax
  401e83:	50                   	push   %eax
  401e84:	53                   	push   %ebx
  401e85:	ff 35 80 ec 40 00    	pushl  0x40ec80
  401e8b:	e8 a5 26 00 00       	call   0x404535
  401e90:	59                   	pop    %ecx
  401e91:	ff d0                	call   *%eax
  401e93:	59                   	pop    %ecx
  401e94:	59                   	pop    %ecx
  401e95:	80 3b 2d             	cmpb   $0x2d,(%ebx)
  401e98:	75 11                	jne    0x401eab
  401e9a:	81 8d f0 fd ff ff 00 	orl    $0x100,-0x210(%ebp)
  401ea1:	01 00 00 
  401ea4:	43                   	inc    %ebx
  401ea5:	89 9d e4 fd ff ff    	mov    %ebx,-0x21c(%ebp)
  401eab:	53                   	push   %ebx
  401eac:	e9 03 fe ff ff       	jmp    0x401cb4
  401eb1:	c7 85 e8 fd ff ff 08 	movl   $0x8,-0x218(%ebp)
  401eb8:	00 00 00 
  401ebb:	89 8d b8 fd ff ff    	mov    %ecx,-0x248(%ebp)
  401ec1:	eb 24                	jmp    0x401ee7
  401ec3:	83 e8 73             	sub    $0x73,%eax
  401ec6:	0f 84 b6 fc ff ff    	je     0x401b82
  401ecc:	48                   	dec    %eax
  401ecd:	48                   	dec    %eax
  401ece:	0f 84 89 fe ff ff    	je     0x401d5d
  401ed4:	83 e8 03             	sub    $0x3,%eax
  401ed7:	0f 85 b6 01 00 00    	jne    0x402093
  401edd:	c7 85 b8 fd ff ff 27 	movl   $0x27,-0x248(%ebp)
  401ee4:	00 00 00 
  401ee7:	f6 85 f0 fd ff ff 80 	testb  $0x80,-0x210(%ebp)
  401eee:	c7 85 e0 fd ff ff 10 	movl   $0x10,-0x220(%ebp)
  401ef5:	00 00 00 
  401ef8:	0f 84 69 fe ff ff    	je     0x401d67
  401efe:	8a 85 b8 fd ff ff    	mov    -0x248(%ebp),%al
  401f04:	04 51                	add    $0x51,%al
  401f06:	c6 85 d4 fd ff ff 30 	movb   $0x30,-0x22c(%ebp)
  401f0d:	88 85 d5 fd ff ff    	mov    %al,-0x22b(%ebp)
  401f13:	c7 85 d0 fd ff ff 02 	movl   $0x2,-0x230(%ebp)
  401f1a:	00 00 00 
  401f1d:	e9 45 fe ff ff       	jmp    0x401d67
  401f22:	f7 c1 00 10 00 00    	test   $0x1000,%ecx
  401f28:	0f 85 4b fe ff ff    	jne    0x401d79
  401f2e:	83 c7 04             	add    $0x4,%edi
  401f31:	f6 c1 20             	test   $0x20,%cl
  401f34:	74 18                	je     0x401f4e
  401f36:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401f3c:	f6 c1 40             	test   $0x40,%cl
  401f3f:	74 06                	je     0x401f47
  401f41:	0f bf 47 fc          	movswl -0x4(%edi),%eax
  401f45:	eb 04                	jmp    0x401f4b
  401f47:	0f b7 47 fc          	movzwl -0x4(%edi),%eax
  401f4b:	99                   	cltd   
  401f4c:	eb 13                	jmp    0x401f61
  401f4e:	8b 47 fc             	mov    -0x4(%edi),%eax
  401f51:	f6 c1 40             	test   $0x40,%cl
  401f54:	74 03                	je     0x401f59
  401f56:	99                   	cltd   
  401f57:	eb 02                	jmp    0x401f5b
  401f59:	33 d2                	xor    %edx,%edx
  401f5b:	89 bd dc fd ff ff    	mov    %edi,-0x224(%ebp)
  401f61:	f6 c1 40             	test   $0x40,%cl
  401f64:	74 1b                	je     0x401f81
  401f66:	3b d6                	cmp    %esi,%edx
  401f68:	7f 17                	jg     0x401f81
  401f6a:	7c 04                	jl     0x401f70
  401f6c:	3b c6                	cmp    %esi,%eax
  401f6e:	73 11                	jae    0x401f81
  401f70:	f7 d8                	neg    %eax
  401f72:	83 d2 00             	adc    $0x0,%edx
  401f75:	f7 da                	neg    %edx
  401f77:	81 8d f0 fd ff ff 00 	orl    $0x100,-0x210(%ebp)
  401f7e:	01 00 00 
  401f81:	f7 85 f0 fd ff ff 00 	testl  $0x9000,-0x210(%ebp)
  401f88:	90 00 00 
  401f8b:	8b da                	mov    %edx,%ebx
  401f8d:	8b f8                	mov    %eax,%edi
  401f8f:	75 02                	jne    0x401f93
  401f91:	33 db                	xor    %ebx,%ebx
  401f93:	83 bd e8 fd ff ff 00 	cmpl   $0x0,-0x218(%ebp)
  401f9a:	7d 0c                	jge    0x401fa8
  401f9c:	c7 85 e8 fd ff ff 01 	movl   $0x1,-0x218(%ebp)
  401fa3:	00 00 00 
  401fa6:	eb 1a                	jmp    0x401fc2
  401fa8:	83 a5 f0 fd ff ff f7 	andl   $0xfffffff7,-0x210(%ebp)
  401faf:	b8 00 02 00 00       	mov    $0x200,%eax
  401fb4:	39 85 e8 fd ff ff    	cmp    %eax,-0x218(%ebp)
  401fba:	7e 06                	jle    0x401fc2
  401fbc:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
  401fc2:	8b c7                	mov    %edi,%eax
  401fc4:	0b c3                	or     %ebx,%eax
  401fc6:	75 06                	jne    0x401fce
  401fc8:	21 85 d0 fd ff ff    	and    %eax,-0x230(%ebp)
  401fce:	8d 75 f3             	lea    -0xd(%ebp),%esi
  401fd1:	8b 85 e8 fd ff ff    	mov    -0x218(%ebp),%eax
  401fd7:	ff 8d e8 fd ff ff    	decl   -0x218(%ebp)
  401fdd:	85 c0                	test   %eax,%eax
  401fdf:	7f 06                	jg     0x401fe7
  401fe1:	8b c7                	mov    %edi,%eax
  401fe3:	0b c3                	or     %ebx,%eax
  401fe5:	74 2d                	je     0x402014
  401fe7:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
  401fed:	99                   	cltd   
  401fee:	52                   	push   %edx
  401fef:	50                   	push   %eax
  401ff0:	53                   	push   %ebx
  401ff1:	57                   	push   %edi
  401ff2:	e8 59 3f 00 00       	call   0x405f50
  401ff7:	83 c1 30             	add    $0x30,%ecx
  401ffa:	83 f9 39             	cmp    $0x39,%ecx
  401ffd:	89 9d a0 fd ff ff    	mov    %ebx,-0x260(%ebp)
  402003:	8b f8                	mov    %eax,%edi
  402005:	8b da                	mov    %edx,%ebx
  402007:	7e 06                	jle    0x40200f
  402009:	03 8d b8 fd ff ff    	add    -0x248(%ebp),%ecx
  40200f:	88 0e                	mov    %cl,(%esi)
  402011:	4e                   	dec    %esi
  402012:	eb bd                	jmp    0x401fd1
  402014:	8d 45 f3             	lea    -0xd(%ebp),%eax
  402017:	2b c6                	sub    %esi,%eax
  402019:	46                   	inc    %esi
  40201a:	f7 85 f0 fd ff ff 00 	testl  $0x200,-0x210(%ebp)
  402021:	02 00 00 
  402024:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
  40202a:	89 b5 e4 fd ff ff    	mov    %esi,-0x21c(%ebp)
  402030:	74 61                	je     0x402093
  402032:	85 c0                	test   %eax,%eax
  402034:	74 07                	je     0x40203d
  402036:	8b ce                	mov    %esi,%ecx
  402038:	80 39 30             	cmpb   $0x30,(%ecx)
  40203b:	74 56                	je     0x402093
  40203d:	ff 8d e4 fd ff ff    	decl   -0x21c(%ebp)
  402043:	8b 8d e4 fd ff ff    	mov    -0x21c(%ebp),%ecx
  402049:	c6 01 30             	movb   $0x30,(%ecx)
  40204c:	40                   	inc    %eax
  40204d:	eb 3e                	jmp    0x40208d
  40204f:	49                   	dec    %ecx
  402050:	66 39 30             	cmp    %si,(%eax)
  402053:	74 06                	je     0x40205b
  402055:	40                   	inc    %eax
  402056:	40                   	inc    %eax
  402057:	3b ce                	cmp    %esi,%ecx
  402059:	75 f4                	jne    0x40204f
  40205b:	2b 85 e4 fd ff ff    	sub    -0x21c(%ebp),%eax
  402061:	d1 f8                	sar    %eax
  402063:	eb 28                	jmp    0x40208d
  402065:	3b fe                	cmp    %esi,%edi
  402067:	75 0b                	jne    0x402074
  402069:	a1 88 e2 40 00       	mov    0x40e288,%eax
  40206e:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
  402074:	8b 85 e4 fd ff ff    	mov    -0x21c(%ebp),%eax
  40207a:	eb 07                	jmp    0x402083
  40207c:	49                   	dec    %ecx
  40207d:	80 38 00             	cmpb   $0x0,(%eax)
  402080:	74 05                	je     0x402087
  402082:	40                   	inc    %eax
  402083:	3b ce                	cmp    %esi,%ecx
  402085:	75 f5                	jne    0x40207c
  402087:	2b 85 e4 fd ff ff    	sub    -0x21c(%ebp),%eax
  40208d:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
  402093:	83 bd c0 fd ff ff 00 	cmpl   $0x0,-0x240(%ebp)
  40209a:	0f 85 5c 01 00 00    	jne    0x4021fc
  4020a0:	8b 85 f0 fd ff ff    	mov    -0x210(%ebp),%eax
  4020a6:	a8 40                	test   $0x40,%al
  4020a8:	74 32                	je     0x4020dc
  4020aa:	a9 00 01 00 00       	test   $0x100,%eax
  4020af:	74 09                	je     0x4020ba
  4020b1:	c6 85 d4 fd ff ff 2d 	movb   $0x2d,-0x22c(%ebp)
  4020b8:	eb 18                	jmp    0x4020d2
  4020ba:	a8 01                	test   $0x1,%al
  4020bc:	74 09                	je     0x4020c7
  4020be:	c6 85 d4 fd ff ff 2b 	movb   $0x2b,-0x22c(%ebp)
  4020c5:	eb 0b                	jmp    0x4020d2
  4020c7:	a8 02                	test   $0x2,%al
  4020c9:	74 11                	je     0x4020dc
  4020cb:	c6 85 d4 fd ff ff 20 	movb   $0x20,-0x22c(%ebp)
  4020d2:	c7 85 d0 fd ff ff 01 	movl   $0x1,-0x230(%ebp)
  4020d9:	00 00 00 
  4020dc:	8b 9d cc fd ff ff    	mov    -0x234(%ebp),%ebx
  4020e2:	2b 9d e0 fd ff ff    	sub    -0x220(%ebp),%ebx
  4020e8:	2b 9d d0 fd ff ff    	sub    -0x230(%ebp),%ebx
  4020ee:	f6 85 f0 fd ff ff 0c 	testb  $0xc,-0x210(%ebp)
  4020f5:	75 17                	jne    0x40210e
  4020f7:	ff b5 b4 fd ff ff    	pushl  -0x24c(%ebp)
  4020fd:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
  402103:	53                   	push   %ebx
  402104:	6a 20                	push   $0x20
  402106:	e8 70 f5 ff ff       	call   0x40167b
  40210b:	83 c4 0c             	add    $0xc,%esp
  40210e:	ff b5 d0 fd ff ff    	pushl  -0x230(%ebp)
  402114:	8b bd b4 fd ff ff    	mov    -0x24c(%ebp),%edi
  40211a:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
  402120:	8d 8d d4 fd ff ff    	lea    -0x22c(%ebp),%ecx
  402126:	e8 76 f5 ff ff       	call   0x4016a1
  40212b:	f6 85 f0 fd ff ff 08 	testb  $0x8,-0x210(%ebp)
  402132:	59                   	pop    %ecx
  402133:	74 1b                	je     0x402150
  402135:	f6 85 f0 fd ff ff 04 	testb  $0x4,-0x210(%ebp)
  40213c:	75 12                	jne    0x402150
  40213e:	57                   	push   %edi
  40213f:	53                   	push   %ebx
  402140:	6a 30                	push   $0x30
  402142:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
  402148:	e8 2e f5 ff ff       	call   0x40167b
  40214d:	83 c4 0c             	add    $0xc,%esp
  402150:	83 bd c8 fd ff ff 00 	cmpl   $0x0,-0x238(%ebp)
  402157:	8b 85 e0 fd ff ff    	mov    -0x220(%ebp),%eax
  40215d:	74 66                	je     0x4021c5
  40215f:	85 c0                	test   %eax,%eax
  402161:	7e 62                	jle    0x4021c5
  402163:	8b b5 e4 fd ff ff    	mov    -0x21c(%ebp),%esi
  402169:	89 85 a0 fd ff ff    	mov    %eax,-0x260(%ebp)
  40216f:	0f b7 06             	movzwl (%esi),%eax
  402172:	ff 8d a0 fd ff ff    	decl   -0x260(%ebp)
  402178:	50                   	push   %eax
  402179:	6a 06                	push   $0x6
  40217b:	8d 45 f4             	lea    -0xc(%ebp),%eax
  40217e:	50                   	push   %eax
  40217f:	8d 85 98 fd ff ff    	lea    -0x268(%ebp),%eax
  402185:	46                   	inc    %esi
  402186:	50                   	push   %eax
  402187:	46                   	inc    %esi
  402188:	e8 4a 3d 00 00       	call   0x405ed7
  40218d:	83 c4 10             	add    $0x10,%esp
  402190:	85 c0                	test   %eax,%eax
  402192:	75 28                	jne    0x4021bc
  402194:	39 85 98 fd ff ff    	cmp    %eax,-0x268(%ebp)
  40219a:	74 20                	je     0x4021bc
  40219c:	ff b5 98 fd ff ff    	pushl  -0x268(%ebp)
  4021a2:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
  4021a8:	8d 4d f4             	lea    -0xc(%ebp),%ecx
  4021ab:	e8 f1 f4 ff ff       	call   0x4016a1
  4021b0:	83 bd a0 fd ff ff 00 	cmpl   $0x0,-0x260(%ebp)
  4021b7:	59                   	pop    %ecx
  4021b8:	75 b5                	jne    0x40216f
  4021ba:	eb 1c                	jmp    0x4021d8
  4021bc:	83 8d d8 fd ff ff ff 	orl    $0xffffffff,-0x228(%ebp)
  4021c3:	eb 13                	jmp    0x4021d8
  4021c5:	8b 8d e4 fd ff ff    	mov    -0x21c(%ebp),%ecx
  4021cb:	50                   	push   %eax
  4021cc:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
  4021d2:	e8 ca f4 ff ff       	call   0x4016a1
  4021d7:	59                   	pop    %ecx
  4021d8:	83 bd d8 fd ff ff 00 	cmpl   $0x0,-0x228(%ebp)
  4021df:	7c 1b                	jl     0x4021fc
  4021e1:	f6 85 f0 fd ff ff 04 	testb  $0x4,-0x210(%ebp)
  4021e8:	74 12                	je     0x4021fc
  4021ea:	57                   	push   %edi
  4021eb:	53                   	push   %ebx
  4021ec:	6a 20                	push   $0x20
  4021ee:	8d 85 d8 fd ff ff    	lea    -0x228(%ebp),%eax
  4021f4:	e8 82 f4 ff ff       	call   0x40167b
  4021f9:	83 c4 0c             	add    $0xc,%esp
  4021fc:	83 bd bc fd ff ff 00 	cmpl   $0x0,-0x244(%ebp)
  402203:	74 13                	je     0x402218
  402205:	ff b5 bc fd ff ff    	pushl  -0x244(%ebp)
  40220b:	e8 3e 2a 00 00       	call   0x404c4e
  402210:	83 a5 bc fd ff ff 00 	andl   $0x0,-0x244(%ebp)
  402217:	59                   	pop    %ecx
  402218:	8b 9d c4 fd ff ff    	mov    -0x23c(%ebp),%ebx
  40221e:	8a 03                	mov    (%ebx),%al
  402220:	88 85 ef fd ff ff    	mov    %al,-0x211(%ebp)
  402226:	84 c0                	test   %al,%al
  402228:	74 13                	je     0x40223d
  40222a:	8b 8d 94 fd ff ff    	mov    -0x26c(%ebp),%ecx
  402230:	8b bd dc fd ff ff    	mov    -0x224(%ebp),%edi
  402236:	8a d0                	mov    %al,%dl
  402238:	e9 e1 f5 ff ff       	jmp    0x40181e
  40223d:	80 bd b0 fd ff ff 00 	cmpb   $0x0,-0x250(%ebp)
  402244:	74 0a                	je     0x402250
  402246:	8b 85 ac fd ff ff    	mov    -0x254(%ebp),%eax
  40224c:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  402250:	8b 85 d8 fd ff ff    	mov    -0x228(%ebp),%eax
  402256:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  402259:	5f                   	pop    %edi
  40225a:	5e                   	pop    %esi
  40225b:	33 cd                	xor    %ebp,%ecx
  40225d:	5b                   	pop    %ebx
  40225e:	e8 dc 3c 00 00       	call   0x405f3f
  402263:	c9                   	leave  
  402264:	c3                   	ret    
  402265:	90                   	nop    
  402266:	71 1a                	jno    0x402282
  402268:	40                   	inc    %eax
  402269:	00 72 18             	add    %dh,0x18(%edx)
  40226c:	40                   	inc    %eax
  40226d:	00 a2 18 40 00 00    	add    %ah,0x4018(%edx)
  402273:	19 40 00             	sbb    %eax,0x0(%eax)
  402276:	4c                   	dec    %esp
  402277:	19 40 00             	sbb    %eax,0x0(%eax)
  40227a:	57                   	push   %edi
  40227b:	19 40 00             	sbb    %eax,0x0(%eax)
  40227e:	9d                   	popf   
  40227f:	19 40 00             	sbb    %eax,0x0(%eax)
  402282:	cb                   	lret   
  402283:	1a 40 00             	sbb    0x0(%eax),%al
  402286:	8b ff                	mov    %edi,%edi
  402288:	55                   	push   %ebp
  402289:	8b ec                	mov    %esp,%ebp
  40228b:	8b 45 08             	mov    0x8(%ebp),%eax
  40228e:	a3 1c f0 40 00       	mov    %eax,0x40f01c
  402293:	5d                   	pop    %ebp
  402294:	c3                   	ret    
  402295:	8b ff                	mov    %edi,%edi
  402297:	55                   	push   %ebp
  402298:	8b ec                	mov    %esp,%ebp
  40229a:	81 ec 28 03 00 00    	sub    $0x328,%esp
  4022a0:	a1 00 e4 40 00       	mov    0x40e400,%eax
  4022a5:	33 c5                	xor    %ebp,%eax
  4022a7:	89 45 fc             	mov    %eax,-0x4(%ebp)
  4022aa:	83 a5 d8 fc ff ff 00 	andl   $0x0,-0x328(%ebp)
  4022b1:	53                   	push   %ebx
  4022b2:	6a 4c                	push   $0x4c
  4022b4:	8d 85 dc fc ff ff    	lea    -0x324(%ebp),%eax
  4022ba:	6a 00                	push   $0x0
  4022bc:	50                   	push   %eax
  4022bd:	e8 2e 3d 00 00       	call   0x405ff0
  4022c2:	8d 85 d8 fc ff ff    	lea    -0x328(%ebp),%eax
  4022c8:	89 85 28 fd ff ff    	mov    %eax,-0x2d8(%ebp)
  4022ce:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
  4022d4:	83 c4 0c             	add    $0xc,%esp
  4022d7:	89 85 2c fd ff ff    	mov    %eax,-0x2d4(%ebp)
  4022dd:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
  4022e3:	89 8d dc fd ff ff    	mov    %ecx,-0x224(%ebp)
  4022e9:	89 95 d8 fd ff ff    	mov    %edx,-0x228(%ebp)
  4022ef:	89 9d d4 fd ff ff    	mov    %ebx,-0x22c(%ebp)
  4022f5:	89 b5 d0 fd ff ff    	mov    %esi,-0x230(%ebp)
  4022fb:	89 bd cc fd ff ff    	mov    %edi,-0x234(%ebp)
  402301:	66                   	data16
  402302:	8c 95 f8 fd ff ff    	mov    %ss,-0x208(%ebp)
  402308:	66                   	data16
  402309:	8c 8d ec fd ff ff    	mov    %cs,-0x214(%ebp)
  40230f:	66                   	data16
  402310:	8c 9d c8 fd ff ff    	mov    %ds,-0x238(%ebp)
  402316:	66                   	data16
  402317:	8c 85 c4 fd ff ff    	mov    %es,-0x23c(%ebp)
  40231d:	66                   	data16
  40231e:	8c a5 c0 fd ff ff    	mov    %fs,-0x240(%ebp)
  402324:	66                   	data16
  402325:	8c ad bc fd ff ff    	mov    %gs,-0x244(%ebp)
  40232b:	9c                   	pushf  
  40232c:	8f 85 f0 fd ff ff    	popl   -0x210(%ebp)
  402332:	8b 45 04             	mov    0x4(%ebp),%eax
  402335:	8d 4d 04             	lea    0x4(%ebp),%ecx
  402338:	c7 85 30 fd ff ff 01 	movl   $0x10001,-0x2d0(%ebp)
  40233f:	00 01 00 
  402342:	89 85 e8 fd ff ff    	mov    %eax,-0x218(%ebp)
  402348:	89 8d f4 fd ff ff    	mov    %ecx,-0x20c(%ebp)
  40234e:	8b 49 fc             	mov    -0x4(%ecx),%ecx
  402351:	89 8d e4 fd ff ff    	mov    %ecx,-0x21c(%ebp)
  402357:	c7 85 d8 fc ff ff 17 	movl   $0xc0000417,-0x328(%ebp)
  40235e:	04 00 c0 
  402361:	c7 85 dc fc ff ff 01 	movl   $0x1,-0x324(%ebp)
  402368:	00 00 00 
  40236b:	89 85 e4 fc ff ff    	mov    %eax,-0x31c(%ebp)
  402371:	ff 15 1c c0 40 00    	call   *0x40c01c
  402377:	6a 00                	push   $0x0
  402379:	8b d8                	mov    %eax,%ebx
  40237b:	ff 15 18 c0 40 00    	call   *0x40c018
  402381:	8d 85 28 fd ff ff    	lea    -0x2d8(%ebp),%eax
  402387:	50                   	push   %eax
  402388:	ff 15 14 c0 40 00    	call   *0x40c014
  40238e:	85 c0                	test   %eax,%eax
  402390:	75 0c                	jne    0x40239e
  402392:	85 db                	test   %ebx,%ebx
  402394:	75 08                	jne    0x40239e
  402396:	6a 02                	push   $0x2
  402398:	e8 48 3c 00 00       	call   0x405fe5
  40239d:	59                   	pop    %ecx
  40239e:	68 17 04 00 c0       	push   $0xc0000417
  4023a3:	ff 15 10 c0 40 00    	call   *0x40c010
  4023a9:	50                   	push   %eax
  4023aa:	ff 15 0c c0 40 00    	call   *0x40c00c
  4023b0:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  4023b3:	33 cd                	xor    %ebp,%ecx
  4023b5:	5b                   	pop    %ebx
  4023b6:	e8 84 3b 00 00       	call   0x405f3f
  4023bb:	c9                   	leave  
  4023bc:	c3                   	ret    
  4023bd:	8b ff                	mov    %edi,%edi
  4023bf:	55                   	push   %ebp
  4023c0:	8b ec                	mov    %esp,%ebp
  4023c2:	ff 35 1c f0 40 00    	pushl  0x40f01c
  4023c8:	e8 68 21 00 00       	call   0x404535
  4023cd:	59                   	pop    %ecx
  4023ce:	85 c0                	test   %eax,%eax
  4023d0:	74 03                	je     0x4023d5
  4023d2:	5d                   	pop    %ebp
  4023d3:	ff e0                	jmp    *%eax
  4023d5:	6a 02                	push   $0x2
  4023d7:	e8 09 3c 00 00       	call   0x405fe5
  4023dc:	59                   	pop    %ecx
  4023dd:	5d                   	pop    %ebp
  4023de:	e9 b2 fe ff ff       	jmp    0x402295
  4023e3:	8b ff                	mov    %edi,%edi
  4023e5:	55                   	push   %ebp
  4023e6:	8b ec                	mov    %esp,%ebp
  4023e8:	8b 45 08             	mov    0x8(%ebp),%eax
  4023eb:	33 c9                	xor    %ecx,%ecx
  4023ed:	3b 04 cd 90 e2 40 00 	cmp    0x40e290(,%ecx,8),%eax
  4023f4:	74 13                	je     0x402409
  4023f6:	41                   	inc    %ecx
  4023f7:	83 f9 2d             	cmp    $0x2d,%ecx
  4023fa:	72 f1                	jb     0x4023ed
  4023fc:	8d 48 ed             	lea    -0x13(%eax),%ecx
  4023ff:	83 f9 11             	cmp    $0x11,%ecx
  402402:	77 0e                	ja     0x402412
  402404:	6a 0d                	push   $0xd
  402406:	58                   	pop    %eax
  402407:	5d                   	pop    %ebp
  402408:	c3                   	ret    
  402409:	8b 04 cd 94 e2 40 00 	mov    0x40e294(,%ecx,8),%eax
  402410:	5d                   	pop    %ebp
  402411:	c3                   	ret    
  402412:	05 44 ff ff ff       	add    $0xffffff44,%eax
  402417:	6a 0e                	push   $0xe
  402419:	59                   	pop    %ecx
  40241a:	3b c8                	cmp    %eax,%ecx
  40241c:	1b c0                	sbb    %eax,%eax
  40241e:	23 c1                	and    %ecx,%eax
  402420:	83 c0 08             	add    $0x8,%eax
  402423:	5d                   	pop    %ebp
  402424:	c3                   	ret    
  402425:	e8 de 22 00 00       	call   0x404708
  40242a:	85 c0                	test   %eax,%eax
  40242c:	75 06                	jne    0x402434
  40242e:	b8 f8 e3 40 00       	mov    $0x40e3f8,%eax
  402433:	c3                   	ret    
  402434:	83 c0 08             	add    $0x8,%eax
  402437:	c3                   	ret    
  402438:	e8 cb 22 00 00       	call   0x404708
  40243d:	85 c0                	test   %eax,%eax
  40243f:	75 06                	jne    0x402447
  402441:	b8 fc e3 40 00       	mov    $0x40e3fc,%eax
  402446:	c3                   	ret    
  402447:	83 c0 0c             	add    $0xc,%eax
  40244a:	c3                   	ret    
  40244b:	8b ff                	mov    %edi,%edi
  40244d:	55                   	push   %ebp
  40244e:	8b ec                	mov    %esp,%ebp
  402450:	56                   	push   %esi
  402451:	e8 e2 ff ff ff       	call   0x402438
  402456:	8b 4d 08             	mov    0x8(%ebp),%ecx
  402459:	51                   	push   %ecx
  40245a:	89 08                	mov    %ecx,(%eax)
  40245c:	e8 82 ff ff ff       	call   0x4023e3
  402461:	59                   	pop    %ecx
  402462:	8b f0                	mov    %eax,%esi
  402464:	e8 bc ff ff ff       	call   0x402425
  402469:	89 30                	mov    %esi,(%eax)
  40246b:	5e                   	pop    %esi
  40246c:	5d                   	pop    %ebp
  40246d:	c3                   	ret    
  40246e:	cc                   	int3   
  40246f:	cc                   	int3   
  402470:	68 d0 24 40 00       	push   $0x4024d0
  402475:	64 ff 35 00 00 00 00 	pushl  %fs:0x0
  40247c:	8b 44 24 10          	mov    0x10(%esp),%eax
  402480:	89 6c 24 10          	mov    %ebp,0x10(%esp)
  402484:	8d 6c 24 10          	lea    0x10(%esp),%ebp
  402488:	2b e0                	sub    %eax,%esp
  40248a:	53                   	push   %ebx
  40248b:	56                   	push   %esi
  40248c:	57                   	push   %edi
  40248d:	a1 00 e4 40 00       	mov    0x40e400,%eax
  402492:	31 45 fc             	xor    %eax,-0x4(%ebp)
  402495:	33 c5                	xor    %ebp,%eax
  402497:	50                   	push   %eax
  402498:	89 65 e8             	mov    %esp,-0x18(%ebp)
  40249b:	ff 75 f8             	pushl  -0x8(%ebp)
  40249e:	8b 45 fc             	mov    -0x4(%ebp),%eax
  4024a1:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  4024a8:	89 45 f8             	mov    %eax,-0x8(%ebp)
  4024ab:	8d 45 f0             	lea    -0x10(%ebp),%eax
  4024ae:	64 a3 00 00 00 00    	mov    %eax,%fs:0x0
  4024b4:	c3                   	ret    
  4024b5:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  4024b8:	64 89 0d 00 00 00 00 	mov    %ecx,%fs:0x0
  4024bf:	59                   	pop    %ecx
  4024c0:	5f                   	pop    %edi
  4024c1:	5f                   	pop    %edi
  4024c2:	5e                   	pop    %esi
  4024c3:	5b                   	pop    %ebx
  4024c4:	8b e5                	mov    %ebp,%esp
  4024c6:	5d                   	pop    %ebp
  4024c7:	51                   	push   %ecx
  4024c8:	c3                   	ret    
  4024c9:	cc                   	int3   
  4024ca:	cc                   	int3   
  4024cb:	cc                   	int3   
  4024cc:	cc                   	int3   
  4024cd:	cc                   	int3   
  4024ce:	cc                   	int3   
  4024cf:	cc                   	int3   
  4024d0:	8b ff                	mov    %edi,%edi
  4024d2:	55                   	push   %ebp
  4024d3:	8b ec                	mov    %esp,%ebp
  4024d5:	83 ec 18             	sub    $0x18,%esp
  4024d8:	53                   	push   %ebx
  4024d9:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  4024dc:	56                   	push   %esi
  4024dd:	8b 73 08             	mov    0x8(%ebx),%esi
  4024e0:	33 35 00 e4 40 00    	xor    0x40e400,%esi
  4024e6:	57                   	push   %edi
  4024e7:	8b 06                	mov    (%esi),%eax
  4024e9:	c6 45 ff 00          	movb   $0x0,-0x1(%ebp)
  4024ed:	c7 45 f4 01 00 00 00 	movl   $0x1,-0xc(%ebp)
  4024f4:	8d 7b 10             	lea    0x10(%ebx),%edi
  4024f7:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4024fa:	74 0d                	je     0x402509
  4024fc:	8b 4e 04             	mov    0x4(%esi),%ecx
  4024ff:	03 cf                	add    %edi,%ecx
  402501:	33 0c 38             	xor    (%eax,%edi,1),%ecx
  402504:	e8 36 3a 00 00       	call   0x405f3f
  402509:	8b 4e 0c             	mov    0xc(%esi),%ecx
  40250c:	8b 46 08             	mov    0x8(%esi),%eax
  40250f:	03 cf                	add    %edi,%ecx
  402511:	33 0c 38             	xor    (%eax,%edi,1),%ecx
  402514:	e8 26 3a 00 00       	call   0x405f3f
  402519:	8b 45 08             	mov    0x8(%ebp),%eax
  40251c:	f6 40 04 66          	testb  $0x66,0x4(%eax)
  402520:	0f 85 16 01 00 00    	jne    0x40263c
  402526:	8b 4d 10             	mov    0x10(%ebp),%ecx
  402529:	8d 55 e8             	lea    -0x18(%ebp),%edx
  40252c:	89 53 fc             	mov    %edx,-0x4(%ebx)
  40252f:	8b 5b 0c             	mov    0xc(%ebx),%ebx
  402532:	89 45 e8             	mov    %eax,-0x18(%ebp)
  402535:	89 4d ec             	mov    %ecx,-0x14(%ebp)
  402538:	83 fb fe             	cmp    $0xfffffffe,%ebx
  40253b:	74 5f                	je     0x40259c
  40253d:	8d 49 00             	lea    0x0(%ecx),%ecx
  402540:	8d 04 5b             	lea    (%ebx,%ebx,2),%eax
  402543:	8b 4c 86 14          	mov    0x14(%esi,%eax,4),%ecx
  402547:	8d 44 86 10          	lea    0x10(%esi,%eax,4),%eax
  40254b:	89 45 f0             	mov    %eax,-0x10(%ebp)
  40254e:	8b 00                	mov    (%eax),%eax
  402550:	89 45 f8             	mov    %eax,-0x8(%ebp)
  402553:	85 c9                	test   %ecx,%ecx
  402555:	74 14                	je     0x40256b
  402557:	8b d7                	mov    %edi,%edx
  402559:	e8 00 3c 00 00       	call   0x40615e
  40255e:	c6 45 ff 01          	movb   $0x1,-0x1(%ebp)
  402562:	85 c0                	test   %eax,%eax
  402564:	7c 40                	jl     0x4025a6
  402566:	7f 47                	jg     0x4025af
  402568:	8b 45 f8             	mov    -0x8(%ebp),%eax
  40256b:	8b d8                	mov    %eax,%ebx
  40256d:	83 f8 fe             	cmp    $0xfffffffe,%eax
  402570:	75 ce                	jne    0x402540
  402572:	80 7d ff 00          	cmpb   $0x0,-0x1(%ebp)
  402576:	74 24                	je     0x40259c
  402578:	8b 06                	mov    (%esi),%eax
  40257a:	83 f8 fe             	cmp    $0xfffffffe,%eax
  40257d:	74 0d                	je     0x40258c
  40257f:	8b 4e 04             	mov    0x4(%esi),%ecx
  402582:	03 cf                	add    %edi,%ecx
  402584:	33 0c 38             	xor    (%eax,%edi,1),%ecx
  402587:	e8 b3 39 00 00       	call   0x405f3f
  40258c:	8b 4e 0c             	mov    0xc(%esi),%ecx
  40258f:	8b 56 08             	mov    0x8(%esi),%edx
  402592:	03 cf                	add    %edi,%ecx
  402594:	33 0c 3a             	xor    (%edx,%edi,1),%ecx
  402597:	e8 a3 39 00 00       	call   0x405f3f
  40259c:	8b 45 f4             	mov    -0xc(%ebp),%eax
  40259f:	5f                   	pop    %edi
  4025a0:	5e                   	pop    %esi
  4025a1:	5b                   	pop    %ebx
  4025a2:	8b e5                	mov    %ebp,%esp
  4025a4:	5d                   	pop    %ebp
  4025a5:	c3                   	ret    
  4025a6:	c7 45 f4 00 00 00 00 	movl   $0x0,-0xc(%ebp)
  4025ad:	eb c9                	jmp    0x402578
  4025af:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4025b2:	81 39 63 73 6d e0    	cmpl   $0xe06d7363,(%ecx)
  4025b8:	75 29                	jne    0x4025e3
  4025ba:	83 3d b8 fb 40 00 00 	cmpl   $0x0,0x40fbb8
  4025c1:	74 20                	je     0x4025e3
  4025c3:	68 b8 fb 40 00       	push   $0x40fbb8
  4025c8:	e8 83 3c 00 00       	call   0x406250
  4025cd:	83 c4 04             	add    $0x4,%esp
  4025d0:	85 c0                	test   %eax,%eax
  4025d2:	74 0f                	je     0x4025e3
  4025d4:	8b 55 08             	mov    0x8(%ebp),%edx
  4025d7:	6a 01                	push   $0x1
  4025d9:	52                   	push   %edx
  4025da:	ff 15 b8 fb 40 00    	call   *0x40fbb8
  4025e0:	83 c4 08             	add    $0x8,%esp
  4025e3:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  4025e6:	e8 a3 3b 00 00       	call   0x40618e
  4025eb:	8b 45 0c             	mov    0xc(%ebp),%eax
  4025ee:	39 58 0c             	cmp    %ebx,0xc(%eax)
  4025f1:	74 12                	je     0x402605
  4025f3:	68 00 e4 40 00       	push   $0x40e400
  4025f8:	57                   	push   %edi
  4025f9:	8b d3                	mov    %ebx,%edx
  4025fb:	8b c8                	mov    %eax,%ecx
  4025fd:	e8 a6 3b 00 00       	call   0x4061a8
  402602:	8b 45 0c             	mov    0xc(%ebp),%eax
  402605:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  402608:	89 48 0c             	mov    %ecx,0xc(%eax)
  40260b:	8b 06                	mov    (%esi),%eax
  40260d:	83 f8 fe             	cmp    $0xfffffffe,%eax
  402610:	74 0d                	je     0x40261f
  402612:	8b 4e 04             	mov    0x4(%esi),%ecx
  402615:	03 cf                	add    %edi,%ecx
  402617:	33 0c 38             	xor    (%eax,%edi,1),%ecx
  40261a:	e8 20 39 00 00       	call   0x405f3f
  40261f:	8b 4e 0c             	mov    0xc(%esi),%ecx
  402622:	8b 56 08             	mov    0x8(%esi),%edx
  402625:	03 cf                	add    %edi,%ecx
  402627:	33 0c 3a             	xor    (%edx,%edi,1),%ecx
  40262a:	e8 10 39 00 00       	call   0x405f3f
  40262f:	8b 45 f0             	mov    -0x10(%ebp),%eax
  402632:	8b 48 08             	mov    0x8(%eax),%ecx
  402635:	8b d7                	mov    %edi,%edx
  402637:	e8 39 3b 00 00       	call   0x406175
  40263c:	ba fe ff ff ff       	mov    $0xfffffffe,%edx
  402641:	39 53 0c             	cmp    %edx,0xc(%ebx)
  402644:	0f 84 52 ff ff ff    	je     0x40259c
  40264a:	68 00 e4 40 00       	push   $0x40e400
  40264f:	57                   	push   %edi
  402650:	8b cb                	mov    %ebx,%ecx
  402652:	e8 51 3b 00 00       	call   0x4061a8
  402657:	e9 1c ff ff ff       	jmp    0x402578
  40265c:	8b ff                	mov    %edi,%edi
  40265e:	55                   	push   %ebp
  40265f:	8b ec                	mov    %esp,%ebp
  402661:	8b 06                	mov    (%esi),%eax
  402663:	39 45 08             	cmp    %eax,0x8(%ebp)
  402666:	75 46                	jne    0x4026ae
  402668:	8b 0f                	mov    (%edi),%ecx
  40266a:	6a 02                	push   $0x2
  40266c:	50                   	push   %eax
  40266d:	3b 4d 0c             	cmp    0xc(%ebp),%ecx
  402670:	75 2b                	jne    0x40269d
  402672:	e8 eb 24 00 00       	call   0x404b62
  402677:	59                   	pop    %ecx
  402678:	59                   	pop    %ecx
  402679:	89 07                	mov    %eax,(%edi)
  40267b:	85 c0                	test   %eax,%eax
  40267d:	75 04                	jne    0x402683
  40267f:	33 c0                	xor    %eax,%eax
  402681:	5d                   	pop    %ebp
  402682:	c3                   	ret    
  402683:	8b 45 10             	mov    0x10(%ebp),%eax
  402686:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
  40268c:	ff 36                	pushl  (%esi)
  40268e:	ff 75 0c             	pushl  0xc(%ebp)
  402691:	ff 37                	pushl  (%edi)
  402693:	e8 78 3c 00 00       	call   0x406310
  402698:	83 c4 0c             	add    $0xc,%esp
  40269b:	eb 0f                	jmp    0x4026ac
  40269d:	51                   	push   %ecx
  40269e:	e8 59 25 00 00       	call   0x404bfc
  4026a3:	83 c4 0c             	add    $0xc,%esp
  4026a6:	85 c0                	test   %eax,%eax
  4026a8:	74 d5                	je     0x40267f
  4026aa:	89 07                	mov    %eax,(%edi)
  4026ac:	d1 26                	shll   (%esi)
  4026ae:	33 c0                	xor    %eax,%eax
  4026b0:	40                   	inc    %eax
  4026b1:	5d                   	pop    %ebp
  4026b2:	c3                   	ret    
  4026b3:	8b ff                	mov    %edi,%edi
  4026b5:	55                   	push   %ebp
  4026b6:	8b ec                	mov    %esp,%ebp
  4026b8:	0f b6 45 08          	movzbl 0x8(%ebp),%eax
  4026bc:	50                   	push   %eax
  4026bd:	e8 04 40 00 00       	call   0x4066c6
  4026c2:	85 c0                	test   %eax,%eax
  4026c4:	0f be 45 08          	movsbl 0x8(%ebp),%eax
  4026c8:	59                   	pop    %ecx
  4026c9:	75 06                	jne    0x4026d1
  4026cb:	83 e0 df             	and    $0xffffffdf,%eax
  4026ce:	83 e8 07             	sub    $0x7,%eax
  4026d1:	5d                   	pop    %ebp
  4026d2:	c3                   	ret    
  4026d3:	ff 4a 04             	decl   0x4(%edx)
  4026d6:	78 09                	js     0x4026e1
  4026d8:	8b 0a                	mov    (%edx),%ecx
  4026da:	0f b6 01             	movzbl (%ecx),%eax
  4026dd:	41                   	inc    %ecx
  4026de:	89 0a                	mov    %ecx,(%edx)
  4026e0:	c3                   	ret    
  4026e1:	52                   	push   %edx
  4026e2:	e8 12 41 00 00       	call   0x4067f9
  4026e7:	59                   	pop    %ecx
  4026e8:	c3                   	ret    
  4026e9:	8b ff                	mov    %edi,%edi
  4026eb:	55                   	push   %ebp
  4026ec:	8b ec                	mov    %esp,%ebp
  4026ee:	83 7d 08 ff          	cmpl   $0xffffffff,0x8(%ebp)
  4026f2:	74 06                	je     0x4026fa
  4026f4:	5d                   	pop    %ebp
  4026f5:	e9 2a 42 00 00       	jmp    0x406924
  4026fa:	5d                   	pop    %ebp
  4026fb:	c3                   	ret    
  4026fc:	8b ff                	mov    %edi,%edi
  4026fe:	55                   	push   %ebp
  4026ff:	8b ec                	mov    %esp,%ebp
  402701:	53                   	push   %ebx
  402702:	8b 55 08             	mov    0x8(%ebp),%edx
  402705:	ff 06                	incl   (%esi)
  402707:	e8 c7 ff ff ff       	call   0x4026d3
  40270c:	8b d8                	mov    %eax,%ebx
  40270e:	83 fb ff             	cmp    $0xffffffff,%ebx
  402711:	74 0e                	je     0x402721
  402713:	0f b6 c3             	movzbl %bl,%eax
  402716:	50                   	push   %eax
  402717:	e8 af 40 00 00       	call   0x4067cb
  40271c:	59                   	pop    %ecx
  40271d:	85 c0                	test   %eax,%eax
  40271f:	75 e1                	jne    0x402702
  402721:	8b c3                	mov    %ebx,%eax
  402723:	5b                   	pop    %ebx
  402724:	5d                   	pop    %ebp
  402725:	c3                   	ret    
  402726:	8b ff                	mov    %edi,%edi
  402728:	55                   	push   %ebp
  402729:	8b ec                	mov    %esp,%ebp
  40272b:	81 ec fc 01 00 00    	sub    $0x1fc,%esp
  402731:	a1 00 e4 40 00       	mov    0x40e400,%eax
  402736:	33 c5                	xor    %ebp,%eax
  402738:	89 45 fc             	mov    %eax,-0x4(%ebp)
  40273b:	8b 4d 14             	mov    0x14(%ebp),%ecx
  40273e:	8b 45 08             	mov    0x8(%ebp),%eax
  402741:	56                   	push   %esi
  402742:	33 f6                	xor    %esi,%esi
  402744:	57                   	push   %edi
  402745:	8b 7d 0c             	mov    0xc(%ebp),%edi
  402748:	89 8d 1c fe ff ff    	mov    %ecx,-0x1e4(%ebp)
  40274e:	8d 8d 7c fe ff ff    	lea    -0x184(%ebp),%ecx
  402754:	89 85 64 fe ff ff    	mov    %eax,-0x19c(%ebp)
  40275a:	89 8d 54 fe ff ff    	mov    %ecx,-0x1ac(%ebp)
  402760:	c7 85 24 fe ff ff 5e 	movl   $0x15e,-0x1dc(%ebp)
  402767:	01 00 00 
  40276a:	89 b5 30 fe ff ff    	mov    %esi,-0x1d0(%ebp)
  402770:	89 b5 18 fe ff ff    	mov    %esi,-0x1e8(%ebp)
  402776:	89 b5 78 fe ff ff    	mov    %esi,-0x188(%ebp)
  40277c:	3b fe                	cmp    %esi,%edi
  40277e:	75 20                	jne    0x4027a0
  402780:	e8 a0 fc ff ff       	call   0x402425
  402785:	56                   	push   %esi
  402786:	56                   	push   %esi
  402787:	56                   	push   %esi
  402788:	56                   	push   %esi
  402789:	56                   	push   %esi
  40278a:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  402790:	e8 28 fc ff ff       	call   0x4023bd
  402795:	83 c4 14             	add    $0x14,%esp
  402798:	83 c8 ff             	or     $0xffffffff,%eax
  40279b:	e9 35 0f 00 00       	jmp    0x4036d5
  4027a0:	3b c6                	cmp    %esi,%eax
  4027a2:	74 dc                	je     0x402780
  4027a4:	f6 40 0c 40          	testb  $0x40,0xc(%eax)
  4027a8:	53                   	push   %ebx
  4027a9:	75 7a                	jne    0x402825
  4027ab:	50                   	push   %eax
  4027ac:	e8 70 29 00 00       	call   0x405121
  4027b1:	59                   	pop    %ecx
  4027b2:	ba d8 e4 40 00       	mov    $0x40e4d8,%edx
  4027b7:	83 f8 ff             	cmp    $0xffffffff,%eax
  4027ba:	74 1b                	je     0x4027d7
  4027bc:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4027bf:	74 16                	je     0x4027d7
  4027c1:	8b c8                	mov    %eax,%ecx
  4027c3:	83 e1 1f             	and    $0x1f,%ecx
  4027c6:	8b d8                	mov    %eax,%ebx
  4027c8:	c1 fb 05             	sar    $0x5,%ebx
  4027cb:	c1 e1 06             	shl    $0x6,%ecx
  4027ce:	03 0c 9d a0 fa 40 00 	add    0x40faa0(,%ebx,4),%ecx
  4027d5:	eb 02                	jmp    0x4027d9
  4027d7:	8b ca                	mov    %edx,%ecx
  4027d9:	f6 41 24 7f          	testb  $0x7f,0x24(%ecx)
  4027dd:	75 26                	jne    0x402805
  4027df:	83 f8 ff             	cmp    $0xffffffff,%eax
  4027e2:	74 19                	je     0x4027fd
  4027e4:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4027e7:	74 14                	je     0x4027fd
  4027e9:	8b c8                	mov    %eax,%ecx
  4027eb:	83 e0 1f             	and    $0x1f,%eax
  4027ee:	c1 f9 05             	sar    $0x5,%ecx
  4027f1:	c1 e0 06             	shl    $0x6,%eax
  4027f4:	03 04 8d a0 fa 40 00 	add    0x40faa0(,%ecx,4),%eax
  4027fb:	eb 02                	jmp    0x4027ff
  4027fd:	8b c2                	mov    %edx,%eax
  4027ff:	f6 40 24 80          	testb  $0x80,0x24(%eax)
  402803:	74 20                	je     0x402825
  402805:	e8 1b fc ff ff       	call   0x402425
  40280a:	56                   	push   %esi
  40280b:	56                   	push   %esi
  40280c:	56                   	push   %esi
  40280d:	56                   	push   %esi
  40280e:	56                   	push   %esi
  40280f:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  402815:	e8 a3 fb ff ff       	call   0x4023bd
  40281a:	83 c4 14             	add    $0x14,%esp
  40281d:	83 c8 ff             	or     $0xffffffff,%eax
  402820:	e9 af 0e 00 00       	jmp    0x4036d4
  402825:	ff 75 10             	pushl  0x10(%ebp)
  402828:	8d 8d 08 fe ff ff    	lea    -0x1f8(%ebp),%ecx
  40282e:	e8 8e ed ff ff       	call   0x4015c1
  402833:	8a 07                	mov    (%edi),%al
  402835:	c6 85 63 fe ff ff 00 	movb   $0x0,-0x19d(%ebp)
  40283c:	89 b5 74 fe ff ff    	mov    %esi,-0x18c(%ebp)
  402842:	89 b5 3c fe ff ff    	mov    %esi,-0x1c4(%ebp)
  402848:	84 c0                	test   %al,%al
  40284a:	0f 84 6b 0e 00 00    	je     0x4036bb
  402850:	8b b5 64 fe ff ff    	mov    -0x19c(%ebp),%esi
  402856:	0f b6 c0             	movzbl %al,%eax
  402859:	50                   	push   %eax
  40285a:	e8 6c 3f 00 00       	call   0x4067cb
  40285f:	59                   	pop    %ecx
  402860:	85 c0                	test   %eax,%eax
  402862:	74 30                	je     0x402894
  402864:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  40286a:	56                   	push   %esi
  40286b:	56                   	push   %esi
  40286c:	8d b5 74 fe ff ff    	lea    -0x18c(%ebp),%esi
  402872:	e8 85 fe ff ff       	call   0x4026fc
  402877:	59                   	pop    %ecx
  402878:	50                   	push   %eax
  402879:	e8 6b fe ff ff       	call   0x4026e9
  40287e:	59                   	pop    %ecx
  40287f:	59                   	pop    %ecx
  402880:	47                   	inc    %edi
  402881:	0f b6 07             	movzbl (%edi),%eax
  402884:	50                   	push   %eax
  402885:	e8 41 3f 00 00       	call   0x4067cb
  40288a:	59                   	pop    %ecx
  40288b:	85 c0                	test   %eax,%eax
  40288d:	75 f1                	jne    0x402880
  40288f:	e9 a9 0d 00 00       	jmp    0x40363d
  402894:	8a 07                	mov    (%edi),%al
  402896:	3c 25                	cmp    $0x25,%al
  402898:	0f 85 31 0d 00 00    	jne    0x4035cf
  40289e:	38 47 01             	cmp    %al,0x1(%edi)
  4028a1:	0f 84 1a 0d 00 00    	je     0x4035c1
  4028a7:	33 f6                	xor    %esi,%esi
  4028a9:	89 b5 40 fe ff ff    	mov    %esi,-0x1c0(%ebp)
  4028af:	c6 85 2f fe ff ff 00 	movb   $0x0,-0x1d1(%ebp)
  4028b6:	89 b5 58 fe ff ff    	mov    %esi,-0x1a8(%ebp)
  4028bc:	89 b5 4c fe ff ff    	mov    %esi,-0x1b4(%ebp)
  4028c2:	89 b5 6c fe ff ff    	mov    %esi,-0x194(%ebp)
  4028c8:	c6 85 61 fe ff ff 00 	movb   $0x0,-0x19f(%ebp)
  4028cf:	c6 85 60 fe ff ff 00 	movb   $0x0,-0x1a0(%ebp)
  4028d6:	c6 85 6a fe ff ff 00 	movb   $0x0,-0x196(%ebp)
  4028dd:	c6 85 53 fe ff ff 00 	movb   $0x0,-0x1ad(%ebp)
  4028e4:	c6 85 62 fe ff ff 00 	movb   $0x0,-0x19e(%ebp)
  4028eb:	c6 85 73 fe ff ff 00 	movb   $0x0,-0x18d(%ebp)
  4028f2:	c6 85 6b fe ff ff 01 	movb   $0x1,-0x195(%ebp)
  4028f9:	89 b5 28 fe ff ff    	mov    %esi,-0x1d8(%ebp)
  4028ff:	47                   	inc    %edi
  402900:	0f b6 1f             	movzbl (%edi),%ebx
  402903:	0f b6 c3             	movzbl %bl,%eax
  402906:	50                   	push   %eax
  402907:	e8 ba 3d 00 00       	call   0x4066c6
  40290c:	59                   	pop    %ecx
  40290d:	85 c0                	test   %eax,%eax
  40290f:	74 1e                	je     0x40292f
  402911:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402917:	ff 85 4c fe ff ff    	incl   -0x1b4(%ebp)
  40291d:	6b c0 0a             	imul   $0xa,%eax,%eax
  402920:	8d 44 18 d0          	lea    -0x30(%eax,%ebx,1),%eax
  402924:	89 85 6c fe ff ff    	mov    %eax,-0x194(%ebp)
  40292a:	e9 c5 00 00 00       	jmp    0x4029f4
  40292f:	83 fb 4e             	cmp    $0x4e,%ebx
  402932:	0f 8f 83 00 00 00    	jg     0x4029bb
  402938:	0f 84 b6 00 00 00    	je     0x4029f4
  40293e:	83 fb 2a             	cmp    $0x2a,%ebx
  402941:	74 70                	je     0x4029b3
  402943:	83 fb 46             	cmp    $0x46,%ebx
  402946:	0f 84 a8 00 00 00    	je     0x4029f4
  40294c:	83 fb 49             	cmp    $0x49,%ebx
  40294f:	74 10                	je     0x402961
  402951:	83 fb 4c             	cmp    $0x4c,%ebx
  402954:	75 74                	jne    0x4029ca
  402956:	fe 85 6b fe ff ff    	incb   -0x195(%ebp)
  40295c:	e9 93 00 00 00       	jmp    0x4029f4
  402961:	8a 4f 01             	mov    0x1(%edi),%cl
  402964:	80 f9 36             	cmp    $0x36,%cl
  402967:	75 1e                	jne    0x402987
  402969:	8d 47 02             	lea    0x2(%edi),%eax
  40296c:	80 38 34             	cmpb   $0x34,(%eax)
  40296f:	75 16                	jne    0x402987
  402971:	ff 85 28 fe ff ff    	incl   -0x1d8(%ebp)
  402977:	8b f8                	mov    %eax,%edi
  402979:	89 b5 34 fe ff ff    	mov    %esi,-0x1cc(%ebp)
  40297f:	89 b5 38 fe ff ff    	mov    %esi,-0x1c8(%ebp)
  402985:	eb 6d                	jmp    0x4029f4
  402987:	80 f9 33             	cmp    $0x33,%cl
  40298a:	75 0c                	jne    0x402998
  40298c:	8d 47 02             	lea    0x2(%edi),%eax
  40298f:	80 38 32             	cmpb   $0x32,(%eax)
  402992:	75 04                	jne    0x402998
  402994:	8b f8                	mov    %eax,%edi
  402996:	eb 5c                	jmp    0x4029f4
  402998:	80 f9 64             	cmp    $0x64,%cl
  40299b:	74 57                	je     0x4029f4
  40299d:	80 f9 69             	cmp    $0x69,%cl
  4029a0:	74 52                	je     0x4029f4
  4029a2:	80 f9 6f             	cmp    $0x6f,%cl
  4029a5:	74 4d                	je     0x4029f4
  4029a7:	80 f9 78             	cmp    $0x78,%cl
  4029aa:	74 48                	je     0x4029f4
  4029ac:	80 f9 58             	cmp    $0x58,%cl
  4029af:	75 19                	jne    0x4029ca
  4029b1:	eb 41                	jmp    0x4029f4
  4029b3:	fe 85 6a fe ff ff    	incb   -0x196(%ebp)
  4029b9:	eb 39                	jmp    0x4029f4
  4029bb:	83 fb 68             	cmp    $0x68,%ebx
  4029be:	74 28                	je     0x4029e8
  4029c0:	83 fb 6c             	cmp    $0x6c,%ebx
  4029c3:	74 0d                	je     0x4029d2
  4029c5:	83 fb 77             	cmp    $0x77,%ebx
  4029c8:	74 16                	je     0x4029e0
  4029ca:	fe 85 53 fe ff ff    	incb   -0x1ad(%ebp)
  4029d0:	eb 22                	jmp    0x4029f4
  4029d2:	8d 47 01             	lea    0x1(%edi),%eax
  4029d5:	80 38 6c             	cmpb   $0x6c,(%eax)
  4029d8:	74 97                	je     0x402971
  4029da:	fe 85 6b fe ff ff    	incb   -0x195(%ebp)
  4029e0:	fe 85 73 fe ff ff    	incb   -0x18d(%ebp)
  4029e6:	eb 0c                	jmp    0x4029f4
  4029e8:	fe 8d 6b fe ff ff    	decb   -0x195(%ebp)
  4029ee:	fe 8d 73 fe ff ff    	decb   -0x18d(%ebp)
  4029f4:	80 bd 53 fe ff ff 00 	cmpb   $0x0,-0x1ad(%ebp)
  4029fb:	0f 84 fe fe ff ff    	je     0x4028ff
  402a01:	80 bd 6a fe ff ff 00 	cmpb   $0x0,-0x196(%ebp)
  402a08:	89 bd 48 fe ff ff    	mov    %edi,-0x1b8(%ebp)
  402a0e:	75 19                	jne    0x402a29
  402a10:	8b 85 1c fe ff ff    	mov    -0x1e4(%ebp),%eax
  402a16:	8b 30                	mov    (%eax),%esi
  402a18:	89 85 04 fe ff ff    	mov    %eax,-0x1fc(%ebp)
  402a1e:	83 c0 04             	add    $0x4,%eax
  402a21:	89 85 1c fe ff ff    	mov    %eax,-0x1e4(%ebp)
  402a27:	eb 02                	jmp    0x402a2b
  402a29:	33 f6                	xor    %esi,%esi
  402a2b:	32 db                	xor    %bl,%bl
  402a2d:	89 b5 44 fe ff ff    	mov    %esi,-0x1bc(%ebp)
  402a33:	38 9d 73 fe ff ff    	cmp    %bl,-0x18d(%ebp)
  402a39:	75 18                	jne    0x402a53
  402a3b:	8a 07                	mov    (%edi),%al
  402a3d:	3c 53                	cmp    $0x53,%al
  402a3f:	74 0b                	je     0x402a4c
  402a41:	c6 85 73 fe ff ff ff 	movb   $0xff,-0x18d(%ebp)
  402a48:	3c 43                	cmp    $0x43,%al
  402a4a:	75 07                	jne    0x402a53
  402a4c:	c6 85 73 fe ff ff 01 	movb   $0x1,-0x18d(%ebp)
  402a53:	0f b6 07             	movzbl (%edi),%eax
  402a56:	83 c8 20             	or     $0x20,%eax
  402a59:	89 85 5c fe ff ff    	mov    %eax,-0x1a4(%ebp)
  402a5f:	83 f8 6e             	cmp    $0x6e,%eax
  402a62:	74 4a                	je     0x402aae
  402a64:	83 f8 63             	cmp    $0x63,%eax
  402a67:	74 19                	je     0x402a82
  402a69:	83 f8 7b             	cmp    $0x7b,%eax
  402a6c:	74 14                	je     0x402a82
  402a6e:	ff b5 64 fe ff ff    	pushl  -0x19c(%ebp)
  402a74:	8d b5 74 fe ff ff    	lea    -0x18c(%ebp),%esi
  402a7a:	e8 7d fc ff ff       	call   0x4026fc
  402a7f:	59                   	pop    %ecx
  402a80:	eb 11                	jmp    0x402a93
  402a82:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402a88:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402a8e:	e8 40 fc ff ff       	call   0x4026d3
  402a93:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402a99:	83 f8 ff             	cmp    $0xffffffff,%eax
  402a9c:	0f 84 d1 0b 00 00    	je     0x403673
  402aa2:	8b b5 44 fe ff ff    	mov    -0x1bc(%ebp),%esi
  402aa8:	8b bd 48 fe ff ff    	mov    -0x1b8(%ebp),%edi
  402aae:	8b 8d 4c fe ff ff    	mov    -0x1b4(%ebp),%ecx
  402ab4:	85 c9                	test   %ecx,%ecx
  402ab6:	74 0d                	je     0x402ac5
  402ab8:	83 bd 6c fe ff ff 00 	cmpl   $0x0,-0x194(%ebp)
  402abf:	0f 84 84 0b 00 00    	je     0x403649
  402ac5:	8b 85 5c fe ff ff    	mov    -0x1a4(%ebp),%eax
  402acb:	83 f8 6f             	cmp    $0x6f,%eax
  402ace:	0f 8f 72 05 00 00    	jg     0x403046
  402ad4:	0f 84 01 08 00 00    	je     0x4032db
  402ada:	83 f8 63             	cmp    $0x63,%eax
  402add:	0f 84 0a 04 00 00    	je     0x402eed
  402ae3:	6a 64                	push   $0x64
  402ae5:	5a                   	pop    %edx
  402ae6:	3b c2                	cmp    %edx,%eax
  402ae8:	0f 84 ed 07 00 00    	je     0x4032db
  402aee:	0f 8e 7a 05 00 00    	jle    0x40306e
  402af4:	83 f8 67             	cmp    $0x67,%eax
  402af7:	7e 45                	jle    0x402b3e
  402af9:	83 f8 69             	cmp    $0x69,%eax
  402afc:	74 21                	je     0x402b1f
  402afe:	83 f8 6e             	cmp    $0x6e,%eax
  402b01:	0f 85 67 05 00 00    	jne    0x40306e
  402b07:	80 bd 6a fe ff ff 00 	cmpb   $0x0,-0x196(%ebp)
  402b0e:	8b bd 74 fe ff ff    	mov    -0x18c(%ebp),%edi
  402b14:	0f 84 66 0a 00 00    	je     0x403580
  402b1a:	e9 8d 0a 00 00       	jmp    0x4035ac
  402b1f:	89 95 5c fe ff ff    	mov    %edx,-0x1a4(%ebp)
  402b25:	83 bd 78 fe ff ff 2d 	cmpl   $0x2d,-0x188(%ebp)
  402b2c:	0f 85 34 06 00 00    	jne    0x403166
  402b32:	c6 85 60 fe ff ff 01 	movb   $0x1,-0x1a0(%ebp)
  402b39:	e9 31 06 00 00       	jmp    0x40316f
  402b3e:	33 db                	xor    %ebx,%ebx
  402b40:	83 bd 78 fe ff ff 2d 	cmpl   $0x2d,-0x188(%ebp)
  402b47:	75 0c                	jne    0x402b55
  402b49:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
  402b4f:	c6 00 2d             	movb   $0x2d,(%eax)
  402b52:	43                   	inc    %ebx
  402b53:	eb 09                	jmp    0x402b5e
  402b55:	83 bd 78 fe ff ff 2b 	cmpl   $0x2b,-0x188(%ebp)
  402b5c:	75 1d                	jne    0x402b7b
  402b5e:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402b64:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402b6a:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402b70:	e8 5e fb ff ff       	call   0x4026d3
  402b75:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402b7b:	83 bd 4c fe ff ff 00 	cmpl   $0x0,-0x1b4(%ebp)
  402b82:	75 07                	jne    0x402b8b
  402b84:	83 8d 6c fe ff ff ff 	orl    $0xffffffff,-0x194(%ebp)
  402b8b:	0f b6 85 78 fe ff ff 	movzbl -0x188(%ebp),%eax
  402b92:	eb 6b                	jmp    0x402bff
  402b94:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402b9a:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402ba0:	85 c0                	test   %eax,%eax
  402ba2:	74 66                	je     0x402c0a
  402ba4:	8a 85 78 fe ff ff    	mov    -0x188(%ebp),%al
  402baa:	8b 8d 54 fe ff ff    	mov    -0x1ac(%ebp),%ecx
  402bb0:	ff 85 58 fe ff ff    	incl   -0x1a8(%ebp)
  402bb6:	88 04 0b             	mov    %al,(%ebx,%ecx,1)
  402bb9:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
  402bbf:	50                   	push   %eax
  402bc0:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
  402bc6:	50                   	push   %eax
  402bc7:	43                   	inc    %ebx
  402bc8:	53                   	push   %ebx
  402bc9:	8d bd 54 fe ff ff    	lea    -0x1ac(%ebp),%edi
  402bcf:	8d b5 24 fe ff ff    	lea    -0x1dc(%ebp),%esi
  402bd5:	e8 82 fa ff ff       	call   0x40265c
  402bda:	83 c4 0c             	add    $0xc,%esp
  402bdd:	85 c0                	test   %eax,%eax
  402bdf:	0f 84 8e 0a 00 00    	je     0x403673
  402be5:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402beb:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402bf1:	e8 dd fa ff ff       	call   0x4026d3
  402bf6:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402bfc:	0f b6 c0             	movzbl %al,%eax
  402bff:	50                   	push   %eax
  402c00:	e8 c1 3a 00 00       	call   0x4066c6
  402c05:	59                   	pop    %ecx
  402c06:	85 c0                	test   %eax,%eax
  402c08:	75 8a                	jne    0x402b94
  402c0a:	8b 85 08 fe ff ff    	mov    -0x1f8(%ebp),%eax
  402c10:	8b 80 bc 00 00 00    	mov    0xbc(%eax),%eax
  402c16:	8b 00                	mov    (%eax),%eax
  402c18:	8a 00                	mov    (%eax),%al
  402c1a:	88 85 61 fe ff ff    	mov    %al,-0x19f(%ebp)
  402c20:	3a 85 78 fe ff ff    	cmp    -0x188(%ebp),%al
  402c26:	0f 85 e5 00 00 00    	jne    0x402d11
  402c2c:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402c32:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402c38:	85 c0                	test   %eax,%eax
  402c3a:	0f 84 d1 00 00 00    	je     0x402d11
  402c40:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402c46:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402c4c:	e8 82 fa ff ff       	call   0x4026d3
  402c51:	8b 8d 54 fe ff ff    	mov    -0x1ac(%ebp),%ecx
  402c57:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402c5d:	8a 85 61 fe ff ff    	mov    -0x19f(%ebp),%al
  402c63:	88 04 0b             	mov    %al,(%ebx,%ecx,1)
  402c66:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
  402c6c:	50                   	push   %eax
  402c6d:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
  402c73:	50                   	push   %eax
  402c74:	43                   	inc    %ebx
  402c75:	53                   	push   %ebx
  402c76:	8d bd 54 fe ff ff    	lea    -0x1ac(%ebp),%edi
  402c7c:	8d b5 24 fe ff ff    	lea    -0x1dc(%ebp),%esi
  402c82:	e8 d5 f9 ff ff       	call   0x40265c
  402c87:	83 c4 0c             	add    $0xc,%esp
  402c8a:	85 c0                	test   %eax,%eax
  402c8c:	0f 84 e1 09 00 00    	je     0x403673
  402c92:	0f b6 85 78 fe ff ff 	movzbl -0x188(%ebp),%eax
  402c99:	eb 6b                	jmp    0x402d06
  402c9b:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402ca1:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402ca7:	85 c0                	test   %eax,%eax
  402ca9:	74 66                	je     0x402d11
  402cab:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
  402cb1:	8a 8d 78 fe ff ff    	mov    -0x188(%ebp),%cl
  402cb7:	ff 85 58 fe ff ff    	incl   -0x1a8(%ebp)
  402cbd:	88 0c 03             	mov    %cl,(%ebx,%eax,1)
  402cc0:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
  402cc6:	50                   	push   %eax
  402cc7:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
  402ccd:	50                   	push   %eax
  402cce:	43                   	inc    %ebx
  402ccf:	53                   	push   %ebx
  402cd0:	8d bd 54 fe ff ff    	lea    -0x1ac(%ebp),%edi
  402cd6:	8d b5 24 fe ff ff    	lea    -0x1dc(%ebp),%esi
  402cdc:	e8 7b f9 ff ff       	call   0x40265c
  402ce1:	83 c4 0c             	add    $0xc,%esp
  402ce4:	85 c0                	test   %eax,%eax
  402ce6:	0f 84 87 09 00 00    	je     0x403673
  402cec:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402cf2:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402cf8:	e8 d6 f9 ff ff       	call   0x4026d3
  402cfd:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402d03:	0f b6 c0             	movzbl %al,%eax
  402d06:	50                   	push   %eax
  402d07:	e8 ba 39 00 00       	call   0x4066c6
  402d0c:	59                   	pop    %ecx
  402d0d:	85 c0                	test   %eax,%eax
  402d0f:	75 8a                	jne    0x402c9b
  402d11:	83 bd 58 fe ff ff 00 	cmpl   $0x0,-0x1a8(%ebp)
  402d18:	0f 84 5f 01 00 00    	je     0x402e7d
  402d1e:	83 bd 78 fe ff ff 65 	cmpl   $0x65,-0x188(%ebp)
  402d25:	74 0d                	je     0x402d34
  402d27:	83 bd 78 fe ff ff 45 	cmpl   $0x45,-0x188(%ebp)
  402d2e:	0f 85 49 01 00 00    	jne    0x402e7d
  402d34:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402d3a:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402d40:	85 c0                	test   %eax,%eax
  402d42:	0f 84 35 01 00 00    	je     0x402e7d
  402d48:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
  402d4e:	c6 04 03 65          	movb   $0x65,(%ebx,%eax,1)
  402d52:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
  402d58:	50                   	push   %eax
  402d59:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
  402d5f:	50                   	push   %eax
  402d60:	43                   	inc    %ebx
  402d61:	53                   	push   %ebx
  402d62:	8d bd 54 fe ff ff    	lea    -0x1ac(%ebp),%edi
  402d68:	8d b5 24 fe ff ff    	lea    -0x1dc(%ebp),%esi
  402d6e:	e8 e9 f8 ff ff       	call   0x40265c
  402d73:	83 c4 0c             	add    $0xc,%esp
  402d76:	85 c0                	test   %eax,%eax
  402d78:	0f 84 f5 08 00 00    	je     0x403673
  402d7e:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402d84:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402d8a:	e8 44 f9 ff ff       	call   0x4026d3
  402d8f:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402d95:	83 f8 2d             	cmp    $0x2d,%eax
  402d98:	75 2c                	jne    0x402dc6
  402d9a:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
  402da0:	c6 04 03 2d          	movb   $0x2d,(%ebx,%eax,1)
  402da4:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
  402daa:	50                   	push   %eax
  402dab:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
  402db1:	50                   	push   %eax
  402db2:	43                   	inc    %ebx
  402db3:	53                   	push   %ebx
  402db4:	e8 a3 f8 ff ff       	call   0x40265c
  402db9:	83 c4 0c             	add    $0xc,%esp
  402dbc:	85 c0                	test   %eax,%eax
  402dbe:	0f 84 af 08 00 00    	je     0x403673
  402dc4:	eb 09                	jmp    0x402dcf
  402dc6:	83 bd 78 fe ff ff 2b 	cmpl   $0x2b,-0x188(%ebp)
  402dcd:	75 2f                	jne    0x402dfe
  402dcf:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402dd5:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402ddb:	85 c0                	test   %eax,%eax
  402ddd:	75 08                	jne    0x402de7
  402ddf:	21 85 6c fe ff ff    	and    %eax,-0x194(%ebp)
  402de5:	eb 17                	jmp    0x402dfe
  402de7:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402ded:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402df3:	e8 db f8 ff ff       	call   0x4026d3
  402df8:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402dfe:	0f b6 85 78 fe ff ff 	movzbl -0x188(%ebp),%eax
  402e05:	eb 6b                	jmp    0x402e72
  402e07:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402e0d:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402e13:	85 c0                	test   %eax,%eax
  402e15:	74 66                	je     0x402e7d
  402e17:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
  402e1d:	8a 8d 78 fe ff ff    	mov    -0x188(%ebp),%cl
  402e23:	ff 85 58 fe ff ff    	incl   -0x1a8(%ebp)
  402e29:	88 0c 03             	mov    %cl,(%ebx,%eax,1)
  402e2c:	8d 85 30 fe ff ff    	lea    -0x1d0(%ebp),%eax
  402e32:	50                   	push   %eax
  402e33:	8d 85 7c fe ff ff    	lea    -0x184(%ebp),%eax
  402e39:	50                   	push   %eax
  402e3a:	43                   	inc    %ebx
  402e3b:	53                   	push   %ebx
  402e3c:	8d bd 54 fe ff ff    	lea    -0x1ac(%ebp),%edi
  402e42:	8d b5 24 fe ff ff    	lea    -0x1dc(%ebp),%esi
  402e48:	e8 0f f8 ff ff       	call   0x40265c
  402e4d:	83 c4 0c             	add    $0xc,%esp
  402e50:	85 c0                	test   %eax,%eax
  402e52:	0f 84 1b 08 00 00    	je     0x403673
  402e58:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  402e5e:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402e64:	e8 6a f8 ff ff       	call   0x4026d3
  402e69:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402e6f:	0f b6 c0             	movzbl %al,%eax
  402e72:	50                   	push   %eax
  402e73:	e8 4e 38 00 00       	call   0x4066c6
  402e78:	59                   	pop    %ecx
  402e79:	85 c0                	test   %eax,%eax
  402e7b:	75 8a                	jne    0x402e07
  402e7d:	ff b5 64 fe ff ff    	pushl  -0x19c(%ebp)
  402e83:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  402e89:	ff b5 78 fe ff ff    	pushl  -0x188(%ebp)
  402e8f:	e8 55 f8 ff ff       	call   0x4026e9
  402e94:	83 bd 58 fe ff ff 00 	cmpl   $0x0,-0x1a8(%ebp)
  402e9b:	59                   	pop    %ecx
  402e9c:	59                   	pop    %ecx
  402e9d:	0f 84 d0 07 00 00    	je     0x403673
  402ea3:	80 bd 6a fe ff ff 00 	cmpb   $0x0,-0x196(%ebp)
  402eaa:	0f 85 fc 06 00 00    	jne    0x4035ac
  402eb0:	8b 85 54 fe ff ff    	mov    -0x1ac(%ebp),%eax
  402eb6:	ff 85 3c fe ff ff    	incl   -0x1c4(%ebp)
  402ebc:	8d 8d 08 fe ff ff    	lea    -0x1f8(%ebp),%ecx
  402ec2:	51                   	push   %ecx
  402ec3:	50                   	push   %eax
  402ec4:	ff b5 44 fe ff ff    	pushl  -0x1bc(%ebp)
  402eca:	c6 04 03 00          	movb   $0x0,(%ebx,%eax,1)
  402ece:	0f be 85 6b fe ff ff 	movsbl -0x195(%ebp),%eax
  402ed5:	48                   	dec    %eax
  402ed6:	50                   	push   %eax
  402ed7:	ff 35 7c ec 40 00    	pushl  0x40ec7c
  402edd:	e8 53 16 00 00       	call   0x404535
  402ee2:	59                   	pop    %ecx
  402ee3:	ff d0                	call   *%eax
  402ee5:	83 c4 10             	add    $0x10,%esp
  402ee8:	e9 bf 06 00 00       	jmp    0x4035ac
  402eed:	85 c9                	test   %ecx,%ecx
  402eef:	75 10                	jne    0x402f01
  402ef1:	ff 85 6c fe ff ff    	incl   -0x194(%ebp)
  402ef7:	c7 85 4c fe ff ff 01 	movl   $0x1,-0x1b4(%ebp)
  402efe:	00 00 00 
  402f01:	80 bd 73 fe ff ff 00 	cmpb   $0x0,-0x18d(%ebp)
  402f08:	7e 07                	jle    0x402f11
  402f0a:	c6 85 62 fe ff ff 01 	movb   $0x1,-0x19e(%ebp)
  402f11:	8b bd 64 fe ff ff    	mov    -0x19c(%ebp),%edi
  402f17:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  402f1d:	57                   	push   %edi
  402f1e:	ff b5 78 fe ff ff    	pushl  -0x188(%ebp)
  402f24:	89 b5 40 fe ff ff    	mov    %esi,-0x1c0(%ebp)
  402f2a:	e8 ba f7 ff ff       	call   0x4026e9
  402f2f:	59                   	pop    %ecx
  402f30:	59                   	pop    %ecx
  402f31:	83 bd 4c fe ff ff 00 	cmpl   $0x0,-0x1b4(%ebp)
  402f38:	74 14                	je     0x402f4e
  402f3a:	8b 85 6c fe ff ff    	mov    -0x194(%ebp),%eax
  402f40:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  402f46:	85 c0                	test   %eax,%eax
  402f48:	0f 84 33 03 00 00    	je     0x403281
  402f4e:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402f54:	8b d7                	mov    %edi,%edx
  402f56:	e8 78 f7 ff ff       	call   0x4026d3
  402f5b:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  402f61:	83 f8 ff             	cmp    $0xffffffff,%eax
  402f64:	0f 84 08 03 00 00    	je     0x403272
  402f6a:	83 bd 5c fe ff ff 63 	cmpl   $0x63,-0x1a4(%ebp)
  402f71:	74 4e                	je     0x402fc1
  402f73:	83 bd 5c fe ff ff 73 	cmpl   $0x73,-0x1a4(%ebp)
  402f7a:	75 13                	jne    0x402f8f
  402f7c:	83 f8 09             	cmp    $0x9,%eax
  402f7f:	7c 09                	jl     0x402f8a
  402f81:	83 f8 0d             	cmp    $0xd,%eax
  402f84:	0f 8e e8 02 00 00    	jle    0x403272
  402f8a:	83 f8 20             	cmp    $0x20,%eax
  402f8d:	75 32                	jne    0x402fc1
  402f8f:	83 bd 5c fe ff ff 7b 	cmpl   $0x7b,-0x1a4(%ebp)
  402f96:	0f 85 d6 02 00 00    	jne    0x403272
  402f9c:	0f be 9d 61 fe ff ff 	movsbl -0x19f(%ebp),%ebx
  402fa3:	33 d2                	xor    %edx,%edx
  402fa5:	8b c8                	mov    %eax,%ecx
  402fa7:	83 e1 07             	and    $0x7,%ecx
  402faa:	42                   	inc    %edx
  402fab:	d3 e2                	shl    %cl,%edx
  402fad:	8b c8                	mov    %eax,%ecx
  402faf:	c1 f9 03             	sar    $0x3,%ecx
  402fb2:	0f be 4c 0d dc       	movsbl -0x24(%ebp,%ecx,1),%ecx
  402fb7:	33 cb                	xor    %ebx,%ecx
  402fb9:	85 d1                	test   %edx,%ecx
  402fbb:	0f 84 b1 02 00 00    	je     0x403272
  402fc1:	80 bd 6a fe ff ff 00 	cmpb   $0x0,-0x196(%ebp)
  402fc8:	0f 85 99 02 00 00    	jne    0x403267
  402fce:	80 bd 62 fe ff ff 00 	cmpb   $0x0,-0x19e(%ebp)
  402fd5:	0f 84 7e 02 00 00    	je     0x403259
  402fdb:	88 85 20 fe ff ff    	mov    %al,-0x1e0(%ebp)
  402fe1:	0f b6 c0             	movzbl %al,%eax
  402fe4:	50                   	push   %eax
  402fe5:	e8 42 2f 00 00       	call   0x405f2c
  402fea:	59                   	pop    %ecx
  402feb:	85 c0                	test   %eax,%eax
  402fed:	74 13                	je     0x403002
  402fef:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  402ff5:	8b d7                	mov    %edi,%edx
  402ff7:	e8 d7 f6 ff ff       	call   0x4026d3
  402ffc:	88 85 21 fe ff ff    	mov    %al,-0x1df(%ebp)
  403002:	8d 85 08 fe ff ff    	lea    -0x1f8(%ebp),%eax
  403008:	50                   	push   %eax
  403009:	8b 85 08 fe ff ff    	mov    -0x1f8(%ebp),%eax
  40300f:	c7 85 18 fe ff ff 3f 	movl   $0x3f,-0x1e8(%ebp)
  403016:	00 00 00 
  403019:	ff b0 ac 00 00 00    	pushl  0xac(%eax)
  40301f:	8d 85 20 fe ff ff    	lea    -0x1e0(%ebp),%eax
  403025:	50                   	push   %eax
  403026:	8d 85 18 fe ff ff    	lea    -0x1e8(%ebp),%eax
  40302c:	50                   	push   %eax
  40302d:	e8 e3 39 00 00       	call   0x406a15
  403032:	66 8b 85 18 fe ff ff 	mov    -0x1e8(%ebp),%ax
  403039:	83 c4 10             	add    $0x10,%esp
  40303c:	66 89 06             	mov    %ax,(%esi)
  40303f:	46                   	inc    %esi
  403040:	46                   	inc    %esi
  403041:	e9 16 02 00 00       	jmp    0x40325c
  403046:	83 e8 70             	sub    $0x70,%eax
  403049:	0f 84 85 02 00 00    	je     0x4032d4
  40304f:	83 e8 03             	sub    $0x3,%eax
  403052:	0f 84 a9 fe ff ff    	je     0x402f01
  403058:	48                   	dec    %eax
  403059:	48                   	dec    %eax
  40305a:	0f 84 7b 02 00 00    	je     0x4032db
  403060:	83 e8 03             	sub    $0x3,%eax
  403063:	0f 84 bc fa ff ff    	je     0x402b25
  403069:	83 e8 03             	sub    $0x3,%eax
  40306c:	74 33                	je     0x4030a1
  40306e:	0f b6 07             	movzbl (%edi),%eax
  403071:	3b 85 78 fe ff ff    	cmp    -0x188(%ebp),%eax
  403077:	0f 85 cc 05 00 00    	jne    0x403649
  40307d:	fe 8d 63 fe ff ff    	decb   -0x19d(%ebp)
  403083:	80 bd 6a fe ff ff 00 	cmpb   $0x0,-0x196(%ebp)
  40308a:	0f 85 1c 05 00 00    	jne    0x4035ac
  403090:	8b 85 04 fe ff ff    	mov    -0x1fc(%ebp),%eax
  403096:	89 85 1c fe ff ff    	mov    %eax,-0x1e4(%ebp)
  40309c:	e9 0b 05 00 00       	jmp    0x4035ac
  4030a1:	80 bd 73 fe ff ff 00 	cmpb   $0x0,-0x18d(%ebp)
  4030a8:	7e 07                	jle    0x4030b1
  4030aa:	c6 85 62 fe ff ff 01 	movb   $0x1,-0x19e(%ebp)
  4030b1:	47                   	inc    %edi
  4030b2:	80 3f 5e             	cmpb   $0x5e,(%edi)
  4030b5:	8b f7                	mov    %edi,%esi
  4030b7:	75 0a                	jne    0x4030c3
  4030b9:	8d 77 01             	lea    0x1(%edi),%esi
  4030bc:	c6 85 61 fe ff ff ff 	movb   $0xff,-0x19f(%ebp)
  4030c3:	6a 20                	push   $0x20
  4030c5:	8d 45 dc             	lea    -0x24(%ebp),%eax
  4030c8:	6a 00                	push   $0x0
  4030ca:	50                   	push   %eax
  4030cb:	e8 20 2f 00 00       	call   0x405ff0
  4030d0:	83 c4 0c             	add    $0xc,%esp
  4030d3:	80 3e 5d             	cmpb   $0x5d,(%esi)
  4030d6:	75 09                	jne    0x4030e1
  4030d8:	b2 5d                	mov    $0x5d,%dl
  4030da:	46                   	inc    %esi
  4030db:	c6 45 e7 20          	movb   $0x20,-0x19(%ebp)
  4030df:	eb 66                	jmp    0x403147
  4030e1:	8a 95 2f fe ff ff    	mov    -0x1d1(%ebp),%dl
  4030e7:	eb 5e                	jmp    0x403147
  4030e9:	46                   	inc    %esi
  4030ea:	3c 2d                	cmp    $0x2d,%al
  4030ec:	75 42                	jne    0x403130
  4030ee:	84 d2                	test   %dl,%dl
  4030f0:	74 3e                	je     0x403130
  4030f2:	8a 0e                	mov    (%esi),%cl
  4030f4:	80 f9 5d             	cmp    $0x5d,%cl
  4030f7:	74 37                	je     0x403130
  4030f9:	46                   	inc    %esi
  4030fa:	3a d1                	cmp    %cl,%dl
  4030fc:	73 04                	jae    0x403102
  4030fe:	8a c1                	mov    %cl,%al
  403100:	eb 04                	jmp    0x403106
  403102:	8a c2                	mov    %dl,%al
  403104:	8a d1                	mov    %cl,%dl
  403106:	3a d0                	cmp    %al,%dl
  403108:	77 22                	ja     0x40312c
  40310a:	2a c2                	sub    %dl,%al
  40310c:	fe c0                	inc    %al
  40310e:	0f b6 fa             	movzbl %dl,%edi
  403111:	0f b6 d0             	movzbl %al,%edx
  403114:	8b cf                	mov    %edi,%ecx
  403116:	83 e1 07             	and    $0x7,%ecx
  403119:	8b c7                	mov    %edi,%eax
  40311b:	b3 01                	mov    $0x1,%bl
  40311d:	d2 e3                	shl    %cl,%bl
  40311f:	c1 e8 03             	shr    $0x3,%eax
  403122:	8d 44 05 dc          	lea    -0x24(%ebp,%eax,1),%eax
  403126:	08 18                	or     %bl,(%eax)
  403128:	47                   	inc    %edi
  403129:	4a                   	dec    %edx
  40312a:	75 e8                	jne    0x403114
  40312c:	32 d2                	xor    %dl,%dl
  40312e:	eb 17                	jmp    0x403147
  403130:	0f b6 c8             	movzbl %al,%ecx
  403133:	8a d0                	mov    %al,%dl
  403135:	8b c1                	mov    %ecx,%eax
  403137:	83 e1 07             	and    $0x7,%ecx
  40313a:	b3 01                	mov    $0x1,%bl
  40313c:	c1 e8 03             	shr    $0x3,%eax
  40313f:	d2 e3                	shl    %cl,%bl
  403141:	8d 44 05 dc          	lea    -0x24(%ebp,%eax,1),%eax
  403145:	08 18                	or     %bl,(%eax)
  403147:	8a 06                	mov    (%esi),%al
  403149:	3c 5d                	cmp    $0x5d,%al
  40314b:	75 9c                	jne    0x4030e9
  40314d:	84 c0                	test   %al,%al
  40314f:	0f 84 1e 05 00 00    	je     0x403673
  403155:	89 b5 48 fe ff ff    	mov    %esi,-0x1b8(%ebp)
  40315b:	8b b5 44 fe ff ff    	mov    -0x1bc(%ebp),%esi
  403161:	e9 ab fd ff ff       	jmp    0x402f11
  403166:	83 bd 78 fe ff ff 2b 	cmpl   $0x2b,-0x188(%ebp)
  40316d:	75 27                	jne    0x403196
  40316f:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  403175:	75 08                	jne    0x40317f
  403177:	85 c9                	test   %ecx,%ecx
  403179:	74 04                	je     0x40317f
  40317b:	b3 01                	mov    $0x1,%bl
  40317d:	eb 17                	jmp    0x403196
  40317f:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  403185:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  40318b:	e8 43 f5 ff ff       	call   0x4026d3
  403190:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  403196:	6a 30                	push   $0x30
  403198:	5e                   	pop    %esi
  403199:	39 b5 78 fe ff ff    	cmp    %esi,-0x188(%ebp)
  40319f:	0f 85 78 01 00 00    	jne    0x40331d
  4031a5:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  4031ab:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  4031b1:	e8 1d f5 ff ff       	call   0x4026d3
  4031b6:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  4031bc:	3c 78                	cmp    $0x78,%al
  4031be:	74 58                	je     0x403218
  4031c0:	3c 58                	cmp    $0x58,%al
  4031c2:	74 54                	je     0x403218
  4031c4:	83 bd 5c fe ff ff 78 	cmpl   $0x78,-0x1a4(%ebp)
  4031cb:	c7 85 58 fe ff ff 01 	movl   $0x1,-0x1a8(%ebp)
  4031d2:	00 00 00 
  4031d5:	74 22                	je     0x4031f9
  4031d7:	83 bd 4c fe ff ff 00 	cmpl   $0x0,-0x1b4(%ebp)
  4031de:	74 0a                	je     0x4031ea
  4031e0:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  4031e6:	75 02                	jne    0x4031ea
  4031e8:	fe c3                	inc    %bl
  4031ea:	c7 85 5c fe ff ff 6f 	movl   $0x6f,-0x1a4(%ebp)
  4031f1:	00 00 00 
  4031f4:	e9 24 01 00 00       	jmp    0x40331d
  4031f9:	ff b5 64 fe ff ff    	pushl  -0x19c(%ebp)
  4031ff:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  403205:	50                   	push   %eax
  403206:	e8 de f4 ff ff       	call   0x4026e9
  40320b:	59                   	pop    %ecx
  40320c:	59                   	pop    %ecx
  40320d:	89 b5 78 fe ff ff    	mov    %esi,-0x188(%ebp)
  403213:	e9 05 01 00 00       	jmp    0x40331d
  403218:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  40321e:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  403224:	e8 aa f4 ff ff       	call   0x4026d3
  403229:	83 bd 4c fe ff ff 00 	cmpl   $0x0,-0x1b4(%ebp)
  403230:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  403236:	74 12                	je     0x40324a
  403238:	83 ad 6c fe ff ff 02 	subl   $0x2,-0x194(%ebp)
  40323f:	83 bd 6c fe ff ff 01 	cmpl   $0x1,-0x194(%ebp)
  403246:	7d 02                	jge    0x40324a
  403248:	fe c3                	inc    %bl
  40324a:	c7 85 5c fe ff ff 78 	movl   $0x78,-0x1a4(%ebp)
  403251:	00 00 00 
  403254:	e9 c4 00 00 00       	jmp    0x40331d
  403259:	88 06                	mov    %al,(%esi)
  40325b:	46                   	inc    %esi
  40325c:	89 b5 44 fe ff ff    	mov    %esi,-0x1bc(%ebp)
  403262:	e9 ca fc ff ff       	jmp    0x402f31
  403267:	ff 85 40 fe ff ff    	incl   -0x1c0(%ebp)
  40326d:	e9 bf fc ff ff       	jmp    0x402f31
  403272:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  403278:	57                   	push   %edi
  403279:	50                   	push   %eax
  40327a:	e8 6a f4 ff ff       	call   0x4026e9
  40327f:	59                   	pop    %ecx
  403280:	59                   	pop    %ecx
  403281:	39 b5 40 fe ff ff    	cmp    %esi,-0x1c0(%ebp)
  403287:	0f 84 e6 03 00 00    	je     0x403673
  40328d:	80 bd 6a fe ff ff 00 	cmpb   $0x0,-0x196(%ebp)
  403294:	0f 85 12 03 00 00    	jne    0x4035ac
  40329a:	ff 85 3c fe ff ff    	incl   -0x1c4(%ebp)
  4032a0:	83 bd 5c fe ff ff 63 	cmpl   $0x63,-0x1a4(%ebp)
  4032a7:	0f 84 ff 02 00 00    	je     0x4035ac
  4032ad:	80 bd 62 fe ff ff 00 	cmpb   $0x0,-0x19e(%ebp)
  4032b4:	74 10                	je     0x4032c6
  4032b6:	8b 8d 44 fe ff ff    	mov    -0x1bc(%ebp),%ecx
  4032bc:	33 c0                	xor    %eax,%eax
  4032be:	66 89 01             	mov    %ax,(%ecx)
  4032c1:	e9 e6 02 00 00       	jmp    0x4035ac
  4032c6:	8b 85 44 fe ff ff    	mov    -0x1bc(%ebp),%eax
  4032cc:	c6 00 00             	movb   $0x0,(%eax)
  4032cf:	e9 d8 02 00 00       	jmp    0x4035ac
  4032d4:	c6 85 6b fe ff ff 01 	movb   $0x1,-0x195(%ebp)
  4032db:	83 bd 78 fe ff ff 2d 	cmpl   $0x2d,-0x188(%ebp)
  4032e2:	75 09                	jne    0x4032ed
  4032e4:	c6 85 60 fe ff ff 01 	movb   $0x1,-0x1a0(%ebp)
  4032eb:	eb 09                	jmp    0x4032f6
  4032ed:	83 bd 78 fe ff ff 2b 	cmpl   $0x2b,-0x188(%ebp)
  4032f4:	75 27                	jne    0x40331d
  4032f6:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  4032fc:	75 08                	jne    0x403306
  4032fe:	85 c9                	test   %ecx,%ecx
  403300:	74 04                	je     0x403306
  403302:	b3 01                	mov    $0x1,%bl
  403304:	eb 17                	jmp    0x40331d
  403306:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  40330c:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  403312:	e8 bc f3 ff ff       	call   0x4026d3
  403317:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  40331d:	83 bd 28 fe ff ff 00 	cmpl   $0x0,-0x1d8(%ebp)
  403324:	0f 84 4a 01 00 00    	je     0x403474
  40332a:	84 db                	test   %bl,%bl
  40332c:	0f 85 0b 01 00 00    	jne    0x40343d
  403332:	83 bd 5c fe ff ff 78 	cmpl   $0x78,-0x1a4(%ebp)
  403339:	74 65                	je     0x4033a0
  40333b:	83 bd 5c fe ff ff 70 	cmpl   $0x70,-0x1a4(%ebp)
  403342:	74 5c                	je     0x4033a0
  403344:	0f b6 85 78 fe ff ff 	movzbl -0x188(%ebp),%eax
  40334b:	50                   	push   %eax
  40334c:	e8 75 33 00 00       	call   0x4066c6
  403351:	59                   	pop    %ecx
  403352:	85 c0                	test   %eax,%eax
  403354:	0f 84 ca 00 00 00    	je     0x403424
  40335a:	83 bd 5c fe ff ff 6f 	cmpl   $0x6f,-0x1a4(%ebp)
  403361:	75 22                	jne    0x403385
  403363:	83 bd 78 fe ff ff 38 	cmpl   $0x38,-0x188(%ebp)
  40336a:	0f 8d b4 00 00 00    	jge    0x403424
  403370:	8b b5 34 fe ff ff    	mov    -0x1cc(%ebp),%esi
  403376:	8b bd 38 fe ff ff    	mov    -0x1c8(%ebp),%edi
  40337c:	0f a4 f7 03          	shld   $0x3,%esi,%edi
  403380:	c1 e6 03             	shl    $0x3,%esi
  403383:	eb 52                	jmp    0x4033d7
  403385:	6a 00                	push   $0x0
  403387:	6a 0a                	push   $0xa
  403389:	ff b5 38 fe ff ff    	pushl  -0x1c8(%ebp)
  40338f:	ff b5 34 fe ff ff    	pushl  -0x1cc(%ebp)
  403395:	e8 b6 37 00 00       	call   0x406b50
  40339a:	8b f0                	mov    %eax,%esi
  40339c:	8b fa                	mov    %edx,%edi
  40339e:	eb 37                	jmp    0x4033d7
  4033a0:	0f b6 85 78 fe ff ff 	movzbl -0x188(%ebp),%eax
  4033a7:	50                   	push   %eax
  4033a8:	e8 9d 33 00 00       	call   0x40674a
  4033ad:	59                   	pop    %ecx
  4033ae:	85 c0                	test   %eax,%eax
  4033b0:	74 72                	je     0x403424
  4033b2:	8b b5 34 fe ff ff    	mov    -0x1cc(%ebp),%esi
  4033b8:	8b bd 38 fe ff ff    	mov    -0x1c8(%ebp),%edi
  4033be:	ff b5 78 fe ff ff    	pushl  -0x188(%ebp)
  4033c4:	0f a4 f7 04          	shld   $0x4,%esi,%edi
  4033c8:	c1 e6 04             	shl    $0x4,%esi
  4033cb:	e8 e3 f2 ff ff       	call   0x4026b3
  4033d0:	59                   	pop    %ecx
  4033d1:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  4033d7:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
  4033dd:	ff 85 58 fe ff ff    	incl   -0x1a8(%ebp)
  4033e3:	83 c0 d0             	add    $0xffffffd0,%eax
  4033e6:	99                   	cltd   
  4033e7:	03 f0                	add    %eax,%esi
  4033e9:	13 fa                	adc    %edx,%edi
  4033eb:	83 bd 4c fe ff ff 00 	cmpl   $0x0,-0x1b4(%ebp)
  4033f2:	89 b5 34 fe ff ff    	mov    %esi,-0x1cc(%ebp)
  4033f8:	89 bd 38 fe ff ff    	mov    %edi,-0x1c8(%ebp)
  4033fe:	74 08                	je     0x403408
  403400:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  403406:	74 35                	je     0x40343d
  403408:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  40340e:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  403414:	e8 ba f2 ff ff       	call   0x4026d3
  403419:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  40341f:	e9 0e ff ff ff       	jmp    0x403332
  403424:	ff b5 64 fe ff ff    	pushl  -0x19c(%ebp)
  40342a:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  403430:	ff b5 78 fe ff ff    	pushl  -0x188(%ebp)
  403436:	e8 ae f2 ff ff       	call   0x4026e9
  40343b:	59                   	pop    %ecx
  40343c:	59                   	pop    %ecx
  40343d:	80 bd 60 fe ff ff 00 	cmpb   $0x0,-0x1a0(%ebp)
  403444:	8b bd 40 fe ff ff    	mov    -0x1c0(%ebp),%edi
  40344a:	0f 84 fe 00 00 00    	je     0x40354e
  403450:	8b 85 34 fe ff ff    	mov    -0x1cc(%ebp),%eax
  403456:	8b 8d 38 fe ff ff    	mov    -0x1c8(%ebp),%ecx
  40345c:	f7 d8                	neg    %eax
  40345e:	83 d1 00             	adc    $0x0,%ecx
  403461:	f7 d9                	neg    %ecx
  403463:	89 85 34 fe ff ff    	mov    %eax,-0x1cc(%ebp)
  403469:	89 8d 38 fe ff ff    	mov    %ecx,-0x1c8(%ebp)
  40346f:	e9 da 00 00 00       	jmp    0x40354e
  403474:	8b bd 40 fe ff ff    	mov    -0x1c0(%ebp),%edi
  40347a:	84 db                	test   %bl,%bl
  40347c:	0f 85 c1 00 00 00    	jne    0x403543
  403482:	83 bd 5c fe ff ff 78 	cmpl   $0x78,-0x1a4(%ebp)
  403489:	74 3b                	je     0x4034c6
  40348b:	83 bd 5c fe ff ff 70 	cmpl   $0x70,-0x1a4(%ebp)
  403492:	74 32                	je     0x4034c6
  403494:	0f b6 85 78 fe ff ff 	movzbl -0x188(%ebp),%eax
  40349b:	50                   	push   %eax
  40349c:	e8 25 32 00 00       	call   0x4066c6
  4034a1:	59                   	pop    %ecx
  4034a2:	85 c0                	test   %eax,%eax
  4034a4:	0f 84 80 00 00 00    	je     0x40352a
  4034aa:	83 bd 5c fe ff ff 6f 	cmpl   $0x6f,-0x1a4(%ebp)
  4034b1:	75 0e                	jne    0x4034c1
  4034b3:	83 bd 78 fe ff ff 38 	cmpl   $0x38,-0x188(%ebp)
  4034ba:	7d 6e                	jge    0x40352a
  4034bc:	c1 e7 03             	shl    $0x3,%edi
  4034bf:	eb 2c                	jmp    0x4034ed
  4034c1:	6b ff 0a             	imul   $0xa,%edi,%edi
  4034c4:	eb 27                	jmp    0x4034ed
  4034c6:	0f b6 85 78 fe ff ff 	movzbl -0x188(%ebp),%eax
  4034cd:	50                   	push   %eax
  4034ce:	e8 77 32 00 00       	call   0x40674a
  4034d3:	59                   	pop    %ecx
  4034d4:	85 c0                	test   %eax,%eax
  4034d6:	74 52                	je     0x40352a
  4034d8:	ff b5 78 fe ff ff    	pushl  -0x188(%ebp)
  4034de:	c1 e7 04             	shl    $0x4,%edi
  4034e1:	e8 cd f1 ff ff       	call   0x4026b3
  4034e6:	59                   	pop    %ecx
  4034e7:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  4034ed:	ff 85 58 fe ff ff    	incl   -0x1a8(%ebp)
  4034f3:	83 bd 4c fe ff ff 00 	cmpl   $0x0,-0x1b4(%ebp)
  4034fa:	8b 85 78 fe ff ff    	mov    -0x188(%ebp),%eax
  403500:	8d 7c 07 d0          	lea    -0x30(%edi,%eax,1),%edi
  403504:	74 08                	je     0x40350e
  403506:	ff 8d 6c fe ff ff    	decl   -0x194(%ebp)
  40350c:	74 35                	je     0x403543
  40350e:	8b 95 64 fe ff ff    	mov    -0x19c(%ebp),%edx
  403514:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  40351a:	e8 b4 f1 ff ff       	call   0x4026d3
  40351f:	89 85 78 fe ff ff    	mov    %eax,-0x188(%ebp)
  403525:	e9 58 ff ff ff       	jmp    0x403482
  40352a:	ff b5 64 fe ff ff    	pushl  -0x19c(%ebp)
  403530:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  403536:	ff b5 78 fe ff ff    	pushl  -0x188(%ebp)
  40353c:	e8 a8 f1 ff ff       	call   0x4026e9
  403541:	59                   	pop    %ecx
  403542:	59                   	pop    %ecx
  403543:	80 bd 60 fe ff ff 00 	cmpb   $0x0,-0x1a0(%ebp)
  40354a:	74 02                	je     0x40354e
  40354c:	f7 df                	neg    %edi
  40354e:	83 bd 5c fe ff ff 46 	cmpl   $0x46,-0x1a4(%ebp)
  403555:	75 07                	jne    0x40355e
  403557:	83 a5 58 fe ff ff 00 	andl   $0x0,-0x1a8(%ebp)
  40355e:	83 bd 58 fe ff ff 00 	cmpl   $0x0,-0x1a8(%ebp)
  403565:	0f 84 08 01 00 00    	je     0x403673
  40356b:	80 bd 6a fe ff ff 00 	cmpb   $0x0,-0x196(%ebp)
  403572:	75 38                	jne    0x4035ac
  403574:	ff 85 3c fe ff ff    	incl   -0x1c4(%ebp)
  40357a:	8b b5 44 fe ff ff    	mov    -0x1bc(%ebp),%esi
  403580:	83 bd 28 fe ff ff 00 	cmpl   $0x0,-0x1d8(%ebp)
  403587:	74 13                	je     0x40359c
  403589:	8b 85 34 fe ff ff    	mov    -0x1cc(%ebp),%eax
  40358f:	89 06                	mov    %eax,(%esi)
  403591:	8b 85 38 fe ff ff    	mov    -0x1c8(%ebp),%eax
  403597:	89 46 04             	mov    %eax,0x4(%esi)
  40359a:	eb 10                	jmp    0x4035ac
  40359c:	80 bd 6b fe ff ff 00 	cmpb   $0x0,-0x195(%ebp)
  4035a3:	74 04                	je     0x4035a9
  4035a5:	89 3e                	mov    %edi,(%esi)
  4035a7:	eb 03                	jmp    0x4035ac
  4035a9:	66 89 3e             	mov    %di,(%esi)
  4035ac:	8b bd 48 fe ff ff    	mov    -0x1b8(%ebp),%edi
  4035b2:	fe 85 63 fe ff ff    	incb   -0x19d(%ebp)
  4035b8:	47                   	inc    %edi
  4035b9:	89 bd 48 fe ff ff    	mov    %edi,-0x1b8(%ebp)
  4035bf:	eb 60                	jmp    0x403621
  4035c1:	3c 25                	cmp    $0x25,%al
  4035c3:	75 0a                	jne    0x4035cf
  4035c5:	8d 47 01             	lea    0x1(%edi),%eax
  4035c8:	80 38 25             	cmpb   $0x25,(%eax)
  4035cb:	75 02                	jne    0x4035cf
  4035cd:	8b f8                	mov    %eax,%edi
  4035cf:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  4035d5:	8b d6                	mov    %esi,%edx
  4035d7:	e8 f7 f0 ff ff       	call   0x4026d3
  4035dc:	8b d8                	mov    %eax,%ebx
  4035de:	0f b6 07             	movzbl (%edi),%eax
  4035e1:	47                   	inc    %edi
  4035e2:	89 9d 78 fe ff ff    	mov    %ebx,-0x188(%ebp)
  4035e8:	89 bd 48 fe ff ff    	mov    %edi,-0x1b8(%ebp)
  4035ee:	3b c3                	cmp    %ebx,%eax
  4035f0:	75 6c                	jne    0x40365e
  4035f2:	0f b6 c3             	movzbl %bl,%eax
  4035f5:	50                   	push   %eax
  4035f6:	e8 31 29 00 00       	call   0x405f2c
  4035fb:	59                   	pop    %ecx
  4035fc:	85 c0                	test   %eax,%eax
  4035fe:	74 21                	je     0x403621
  403600:	ff 85 74 fe ff ff    	incl   -0x18c(%ebp)
  403606:	8b d6                	mov    %esi,%edx
  403608:	e8 c6 f0 ff ff       	call   0x4026d3
  40360d:	0f b6 0f             	movzbl (%edi),%ecx
  403610:	47                   	inc    %edi
  403611:	89 bd 48 fe ff ff    	mov    %edi,-0x1b8(%ebp)
  403617:	3b c8                	cmp    %eax,%ecx
  403619:	75 47                	jne    0x403662
  40361b:	ff 8d 74 fe ff ff    	decl   -0x18c(%ebp)
  403621:	83 bd 78 fe ff ff ff 	cmpl   $0xffffffff,-0x188(%ebp)
  403628:	75 13                	jne    0x40363d
  40362a:	80 3f 25             	cmpb   $0x25,(%edi)
  40362d:	75 44                	jne    0x403673
  40362f:	8b 85 48 fe ff ff    	mov    -0x1b8(%ebp),%eax
  403635:	80 78 01 6e          	cmpb   $0x6e,0x1(%eax)
  403639:	75 38                	jne    0x403673
  40363b:	8b f8                	mov    %eax,%edi
  40363d:	8a 07                	mov    (%edi),%al
  40363f:	84 c0                	test   %al,%al
  403641:	0f 85 09 f2 ff ff    	jne    0x402850
  403647:	eb 2a                	jmp    0x403673
  403649:	ff b5 64 fe ff ff    	pushl  -0x19c(%ebp)
  40364f:	ff b5 78 fe ff ff    	pushl  -0x188(%ebp)
  403655:	e8 8f f0 ff ff       	call   0x4026e9
  40365a:	59                   	pop    %ecx
  40365b:	59                   	pop    %ecx
  40365c:	eb 15                	jmp    0x403673
  40365e:	56                   	push   %esi
  40365f:	53                   	push   %ebx
  403660:	eb f3                	jmp    0x403655
  403662:	56                   	push   %esi
  403663:	50                   	push   %eax
  403664:	e8 80 f0 ff ff       	call   0x4026e9
  403669:	56                   	push   %esi
  40366a:	53                   	push   %ebx
  40366b:	e8 79 f0 ff ff       	call   0x4026e9
  403670:	83 c4 10             	add    $0x10,%esp
  403673:	83 bd 30 fe ff ff 01 	cmpl   $0x1,-0x1d0(%ebp)
  40367a:	75 0c                	jne    0x403688
  40367c:	ff b5 54 fe ff ff    	pushl  -0x1ac(%ebp)
  403682:	e8 c7 15 00 00       	call   0x404c4e
  403687:	59                   	pop    %ecx
  403688:	83 bd 78 fe ff ff ff 	cmpl   $0xffffffff,-0x188(%ebp)
  40368f:	75 2a                	jne    0x4036bb
  403691:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
  403697:	85 c0                	test   %eax,%eax
  403699:	75 0b                	jne    0x4036a6
  40369b:	38 85 63 fe ff ff    	cmp    %al,-0x19d(%ebp)
  4036a1:	75 03                	jne    0x4036a6
  4036a3:	83 c8 ff             	or     $0xffffffff,%eax
  4036a6:	80 bd 14 fe ff ff 00 	cmpb   $0x0,-0x1ec(%ebp)
  4036ad:	74 25                	je     0x4036d4
  4036af:	8b 8d 10 fe ff ff    	mov    -0x1f0(%ebp),%ecx
  4036b5:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  4036b9:	eb 19                	jmp    0x4036d4
  4036bb:	80 bd 14 fe ff ff 00 	cmpb   $0x0,-0x1ec(%ebp)
  4036c2:	74 0a                	je     0x4036ce
  4036c4:	8b 85 10 fe ff ff    	mov    -0x1f0(%ebp),%eax
  4036ca:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  4036ce:	8b 85 3c fe ff ff    	mov    -0x1c4(%ebp),%eax
  4036d4:	5b                   	pop    %ebx
  4036d5:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  4036d8:	5f                   	pop    %edi
  4036d9:	33 cd                	xor    %ebp,%ecx
  4036db:	5e                   	pop    %esi
  4036dc:	e8 5e 28 00 00       	call   0x405f3f
  4036e1:	c9                   	leave  
  4036e2:	c3                   	ret    
  4036e3:	8b ff                	mov    %edi,%edi
  4036e5:	55                   	push   %ebp
  4036e6:	8b ec                	mov    %esp,%ebp
  4036e8:	8b 45 08             	mov    0x8(%ebp),%eax
  4036eb:	8b 00                	mov    (%eax),%eax
  4036ed:	81 38 63 73 6d e0    	cmpl   $0xe06d7363,(%eax)
  4036f3:	75 2a                	jne    0x40371f
  4036f5:	83 78 10 03          	cmpl   $0x3,0x10(%eax)
  4036f9:	75 24                	jne    0x40371f
  4036fb:	8b 40 14             	mov    0x14(%eax),%eax
  4036fe:	3d 20 05 93 19       	cmp    $0x19930520,%eax
  403703:	74 15                	je     0x40371a
  403705:	3d 21 05 93 19       	cmp    $0x19930521,%eax
  40370a:	74 0e                	je     0x40371a
  40370c:	3d 22 05 93 19       	cmp    $0x19930522,%eax
  403711:	74 07                	je     0x40371a
  403713:	3d 00 40 99 01       	cmp    $0x1994000,%eax
  403718:	75 05                	jne    0x40371f
  40371a:	e8 65 34 00 00       	call   0x406b84
  40371f:	33 c0                	xor    %eax,%eax
  403721:	5d                   	pop    %ebp
  403722:	c2 04 00             	ret    $0x4
  403725:	68 e3 36 40 00       	push   $0x4036e3
  40372a:	ff 15 18 c0 40 00    	call   *0x40c018
  403730:	33 c0                	xor    %eax,%eax
  403732:	c3                   	ret    
  403733:	8b ff                	mov    %edi,%edi
  403735:	55                   	push   %ebp
  403736:	8b ec                	mov    %esp,%ebp
  403738:	57                   	push   %edi
  403739:	bf e8 03 00 00       	mov    $0x3e8,%edi
  40373e:	57                   	push   %edi
  40373f:	ff 15 24 c0 40 00    	call   *0x40c024
  403745:	ff 75 08             	pushl  0x8(%ebp)
  403748:	ff 15 20 c0 40 00    	call   *0x40c020
  40374e:	81 c7 e8 03 00 00    	add    $0x3e8,%edi
  403754:	81 ff 60 ea 00 00    	cmp    $0xea60,%edi
  40375a:	77 04                	ja     0x403760
  40375c:	85 c0                	test   %eax,%eax
  40375e:	74 de                	je     0x40373e
  403760:	5f                   	pop    %edi
  403761:	5d                   	pop    %ebp
  403762:	c3                   	ret    
  403763:	8b ff                	mov    %edi,%edi
  403765:	55                   	push   %ebp
  403766:	8b ec                	mov    %esp,%ebp
  403768:	e8 a9 04 00 00       	call   0x403c16
  40376d:	ff 75 08             	pushl  0x8(%ebp)
  403770:	e8 f6 02 00 00       	call   0x403a6b
  403775:	ff 35 08 e4 40 00    	pushl  0x40e408
  40377b:	e8 b5 0d 00 00       	call   0x404535
  403780:	68 ff 00 00 00       	push   $0xff
  403785:	ff d0                	call   *%eax
  403787:	83 c4 0c             	add    $0xc,%esp
  40378a:	5d                   	pop    %ebp
  40378b:	c3                   	ret    
  40378c:	8b ff                	mov    %edi,%edi
  40378e:	55                   	push   %ebp
  40378f:	8b ec                	mov    %esp,%ebp
  403791:	68 e4 c1 40 00       	push   $0x40c1e4
  403796:	ff 15 20 c0 40 00    	call   *0x40c020
  40379c:	85 c0                	test   %eax,%eax
  40379e:	74 15                	je     0x4037b5
  4037a0:	68 d4 c1 40 00       	push   $0x40c1d4
  4037a5:	50                   	push   %eax
  4037a6:	ff 15 28 c0 40 00    	call   *0x40c028
  4037ac:	85 c0                	test   %eax,%eax
  4037ae:	74 05                	je     0x4037b5
  4037b0:	ff 75 08             	pushl  0x8(%ebp)
  4037b3:	ff d0                	call   *%eax
  4037b5:	5d                   	pop    %ebp
  4037b6:	c3                   	ret    
  4037b7:	8b ff                	mov    %edi,%edi
  4037b9:	55                   	push   %ebp
  4037ba:	8b ec                	mov    %esp,%ebp
  4037bc:	ff 75 08             	pushl  0x8(%ebp)
  4037bf:	e8 c8 ff ff ff       	call   0x40378c
  4037c4:	59                   	pop    %ecx
  4037c5:	ff 75 08             	pushl  0x8(%ebp)
  4037c8:	ff 15 2c c0 40 00    	call   *0x40c02c
  4037ce:	cc                   	int3   
  4037cf:	6a 08                	push   $0x8
  4037d1:	e8 b4 18 00 00       	call   0x40508a
  4037d6:	59                   	pop    %ecx
  4037d7:	c3                   	ret    
  4037d8:	6a 08                	push   $0x8
  4037da:	e8 d1 17 00 00       	call   0x404fb0
  4037df:	59                   	pop    %ecx
  4037e0:	c3                   	ret    
  4037e1:	8b ff                	mov    %edi,%edi
  4037e3:	55                   	push   %ebp
  4037e4:	8b ec                	mov    %esp,%ebp
  4037e6:	56                   	push   %esi
  4037e7:	8b f0                	mov    %eax,%esi
  4037e9:	eb 0b                	jmp    0x4037f6
  4037eb:	8b 06                	mov    (%esi),%eax
  4037ed:	85 c0                	test   %eax,%eax
  4037ef:	74 02                	je     0x4037f3
  4037f1:	ff d0                	call   *%eax
  4037f3:	83 c6 04             	add    $0x4,%esi
  4037f6:	3b 75 08             	cmp    0x8(%ebp),%esi
  4037f9:	72 f0                	jb     0x4037eb
  4037fb:	5e                   	pop    %esi
  4037fc:	5d                   	pop    %ebp
  4037fd:	c3                   	ret    
  4037fe:	8b ff                	mov    %edi,%edi
  403800:	55                   	push   %ebp
  403801:	8b ec                	mov    %esp,%ebp
  403803:	56                   	push   %esi
  403804:	8b 75 08             	mov    0x8(%ebp),%esi
  403807:	33 c0                	xor    %eax,%eax
  403809:	eb 0f                	jmp    0x40381a
  40380b:	85 c0                	test   %eax,%eax
  40380d:	75 10                	jne    0x40381f
  40380f:	8b 0e                	mov    (%esi),%ecx
  403811:	85 c9                	test   %ecx,%ecx
  403813:	74 02                	je     0x403817
  403815:	ff d1                	call   *%ecx
  403817:	83 c6 04             	add    $0x4,%esi
  40381a:	3b 75 0c             	cmp    0xc(%ebp),%esi
  40381d:	72 ec                	jb     0x40380b
  40381f:	5e                   	pop    %esi
  403820:	5d                   	pop    %ebp
  403821:	c3                   	ret    
  403822:	8b ff                	mov    %edi,%edi
  403824:	55                   	push   %ebp
  403825:	8b ec                	mov    %esp,%ebp
  403827:	83 3d b0 fb 40 00 00 	cmpl   $0x0,0x40fbb0
  40382e:	74 19                	je     0x403849
  403830:	68 b0 fb 40 00       	push   $0x40fbb0
  403835:	e8 16 2a 00 00       	call   0x406250
  40383a:	59                   	pop    %ecx
  40383b:	85 c0                	test   %eax,%eax
  40383d:	74 0a                	je     0x403849
  40383f:	ff 75 08             	pushl  0x8(%ebp)
  403842:	ff 15 b0 fb 40 00    	call   *0x40fbb0
  403848:	59                   	pop    %ecx
  403849:	e8 71 24 00 00       	call   0x405cbf
  40384e:	68 34 c1 40 00       	push   $0x40c134
  403853:	68 1c c1 40 00       	push   $0x40c11c
  403858:	e8 a1 ff ff ff       	call   0x4037fe
  40385d:	59                   	pop    %ecx
  40385e:	59                   	pop    %ecx
  40385f:	85 c0                	test   %eax,%eax
  403861:	75 42                	jne    0x4038a5
  403863:	68 94 44 40 00       	push   $0x404494
  403868:	e8 88 34 00 00       	call   0x406cf5
  40386d:	b8 14 c1 40 00       	mov    $0x40c114,%eax
  403872:	c7 04 24 18 c1 40 00 	movl   $0x40c118,(%esp)
  403879:	e8 63 ff ff ff       	call   0x4037e1
  40387e:	83 3d b4 fb 40 00 00 	cmpl   $0x0,0x40fbb4
  403885:	59                   	pop    %ecx
  403886:	74 1b                	je     0x4038a3
  403888:	68 b4 fb 40 00       	push   $0x40fbb4
  40388d:	e8 be 29 00 00       	call   0x406250
  403892:	59                   	pop    %ecx
  403893:	85 c0                	test   %eax,%eax
  403895:	74 0c                	je     0x4038a3
  403897:	6a 00                	push   $0x0
  403899:	6a 02                	push   $0x2
  40389b:	6a 00                	push   $0x0
  40389d:	ff 15 b4 fb 40 00    	call   *0x40fbb4
  4038a3:	33 c0                	xor    %eax,%eax
  4038a5:	5d                   	pop    %ebp
  4038a6:	c3                   	ret    
  4038a7:	6a 18                	push   $0x18
  4038a9:	68 40 d4 40 00       	push   $0x40d440
  4038ae:	e8 bd eb ff ff       	call   0x402470
  4038b3:	6a 08                	push   $0x8
  4038b5:	e8 d0 17 00 00       	call   0x40508a
  4038ba:	59                   	pop    %ecx
  4038bb:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  4038bf:	33 db                	xor    %ebx,%ebx
  4038c1:	43                   	inc    %ebx
  4038c2:	39 1d 50 f0 40 00    	cmp    %ebx,0x40f050
  4038c8:	0f 84 c5 00 00 00    	je     0x403993
  4038ce:	89 1d 4c f0 40 00    	mov    %ebx,0x40f04c
  4038d4:	8a 45 10             	mov    0x10(%ebp),%al
  4038d7:	a2 48 f0 40 00       	mov    %al,0x40f048
  4038dc:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
  4038e0:	0f 85 9d 00 00 00    	jne    0x403983
  4038e6:	ff 35 a8 fb 40 00    	pushl  0x40fba8
  4038ec:	e8 44 0c 00 00       	call   0x404535
  4038f1:	59                   	pop    %ecx
  4038f2:	8b f8                	mov    %eax,%edi
  4038f4:	89 7d d8             	mov    %edi,-0x28(%ebp)
  4038f7:	85 ff                	test   %edi,%edi
  4038f9:	74 78                	je     0x403973
  4038fb:	ff 35 a4 fb 40 00    	pushl  0x40fba4
  403901:	e8 2f 0c 00 00       	call   0x404535
  403906:	59                   	pop    %ecx
  403907:	8b f0                	mov    %eax,%esi
  403909:	89 75 dc             	mov    %esi,-0x24(%ebp)
  40390c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
  40390f:	89 75 e0             	mov    %esi,-0x20(%ebp)
  403912:	83 ee 04             	sub    $0x4,%esi
  403915:	89 75 dc             	mov    %esi,-0x24(%ebp)
  403918:	3b f7                	cmp    %edi,%esi
  40391a:	72 57                	jb     0x403973
  40391c:	e8 0b 0c 00 00       	call   0x40452c
  403921:	39 06                	cmp    %eax,(%esi)
  403923:	74 ed                	je     0x403912
  403925:	3b f7                	cmp    %edi,%esi
  403927:	72 4a                	jb     0x403973
  403929:	ff 36                	pushl  (%esi)
  40392b:	e8 05 0c 00 00       	call   0x404535
  403930:	8b f8                	mov    %eax,%edi
  403932:	e8 f5 0b 00 00       	call   0x40452c
  403937:	89 06                	mov    %eax,(%esi)
  403939:	ff d7                	call   *%edi
  40393b:	ff 35 a8 fb 40 00    	pushl  0x40fba8
  403941:	e8 ef 0b 00 00       	call   0x404535
  403946:	8b f8                	mov    %eax,%edi
  403948:	ff 35 a4 fb 40 00    	pushl  0x40fba4
  40394e:	e8 e2 0b 00 00       	call   0x404535
  403953:	83 c4 0c             	add    $0xc,%esp
  403956:	39 7d e4             	cmp    %edi,-0x1c(%ebp)
  403959:	75 05                	jne    0x403960
  40395b:	39 45 e0             	cmp    %eax,-0x20(%ebp)
  40395e:	74 0e                	je     0x40396e
  403960:	89 7d e4             	mov    %edi,-0x1c(%ebp)
  403963:	89 7d d8             	mov    %edi,-0x28(%ebp)
  403966:	89 45 e0             	mov    %eax,-0x20(%ebp)
  403969:	8b f0                	mov    %eax,%esi
  40396b:	89 75 dc             	mov    %esi,-0x24(%ebp)
  40396e:	8b 7d d8             	mov    -0x28(%ebp),%edi
  403971:	eb 9f                	jmp    0x403912
  403973:	68 44 c1 40 00       	push   $0x40c144
  403978:	b8 38 c1 40 00       	mov    $0x40c138,%eax
  40397d:	e8 5f fe ff ff       	call   0x4037e1
  403982:	59                   	pop    %ecx
  403983:	68 4c c1 40 00       	push   $0x40c14c
  403988:	b8 48 c1 40 00       	mov    $0x40c148,%eax
  40398d:	e8 4f fe ff ff       	call   0x4037e1
  403992:	59                   	pop    %ecx
  403993:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40399a:	e8 1f 00 00 00       	call   0x4039be
  40399f:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
  4039a3:	75 28                	jne    0x4039cd
  4039a5:	89 1d 50 f0 40 00    	mov    %ebx,0x40f050
  4039ab:	6a 08                	push   $0x8
  4039ad:	e8 fe 15 00 00       	call   0x404fb0
  4039b2:	59                   	pop    %ecx
  4039b3:	ff 75 08             	pushl  0x8(%ebp)
  4039b6:	e8 fc fd ff ff       	call   0x4037b7
  4039bb:	33 db                	xor    %ebx,%ebx
  4039bd:	43                   	inc    %ebx
  4039be:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
  4039c2:	74 08                	je     0x4039cc
  4039c4:	6a 08                	push   $0x8
  4039c6:	e8 e5 15 00 00       	call   0x404fb0
  4039cb:	59                   	pop    %ecx
  4039cc:	c3                   	ret    
  4039cd:	e8 e3 ea ff ff       	call   0x4024b5
  4039d2:	c3                   	ret    
  4039d3:	8b ff                	mov    %edi,%edi
  4039d5:	55                   	push   %ebp
  4039d6:	8b ec                	mov    %esp,%ebp
  4039d8:	6a 00                	push   $0x0
  4039da:	6a 00                	push   $0x0
  4039dc:	ff 75 08             	pushl  0x8(%ebp)
  4039df:	e8 c3 fe ff ff       	call   0x4038a7
  4039e4:	83 c4 0c             	add    $0xc,%esp
  4039e7:	5d                   	pop    %ebp
  4039e8:	c3                   	ret    
  4039e9:	8b ff                	mov    %edi,%edi
  4039eb:	55                   	push   %ebp
  4039ec:	8b ec                	mov    %esp,%ebp
  4039ee:	6a 00                	push   $0x0
  4039f0:	6a 01                	push   $0x1
  4039f2:	ff 75 08             	pushl  0x8(%ebp)
  4039f5:	e8 ad fe ff ff       	call   0x4038a7
  4039fa:	83 c4 0c             	add    $0xc,%esp
  4039fd:	5d                   	pop    %ebp
  4039fe:	c3                   	ret    
  4039ff:	6a 01                	push   $0x1
  403a01:	6a 00                	push   $0x0
  403a03:	6a 00                	push   $0x0
  403a05:	e8 9d fe ff ff       	call   0x4038a7
  403a0a:	83 c4 0c             	add    $0xc,%esp
  403a0d:	c3                   	ret    
  403a0e:	6a 01                	push   $0x1
  403a10:	6a 01                	push   $0x1
  403a12:	6a 00                	push   $0x0
  403a14:	e8 8e fe ff ff       	call   0x4038a7
  403a19:	83 c4 0c             	add    $0xc,%esp
  403a1c:	c3                   	ret    
  403a1d:	8b ff                	mov    %edi,%edi
  403a1f:	56                   	push   %esi
  403a20:	e8 07 0b 00 00       	call   0x40452c
  403a25:	8b f0                	mov    %eax,%esi
  403a27:	56                   	push   %esi
  403a28:	e8 7e 35 00 00       	call   0x406fab
  403a2d:	56                   	push   %esi
  403a2e:	e8 09 35 00 00       	call   0x406f3c
  403a33:	56                   	push   %esi
  403a34:	e8 4d e8 ff ff       	call   0x402286
  403a39:	56                   	push   %esi
  403a3a:	e8 ee 34 00 00       	call   0x406f2d
  403a3f:	56                   	push   %esi
  403a40:	e8 d9 34 00 00       	call   0x406f1e
  403a45:	56                   	push   %esi
  403a46:	e8 c1 32 00 00       	call   0x406d0c
  403a4b:	56                   	push   %esi
  403a4c:	e8 fe 01 00 00       	call   0x403c4f
  403a51:	56                   	push   %esi
  403a52:	e8 66 31 00 00       	call   0x406bbd
  403a57:	68 e9 39 40 00       	push   $0x4039e9
  403a5c:	e8 59 0a 00 00       	call   0x4044ba
  403a61:	83 c4 24             	add    $0x24,%esp
  403a64:	a3 08 e4 40 00       	mov    %eax,0x40e408
  403a69:	5e                   	pop    %esi
  403a6a:	c3                   	ret    
  403a6b:	8b ff                	mov    %edi,%edi
  403a6d:	55                   	push   %ebp
  403a6e:	8b ec                	mov    %esp,%ebp
  403a70:	51                   	push   %ecx
  403a71:	51                   	push   %ecx
  403a72:	53                   	push   %ebx
  403a73:	8b 5d 08             	mov    0x8(%ebp),%ebx
  403a76:	56                   	push   %esi
  403a77:	57                   	push   %edi
  403a78:	33 f6                	xor    %esi,%esi
  403a7a:	33 ff                	xor    %edi,%edi
  403a7c:	89 7d fc             	mov    %edi,-0x4(%ebp)
  403a7f:	3b 1c fd 10 e4 40 00 	cmp    0x40e410(,%edi,8),%ebx
  403a86:	74 09                	je     0x403a91
  403a88:	47                   	inc    %edi
  403a89:	89 7d fc             	mov    %edi,-0x4(%ebp)
  403a8c:	83 ff 17             	cmp    $0x17,%edi
  403a8f:	72 ee                	jb     0x403a7f
  403a91:	83 ff 17             	cmp    $0x17,%edi
  403a94:	0f 83 77 01 00 00    	jae    0x403c11
  403a9a:	6a 03                	push   $0x3
  403a9c:	e8 3b 38 00 00       	call   0x4072dc
  403aa1:	59                   	pop    %ecx
  403aa2:	83 f8 01             	cmp    $0x1,%eax
  403aa5:	0f 84 34 01 00 00    	je     0x403bdf
  403aab:	6a 03                	push   $0x3
  403aad:	e8 2a 38 00 00       	call   0x4072dc
  403ab2:	59                   	pop    %ecx
  403ab3:	85 c0                	test   %eax,%eax
  403ab5:	75 0d                	jne    0x403ac4
  403ab7:	83 3d 00 e0 40 00 01 	cmpl   $0x1,0x40e000
  403abe:	0f 84 1b 01 00 00    	je     0x403bdf
  403ac4:	81 fb fc 00 00 00    	cmp    $0xfc,%ebx
  403aca:	0f 84 41 01 00 00    	je     0x403c11
  403ad0:	68 a0 c7 40 00       	push   $0x40c7a0
  403ad5:	bb 14 03 00 00       	mov    $0x314,%ebx
  403ada:	53                   	push   %ebx
  403adb:	bf 58 f0 40 00       	mov    $0x40f058,%edi
  403ae0:	57                   	push   %edi
  403ae1:	e8 8e 37 00 00       	call   0x407274
  403ae6:	83 c4 0c             	add    $0xc,%esp
  403ae9:	85 c0                	test   %eax,%eax
  403aeb:	74 0d                	je     0x403afa
  403aed:	56                   	push   %esi
  403aee:	56                   	push   %esi
  403aef:	56                   	push   %esi
  403af0:	56                   	push   %esi
  403af1:	56                   	push   %esi
  403af2:	e8 9e e7 ff ff       	call   0x402295
  403af7:	83 c4 14             	add    $0x14,%esp
  403afa:	68 04 01 00 00       	push   $0x104
  403aff:	be 71 f0 40 00       	mov    $0x40f071,%esi
  403b04:	56                   	push   %esi
  403b05:	6a 00                	push   $0x0
  403b07:	c6 05 75 f1 40 00 00 	movb   $0x0,0x40f175
  403b0e:	ff 15 38 c0 40 00    	call   *0x40c038
  403b14:	85 c0                	test   %eax,%eax
  403b16:	75 26                	jne    0x403b3e
  403b18:	68 88 c7 40 00       	push   $0x40c788
  403b1d:	68 fb 02 00 00       	push   $0x2fb
  403b22:	56                   	push   %esi
  403b23:	e8 4c 37 00 00       	call   0x407274
  403b28:	83 c4 0c             	add    $0xc,%esp
  403b2b:	85 c0                	test   %eax,%eax
  403b2d:	74 0f                	je     0x403b3e
  403b2f:	33 c0                	xor    %eax,%eax
  403b31:	50                   	push   %eax
  403b32:	50                   	push   %eax
  403b33:	50                   	push   %eax
  403b34:	50                   	push   %eax
  403b35:	50                   	push   %eax
  403b36:	e8 5a e7 ff ff       	call   0x402295
  403b3b:	83 c4 14             	add    $0x14,%esp
  403b3e:	56                   	push   %esi
  403b3f:	e8 9c 21 00 00       	call   0x405ce0
  403b44:	40                   	inc    %eax
  403b45:	59                   	pop    %ecx
  403b46:	83 f8 3c             	cmp    $0x3c,%eax
  403b49:	76 38                	jbe    0x403b83
  403b4b:	56                   	push   %esi
  403b4c:	e8 8f 21 00 00       	call   0x405ce0
  403b51:	83 ee 3b             	sub    $0x3b,%esi
  403b54:	03 c6                	add    %esi,%eax
  403b56:	6a 03                	push   $0x3
  403b58:	b9 6c f3 40 00       	mov    $0x40f36c,%ecx
  403b5d:	68 84 c7 40 00       	push   $0x40c784
  403b62:	2b c8                	sub    %eax,%ecx
  403b64:	51                   	push   %ecx
  403b65:	50                   	push   %eax
  403b66:	e8 54 36 00 00       	call   0x4071bf
  403b6b:	83 c4 14             	add    $0x14,%esp
  403b6e:	85 c0                	test   %eax,%eax
  403b70:	74 11                	je     0x403b83
  403b72:	33 f6                	xor    %esi,%esi
  403b74:	56                   	push   %esi
  403b75:	56                   	push   %esi
  403b76:	56                   	push   %esi
  403b77:	56                   	push   %esi
  403b78:	56                   	push   %esi
  403b79:	e8 17 e7 ff ff       	call   0x402295
  403b7e:	83 c4 14             	add    $0x14,%esp
  403b81:	eb 02                	jmp    0x403b85
  403b83:	33 f6                	xor    %esi,%esi
  403b85:	68 80 c7 40 00       	push   $0x40c780
  403b8a:	53                   	push   %ebx
  403b8b:	57                   	push   %edi
  403b8c:	e8 ba 35 00 00       	call   0x40714b
  403b91:	83 c4 0c             	add    $0xc,%esp
  403b94:	85 c0                	test   %eax,%eax
  403b96:	74 0d                	je     0x403ba5
  403b98:	56                   	push   %esi
  403b99:	56                   	push   %esi
  403b9a:	56                   	push   %esi
  403b9b:	56                   	push   %esi
  403b9c:	56                   	push   %esi
  403b9d:	e8 f3 e6 ff ff       	call   0x402295
  403ba2:	83 c4 14             	add    $0x14,%esp
  403ba5:	8b 45 fc             	mov    -0x4(%ebp),%eax
  403ba8:	ff 34 c5 14 e4 40 00 	pushl  0x40e414(,%eax,8)
  403baf:	53                   	push   %ebx
  403bb0:	57                   	push   %edi
  403bb1:	e8 95 35 00 00       	call   0x40714b
  403bb6:	83 c4 0c             	add    $0xc,%esp
  403bb9:	85 c0                	test   %eax,%eax
  403bbb:	74 0d                	je     0x403bca
  403bbd:	56                   	push   %esi
  403bbe:	56                   	push   %esi
  403bbf:	56                   	push   %esi
  403bc0:	56                   	push   %esi
  403bc1:	56                   	push   %esi
  403bc2:	e8 ce e6 ff ff       	call   0x402295
  403bc7:	83 c4 14             	add    $0x14,%esp
  403bca:	68 10 20 01 00       	push   $0x12010
  403bcf:	68 58 c7 40 00       	push   $0x40c758
  403bd4:	57                   	push   %edi
  403bd5:	e8 08 34 00 00       	call   0x406fe2
  403bda:	83 c4 0c             	add    $0xc,%esp
  403bdd:	eb 32                	jmp    0x403c11
  403bdf:	6a f4                	push   $0xfffffff4
  403be1:	ff 15 34 c0 40 00    	call   *0x40c034
  403be7:	8b d8                	mov    %eax,%ebx
  403be9:	3b de                	cmp    %esi,%ebx
  403beb:	74 24                	je     0x403c11
  403bed:	83 fb ff             	cmp    $0xffffffff,%ebx
  403bf0:	74 1f                	je     0x403c11
  403bf2:	6a 00                	push   $0x0
  403bf4:	8d 45 f8             	lea    -0x8(%ebp),%eax
  403bf7:	50                   	push   %eax
  403bf8:	8d 34 fd 14 e4 40 00 	lea    0x40e414(,%edi,8),%esi
  403bff:	ff 36                	pushl  (%esi)
  403c01:	e8 da 20 00 00       	call   0x405ce0
  403c06:	59                   	pop    %ecx
  403c07:	50                   	push   %eax
  403c08:	ff 36                	pushl  (%esi)
  403c0a:	53                   	push   %ebx
  403c0b:	ff 15 30 c0 40 00    	call   *0x40c030
  403c11:	5f                   	pop    %edi
  403c12:	5e                   	pop    %esi
  403c13:	5b                   	pop    %ebx
  403c14:	c9                   	leave  
  403c15:	c3                   	ret    
  403c16:	6a 03                	push   $0x3
  403c18:	e8 bf 36 00 00       	call   0x4072dc
  403c1d:	59                   	pop    %ecx
  403c1e:	83 f8 01             	cmp    $0x1,%eax
  403c21:	74 15                	je     0x403c38
  403c23:	6a 03                	push   $0x3
  403c25:	e8 b2 36 00 00       	call   0x4072dc
  403c2a:	59                   	pop    %ecx
  403c2b:	85 c0                	test   %eax,%eax
  403c2d:	75 1f                	jne    0x403c4e
  403c2f:	83 3d 00 e0 40 00 01 	cmpl   $0x1,0x40e000
  403c36:	75 16                	jne    0x403c4e
  403c38:	68 fc 00 00 00       	push   $0xfc
  403c3d:	e8 29 fe ff ff       	call   0x403a6b
  403c42:	68 ff 00 00 00       	push   $0xff
  403c47:	e8 1f fe ff ff       	call   0x403a6b
  403c4c:	59                   	pop    %ecx
  403c4d:	59                   	pop    %ecx
  403c4e:	c3                   	ret    
  403c4f:	c3                   	ret    
  403c50:	8b ff                	mov    %edi,%edi
  403c52:	55                   	push   %ebp
  403c53:	8b ec                	mov    %esp,%ebp
  403c55:	51                   	push   %ecx
  403c56:	51                   	push   %ecx
  403c57:	56                   	push   %esi
  403c58:	e8 ab 0a 00 00       	call   0x404708
  403c5d:	8b f0                	mov    %eax,%esi
  403c5f:	85 f6                	test   %esi,%esi
  403c61:	0f 84 46 01 00 00    	je     0x403dad
  403c67:	8b 56 5c             	mov    0x5c(%esi),%edx
  403c6a:	a1 d4 e4 40 00       	mov    0x40e4d4,%eax
  403c6f:	57                   	push   %edi
  403c70:	8b 7d 08             	mov    0x8(%ebp),%edi
  403c73:	8b ca                	mov    %edx,%ecx
  403c75:	53                   	push   %ebx
  403c76:	39 39                	cmp    %edi,(%ecx)
  403c78:	74 0e                	je     0x403c88
  403c7a:	8b d8                	mov    %eax,%ebx
  403c7c:	6b db 0c             	imul   $0xc,%ebx,%ebx
  403c7f:	83 c1 0c             	add    $0xc,%ecx
  403c82:	03 da                	add    %edx,%ebx
  403c84:	3b cb                	cmp    %ebx,%ecx
  403c86:	72 ee                	jb     0x403c76
  403c88:	6b c0 0c             	imul   $0xc,%eax,%eax
  403c8b:	03 c2                	add    %edx,%eax
  403c8d:	3b c8                	cmp    %eax,%ecx
  403c8f:	73 08                	jae    0x403c99
  403c91:	39 39                	cmp    %edi,(%ecx)
  403c93:	75 04                	jne    0x403c99
  403c95:	8b c1                	mov    %ecx,%eax
  403c97:	eb 02                	jmp    0x403c9b
  403c99:	33 c0                	xor    %eax,%eax
  403c9b:	85 c0                	test   %eax,%eax
  403c9d:	74 0a                	je     0x403ca9
  403c9f:	8b 58 08             	mov    0x8(%eax),%ebx
  403ca2:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  403ca5:	85 db                	test   %ebx,%ebx
  403ca7:	75 07                	jne    0x403cb0
  403ca9:	33 c0                	xor    %eax,%eax
  403cab:	e9 fb 00 00 00       	jmp    0x403dab
  403cb0:	83 fb 05             	cmp    $0x5,%ebx
  403cb3:	75 0c                	jne    0x403cc1
  403cb5:	83 60 08 00          	andl   $0x0,0x8(%eax)
  403cb9:	33 c0                	xor    %eax,%eax
  403cbb:	40                   	inc    %eax
  403cbc:	e9 ea 00 00 00       	jmp    0x403dab
  403cc1:	83 fb 01             	cmp    $0x1,%ebx
  403cc4:	0f 84 de 00 00 00    	je     0x403da8
  403cca:	8b 4e 60             	mov    0x60(%esi),%ecx
  403ccd:	89 4d f8             	mov    %ecx,-0x8(%ebp)
  403cd0:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  403cd3:	89 4e 60             	mov    %ecx,0x60(%esi)
  403cd6:	8b 48 04             	mov    0x4(%eax),%ecx
  403cd9:	83 f9 08             	cmp    $0x8,%ecx
  403cdc:	0f 85 b8 00 00 00    	jne    0x403d9a
  403ce2:	8b 0d c8 e4 40 00    	mov    0x40e4c8,%ecx
  403ce8:	8b 3d cc e4 40 00    	mov    0x40e4cc,%edi
  403cee:	8b d1                	mov    %ecx,%edx
  403cf0:	03 f9                	add    %ecx,%edi
  403cf2:	3b d7                	cmp    %edi,%edx
  403cf4:	7d 24                	jge    0x403d1a
  403cf6:	6b c9 0c             	imul   $0xc,%ecx,%ecx
  403cf9:	8b 7e 5c             	mov    0x5c(%esi),%edi
  403cfc:	83 64 39 08 00       	andl   $0x0,0x8(%ecx,%edi,1)
  403d01:	8b 3d c8 e4 40 00    	mov    0x40e4c8,%edi
  403d07:	8b 1d cc e4 40 00    	mov    0x40e4cc,%ebx
  403d0d:	42                   	inc    %edx
  403d0e:	03 df                	add    %edi,%ebx
  403d10:	83 c1 0c             	add    $0xc,%ecx
  403d13:	3b d3                	cmp    %ebx,%edx
  403d15:	7c e2                	jl     0x403cf9
  403d17:	8b 5d fc             	mov    -0x4(%ebp),%ebx
  403d1a:	8b 00                	mov    (%eax),%eax
  403d1c:	8b 7e 64             	mov    0x64(%esi),%edi
  403d1f:	3d 8e 00 00 c0       	cmp    $0xc000008e,%eax
  403d24:	75 09                	jne    0x403d2f
  403d26:	c7 46 64 83 00 00 00 	movl   $0x83,0x64(%esi)
  403d2d:	eb 5e                	jmp    0x403d8d
  403d2f:	3d 90 00 00 c0       	cmp    $0xc0000090,%eax
  403d34:	75 09                	jne    0x403d3f
  403d36:	c7 46 64 81 00 00 00 	movl   $0x81,0x64(%esi)
  403d3d:	eb 4e                	jmp    0x403d8d
  403d3f:	3d 91 00 00 c0       	cmp    $0xc0000091,%eax
  403d44:	75 09                	jne    0x403d4f
  403d46:	c7 46 64 84 00 00 00 	movl   $0x84,0x64(%esi)
  403d4d:	eb 3e                	jmp    0x403d8d
  403d4f:	3d 93 00 00 c0       	cmp    $0xc0000093,%eax
  403d54:	75 09                	jne    0x403d5f
  403d56:	c7 46 64 85 00 00 00 	movl   $0x85,0x64(%esi)
  403d5d:	eb 2e                	jmp    0x403d8d
  403d5f:	3d 8d 00 00 c0       	cmp    $0xc000008d,%eax
  403d64:	75 09                	jne    0x403d6f
  403d66:	c7 46 64 82 00 00 00 	movl   $0x82,0x64(%esi)
  403d6d:	eb 1e                	jmp    0x403d8d
  403d6f:	3d 8f 00 00 c0       	cmp    $0xc000008f,%eax
  403d74:	75 09                	jne    0x403d7f
  403d76:	c7 46 64 86 00 00 00 	movl   $0x86,0x64(%esi)
  403d7d:	eb 0e                	jmp    0x403d8d
  403d7f:	3d 92 00 00 c0       	cmp    $0xc0000092,%eax
  403d84:	75 07                	jne    0x403d8d
  403d86:	c7 46 64 8a 00 00 00 	movl   $0x8a,0x64(%esi)
  403d8d:	ff 76 64             	pushl  0x64(%esi)
  403d90:	6a 08                	push   $0x8
  403d92:	ff d3                	call   *%ebx
  403d94:	59                   	pop    %ecx
  403d95:	89 7e 64             	mov    %edi,0x64(%esi)
  403d98:	eb 07                	jmp    0x403da1
  403d9a:	83 60 08 00          	andl   $0x0,0x8(%eax)
  403d9e:	51                   	push   %ecx
  403d9f:	ff d3                	call   *%ebx
  403da1:	8b 45 f8             	mov    -0x8(%ebp),%eax
  403da4:	59                   	pop    %ecx
  403da5:	89 46 60             	mov    %eax,0x60(%esi)
  403da8:	83 c8 ff             	or     $0xffffffff,%eax
  403dab:	5b                   	pop    %ebx
  403dac:	5f                   	pop    %edi
  403dad:	5e                   	pop    %esi
  403dae:	c9                   	leave  
  403daf:	c3                   	ret    
  403db0:	83 3d ac fb 40 00 00 	cmpl   $0x0,0x40fbac
  403db7:	75 05                	jne    0x403dbe
  403db9:	e8 5a 1a 00 00       	call   0x405818
  403dbe:	56                   	push   %esi
  403dbf:	8b 35 04 f0 40 00    	mov    0x40f004,%esi
  403dc5:	57                   	push   %edi
  403dc6:	33 ff                	xor    %edi,%edi
  403dc8:	85 f6                	test   %esi,%esi
  403dca:	75 18                	jne    0x403de4
  403dcc:	83 c8 ff             	or     $0xffffffff,%eax
  403dcf:	e9 a0 00 00 00       	jmp    0x403e74
  403dd4:	3c 3d                	cmp    $0x3d,%al
  403dd6:	74 01                	je     0x403dd9
  403dd8:	47                   	inc    %edi
  403dd9:	56                   	push   %esi
  403dda:	e8 01 1f 00 00       	call   0x405ce0
  403ddf:	59                   	pop    %ecx
  403de0:	8d 74 06 01          	lea    0x1(%esi,%eax,1),%esi
  403de4:	8a 06                	mov    (%esi),%al
  403de6:	84 c0                	test   %al,%al
  403de8:	75 ea                	jne    0x403dd4
  403dea:	6a 04                	push   $0x4
  403dec:	47                   	inc    %edi
  403ded:	57                   	push   %edi
  403dee:	e8 6f 0d 00 00       	call   0x404b62
  403df3:	8b f8                	mov    %eax,%edi
  403df5:	59                   	pop    %ecx
  403df6:	59                   	pop    %ecx
  403df7:	89 3d 30 f0 40 00    	mov    %edi,0x40f030
  403dfd:	85 ff                	test   %edi,%edi
  403dff:	74 cb                	je     0x403dcc
  403e01:	8b 35 04 f0 40 00    	mov    0x40f004,%esi
  403e07:	53                   	push   %ebx
  403e08:	eb 42                	jmp    0x403e4c
  403e0a:	56                   	push   %esi
  403e0b:	e8 d0 1e 00 00       	call   0x405ce0
  403e10:	8b d8                	mov    %eax,%ebx
  403e12:	43                   	inc    %ebx
  403e13:	80 3e 3d             	cmpb   $0x3d,(%esi)
  403e16:	59                   	pop    %ecx
  403e17:	74 31                	je     0x403e4a
  403e19:	6a 01                	push   $0x1
  403e1b:	53                   	push   %ebx
  403e1c:	e8 41 0d 00 00       	call   0x404b62
  403e21:	59                   	pop    %ecx
  403e22:	59                   	pop    %ecx
  403e23:	89 07                	mov    %eax,(%edi)
  403e25:	85 c0                	test   %eax,%eax
  403e27:	74 4e                	je     0x403e77
  403e29:	56                   	push   %esi
  403e2a:	53                   	push   %ebx
  403e2b:	50                   	push   %eax
  403e2c:	e8 43 34 00 00       	call   0x407274
  403e31:	83 c4 0c             	add    $0xc,%esp
  403e34:	85 c0                	test   %eax,%eax
  403e36:	74 0f                	je     0x403e47
  403e38:	33 c0                	xor    %eax,%eax
  403e3a:	50                   	push   %eax
  403e3b:	50                   	push   %eax
  403e3c:	50                   	push   %eax
  403e3d:	50                   	push   %eax
  403e3e:	50                   	push   %eax
  403e3f:	e8 51 e4 ff ff       	call   0x402295
  403e44:	83 c4 14             	add    $0x14,%esp
  403e47:	83 c7 04             	add    $0x4,%edi
  403e4a:	03 f3                	add    %ebx,%esi
  403e4c:	80 3e 00             	cmpb   $0x0,(%esi)
  403e4f:	75 b9                	jne    0x403e0a
  403e51:	ff 35 04 f0 40 00    	pushl  0x40f004
  403e57:	e8 f2 0d 00 00       	call   0x404c4e
  403e5c:	83 25 04 f0 40 00 00 	andl   $0x0,0x40f004
  403e63:	83 27 00             	andl   $0x0,(%edi)
  403e66:	c7 05 a0 fb 40 00 01 	movl   $0x1,0x40fba0
  403e6d:	00 00 00 
  403e70:	33 c0                	xor    %eax,%eax
  403e72:	59                   	pop    %ecx
  403e73:	5b                   	pop    %ebx
  403e74:	5f                   	pop    %edi
  403e75:	5e                   	pop    %esi
  403e76:	c3                   	ret    
  403e77:	ff 35 30 f0 40 00    	pushl  0x40f030
  403e7d:	e8 cc 0d 00 00       	call   0x404c4e
  403e82:	83 25 30 f0 40 00 00 	andl   $0x0,0x40f030
  403e89:	83 c8 ff             	or     $0xffffffff,%eax
  403e8c:	eb e4                	jmp    0x403e72
  403e8e:	8b ff                	mov    %edi,%edi
  403e90:	55                   	push   %ebp
  403e91:	8b ec                	mov    %esp,%ebp
  403e93:	51                   	push   %ecx
  403e94:	8b 4d 10             	mov    0x10(%ebp),%ecx
  403e97:	53                   	push   %ebx
  403e98:	33 c0                	xor    %eax,%eax
  403e9a:	56                   	push   %esi
  403e9b:	89 07                	mov    %eax,(%edi)
  403e9d:	8b f2                	mov    %edx,%esi
  403e9f:	8b 55 0c             	mov    0xc(%ebp),%edx
  403ea2:	c7 01 01 00 00 00    	movl   $0x1,(%ecx)
  403ea8:	39 45 08             	cmp    %eax,0x8(%ebp)
  403eab:	74 09                	je     0x403eb6
  403ead:	8b 5d 08             	mov    0x8(%ebp),%ebx
  403eb0:	83 45 08 04          	addl   $0x4,0x8(%ebp)
  403eb4:	89 13                	mov    %edx,(%ebx)
  403eb6:	89 45 fc             	mov    %eax,-0x4(%ebp)
  403eb9:	80 3e 22             	cmpb   $0x22,(%esi)
  403ebc:	75 10                	jne    0x403ece
  403ebe:	33 c0                	xor    %eax,%eax
  403ec0:	39 45 fc             	cmp    %eax,-0x4(%ebp)
  403ec3:	b3 22                	mov    $0x22,%bl
  403ec5:	0f 94 c0             	sete   %al
  403ec8:	46                   	inc    %esi
  403ec9:	89 45 fc             	mov    %eax,-0x4(%ebp)
  403ecc:	eb 3c                	jmp    0x403f0a
  403ece:	ff 07                	incl   (%edi)
  403ed0:	85 d2                	test   %edx,%edx
  403ed2:	74 08                	je     0x403edc
  403ed4:	8a 06                	mov    (%esi),%al
  403ed6:	88 02                	mov    %al,(%edx)
  403ed8:	42                   	inc    %edx
  403ed9:	89 55 0c             	mov    %edx,0xc(%ebp)
  403edc:	8a 1e                	mov    (%esi),%bl
  403ede:	0f b6 c3             	movzbl %bl,%eax
  403ee1:	50                   	push   %eax
  403ee2:	46                   	inc    %esi
  403ee3:	e8 92 34 00 00       	call   0x40737a
  403ee8:	59                   	pop    %ecx
  403ee9:	85 c0                	test   %eax,%eax
  403eeb:	74 13                	je     0x403f00
  403eed:	ff 07                	incl   (%edi)
  403eef:	83 7d 0c 00          	cmpl   $0x0,0xc(%ebp)
  403ef3:	74 0a                	je     0x403eff
  403ef5:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  403ef8:	8a 06                	mov    (%esi),%al
  403efa:	ff 45 0c             	incl   0xc(%ebp)
  403efd:	88 01                	mov    %al,(%ecx)
  403eff:	46                   	inc    %esi
  403f00:	8b 55 0c             	mov    0xc(%ebp),%edx
  403f03:	8b 4d 10             	mov    0x10(%ebp),%ecx
  403f06:	84 db                	test   %bl,%bl
  403f08:	74 32                	je     0x403f3c
  403f0a:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
  403f0e:	75 a9                	jne    0x403eb9
  403f10:	80 fb 20             	cmp    $0x20,%bl
  403f13:	74 05                	je     0x403f1a
  403f15:	80 fb 09             	cmp    $0x9,%bl
  403f18:	75 9f                	jne    0x403eb9
  403f1a:	85 d2                	test   %edx,%edx
  403f1c:	74 04                	je     0x403f22
  403f1e:	c6 42 ff 00          	movb   $0x0,-0x1(%edx)
  403f22:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  403f26:	80 3e 00             	cmpb   $0x0,(%esi)
  403f29:	0f 84 e9 00 00 00    	je     0x404018
  403f2f:	8a 06                	mov    (%esi),%al
  403f31:	3c 20                	cmp    $0x20,%al
  403f33:	74 04                	je     0x403f39
  403f35:	3c 09                	cmp    $0x9,%al
  403f37:	75 06                	jne    0x403f3f
  403f39:	46                   	inc    %esi
  403f3a:	eb f3                	jmp    0x403f2f
  403f3c:	4e                   	dec    %esi
  403f3d:	eb e3                	jmp    0x403f22
  403f3f:	80 3e 00             	cmpb   $0x0,(%esi)
  403f42:	0f 84 d0 00 00 00    	je     0x404018
  403f48:	83 7d 08 00          	cmpl   $0x0,0x8(%ebp)
  403f4c:	74 09                	je     0x403f57
  403f4e:	8b 45 08             	mov    0x8(%ebp),%eax
  403f51:	83 45 08 04          	addl   $0x4,0x8(%ebp)
  403f55:	89 10                	mov    %edx,(%eax)
  403f57:	ff 01                	incl   (%ecx)
  403f59:	33 db                	xor    %ebx,%ebx
  403f5b:	43                   	inc    %ebx
  403f5c:	33 c9                	xor    %ecx,%ecx
  403f5e:	eb 02                	jmp    0x403f62
  403f60:	46                   	inc    %esi
  403f61:	41                   	inc    %ecx
  403f62:	80 3e 5c             	cmpb   $0x5c,(%esi)
  403f65:	74 f9                	je     0x403f60
  403f67:	80 3e 22             	cmpb   $0x22,(%esi)
  403f6a:	75 26                	jne    0x403f92
  403f6c:	f6 c1 01             	test   $0x1,%cl
  403f6f:	75 1f                	jne    0x403f90
  403f71:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
  403f75:	74 0c                	je     0x403f83
  403f77:	8d 46 01             	lea    0x1(%esi),%eax
  403f7a:	80 38 22             	cmpb   $0x22,(%eax)
  403f7d:	75 04                	jne    0x403f83
  403f7f:	8b f0                	mov    %eax,%esi
  403f81:	eb 0d                	jmp    0x403f90
  403f83:	33 c0                	xor    %eax,%eax
  403f85:	33 db                	xor    %ebx,%ebx
  403f87:	39 45 fc             	cmp    %eax,-0x4(%ebp)
  403f8a:	0f 94 c0             	sete   %al
  403f8d:	89 45 fc             	mov    %eax,-0x4(%ebp)
  403f90:	d1 e9                	shr    %ecx
  403f92:	85 c9                	test   %ecx,%ecx
  403f94:	74 12                	je     0x403fa8
  403f96:	49                   	dec    %ecx
  403f97:	85 d2                	test   %edx,%edx
  403f99:	74 04                	je     0x403f9f
  403f9b:	c6 02 5c             	movb   $0x5c,(%edx)
  403f9e:	42                   	inc    %edx
  403f9f:	ff 07                	incl   (%edi)
  403fa1:	85 c9                	test   %ecx,%ecx
  403fa3:	75 f1                	jne    0x403f96
  403fa5:	89 55 0c             	mov    %edx,0xc(%ebp)
  403fa8:	8a 06                	mov    (%esi),%al
  403faa:	84 c0                	test   %al,%al
  403fac:	74 55                	je     0x404003
  403fae:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
  403fb2:	75 08                	jne    0x403fbc
  403fb4:	3c 20                	cmp    $0x20,%al
  403fb6:	74 4b                	je     0x404003
  403fb8:	3c 09                	cmp    $0x9,%al
  403fba:	74 47                	je     0x404003
  403fbc:	85 db                	test   %ebx,%ebx
  403fbe:	74 3d                	je     0x403ffd
  403fc0:	0f be c0             	movsbl %al,%eax
  403fc3:	50                   	push   %eax
  403fc4:	85 d2                	test   %edx,%edx
  403fc6:	74 23                	je     0x403feb
  403fc8:	e8 ad 33 00 00       	call   0x40737a
  403fcd:	59                   	pop    %ecx
  403fce:	85 c0                	test   %eax,%eax
  403fd0:	74 0d                	je     0x403fdf
  403fd2:	8a 06                	mov    (%esi),%al
  403fd4:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  403fd7:	ff 45 0c             	incl   0xc(%ebp)
  403fda:	88 01                	mov    %al,(%ecx)
  403fdc:	46                   	inc    %esi
  403fdd:	ff 07                	incl   (%edi)
  403fdf:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  403fe2:	8a 06                	mov    (%esi),%al
  403fe4:	ff 45 0c             	incl   0xc(%ebp)
  403fe7:	88 01                	mov    %al,(%ecx)
  403fe9:	eb 0d                	jmp    0x403ff8
  403feb:	e8 8a 33 00 00       	call   0x40737a
  403ff0:	59                   	pop    %ecx
  403ff1:	85 c0                	test   %eax,%eax
  403ff3:	74 03                	je     0x403ff8
  403ff5:	46                   	inc    %esi
  403ff6:	ff 07                	incl   (%edi)
  403ff8:	ff 07                	incl   (%edi)
  403ffa:	8b 55 0c             	mov    0xc(%ebp),%edx
  403ffd:	46                   	inc    %esi
  403ffe:	e9 56 ff ff ff       	jmp    0x403f59
  404003:	85 d2                	test   %edx,%edx
  404005:	74 07                	je     0x40400e
  404007:	c6 02 00             	movb   $0x0,(%edx)
  40400a:	42                   	inc    %edx
  40400b:	89 55 0c             	mov    %edx,0xc(%ebp)
  40400e:	ff 07                	incl   (%edi)
  404010:	8b 4d 10             	mov    0x10(%ebp),%ecx
  404013:	e9 0e ff ff ff       	jmp    0x403f26
  404018:	8b 45 08             	mov    0x8(%ebp),%eax
  40401b:	5e                   	pop    %esi
  40401c:	5b                   	pop    %ebx
  40401d:	85 c0                	test   %eax,%eax
  40401f:	74 03                	je     0x404024
  404021:	83 20 00             	andl   $0x0,(%eax)
  404024:	ff 01                	incl   (%ecx)
  404026:	c9                   	leave  
  404027:	c3                   	ret    
  404028:	8b ff                	mov    %edi,%edi
  40402a:	55                   	push   %ebp
  40402b:	8b ec                	mov    %esp,%ebp
  40402d:	83 ec 0c             	sub    $0xc,%esp
  404030:	53                   	push   %ebx
  404031:	33 db                	xor    %ebx,%ebx
  404033:	56                   	push   %esi
  404034:	57                   	push   %edi
  404035:	39 1d ac fb 40 00    	cmp    %ebx,0x40fbac
  40403b:	75 05                	jne    0x404042
  40403d:	e8 d6 17 00 00       	call   0x405818
  404042:	68 04 01 00 00       	push   $0x104
  404047:	be 70 f3 40 00       	mov    $0x40f370,%esi
  40404c:	56                   	push   %esi
  40404d:	53                   	push   %ebx
  40404e:	88 1d 74 f4 40 00    	mov    %bl,0x40f474
  404054:	ff 15 38 c0 40 00    	call   *0x40c038
  40405a:	a1 c4 0b 41 00       	mov    0x410bc4,%eax
  40405f:	89 35 40 f0 40 00    	mov    %esi,0x40f040
  404065:	3b c3                	cmp    %ebx,%eax
  404067:	74 07                	je     0x404070
  404069:	89 45 fc             	mov    %eax,-0x4(%ebp)
  40406c:	38 18                	cmp    %bl,(%eax)
  40406e:	75 03                	jne    0x404073
  404070:	89 75 fc             	mov    %esi,-0x4(%ebp)
  404073:	8b 55 fc             	mov    -0x4(%ebp),%edx
  404076:	8d 45 f8             	lea    -0x8(%ebp),%eax
  404079:	50                   	push   %eax
  40407a:	53                   	push   %ebx
  40407b:	53                   	push   %ebx
  40407c:	8d 7d f4             	lea    -0xc(%ebp),%edi
  40407f:	e8 0a fe ff ff       	call   0x403e8e
  404084:	8b 45 f8             	mov    -0x8(%ebp),%eax
  404087:	83 c4 0c             	add    $0xc,%esp
  40408a:	3d ff ff ff 3f       	cmp    $0x3fffffff,%eax
  40408f:	73 4a                	jae    0x4040db
  404091:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  404094:	83 f9 ff             	cmp    $0xffffffff,%ecx
  404097:	73 42                	jae    0x4040db
  404099:	8b f8                	mov    %eax,%edi
  40409b:	c1 e7 02             	shl    $0x2,%edi
  40409e:	8d 04 0f             	lea    (%edi,%ecx,1),%eax
  4040a1:	3b c1                	cmp    %ecx,%eax
  4040a3:	72 36                	jb     0x4040db
  4040a5:	50                   	push   %eax
  4040a6:	e8 72 0a 00 00       	call   0x404b1d
  4040ab:	8b f0                	mov    %eax,%esi
  4040ad:	59                   	pop    %ecx
  4040ae:	3b f3                	cmp    %ebx,%esi
  4040b0:	74 29                	je     0x4040db
  4040b2:	8b 55 fc             	mov    -0x4(%ebp),%edx
  4040b5:	8d 45 f8             	lea    -0x8(%ebp),%eax
  4040b8:	50                   	push   %eax
  4040b9:	03 fe                	add    %esi,%edi
  4040bb:	57                   	push   %edi
  4040bc:	56                   	push   %esi
  4040bd:	8d 7d f4             	lea    -0xc(%ebp),%edi
  4040c0:	e8 c9 fd ff ff       	call   0x403e8e
  4040c5:	8b 45 f8             	mov    -0x8(%ebp),%eax
  4040c8:	83 c4 0c             	add    $0xc,%esp
  4040cb:	48                   	dec    %eax
  4040cc:	a3 24 f0 40 00       	mov    %eax,0x40f024
  4040d1:	89 35 28 f0 40 00    	mov    %esi,0x40f028
  4040d7:	33 c0                	xor    %eax,%eax
  4040d9:	eb 03                	jmp    0x4040de
  4040db:	83 c8 ff             	or     $0xffffffff,%eax
  4040de:	5f                   	pop    %edi
  4040df:	5e                   	pop    %esi
  4040e0:	5b                   	pop    %ebx
  4040e1:	c9                   	leave  
  4040e2:	c3                   	ret    
  4040e3:	8b ff                	mov    %edi,%edi
  4040e5:	55                   	push   %ebp
  4040e6:	8b ec                	mov    %esp,%ebp
  4040e8:	a1 78 f4 40 00       	mov    0x40f478,%eax
  4040ed:	83 ec 0c             	sub    $0xc,%esp
  4040f0:	53                   	push   %ebx
  4040f1:	56                   	push   %esi
  4040f2:	8b 35 50 c0 40 00    	mov    0x40c050,%esi
  4040f8:	57                   	push   %edi
  4040f9:	33 db                	xor    %ebx,%ebx
  4040fb:	33 ff                	xor    %edi,%edi
  4040fd:	3b c3                	cmp    %ebx,%eax
  4040ff:	75 2e                	jne    0x40412f
  404101:	ff d6                	call   *%esi
  404103:	8b f8                	mov    %eax,%edi
  404105:	3b fb                	cmp    %ebx,%edi
  404107:	74 0c                	je     0x404115
  404109:	c7 05 78 f4 40 00 01 	movl   $0x1,0x40f478
  404110:	00 00 00 
  404113:	eb 23                	jmp    0x404138
  404115:	ff 15 4c c0 40 00    	call   *0x40c04c
  40411b:	83 f8 78             	cmp    $0x78,%eax
  40411e:	75 0a                	jne    0x40412a
  404120:	6a 02                	push   $0x2
  404122:	58                   	pop    %eax
  404123:	a3 78 f4 40 00       	mov    %eax,0x40f478
  404128:	eb 05                	jmp    0x40412f
  40412a:	a1 78 f4 40 00       	mov    0x40f478,%eax
  40412f:	83 f8 01             	cmp    $0x1,%eax
  404132:	0f 85 81 00 00 00    	jne    0x4041b9
  404138:	3b fb                	cmp    %ebx,%edi
  40413a:	75 0f                	jne    0x40414b
  40413c:	ff d6                	call   *%esi
  40413e:	8b f8                	mov    %eax,%edi
  404140:	3b fb                	cmp    %ebx,%edi
  404142:	75 07                	jne    0x40414b
  404144:	33 c0                	xor    %eax,%eax
  404146:	e9 ca 00 00 00       	jmp    0x404215
  40414b:	8b c7                	mov    %edi,%eax
  40414d:	66 39 1f             	cmp    %bx,(%edi)
  404150:	74 0e                	je     0x404160
  404152:	40                   	inc    %eax
  404153:	40                   	inc    %eax
  404154:	66 39 18             	cmp    %bx,(%eax)
  404157:	75 f9                	jne    0x404152
  404159:	40                   	inc    %eax
  40415a:	40                   	inc    %eax
  40415b:	66 39 18             	cmp    %bx,(%eax)
  40415e:	75 f2                	jne    0x404152
  404160:	8b 35 48 c0 40 00    	mov    0x40c048,%esi
  404166:	53                   	push   %ebx
  404167:	53                   	push   %ebx
  404168:	53                   	push   %ebx
  404169:	2b c7                	sub    %edi,%eax
  40416b:	53                   	push   %ebx
  40416c:	d1 f8                	sar    %eax
  40416e:	40                   	inc    %eax
  40416f:	50                   	push   %eax
  404170:	57                   	push   %edi
  404171:	53                   	push   %ebx
  404172:	53                   	push   %ebx
  404173:	89 45 f4             	mov    %eax,-0xc(%ebp)
  404176:	ff d6                	call   *%esi
  404178:	89 45 f8             	mov    %eax,-0x8(%ebp)
  40417b:	3b c3                	cmp    %ebx,%eax
  40417d:	74 2f                	je     0x4041ae
  40417f:	50                   	push   %eax
  404180:	e8 98 09 00 00       	call   0x404b1d
  404185:	59                   	pop    %ecx
  404186:	89 45 fc             	mov    %eax,-0x4(%ebp)
  404189:	3b c3                	cmp    %ebx,%eax
  40418b:	74 21                	je     0x4041ae
  40418d:	53                   	push   %ebx
  40418e:	53                   	push   %ebx
  40418f:	ff 75 f8             	pushl  -0x8(%ebp)
  404192:	50                   	push   %eax
  404193:	ff 75 f4             	pushl  -0xc(%ebp)
  404196:	57                   	push   %edi
  404197:	53                   	push   %ebx
  404198:	53                   	push   %ebx
  404199:	ff d6                	call   *%esi
  40419b:	85 c0                	test   %eax,%eax
  40419d:	75 0c                	jne    0x4041ab
  40419f:	ff 75 fc             	pushl  -0x4(%ebp)
  4041a2:	e8 a7 0a 00 00       	call   0x404c4e
  4041a7:	59                   	pop    %ecx
  4041a8:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  4041ab:	8b 5d fc             	mov    -0x4(%ebp),%ebx
  4041ae:	57                   	push   %edi
  4041af:	ff 15 44 c0 40 00    	call   *0x40c044
  4041b5:	8b c3                	mov    %ebx,%eax
  4041b7:	eb 5c                	jmp    0x404215
  4041b9:	83 f8 02             	cmp    $0x2,%eax
  4041bc:	74 04                	je     0x4041c2
  4041be:	3b c3                	cmp    %ebx,%eax
  4041c0:	75 82                	jne    0x404144
  4041c2:	ff 15 40 c0 40 00    	call   *0x40c040
  4041c8:	8b f0                	mov    %eax,%esi
  4041ca:	3b f3                	cmp    %ebx,%esi
  4041cc:	0f 84 72 ff ff ff    	je     0x404144
  4041d2:	38 1e                	cmp    %bl,(%esi)
  4041d4:	74 0a                	je     0x4041e0
  4041d6:	40                   	inc    %eax
  4041d7:	38 18                	cmp    %bl,(%eax)
  4041d9:	75 fb                	jne    0x4041d6
  4041db:	40                   	inc    %eax
  4041dc:	38 18                	cmp    %bl,(%eax)
  4041de:	75 f6                	jne    0x4041d6
  4041e0:	2b c6                	sub    %esi,%eax
  4041e2:	40                   	inc    %eax
  4041e3:	50                   	push   %eax
  4041e4:	89 45 f8             	mov    %eax,-0x8(%ebp)
  4041e7:	e8 31 09 00 00       	call   0x404b1d
  4041ec:	8b f8                	mov    %eax,%edi
  4041ee:	59                   	pop    %ecx
  4041ef:	3b fb                	cmp    %ebx,%edi
  4041f1:	75 0c                	jne    0x4041ff
  4041f3:	56                   	push   %esi
  4041f4:	ff 15 3c c0 40 00    	call   *0x40c03c
  4041fa:	e9 45 ff ff ff       	jmp    0x404144
  4041ff:	ff 75 f8             	pushl  -0x8(%ebp)
  404202:	56                   	push   %esi
  404203:	57                   	push   %edi
  404204:	e8 07 21 00 00       	call   0x406310
  404209:	83 c4 0c             	add    $0xc,%esp
  40420c:	56                   	push   %esi
  40420d:	ff 15 3c c0 40 00    	call   *0x40c03c
  404213:	8b c7                	mov    %edi,%eax
  404215:	5f                   	pop    %edi
  404216:	5e                   	pop    %esi
  404217:	5b                   	pop    %ebx
  404218:	c9                   	leave  
  404219:	c3                   	ret    
  40421a:	6a 54                	push   $0x54
  40421c:	68 60 d4 40 00       	push   $0x40d460
  404221:	e8 4a e2 ff ff       	call   0x402470
  404226:	33 ff                	xor    %edi,%edi
  404228:	89 7d fc             	mov    %edi,-0x4(%ebp)
  40422b:	8d 45 9c             	lea    -0x64(%ebp),%eax
  40422e:	50                   	push   %eax
  40422f:	ff 15 5c c0 40 00    	call   *0x40c05c
  404235:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40423c:	6a 40                	push   $0x40
  40423e:	6a 20                	push   $0x20
  404240:	5e                   	pop    %esi
  404241:	56                   	push   %esi
  404242:	e8 1b 09 00 00       	call   0x404b62
  404247:	59                   	pop    %ecx
  404248:	59                   	pop    %ecx
  404249:	3b c7                	cmp    %edi,%eax
  40424b:	0f 84 14 02 00 00    	je     0x404465
  404251:	a3 a0 fa 40 00       	mov    %eax,0x40faa0
  404256:	89 35 84 fa 40 00    	mov    %esi,0x40fa84
  40425c:	8d 88 00 08 00 00    	lea    0x800(%eax),%ecx
  404262:	eb 30                	jmp    0x404294
  404264:	c6 40 04 00          	movb   $0x0,0x4(%eax)
  404268:	83 08 ff             	orl    $0xffffffff,(%eax)
  40426b:	c6 40 05 0a          	movb   $0xa,0x5(%eax)
  40426f:	89 78 08             	mov    %edi,0x8(%eax)
  404272:	c6 40 24 00          	movb   $0x0,0x24(%eax)
  404276:	c6 40 25 0a          	movb   $0xa,0x25(%eax)
  40427a:	c6 40 26 0a          	movb   $0xa,0x26(%eax)
  40427e:	89 78 38             	mov    %edi,0x38(%eax)
  404281:	c6 40 34 00          	movb   $0x0,0x34(%eax)
  404285:	83 c0 40             	add    $0x40,%eax
  404288:	8b 0d a0 fa 40 00    	mov    0x40faa0,%ecx
  40428e:	81 c1 00 08 00 00    	add    $0x800,%ecx
  404294:	3b c1                	cmp    %ecx,%eax
  404296:	72 cc                	jb     0x404264
  404298:	66 39 7d ce          	cmp    %di,-0x32(%ebp)
  40429c:	0f 84 0a 01 00 00    	je     0x4043ac
  4042a2:	8b 45 d0             	mov    -0x30(%ebp),%eax
  4042a5:	3b c7                	cmp    %edi,%eax
  4042a7:	0f 84 ff 00 00 00    	je     0x4043ac
  4042ad:	8b 38                	mov    (%eax),%edi
  4042af:	8d 58 04             	lea    0x4(%eax),%ebx
  4042b2:	8d 04 3b             	lea    (%ebx,%edi,1),%eax
  4042b5:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  4042b8:	be 00 08 00 00       	mov    $0x800,%esi
  4042bd:	3b fe                	cmp    %esi,%edi
  4042bf:	7c 02                	jl     0x4042c3
  4042c1:	8b fe                	mov    %esi,%edi
  4042c3:	c7 45 e0 01 00 00 00 	movl   $0x1,-0x20(%ebp)
  4042ca:	eb 5b                	jmp    0x404327
  4042cc:	6a 40                	push   $0x40
  4042ce:	6a 20                	push   $0x20
  4042d0:	e8 8d 08 00 00       	call   0x404b62
  4042d5:	59                   	pop    %ecx
  4042d6:	59                   	pop    %ecx
  4042d7:	85 c0                	test   %eax,%eax
  4042d9:	74 56                	je     0x404331
  4042db:	8b 4d e0             	mov    -0x20(%ebp),%ecx
  4042de:	8d 0c 8d a0 fa 40 00 	lea    0x40faa0(,%ecx,4),%ecx
  4042e5:	89 01                	mov    %eax,(%ecx)
  4042e7:	83 05 84 fa 40 00 20 	addl   $0x20,0x40fa84
  4042ee:	8d 90 00 08 00 00    	lea    0x800(%eax),%edx
  4042f4:	eb 2a                	jmp    0x404320
  4042f6:	c6 40 04 00          	movb   $0x0,0x4(%eax)
  4042fa:	83 08 ff             	orl    $0xffffffff,(%eax)
  4042fd:	c6 40 05 0a          	movb   $0xa,0x5(%eax)
  404301:	83 60 08 00          	andl   $0x0,0x8(%eax)
  404305:	80 60 24 80          	andb   $0x80,0x24(%eax)
  404309:	c6 40 25 0a          	movb   $0xa,0x25(%eax)
  40430d:	c6 40 26 0a          	movb   $0xa,0x26(%eax)
  404311:	83 60 38 00          	andl   $0x0,0x38(%eax)
  404315:	c6 40 34 00          	movb   $0x0,0x34(%eax)
  404319:	83 c0 40             	add    $0x40,%eax
  40431c:	8b 11                	mov    (%ecx),%edx
  40431e:	03 d6                	add    %esi,%edx
  404320:	3b c2                	cmp    %edx,%eax
  404322:	72 d2                	jb     0x4042f6
  404324:	ff 45 e0             	incl   -0x20(%ebp)
  404327:	39 3d 84 fa 40 00    	cmp    %edi,0x40fa84
  40432d:	7c 9d                	jl     0x4042cc
  40432f:	eb 06                	jmp    0x404337
  404331:	8b 3d 84 fa 40 00    	mov    0x40fa84,%edi
  404337:	83 65 e0 00          	andl   $0x0,-0x20(%ebp)
  40433b:	85 ff                	test   %edi,%edi
  40433d:	7e 6d                	jle    0x4043ac
  40433f:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  404342:	8b 08                	mov    (%eax),%ecx
  404344:	83 f9 ff             	cmp    $0xffffffff,%ecx
  404347:	74 56                	je     0x40439f
  404349:	83 f9 fe             	cmp    $0xfffffffe,%ecx
  40434c:	74 51                	je     0x40439f
  40434e:	8a 03                	mov    (%ebx),%al
  404350:	a8 01                	test   $0x1,%al
  404352:	74 4b                	je     0x40439f
  404354:	a8 08                	test   $0x8,%al
  404356:	75 0b                	jne    0x404363
  404358:	51                   	push   %ecx
  404359:	ff 15 58 c0 40 00    	call   *0x40c058
  40435f:	85 c0                	test   %eax,%eax
  404361:	74 3c                	je     0x40439f
  404363:	8b 75 e0             	mov    -0x20(%ebp),%esi
  404366:	8b c6                	mov    %esi,%eax
  404368:	c1 f8 05             	sar    $0x5,%eax
  40436b:	83 e6 1f             	and    $0x1f,%esi
  40436e:	c1 e6 06             	shl    $0x6,%esi
  404371:	03 34 85 a0 fa 40 00 	add    0x40faa0(,%eax,4),%esi
  404378:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  40437b:	8b 00                	mov    (%eax),%eax
  40437d:	89 06                	mov    %eax,(%esi)
  40437f:	8a 03                	mov    (%ebx),%al
  404381:	88 46 04             	mov    %al,0x4(%esi)
  404384:	68 a0 0f 00 00       	push   $0xfa0
  404389:	8d 46 0c             	lea    0xc(%esi),%eax
  40438c:	50                   	push   %eax
  40438d:	e8 b9 2b 00 00       	call   0x406f4b
  404392:	59                   	pop    %ecx
  404393:	59                   	pop    %ecx
  404394:	85 c0                	test   %eax,%eax
  404396:	0f 84 c9 00 00 00    	je     0x404465
  40439c:	ff 46 08             	incl   0x8(%esi)
  40439f:	ff 45 e0             	incl   -0x20(%ebp)
  4043a2:	43                   	inc    %ebx
  4043a3:	83 45 e4 04          	addl   $0x4,-0x1c(%ebp)
  4043a7:	39 7d e0             	cmp    %edi,-0x20(%ebp)
  4043aa:	7c 93                	jl     0x40433f
  4043ac:	33 db                	xor    %ebx,%ebx
  4043ae:	8b f3                	mov    %ebx,%esi
  4043b0:	c1 e6 06             	shl    $0x6,%esi
  4043b3:	03 35 a0 fa 40 00    	add    0x40faa0,%esi
  4043b9:	8b 06                	mov    (%esi),%eax
  4043bb:	83 f8 ff             	cmp    $0xffffffff,%eax
  4043be:	74 0b                	je     0x4043cb
  4043c0:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4043c3:	74 06                	je     0x4043cb
  4043c5:	80 4e 04 80          	orb    $0x80,0x4(%esi)
  4043c9:	eb 72                	jmp    0x40443d
  4043cb:	c6 46 04 81          	movb   $0x81,0x4(%esi)
  4043cf:	85 db                	test   %ebx,%ebx
  4043d1:	75 05                	jne    0x4043d8
  4043d3:	6a f6                	push   $0xfffffff6
  4043d5:	58                   	pop    %eax
  4043d6:	eb 0a                	jmp    0x4043e2
  4043d8:	8b c3                	mov    %ebx,%eax
  4043da:	48                   	dec    %eax
  4043db:	f7 d8                	neg    %eax
  4043dd:	1b c0                	sbb    %eax,%eax
  4043df:	83 c0 f5             	add    $0xfffffff5,%eax
  4043e2:	50                   	push   %eax
  4043e3:	ff 15 34 c0 40 00    	call   *0x40c034
  4043e9:	8b f8                	mov    %eax,%edi
  4043eb:	83 ff ff             	cmp    $0xffffffff,%edi
  4043ee:	74 43                	je     0x404433
  4043f0:	85 ff                	test   %edi,%edi
  4043f2:	74 3f                	je     0x404433
  4043f4:	57                   	push   %edi
  4043f5:	ff 15 58 c0 40 00    	call   *0x40c058
  4043fb:	85 c0                	test   %eax,%eax
  4043fd:	74 34                	je     0x404433
  4043ff:	89 3e                	mov    %edi,(%esi)
  404401:	25 ff 00 00 00       	and    $0xff,%eax
  404406:	83 f8 02             	cmp    $0x2,%eax
  404409:	75 06                	jne    0x404411
  40440b:	80 4e 04 40          	orb    $0x40,0x4(%esi)
  40440f:	eb 09                	jmp    0x40441a
  404411:	83 f8 03             	cmp    $0x3,%eax
  404414:	75 04                	jne    0x40441a
  404416:	80 4e 04 08          	orb    $0x8,0x4(%esi)
  40441a:	68 a0 0f 00 00       	push   $0xfa0
  40441f:	8d 46 0c             	lea    0xc(%esi),%eax
  404422:	50                   	push   %eax
  404423:	e8 23 2b 00 00       	call   0x406f4b
  404428:	59                   	pop    %ecx
  404429:	59                   	pop    %ecx
  40442a:	85 c0                	test   %eax,%eax
  40442c:	74 37                	je     0x404465
  40442e:	ff 46 08             	incl   0x8(%esi)
  404431:	eb 0a                	jmp    0x40443d
  404433:	80 4e 04 40          	orb    $0x40,0x4(%esi)
  404437:	c7 06 fe ff ff ff    	movl   $0xfffffffe,(%esi)
  40443d:	43                   	inc    %ebx
  40443e:	83 fb 03             	cmp    $0x3,%ebx
  404441:	0f 8c 67 ff ff ff    	jl     0x4043ae
  404447:	ff 35 84 fa 40 00    	pushl  0x40fa84
  40444d:	ff 15 54 c0 40 00    	call   *0x40c054
  404453:	33 c0                	xor    %eax,%eax
  404455:	eb 11                	jmp    0x404468
  404457:	33 c0                	xor    %eax,%eax
  404459:	40                   	inc    %eax
  40445a:	c3                   	ret    
  40445b:	8b 65 e8             	mov    -0x18(%ebp),%esp
  40445e:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  404465:	83 c8 ff             	or     $0xffffffff,%eax
  404468:	e8 48 e0 ff ff       	call   0x4024b5
  40446d:	c3                   	ret    
  40446e:	8b ff                	mov    %edi,%edi
  404470:	56                   	push   %esi
  404471:	b8 d0 d3 40 00       	mov    $0x40d3d0,%eax
  404476:	be d0 d3 40 00       	mov    $0x40d3d0,%esi
  40447b:	57                   	push   %edi
  40447c:	8b f8                	mov    %eax,%edi
  40447e:	3b c6                	cmp    %esi,%eax
  404480:	73 0f                	jae    0x404491
  404482:	8b 07                	mov    (%edi),%eax
  404484:	85 c0                	test   %eax,%eax
  404486:	74 02                	je     0x40448a
  404488:	ff d0                	call   *%eax
  40448a:	83 c7 04             	add    $0x4,%edi
  40448d:	3b fe                	cmp    %esi,%edi
  40448f:	72 f1                	jb     0x404482
  404491:	5f                   	pop    %edi
  404492:	5e                   	pop    %esi
  404493:	c3                   	ret    
  404494:	8b ff                	mov    %edi,%edi
  404496:	56                   	push   %esi
  404497:	b8 d8 d3 40 00       	mov    $0x40d3d8,%eax
  40449c:	be d8 d3 40 00       	mov    $0x40d3d8,%esi
  4044a1:	57                   	push   %edi
  4044a2:	8b f8                	mov    %eax,%edi
  4044a4:	3b c6                	cmp    %esi,%eax
  4044a6:	73 0f                	jae    0x4044b7
  4044a8:	8b 07                	mov    (%edi),%eax
  4044aa:	85 c0                	test   %eax,%eax
  4044ac:	74 02                	je     0x4044b0
  4044ae:	ff d0                	call   *%eax
  4044b0:	83 c7 04             	add    $0x4,%edi
  4044b3:	3b fe                	cmp    %esi,%edi
  4044b5:	72 f1                	jb     0x4044a8
  4044b7:	5f                   	pop    %edi
  4044b8:	5e                   	pop    %esi
  4044b9:	c3                   	ret    
  4044ba:	8b ff                	mov    %edi,%edi
  4044bc:	55                   	push   %ebp
  4044bd:	8b ec                	mov    %esp,%ebp
  4044bf:	56                   	push   %esi
  4044c0:	ff 35 1c e5 40 00    	pushl  0x40e51c
  4044c6:	8b 35 64 c0 40 00    	mov    0x40c064,%esi
  4044cc:	ff d6                	call   *%esi
  4044ce:	85 c0                	test   %eax,%eax
  4044d0:	74 21                	je     0x4044f3
  4044d2:	a1 18 e5 40 00       	mov    0x40e518,%eax
  4044d7:	83 f8 ff             	cmp    $0xffffffff,%eax
  4044da:	74 17                	je     0x4044f3
  4044dc:	50                   	push   %eax
  4044dd:	ff 35 1c e5 40 00    	pushl  0x40e51c
  4044e3:	ff d6                	call   *%esi
  4044e5:	ff d0                	call   *%eax
  4044e7:	85 c0                	test   %eax,%eax
  4044e9:	74 08                	je     0x4044f3
  4044eb:	8b 80 f8 01 00 00    	mov    0x1f8(%eax),%eax
  4044f1:	eb 27                	jmp    0x40451a
  4044f3:	be 48 c8 40 00       	mov    $0x40c848,%esi
  4044f8:	56                   	push   %esi
  4044f9:	ff 15 20 c0 40 00    	call   *0x40c020
  4044ff:	85 c0                	test   %eax,%eax
  404501:	75 0b                	jne    0x40450e
  404503:	56                   	push   %esi
  404504:	e8 2a f2 ff ff       	call   0x403733
  404509:	59                   	pop    %ecx
  40450a:	85 c0                	test   %eax,%eax
  40450c:	74 18                	je     0x404526
  40450e:	68 38 c8 40 00       	push   $0x40c838
  404513:	50                   	push   %eax
  404514:	ff 15 28 c0 40 00    	call   *0x40c028
  40451a:	85 c0                	test   %eax,%eax
  40451c:	74 08                	je     0x404526
  40451e:	ff 75 08             	pushl  0x8(%ebp)
  404521:	ff d0                	call   *%eax
  404523:	89 45 08             	mov    %eax,0x8(%ebp)
  404526:	8b 45 08             	mov    0x8(%ebp),%eax
  404529:	5e                   	pop    %esi
  40452a:	5d                   	pop    %ebp
  40452b:	c3                   	ret    
  40452c:	6a 00                	push   $0x0
  40452e:	e8 87 ff ff ff       	call   0x4044ba
  404533:	59                   	pop    %ecx
  404534:	c3                   	ret    
  404535:	8b ff                	mov    %edi,%edi
  404537:	55                   	push   %ebp
  404538:	8b ec                	mov    %esp,%ebp
  40453a:	56                   	push   %esi
  40453b:	ff 35 1c e5 40 00    	pushl  0x40e51c
  404541:	8b 35 64 c0 40 00    	mov    0x40c064,%esi
  404547:	ff d6                	call   *%esi
  404549:	85 c0                	test   %eax,%eax
  40454b:	74 21                	je     0x40456e
  40454d:	a1 18 e5 40 00       	mov    0x40e518,%eax
  404552:	83 f8 ff             	cmp    $0xffffffff,%eax
  404555:	74 17                	je     0x40456e
  404557:	50                   	push   %eax
  404558:	ff 35 1c e5 40 00    	pushl  0x40e51c
  40455e:	ff d6                	call   *%esi
  404560:	ff d0                	call   *%eax
  404562:	85 c0                	test   %eax,%eax
  404564:	74 08                	je     0x40456e
  404566:	8b 80 fc 01 00 00    	mov    0x1fc(%eax),%eax
  40456c:	eb 27                	jmp    0x404595
  40456e:	be 48 c8 40 00       	mov    $0x40c848,%esi
  404573:	56                   	push   %esi
  404574:	ff 15 20 c0 40 00    	call   *0x40c020
  40457a:	85 c0                	test   %eax,%eax
  40457c:	75 0b                	jne    0x404589
  40457e:	56                   	push   %esi
  40457f:	e8 af f1 ff ff       	call   0x403733
  404584:	59                   	pop    %ecx
  404585:	85 c0                	test   %eax,%eax
  404587:	74 18                	je     0x4045a1
  404589:	68 64 c8 40 00       	push   $0x40c864
  40458e:	50                   	push   %eax
  40458f:	ff 15 28 c0 40 00    	call   *0x40c028
  404595:	85 c0                	test   %eax,%eax
  404597:	74 08                	je     0x4045a1
  404599:	ff 75 08             	pushl  0x8(%ebp)
  40459c:	ff d0                	call   *%eax
  40459e:	89 45 08             	mov    %eax,0x8(%ebp)
  4045a1:	8b 45 08             	mov    0x8(%ebp),%eax
  4045a4:	5e                   	pop    %esi
  4045a5:	5d                   	pop    %ebp
  4045a6:	c3                   	ret    
  4045a7:	ff 15 68 c0 40 00    	call   *0x40c068
  4045ad:	c2 04 00             	ret    $0x4
  4045b0:	8b ff                	mov    %edi,%edi
  4045b2:	56                   	push   %esi
  4045b3:	ff 35 1c e5 40 00    	pushl  0x40e51c
  4045b9:	ff 15 64 c0 40 00    	call   *0x40c064
  4045bf:	8b f0                	mov    %eax,%esi
  4045c1:	85 f6                	test   %esi,%esi
  4045c3:	75 1b                	jne    0x4045e0
  4045c5:	ff 35 80 f4 40 00    	pushl  0x40f480
  4045cb:	e8 65 ff ff ff       	call   0x404535
  4045d0:	59                   	pop    %ecx
  4045d1:	8b f0                	mov    %eax,%esi
  4045d3:	56                   	push   %esi
  4045d4:	ff 35 1c e5 40 00    	pushl  0x40e51c
  4045da:	ff 15 6c c0 40 00    	call   *0x40c06c
  4045e0:	8b c6                	mov    %esi,%eax
  4045e2:	5e                   	pop    %esi
  4045e3:	c3                   	ret    
  4045e4:	a1 18 e5 40 00       	mov    0x40e518,%eax
  4045e9:	83 f8 ff             	cmp    $0xffffffff,%eax
  4045ec:	74 16                	je     0x404604
  4045ee:	50                   	push   %eax
  4045ef:	ff 35 88 f4 40 00    	pushl  0x40f488
  4045f5:	e8 3b ff ff ff       	call   0x404535
  4045fa:	59                   	pop    %ecx
  4045fb:	ff d0                	call   *%eax
  4045fd:	83 0d 18 e5 40 00 ff 	orl    $0xffffffff,0x40e518
  404604:	a1 1c e5 40 00       	mov    0x40e51c,%eax
  404609:	83 f8 ff             	cmp    $0xffffffff,%eax
  40460c:	74 0e                	je     0x40461c
  40460e:	50                   	push   %eax
  40460f:	ff 15 70 c0 40 00    	call   *0x40c070
  404615:	83 0d 1c e5 40 00 ff 	orl    $0xffffffff,0x40e51c
  40461c:	e9 38 09 00 00       	jmp    0x404f59
  404621:	6a 0c                	push   $0xc
  404623:	68 80 d4 40 00       	push   $0x40d480
  404628:	e8 43 de ff ff       	call   0x402470
  40462d:	be 48 c8 40 00       	mov    $0x40c848,%esi
  404632:	56                   	push   %esi
  404633:	ff 15 20 c0 40 00    	call   *0x40c020
  404639:	85 c0                	test   %eax,%eax
  40463b:	75 07                	jne    0x404644
  40463d:	56                   	push   %esi
  40463e:	e8 f0 f0 ff ff       	call   0x403733
  404643:	59                   	pop    %ecx
  404644:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  404647:	8b 75 08             	mov    0x8(%ebp),%esi
  40464a:	c7 46 5c c0 c7 40 00 	movl   $0x40c7c0,0x5c(%esi)
  404651:	33 ff                	xor    %edi,%edi
  404653:	47                   	inc    %edi
  404654:	89 7e 14             	mov    %edi,0x14(%esi)
  404657:	85 c0                	test   %eax,%eax
  404659:	74 24                	je     0x40467f
  40465b:	68 38 c8 40 00       	push   $0x40c838
  404660:	50                   	push   %eax
  404661:	8b 1d 28 c0 40 00    	mov    0x40c028,%ebx
  404667:	ff d3                	call   *%ebx
  404669:	89 86 f8 01 00 00    	mov    %eax,0x1f8(%esi)
  40466f:	68 64 c8 40 00       	push   $0x40c864
  404674:	ff 75 e4             	pushl  -0x1c(%ebp)
  404677:	ff d3                	call   *%ebx
  404679:	89 86 fc 01 00 00    	mov    %eax,0x1fc(%esi)
  40467f:	89 7e 70             	mov    %edi,0x70(%esi)
  404682:	c6 86 c8 00 00 00 43 	movb   $0x43,0xc8(%esi)
  404689:	c6 86 4b 01 00 00 43 	movb   $0x43,0x14b(%esi)
  404690:	c7 46 68 48 e6 40 00 	movl   $0x40e648,0x68(%esi)
  404697:	6a 0d                	push   $0xd
  404699:	e8 ec 09 00 00       	call   0x40508a
  40469e:	59                   	pop    %ecx
  40469f:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  4046a3:	ff 76 68             	pushl  0x68(%esi)
  4046a6:	ff 15 74 c0 40 00    	call   *0x40c074
  4046ac:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  4046b3:	e8 3e 00 00 00       	call   0x4046f6
  4046b8:	6a 0c                	push   $0xc
  4046ba:	e8 cb 09 00 00       	call   0x40508a
  4046bf:	59                   	pop    %ecx
  4046c0:	89 7d fc             	mov    %edi,-0x4(%ebp)
  4046c3:	8b 45 0c             	mov    0xc(%ebp),%eax
  4046c6:	89 46 6c             	mov    %eax,0x6c(%esi)
  4046c9:	85 c0                	test   %eax,%eax
  4046cb:	75 08                	jne    0x4046d5
  4046cd:	a1 50 ec 40 00       	mov    0x40ec50,%eax
  4046d2:	89 46 6c             	mov    %eax,0x6c(%esi)
  4046d5:	ff 76 6c             	pushl  0x6c(%esi)
  4046d8:	e8 a2 12 00 00       	call   0x40597f
  4046dd:	59                   	pop    %ecx
  4046de:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  4046e5:	e8 15 00 00 00       	call   0x4046ff
  4046ea:	e8 c6 dd ff ff       	call   0x4024b5
  4046ef:	c3                   	ret    
  4046f0:	33 ff                	xor    %edi,%edi
  4046f2:	47                   	inc    %edi
  4046f3:	8b 75 08             	mov    0x8(%ebp),%esi
  4046f6:	6a 0d                	push   $0xd
  4046f8:	e8 b3 08 00 00       	call   0x404fb0
  4046fd:	59                   	pop    %ecx
  4046fe:	c3                   	ret    
  4046ff:	6a 0c                	push   $0xc
  404701:	e8 aa 08 00 00       	call   0x404fb0
  404706:	59                   	pop    %ecx
  404707:	c3                   	ret    
  404708:	8b ff                	mov    %edi,%edi
  40470a:	56                   	push   %esi
  40470b:	57                   	push   %edi
  40470c:	ff 15 4c c0 40 00    	call   *0x40c04c
  404712:	ff 35 18 e5 40 00    	pushl  0x40e518
  404718:	8b f8                	mov    %eax,%edi
  40471a:	e8 91 fe ff ff       	call   0x4045b0
  40471f:	ff d0                	call   *%eax
  404721:	8b f0                	mov    %eax,%esi
  404723:	85 f6                	test   %esi,%esi
  404725:	75 4e                	jne    0x404775
  404727:	68 14 02 00 00       	push   $0x214
  40472c:	6a 01                	push   $0x1
  40472e:	e8 2f 04 00 00       	call   0x404b62
  404733:	8b f0                	mov    %eax,%esi
  404735:	59                   	pop    %ecx
  404736:	59                   	pop    %ecx
  404737:	85 f6                	test   %esi,%esi
  404739:	74 3a                	je     0x404775
  40473b:	56                   	push   %esi
  40473c:	ff 35 18 e5 40 00    	pushl  0x40e518
  404742:	ff 35 84 f4 40 00    	pushl  0x40f484
  404748:	e8 e8 fd ff ff       	call   0x404535
  40474d:	59                   	pop    %ecx
  40474e:	ff d0                	call   *%eax
  404750:	85 c0                	test   %eax,%eax
  404752:	74 18                	je     0x40476c
  404754:	6a 00                	push   $0x0
  404756:	56                   	push   %esi
  404757:	e8 c5 fe ff ff       	call   0x404621
  40475c:	59                   	pop    %ecx
  40475d:	59                   	pop    %ecx
  40475e:	ff 15 7c c0 40 00    	call   *0x40c07c
  404764:	83 4e 04 ff          	orl    $0xffffffff,0x4(%esi)
  404768:	89 06                	mov    %eax,(%esi)
  40476a:	eb 09                	jmp    0x404775
  40476c:	56                   	push   %esi
  40476d:	e8 dc 04 00 00       	call   0x404c4e
  404772:	59                   	pop    %ecx
  404773:	33 f6                	xor    %esi,%esi
  404775:	57                   	push   %edi
  404776:	ff 15 78 c0 40 00    	call   *0x40c078
  40477c:	5f                   	pop    %edi
  40477d:	8b c6                	mov    %esi,%eax
  40477f:	5e                   	pop    %esi
  404780:	c3                   	ret    
  404781:	8b ff                	mov    %edi,%edi
  404783:	56                   	push   %esi
  404784:	e8 7f ff ff ff       	call   0x404708
  404789:	8b f0                	mov    %eax,%esi
  40478b:	85 f6                	test   %esi,%esi
  40478d:	75 08                	jne    0x404797
  40478f:	6a 10                	push   $0x10
  404791:	e8 cd ef ff ff       	call   0x403763
  404796:	59                   	pop    %ecx
  404797:	8b c6                	mov    %esi,%eax
  404799:	5e                   	pop    %esi
  40479a:	c3                   	ret    
  40479b:	6a 08                	push   $0x8
  40479d:	68 a8 d4 40 00       	push   $0x40d4a8
  4047a2:	e8 c9 dc ff ff       	call   0x402470
  4047a7:	8b 75 08             	mov    0x8(%ebp),%esi
  4047aa:	85 f6                	test   %esi,%esi
  4047ac:	0f 84 f8 00 00 00    	je     0x4048aa
  4047b2:	8b 46 24             	mov    0x24(%esi),%eax
  4047b5:	85 c0                	test   %eax,%eax
  4047b7:	74 07                	je     0x4047c0
  4047b9:	50                   	push   %eax
  4047ba:	e8 8f 04 00 00       	call   0x404c4e
  4047bf:	59                   	pop    %ecx
  4047c0:	8b 46 2c             	mov    0x2c(%esi),%eax
  4047c3:	85 c0                	test   %eax,%eax
  4047c5:	74 07                	je     0x4047ce
  4047c7:	50                   	push   %eax
  4047c8:	e8 81 04 00 00       	call   0x404c4e
  4047cd:	59                   	pop    %ecx
  4047ce:	8b 46 34             	mov    0x34(%esi),%eax
  4047d1:	85 c0                	test   %eax,%eax
  4047d3:	74 07                	je     0x4047dc
  4047d5:	50                   	push   %eax
  4047d6:	e8 73 04 00 00       	call   0x404c4e
  4047db:	59                   	pop    %ecx
  4047dc:	8b 46 3c             	mov    0x3c(%esi),%eax
  4047df:	85 c0                	test   %eax,%eax
  4047e1:	74 07                	je     0x4047ea
  4047e3:	50                   	push   %eax
  4047e4:	e8 65 04 00 00       	call   0x404c4e
  4047e9:	59                   	pop    %ecx
  4047ea:	8b 46 40             	mov    0x40(%esi),%eax
  4047ed:	85 c0                	test   %eax,%eax
  4047ef:	74 07                	je     0x4047f8
  4047f1:	50                   	push   %eax
  4047f2:	e8 57 04 00 00       	call   0x404c4e
  4047f7:	59                   	pop    %ecx
  4047f8:	8b 46 44             	mov    0x44(%esi),%eax
  4047fb:	85 c0                	test   %eax,%eax
  4047fd:	74 07                	je     0x404806
  4047ff:	50                   	push   %eax
  404800:	e8 49 04 00 00       	call   0x404c4e
  404805:	59                   	pop    %ecx
  404806:	8b 46 48             	mov    0x48(%esi),%eax
  404809:	85 c0                	test   %eax,%eax
  40480b:	74 07                	je     0x404814
  40480d:	50                   	push   %eax
  40480e:	e8 3b 04 00 00       	call   0x404c4e
  404813:	59                   	pop    %ecx
  404814:	8b 46 5c             	mov    0x5c(%esi),%eax
  404817:	3d c0 c7 40 00       	cmp    $0x40c7c0,%eax
  40481c:	74 07                	je     0x404825
  40481e:	50                   	push   %eax
  40481f:	e8 2a 04 00 00       	call   0x404c4e
  404824:	59                   	pop    %ecx
  404825:	6a 0d                	push   $0xd
  404827:	e8 5e 08 00 00       	call   0x40508a
  40482c:	59                   	pop    %ecx
  40482d:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  404831:	8b 7e 68             	mov    0x68(%esi),%edi
  404834:	85 ff                	test   %edi,%edi
  404836:	74 1a                	je     0x404852
  404838:	57                   	push   %edi
  404839:	ff 15 80 c0 40 00    	call   *0x40c080
  40483f:	85 c0                	test   %eax,%eax
  404841:	75 0f                	jne    0x404852
  404843:	81 ff 48 e6 40 00    	cmp    $0x40e648,%edi
  404849:	74 07                	je     0x404852
  40484b:	57                   	push   %edi
  40484c:	e8 fd 03 00 00       	call   0x404c4e
  404851:	59                   	pop    %ecx
  404852:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  404859:	e8 57 00 00 00       	call   0x4048b5
  40485e:	6a 0c                	push   $0xc
  404860:	e8 25 08 00 00       	call   0x40508a
  404865:	59                   	pop    %ecx
  404866:	c7 45 fc 01 00 00 00 	movl   $0x1,-0x4(%ebp)
  40486d:	8b 7e 6c             	mov    0x6c(%esi),%edi
  404870:	85 ff                	test   %edi,%edi
  404872:	74 23                	je     0x404897
  404874:	57                   	push   %edi
  404875:	e8 94 11 00 00       	call   0x405a0e
  40487a:	59                   	pop    %ecx
  40487b:	3b 3d 50 ec 40 00    	cmp    0x40ec50,%edi
  404881:	74 14                	je     0x404897
  404883:	81 ff 78 eb 40 00    	cmp    $0x40eb78,%edi
  404889:	74 0c                	je     0x404897
  40488b:	83 3f 00             	cmpl   $0x0,(%edi)
  40488e:	75 07                	jne    0x404897
  404890:	57                   	push   %edi
  404891:	e8 a0 0f 00 00       	call   0x405836
  404896:	59                   	pop    %ecx
  404897:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40489e:	e8 1e 00 00 00       	call   0x4048c1
  4048a3:	56                   	push   %esi
  4048a4:	e8 a5 03 00 00       	call   0x404c4e
  4048a9:	59                   	pop    %ecx
  4048aa:	e8 06 dc ff ff       	call   0x4024b5
  4048af:	c2 04 00             	ret    $0x4
  4048b2:	8b 75 08             	mov    0x8(%ebp),%esi
  4048b5:	6a 0d                	push   $0xd
  4048b7:	e8 f4 06 00 00       	call   0x404fb0
  4048bc:	59                   	pop    %ecx
  4048bd:	c3                   	ret    
  4048be:	8b 75 08             	mov    0x8(%ebp),%esi
  4048c1:	6a 0c                	push   $0xc
  4048c3:	e8 e8 06 00 00       	call   0x404fb0
  4048c8:	59                   	pop    %ecx
  4048c9:	c3                   	ret    
  4048ca:	8b ff                	mov    %edi,%edi
  4048cc:	56                   	push   %esi
  4048cd:	57                   	push   %edi
  4048ce:	be 48 c8 40 00       	mov    $0x40c848,%esi
  4048d3:	56                   	push   %esi
  4048d4:	ff 15 20 c0 40 00    	call   *0x40c020
  4048da:	85 c0                	test   %eax,%eax
  4048dc:	75 07                	jne    0x4048e5
  4048de:	56                   	push   %esi
  4048df:	e8 4f ee ff ff       	call   0x403733
  4048e4:	59                   	pop    %ecx
  4048e5:	8b f8                	mov    %eax,%edi
  4048e7:	85 ff                	test   %edi,%edi
  4048e9:	0f 84 5e 01 00 00    	je     0x404a4d
  4048ef:	8b 35 28 c0 40 00    	mov    0x40c028,%esi
  4048f5:	68 94 c8 40 00       	push   $0x40c894
  4048fa:	57                   	push   %edi
  4048fb:	ff d6                	call   *%esi
  4048fd:	68 88 c8 40 00       	push   $0x40c888
  404902:	57                   	push   %edi
  404903:	a3 7c f4 40 00       	mov    %eax,0x40f47c
  404908:	ff d6                	call   *%esi
  40490a:	68 7c c8 40 00       	push   $0x40c87c
  40490f:	57                   	push   %edi
  404910:	a3 80 f4 40 00       	mov    %eax,0x40f480
  404915:	ff d6                	call   *%esi
  404917:	68 74 c8 40 00       	push   $0x40c874
  40491c:	57                   	push   %edi
  40491d:	a3 84 f4 40 00       	mov    %eax,0x40f484
  404922:	ff d6                	call   *%esi
  404924:	83 3d 7c f4 40 00 00 	cmpl   $0x0,0x40f47c
  40492b:	8b 35 6c c0 40 00    	mov    0x40c06c,%esi
  404931:	a3 88 f4 40 00       	mov    %eax,0x40f488
  404936:	74 16                	je     0x40494e
  404938:	83 3d 80 f4 40 00 00 	cmpl   $0x0,0x40f480
  40493f:	74 0d                	je     0x40494e
  404941:	83 3d 84 f4 40 00 00 	cmpl   $0x0,0x40f484
  404948:	74 04                	je     0x40494e
  40494a:	85 c0                	test   %eax,%eax
  40494c:	75 24                	jne    0x404972
  40494e:	a1 64 c0 40 00       	mov    0x40c064,%eax
  404953:	a3 80 f4 40 00       	mov    %eax,0x40f480
  404958:	a1 70 c0 40 00       	mov    0x40c070,%eax
  40495d:	c7 05 7c f4 40 00 a7 	movl   $0x4045a7,0x40f47c
  404964:	45 40 00 
  404967:	89 35 84 f4 40 00    	mov    %esi,0x40f484
  40496d:	a3 88 f4 40 00       	mov    %eax,0x40f488
  404972:	ff 15 68 c0 40 00    	call   *0x40c068
  404978:	a3 1c e5 40 00       	mov    %eax,0x40e51c
  40497d:	83 f8 ff             	cmp    $0xffffffff,%eax
  404980:	0f 84 cc 00 00 00    	je     0x404a52
  404986:	ff 35 80 f4 40 00    	pushl  0x40f480
  40498c:	50                   	push   %eax
  40498d:	ff d6                	call   *%esi
  40498f:	85 c0                	test   %eax,%eax
  404991:	0f 84 bb 00 00 00    	je     0x404a52
  404997:	e8 81 f0 ff ff       	call   0x403a1d
  40499c:	ff 35 7c f4 40 00    	pushl  0x40f47c
  4049a2:	e8 13 fb ff ff       	call   0x4044ba
  4049a7:	ff 35 80 f4 40 00    	pushl  0x40f480
  4049ad:	a3 7c f4 40 00       	mov    %eax,0x40f47c
  4049b2:	e8 03 fb ff ff       	call   0x4044ba
  4049b7:	ff 35 84 f4 40 00    	pushl  0x40f484
  4049bd:	a3 80 f4 40 00       	mov    %eax,0x40f480
  4049c2:	e8 f3 fa ff ff       	call   0x4044ba
  4049c7:	ff 35 88 f4 40 00    	pushl  0x40f488
  4049cd:	a3 84 f4 40 00       	mov    %eax,0x40f484
  4049d2:	e8 e3 fa ff ff       	call   0x4044ba
  4049d7:	83 c4 10             	add    $0x10,%esp
  4049da:	a3 88 f4 40 00       	mov    %eax,0x40f488
  4049df:	e8 2a 05 00 00       	call   0x404f0e
  4049e4:	85 c0                	test   %eax,%eax
  4049e6:	74 65                	je     0x404a4d
  4049e8:	68 9b 47 40 00       	push   $0x40479b
  4049ed:	ff 35 7c f4 40 00    	pushl  0x40f47c
  4049f3:	e8 3d fb ff ff       	call   0x404535
  4049f8:	59                   	pop    %ecx
  4049f9:	ff d0                	call   *%eax
  4049fb:	a3 18 e5 40 00       	mov    %eax,0x40e518
  404a00:	83 f8 ff             	cmp    $0xffffffff,%eax
  404a03:	74 48                	je     0x404a4d
  404a05:	68 14 02 00 00       	push   $0x214
  404a0a:	6a 01                	push   $0x1
  404a0c:	e8 51 01 00 00       	call   0x404b62
  404a11:	8b f0                	mov    %eax,%esi
  404a13:	59                   	pop    %ecx
  404a14:	59                   	pop    %ecx
  404a15:	85 f6                	test   %esi,%esi
  404a17:	74 34                	je     0x404a4d
  404a19:	56                   	push   %esi
  404a1a:	ff 35 18 e5 40 00    	pushl  0x40e518
  404a20:	ff 35 84 f4 40 00    	pushl  0x40f484
  404a26:	e8 0a fb ff ff       	call   0x404535
  404a2b:	59                   	pop    %ecx
  404a2c:	ff d0                	call   *%eax
  404a2e:	85 c0                	test   %eax,%eax
  404a30:	74 1b                	je     0x404a4d
  404a32:	6a 00                	push   $0x0
  404a34:	56                   	push   %esi
  404a35:	e8 e7 fb ff ff       	call   0x404621
  404a3a:	59                   	pop    %ecx
  404a3b:	59                   	pop    %ecx
  404a3c:	ff 15 7c c0 40 00    	call   *0x40c07c
  404a42:	83 4e 04 ff          	orl    $0xffffffff,0x4(%esi)
  404a46:	89 06                	mov    %eax,(%esi)
  404a48:	33 c0                	xor    %eax,%eax
  404a4a:	40                   	inc    %eax
  404a4b:	eb 07                	jmp    0x404a54
  404a4d:	e8 92 fb ff ff       	call   0x4045e4
  404a52:	33 c0                	xor    %eax,%eax
  404a54:	5f                   	pop    %edi
  404a55:	5e                   	pop    %esi
  404a56:	c3                   	ret    
  404a57:	8b ff                	mov    %edi,%edi
  404a59:	55                   	push   %ebp
  404a5a:	8b ec                	mov    %esp,%ebp
  404a5c:	33 c0                	xor    %eax,%eax
  404a5e:	39 45 08             	cmp    %eax,0x8(%ebp)
  404a61:	6a 00                	push   $0x0
  404a63:	0f 94 c0             	sete   %al
  404a66:	68 00 10 00 00       	push   $0x1000
  404a6b:	50                   	push   %eax
  404a6c:	ff 15 84 c0 40 00    	call   *0x40c084
  404a72:	a3 8c f4 40 00       	mov    %eax,0x40f48c
  404a77:	85 c0                	test   %eax,%eax
  404a79:	75 02                	jne    0x404a7d
  404a7b:	5d                   	pop    %ebp
  404a7c:	c3                   	ret    
  404a7d:	33 c0                	xor    %eax,%eax
  404a7f:	40                   	inc    %eax
  404a80:	a3 80 fa 40 00       	mov    %eax,0x40fa80
  404a85:	5d                   	pop    %ebp
  404a86:	c3                   	ret    
  404a87:	8b ff                	mov    %edi,%edi
  404a89:	55                   	push   %ebp
  404a8a:	8b ec                	mov    %esp,%ebp
  404a8c:	83 ec 10             	sub    $0x10,%esp
  404a8f:	a1 00 e4 40 00       	mov    0x40e400,%eax
  404a94:	83 65 f8 00          	andl   $0x0,-0x8(%ebp)
  404a98:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  404a9c:	53                   	push   %ebx
  404a9d:	57                   	push   %edi
  404a9e:	bf 4e e6 40 bb       	mov    $0xbb40e64e,%edi
  404aa3:	bb 00 00 ff ff       	mov    $0xffff0000,%ebx
  404aa8:	3b c7                	cmp    %edi,%eax
  404aaa:	74 0d                	je     0x404ab9
  404aac:	85 c3                	test   %eax,%ebx
  404aae:	74 09                	je     0x404ab9
  404ab0:	f7 d0                	not    %eax
  404ab2:	a3 04 e4 40 00       	mov    %eax,0x40e404
  404ab7:	eb 60                	jmp    0x404b19
  404ab9:	56                   	push   %esi
  404aba:	8d 45 f8             	lea    -0x8(%ebp),%eax
  404abd:	50                   	push   %eax
  404abe:	ff 15 9c c0 40 00    	call   *0x40c09c
  404ac4:	8b 75 fc             	mov    -0x4(%ebp),%esi
  404ac7:	33 75 f8             	xor    -0x8(%ebp),%esi
  404aca:	ff 15 98 c0 40 00    	call   *0x40c098
  404ad0:	33 f0                	xor    %eax,%esi
  404ad2:	ff 15 7c c0 40 00    	call   *0x40c07c
  404ad8:	33 f0                	xor    %eax,%esi
  404ada:	ff 15 94 c0 40 00    	call   *0x40c094
  404ae0:	33 f0                	xor    %eax,%esi
  404ae2:	8d 45 f0             	lea    -0x10(%ebp),%eax
  404ae5:	50                   	push   %eax
  404ae6:	ff 15 90 c0 40 00    	call   *0x40c090
  404aec:	8b 45 f4             	mov    -0xc(%ebp),%eax
  404aef:	33 45 f0             	xor    -0x10(%ebp),%eax
  404af2:	33 f0                	xor    %eax,%esi
  404af4:	3b f7                	cmp    %edi,%esi
  404af6:	75 07                	jne    0x404aff
  404af8:	be 4f e6 40 bb       	mov    $0xbb40e64f,%esi
  404afd:	eb 0b                	jmp    0x404b0a
  404aff:	85 f3                	test   %esi,%ebx
  404b01:	75 07                	jne    0x404b0a
  404b03:	8b c6                	mov    %esi,%eax
  404b05:	c1 e0 10             	shl    $0x10,%eax
  404b08:	0b f0                	or     %eax,%esi
  404b0a:	89 35 00 e4 40 00    	mov    %esi,0x40e400
  404b10:	f7 d6                	not    %esi
  404b12:	89 35 04 e4 40 00    	mov    %esi,0x40e404
  404b18:	5e                   	pop    %esi
  404b19:	5f                   	pop    %edi
  404b1a:	5b                   	pop    %ebx
  404b1b:	c9                   	leave  
  404b1c:	c3                   	ret    
  404b1d:	8b ff                	mov    %edi,%edi
  404b1f:	55                   	push   %ebp
  404b20:	8b ec                	mov    %esp,%ebp
  404b22:	56                   	push   %esi
  404b23:	57                   	push   %edi
  404b24:	33 f6                	xor    %esi,%esi
  404b26:	ff 75 08             	pushl  0x8(%ebp)
  404b29:	e8 77 33 00 00       	call   0x407ea5
  404b2e:	8b f8                	mov    %eax,%edi
  404b30:	59                   	pop    %ecx
  404b31:	85 ff                	test   %edi,%edi
  404b33:	75 27                	jne    0x404b5c
  404b35:	39 05 90 f4 40 00    	cmp    %eax,0x40f490
  404b3b:	76 1f                	jbe    0x404b5c
  404b3d:	56                   	push   %esi
  404b3e:	ff 15 24 c0 40 00    	call   *0x40c024
  404b44:	8d 86 e8 03 00 00    	lea    0x3e8(%esi),%eax
  404b4a:	3b 05 90 f4 40 00    	cmp    0x40f490,%eax
  404b50:	76 03                	jbe    0x404b55
  404b52:	83 c8 ff             	or     $0xffffffff,%eax
  404b55:	8b f0                	mov    %eax,%esi
  404b57:	83 f8 ff             	cmp    $0xffffffff,%eax
  404b5a:	75 ca                	jne    0x404b26
  404b5c:	8b c7                	mov    %edi,%eax
  404b5e:	5f                   	pop    %edi
  404b5f:	5e                   	pop    %esi
  404b60:	5d                   	pop    %ebp
  404b61:	c3                   	ret    
  404b62:	8b ff                	mov    %edi,%edi
  404b64:	55                   	push   %ebp
  404b65:	8b ec                	mov    %esp,%ebp
  404b67:	56                   	push   %esi
  404b68:	57                   	push   %edi
  404b69:	33 f6                	xor    %esi,%esi
  404b6b:	6a 00                	push   $0x0
  404b6d:	ff 75 0c             	pushl  0xc(%ebp)
  404b70:	ff 75 08             	pushl  0x8(%ebp)
  404b73:	e8 f7 33 00 00       	call   0x407f6f
  404b78:	8b f8                	mov    %eax,%edi
  404b7a:	83 c4 0c             	add    $0xc,%esp
  404b7d:	85 ff                	test   %edi,%edi
  404b7f:	75 27                	jne    0x404ba8
  404b81:	39 05 90 f4 40 00    	cmp    %eax,0x40f490
  404b87:	76 1f                	jbe    0x404ba8
  404b89:	56                   	push   %esi
  404b8a:	ff 15 24 c0 40 00    	call   *0x40c024
  404b90:	8d 86 e8 03 00 00    	lea    0x3e8(%esi),%eax
  404b96:	3b 05 90 f4 40 00    	cmp    0x40f490,%eax
  404b9c:	76 03                	jbe    0x404ba1
  404b9e:	83 c8 ff             	or     $0xffffffff,%eax
  404ba1:	8b f0                	mov    %eax,%esi
  404ba3:	83 f8 ff             	cmp    $0xffffffff,%eax
  404ba6:	75 c3                	jne    0x404b6b
  404ba8:	8b c7                	mov    %edi,%eax
  404baa:	5f                   	pop    %edi
  404bab:	5e                   	pop    %esi
  404bac:	5d                   	pop    %ebp
  404bad:	c3                   	ret    
  404bae:	8b ff                	mov    %edi,%edi
  404bb0:	55                   	push   %ebp
  404bb1:	8b ec                	mov    %esp,%ebp
  404bb3:	56                   	push   %esi
  404bb4:	57                   	push   %edi
  404bb5:	33 f6                	xor    %esi,%esi
  404bb7:	ff 75 0c             	pushl  0xc(%ebp)
  404bba:	ff 75 08             	pushl  0x8(%ebp)
  404bbd:	e8 cb 34 00 00       	call   0x40808d
  404bc2:	8b f8                	mov    %eax,%edi
  404bc4:	59                   	pop    %ecx
  404bc5:	59                   	pop    %ecx
  404bc6:	85 ff                	test   %edi,%edi
  404bc8:	75 2c                	jne    0x404bf6
  404bca:	39 45 0c             	cmp    %eax,0xc(%ebp)
  404bcd:	74 27                	je     0x404bf6
  404bcf:	39 05 90 f4 40 00    	cmp    %eax,0x40f490
  404bd5:	76 1f                	jbe    0x404bf6
  404bd7:	56                   	push   %esi
  404bd8:	ff 15 24 c0 40 00    	call   *0x40c024
  404bde:	8d 86 e8 03 00 00    	lea    0x3e8(%esi),%eax
  404be4:	3b 05 90 f4 40 00    	cmp    0x40f490,%eax
  404bea:	76 03                	jbe    0x404bef
  404bec:	83 c8 ff             	or     $0xffffffff,%eax
  404bef:	8b f0                	mov    %eax,%esi
  404bf1:	83 f8 ff             	cmp    $0xffffffff,%eax
  404bf4:	75 c1                	jne    0x404bb7
  404bf6:	8b c7                	mov    %edi,%eax
  404bf8:	5f                   	pop    %edi
  404bf9:	5e                   	pop    %esi
  404bfa:	5d                   	pop    %ebp
  404bfb:	c3                   	ret    
  404bfc:	8b ff                	mov    %edi,%edi
  404bfe:	55                   	push   %ebp
  404bff:	8b ec                	mov    %esp,%ebp
  404c01:	56                   	push   %esi
  404c02:	57                   	push   %edi
  404c03:	33 f6                	xor    %esi,%esi
  404c05:	ff 75 10             	pushl  0x10(%ebp)
  404c08:	ff 75 0c             	pushl  0xc(%ebp)
  404c0b:	ff 75 08             	pushl  0x8(%ebp)
  404c0e:	e8 95 36 00 00       	call   0x4082a8
  404c13:	8b f8                	mov    %eax,%edi
  404c15:	83 c4 0c             	add    $0xc,%esp
  404c18:	85 ff                	test   %edi,%edi
  404c1a:	75 2c                	jne    0x404c48
  404c1c:	39 45 10             	cmp    %eax,0x10(%ebp)
  404c1f:	74 27                	je     0x404c48
  404c21:	39 05 90 f4 40 00    	cmp    %eax,0x40f490
  404c27:	76 1f                	jbe    0x404c48
  404c29:	56                   	push   %esi
  404c2a:	ff 15 24 c0 40 00    	call   *0x40c024
  404c30:	8d 86 e8 03 00 00    	lea    0x3e8(%esi),%eax
  404c36:	3b 05 90 f4 40 00    	cmp    0x40f490,%eax
  404c3c:	76 03                	jbe    0x404c41
  404c3e:	83 c8 ff             	or     $0xffffffff,%eax
  404c41:	8b f0                	mov    %eax,%esi
  404c43:	83 f8 ff             	cmp    $0xffffffff,%eax
  404c46:	75 bd                	jne    0x404c05
  404c48:	8b c7                	mov    %edi,%eax
  404c4a:	5f                   	pop    %edi
  404c4b:	5e                   	pop    %esi
  404c4c:	5d                   	pop    %ebp
  404c4d:	c3                   	ret    
  404c4e:	6a 0c                	push   $0xc
  404c50:	68 d0 d4 40 00       	push   $0x40d4d0
  404c55:	e8 16 d8 ff ff       	call   0x402470
  404c5a:	8b 75 08             	mov    0x8(%ebp),%esi
  404c5d:	85 f6                	test   %esi,%esi
  404c5f:	74 75                	je     0x404cd6
  404c61:	83 3d 80 fa 40 00 03 	cmpl   $0x3,0x40fa80
  404c68:	75 43                	jne    0x404cad
  404c6a:	6a 04                	push   $0x4
  404c6c:	e8 19 04 00 00       	call   0x40508a
  404c71:	59                   	pop    %ecx
  404c72:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  404c76:	56                   	push   %esi
  404c77:	e8 16 27 00 00       	call   0x407392
  404c7c:	59                   	pop    %ecx
  404c7d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  404c80:	85 c0                	test   %eax,%eax
  404c82:	74 09                	je     0x404c8d
  404c84:	56                   	push   %esi
  404c85:	50                   	push   %eax
  404c86:	e8 37 27 00 00       	call   0x4073c2
  404c8b:	59                   	pop    %ecx
  404c8c:	59                   	pop    %ecx
  404c8d:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  404c94:	e8 0b 00 00 00       	call   0x404ca4
  404c99:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
  404c9d:	75 37                	jne    0x404cd6
  404c9f:	ff 75 08             	pushl  0x8(%ebp)
  404ca2:	eb 0a                	jmp    0x404cae
  404ca4:	6a 04                	push   $0x4
  404ca6:	e8 05 03 00 00       	call   0x404fb0
  404cab:	59                   	pop    %ecx
  404cac:	c3                   	ret    
  404cad:	56                   	push   %esi
  404cae:	6a 00                	push   $0x0
  404cb0:	ff 35 8c f4 40 00    	pushl  0x40f48c
  404cb6:	ff 15 8c c0 40 00    	call   *0x40c08c
  404cbc:	85 c0                	test   %eax,%eax
  404cbe:	75 16                	jne    0x404cd6
  404cc0:	e8 60 d7 ff ff       	call   0x402425
  404cc5:	8b f0                	mov    %eax,%esi
  404cc7:	ff 15 4c c0 40 00    	call   *0x40c04c
  404ccd:	50                   	push   %eax
  404cce:	e8 10 d7 ff ff       	call   0x4023e3
  404cd3:	89 06                	mov    %eax,(%esi)
  404cd5:	59                   	pop    %ecx
  404cd6:	e8 da d7 ff ff       	call   0x4024b5
  404cdb:	c3                   	ret    
  404cdc:	6a 10                	push   $0x10
  404cde:	68 f0 d4 40 00       	push   $0x40d4f0
  404ce3:	e8 88 d7 ff ff       	call   0x402470
  404ce8:	33 db                	xor    %ebx,%ebx
  404cea:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
  404ced:	6a 01                	push   $0x1
  404cef:	e8 96 03 00 00       	call   0x40508a
  404cf4:	59                   	pop    %ecx
  404cf5:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  404cf8:	6a 03                	push   $0x3
  404cfa:	5f                   	pop    %edi
  404cfb:	89 7d e0             	mov    %edi,-0x20(%ebp)
  404cfe:	3b 3d c0 0b 41 00    	cmp    0x410bc0,%edi
  404d04:	7d 57                	jge    0x404d5d
  404d06:	8b f7                	mov    %edi,%esi
  404d08:	c1 e6 02             	shl    $0x2,%esi
  404d0b:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  404d10:	03 c6                	add    %esi,%eax
  404d12:	39 18                	cmp    %ebx,(%eax)
  404d14:	74 44                	je     0x404d5a
  404d16:	8b 00                	mov    (%eax),%eax
  404d18:	f6 40 0c 83          	testb  $0x83,0xc(%eax)
  404d1c:	74 0f                	je     0x404d2d
  404d1e:	50                   	push   %eax
  404d1f:	e8 76 36 00 00       	call   0x40839a
  404d24:	59                   	pop    %ecx
  404d25:	83 f8 ff             	cmp    $0xffffffff,%eax
  404d28:	74 03                	je     0x404d2d
  404d2a:	ff 45 e4             	incl   -0x1c(%ebp)
  404d2d:	83 ff 14             	cmp    $0x14,%edi
  404d30:	7c 28                	jl     0x404d5a
  404d32:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  404d37:	8b 04 06             	mov    (%esi,%eax,1),%eax
  404d3a:	83 c0 20             	add    $0x20,%eax
  404d3d:	50                   	push   %eax
  404d3e:	ff 15 60 c0 40 00    	call   *0x40c060
  404d44:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  404d49:	ff 34 06             	pushl  (%esi,%eax,1)
  404d4c:	e8 fd fe ff ff       	call   0x404c4e
  404d51:	59                   	pop    %ecx
  404d52:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  404d57:	89 1c 06             	mov    %ebx,(%esi,%eax,1)
  404d5a:	47                   	inc    %edi
  404d5b:	eb 9e                	jmp    0x404cfb
  404d5d:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  404d64:	e8 09 00 00 00       	call   0x404d72
  404d69:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  404d6c:	e8 44 d7 ff ff       	call   0x4024b5
  404d71:	c3                   	ret    
  404d72:	6a 01                	push   $0x1
  404d74:	e8 37 02 00 00       	call   0x404fb0
  404d79:	59                   	pop    %ecx
  404d7a:	c3                   	ret    
  404d7b:	8b ff                	mov    %edi,%edi
  404d7d:	55                   	push   %ebp
  404d7e:	8b ec                	mov    %esp,%ebp
  404d80:	53                   	push   %ebx
  404d81:	56                   	push   %esi
  404d82:	8b 75 08             	mov    0x8(%ebp),%esi
  404d85:	8b 46 0c             	mov    0xc(%esi),%eax
  404d88:	8b c8                	mov    %eax,%ecx
  404d8a:	80 e1 03             	and    $0x3,%cl
  404d8d:	33 db                	xor    %ebx,%ebx
  404d8f:	80 f9 02             	cmp    $0x2,%cl
  404d92:	75 40                	jne    0x404dd4
  404d94:	a9 08 01 00 00       	test   $0x108,%eax
  404d99:	74 39                	je     0x404dd4
  404d9b:	8b 46 08             	mov    0x8(%esi),%eax
  404d9e:	57                   	push   %edi
  404d9f:	8b 3e                	mov    (%esi),%edi
  404da1:	2b f8                	sub    %eax,%edi
  404da3:	85 ff                	test   %edi,%edi
  404da5:	7e 2c                	jle    0x404dd3
  404da7:	57                   	push   %edi
  404da8:	50                   	push   %eax
  404da9:	56                   	push   %esi
  404daa:	e8 72 03 00 00       	call   0x405121
  404daf:	59                   	pop    %ecx
  404db0:	50                   	push   %eax
  404db1:	e8 93 3d 00 00       	call   0x408b49
  404db6:	83 c4 0c             	add    $0xc,%esp
  404db9:	3b c7                	cmp    %edi,%eax
  404dbb:	75 0f                	jne    0x404dcc
  404dbd:	8b 46 0c             	mov    0xc(%esi),%eax
  404dc0:	84 c0                	test   %al,%al
  404dc2:	79 0f                	jns    0x404dd3
  404dc4:	83 e0 fd             	and    $0xfffffffd,%eax
  404dc7:	89 46 0c             	mov    %eax,0xc(%esi)
  404dca:	eb 07                	jmp    0x404dd3
  404dcc:	83 4e 0c 20          	orl    $0x20,0xc(%esi)
  404dd0:	83 cb ff             	or     $0xffffffff,%ebx
  404dd3:	5f                   	pop    %edi
  404dd4:	8b 46 08             	mov    0x8(%esi),%eax
  404dd7:	83 66 04 00          	andl   $0x0,0x4(%esi)
  404ddb:	89 06                	mov    %eax,(%esi)
  404ddd:	5e                   	pop    %esi
  404dde:	8b c3                	mov    %ebx,%eax
  404de0:	5b                   	pop    %ebx
  404de1:	5d                   	pop    %ebp
  404de2:	c3                   	ret    
  404de3:	8b ff                	mov    %edi,%edi
  404de5:	55                   	push   %ebp
  404de6:	8b ec                	mov    %esp,%ebp
  404de8:	56                   	push   %esi
  404de9:	8b 75 08             	mov    0x8(%ebp),%esi
  404dec:	85 f6                	test   %esi,%esi
  404dee:	75 09                	jne    0x404df9
  404df0:	56                   	push   %esi
  404df1:	e8 35 00 00 00       	call   0x404e2b
  404df6:	59                   	pop    %ecx
  404df7:	eb 2f                	jmp    0x404e28
  404df9:	56                   	push   %esi
  404dfa:	e8 7c ff ff ff       	call   0x404d7b
  404dff:	59                   	pop    %ecx
  404e00:	85 c0                	test   %eax,%eax
  404e02:	74 05                	je     0x404e09
  404e04:	83 c8 ff             	or     $0xffffffff,%eax
  404e07:	eb 1f                	jmp    0x404e28
  404e09:	f7 46 0c 00 40 00 00 	testl  $0x4000,0xc(%esi)
  404e10:	74 14                	je     0x404e26
  404e12:	56                   	push   %esi
  404e13:	e8 09 03 00 00       	call   0x405121
  404e18:	50                   	push   %eax
  404e19:	e8 07 3e 00 00       	call   0x408c25
  404e1e:	59                   	pop    %ecx
  404e1f:	f7 d8                	neg    %eax
  404e21:	59                   	pop    %ecx
  404e22:	1b c0                	sbb    %eax,%eax
  404e24:	eb 02                	jmp    0x404e28
  404e26:	33 c0                	xor    %eax,%eax
  404e28:	5e                   	pop    %esi
  404e29:	5d                   	pop    %ebp
  404e2a:	c3                   	ret    
  404e2b:	6a 14                	push   $0x14
  404e2d:	68 10 d5 40 00       	push   $0x40d510
  404e32:	e8 39 d6 ff ff       	call   0x402470
  404e37:	33 ff                	xor    %edi,%edi
  404e39:	89 7d e4             	mov    %edi,-0x1c(%ebp)
  404e3c:	89 7d dc             	mov    %edi,-0x24(%ebp)
  404e3f:	6a 01                	push   $0x1
  404e41:	e8 44 02 00 00       	call   0x40508a
  404e46:	59                   	pop    %ecx
  404e47:	89 7d fc             	mov    %edi,-0x4(%ebp)
  404e4a:	33 f6                	xor    %esi,%esi
  404e4c:	89 75 e0             	mov    %esi,-0x20(%ebp)
  404e4f:	3b 35 c0 0b 41 00    	cmp    0x410bc0,%esi
  404e55:	0f 8d 83 00 00 00    	jge    0x404ede
  404e5b:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  404e60:	8d 04 b0             	lea    (%eax,%esi,4),%eax
  404e63:	39 38                	cmp    %edi,(%eax)
  404e65:	74 5e                	je     0x404ec5
  404e67:	8b 00                	mov    (%eax),%eax
  404e69:	f6 40 0c 83          	testb  $0x83,0xc(%eax)
  404e6d:	74 56                	je     0x404ec5
  404e6f:	50                   	push   %eax
  404e70:	56                   	push   %esi
  404e71:	e8 de c5 ff ff       	call   0x401454
  404e76:	59                   	pop    %ecx
  404e77:	59                   	pop    %ecx
  404e78:	33 d2                	xor    %edx,%edx
  404e7a:	42                   	inc    %edx
  404e7b:	89 55 fc             	mov    %edx,-0x4(%ebp)
  404e7e:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  404e83:	8b 04 b0             	mov    (%eax,%esi,4),%eax
  404e86:	8b 48 0c             	mov    0xc(%eax),%ecx
  404e89:	f6 c1 83             	test   $0x83,%cl
  404e8c:	74 2f                	je     0x404ebd
  404e8e:	39 55 08             	cmp    %edx,0x8(%ebp)
  404e91:	75 11                	jne    0x404ea4
  404e93:	50                   	push   %eax
  404e94:	e8 4a ff ff ff       	call   0x404de3
  404e99:	59                   	pop    %ecx
  404e9a:	83 f8 ff             	cmp    $0xffffffff,%eax
  404e9d:	74 1e                	je     0x404ebd
  404e9f:	ff 45 e4             	incl   -0x1c(%ebp)
  404ea2:	eb 19                	jmp    0x404ebd
  404ea4:	39 7d 08             	cmp    %edi,0x8(%ebp)
  404ea7:	75 14                	jne    0x404ebd
  404ea9:	f6 c1 02             	test   $0x2,%cl
  404eac:	74 0f                	je     0x404ebd
  404eae:	50                   	push   %eax
  404eaf:	e8 2f ff ff ff       	call   0x404de3
  404eb4:	59                   	pop    %ecx
  404eb5:	83 f8 ff             	cmp    $0xffffffff,%eax
  404eb8:	75 03                	jne    0x404ebd
  404eba:	09 45 dc             	or     %eax,-0x24(%ebp)
  404ebd:	89 7d fc             	mov    %edi,-0x4(%ebp)
  404ec0:	e8 08 00 00 00       	call   0x404ecd
  404ec5:	46                   	inc    %esi
  404ec6:	eb 84                	jmp    0x404e4c
  404ec8:	33 ff                	xor    %edi,%edi
  404eca:	8b 75 e0             	mov    -0x20(%ebp),%esi
  404ecd:	a1 bc fb 40 00       	mov    0x40fbbc,%eax
  404ed2:	ff 34 b0             	pushl  (%eax,%esi,4)
  404ed5:	56                   	push   %esi
  404ed6:	e8 e7 c5 ff ff       	call   0x4014c2
  404edb:	59                   	pop    %ecx
  404edc:	59                   	pop    %ecx
  404edd:	c3                   	ret    
  404ede:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  404ee5:	e8 12 00 00 00       	call   0x404efc
  404eea:	83 7d 08 01          	cmpl   $0x1,0x8(%ebp)
  404eee:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  404ef1:	74 03                	je     0x404ef6
  404ef3:	8b 45 dc             	mov    -0x24(%ebp),%eax
  404ef6:	e8 ba d5 ff ff       	call   0x4024b5
  404efb:	c3                   	ret    
  404efc:	6a 01                	push   $0x1
  404efe:	e8 ad 00 00 00       	call   0x404fb0
  404f03:	59                   	pop    %ecx
  404f04:	c3                   	ret    
  404f05:	6a 01                	push   $0x1
  404f07:	e8 1f ff ff ff       	call   0x404e2b
  404f0c:	59                   	pop    %ecx
  404f0d:	c3                   	ret    
  404f0e:	8b ff                	mov    %edi,%edi
  404f10:	56                   	push   %esi
  404f11:	57                   	push   %edi
  404f12:	33 f6                	xor    %esi,%esi
  404f14:	bf 98 f4 40 00       	mov    $0x40f498,%edi
  404f19:	83 3c f5 2c e5 40 00 	cmpl   $0x1,0x40e52c(,%esi,8)
  404f20:	01 
  404f21:	75 1e                	jne    0x404f41
  404f23:	8d 04 f5 28 e5 40 00 	lea    0x40e528(,%esi,8),%eax
  404f2a:	89 38                	mov    %edi,(%eax)
  404f2c:	68 a0 0f 00 00       	push   $0xfa0
  404f31:	ff 30                	pushl  (%eax)
  404f33:	83 c7 18             	add    $0x18,%edi
  404f36:	e8 10 20 00 00       	call   0x406f4b
  404f3b:	59                   	pop    %ecx
  404f3c:	59                   	pop    %ecx
  404f3d:	85 c0                	test   %eax,%eax
  404f3f:	74 0c                	je     0x404f4d
  404f41:	46                   	inc    %esi
  404f42:	83 fe 24             	cmp    $0x24,%esi
  404f45:	7c d2                	jl     0x404f19
  404f47:	33 c0                	xor    %eax,%eax
  404f49:	40                   	inc    %eax
  404f4a:	5f                   	pop    %edi
  404f4b:	5e                   	pop    %esi
  404f4c:	c3                   	ret    
  404f4d:	83 24 f5 28 e5 40 00 	andl   $0x0,0x40e528(,%esi,8)
  404f54:	00 
  404f55:	33 c0                	xor    %eax,%eax
  404f57:	eb f1                	jmp    0x404f4a
  404f59:	8b ff                	mov    %edi,%edi
  404f5b:	53                   	push   %ebx
  404f5c:	8b 1d 60 c0 40 00    	mov    0x40c060,%ebx
  404f62:	56                   	push   %esi
  404f63:	be 28 e5 40 00       	mov    $0x40e528,%esi
  404f68:	57                   	push   %edi
  404f69:	8b 3e                	mov    (%esi),%edi
  404f6b:	85 ff                	test   %edi,%edi
  404f6d:	74 13                	je     0x404f82
  404f6f:	83 7e 04 01          	cmpl   $0x1,0x4(%esi)
  404f73:	74 0d                	je     0x404f82
  404f75:	57                   	push   %edi
  404f76:	ff d3                	call   *%ebx
  404f78:	57                   	push   %edi
  404f79:	e8 d0 fc ff ff       	call   0x404c4e
  404f7e:	83 26 00             	andl   $0x0,(%esi)
  404f81:	59                   	pop    %ecx
  404f82:	83 c6 08             	add    $0x8,%esi
  404f85:	81 fe 48 e6 40 00    	cmp    $0x40e648,%esi
  404f8b:	7c dc                	jl     0x404f69
  404f8d:	be 28 e5 40 00       	mov    $0x40e528,%esi
  404f92:	5f                   	pop    %edi
  404f93:	8b 06                	mov    (%esi),%eax
  404f95:	85 c0                	test   %eax,%eax
  404f97:	74 09                	je     0x404fa2
  404f99:	83 7e 04 01          	cmpl   $0x1,0x4(%esi)
  404f9d:	75 03                	jne    0x404fa2
  404f9f:	50                   	push   %eax
  404fa0:	ff d3                	call   *%ebx
  404fa2:	83 c6 08             	add    $0x8,%esi
  404fa5:	81 fe 48 e6 40 00    	cmp    $0x40e648,%esi
  404fab:	7c e6                	jl     0x404f93
  404fad:	5e                   	pop    %esi
  404fae:	5b                   	pop    %ebx
  404faf:	c3                   	ret    
  404fb0:	8b ff                	mov    %edi,%edi
  404fb2:	55                   	push   %ebp
  404fb3:	8b ec                	mov    %esp,%ebp
  404fb5:	8b 45 08             	mov    0x8(%ebp),%eax
  404fb8:	ff 34 c5 28 e5 40 00 	pushl  0x40e528(,%eax,8)
  404fbf:	ff 15 08 c0 40 00    	call   *0x40c008
  404fc5:	5d                   	pop    %ebp
  404fc6:	c3                   	ret    
  404fc7:	6a 0c                	push   $0xc
  404fc9:	68 38 d5 40 00       	push   $0x40d538
  404fce:	e8 9d d4 ff ff       	call   0x402470
  404fd3:	33 ff                	xor    %edi,%edi
  404fd5:	47                   	inc    %edi
  404fd6:	89 7d e4             	mov    %edi,-0x1c(%ebp)
  404fd9:	33 db                	xor    %ebx,%ebx
  404fdb:	39 1d 8c f4 40 00    	cmp    %ebx,0x40f48c
  404fe1:	75 18                	jne    0x404ffb
  404fe3:	e8 2e ec ff ff       	call   0x403c16
  404fe8:	6a 1e                	push   $0x1e
  404fea:	e8 7c ea ff ff       	call   0x403a6b
  404fef:	68 ff 00 00 00       	push   $0xff
  404ff4:	e8 be e7 ff ff       	call   0x4037b7
  404ff9:	59                   	pop    %ecx
  404ffa:	59                   	pop    %ecx
  404ffb:	8b 75 08             	mov    0x8(%ebp),%esi
  404ffe:	8d 34 f5 28 e5 40 00 	lea    0x40e528(,%esi,8),%esi
  405005:	39 1e                	cmp    %ebx,(%esi)
  405007:	74 04                	je     0x40500d
  405009:	8b c7                	mov    %edi,%eax
  40500b:	eb 6e                	jmp    0x40507b
  40500d:	6a 18                	push   $0x18
  40500f:	e8 09 fb ff ff       	call   0x404b1d
  405014:	59                   	pop    %ecx
  405015:	8b f8                	mov    %eax,%edi
  405017:	3b fb                	cmp    %ebx,%edi
  405019:	75 0f                	jne    0x40502a
  40501b:	e8 05 d4 ff ff       	call   0x402425
  405020:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  405026:	33 c0                	xor    %eax,%eax
  405028:	eb 51                	jmp    0x40507b
  40502a:	6a 0a                	push   $0xa
  40502c:	e8 59 00 00 00       	call   0x40508a
  405031:	59                   	pop    %ecx
  405032:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  405035:	39 1e                	cmp    %ebx,(%esi)
  405037:	75 2c                	jne    0x405065
  405039:	68 a0 0f 00 00       	push   $0xfa0
  40503e:	57                   	push   %edi
  40503f:	e8 07 1f 00 00       	call   0x406f4b
  405044:	59                   	pop    %ecx
  405045:	59                   	pop    %ecx
  405046:	85 c0                	test   %eax,%eax
  405048:	75 17                	jne    0x405061
  40504a:	57                   	push   %edi
  40504b:	e8 fe fb ff ff       	call   0x404c4e
  405050:	59                   	pop    %ecx
  405051:	e8 cf d3 ff ff       	call   0x402425
  405056:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  40505c:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
  40505f:	eb 0b                	jmp    0x40506c
  405061:	89 3e                	mov    %edi,(%esi)
  405063:	eb 07                	jmp    0x40506c
  405065:	57                   	push   %edi
  405066:	e8 e3 fb ff ff       	call   0x404c4e
  40506b:	59                   	pop    %ecx
  40506c:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  405073:	e8 09 00 00 00       	call   0x405081
  405078:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  40507b:	e8 35 d4 ff ff       	call   0x4024b5
  405080:	c3                   	ret    
  405081:	6a 0a                	push   $0xa
  405083:	e8 28 ff ff ff       	call   0x404fb0
  405088:	59                   	pop    %ecx
  405089:	c3                   	ret    
  40508a:	8b ff                	mov    %edi,%edi
  40508c:	55                   	push   %ebp
  40508d:	8b ec                	mov    %esp,%ebp
  40508f:	8b 45 08             	mov    0x8(%ebp),%eax
  405092:	56                   	push   %esi
  405093:	8d 34 c5 28 e5 40 00 	lea    0x40e528(,%eax,8),%esi
  40509a:	83 3e 00             	cmpl   $0x0,(%esi)
  40509d:	75 13                	jne    0x4050b2
  40509f:	50                   	push   %eax
  4050a0:	e8 22 ff ff ff       	call   0x404fc7
  4050a5:	59                   	pop    %ecx
  4050a6:	85 c0                	test   %eax,%eax
  4050a8:	75 08                	jne    0x4050b2
  4050aa:	6a 11                	push   $0x11
  4050ac:	e8 b2 e6 ff ff       	call   0x403763
  4050b1:	59                   	pop    %ecx
  4050b2:	ff 36                	pushl  (%esi)
  4050b4:	ff 15 04 c0 40 00    	call   *0x40c004
  4050ba:	5e                   	pop    %esi
  4050bb:	5d                   	pop    %ebp
  4050bc:	c3                   	ret    
  4050bd:	8b ff                	mov    %edi,%edi
  4050bf:	55                   	push   %ebp
  4050c0:	8b ec                	mov    %esp,%ebp
  4050c2:	8b 45 08             	mov    0x8(%ebp),%eax
  4050c5:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4050c8:	75 0f                	jne    0x4050d9
  4050ca:	e8 56 d3 ff ff       	call   0x402425
  4050cf:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  4050d5:	33 c0                	xor    %eax,%eax
  4050d7:	5d                   	pop    %ebp
  4050d8:	c3                   	ret    
  4050d9:	56                   	push   %esi
  4050da:	33 f6                	xor    %esi,%esi
  4050dc:	3b c6                	cmp    %esi,%eax
  4050de:	7c 08                	jl     0x4050e8
  4050e0:	3b 05 84 fa 40 00    	cmp    0x40fa84,%eax
  4050e6:	72 1c                	jb     0x405104
  4050e8:	e8 38 d3 ff ff       	call   0x402425
  4050ed:	56                   	push   %esi
  4050ee:	56                   	push   %esi
  4050ef:	56                   	push   %esi
  4050f0:	56                   	push   %esi
  4050f1:	56                   	push   %esi
  4050f2:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  4050f8:	e8 c0 d2 ff ff       	call   0x4023bd
  4050fd:	83 c4 14             	add    $0x14,%esp
  405100:	33 c0                	xor    %eax,%eax
  405102:	eb 1a                	jmp    0x40511e
  405104:	8b c8                	mov    %eax,%ecx
  405106:	83 e0 1f             	and    $0x1f,%eax
  405109:	c1 f9 05             	sar    $0x5,%ecx
  40510c:	8b 0c 8d a0 fa 40 00 	mov    0x40faa0(,%ecx,4),%ecx
  405113:	c1 e0 06             	shl    $0x6,%eax
  405116:	0f be 44 01 04       	movsbl 0x4(%ecx,%eax,1),%eax
  40511b:	83 e0 40             	and    $0x40,%eax
  40511e:	5e                   	pop    %esi
  40511f:	5d                   	pop    %ebp
  405120:	c3                   	ret    
  405121:	8b ff                	mov    %edi,%edi
  405123:	55                   	push   %ebp
  405124:	8b ec                	mov    %esp,%ebp
  405126:	8b 45 08             	mov    0x8(%ebp),%eax
  405129:	56                   	push   %esi
  40512a:	33 f6                	xor    %esi,%esi
  40512c:	3b c6                	cmp    %esi,%eax
  40512e:	75 1d                	jne    0x40514d
  405130:	e8 f0 d2 ff ff       	call   0x402425
  405135:	56                   	push   %esi
  405136:	56                   	push   %esi
  405137:	56                   	push   %esi
  405138:	56                   	push   %esi
  405139:	56                   	push   %esi
  40513a:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  405140:	e8 78 d2 ff ff       	call   0x4023bd
  405145:	83 c4 14             	add    $0x14,%esp
  405148:	83 c8 ff             	or     $0xffffffff,%eax
  40514b:	eb 03                	jmp    0x405150
  40514d:	8b 40 10             	mov    0x10(%eax),%eax
  405150:	5e                   	pop    %esi
  405151:	5d                   	pop    %ebp
  405152:	c3                   	ret    
  405153:	2d a4 03 00 00       	sub    $0x3a4,%eax
  405158:	74 22                	je     0x40517c
  40515a:	83 e8 04             	sub    $0x4,%eax
  40515d:	74 17                	je     0x405176
  40515f:	83 e8 0d             	sub    $0xd,%eax
  405162:	74 0c                	je     0x405170
  405164:	48                   	dec    %eax
  405165:	74 03                	je     0x40516a
  405167:	33 c0                	xor    %eax,%eax
  405169:	c3                   	ret    
  40516a:	b8 04 04 00 00       	mov    $0x404,%eax
  40516f:	c3                   	ret    
  405170:	b8 12 04 00 00       	mov    $0x412,%eax
  405175:	c3                   	ret    
  405176:	b8 04 08 00 00       	mov    $0x804,%eax
  40517b:	c3                   	ret    
  40517c:	b8 11 04 00 00       	mov    $0x411,%eax
  405181:	c3                   	ret    
  405182:	8b ff                	mov    %edi,%edi
  405184:	56                   	push   %esi
  405185:	57                   	push   %edi
  405186:	8b f0                	mov    %eax,%esi
  405188:	68 01 01 00 00       	push   $0x101
  40518d:	33 ff                	xor    %edi,%edi
  40518f:	8d 46 1c             	lea    0x1c(%esi),%eax
  405192:	57                   	push   %edi
  405193:	50                   	push   %eax
  405194:	e8 57 0e 00 00       	call   0x405ff0
  405199:	33 c0                	xor    %eax,%eax
  40519b:	0f b7 c8             	movzwl %ax,%ecx
  40519e:	8b c1                	mov    %ecx,%eax
  4051a0:	89 7e 04             	mov    %edi,0x4(%esi)
  4051a3:	89 7e 08             	mov    %edi,0x8(%esi)
  4051a6:	89 7e 0c             	mov    %edi,0xc(%esi)
  4051a9:	c1 e1 10             	shl    $0x10,%ecx
  4051ac:	0b c1                	or     %ecx,%eax
  4051ae:	8d 7e 10             	lea    0x10(%esi),%edi
  4051b1:	ab                   	stos   %eax,%es:(%edi)
  4051b2:	ab                   	stos   %eax,%es:(%edi)
  4051b3:	ab                   	stos   %eax,%es:(%edi)
  4051b4:	b9 48 e6 40 00       	mov    $0x40e648,%ecx
  4051b9:	83 c4 0c             	add    $0xc,%esp
  4051bc:	8d 46 1c             	lea    0x1c(%esi),%eax
  4051bf:	2b ce                	sub    %esi,%ecx
  4051c1:	bf 01 01 00 00       	mov    $0x101,%edi
  4051c6:	8a 14 01             	mov    (%ecx,%eax,1),%dl
  4051c9:	88 10                	mov    %dl,(%eax)
  4051cb:	40                   	inc    %eax
  4051cc:	4f                   	dec    %edi
  4051cd:	75 f7                	jne    0x4051c6
  4051cf:	8d 86 1d 01 00 00    	lea    0x11d(%esi),%eax
  4051d5:	be 00 01 00 00       	mov    $0x100,%esi
  4051da:	8a 14 08             	mov    (%eax,%ecx,1),%dl
  4051dd:	88 10                	mov    %dl,(%eax)
  4051df:	40                   	inc    %eax
  4051e0:	4e                   	dec    %esi
  4051e1:	75 f7                	jne    0x4051da
  4051e3:	5f                   	pop    %edi
  4051e4:	5e                   	pop    %esi
  4051e5:	c3                   	ret    
  4051e6:	8b ff                	mov    %edi,%edi
  4051e8:	55                   	push   %ebp
  4051e9:	8b ec                	mov    %esp,%ebp
  4051eb:	81 ec 1c 05 00 00    	sub    $0x51c,%esp
  4051f1:	a1 00 e4 40 00       	mov    0x40e400,%eax
  4051f6:	33 c5                	xor    %ebp,%eax
  4051f8:	89 45 fc             	mov    %eax,-0x4(%ebp)
  4051fb:	53                   	push   %ebx
  4051fc:	57                   	push   %edi
  4051fd:	8d 85 e8 fa ff ff    	lea    -0x518(%ebp),%eax
  405203:	50                   	push   %eax
  405204:	ff 76 04             	pushl  0x4(%esi)
  405207:	ff 15 a0 c0 40 00    	call   *0x40c0a0
  40520d:	bf 00 01 00 00       	mov    $0x100,%edi
  405212:	85 c0                	test   %eax,%eax
  405214:	0f 84 fb 00 00 00    	je     0x405315
  40521a:	33 c0                	xor    %eax,%eax
  40521c:	88 84 05 fc fe ff ff 	mov    %al,-0x104(%ebp,%eax,1)
  405223:	40                   	inc    %eax
  405224:	3b c7                	cmp    %edi,%eax
  405226:	72 f4                	jb     0x40521c
  405228:	8a 85 ee fa ff ff    	mov    -0x512(%ebp),%al
  40522e:	c6 85 fc fe ff ff 20 	movb   $0x20,-0x104(%ebp)
  405235:	84 c0                	test   %al,%al
  405237:	74 2e                	je     0x405267
  405239:	8d 9d ef fa ff ff    	lea    -0x511(%ebp),%ebx
  40523f:	0f b6 c8             	movzbl %al,%ecx
  405242:	0f b6 03             	movzbl (%ebx),%eax
  405245:	3b c8                	cmp    %eax,%ecx
  405247:	77 16                	ja     0x40525f
  405249:	2b c1                	sub    %ecx,%eax
  40524b:	40                   	inc    %eax
  40524c:	50                   	push   %eax
  40524d:	8d 94 0d fc fe ff ff 	lea    -0x104(%ebp,%ecx,1),%edx
  405254:	6a 20                	push   $0x20
  405256:	52                   	push   %edx
  405257:	e8 94 0d 00 00       	call   0x405ff0
  40525c:	83 c4 0c             	add    $0xc,%esp
  40525f:	43                   	inc    %ebx
  405260:	8a 03                	mov    (%ebx),%al
  405262:	43                   	inc    %ebx
  405263:	84 c0                	test   %al,%al
  405265:	75 d8                	jne    0x40523f
  405267:	6a 00                	push   $0x0
  405269:	ff 76 0c             	pushl  0xc(%esi)
  40526c:	8d 85 fc fa ff ff    	lea    -0x504(%ebp),%eax
  405272:	ff 76 04             	pushl  0x4(%esi)
  405275:	50                   	push   %eax
  405276:	57                   	push   %edi
  405277:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
  40527d:	50                   	push   %eax
  40527e:	6a 01                	push   $0x1
  405280:	6a 00                	push   $0x0
  405282:	e8 43 40 00 00       	call   0x4092ca
  405287:	33 db                	xor    %ebx,%ebx
  405289:	53                   	push   %ebx
  40528a:	ff 76 04             	pushl  0x4(%esi)
  40528d:	8d 85 fc fd ff ff    	lea    -0x204(%ebp),%eax
  405293:	57                   	push   %edi
  405294:	50                   	push   %eax
  405295:	57                   	push   %edi
  405296:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
  40529c:	50                   	push   %eax
  40529d:	57                   	push   %edi
  40529e:	ff 76 0c             	pushl  0xc(%esi)
  4052a1:	53                   	push   %ebx
  4052a2:	e8 24 3e 00 00       	call   0x4090cb
  4052a7:	83 c4 44             	add    $0x44,%esp
  4052aa:	53                   	push   %ebx
  4052ab:	ff 76 04             	pushl  0x4(%esi)
  4052ae:	8d 85 fc fc ff ff    	lea    -0x304(%ebp),%eax
  4052b4:	57                   	push   %edi
  4052b5:	50                   	push   %eax
  4052b6:	57                   	push   %edi
  4052b7:	8d 85 fc fe ff ff    	lea    -0x104(%ebp),%eax
  4052bd:	50                   	push   %eax
  4052be:	68 00 02 00 00       	push   $0x200
  4052c3:	ff 76 0c             	pushl  0xc(%esi)
  4052c6:	53                   	push   %ebx
  4052c7:	e8 ff 3d 00 00       	call   0x4090cb
  4052cc:	83 c4 24             	add    $0x24,%esp
  4052cf:	33 c0                	xor    %eax,%eax
  4052d1:	0f b7 8c 45 fc fa ff 	movzwl -0x504(%ebp,%eax,2),%ecx
  4052d8:	ff 
  4052d9:	f6 c1 01             	test   $0x1,%cl
  4052dc:	74 0e                	je     0x4052ec
  4052de:	80 4c 06 1d 10       	orb    $0x10,0x1d(%esi,%eax,1)
  4052e3:	8a 8c 05 fc fd ff ff 	mov    -0x204(%ebp,%eax,1),%cl
  4052ea:	eb 11                	jmp    0x4052fd
  4052ec:	f6 c1 02             	test   $0x2,%cl
  4052ef:	74 15                	je     0x405306
  4052f1:	80 4c 06 1d 20       	orb    $0x20,0x1d(%esi,%eax,1)
  4052f6:	8a 8c 05 fc fc ff ff 	mov    -0x304(%ebp,%eax,1),%cl
  4052fd:	88 8c 06 1d 01 00 00 	mov    %cl,0x11d(%esi,%eax,1)
  405304:	eb 08                	jmp    0x40530e
  405306:	c6 84 06 1d 01 00 00 	movb   $0x0,0x11d(%esi,%eax,1)
  40530d:	00 
  40530e:	40                   	inc    %eax
  40530f:	3b c7                	cmp    %edi,%eax
  405311:	72 be                	jb     0x4052d1
  405313:	eb 56                	jmp    0x40536b
  405315:	8d 86 1d 01 00 00    	lea    0x11d(%esi),%eax
  40531b:	c7 85 e4 fa ff ff 9f 	movl   $0xffffff9f,-0x51c(%ebp)
  405322:	ff ff ff 
  405325:	33 c9                	xor    %ecx,%ecx
  405327:	29 85 e4 fa ff ff    	sub    %eax,-0x51c(%ebp)
  40532d:	8b 95 e4 fa ff ff    	mov    -0x51c(%ebp),%edx
  405333:	8d 84 0e 1d 01 00 00 	lea    0x11d(%esi,%ecx,1),%eax
  40533a:	03 d0                	add    %eax,%edx
  40533c:	8d 5a 20             	lea    0x20(%edx),%ebx
  40533f:	83 fb 19             	cmp    $0x19,%ebx
  405342:	77 0c                	ja     0x405350
  405344:	80 4c 0e 1d 10       	orb    $0x10,0x1d(%esi,%ecx,1)
  405349:	8a d1                	mov    %cl,%dl
  40534b:	80 c2 20             	add    $0x20,%dl
  40534e:	eb 0f                	jmp    0x40535f
  405350:	83 fa 19             	cmp    $0x19,%edx
  405353:	77 0e                	ja     0x405363
  405355:	80 4c 0e 1d 20       	orb    $0x20,0x1d(%esi,%ecx,1)
  40535a:	8a d1                	mov    %cl,%dl
  40535c:	80 ea 20             	sub    $0x20,%dl
  40535f:	88 10                	mov    %dl,(%eax)
  405361:	eb 03                	jmp    0x405366
  405363:	c6 00 00             	movb   $0x0,(%eax)
  405366:	41                   	inc    %ecx
  405367:	3b cf                	cmp    %edi,%ecx
  405369:	72 c2                	jb     0x40532d
  40536b:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  40536e:	5f                   	pop    %edi
  40536f:	33 cd                	xor    %ebp,%ecx
  405371:	5b                   	pop    %ebx
  405372:	e8 c8 0b 00 00       	call   0x405f3f
  405377:	c9                   	leave  
  405378:	c3                   	ret    
  405379:	6a 0c                	push   $0xc
  40537b:	68 58 d5 40 00       	push   $0x40d558
  405380:	e8 eb d0 ff ff       	call   0x402470
  405385:	e8 f7 f3 ff ff       	call   0x404781
  40538a:	8b f8                	mov    %eax,%edi
  40538c:	a1 6c eb 40 00       	mov    0x40eb6c,%eax
  405391:	85 47 70             	test   %eax,0x70(%edi)
  405394:	74 1d                	je     0x4053b3
  405396:	83 7f 6c 00          	cmpl   $0x0,0x6c(%edi)
  40539a:	74 17                	je     0x4053b3
  40539c:	8b 77 68             	mov    0x68(%edi),%esi
  40539f:	85 f6                	test   %esi,%esi
  4053a1:	75 08                	jne    0x4053ab
  4053a3:	6a 20                	push   $0x20
  4053a5:	e8 b9 e3 ff ff       	call   0x403763
  4053aa:	59                   	pop    %ecx
  4053ab:	8b c6                	mov    %esi,%eax
  4053ad:	e8 03 d1 ff ff       	call   0x4024b5
  4053b2:	c3                   	ret    
  4053b3:	6a 0d                	push   $0xd
  4053b5:	e8 d0 fc ff ff       	call   0x40508a
  4053ba:	59                   	pop    %ecx
  4053bb:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  4053bf:	8b 77 68             	mov    0x68(%edi),%esi
  4053c2:	89 75 e4             	mov    %esi,-0x1c(%ebp)
  4053c5:	3b 35 70 ea 40 00    	cmp    0x40ea70,%esi
  4053cb:	74 36                	je     0x405403
  4053cd:	85 f6                	test   %esi,%esi
  4053cf:	74 1a                	je     0x4053eb
  4053d1:	56                   	push   %esi
  4053d2:	ff 15 80 c0 40 00    	call   *0x40c080
  4053d8:	85 c0                	test   %eax,%eax
  4053da:	75 0f                	jne    0x4053eb
  4053dc:	81 fe 48 e6 40 00    	cmp    $0x40e648,%esi
  4053e2:	74 07                	je     0x4053eb
  4053e4:	56                   	push   %esi
  4053e5:	e8 64 f8 ff ff       	call   0x404c4e
  4053ea:	59                   	pop    %ecx
  4053eb:	a1 70 ea 40 00       	mov    0x40ea70,%eax
  4053f0:	89 47 68             	mov    %eax,0x68(%edi)
  4053f3:	8b 35 70 ea 40 00    	mov    0x40ea70,%esi
  4053f9:	89 75 e4             	mov    %esi,-0x1c(%ebp)
  4053fc:	56                   	push   %esi
  4053fd:	ff 15 74 c0 40 00    	call   *0x40c074
  405403:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40540a:	e8 05 00 00 00       	call   0x405414
  40540f:	eb 8e                	jmp    0x40539f
  405411:	8b 75 e4             	mov    -0x1c(%ebp),%esi
  405414:	6a 0d                	push   $0xd
  405416:	e8 95 fb ff ff       	call   0x404fb0
  40541b:	59                   	pop    %ecx
  40541c:	c3                   	ret    
  40541d:	8b ff                	mov    %edi,%edi
  40541f:	55                   	push   %ebp
  405420:	8b ec                	mov    %esp,%ebp
  405422:	83 ec 10             	sub    $0x10,%esp
  405425:	53                   	push   %ebx
  405426:	33 db                	xor    %ebx,%ebx
  405428:	53                   	push   %ebx
  405429:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  40542c:	e8 90 c1 ff ff       	call   0x4015c1
  405431:	89 1d e8 f5 40 00    	mov    %ebx,0x40f5e8
  405437:	83 fe fe             	cmp    $0xfffffffe,%esi
  40543a:	75 1e                	jne    0x40545a
  40543c:	c7 05 e8 f5 40 00 01 	movl   $0x1,0x40f5e8
  405443:	00 00 00 
  405446:	ff 15 a8 c0 40 00    	call   *0x40c0a8
  40544c:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  40544f:	74 45                	je     0x405496
  405451:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  405454:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  405458:	eb 3c                	jmp    0x405496
  40545a:	83 fe fd             	cmp    $0xfffffffd,%esi
  40545d:	75 12                	jne    0x405471
  40545f:	c7 05 e8 f5 40 00 01 	movl   $0x1,0x40f5e8
  405466:	00 00 00 
  405469:	ff 15 a4 c0 40 00    	call   *0x40c0a4
  40546f:	eb db                	jmp    0x40544c
  405471:	83 fe fc             	cmp    $0xfffffffc,%esi
  405474:	75 12                	jne    0x405488
  405476:	8b 45 f0             	mov    -0x10(%ebp),%eax
  405479:	8b 40 04             	mov    0x4(%eax),%eax
  40547c:	c7 05 e8 f5 40 00 01 	movl   $0x1,0x40f5e8
  405483:	00 00 00 
  405486:	eb c4                	jmp    0x40544c
  405488:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  40548b:	74 07                	je     0x405494
  40548d:	8b 45 f8             	mov    -0x8(%ebp),%eax
  405490:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  405494:	8b c6                	mov    %esi,%eax
  405496:	5b                   	pop    %ebx
  405497:	c9                   	leave  
  405498:	c3                   	ret    
  405499:	8b ff                	mov    %edi,%edi
  40549b:	55                   	push   %ebp
  40549c:	8b ec                	mov    %esp,%ebp
  40549e:	83 ec 20             	sub    $0x20,%esp
  4054a1:	a1 00 e4 40 00       	mov    0x40e400,%eax
  4054a6:	33 c5                	xor    %ebp,%eax
  4054a8:	89 45 fc             	mov    %eax,-0x4(%ebp)
  4054ab:	53                   	push   %ebx
  4054ac:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  4054af:	56                   	push   %esi
  4054b0:	8b 75 08             	mov    0x8(%ebp),%esi
  4054b3:	57                   	push   %edi
  4054b4:	e8 64 ff ff ff       	call   0x40541d
  4054b9:	8b f8                	mov    %eax,%edi
  4054bb:	33 f6                	xor    %esi,%esi
  4054bd:	89 7d 08             	mov    %edi,0x8(%ebp)
  4054c0:	3b fe                	cmp    %esi,%edi
  4054c2:	75 0e                	jne    0x4054d2
  4054c4:	8b c3                	mov    %ebx,%eax
  4054c6:	e8 b7 fc ff ff       	call   0x405182
  4054cb:	33 c0                	xor    %eax,%eax
  4054cd:	e9 9d 01 00 00       	jmp    0x40566f
  4054d2:	89 75 e4             	mov    %esi,-0x1c(%ebp)
  4054d5:	33 c0                	xor    %eax,%eax
  4054d7:	39 b8 78 ea 40 00    	cmp    %edi,0x40ea78(%eax)
  4054dd:	0f 84 91 00 00 00    	je     0x405574
  4054e3:	ff 45 e4             	incl   -0x1c(%ebp)
  4054e6:	83 c0 30             	add    $0x30,%eax
  4054e9:	3d f0 00 00 00       	cmp    $0xf0,%eax
  4054ee:	72 e7                	jb     0x4054d7
  4054f0:	81 ff e8 fd 00 00    	cmp    $0xfde8,%edi
  4054f6:	0f 84 70 01 00 00    	je     0x40566c
  4054fc:	81 ff e9 fd 00 00    	cmp    $0xfde9,%edi
  405502:	0f 84 64 01 00 00    	je     0x40566c
  405508:	0f b7 c7             	movzwl %di,%eax
  40550b:	50                   	push   %eax
  40550c:	ff 15 ac c0 40 00    	call   *0x40c0ac
  405512:	85 c0                	test   %eax,%eax
  405514:	0f 84 52 01 00 00    	je     0x40566c
  40551a:	8d 45 e8             	lea    -0x18(%ebp),%eax
  40551d:	50                   	push   %eax
  40551e:	57                   	push   %edi
  40551f:	ff 15 a0 c0 40 00    	call   *0x40c0a0
  405525:	85 c0                	test   %eax,%eax
  405527:	0f 84 33 01 00 00    	je     0x405660
  40552d:	68 01 01 00 00       	push   $0x101
  405532:	8d 43 1c             	lea    0x1c(%ebx),%eax
  405535:	56                   	push   %esi
  405536:	50                   	push   %eax
  405537:	e8 b4 0a 00 00       	call   0x405ff0
  40553c:	33 d2                	xor    %edx,%edx
  40553e:	42                   	inc    %edx
  40553f:	83 c4 0c             	add    $0xc,%esp
  405542:	89 7b 04             	mov    %edi,0x4(%ebx)
  405545:	89 73 0c             	mov    %esi,0xc(%ebx)
  405548:	39 55 e8             	cmp    %edx,-0x18(%ebp)
  40554b:	0f 86 f8 00 00 00    	jbe    0x405649
  405551:	80 7d ee 00          	cmpb   $0x0,-0x12(%ebp)
  405555:	0f 84 cf 00 00 00    	je     0x40562a
  40555b:	8d 75 ef             	lea    -0x11(%ebp),%esi
  40555e:	8a 0e                	mov    (%esi),%cl
  405560:	84 c9                	test   %cl,%cl
  405562:	0f 84 c2 00 00 00    	je     0x40562a
  405568:	0f b6 46 ff          	movzbl -0x1(%esi),%eax
  40556c:	0f b6 c9             	movzbl %cl,%ecx
  40556f:	e9 a6 00 00 00       	jmp    0x40561a
  405574:	68 01 01 00 00       	push   $0x101
  405579:	8d 43 1c             	lea    0x1c(%ebx),%eax
  40557c:	56                   	push   %esi
  40557d:	50                   	push   %eax
  40557e:	e8 6d 0a 00 00       	call   0x405ff0
  405583:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
  405586:	83 c4 0c             	add    $0xc,%esp
  405589:	6b c9 30             	imul   $0x30,%ecx,%ecx
  40558c:	89 75 e0             	mov    %esi,-0x20(%ebp)
  40558f:	8d b1 88 ea 40 00    	lea    0x40ea88(%ecx),%esi
  405595:	89 75 e4             	mov    %esi,-0x1c(%ebp)
  405598:	eb 2a                	jmp    0x4055c4
  40559a:	8a 46 01             	mov    0x1(%esi),%al
  40559d:	84 c0                	test   %al,%al
  40559f:	74 28                	je     0x4055c9
  4055a1:	0f b6 3e             	movzbl (%esi),%edi
  4055a4:	0f b6 c0             	movzbl %al,%eax
  4055a7:	eb 12                	jmp    0x4055bb
  4055a9:	8b 45 e0             	mov    -0x20(%ebp),%eax
  4055ac:	8a 80 74 ea 40 00    	mov    0x40ea74(%eax),%al
  4055b2:	08 44 3b 1d          	or     %al,0x1d(%ebx,%edi,1)
  4055b6:	0f b6 46 01          	movzbl 0x1(%esi),%eax
  4055ba:	47                   	inc    %edi
  4055bb:	3b f8                	cmp    %eax,%edi
  4055bd:	76 ea                	jbe    0x4055a9
  4055bf:	8b 7d 08             	mov    0x8(%ebp),%edi
  4055c2:	46                   	inc    %esi
  4055c3:	46                   	inc    %esi
  4055c4:	80 3e 00             	cmpb   $0x0,(%esi)
  4055c7:	75 d1                	jne    0x40559a
  4055c9:	8b 75 e4             	mov    -0x1c(%ebp),%esi
  4055cc:	ff 45 e0             	incl   -0x20(%ebp)
  4055cf:	83 c6 08             	add    $0x8,%esi
  4055d2:	83 7d e0 04          	cmpl   $0x4,-0x20(%ebp)
  4055d6:	89 75 e4             	mov    %esi,-0x1c(%ebp)
  4055d9:	72 e9                	jb     0x4055c4
  4055db:	8b c7                	mov    %edi,%eax
  4055dd:	89 7b 04             	mov    %edi,0x4(%ebx)
  4055e0:	c7 43 08 01 00 00 00 	movl   $0x1,0x8(%ebx)
  4055e7:	e8 67 fb ff ff       	call   0x405153
  4055ec:	6a 06                	push   $0x6
  4055ee:	89 43 0c             	mov    %eax,0xc(%ebx)
  4055f1:	8d 43 10             	lea    0x10(%ebx),%eax
  4055f4:	8d 89 7c ea 40 00    	lea    0x40ea7c(%ecx),%ecx
  4055fa:	5a                   	pop    %edx
  4055fb:	66 8b 31             	mov    (%ecx),%si
  4055fe:	41                   	inc    %ecx
  4055ff:	66 89 30             	mov    %si,(%eax)
  405602:	41                   	inc    %ecx
  405603:	40                   	inc    %eax
  405604:	40                   	inc    %eax
  405605:	4a                   	dec    %edx
  405606:	75 f3                	jne    0x4055fb
  405608:	8b f3                	mov    %ebx,%esi
  40560a:	e8 d7 fb ff ff       	call   0x4051e6
  40560f:	e9 b7 fe ff ff       	jmp    0x4054cb
  405614:	80 4c 03 1d 04       	orb    $0x4,0x1d(%ebx,%eax,1)
  405619:	40                   	inc    %eax
  40561a:	3b c1                	cmp    %ecx,%eax
  40561c:	76 f6                	jbe    0x405614
  40561e:	46                   	inc    %esi
  40561f:	46                   	inc    %esi
  405620:	80 7e ff 00          	cmpb   $0x0,-0x1(%esi)
  405624:	0f 85 34 ff ff ff    	jne    0x40555e
  40562a:	8d 43 1e             	lea    0x1e(%ebx),%eax
  40562d:	b9 fe 00 00 00       	mov    $0xfe,%ecx
  405632:	80 08 08             	orb    $0x8,(%eax)
  405635:	40                   	inc    %eax
  405636:	49                   	dec    %ecx
  405637:	75 f9                	jne    0x405632
  405639:	8b 43 04             	mov    0x4(%ebx),%eax
  40563c:	e8 12 fb ff ff       	call   0x405153
  405641:	89 43 0c             	mov    %eax,0xc(%ebx)
  405644:	89 53 08             	mov    %edx,0x8(%ebx)
  405647:	eb 03                	jmp    0x40564c
  405649:	89 73 08             	mov    %esi,0x8(%ebx)
  40564c:	33 c0                	xor    %eax,%eax
  40564e:	0f b7 c8             	movzwl %ax,%ecx
  405651:	8b c1                	mov    %ecx,%eax
  405653:	c1 e1 10             	shl    $0x10,%ecx
  405656:	0b c1                	or     %ecx,%eax
  405658:	8d 7b 10             	lea    0x10(%ebx),%edi
  40565b:	ab                   	stos   %eax,%es:(%edi)
  40565c:	ab                   	stos   %eax,%es:(%edi)
  40565d:	ab                   	stos   %eax,%es:(%edi)
  40565e:	eb a8                	jmp    0x405608
  405660:	39 35 e8 f5 40 00    	cmp    %esi,0x40f5e8
  405666:	0f 85 58 fe ff ff    	jne    0x4054c4
  40566c:	83 c8 ff             	or     $0xffffffff,%eax
  40566f:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  405672:	5f                   	pop    %edi
  405673:	5e                   	pop    %esi
  405674:	33 cd                	xor    %ebp,%ecx
  405676:	5b                   	pop    %ebx
  405677:	e8 c3 08 00 00       	call   0x405f3f
  40567c:	c9                   	leave  
  40567d:	c3                   	ret    
  40567e:	6a 14                	push   $0x14
  405680:	68 78 d5 40 00       	push   $0x40d578
  405685:	e8 e6 cd ff ff       	call   0x402470
  40568a:	83 4d e0 ff          	orl    $0xffffffff,-0x20(%ebp)
  40568e:	e8 ee f0 ff ff       	call   0x404781
  405693:	8b f8                	mov    %eax,%edi
  405695:	89 7d dc             	mov    %edi,-0x24(%ebp)
  405698:	e8 dc fc ff ff       	call   0x405379
  40569d:	8b 5f 68             	mov    0x68(%edi),%ebx
  4056a0:	8b 75 08             	mov    0x8(%ebp),%esi
  4056a3:	e8 75 fd ff ff       	call   0x40541d
  4056a8:	89 45 08             	mov    %eax,0x8(%ebp)
  4056ab:	3b 43 04             	cmp    0x4(%ebx),%eax
  4056ae:	0f 84 57 01 00 00    	je     0x40580b
  4056b4:	68 20 02 00 00       	push   $0x220
  4056b9:	e8 5f f4 ff ff       	call   0x404b1d
  4056be:	59                   	pop    %ecx
  4056bf:	8b d8                	mov    %eax,%ebx
  4056c1:	85 db                	test   %ebx,%ebx
  4056c3:	0f 84 46 01 00 00    	je     0x40580f
  4056c9:	b9 88 00 00 00       	mov    $0x88,%ecx
  4056ce:	8b 77 68             	mov    0x68(%edi),%esi
  4056d1:	8b fb                	mov    %ebx,%edi
  4056d3:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  4056d5:	83 23 00             	andl   $0x0,(%ebx)
  4056d8:	53                   	push   %ebx
  4056d9:	ff 75 08             	pushl  0x8(%ebp)
  4056dc:	e8 b8 fd ff ff       	call   0x405499
  4056e1:	59                   	pop    %ecx
  4056e2:	59                   	pop    %ecx
  4056e3:	89 45 e0             	mov    %eax,-0x20(%ebp)
  4056e6:	85 c0                	test   %eax,%eax
  4056e8:	0f 85 fc 00 00 00    	jne    0x4057ea
  4056ee:	8b 75 dc             	mov    -0x24(%ebp),%esi
  4056f1:	ff 76 68             	pushl  0x68(%esi)
  4056f4:	ff 15 80 c0 40 00    	call   *0x40c080
  4056fa:	85 c0                	test   %eax,%eax
  4056fc:	75 11                	jne    0x40570f
  4056fe:	8b 46 68             	mov    0x68(%esi),%eax
  405701:	3d 48 e6 40 00       	cmp    $0x40e648,%eax
  405706:	74 07                	je     0x40570f
  405708:	50                   	push   %eax
  405709:	e8 40 f5 ff ff       	call   0x404c4e
  40570e:	59                   	pop    %ecx
  40570f:	89 5e 68             	mov    %ebx,0x68(%esi)
  405712:	53                   	push   %ebx
  405713:	8b 3d 74 c0 40 00    	mov    0x40c074,%edi
  405719:	ff d7                	call   *%edi
  40571b:	f6 46 70 02          	testb  $0x2,0x70(%esi)
  40571f:	0f 85 ea 00 00 00    	jne    0x40580f
  405725:	f6 05 6c eb 40 00 01 	testb  $0x1,0x40eb6c
  40572c:	0f 85 dd 00 00 00    	jne    0x40580f
  405732:	6a 0d                	push   $0xd
  405734:	e8 51 f9 ff ff       	call   0x40508a
  405739:	59                   	pop    %ecx
  40573a:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  40573e:	8b 43 04             	mov    0x4(%ebx),%eax
  405741:	a3 f8 f5 40 00       	mov    %eax,0x40f5f8
  405746:	8b 43 08             	mov    0x8(%ebx),%eax
  405749:	a3 fc f5 40 00       	mov    %eax,0x40f5fc
  40574e:	8b 43 0c             	mov    0xc(%ebx),%eax
  405751:	a3 00 f6 40 00       	mov    %eax,0x40f600
  405756:	33 c0                	xor    %eax,%eax
  405758:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  40575b:	83 f8 05             	cmp    $0x5,%eax
  40575e:	7d 10                	jge    0x405770
  405760:	66 8b 4c 43 10       	mov    0x10(%ebx,%eax,2),%cx
  405765:	66 89 0c 45 ec f5 40 	mov    %cx,0x40f5ec(,%eax,2)
  40576c:	00 
  40576d:	40                   	inc    %eax
  40576e:	eb e8                	jmp    0x405758
  405770:	33 c0                	xor    %eax,%eax
  405772:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  405775:	3d 01 01 00 00       	cmp    $0x101,%eax
  40577a:	7d 0d                	jge    0x405789
  40577c:	8a 4c 18 1c          	mov    0x1c(%eax,%ebx,1),%cl
  405780:	88 88 68 e8 40 00    	mov    %cl,0x40e868(%eax)
  405786:	40                   	inc    %eax
  405787:	eb e9                	jmp    0x405772
  405789:	33 c0                	xor    %eax,%eax
  40578b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  40578e:	3d 00 01 00 00       	cmp    $0x100,%eax
  405793:	7d 10                	jge    0x4057a5
  405795:	8a 8c 18 1d 01 00 00 	mov    0x11d(%eax,%ebx,1),%cl
  40579c:	88 88 70 e9 40 00    	mov    %cl,0x40e970(%eax)
  4057a2:	40                   	inc    %eax
  4057a3:	eb e6                	jmp    0x40578b
  4057a5:	ff 35 70 ea 40 00    	pushl  0x40ea70
  4057ab:	ff 15 80 c0 40 00    	call   *0x40c080
  4057b1:	85 c0                	test   %eax,%eax
  4057b3:	75 13                	jne    0x4057c8
  4057b5:	a1 70 ea 40 00       	mov    0x40ea70,%eax
  4057ba:	3d 48 e6 40 00       	cmp    $0x40e648,%eax
  4057bf:	74 07                	je     0x4057c8
  4057c1:	50                   	push   %eax
  4057c2:	e8 87 f4 ff ff       	call   0x404c4e
  4057c7:	59                   	pop    %ecx
  4057c8:	89 1d 70 ea 40 00    	mov    %ebx,0x40ea70
  4057ce:	53                   	push   %ebx
  4057cf:	ff d7                	call   *%edi
  4057d1:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  4057d8:	e8 02 00 00 00       	call   0x4057df
  4057dd:	eb 30                	jmp    0x40580f
  4057df:	6a 0d                	push   $0xd
  4057e1:	e8 ca f7 ff ff       	call   0x404fb0
  4057e6:	59                   	pop    %ecx
  4057e7:	c3                   	ret    
  4057e8:	eb 25                	jmp    0x40580f
  4057ea:	83 f8 ff             	cmp    $0xffffffff,%eax
  4057ed:	75 20                	jne    0x40580f
  4057ef:	81 fb 48 e6 40 00    	cmp    $0x40e648,%ebx
  4057f5:	74 07                	je     0x4057fe
  4057f7:	53                   	push   %ebx
  4057f8:	e8 51 f4 ff ff       	call   0x404c4e
  4057fd:	59                   	pop    %ecx
  4057fe:	e8 22 cc ff ff       	call   0x402425
  405803:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  405809:	eb 04                	jmp    0x40580f
  40580b:	83 65 e0 00          	andl   $0x0,-0x20(%ebp)
  40580f:	8b 45 e0             	mov    -0x20(%ebp),%eax
  405812:	e8 9e cc ff ff       	call   0x4024b5
  405817:	c3                   	ret    
  405818:	83 3d ac fb 40 00 00 	cmpl   $0x0,0x40fbac
  40581f:	75 12                	jne    0x405833
  405821:	6a fd                	push   $0xfffffffd
  405823:	e8 56 fe ff ff       	call   0x40567e
  405828:	59                   	pop    %ecx
  405829:	c7 05 ac fb 40 00 01 	movl   $0x1,0x40fbac
  405830:	00 00 00 
  405833:	33 c0                	xor    %eax,%eax
  405835:	c3                   	ret    
  405836:	8b ff                	mov    %edi,%edi
  405838:	55                   	push   %ebp
  405839:	8b ec                	mov    %esp,%ebp
  40583b:	53                   	push   %ebx
  40583c:	56                   	push   %esi
  40583d:	8b 75 08             	mov    0x8(%ebp),%esi
  405840:	8b 86 bc 00 00 00    	mov    0xbc(%esi),%eax
  405846:	33 db                	xor    %ebx,%ebx
  405848:	57                   	push   %edi
  405849:	3b c3                	cmp    %ebx,%eax
  40584b:	74 6f                	je     0x4058bc
  40584d:	3d 58 ed 40 00       	cmp    $0x40ed58,%eax
  405852:	74 68                	je     0x4058bc
  405854:	8b 86 b0 00 00 00    	mov    0xb0(%esi),%eax
  40585a:	3b c3                	cmp    %ebx,%eax
  40585c:	74 5e                	je     0x4058bc
  40585e:	39 18                	cmp    %ebx,(%eax)
  405860:	75 5a                	jne    0x4058bc
  405862:	8b 86 b8 00 00 00    	mov    0xb8(%esi),%eax
  405868:	3b c3                	cmp    %ebx,%eax
  40586a:	74 17                	je     0x405883
  40586c:	39 18                	cmp    %ebx,(%eax)
  40586e:	75 13                	jne    0x405883
  405870:	50                   	push   %eax
  405871:	e8 d8 f3 ff ff       	call   0x404c4e
  405876:	ff b6 bc 00 00 00    	pushl  0xbc(%esi)
  40587c:	e8 65 3c 00 00       	call   0x4094e6
  405881:	59                   	pop    %ecx
  405882:	59                   	pop    %ecx
  405883:	8b 86 b4 00 00 00    	mov    0xb4(%esi),%eax
  405889:	3b c3                	cmp    %ebx,%eax
  40588b:	74 17                	je     0x4058a4
  40588d:	39 18                	cmp    %ebx,(%eax)
  40588f:	75 13                	jne    0x4058a4
  405891:	50                   	push   %eax
  405892:	e8 b7 f3 ff ff       	call   0x404c4e
  405897:	ff b6 bc 00 00 00    	pushl  0xbc(%esi)
  40589d:	e8 ff 3b 00 00       	call   0x4094a1
  4058a2:	59                   	pop    %ecx
  4058a3:	59                   	pop    %ecx
  4058a4:	ff b6 b0 00 00 00    	pushl  0xb0(%esi)
  4058aa:	e8 9f f3 ff ff       	call   0x404c4e
  4058af:	ff b6 bc 00 00 00    	pushl  0xbc(%esi)
  4058b5:	e8 94 f3 ff ff       	call   0x404c4e
  4058ba:	59                   	pop    %ecx
  4058bb:	59                   	pop    %ecx
  4058bc:	8b 86 c0 00 00 00    	mov    0xc0(%esi),%eax
  4058c2:	3b c3                	cmp    %ebx,%eax
  4058c4:	74 44                	je     0x40590a
  4058c6:	39 18                	cmp    %ebx,(%eax)
  4058c8:	75 40                	jne    0x40590a
  4058ca:	8b 86 c4 00 00 00    	mov    0xc4(%esi),%eax
  4058d0:	2d fe 00 00 00       	sub    $0xfe,%eax
  4058d5:	50                   	push   %eax
  4058d6:	e8 73 f3 ff ff       	call   0x404c4e
  4058db:	8b 86 cc 00 00 00    	mov    0xcc(%esi),%eax
  4058e1:	bf 80 00 00 00       	mov    $0x80,%edi
  4058e6:	2b c7                	sub    %edi,%eax
  4058e8:	50                   	push   %eax
  4058e9:	e8 60 f3 ff ff       	call   0x404c4e
  4058ee:	8b 86 d0 00 00 00    	mov    0xd0(%esi),%eax
  4058f4:	2b c7                	sub    %edi,%eax
  4058f6:	50                   	push   %eax
  4058f7:	e8 52 f3 ff ff       	call   0x404c4e
  4058fc:	ff b6 c0 00 00 00    	pushl  0xc0(%esi)
  405902:	e8 47 f3 ff ff       	call   0x404c4e
  405907:	83 c4 10             	add    $0x10,%esp
  40590a:	8d be d4 00 00 00    	lea    0xd4(%esi),%edi
  405910:	8b 07                	mov    (%edi),%eax
  405912:	3d 98 ec 40 00       	cmp    $0x40ec98,%eax
  405917:	74 17                	je     0x405930
  405919:	39 98 b4 00 00 00    	cmp    %ebx,0xb4(%eax)
  40591f:	75 0f                	jne    0x405930
  405921:	50                   	push   %eax
  405922:	e8 e5 39 00 00       	call   0x40930c
  405927:	ff 37                	pushl  (%edi)
  405929:	e8 20 f3 ff ff       	call   0x404c4e
  40592e:	59                   	pop    %ecx
  40592f:	59                   	pop    %ecx
  405930:	8d 7e 50             	lea    0x50(%esi),%edi
  405933:	c7 45 08 06 00 00 00 	movl   $0x6,0x8(%ebp)
  40593a:	81 7f f8 70 eb 40 00 	cmpl   $0x40eb70,-0x8(%edi)
  405941:	74 11                	je     0x405954
  405943:	8b 07                	mov    (%edi),%eax
  405945:	3b c3                	cmp    %ebx,%eax
  405947:	74 0b                	je     0x405954
  405949:	39 18                	cmp    %ebx,(%eax)
  40594b:	75 07                	jne    0x405954
  40594d:	50                   	push   %eax
  40594e:	e8 fb f2 ff ff       	call   0x404c4e
  405953:	59                   	pop    %ecx
  405954:	39 5f fc             	cmp    %ebx,-0x4(%edi)
  405957:	74 12                	je     0x40596b
  405959:	8b 47 04             	mov    0x4(%edi),%eax
  40595c:	3b c3                	cmp    %ebx,%eax
  40595e:	74 0b                	je     0x40596b
  405960:	39 18                	cmp    %ebx,(%eax)
  405962:	75 07                	jne    0x40596b
  405964:	50                   	push   %eax
  405965:	e8 e4 f2 ff ff       	call   0x404c4e
  40596a:	59                   	pop    %ecx
  40596b:	83 c7 10             	add    $0x10,%edi
  40596e:	ff 4d 08             	decl   0x8(%ebp)
  405971:	75 c7                	jne    0x40593a
  405973:	56                   	push   %esi
  405974:	e8 d5 f2 ff ff       	call   0x404c4e
  405979:	59                   	pop    %ecx
  40597a:	5f                   	pop    %edi
  40597b:	5e                   	pop    %esi
  40597c:	5b                   	pop    %ebx
  40597d:	5d                   	pop    %ebp
  40597e:	c3                   	ret    
  40597f:	8b ff                	mov    %edi,%edi
  405981:	55                   	push   %ebp
  405982:	8b ec                	mov    %esp,%ebp
  405984:	53                   	push   %ebx
  405985:	56                   	push   %esi
  405986:	8b 35 74 c0 40 00    	mov    0x40c074,%esi
  40598c:	57                   	push   %edi
  40598d:	8b 7d 08             	mov    0x8(%ebp),%edi
  405990:	57                   	push   %edi
  405991:	ff d6                	call   *%esi
  405993:	8b 87 b0 00 00 00    	mov    0xb0(%edi),%eax
  405999:	85 c0                	test   %eax,%eax
  40599b:	74 03                	je     0x4059a0
  40599d:	50                   	push   %eax
  40599e:	ff d6                	call   *%esi
  4059a0:	8b 87 b8 00 00 00    	mov    0xb8(%edi),%eax
  4059a6:	85 c0                	test   %eax,%eax
  4059a8:	74 03                	je     0x4059ad
  4059aa:	50                   	push   %eax
  4059ab:	ff d6                	call   *%esi
  4059ad:	8b 87 b4 00 00 00    	mov    0xb4(%edi),%eax
  4059b3:	85 c0                	test   %eax,%eax
  4059b5:	74 03                	je     0x4059ba
  4059b7:	50                   	push   %eax
  4059b8:	ff d6                	call   *%esi
  4059ba:	8b 87 c0 00 00 00    	mov    0xc0(%edi),%eax
  4059c0:	85 c0                	test   %eax,%eax
  4059c2:	74 03                	je     0x4059c7
  4059c4:	50                   	push   %eax
  4059c5:	ff d6                	call   *%esi
  4059c7:	8d 5f 50             	lea    0x50(%edi),%ebx
  4059ca:	c7 45 08 06 00 00 00 	movl   $0x6,0x8(%ebp)
  4059d1:	81 7b f8 70 eb 40 00 	cmpl   $0x40eb70,-0x8(%ebx)
  4059d8:	74 09                	je     0x4059e3
  4059da:	8b 03                	mov    (%ebx),%eax
  4059dc:	85 c0                	test   %eax,%eax
  4059de:	74 03                	je     0x4059e3
  4059e0:	50                   	push   %eax
  4059e1:	ff d6                	call   *%esi
  4059e3:	83 7b fc 00          	cmpl   $0x0,-0x4(%ebx)
  4059e7:	74 0a                	je     0x4059f3
  4059e9:	8b 43 04             	mov    0x4(%ebx),%eax
  4059ec:	85 c0                	test   %eax,%eax
  4059ee:	74 03                	je     0x4059f3
  4059f0:	50                   	push   %eax
  4059f1:	ff d6                	call   *%esi
  4059f3:	83 c3 10             	add    $0x10,%ebx
  4059f6:	ff 4d 08             	decl   0x8(%ebp)
  4059f9:	75 d6                	jne    0x4059d1
  4059fb:	8b 87 d4 00 00 00    	mov    0xd4(%edi),%eax
  405a01:	05 b4 00 00 00       	add    $0xb4,%eax
  405a06:	50                   	push   %eax
  405a07:	ff d6                	call   *%esi
  405a09:	5f                   	pop    %edi
  405a0a:	5e                   	pop    %esi
  405a0b:	5b                   	pop    %ebx
  405a0c:	5d                   	pop    %ebp
  405a0d:	c3                   	ret    
  405a0e:	8b ff                	mov    %edi,%edi
  405a10:	55                   	push   %ebp
  405a11:	8b ec                	mov    %esp,%ebp
  405a13:	57                   	push   %edi
  405a14:	8b 7d 08             	mov    0x8(%ebp),%edi
  405a17:	85 ff                	test   %edi,%edi
  405a19:	0f 84 83 00 00 00    	je     0x405aa2
  405a1f:	53                   	push   %ebx
  405a20:	56                   	push   %esi
  405a21:	8b 35 80 c0 40 00    	mov    0x40c080,%esi
  405a27:	57                   	push   %edi
  405a28:	ff d6                	call   *%esi
  405a2a:	8b 87 b0 00 00 00    	mov    0xb0(%edi),%eax
  405a30:	85 c0                	test   %eax,%eax
  405a32:	74 03                	je     0x405a37
  405a34:	50                   	push   %eax
  405a35:	ff d6                	call   *%esi
  405a37:	8b 87 b8 00 00 00    	mov    0xb8(%edi),%eax
  405a3d:	85 c0                	test   %eax,%eax
  405a3f:	74 03                	je     0x405a44
  405a41:	50                   	push   %eax
  405a42:	ff d6                	call   *%esi
  405a44:	8b 87 b4 00 00 00    	mov    0xb4(%edi),%eax
  405a4a:	85 c0                	test   %eax,%eax
  405a4c:	74 03                	je     0x405a51
  405a4e:	50                   	push   %eax
  405a4f:	ff d6                	call   *%esi
  405a51:	8b 87 c0 00 00 00    	mov    0xc0(%edi),%eax
  405a57:	85 c0                	test   %eax,%eax
  405a59:	74 03                	je     0x405a5e
  405a5b:	50                   	push   %eax
  405a5c:	ff d6                	call   *%esi
  405a5e:	8d 5f 50             	lea    0x50(%edi),%ebx
  405a61:	c7 45 08 06 00 00 00 	movl   $0x6,0x8(%ebp)
  405a68:	81 7b f8 70 eb 40 00 	cmpl   $0x40eb70,-0x8(%ebx)
  405a6f:	74 09                	je     0x405a7a
  405a71:	8b 03                	mov    (%ebx),%eax
  405a73:	85 c0                	test   %eax,%eax
  405a75:	74 03                	je     0x405a7a
  405a77:	50                   	push   %eax
  405a78:	ff d6                	call   *%esi
  405a7a:	83 7b fc 00          	cmpl   $0x0,-0x4(%ebx)
  405a7e:	74 0a                	je     0x405a8a
  405a80:	8b 43 04             	mov    0x4(%ebx),%eax
  405a83:	85 c0                	test   %eax,%eax
  405a85:	74 03                	je     0x405a8a
  405a87:	50                   	push   %eax
  405a88:	ff d6                	call   *%esi
  405a8a:	83 c3 10             	add    $0x10,%ebx
  405a8d:	ff 4d 08             	decl   0x8(%ebp)
  405a90:	75 d6                	jne    0x405a68
  405a92:	8b 87 d4 00 00 00    	mov    0xd4(%edi),%eax
  405a98:	05 b4 00 00 00       	add    $0xb4,%eax
  405a9d:	50                   	push   %eax
  405a9e:	ff d6                	call   *%esi
  405aa0:	5e                   	pop    %esi
  405aa1:	5b                   	pop    %ebx
  405aa2:	8b c7                	mov    %edi,%eax
  405aa4:	5f                   	pop    %edi
  405aa5:	5d                   	pop    %ebp
  405aa6:	c3                   	ret    
  405aa7:	85 ff                	test   %edi,%edi
  405aa9:	74 37                	je     0x405ae2
  405aab:	85 c0                	test   %eax,%eax
  405aad:	74 33                	je     0x405ae2
  405aaf:	56                   	push   %esi
  405ab0:	8b 30                	mov    (%eax),%esi
  405ab2:	3b f7                	cmp    %edi,%esi
  405ab4:	74 28                	je     0x405ade
  405ab6:	57                   	push   %edi
  405ab7:	89 38                	mov    %edi,(%eax)
  405ab9:	e8 c1 fe ff ff       	call   0x40597f
  405abe:	59                   	pop    %ecx
  405abf:	85 f6                	test   %esi,%esi
  405ac1:	74 1b                	je     0x405ade
  405ac3:	56                   	push   %esi
  405ac4:	e8 45 ff ff ff       	call   0x405a0e
  405ac9:	83 3e 00             	cmpl   $0x0,(%esi)
  405acc:	59                   	pop    %ecx
  405acd:	75 0f                	jne    0x405ade
  405acf:	81 fe 78 eb 40 00    	cmp    $0x40eb78,%esi
  405ad5:	74 07                	je     0x405ade
  405ad7:	56                   	push   %esi
  405ad8:	e8 59 fd ff ff       	call   0x405836
  405add:	59                   	pop    %ecx
  405ade:	8b c7                	mov    %edi,%eax
  405ae0:	5e                   	pop    %esi
  405ae1:	c3                   	ret    
  405ae2:	33 c0                	xor    %eax,%eax
  405ae4:	c3                   	ret    
  405ae5:	6a 0c                	push   $0xc
  405ae7:	68 98 d5 40 00       	push   $0x40d598
  405aec:	e8 7f c9 ff ff       	call   0x402470
  405af1:	e8 8b ec ff ff       	call   0x404781
  405af6:	8b f0                	mov    %eax,%esi
  405af8:	a1 6c eb 40 00       	mov    0x40eb6c,%eax
  405afd:	85 46 70             	test   %eax,0x70(%esi)
  405b00:	74 22                	je     0x405b24
  405b02:	83 7e 6c 00          	cmpl   $0x0,0x6c(%esi)
  405b06:	74 1c                	je     0x405b24
  405b08:	e8 74 ec ff ff       	call   0x404781
  405b0d:	8b 70 6c             	mov    0x6c(%eax),%esi
  405b10:	85 f6                	test   %esi,%esi
  405b12:	75 08                	jne    0x405b1c
  405b14:	6a 20                	push   $0x20
  405b16:	e8 48 dc ff ff       	call   0x403763
  405b1b:	59                   	pop    %ecx
  405b1c:	8b c6                	mov    %esi,%eax
  405b1e:	e8 92 c9 ff ff       	call   0x4024b5
  405b23:	c3                   	ret    
  405b24:	6a 0c                	push   $0xc
  405b26:	e8 5f f5 ff ff       	call   0x40508a
  405b2b:	59                   	pop    %ecx
  405b2c:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  405b30:	8d 46 6c             	lea    0x6c(%esi),%eax
  405b33:	8b 3d 50 ec 40 00    	mov    0x40ec50,%edi
  405b39:	e8 69 ff ff ff       	call   0x405aa7
  405b3e:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  405b41:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  405b48:	e8 02 00 00 00       	call   0x405b4f
  405b4d:	eb c1                	jmp    0x405b10
  405b4f:	6a 0c                	push   $0xc
  405b51:	e8 5a f4 ff ff       	call   0x404fb0
  405b56:	59                   	pop    %ecx
  405b57:	8b 75 e4             	mov    -0x1c(%ebp),%esi
  405b5a:	c3                   	ret    
  405b5b:	8b ff                	mov    %edi,%edi
  405b5d:	55                   	push   %ebp
  405b5e:	8b ec                	mov    %esp,%ebp
  405b60:	51                   	push   %ecx
  405b61:	56                   	push   %esi
  405b62:	8b 75 0c             	mov    0xc(%ebp),%esi
  405b65:	56                   	push   %esi
  405b66:	e8 b6 f5 ff ff       	call   0x405121
  405b6b:	89 45 0c             	mov    %eax,0xc(%ebp)
  405b6e:	8b 46 0c             	mov    0xc(%esi),%eax
  405b71:	59                   	pop    %ecx
  405b72:	a8 82                	test   $0x82,%al
  405b74:	75 17                	jne    0x405b8d
  405b76:	e8 aa c8 ff ff       	call   0x402425
  405b7b:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  405b81:	83 4e 0c 20          	orl    $0x20,0xc(%esi)
  405b85:	83 c8 ff             	or     $0xffffffff,%eax
  405b88:	e9 2f 01 00 00       	jmp    0x405cbc
  405b8d:	a8 40                	test   $0x40,%al
  405b8f:	74 0d                	je     0x405b9e
  405b91:	e8 8f c8 ff ff       	call   0x402425
  405b96:	c7 00 22 00 00 00    	movl   $0x22,(%eax)
  405b9c:	eb e3                	jmp    0x405b81
  405b9e:	53                   	push   %ebx
  405b9f:	33 db                	xor    %ebx,%ebx
  405ba1:	a8 01                	test   $0x1,%al
  405ba3:	74 16                	je     0x405bbb
  405ba5:	89 5e 04             	mov    %ebx,0x4(%esi)
  405ba8:	a8 10                	test   $0x10,%al
  405baa:	0f 84 87 00 00 00    	je     0x405c37
  405bb0:	8b 4e 08             	mov    0x8(%esi),%ecx
  405bb3:	83 e0 fe             	and    $0xfffffffe,%eax
  405bb6:	89 0e                	mov    %ecx,(%esi)
  405bb8:	89 46 0c             	mov    %eax,0xc(%esi)
  405bbb:	8b 46 0c             	mov    0xc(%esi),%eax
  405bbe:	83 e0 ef             	and    $0xffffffef,%eax
  405bc1:	83 c8 02             	or     $0x2,%eax
  405bc4:	89 46 0c             	mov    %eax,0xc(%esi)
  405bc7:	89 5e 04             	mov    %ebx,0x4(%esi)
  405bca:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  405bcd:	a9 0c 01 00 00       	test   $0x10c,%eax
  405bd2:	75 2c                	jne    0x405c00
  405bd4:	e8 63 b7 ff ff       	call   0x40133c
  405bd9:	83 c0 20             	add    $0x20,%eax
  405bdc:	3b f0                	cmp    %eax,%esi
  405bde:	74 0c                	je     0x405bec
  405be0:	e8 57 b7 ff ff       	call   0x40133c
  405be5:	83 c0 40             	add    $0x40,%eax
  405be8:	3b f0                	cmp    %eax,%esi
  405bea:	75 0d                	jne    0x405bf9
  405bec:	ff 75 0c             	pushl  0xc(%ebp)
  405bef:	e8 c9 f4 ff ff       	call   0x4050bd
  405bf4:	59                   	pop    %ecx
  405bf5:	85 c0                	test   %eax,%eax
  405bf7:	75 07                	jne    0x405c00
  405bf9:	56                   	push   %esi
  405bfa:	e8 3f 3c 00 00       	call   0x40983e
  405bff:	59                   	pop    %ecx
  405c00:	f7 46 0c 08 01 00 00 	testl  $0x108,0xc(%esi)
  405c07:	57                   	push   %edi
  405c08:	0f 84 80 00 00 00    	je     0x405c8e
  405c0e:	8b 46 08             	mov    0x8(%esi),%eax
  405c11:	8b 3e                	mov    (%esi),%edi
  405c13:	8d 48 01             	lea    0x1(%eax),%ecx
  405c16:	89 0e                	mov    %ecx,(%esi)
  405c18:	8b 4e 18             	mov    0x18(%esi),%ecx
  405c1b:	2b f8                	sub    %eax,%edi
  405c1d:	49                   	dec    %ecx
  405c1e:	3b fb                	cmp    %ebx,%edi
  405c20:	89 4e 04             	mov    %ecx,0x4(%esi)
  405c23:	7e 1d                	jle    0x405c42
  405c25:	57                   	push   %edi
  405c26:	50                   	push   %eax
  405c27:	ff 75 0c             	pushl  0xc(%ebp)
  405c2a:	e8 1a 2f 00 00       	call   0x408b49
  405c2f:	83 c4 0c             	add    $0xc,%esp
  405c32:	89 45 fc             	mov    %eax,-0x4(%ebp)
  405c35:	eb 4d                	jmp    0x405c84
  405c37:	83 c8 20             	or     $0x20,%eax
  405c3a:	89 46 0c             	mov    %eax,0xc(%esi)
  405c3d:	83 c8 ff             	or     $0xffffffff,%eax
  405c40:	eb 79                	jmp    0x405cbb
  405c42:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  405c45:	83 f9 ff             	cmp    $0xffffffff,%ecx
  405c48:	74 1b                	je     0x405c65
  405c4a:	83 f9 fe             	cmp    $0xfffffffe,%ecx
  405c4d:	74 16                	je     0x405c65
  405c4f:	8b c1                	mov    %ecx,%eax
  405c51:	83 e0 1f             	and    $0x1f,%eax
  405c54:	8b d1                	mov    %ecx,%edx
  405c56:	c1 fa 05             	sar    $0x5,%edx
  405c59:	c1 e0 06             	shl    $0x6,%eax
  405c5c:	03 04 95 a0 fa 40 00 	add    0x40faa0(,%edx,4),%eax
  405c63:	eb 05                	jmp    0x405c6a
  405c65:	b8 d8 e4 40 00       	mov    $0x40e4d8,%eax
  405c6a:	f6 40 04 20          	testb  $0x20,0x4(%eax)
  405c6e:	74 14                	je     0x405c84
  405c70:	6a 02                	push   $0x2
  405c72:	53                   	push   %ebx
  405c73:	53                   	push   %ebx
  405c74:	51                   	push   %ecx
  405c75:	e8 ab 3a 00 00       	call   0x409725
  405c7a:	23 c2                	and    %edx,%eax
  405c7c:	83 c4 10             	add    $0x10,%esp
  405c7f:	83 f8 ff             	cmp    $0xffffffff,%eax
  405c82:	74 25                	je     0x405ca9
  405c84:	8b 46 08             	mov    0x8(%esi),%eax
  405c87:	8a 4d 08             	mov    0x8(%ebp),%cl
  405c8a:	88 08                	mov    %cl,(%eax)
  405c8c:	eb 16                	jmp    0x405ca4
  405c8e:	33 ff                	xor    %edi,%edi
  405c90:	47                   	inc    %edi
  405c91:	57                   	push   %edi
  405c92:	8d 45 08             	lea    0x8(%ebp),%eax
  405c95:	50                   	push   %eax
  405c96:	ff 75 0c             	pushl  0xc(%ebp)
  405c99:	e8 ab 2e 00 00       	call   0x408b49
  405c9e:	83 c4 0c             	add    $0xc,%esp
  405ca1:	89 45 fc             	mov    %eax,-0x4(%ebp)
  405ca4:	39 7d fc             	cmp    %edi,-0x4(%ebp)
  405ca7:	74 09                	je     0x405cb2
  405ca9:	83 4e 0c 20          	orl    $0x20,0xc(%esi)
  405cad:	83 c8 ff             	or     $0xffffffff,%eax
  405cb0:	eb 08                	jmp    0x405cba
  405cb2:	8b 45 08             	mov    0x8(%ebp),%eax
  405cb5:	25 ff 00 00 00       	and    $0xff,%eax
  405cba:	5f                   	pop    %edi
  405cbb:	5b                   	pop    %ebx
  405cbc:	5e                   	pop    %esi
  405cbd:	c9                   	leave  
  405cbe:	c3                   	ret    
  405cbf:	8b ff                	mov    %edi,%edi
  405cc1:	56                   	push   %esi
  405cc2:	57                   	push   %edi
  405cc3:	33 ff                	xor    %edi,%edi
  405cc5:	8d b7 60 ec 40 00    	lea    0x40ec60(%edi),%esi
  405ccb:	ff 36                	pushl  (%esi)
  405ccd:	e8 e8 e7 ff ff       	call   0x4044ba
  405cd2:	83 c7 04             	add    $0x4,%edi
  405cd5:	59                   	pop    %ecx
  405cd6:	89 06                	mov    %eax,(%esi)
  405cd8:	83 ff 28             	cmp    $0x28,%edi
  405cdb:	72 e8                	jb     0x405cc5
  405cdd:	5f                   	pop    %edi
  405cde:	5e                   	pop    %esi
  405cdf:	c3                   	ret    
  405ce0:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  405ce4:	f7 c1 03 00 00 00    	test   $0x3,%ecx
  405cea:	74 24                	je     0x405d10
  405cec:	8a 01                	mov    (%ecx),%al
  405cee:	83 c1 01             	add    $0x1,%ecx
  405cf1:	84 c0                	test   %al,%al
  405cf3:	74 4e                	je     0x405d43
  405cf5:	f7 c1 03 00 00 00    	test   $0x3,%ecx
  405cfb:	75 ef                	jne    0x405cec
  405cfd:	05 00 00 00 00       	add    $0x0,%eax
  405d02:	8d a4 24 00 00 00 00 	lea    0x0(%esp),%esp
  405d09:	8d a4 24 00 00 00 00 	lea    0x0(%esp),%esp
  405d10:	8b 01                	mov    (%ecx),%eax
  405d12:	ba ff fe fe 7e       	mov    $0x7efefeff,%edx
  405d17:	03 d0                	add    %eax,%edx
  405d19:	83 f0 ff             	xor    $0xffffffff,%eax
  405d1c:	33 c2                	xor    %edx,%eax
  405d1e:	83 c1 04             	add    $0x4,%ecx
  405d21:	a9 00 01 01 81       	test   $0x81010100,%eax
  405d26:	74 e8                	je     0x405d10
  405d28:	8b 41 fc             	mov    -0x4(%ecx),%eax
  405d2b:	84 c0                	test   %al,%al
  405d2d:	74 32                	je     0x405d61
  405d2f:	84 e4                	test   %ah,%ah
  405d31:	74 24                	je     0x405d57
  405d33:	a9 00 00 ff 00       	test   $0xff0000,%eax
  405d38:	74 13                	je     0x405d4d
  405d3a:	a9 00 00 00 ff       	test   $0xff000000,%eax
  405d3f:	74 02                	je     0x405d43
  405d41:	eb cd                	jmp    0x405d10
  405d43:	8d 41 ff             	lea    -0x1(%ecx),%eax
  405d46:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  405d4a:	2b c1                	sub    %ecx,%eax
  405d4c:	c3                   	ret    
  405d4d:	8d 41 fe             	lea    -0x2(%ecx),%eax
  405d50:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  405d54:	2b c1                	sub    %ecx,%eax
  405d56:	c3                   	ret    
  405d57:	8d 41 fd             	lea    -0x3(%ecx),%eax
  405d5a:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  405d5e:	2b c1                	sub    %ecx,%eax
  405d60:	c3                   	ret    
  405d61:	8d 41 fc             	lea    -0x4(%ecx),%eax
  405d64:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  405d68:	2b c1                	sub    %ecx,%eax
  405d6a:	c3                   	ret    
  405d6b:	8b ff                	mov    %edi,%edi
  405d6d:	55                   	push   %ebp
  405d6e:	8b ec                	mov    %esp,%ebp
  405d70:	83 ec 10             	sub    $0x10,%esp
  405d73:	53                   	push   %ebx
  405d74:	56                   	push   %esi
  405d75:	8b 75 0c             	mov    0xc(%ebp),%esi
  405d78:	33 db                	xor    %ebx,%ebx
  405d7a:	57                   	push   %edi
  405d7b:	8b 7d 10             	mov    0x10(%ebp),%edi
  405d7e:	3b f3                	cmp    %ebx,%esi
  405d80:	75 14                	jne    0x405d96
  405d82:	3b fb                	cmp    %ebx,%edi
  405d84:	76 10                	jbe    0x405d96
  405d86:	8b 45 08             	mov    0x8(%ebp),%eax
  405d89:	3b c3                	cmp    %ebx,%eax
  405d8b:	74 02                	je     0x405d8f
  405d8d:	89 18                	mov    %ebx,(%eax)
  405d8f:	33 c0                	xor    %eax,%eax
  405d91:	e9 83 00 00 00       	jmp    0x405e19
  405d96:	8b 45 08             	mov    0x8(%ebp),%eax
  405d99:	3b c3                	cmp    %ebx,%eax
  405d9b:	74 03                	je     0x405da0
  405d9d:	83 08 ff             	orl    $0xffffffff,(%eax)
  405da0:	81 ff ff ff ff 7f    	cmp    $0x7fffffff,%edi
  405da6:	76 1b                	jbe    0x405dc3
  405da8:	e8 78 c6 ff ff       	call   0x402425
  405dad:	6a 16                	push   $0x16
  405daf:	5e                   	pop    %esi
  405db0:	53                   	push   %ebx
  405db1:	53                   	push   %ebx
  405db2:	53                   	push   %ebx
  405db3:	53                   	push   %ebx
  405db4:	53                   	push   %ebx
  405db5:	89 30                	mov    %esi,(%eax)
  405db7:	e8 01 c6 ff ff       	call   0x4023bd
  405dbc:	83 c4 14             	add    $0x14,%esp
  405dbf:	8b c6                	mov    %esi,%eax
  405dc1:	eb 56                	jmp    0x405e19
  405dc3:	ff 75 18             	pushl  0x18(%ebp)
  405dc6:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  405dc9:	e8 f3 b7 ff ff       	call   0x4015c1
  405dce:	8b 45 f0             	mov    -0x10(%ebp),%eax
  405dd1:	39 58 14             	cmp    %ebx,0x14(%eax)
  405dd4:	0f 85 9c 00 00 00    	jne    0x405e76
  405dda:	66 8b 45 14          	mov    0x14(%ebp),%ax
  405dde:	b9 ff 00 00 00       	mov    $0xff,%ecx
  405de3:	66 3b c1             	cmp    %cx,%ax
  405de6:	76 36                	jbe    0x405e1e
  405de8:	3b f3                	cmp    %ebx,%esi
  405dea:	74 0f                	je     0x405dfb
  405dec:	3b fb                	cmp    %ebx,%edi
  405dee:	76 0b                	jbe    0x405dfb
  405df0:	57                   	push   %edi
  405df1:	53                   	push   %ebx
  405df2:	56                   	push   %esi
  405df3:	e8 f8 01 00 00       	call   0x405ff0
  405df8:	83 c4 0c             	add    $0xc,%esp
  405dfb:	e8 25 c6 ff ff       	call   0x402425
  405e00:	c7 00 2a 00 00 00    	movl   $0x2a,(%eax)
  405e06:	e8 1a c6 ff ff       	call   0x402425
  405e0b:	8b 00                	mov    (%eax),%eax
  405e0d:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  405e10:	74 07                	je     0x405e19
  405e12:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  405e15:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  405e19:	5f                   	pop    %edi
  405e1a:	5e                   	pop    %esi
  405e1b:	5b                   	pop    %ebx
  405e1c:	c9                   	leave  
  405e1d:	c3                   	ret    
  405e1e:	3b f3                	cmp    %ebx,%esi
  405e20:	74 32                	je     0x405e54
  405e22:	3b fb                	cmp    %ebx,%edi
  405e24:	77 2c                	ja     0x405e52
  405e26:	e8 fa c5 ff ff       	call   0x402425
  405e2b:	6a 22                	push   $0x22
  405e2d:	5e                   	pop    %esi
  405e2e:	53                   	push   %ebx
  405e2f:	53                   	push   %ebx
  405e30:	53                   	push   %ebx
  405e31:	53                   	push   %ebx
  405e32:	53                   	push   %ebx
  405e33:	89 30                	mov    %esi,(%eax)
  405e35:	e8 83 c5 ff ff       	call   0x4023bd
  405e3a:	83 c4 14             	add    $0x14,%esp
  405e3d:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  405e40:	0f 84 79 ff ff ff    	je     0x405dbf
  405e46:	8b 45 f8             	mov    -0x8(%ebp),%eax
  405e49:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  405e4d:	e9 6d ff ff ff       	jmp    0x405dbf
  405e52:	88 06                	mov    %al,(%esi)
  405e54:	8b 45 08             	mov    0x8(%ebp),%eax
  405e57:	3b c3                	cmp    %ebx,%eax
  405e59:	74 06                	je     0x405e61
  405e5b:	c7 00 01 00 00 00    	movl   $0x1,(%eax)
  405e61:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  405e64:	0f 84 25 ff ff ff    	je     0x405d8f
  405e6a:	8b 45 f8             	mov    -0x8(%ebp),%eax
  405e6d:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  405e71:	e9 19 ff ff ff       	jmp    0x405d8f
  405e76:	8d 4d 0c             	lea    0xc(%ebp),%ecx
  405e79:	51                   	push   %ecx
  405e7a:	53                   	push   %ebx
  405e7b:	57                   	push   %edi
  405e7c:	56                   	push   %esi
  405e7d:	6a 01                	push   $0x1
  405e7f:	8d 4d 14             	lea    0x14(%ebp),%ecx
  405e82:	51                   	push   %ecx
  405e83:	53                   	push   %ebx
  405e84:	89 5d 0c             	mov    %ebx,0xc(%ebp)
  405e87:	ff 70 04             	pushl  0x4(%eax)
  405e8a:	ff 15 48 c0 40 00    	call   *0x40c048
  405e90:	3b c3                	cmp    %ebx,%eax
  405e92:	74 14                	je     0x405ea8
  405e94:	39 5d 0c             	cmp    %ebx,0xc(%ebp)
  405e97:	0f 85 5e ff ff ff    	jne    0x405dfb
  405e9d:	8b 4d 08             	mov    0x8(%ebp),%ecx
  405ea0:	3b cb                	cmp    %ebx,%ecx
  405ea2:	74 bd                	je     0x405e61
  405ea4:	89 01                	mov    %eax,(%ecx)
  405ea6:	eb b9                	jmp    0x405e61
  405ea8:	ff 15 4c c0 40 00    	call   *0x40c04c
  405eae:	83 f8 7a             	cmp    $0x7a,%eax
  405eb1:	0f 85 44 ff ff ff    	jne    0x405dfb
  405eb7:	3b f3                	cmp    %ebx,%esi
  405eb9:	0f 84 67 ff ff ff    	je     0x405e26
  405ebf:	3b fb                	cmp    %ebx,%edi
  405ec1:	0f 86 5f ff ff ff    	jbe    0x405e26
  405ec7:	57                   	push   %edi
  405ec8:	53                   	push   %ebx
  405ec9:	56                   	push   %esi
  405eca:	e8 21 01 00 00       	call   0x405ff0
  405ecf:	83 c4 0c             	add    $0xc,%esp
  405ed2:	e9 4f ff ff ff       	jmp    0x405e26
  405ed7:	8b ff                	mov    %edi,%edi
  405ed9:	55                   	push   %ebp
  405eda:	8b ec                	mov    %esp,%ebp
  405edc:	6a 00                	push   $0x0
  405ede:	ff 75 14             	pushl  0x14(%ebp)
  405ee1:	ff 75 10             	pushl  0x10(%ebp)
  405ee4:	ff 75 0c             	pushl  0xc(%ebp)
  405ee7:	ff 75 08             	pushl  0x8(%ebp)
  405eea:	e8 7c fe ff ff       	call   0x405d6b
  405eef:	83 c4 14             	add    $0x14,%esp
  405ef2:	5d                   	pop    %ebp
  405ef3:	c3                   	ret    
  405ef4:	8b ff                	mov    %edi,%edi
  405ef6:	55                   	push   %ebp
  405ef7:	8b ec                	mov    %esp,%ebp
  405ef9:	83 ec 10             	sub    $0x10,%esp
  405efc:	ff 75 0c             	pushl  0xc(%ebp)
  405eff:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  405f02:	e8 ba b6 ff ff       	call   0x4015c1
  405f07:	0f b6 45 08          	movzbl 0x8(%ebp),%eax
  405f0b:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  405f0e:	8b 89 c8 00 00 00    	mov    0xc8(%ecx),%ecx
  405f14:	0f b7 04 41          	movzwl (%ecx,%eax,2),%eax
  405f18:	25 00 80 00 00       	and    $0x8000,%eax
  405f1d:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
  405f21:	74 07                	je     0x405f2a
  405f23:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  405f26:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  405f2a:	c9                   	leave  
  405f2b:	c3                   	ret    
  405f2c:	8b ff                	mov    %edi,%edi
  405f2e:	55                   	push   %ebp
  405f2f:	8b ec                	mov    %esp,%ebp
  405f31:	6a 00                	push   $0x0
  405f33:	ff 75 08             	pushl  0x8(%ebp)
  405f36:	e8 b9 ff ff ff       	call   0x405ef4
  405f3b:	59                   	pop    %ecx
  405f3c:	59                   	pop    %ecx
  405f3d:	5d                   	pop    %ebp
  405f3e:	c3                   	ret    
  405f3f:	3b 0d 00 e4 40 00    	cmp    0x40e400,%ecx
  405f45:	75 02                	jne    0x405f49
  405f47:	f3 c3                	repz ret 
  405f49:	e9 42 39 00 00       	jmp    0x409890
  405f4e:	cc                   	int3   
  405f4f:	cc                   	int3   
  405f50:	56                   	push   %esi
  405f51:	8b 44 24 14          	mov    0x14(%esp),%eax
  405f55:	0b c0                	or     %eax,%eax
  405f57:	75 28                	jne    0x405f81
  405f59:	8b 4c 24 10          	mov    0x10(%esp),%ecx
  405f5d:	8b 44 24 0c          	mov    0xc(%esp),%eax
  405f61:	33 d2                	xor    %edx,%edx
  405f63:	f7 f1                	div    %ecx
  405f65:	8b d8                	mov    %eax,%ebx
  405f67:	8b 44 24 08          	mov    0x8(%esp),%eax
  405f6b:	f7 f1                	div    %ecx
  405f6d:	8b f0                	mov    %eax,%esi
  405f6f:	8b c3                	mov    %ebx,%eax
  405f71:	f7 64 24 10          	mull   0x10(%esp)
  405f75:	8b c8                	mov    %eax,%ecx
  405f77:	8b c6                	mov    %esi,%eax
  405f79:	f7 64 24 10          	mull   0x10(%esp)
  405f7d:	03 d1                	add    %ecx,%edx
  405f7f:	eb 47                	jmp    0x405fc8
  405f81:	8b c8                	mov    %eax,%ecx
  405f83:	8b 5c 24 10          	mov    0x10(%esp),%ebx
  405f87:	8b 54 24 0c          	mov    0xc(%esp),%edx
  405f8b:	8b 44 24 08          	mov    0x8(%esp),%eax
  405f8f:	d1 e9                	shr    %ecx
  405f91:	d1 db                	rcr    %ebx
  405f93:	d1 ea                	shr    %edx
  405f95:	d1 d8                	rcr    %eax
  405f97:	0b c9                	or     %ecx,%ecx
  405f99:	75 f4                	jne    0x405f8f
  405f9b:	f7 f3                	div    %ebx
  405f9d:	8b f0                	mov    %eax,%esi
  405f9f:	f7 64 24 14          	mull   0x14(%esp)
  405fa3:	8b c8                	mov    %eax,%ecx
  405fa5:	8b 44 24 10          	mov    0x10(%esp),%eax
  405fa9:	f7 e6                	mul    %esi
  405fab:	03 d1                	add    %ecx,%edx
  405fad:	72 0e                	jb     0x405fbd
  405faf:	3b 54 24 0c          	cmp    0xc(%esp),%edx
  405fb3:	77 08                	ja     0x405fbd
  405fb5:	72 0f                	jb     0x405fc6
  405fb7:	3b 44 24 08          	cmp    0x8(%esp),%eax
  405fbb:	76 09                	jbe    0x405fc6
  405fbd:	4e                   	dec    %esi
  405fbe:	2b 44 24 10          	sub    0x10(%esp),%eax
  405fc2:	1b 54 24 14          	sbb    0x14(%esp),%edx
  405fc6:	33 db                	xor    %ebx,%ebx
  405fc8:	2b 44 24 08          	sub    0x8(%esp),%eax
  405fcc:	1b 54 24 0c          	sbb    0xc(%esp),%edx
  405fd0:	f7 da                	neg    %edx
  405fd2:	f7 d8                	neg    %eax
  405fd4:	83 da 00             	sbb    $0x0,%edx
  405fd7:	8b ca                	mov    %edx,%ecx
  405fd9:	8b d3                	mov    %ebx,%edx
  405fdb:	8b d9                	mov    %ecx,%ebx
  405fdd:	8b c8                	mov    %eax,%ecx
  405fdf:	8b c6                	mov    %esi,%eax
  405fe1:	5e                   	pop    %esi
  405fe2:	c2 10 00             	ret    $0x10
  405fe5:	83 25 7c fa 40 00 00 	andl   $0x0,0x40fa7c
  405fec:	c3                   	ret    
  405fed:	cc                   	int3   
  405fee:	cc                   	int3   
  405fef:	cc                   	int3   
  405ff0:	8b 54 24 0c          	mov    0xc(%esp),%edx
  405ff4:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  405ff8:	85 d2                	test   %edx,%edx
  405ffa:	74 69                	je     0x406065
  405ffc:	33 c0                	xor    %eax,%eax
  405ffe:	8a 44 24 08          	mov    0x8(%esp),%al
  406002:	84 c0                	test   %al,%al
  406004:	75 16                	jne    0x40601c
  406006:	81 fa 00 01 00 00    	cmp    $0x100,%edx
  40600c:	72 0e                	jb     0x40601c
  40600e:	83 3d 60 fa 40 00 00 	cmpl   $0x0,0x40fa60
  406015:	74 05                	je     0x40601c
  406017:	e9 d1 39 00 00       	jmp    0x4099ed
  40601c:	57                   	push   %edi
  40601d:	8b f9                	mov    %ecx,%edi
  40601f:	83 fa 04             	cmp    $0x4,%edx
  406022:	72 31                	jb     0x406055
  406024:	f7 d9                	neg    %ecx
  406026:	83 e1 03             	and    $0x3,%ecx
  406029:	74 0c                	je     0x406037
  40602b:	2b d1                	sub    %ecx,%edx
  40602d:	88 07                	mov    %al,(%edi)
  40602f:	83 c7 01             	add    $0x1,%edi
  406032:	83 e9 01             	sub    $0x1,%ecx
  406035:	75 f6                	jne    0x40602d
  406037:	8b c8                	mov    %eax,%ecx
  406039:	c1 e0 08             	shl    $0x8,%eax
  40603c:	03 c1                	add    %ecx,%eax
  40603e:	8b c8                	mov    %eax,%ecx
  406040:	c1 e0 10             	shl    $0x10,%eax
  406043:	03 c1                	add    %ecx,%eax
  406045:	8b ca                	mov    %edx,%ecx
  406047:	83 e2 03             	and    $0x3,%edx
  40604a:	c1 e9 02             	shr    $0x2,%ecx
  40604d:	74 06                	je     0x406055
  40604f:	f3 ab                	rep stos %eax,%es:(%edi)
  406051:	85 d2                	test   %edx,%edx
  406053:	74 0a                	je     0x40605f
  406055:	88 07                	mov    %al,(%edi)
  406057:	83 c7 01             	add    $0x1,%edi
  40605a:	83 ea 01             	sub    $0x1,%edx
  40605d:	75 f6                	jne    0x406055
  40605f:	8b 44 24 08          	mov    0x8(%esp),%eax
  406063:	5f                   	pop    %edi
  406064:	c3                   	ret    
  406065:	8b 44 24 04          	mov    0x4(%esp),%eax
  406069:	c3                   	ret    
  40606a:	cc                   	int3   
  40606b:	cc                   	int3   
  40606c:	53                   	push   %ebx
  40606d:	56                   	push   %esi
  40606e:	57                   	push   %edi
  40606f:	8b 54 24 10          	mov    0x10(%esp),%edx
  406073:	8b 44 24 14          	mov    0x14(%esp),%eax
  406077:	8b 4c 24 18          	mov    0x18(%esp),%ecx
  40607b:	55                   	push   %ebp
  40607c:	52                   	push   %edx
  40607d:	50                   	push   %eax
  40607e:	51                   	push   %ecx
  40607f:	51                   	push   %ecx
  406080:	68 fc 60 40 00       	push   $0x4060fc
  406085:	64 ff 35 00 00 00 00 	pushl  %fs:0x0
  40608c:	a1 00 e4 40 00       	mov    0x40e400,%eax
  406091:	33 c4                	xor    %esp,%eax
  406093:	89 44 24 08          	mov    %eax,0x8(%esp)
  406097:	64 89 25 00 00 00 00 	mov    %esp,%fs:0x0
  40609e:	8b 44 24 30          	mov    0x30(%esp),%eax
  4060a2:	8b 58 08             	mov    0x8(%eax),%ebx
  4060a5:	8b 4c 24 2c          	mov    0x2c(%esp),%ecx
  4060a9:	33 19                	xor    (%ecx),%ebx
  4060ab:	8b 70 0c             	mov    0xc(%eax),%esi
  4060ae:	83 fe fe             	cmp    $0xfffffffe,%esi
  4060b1:	74 3b                	je     0x4060ee
  4060b3:	8b 54 24 34          	mov    0x34(%esp),%edx
  4060b7:	83 fa fe             	cmp    $0xfffffffe,%edx
  4060ba:	74 04                	je     0x4060c0
  4060bc:	3b f2                	cmp    %edx,%esi
  4060be:	76 2e                	jbe    0x4060ee
  4060c0:	8d 34 76             	lea    (%esi,%esi,2),%esi
  4060c3:	8d 5c b3 10          	lea    0x10(%ebx,%esi,4),%ebx
  4060c7:	8b 0b                	mov    (%ebx),%ecx
  4060c9:	89 48 0c             	mov    %ecx,0xc(%eax)
  4060cc:	83 7b 04 00          	cmpl   $0x0,0x4(%ebx)
  4060d0:	75 cc                	jne    0x40609e
  4060d2:	68 01 01 00 00       	push   $0x101
  4060d7:	8b 43 08             	mov    0x8(%ebx),%eax
  4060da:	e8 72 3b 00 00       	call   0x409c51
  4060df:	b9 01 00 00 00       	mov    $0x1,%ecx
  4060e4:	8b 43 08             	mov    0x8(%ebx),%eax
  4060e7:	e8 84 3b 00 00       	call   0x409c70
  4060ec:	eb b0                	jmp    0x40609e
  4060ee:	64 8f 05 00 00 00 00 	popl   %fs:0x0
  4060f5:	83 c4 18             	add    $0x18,%esp
  4060f8:	5f                   	pop    %edi
  4060f9:	5e                   	pop    %esi
  4060fa:	5b                   	pop    %ebx
  4060fb:	c3                   	ret    
  4060fc:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  406100:	f7 41 04 06 00 00 00 	testl  $0x6,0x4(%ecx)
  406107:	b8 01 00 00 00       	mov    $0x1,%eax
  40610c:	74 33                	je     0x406141
  40610e:	8b 44 24 08          	mov    0x8(%esp),%eax
  406112:	8b 48 08             	mov    0x8(%eax),%ecx
  406115:	33 c8                	xor    %eax,%ecx
  406117:	e8 23 fe ff ff       	call   0x405f3f
  40611c:	55                   	push   %ebp
  40611d:	8b 68 18             	mov    0x18(%eax),%ebp
  406120:	ff 70 0c             	pushl  0xc(%eax)
  406123:	ff 70 10             	pushl  0x10(%eax)
  406126:	ff 70 14             	pushl  0x14(%eax)
  406129:	e8 3e ff ff ff       	call   0x40606c
  40612e:	83 c4 0c             	add    $0xc,%esp
  406131:	5d                   	pop    %ebp
  406132:	8b 44 24 08          	mov    0x8(%esp),%eax
  406136:	8b 54 24 10          	mov    0x10(%esp),%edx
  40613a:	89 02                	mov    %eax,(%edx)
  40613c:	b8 03 00 00 00       	mov    $0x3,%eax
  406141:	c3                   	ret    
  406142:	55                   	push   %ebp
  406143:	8b 4c 24 08          	mov    0x8(%esp),%ecx
  406147:	8b 29                	mov    (%ecx),%ebp
  406149:	ff 71 1c             	pushl  0x1c(%ecx)
  40614c:	ff 71 18             	pushl  0x18(%ecx)
  40614f:	ff 71 28             	pushl  0x28(%ecx)
  406152:	e8 15 ff ff ff       	call   0x40606c
  406157:	83 c4 0c             	add    $0xc,%esp
  40615a:	5d                   	pop    %ebp
  40615b:	c2 04 00             	ret    $0x4
  40615e:	55                   	push   %ebp
  40615f:	56                   	push   %esi
  406160:	57                   	push   %edi
  406161:	53                   	push   %ebx
  406162:	8b ea                	mov    %edx,%ebp
  406164:	33 c0                	xor    %eax,%eax
  406166:	33 db                	xor    %ebx,%ebx
  406168:	33 d2                	xor    %edx,%edx
  40616a:	33 f6                	xor    %esi,%esi
  40616c:	33 ff                	xor    %edi,%edi
  40616e:	ff d1                	call   *%ecx
  406170:	5b                   	pop    %ebx
  406171:	5f                   	pop    %edi
  406172:	5e                   	pop    %esi
  406173:	5d                   	pop    %ebp
  406174:	c3                   	ret    
  406175:	8b ea                	mov    %edx,%ebp
  406177:	8b f1                	mov    %ecx,%esi
  406179:	8b c1                	mov    %ecx,%eax
  40617b:	6a 01                	push   $0x1
  40617d:	e8 cf 3a 00 00       	call   0x409c51
  406182:	33 c0                	xor    %eax,%eax
  406184:	33 db                	xor    %ebx,%ebx
  406186:	33 c9                	xor    %ecx,%ecx
  406188:	33 d2                	xor    %edx,%edx
  40618a:	33 ff                	xor    %edi,%edi
  40618c:	ff e6                	jmp    *%esi
  40618e:	55                   	push   %ebp
  40618f:	8b ec                	mov    %esp,%ebp
  406191:	53                   	push   %ebx
  406192:	56                   	push   %esi
  406193:	57                   	push   %edi
  406194:	6a 00                	push   $0x0
  406196:	6a 00                	push   $0x0
  406198:	68 a3 61 40 00       	push   $0x4061a3
  40619d:	51                   	push   %ecx
  40619e:	e8 5b 53 00 00       	call   0x40b4fe
  4061a3:	5f                   	pop    %edi
  4061a4:	5e                   	pop    %esi
  4061a5:	5b                   	pop    %ebx
  4061a6:	5d                   	pop    %ebp
  4061a7:	c3                   	ret    
  4061a8:	55                   	push   %ebp
  4061a9:	8b 6c 24 08          	mov    0x8(%esp),%ebp
  4061ad:	52                   	push   %edx
  4061ae:	51                   	push   %ecx
  4061af:	ff 74 24 14          	pushl  0x14(%esp)
  4061b3:	e8 b4 fe ff ff       	call   0x40606c
  4061b8:	83 c4 0c             	add    $0xc,%esp
  4061bb:	5d                   	pop    %ebp
  4061bc:	c2 08 00             	ret    $0x8
  4061bf:	cc                   	int3   
  4061c0:	8b ff                	mov    %edi,%edi
  4061c2:	55                   	push   %ebp
  4061c3:	8b ec                	mov    %esp,%ebp
  4061c5:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4061c8:	b8 4d 5a 00 00       	mov    $0x5a4d,%eax
  4061cd:	66 39 01             	cmp    %ax,(%ecx)
  4061d0:	74 04                	je     0x4061d6
  4061d2:	33 c0                	xor    %eax,%eax
  4061d4:	5d                   	pop    %ebp
  4061d5:	c3                   	ret    
  4061d6:	8b 41 3c             	mov    0x3c(%ecx),%eax
  4061d9:	03 c1                	add    %ecx,%eax
  4061db:	81 38 50 45 00 00    	cmpl   $0x4550,(%eax)
  4061e1:	75 ef                	jne    0x4061d2
  4061e3:	33 d2                	xor    %edx,%edx
  4061e5:	b9 0b 01 00 00       	mov    $0x10b,%ecx
  4061ea:	66 39 48 18          	cmp    %cx,0x18(%eax)
  4061ee:	0f 94 c2             	sete   %dl
  4061f1:	8b c2                	mov    %edx,%eax
  4061f3:	5d                   	pop    %ebp
  4061f4:	c3                   	ret    
  4061f5:	cc                   	int3   
  4061f6:	cc                   	int3   
  4061f7:	cc                   	int3   
  4061f8:	cc                   	int3   
  4061f9:	cc                   	int3   
  4061fa:	cc                   	int3   
  4061fb:	cc                   	int3   
  4061fc:	cc                   	int3   
  4061fd:	cc                   	int3   
  4061fe:	cc                   	int3   
  4061ff:	cc                   	int3   
  406200:	8b ff                	mov    %edi,%edi
  406202:	55                   	push   %ebp
  406203:	8b ec                	mov    %esp,%ebp
  406205:	8b 45 08             	mov    0x8(%ebp),%eax
  406208:	8b 48 3c             	mov    0x3c(%eax),%ecx
  40620b:	03 c8                	add    %eax,%ecx
  40620d:	0f b7 41 14          	movzwl 0x14(%ecx),%eax
  406211:	53                   	push   %ebx
  406212:	56                   	push   %esi
  406213:	0f b7 71 06          	movzwl 0x6(%ecx),%esi
  406217:	33 d2                	xor    %edx,%edx
  406219:	57                   	push   %edi
  40621a:	8d 44 08 18          	lea    0x18(%eax,%ecx,1),%eax
  40621e:	85 f6                	test   %esi,%esi
  406220:	76 1b                	jbe    0x40623d
  406222:	8b 7d 0c             	mov    0xc(%ebp),%edi
  406225:	8b 48 0c             	mov    0xc(%eax),%ecx
  406228:	3b f9                	cmp    %ecx,%edi
  40622a:	72 09                	jb     0x406235
  40622c:	8b 58 08             	mov    0x8(%eax),%ebx
  40622f:	03 d9                	add    %ecx,%ebx
  406231:	3b fb                	cmp    %ebx,%edi
  406233:	72 0a                	jb     0x40623f
  406235:	42                   	inc    %edx
  406236:	83 c0 28             	add    $0x28,%eax
  406239:	3b d6                	cmp    %esi,%edx
  40623b:	72 e8                	jb     0x406225
  40623d:	33 c0                	xor    %eax,%eax
  40623f:	5f                   	pop    %edi
  406240:	5e                   	pop    %esi
  406241:	5b                   	pop    %ebx
  406242:	5d                   	pop    %ebp
  406243:	c3                   	ret    
  406244:	cc                   	int3   
  406245:	cc                   	int3   
  406246:	cc                   	int3   
  406247:	cc                   	int3   
  406248:	cc                   	int3   
  406249:	cc                   	int3   
  40624a:	cc                   	int3   
  40624b:	cc                   	int3   
  40624c:	cc                   	int3   
  40624d:	cc                   	int3   
  40624e:	cc                   	int3   
  40624f:	cc                   	int3   
  406250:	8b ff                	mov    %edi,%edi
  406252:	55                   	push   %ebp
  406253:	8b ec                	mov    %esp,%ebp
  406255:	6a fe                	push   $0xfffffffe
  406257:	68 b8 d5 40 00       	push   $0x40d5b8
  40625c:	68 d0 24 40 00       	push   $0x4024d0
  406261:	64 a1 00 00 00 00    	mov    %fs:0x0,%eax
  406267:	50                   	push   %eax
  406268:	83 ec 08             	sub    $0x8,%esp
  40626b:	53                   	push   %ebx
  40626c:	56                   	push   %esi
  40626d:	57                   	push   %edi
  40626e:	a1 00 e4 40 00       	mov    0x40e400,%eax
  406273:	31 45 f8             	xor    %eax,-0x8(%ebp)
  406276:	33 c5                	xor    %ebp,%eax
  406278:	50                   	push   %eax
  406279:	8d 45 f0             	lea    -0x10(%ebp),%eax
  40627c:	64 a3 00 00 00 00    	mov    %eax,%fs:0x0
  406282:	89 65 e8             	mov    %esp,-0x18(%ebp)
  406285:	c7 45 fc 00 00 00 00 	movl   $0x0,-0x4(%ebp)
  40628c:	68 00 00 40 00       	push   $0x400000
  406291:	e8 2a ff ff ff       	call   0x4061c0
  406296:	83 c4 04             	add    $0x4,%esp
  406299:	85 c0                	test   %eax,%eax
  40629b:	74 55                	je     0x4062f2
  40629d:	8b 45 08             	mov    0x8(%ebp),%eax
  4062a0:	2d 00 00 40 00       	sub    $0x400000,%eax
  4062a5:	50                   	push   %eax
  4062a6:	68 00 00 40 00       	push   $0x400000
  4062ab:	e8 50 ff ff ff       	call   0x406200
  4062b0:	83 c4 08             	add    $0x8,%esp
  4062b3:	85 c0                	test   %eax,%eax
  4062b5:	74 3b                	je     0x4062f2
  4062b7:	8b 40 24             	mov    0x24(%eax),%eax
  4062ba:	c1 e8 1f             	shr    $0x1f,%eax
  4062bd:	f7 d0                	not    %eax
  4062bf:	83 e0 01             	and    $0x1,%eax
  4062c2:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  4062c9:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  4062cc:	64 89 0d 00 00 00 00 	mov    %ecx,%fs:0x0
  4062d3:	59                   	pop    %ecx
  4062d4:	5f                   	pop    %edi
  4062d5:	5e                   	pop    %esi
  4062d6:	5b                   	pop    %ebx
  4062d7:	8b e5                	mov    %ebp,%esp
  4062d9:	5d                   	pop    %ebp
  4062da:	c3                   	ret    
  4062db:	8b 45 ec             	mov    -0x14(%ebp),%eax
  4062de:	8b 08                	mov    (%eax),%ecx
  4062e0:	8b 01                	mov    (%ecx),%eax
  4062e2:	33 d2                	xor    %edx,%edx
  4062e4:	3d 05 00 00 c0       	cmp    $0xc0000005,%eax
  4062e9:	0f 94 c2             	sete   %dl
  4062ec:	8b c2                	mov    %edx,%eax
  4062ee:	c3                   	ret    
  4062ef:	8b 65 e8             	mov    -0x18(%ebp),%esp
  4062f2:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  4062f9:	33 c0                	xor    %eax,%eax
  4062fb:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  4062fe:	64 89 0d 00 00 00 00 	mov    %ecx,%fs:0x0
  406305:	59                   	pop    %ecx
  406306:	5f                   	pop    %edi
  406307:	5e                   	pop    %esi
  406308:	5b                   	pop    %ebx
  406309:	8b e5                	mov    %ebp,%esp
  40630b:	5d                   	pop    %ebp
  40630c:	c3                   	ret    
  40630d:	cc                   	int3   
  40630e:	cc                   	int3   
  40630f:	cc                   	int3   
  406310:	55                   	push   %ebp
  406311:	8b ec                	mov    %esp,%ebp
  406313:	57                   	push   %edi
  406314:	56                   	push   %esi
  406315:	8b 75 0c             	mov    0xc(%ebp),%esi
  406318:	8b 4d 10             	mov    0x10(%ebp),%ecx
  40631b:	8b 7d 08             	mov    0x8(%ebp),%edi
  40631e:	8b c1                	mov    %ecx,%eax
  406320:	8b d1                	mov    %ecx,%edx
  406322:	03 c6                	add    %esi,%eax
  406324:	3b fe                	cmp    %esi,%edi
  406326:	76 08                	jbe    0x406330
  406328:	3b f8                	cmp    %eax,%edi
  40632a:	0f 82 a4 01 00 00    	jb     0x4064d4
  406330:	81 f9 00 01 00 00    	cmp    $0x100,%ecx
  406336:	72 1f                	jb     0x406357
  406338:	83 3d 60 fa 40 00 00 	cmpl   $0x0,0x40fa60
  40633f:	74 16                	je     0x406357
  406341:	57                   	push   %edi
  406342:	56                   	push   %esi
  406343:	83 e7 0f             	and    $0xf,%edi
  406346:	83 e6 0f             	and    $0xf,%esi
  406349:	3b fe                	cmp    %esi,%edi
  40634b:	5e                   	pop    %esi
  40634c:	5f                   	pop    %edi
  40634d:	75 08                	jne    0x406357
  40634f:	5e                   	pop    %esi
  406350:	5f                   	pop    %edi
  406351:	5d                   	pop    %ebp
  406352:	e9 fd 3b 00 00       	jmp    0x409f54
  406357:	f7 c7 03 00 00 00    	test   $0x3,%edi
  40635d:	75 15                	jne    0x406374
  40635f:	c1 e9 02             	shr    $0x2,%ecx
  406362:	83 e2 03             	and    $0x3,%edx
  406365:	83 f9 08             	cmp    $0x8,%ecx
  406368:	72 2a                	jb     0x406394
  40636a:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40636c:	ff 24 95 84 64 40 00 	jmp    *0x406484(,%edx,4)
  406373:	90                   	nop    
  406374:	8b c7                	mov    %edi,%eax
  406376:	ba 03 00 00 00       	mov    $0x3,%edx
  40637b:	83 e9 04             	sub    $0x4,%ecx
  40637e:	72 0c                	jb     0x40638c
  406380:	83 e0 03             	and    $0x3,%eax
  406383:	03 c8                	add    %eax,%ecx
  406385:	ff 24 85 98 63 40 00 	jmp    *0x406398(,%eax,4)
  40638c:	ff 24 8d 94 64 40 00 	jmp    *0x406494(,%ecx,4)
  406393:	90                   	nop    
  406394:	ff 24 8d 18 64 40 00 	jmp    *0x406418(,%ecx,4)
  40639b:	90                   	nop    
  40639c:	a8 63                	test   $0x63,%al
  40639e:	40                   	inc    %eax
  40639f:	00 d4                	add    %dl,%ah
  4063a1:	63 40 00             	arpl   %ax,0x0(%eax)
  4063a4:	f8                   	clc    
  4063a5:	63 40 00             	arpl   %ax,0x0(%eax)
  4063a8:	23 d1                	and    %ecx,%edx
  4063aa:	8a 06                	mov    (%esi),%al
  4063ac:	88 07                	mov    %al,(%edi)
  4063ae:	8a 46 01             	mov    0x1(%esi),%al
  4063b1:	88 47 01             	mov    %al,0x1(%edi)
  4063b4:	8a 46 02             	mov    0x2(%esi),%al
  4063b7:	c1 e9 02             	shr    $0x2,%ecx
  4063ba:	88 47 02             	mov    %al,0x2(%edi)
  4063bd:	83 c6 03             	add    $0x3,%esi
  4063c0:	83 c7 03             	add    $0x3,%edi
  4063c3:	83 f9 08             	cmp    $0x8,%ecx
  4063c6:	72 cc                	jb     0x406394
  4063c8:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  4063ca:	ff 24 95 84 64 40 00 	jmp    *0x406484(,%edx,4)
  4063d1:	8d 49 00             	lea    0x0(%ecx),%ecx
  4063d4:	23 d1                	and    %ecx,%edx
  4063d6:	8a 06                	mov    (%esi),%al
  4063d8:	88 07                	mov    %al,(%edi)
  4063da:	8a 46 01             	mov    0x1(%esi),%al
  4063dd:	c1 e9 02             	shr    $0x2,%ecx
  4063e0:	88 47 01             	mov    %al,0x1(%edi)
  4063e3:	83 c6 02             	add    $0x2,%esi
  4063e6:	83 c7 02             	add    $0x2,%edi
  4063e9:	83 f9 08             	cmp    $0x8,%ecx
  4063ec:	72 a6                	jb     0x406394
  4063ee:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  4063f0:	ff 24 95 84 64 40 00 	jmp    *0x406484(,%edx,4)
  4063f7:	90                   	nop    
  4063f8:	23 d1                	and    %ecx,%edx
  4063fa:	8a 06                	mov    (%esi),%al
  4063fc:	88 07                	mov    %al,(%edi)
  4063fe:	83 c6 01             	add    $0x1,%esi
  406401:	c1 e9 02             	shr    $0x2,%ecx
  406404:	83 c7 01             	add    $0x1,%edi
  406407:	83 f9 08             	cmp    $0x8,%ecx
  40640a:	72 88                	jb     0x406394
  40640c:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40640e:	ff 24 95 84 64 40 00 	jmp    *0x406484(,%edx,4)
  406415:	8d 49 00             	lea    0x0(%ecx),%ecx
  406418:	7b 64                	jnp    0x40647e
  40641a:	40                   	inc    %eax
  40641b:	00 68 64             	add    %ch,0x64(%eax)
  40641e:	40                   	inc    %eax
  40641f:	00 60 64             	add    %ah,0x64(%eax)
  406422:	40                   	inc    %eax
  406423:	00 58 64             	add    %bl,0x64(%eax)
  406426:	40                   	inc    %eax
  406427:	00 50 64             	add    %dl,0x64(%eax)
  40642a:	40                   	inc    %eax
  40642b:	00 48 64             	add    %cl,0x64(%eax)
  40642e:	40                   	inc    %eax
  40642f:	00 40 64             	add    %al,0x64(%eax)
  406432:	40                   	inc    %eax
  406433:	00 38                	add    %bh,(%eax)
  406435:	64                   	fs
  406436:	40                   	inc    %eax
  406437:	00 8b 44 8e e4 89    	add    %cl,-0x761b71bc(%ebx)
  40643d:	44                   	inc    %esp
  40643e:	8f                   	(bad)  
  40643f:	e4 8b                	in     $0x8b,%al
  406441:	44                   	inc    %esp
  406442:	8e e8                	mov    %eax,%gs
  406444:	89 44 8f e8          	mov    %eax,-0x18(%edi,%ecx,4)
  406448:	8b 44 8e ec          	mov    -0x14(%esi,%ecx,4),%eax
  40644c:	89 44 8f ec          	mov    %eax,-0x14(%edi,%ecx,4)
  406450:	8b 44 8e f0          	mov    -0x10(%esi,%ecx,4),%eax
  406454:	89 44 8f f0          	mov    %eax,-0x10(%edi,%ecx,4)
  406458:	8b 44 8e f4          	mov    -0xc(%esi,%ecx,4),%eax
  40645c:	89 44 8f f4          	mov    %eax,-0xc(%edi,%ecx,4)
  406460:	8b 44 8e f8          	mov    -0x8(%esi,%ecx,4),%eax
  406464:	89 44 8f f8          	mov    %eax,-0x8(%edi,%ecx,4)
  406468:	8b 44 8e fc          	mov    -0x4(%esi,%ecx,4),%eax
  40646c:	89 44 8f fc          	mov    %eax,-0x4(%edi,%ecx,4)
  406470:	8d 04 8d 00 00 00 00 	lea    0x0(,%ecx,4),%eax
  406477:	03 f0                	add    %eax,%esi
  406479:	03 f8                	add    %eax,%edi
  40647b:	ff 24 95 84 64 40 00 	jmp    *0x406484(,%edx,4)
  406482:	8b ff                	mov    %edi,%edi
  406484:	94                   	xchg   %eax,%esp
  406485:	64                   	fs
  406486:	40                   	inc    %eax
  406487:	00 9c 64 40 00 a8 64 	add    %bl,0x64a80040(%esp,%eiz,2)
  40648e:	40                   	inc    %eax
  40648f:	00 bc 64 40 00 8b 45 	add    %bh,0x458b0040(%esp,%eiz,2)
  406496:	08 5e 5f             	or     %bl,0x5f(%esi)
  406499:	c9                   	leave  
  40649a:	c3                   	ret    
  40649b:	90                   	nop    
  40649c:	8a 06                	mov    (%esi),%al
  40649e:	88 07                	mov    %al,(%edi)
  4064a0:	8b 45 08             	mov    0x8(%ebp),%eax
  4064a3:	5e                   	pop    %esi
  4064a4:	5f                   	pop    %edi
  4064a5:	c9                   	leave  
  4064a6:	c3                   	ret    
  4064a7:	90                   	nop    
  4064a8:	8a 06                	mov    (%esi),%al
  4064aa:	88 07                	mov    %al,(%edi)
  4064ac:	8a 46 01             	mov    0x1(%esi),%al
  4064af:	88 47 01             	mov    %al,0x1(%edi)
  4064b2:	8b 45 08             	mov    0x8(%ebp),%eax
  4064b5:	5e                   	pop    %esi
  4064b6:	5f                   	pop    %edi
  4064b7:	c9                   	leave  
  4064b8:	c3                   	ret    
  4064b9:	8d 49 00             	lea    0x0(%ecx),%ecx
  4064bc:	8a 06                	mov    (%esi),%al
  4064be:	88 07                	mov    %al,(%edi)
  4064c0:	8a 46 01             	mov    0x1(%esi),%al
  4064c3:	88 47 01             	mov    %al,0x1(%edi)
  4064c6:	8a 46 02             	mov    0x2(%esi),%al
  4064c9:	88 47 02             	mov    %al,0x2(%edi)
  4064cc:	8b 45 08             	mov    0x8(%ebp),%eax
  4064cf:	5e                   	pop    %esi
  4064d0:	5f                   	pop    %edi
  4064d1:	c9                   	leave  
  4064d2:	c3                   	ret    
  4064d3:	90                   	nop    
  4064d4:	8d 74 31 fc          	lea    -0x4(%ecx,%esi,1),%esi
  4064d8:	8d 7c 39 fc          	lea    -0x4(%ecx,%edi,1),%edi
  4064dc:	f7 c7 03 00 00 00    	test   $0x3,%edi
  4064e2:	75 24                	jne    0x406508
  4064e4:	c1 e9 02             	shr    $0x2,%ecx
  4064e7:	83 e2 03             	and    $0x3,%edx
  4064ea:	83 f9 08             	cmp    $0x8,%ecx
  4064ed:	72 0d                	jb     0x4064fc
  4064ef:	fd                   	std    
  4064f0:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  4064f2:	fc                   	cld    
  4064f3:	ff 24 95 20 66 40 00 	jmp    *0x406620(,%edx,4)
  4064fa:	8b ff                	mov    %edi,%edi
  4064fc:	f7 d9                	neg    %ecx
  4064fe:	ff 24 8d d0 65 40 00 	jmp    *0x4065d0(,%ecx,4)
  406505:	8d 49 00             	lea    0x0(%ecx),%ecx
  406508:	8b c7                	mov    %edi,%eax
  40650a:	ba 03 00 00 00       	mov    $0x3,%edx
  40650f:	83 f9 04             	cmp    $0x4,%ecx
  406512:	72 0c                	jb     0x406520
  406514:	83 e0 03             	and    $0x3,%eax
  406517:	2b c8                	sub    %eax,%ecx
  406519:	ff 24 85 24 65 40 00 	jmp    *0x406524(,%eax,4)
  406520:	ff 24 8d 20 66 40 00 	jmp    *0x406620(,%ecx,4)
  406527:	90                   	nop    
  406528:	34 65                	xor    $0x65,%al
  40652a:	40                   	inc    %eax
  40652b:	00 58 65             	add    %bl,0x65(%eax)
  40652e:	40                   	inc    %eax
  40652f:	00 80 65 40 00 8a    	add    %al,-0x75ffbf9b(%eax)
  406535:	46                   	inc    %esi
  406536:	03 23                	add    (%ebx),%esp
  406538:	d1 88 47 03 83 ee    	rorl   -0x117cfcb9(%eax)
  40653e:	01 c1                	add    %eax,%ecx
  406540:	e9 02 83 ef 01       	jmp    0x22fe847
  406545:	83 f9 08             	cmp    $0x8,%ecx
  406548:	72 b2                	jb     0x4064fc
  40654a:	fd                   	std    
  40654b:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40654d:	fc                   	cld    
  40654e:	ff 24 95 20 66 40 00 	jmp    *0x406620(,%edx,4)
  406555:	8d 49 00             	lea    0x0(%ecx),%ecx
  406558:	8a 46 03             	mov    0x3(%esi),%al
  40655b:	23 d1                	and    %ecx,%edx
  40655d:	88 47 03             	mov    %al,0x3(%edi)
  406560:	8a 46 02             	mov    0x2(%esi),%al
  406563:	c1 e9 02             	shr    $0x2,%ecx
  406566:	88 47 02             	mov    %al,0x2(%edi)
  406569:	83 ee 02             	sub    $0x2,%esi
  40656c:	83 ef 02             	sub    $0x2,%edi
  40656f:	83 f9 08             	cmp    $0x8,%ecx
  406572:	72 88                	jb     0x4064fc
  406574:	fd                   	std    
  406575:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  406577:	fc                   	cld    
  406578:	ff 24 95 20 66 40 00 	jmp    *0x406620(,%edx,4)
  40657f:	90                   	nop    
  406580:	8a 46 03             	mov    0x3(%esi),%al
  406583:	23 d1                	and    %ecx,%edx
  406585:	88 47 03             	mov    %al,0x3(%edi)
  406588:	8a 46 02             	mov    0x2(%esi),%al
  40658b:	88 47 02             	mov    %al,0x2(%edi)
  40658e:	8a 46 01             	mov    0x1(%esi),%al
  406591:	c1 e9 02             	shr    $0x2,%ecx
  406594:	88 47 01             	mov    %al,0x1(%edi)
  406597:	83 ee 03             	sub    $0x3,%esi
  40659a:	83 ef 03             	sub    $0x3,%edi
  40659d:	83 f9 08             	cmp    $0x8,%ecx
  4065a0:	0f 82 56 ff ff ff    	jb     0x4064fc
  4065a6:	fd                   	std    
  4065a7:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  4065a9:	fc                   	cld    
  4065aa:	ff 24 95 20 66 40 00 	jmp    *0x406620(,%edx,4)
  4065b1:	8d 49 00             	lea    0x0(%ecx),%ecx
  4065b4:	d4 65                	aam    $0x65
  4065b6:	40                   	inc    %eax
  4065b7:	00 dc                	add    %bl,%ah
  4065b9:	65                   	gs
  4065ba:	40                   	inc    %eax
  4065bb:	00 e4                	add    %ah,%ah
  4065bd:	65                   	gs
  4065be:	40                   	inc    %eax
  4065bf:	00 ec                	add    %ch,%ah
  4065c1:	65                   	gs
  4065c2:	40                   	inc    %eax
  4065c3:	00 f4                	add    %dh,%ah
  4065c5:	65                   	gs
  4065c6:	40                   	inc    %eax
  4065c7:	00 fc                	add    %bh,%ah
  4065c9:	65                   	gs
  4065ca:	40                   	inc    %eax
  4065cb:	00 04 66             	add    %al,(%esi,%eiz,2)
  4065ce:	40                   	inc    %eax
  4065cf:	00 17                	add    %dl,(%edi)
  4065d1:	66 40                	inc    %ax
  4065d3:	00 8b 44 8e 1c 89    	add    %cl,-0x76e371bc(%ebx)
  4065d9:	44                   	inc    %esp
  4065da:	8f                   	(bad)  
  4065db:	1c 8b                	sbb    $0x8b,%al
  4065dd:	44                   	inc    %esp
  4065de:	8e 18                	mov    (%eax),%ds
  4065e0:	89 44 8f 18          	mov    %eax,0x18(%edi,%ecx,4)
  4065e4:	8b 44 8e 14          	mov    0x14(%esi,%ecx,4),%eax
  4065e8:	89 44 8f 14          	mov    %eax,0x14(%edi,%ecx,4)
  4065ec:	8b 44 8e 10          	mov    0x10(%esi,%ecx,4),%eax
  4065f0:	89 44 8f 10          	mov    %eax,0x10(%edi,%ecx,4)
  4065f4:	8b 44 8e 0c          	mov    0xc(%esi,%ecx,4),%eax
  4065f8:	89 44 8f 0c          	mov    %eax,0xc(%edi,%ecx,4)
  4065fc:	8b 44 8e 08          	mov    0x8(%esi,%ecx,4),%eax
  406600:	89 44 8f 08          	mov    %eax,0x8(%edi,%ecx,4)
  406604:	8b 44 8e 04          	mov    0x4(%esi,%ecx,4),%eax
  406608:	89 44 8f 04          	mov    %eax,0x4(%edi,%ecx,4)
  40660c:	8d 04 8d 00 00 00 00 	lea    0x0(,%ecx,4),%eax
  406613:	03 f0                	add    %eax,%esi
  406615:	03 f8                	add    %eax,%edi
  406617:	ff 24 95 20 66 40 00 	jmp    *0x406620(,%edx,4)
  40661e:	8b ff                	mov    %edi,%edi
  406620:	30 66 40             	xor    %ah,0x40(%esi)
  406623:	00 38                	add    %bh,(%eax)
  406625:	66 40                	inc    %ax
  406627:	00 48 66             	add    %cl,0x66(%eax)
  40662a:	40                   	inc    %eax
  40662b:	00 5c 66 40          	add    %bl,0x40(%esi,%eiz,2)
  40662f:	00 8b 45 08 5e 5f    	add    %cl,0x5f5e0845(%ebx)
  406635:	c9                   	leave  
  406636:	c3                   	ret    
  406637:	90                   	nop    
  406638:	8a 46 03             	mov    0x3(%esi),%al
  40663b:	88 47 03             	mov    %al,0x3(%edi)
  40663e:	8b 45 08             	mov    0x8(%ebp),%eax
  406641:	5e                   	pop    %esi
  406642:	5f                   	pop    %edi
  406643:	c9                   	leave  
  406644:	c3                   	ret    
  406645:	8d 49 00             	lea    0x0(%ecx),%ecx
  406648:	8a 46 03             	mov    0x3(%esi),%al
  40664b:	88 47 03             	mov    %al,0x3(%edi)
  40664e:	8a 46 02             	mov    0x2(%esi),%al
  406651:	88 47 02             	mov    %al,0x2(%edi)
  406654:	8b 45 08             	mov    0x8(%ebp),%eax
  406657:	5e                   	pop    %esi
  406658:	5f                   	pop    %edi
  406659:	c9                   	leave  
  40665a:	c3                   	ret    
  40665b:	90                   	nop    
  40665c:	8a 46 03             	mov    0x3(%esi),%al
  40665f:	88 47 03             	mov    %al,0x3(%edi)
  406662:	8a 46 02             	mov    0x2(%esi),%al
  406665:	88 47 02             	mov    %al,0x2(%edi)
  406668:	8a 46 01             	mov    0x1(%esi),%al
  40666b:	88 47 01             	mov    %al,0x1(%edi)
  40666e:	8b 45 08             	mov    0x8(%ebp),%eax
  406671:	5e                   	pop    %esi
  406672:	5f                   	pop    %edi
  406673:	c9                   	leave  
  406674:	c3                   	ret    
  406675:	8b ff                	mov    %edi,%edi
  406677:	55                   	push   %ebp
  406678:	8b ec                	mov    %esp,%ebp
  40667a:	83 ec 10             	sub    $0x10,%esp
  40667d:	ff 75 0c             	pushl  0xc(%ebp)
  406680:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  406683:	e8 39 af ff ff       	call   0x4015c1
  406688:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40668b:	83 b8 ac 00 00 00 01 	cmpl   $0x1,0xac(%eax)
  406692:	7e 13                	jle    0x4066a7
  406694:	8d 45 f0             	lea    -0x10(%ebp),%eax
  406697:	50                   	push   %eax
  406698:	6a 04                	push   $0x4
  40669a:	ff 75 08             	pushl  0x8(%ebp)
  40669d:	e8 95 39 00 00       	call   0x40a037
  4066a2:	83 c4 0c             	add    $0xc,%esp
  4066a5:	eb 10                	jmp    0x4066b7
  4066a7:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
  4066ad:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4066b0:	0f b7 04 48          	movzwl (%eax,%ecx,2),%eax
  4066b4:	83 e0 04             	and    $0x4,%eax
  4066b7:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
  4066bb:	74 07                	je     0x4066c4
  4066bd:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  4066c0:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  4066c4:	c9                   	leave  
  4066c5:	c3                   	ret    
  4066c6:	8b ff                	mov    %edi,%edi
  4066c8:	55                   	push   %ebp
  4066c9:	8b ec                	mov    %esp,%ebp
  4066cb:	83 3d 04 f6 40 00 00 	cmpl   $0x0,0x40f604
  4066d2:	75 12                	jne    0x4066e6
  4066d4:	8b 45 08             	mov    0x8(%ebp),%eax
  4066d7:	8b 0d 40 ec 40 00    	mov    0x40ec40,%ecx
  4066dd:	0f b7 04 41          	movzwl (%ecx,%eax,2),%eax
  4066e1:	83 e0 04             	and    $0x4,%eax
  4066e4:	5d                   	pop    %ebp
  4066e5:	c3                   	ret    
  4066e6:	6a 00                	push   $0x0
  4066e8:	ff 75 08             	pushl  0x8(%ebp)
  4066eb:	e8 85 ff ff ff       	call   0x406675
  4066f0:	59                   	pop    %ecx
  4066f1:	59                   	pop    %ecx
  4066f2:	5d                   	pop    %ebp
  4066f3:	c3                   	ret    
  4066f4:	8b ff                	mov    %edi,%edi
  4066f6:	55                   	push   %ebp
  4066f7:	8b ec                	mov    %esp,%ebp
  4066f9:	83 ec 10             	sub    $0x10,%esp
  4066fc:	ff 75 0c             	pushl  0xc(%ebp)
  4066ff:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  406702:	e8 ba ae ff ff       	call   0x4015c1
  406707:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40670a:	83 b8 ac 00 00 00 01 	cmpl   $0x1,0xac(%eax)
  406711:	7e 16                	jle    0x406729
  406713:	8d 45 f0             	lea    -0x10(%ebp),%eax
  406716:	50                   	push   %eax
  406717:	68 80 00 00 00       	push   $0x80
  40671c:	ff 75 08             	pushl  0x8(%ebp)
  40671f:	e8 13 39 00 00       	call   0x40a037
  406724:	83 c4 0c             	add    $0xc,%esp
  406727:	eb 12                	jmp    0x40673b
  406729:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
  40672f:	8b 4d 08             	mov    0x8(%ebp),%ecx
  406732:	0f b7 04 48          	movzwl (%eax,%ecx,2),%eax
  406736:	25 80 00 00 00       	and    $0x80,%eax
  40673b:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
  40673f:	74 07                	je     0x406748
  406741:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  406744:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  406748:	c9                   	leave  
  406749:	c3                   	ret    
  40674a:	8b ff                	mov    %edi,%edi
  40674c:	55                   	push   %ebp
  40674d:	8b ec                	mov    %esp,%ebp
  40674f:	83 3d 04 f6 40 00 00 	cmpl   $0x0,0x40f604
  406756:	75 14                	jne    0x40676c
  406758:	8b 45 08             	mov    0x8(%ebp),%eax
  40675b:	8b 0d 40 ec 40 00    	mov    0x40ec40,%ecx
  406761:	0f b7 04 41          	movzwl (%ecx,%eax,2),%eax
  406765:	25 80 00 00 00       	and    $0x80,%eax
  40676a:	5d                   	pop    %ebp
  40676b:	c3                   	ret    
  40676c:	6a 00                	push   $0x0
  40676e:	ff 75 08             	pushl  0x8(%ebp)
  406771:	e8 7e ff ff ff       	call   0x4066f4
  406776:	59                   	pop    %ecx
  406777:	59                   	pop    %ecx
  406778:	5d                   	pop    %ebp
  406779:	c3                   	ret    
  40677a:	8b ff                	mov    %edi,%edi
  40677c:	55                   	push   %ebp
  40677d:	8b ec                	mov    %esp,%ebp
  40677f:	83 ec 10             	sub    $0x10,%esp
  406782:	ff 75 0c             	pushl  0xc(%ebp)
  406785:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  406788:	e8 34 ae ff ff       	call   0x4015c1
  40678d:	8b 45 f0             	mov    -0x10(%ebp),%eax
  406790:	83 b8 ac 00 00 00 01 	cmpl   $0x1,0xac(%eax)
  406797:	7e 13                	jle    0x4067ac
  406799:	8d 45 f0             	lea    -0x10(%ebp),%eax
  40679c:	50                   	push   %eax
  40679d:	6a 08                	push   $0x8
  40679f:	ff 75 08             	pushl  0x8(%ebp)
  4067a2:	e8 90 38 00 00       	call   0x40a037
  4067a7:	83 c4 0c             	add    $0xc,%esp
  4067aa:	eb 10                	jmp    0x4067bc
  4067ac:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
  4067b2:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4067b5:	0f b7 04 48          	movzwl (%eax,%ecx,2),%eax
  4067b9:	83 e0 08             	and    $0x8,%eax
  4067bc:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
  4067c0:	74 07                	je     0x4067c9
  4067c2:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  4067c5:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  4067c9:	c9                   	leave  
  4067ca:	c3                   	ret    
  4067cb:	8b ff                	mov    %edi,%edi
  4067cd:	55                   	push   %ebp
  4067ce:	8b ec                	mov    %esp,%ebp
  4067d0:	83 3d 04 f6 40 00 00 	cmpl   $0x0,0x40f604
  4067d7:	75 12                	jne    0x4067eb
  4067d9:	8b 45 08             	mov    0x8(%ebp),%eax
  4067dc:	8b 0d 40 ec 40 00    	mov    0x40ec40,%ecx
  4067e2:	0f b7 04 41          	movzwl (%ecx,%eax,2),%eax
  4067e6:	83 e0 08             	and    $0x8,%eax
  4067e9:	5d                   	pop    %ebp
  4067ea:	c3                   	ret    
  4067eb:	6a 00                	push   $0x0
  4067ed:	ff 75 08             	pushl  0x8(%ebp)
  4067f0:	e8 85 ff ff ff       	call   0x40677a
  4067f5:	59                   	pop    %ecx
  4067f6:	59                   	pop    %ecx
  4067f7:	5d                   	pop    %ebp
  4067f8:	c3                   	ret    
  4067f9:	8b ff                	mov    %edi,%edi
  4067fb:	55                   	push   %ebp
  4067fc:	8b ec                	mov    %esp,%ebp
  4067fe:	56                   	push   %esi
  4067ff:	8b 75 08             	mov    0x8(%ebp),%esi
  406802:	57                   	push   %edi
  406803:	33 ff                	xor    %edi,%edi
  406805:	3b f7                	cmp    %edi,%esi
  406807:	75 1d                	jne    0x406826
  406809:	e8 17 bc ff ff       	call   0x402425
  40680e:	57                   	push   %edi
  40680f:	57                   	push   %edi
  406810:	57                   	push   %edi
  406811:	57                   	push   %edi
  406812:	57                   	push   %edi
  406813:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  406819:	e8 9f bb ff ff       	call   0x4023bd
  40681e:	83 c4 14             	add    $0x14,%esp
  406821:	e9 f7 00 00 00       	jmp    0x40691d
  406826:	8b 46 0c             	mov    0xc(%esi),%eax
  406829:	a8 83                	test   $0x83,%al
  40682b:	0f 84 ec 00 00 00    	je     0x40691d
  406831:	a8 40                	test   $0x40,%al
  406833:	0f 85 e4 00 00 00    	jne    0x40691d
  406839:	a8 02                	test   $0x2,%al
  40683b:	74 0b                	je     0x406848
  40683d:	83 c8 20             	or     $0x20,%eax
  406840:	89 46 0c             	mov    %eax,0xc(%esi)
  406843:	e9 d5 00 00 00       	jmp    0x40691d
  406848:	83 c8 01             	or     $0x1,%eax
  40684b:	89 46 0c             	mov    %eax,0xc(%esi)
  40684e:	a9 0c 01 00 00       	test   $0x10c,%eax
  406853:	75 09                	jne    0x40685e
  406855:	56                   	push   %esi
  406856:	e8 e3 2f 00 00       	call   0x40983e
  40685b:	59                   	pop    %ecx
  40685c:	eb 05                	jmp    0x406863
  40685e:	8b 46 08             	mov    0x8(%esi),%eax
  406861:	89 06                	mov    %eax,(%esi)
  406863:	ff 76 18             	pushl  0x18(%esi)
  406866:	ff 76 08             	pushl  0x8(%esi)
  406869:	56                   	push   %esi
  40686a:	e8 b2 e8 ff ff       	call   0x405121
  40686f:	59                   	pop    %ecx
  406870:	50                   	push   %eax
  406871:	e8 3b 3e 00 00       	call   0x40a6b1
  406876:	83 c4 0c             	add    $0xc,%esp
  406879:	89 46 04             	mov    %eax,0x4(%esi)
  40687c:	3b c7                	cmp    %edi,%eax
  40687e:	0f 84 89 00 00 00    	je     0x40690d
  406884:	83 f8 ff             	cmp    $0xffffffff,%eax
  406887:	0f 84 80 00 00 00    	je     0x40690d
  40688d:	f6 46 0c 82          	testb  $0x82,0xc(%esi)
  406891:	75 4f                	jne    0x4068e2
  406893:	56                   	push   %esi
  406894:	e8 88 e8 ff ff       	call   0x405121
  406899:	59                   	pop    %ecx
  40689a:	83 f8 ff             	cmp    $0xffffffff,%eax
  40689d:	74 2e                	je     0x4068cd
  40689f:	56                   	push   %esi
  4068a0:	e8 7c e8 ff ff       	call   0x405121
  4068a5:	59                   	pop    %ecx
  4068a6:	83 f8 fe             	cmp    $0xfffffffe,%eax
  4068a9:	74 22                	je     0x4068cd
  4068ab:	56                   	push   %esi
  4068ac:	e8 70 e8 ff ff       	call   0x405121
  4068b1:	c1 f8 05             	sar    $0x5,%eax
  4068b4:	56                   	push   %esi
  4068b5:	8d 3c 85 a0 fa 40 00 	lea    0x40faa0(,%eax,4),%edi
  4068bc:	e8 60 e8 ff ff       	call   0x405121
  4068c1:	83 e0 1f             	and    $0x1f,%eax
  4068c4:	59                   	pop    %ecx
  4068c5:	c1 e0 06             	shl    $0x6,%eax
  4068c8:	03 07                	add    (%edi),%eax
  4068ca:	59                   	pop    %ecx
  4068cb:	eb 05                	jmp    0x4068d2
  4068cd:	b8 d8 e4 40 00       	mov    $0x40e4d8,%eax
  4068d2:	8a 40 04             	mov    0x4(%eax),%al
  4068d5:	24 82                	and    $0x82,%al
  4068d7:	3c 82                	cmp    $0x82,%al
  4068d9:	75 07                	jne    0x4068e2
  4068db:	81 4e 0c 00 20 00 00 	orl    $0x2000,0xc(%esi)
  4068e2:	81 7e 18 00 02 00 00 	cmpl   $0x200,0x18(%esi)
  4068e9:	75 15                	jne    0x406900
  4068eb:	8b 46 0c             	mov    0xc(%esi),%eax
  4068ee:	a8 08                	test   $0x8,%al
  4068f0:	74 0e                	je     0x406900
  4068f2:	a9 00 04 00 00       	test   $0x400,%eax
  4068f7:	75 07                	jne    0x406900
  4068f9:	c7 46 18 00 10 00 00 	movl   $0x1000,0x18(%esi)
  406900:	8b 0e                	mov    (%esi),%ecx
  406902:	ff 4e 04             	decl   0x4(%esi)
  406905:	0f b6 01             	movzbl (%ecx),%eax
  406908:	41                   	inc    %ecx
  406909:	89 0e                	mov    %ecx,(%esi)
  40690b:	eb 13                	jmp    0x406920
  40690d:	f7 d8                	neg    %eax
  40690f:	1b c0                	sbb    %eax,%eax
  406911:	83 e0 10             	and    $0x10,%eax
  406914:	83 c0 10             	add    $0x10,%eax
  406917:	09 46 0c             	or     %eax,0xc(%esi)
  40691a:	89 7e 04             	mov    %edi,0x4(%esi)
  40691d:	83 c8 ff             	or     $0xffffffff,%eax
  406920:	5f                   	pop    %edi
  406921:	5e                   	pop    %esi
  406922:	5d                   	pop    %ebp
  406923:	c3                   	ret    
  406924:	8b ff                	mov    %edi,%edi
  406926:	55                   	push   %ebp
  406927:	8b ec                	mov    %esp,%ebp
  406929:	56                   	push   %esi
  40692a:	8b 75 0c             	mov    0xc(%ebp),%esi
  40692d:	f6 46 0c 40          	testb  $0x40,0xc(%esi)
  406931:	57                   	push   %edi
  406932:	75 79                	jne    0x4069ad
  406934:	56                   	push   %esi
  406935:	e8 e7 e7 ff ff       	call   0x405121
  40693a:	59                   	pop    %ecx
  40693b:	ba d8 e4 40 00       	mov    $0x40e4d8,%edx
  406940:	83 f8 ff             	cmp    $0xffffffff,%eax
  406943:	74 1b                	je     0x406960
  406945:	83 f8 fe             	cmp    $0xfffffffe,%eax
  406948:	74 16                	je     0x406960
  40694a:	8b c8                	mov    %eax,%ecx
  40694c:	83 e1 1f             	and    $0x1f,%ecx
  40694f:	8b f8                	mov    %eax,%edi
  406951:	c1 ff 05             	sar    $0x5,%edi
  406954:	c1 e1 06             	shl    $0x6,%ecx
  406957:	03 0c bd a0 fa 40 00 	add    0x40faa0(,%edi,4),%ecx
  40695e:	eb 02                	jmp    0x406962
  406960:	8b ca                	mov    %edx,%ecx
  406962:	f6 41 24 7f          	testb  $0x7f,0x24(%ecx)
  406966:	75 26                	jne    0x40698e
  406968:	83 f8 ff             	cmp    $0xffffffff,%eax
  40696b:	74 19                	je     0x406986
  40696d:	83 f8 fe             	cmp    $0xfffffffe,%eax
  406970:	74 14                	je     0x406986
  406972:	8b c8                	mov    %eax,%ecx
  406974:	83 e0 1f             	and    $0x1f,%eax
  406977:	c1 f9 05             	sar    $0x5,%ecx
  40697a:	c1 e0 06             	shl    $0x6,%eax
  40697d:	03 04 8d a0 fa 40 00 	add    0x40faa0(,%ecx,4),%eax
  406984:	eb 02                	jmp    0x406988
  406986:	8b c2                	mov    %edx,%eax
  406988:	f6 40 24 80          	testb  $0x80,0x24(%eax)
  40698c:	74 1f                	je     0x4069ad
  40698e:	e8 92 ba ff ff       	call   0x402425
  406993:	33 ff                	xor    %edi,%edi
  406995:	57                   	push   %edi
  406996:	57                   	push   %edi
  406997:	57                   	push   %edi
  406998:	57                   	push   %edi
  406999:	57                   	push   %edi
  40699a:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  4069a0:	e8 18 ba ff ff       	call   0x4023bd
  4069a5:	83 c4 14             	add    $0x14,%esp
  4069a8:	83 c8 ff             	or     $0xffffffff,%eax
  4069ab:	eb 4a                	jmp    0x4069f7
  4069ad:	53                   	push   %ebx
  4069ae:	8b 5d 08             	mov    0x8(%ebp),%ebx
  4069b1:	83 fb ff             	cmp    $0xffffffff,%ebx
  4069b4:	74 3d                	je     0x4069f3
  4069b6:	8b 46 0c             	mov    0xc(%esi),%eax
  4069b9:	a8 01                	test   $0x1,%al
  4069bb:	75 08                	jne    0x4069c5
  4069bd:	84 c0                	test   %al,%al
  4069bf:	79 32                	jns    0x4069f3
  4069c1:	a8 02                	test   $0x2,%al
  4069c3:	75 2e                	jne    0x4069f3
  4069c5:	33 ff                	xor    %edi,%edi
  4069c7:	39 7e 08             	cmp    %edi,0x8(%esi)
  4069ca:	75 07                	jne    0x4069d3
  4069cc:	56                   	push   %esi
  4069cd:	e8 6c 2e 00 00       	call   0x40983e
  4069d2:	59                   	pop    %ecx
  4069d3:	8b 06                	mov    (%esi),%eax
  4069d5:	3b 46 08             	cmp    0x8(%esi),%eax
  4069d8:	75 08                	jne    0x4069e2
  4069da:	39 7e 04             	cmp    %edi,0x4(%esi)
  4069dd:	75 14                	jne    0x4069f3
  4069df:	40                   	inc    %eax
  4069e0:	89 06                	mov    %eax,(%esi)
  4069e2:	ff 0e                	decl   (%esi)
  4069e4:	f6 46 0c 40          	testb  $0x40,0xc(%esi)
  4069e8:	8b 06                	mov    (%esi),%eax
  4069ea:	74 0f                	je     0x4069fb
  4069ec:	38 18                	cmp    %bl,(%eax)
  4069ee:	74 0d                	je     0x4069fd
  4069f0:	40                   	inc    %eax
  4069f1:	89 06                	mov    %eax,(%esi)
  4069f3:	83 c8 ff             	or     $0xffffffff,%eax
  4069f6:	5b                   	pop    %ebx
  4069f7:	5f                   	pop    %edi
  4069f8:	5e                   	pop    %esi
  4069f9:	5d                   	pop    %ebp
  4069fa:	c3                   	ret    
  4069fb:	88 18                	mov    %bl,(%eax)
  4069fd:	8b 46 0c             	mov    0xc(%esi),%eax
  406a00:	ff 46 04             	incl   0x4(%esi)
  406a03:	83 e0 ef             	and    $0xffffffef,%eax
  406a06:	83 c8 01             	or     $0x1,%eax
  406a09:	89 46 0c             	mov    %eax,0xc(%esi)
  406a0c:	8b c3                	mov    %ebx,%eax
  406a0e:	25 ff 00 00 00       	and    $0xff,%eax
  406a13:	eb e1                	jmp    0x4069f6
  406a15:	8b ff                	mov    %edi,%edi
  406a17:	55                   	push   %ebp
  406a18:	8b ec                	mov    %esp,%ebp
  406a1a:	83 ec 10             	sub    $0x10,%esp
  406a1d:	53                   	push   %ebx
  406a1e:	56                   	push   %esi
  406a1f:	8b 75 0c             	mov    0xc(%ebp),%esi
  406a22:	33 db                	xor    %ebx,%ebx
  406a24:	3b f3                	cmp    %ebx,%esi
  406a26:	74 15                	je     0x406a3d
  406a28:	39 5d 10             	cmp    %ebx,0x10(%ebp)
  406a2b:	74 10                	je     0x406a3d
  406a2d:	38 1e                	cmp    %bl,(%esi)
  406a2f:	75 12                	jne    0x406a43
  406a31:	8b 45 08             	mov    0x8(%ebp),%eax
  406a34:	3b c3                	cmp    %ebx,%eax
  406a36:	74 05                	je     0x406a3d
  406a38:	33 c9                	xor    %ecx,%ecx
  406a3a:	66 89 08             	mov    %cx,(%eax)
  406a3d:	33 c0                	xor    %eax,%eax
  406a3f:	5e                   	pop    %esi
  406a40:	5b                   	pop    %ebx
  406a41:	c9                   	leave  
  406a42:	c3                   	ret    
  406a43:	ff 75 14             	pushl  0x14(%ebp)
  406a46:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  406a49:	e8 73 ab ff ff       	call   0x4015c1
  406a4e:	8b 45 f0             	mov    -0x10(%ebp),%eax
  406a51:	39 58 14             	cmp    %ebx,0x14(%eax)
  406a54:	75 1f                	jne    0x406a75
  406a56:	8b 45 08             	mov    0x8(%ebp),%eax
  406a59:	3b c3                	cmp    %ebx,%eax
  406a5b:	74 07                	je     0x406a64
  406a5d:	66 0f b6 0e          	movzbw (%esi),%cx
  406a61:	66 89 08             	mov    %cx,(%eax)
  406a64:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  406a67:	74 07                	je     0x406a70
  406a69:	8b 45 f8             	mov    -0x8(%ebp),%eax
  406a6c:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  406a70:	33 c0                	xor    %eax,%eax
  406a72:	40                   	inc    %eax
  406a73:	eb ca                	jmp    0x406a3f
  406a75:	8d 45 f0             	lea    -0x10(%ebp),%eax
  406a78:	50                   	push   %eax
  406a79:	0f b6 06             	movzbl (%esi),%eax
  406a7c:	50                   	push   %eax
  406a7d:	e8 72 f4 ff ff       	call   0x405ef4
  406a82:	59                   	pop    %ecx
  406a83:	59                   	pop    %ecx
  406a84:	85 c0                	test   %eax,%eax
  406a86:	74 7d                	je     0x406b05
  406a88:	8b 45 f0             	mov    -0x10(%ebp),%eax
  406a8b:	8b 88 ac 00 00 00    	mov    0xac(%eax),%ecx
  406a91:	83 f9 01             	cmp    $0x1,%ecx
  406a94:	7e 25                	jle    0x406abb
  406a96:	39 4d 10             	cmp    %ecx,0x10(%ebp)
  406a99:	7c 20                	jl     0x406abb
  406a9b:	33 d2                	xor    %edx,%edx
  406a9d:	39 5d 08             	cmp    %ebx,0x8(%ebp)
  406aa0:	0f 95 c2             	setne  %dl
  406aa3:	52                   	push   %edx
  406aa4:	ff 75 08             	pushl  0x8(%ebp)
  406aa7:	51                   	push   %ecx
  406aa8:	56                   	push   %esi
  406aa9:	6a 09                	push   $0x9
  406aab:	ff 70 04             	pushl  0x4(%eax)
  406aae:	ff 15 b4 c0 40 00    	call   *0x40c0b4
  406ab4:	85 c0                	test   %eax,%eax
  406ab6:	8b 45 f0             	mov    -0x10(%ebp),%eax
  406ab9:	75 10                	jne    0x406acb
  406abb:	8b 4d 10             	mov    0x10(%ebp),%ecx
  406abe:	3b 88 ac 00 00 00    	cmp    0xac(%eax),%ecx
  406ac4:	72 20                	jb     0x406ae6
  406ac6:	38 5e 01             	cmp    %bl,0x1(%esi)
  406ac9:	74 1b                	je     0x406ae6
  406acb:	8b 80 ac 00 00 00    	mov    0xac(%eax),%eax
  406ad1:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  406ad4:	0f 84 65 ff ff ff    	je     0x406a3f
  406ada:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  406add:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  406ae1:	e9 59 ff ff ff       	jmp    0x406a3f
  406ae6:	e8 3a b9 ff ff       	call   0x402425
  406aeb:	c7 00 2a 00 00 00    	movl   $0x2a,(%eax)
  406af1:	38 5d fc             	cmp    %bl,-0x4(%ebp)
  406af4:	74 07                	je     0x406afd
  406af6:	8b 45 f8             	mov    -0x8(%ebp),%eax
  406af9:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  406afd:	83 c8 ff             	or     $0xffffffff,%eax
  406b00:	e9 3a ff ff ff       	jmp    0x406a3f
  406b05:	33 c0                	xor    %eax,%eax
  406b07:	39 5d 08             	cmp    %ebx,0x8(%ebp)
  406b0a:	0f 95 c0             	setne  %al
  406b0d:	50                   	push   %eax
  406b0e:	ff 75 08             	pushl  0x8(%ebp)
  406b11:	8b 45 f0             	mov    -0x10(%ebp),%eax
  406b14:	6a 01                	push   $0x1
  406b16:	56                   	push   %esi
  406b17:	6a 09                	push   $0x9
  406b19:	ff 70 04             	pushl  0x4(%eax)
  406b1c:	ff 15 b4 c0 40 00    	call   *0x40c0b4
  406b22:	85 c0                	test   %eax,%eax
  406b24:	0f 85 3a ff ff ff    	jne    0x406a64
  406b2a:	eb ba                	jmp    0x406ae6
  406b2c:	8b ff                	mov    %edi,%edi
  406b2e:	55                   	push   %ebp
  406b2f:	8b ec                	mov    %esp,%ebp
  406b31:	6a 00                	push   $0x0
  406b33:	ff 75 10             	pushl  0x10(%ebp)
  406b36:	ff 75 0c             	pushl  0xc(%ebp)
  406b39:	ff 75 08             	pushl  0x8(%ebp)
  406b3c:	e8 d4 fe ff ff       	call   0x406a15
  406b41:	83 c4 10             	add    $0x10,%esp
  406b44:	5d                   	pop    %ebp
  406b45:	c3                   	ret    
  406b46:	cc                   	int3   
  406b47:	cc                   	int3   
  406b48:	cc                   	int3   
  406b49:	cc                   	int3   
  406b4a:	cc                   	int3   
  406b4b:	cc                   	int3   
  406b4c:	cc                   	int3   
  406b4d:	cc                   	int3   
  406b4e:	cc                   	int3   
  406b4f:	cc                   	int3   
  406b50:	8b 44 24 08          	mov    0x8(%esp),%eax
  406b54:	8b 4c 24 10          	mov    0x10(%esp),%ecx
  406b58:	0b c8                	or     %eax,%ecx
  406b5a:	8b 4c 24 0c          	mov    0xc(%esp),%ecx
  406b5e:	75 09                	jne    0x406b69
  406b60:	8b 44 24 04          	mov    0x4(%esp),%eax
  406b64:	f7 e1                	mul    %ecx
  406b66:	c2 10 00             	ret    $0x10
  406b69:	53                   	push   %ebx
  406b6a:	f7 e1                	mul    %ecx
  406b6c:	8b d8                	mov    %eax,%ebx
  406b6e:	8b 44 24 08          	mov    0x8(%esp),%eax
  406b72:	f7 64 24 14          	mull   0x14(%esp)
  406b76:	03 d8                	add    %eax,%ebx
  406b78:	8b 44 24 08          	mov    0x8(%esp),%eax
  406b7c:	f7 e1                	mul    %ecx
  406b7e:	03 d3                	add    %ebx,%edx
  406b80:	5b                   	pop    %ebx
  406b81:	c2 10 00             	ret    $0x10
  406b84:	6a 08                	push   $0x8
  406b86:	68 d8 d5 40 00       	push   $0x40d5d8
  406b8b:	e8 e0 b8 ff ff       	call   0x402470
  406b90:	e8 ec db ff ff       	call   0x404781
  406b95:	8b 40 78             	mov    0x78(%eax),%eax
  406b98:	85 c0                	test   %eax,%eax
  406b9a:	74 16                	je     0x406bb2
  406b9c:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  406ba0:	ff d0                	call   *%eax
  406ba2:	eb 07                	jmp    0x406bab
  406ba4:	33 c0                	xor    %eax,%eax
  406ba6:	40                   	inc    %eax
  406ba7:	c3                   	ret    
  406ba8:	8b 65 e8             	mov    -0x18(%ebp),%esp
  406bab:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  406bb2:	e8 f7 3b 00 00       	call   0x40a7ae
  406bb7:	e8 f9 b8 ff ff       	call   0x4024b5
  406bbc:	c3                   	ret    
  406bbd:	68 84 6b 40 00       	push   $0x406b84
  406bc2:	e8 f3 d8 ff ff       	call   0x4044ba
  406bc7:	59                   	pop    %ecx
  406bc8:	a3 28 f6 40 00       	mov    %eax,0x40f628
  406bcd:	c3                   	ret    
  406bce:	8b ff                	mov    %edi,%edi
  406bd0:	55                   	push   %ebp
  406bd1:	8b ec                	mov    %esp,%ebp
  406bd3:	51                   	push   %ecx
  406bd4:	53                   	push   %ebx
  406bd5:	56                   	push   %esi
  406bd6:	57                   	push   %edi
  406bd7:	ff 35 a8 fb 40 00    	pushl  0x40fba8
  406bdd:	e8 53 d9 ff ff       	call   0x404535
  406be2:	ff 35 a4 fb 40 00    	pushl  0x40fba4
  406be8:	8b f8                	mov    %eax,%edi
  406bea:	89 7d fc             	mov    %edi,-0x4(%ebp)
  406bed:	e8 43 d9 ff ff       	call   0x404535
  406bf2:	8b f0                	mov    %eax,%esi
  406bf4:	59                   	pop    %ecx
  406bf5:	59                   	pop    %ecx
  406bf6:	3b f7                	cmp    %edi,%esi
  406bf8:	0f 82 83 00 00 00    	jb     0x406c81
  406bfe:	8b de                	mov    %esi,%ebx
  406c00:	2b df                	sub    %edi,%ebx
  406c02:	8d 43 04             	lea    0x4(%ebx),%eax
  406c05:	83 f8 04             	cmp    $0x4,%eax
  406c08:	72 77                	jb     0x406c81
  406c0a:	57                   	push   %edi
  406c0b:	e8 b5 3c 00 00       	call   0x40a8c5
  406c10:	8b f8                	mov    %eax,%edi
  406c12:	8d 43 04             	lea    0x4(%ebx),%eax
  406c15:	59                   	pop    %ecx
  406c16:	3b f8                	cmp    %eax,%edi
  406c18:	73 48                	jae    0x406c62
  406c1a:	b8 00 08 00 00       	mov    $0x800,%eax
  406c1f:	3b f8                	cmp    %eax,%edi
  406c21:	73 02                	jae    0x406c25
  406c23:	8b c7                	mov    %edi,%eax
  406c25:	03 c7                	add    %edi,%eax
  406c27:	3b c7                	cmp    %edi,%eax
  406c29:	72 0f                	jb     0x406c3a
  406c2b:	50                   	push   %eax
  406c2c:	ff 75 fc             	pushl  -0x4(%ebp)
  406c2f:	e8 7a df ff ff       	call   0x404bae
  406c34:	59                   	pop    %ecx
  406c35:	59                   	pop    %ecx
  406c36:	85 c0                	test   %eax,%eax
  406c38:	75 16                	jne    0x406c50
  406c3a:	8d 47 10             	lea    0x10(%edi),%eax
  406c3d:	3b c7                	cmp    %edi,%eax
  406c3f:	72 40                	jb     0x406c81
  406c41:	50                   	push   %eax
  406c42:	ff 75 fc             	pushl  -0x4(%ebp)
  406c45:	e8 64 df ff ff       	call   0x404bae
  406c4a:	59                   	pop    %ecx
  406c4b:	59                   	pop    %ecx
  406c4c:	85 c0                	test   %eax,%eax
  406c4e:	74 31                	je     0x406c81
  406c50:	c1 fb 02             	sar    $0x2,%ebx
  406c53:	50                   	push   %eax
  406c54:	8d 34 98             	lea    (%eax,%ebx,4),%esi
  406c57:	e8 5e d8 ff ff       	call   0x4044ba
  406c5c:	59                   	pop    %ecx
  406c5d:	a3 a8 fb 40 00       	mov    %eax,0x40fba8
  406c62:	ff 75 08             	pushl  0x8(%ebp)
  406c65:	e8 50 d8 ff ff       	call   0x4044ba
  406c6a:	89 06                	mov    %eax,(%esi)
  406c6c:	83 c6 04             	add    $0x4,%esi
  406c6f:	56                   	push   %esi
  406c70:	e8 45 d8 ff ff       	call   0x4044ba
  406c75:	59                   	pop    %ecx
  406c76:	a3 a4 fb 40 00       	mov    %eax,0x40fba4
  406c7b:	8b 45 08             	mov    0x8(%ebp),%eax
  406c7e:	59                   	pop    %ecx
  406c7f:	eb 02                	jmp    0x406c83
  406c81:	33 c0                	xor    %eax,%eax
  406c83:	5f                   	pop    %edi
  406c84:	5e                   	pop    %esi
  406c85:	5b                   	pop    %ebx
  406c86:	c9                   	leave  
  406c87:	c3                   	ret    
  406c88:	8b ff                	mov    %edi,%edi
  406c8a:	56                   	push   %esi
  406c8b:	6a 04                	push   $0x4
  406c8d:	6a 20                	push   $0x20
  406c8f:	e8 ce de ff ff       	call   0x404b62
  406c94:	8b f0                	mov    %eax,%esi
  406c96:	56                   	push   %esi
  406c97:	e8 1e d8 ff ff       	call   0x4044ba
  406c9c:	83 c4 0c             	add    $0xc,%esp
  406c9f:	a3 a8 fb 40 00       	mov    %eax,0x40fba8
  406ca4:	a3 a4 fb 40 00       	mov    %eax,0x40fba4
  406ca9:	85 f6                	test   %esi,%esi
  406cab:	75 05                	jne    0x406cb2
  406cad:	6a 18                	push   $0x18
  406caf:	58                   	pop    %eax
  406cb0:	5e                   	pop    %esi
  406cb1:	c3                   	ret    
  406cb2:	83 26 00             	andl   $0x0,(%esi)
  406cb5:	33 c0                	xor    %eax,%eax
  406cb7:	5e                   	pop    %esi
  406cb8:	c3                   	ret    
  406cb9:	6a 0c                	push   $0xc
  406cbb:	68 f8 d5 40 00       	push   $0x40d5f8
  406cc0:	e8 ab b7 ff ff       	call   0x402470
  406cc5:	e8 05 cb ff ff       	call   0x4037cf
  406cca:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  406cce:	ff 75 08             	pushl  0x8(%ebp)
  406cd1:	e8 f8 fe ff ff       	call   0x406bce
  406cd6:	59                   	pop    %ecx
  406cd7:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  406cda:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  406ce1:	e8 09 00 00 00       	call   0x406cef
  406ce6:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  406ce9:	e8 c7 b7 ff ff       	call   0x4024b5
  406cee:	c3                   	ret    
  406cef:	e8 e4 ca ff ff       	call   0x4037d8
  406cf4:	c3                   	ret    
  406cf5:	8b ff                	mov    %edi,%edi
  406cf7:	55                   	push   %ebp
  406cf8:	8b ec                	mov    %esp,%ebp
  406cfa:	ff 75 08             	pushl  0x8(%ebp)
  406cfd:	e8 b7 ff ff ff       	call   0x406cb9
  406d02:	f7 d8                	neg    %eax
  406d04:	1b c0                	sbb    %eax,%eax
  406d06:	f7 d8                	neg    %eax
  406d08:	59                   	pop    %ecx
  406d09:	48                   	dec    %eax
  406d0a:	5d                   	pop    %ebp
  406d0b:	c3                   	ret    
  406d0c:	8b ff                	mov    %edi,%edi
  406d0e:	55                   	push   %ebp
  406d0f:	8b ec                	mov    %esp,%ebp
  406d11:	8b 45 08             	mov    0x8(%ebp),%eax
  406d14:	a3 2c f6 40 00       	mov    %eax,0x40f62c
  406d19:	a3 30 f6 40 00       	mov    %eax,0x40f630
  406d1e:	a3 34 f6 40 00       	mov    %eax,0x40f634
  406d23:	a3 38 f6 40 00       	mov    %eax,0x40f638
  406d28:	5d                   	pop    %ebp
  406d29:	c3                   	ret    
  406d2a:	8b ff                	mov    %edi,%edi
  406d2c:	55                   	push   %ebp
  406d2d:	8b ec                	mov    %esp,%ebp
  406d2f:	8b 45 08             	mov    0x8(%ebp),%eax
  406d32:	8b 0d d4 e4 40 00    	mov    0x40e4d4,%ecx
  406d38:	56                   	push   %esi
  406d39:	39 50 04             	cmp    %edx,0x4(%eax)
  406d3c:	74 0f                	je     0x406d4d
  406d3e:	8b f1                	mov    %ecx,%esi
  406d40:	6b f6 0c             	imul   $0xc,%esi,%esi
  406d43:	03 75 08             	add    0x8(%ebp),%esi
  406d46:	83 c0 0c             	add    $0xc,%eax
  406d49:	3b c6                	cmp    %esi,%eax
  406d4b:	72 ec                	jb     0x406d39
  406d4d:	6b c9 0c             	imul   $0xc,%ecx,%ecx
  406d50:	03 4d 08             	add    0x8(%ebp),%ecx
  406d53:	5e                   	pop    %esi
  406d54:	3b c1                	cmp    %ecx,%eax
  406d56:	73 05                	jae    0x406d5d
  406d58:	39 50 04             	cmp    %edx,0x4(%eax)
  406d5b:	74 02                	je     0x406d5f
  406d5d:	33 c0                	xor    %eax,%eax
  406d5f:	5d                   	pop    %ebp
  406d60:	c3                   	ret    
  406d61:	ff 35 34 f6 40 00    	pushl  0x40f634
  406d67:	e8 c9 d7 ff ff       	call   0x404535
  406d6c:	59                   	pop    %ecx
  406d6d:	c3                   	ret    
  406d6e:	6a 20                	push   $0x20
  406d70:	68 18 d6 40 00       	push   $0x40d618
  406d75:	e8 f6 b6 ff ff       	call   0x402470
  406d7a:	33 ff                	xor    %edi,%edi
  406d7c:	89 7d e4             	mov    %edi,-0x1c(%ebp)
  406d7f:	89 7d d8             	mov    %edi,-0x28(%ebp)
  406d82:	8b 5d 08             	mov    0x8(%ebp),%ebx
  406d85:	83 fb 0b             	cmp    $0xb,%ebx
  406d88:	7f 4c                	jg     0x406dd6
  406d8a:	74 15                	je     0x406da1
  406d8c:	8b c3                	mov    %ebx,%eax
  406d8e:	6a 02                	push   $0x2
  406d90:	59                   	pop    %ecx
  406d91:	2b c1                	sub    %ecx,%eax
  406d93:	74 22                	je     0x406db7
  406d95:	2b c1                	sub    %ecx,%eax
  406d97:	74 08                	je     0x406da1
  406d99:	2b c1                	sub    %ecx,%eax
  406d9b:	74 64                	je     0x406e01
  406d9d:	2b c1                	sub    %ecx,%eax
  406d9f:	75 44                	jne    0x406de5
  406da1:	e8 62 d9 ff ff       	call   0x404708
  406da6:	8b f8                	mov    %eax,%edi
  406da8:	89 7d d8             	mov    %edi,-0x28(%ebp)
  406dab:	85 ff                	test   %edi,%edi
  406dad:	75 14                	jne    0x406dc3
  406daf:	83 c8 ff             	or     $0xffffffff,%eax
  406db2:	e9 61 01 00 00       	jmp    0x406f18
  406db7:	be 2c f6 40 00       	mov    $0x40f62c,%esi
  406dbc:	a1 2c f6 40 00       	mov    0x40f62c,%eax
  406dc1:	eb 60                	jmp    0x406e23
  406dc3:	ff 77 5c             	pushl  0x5c(%edi)
  406dc6:	8b d3                	mov    %ebx,%edx
  406dc8:	e8 5d ff ff ff       	call   0x406d2a
  406dcd:	8b f0                	mov    %eax,%esi
  406dcf:	83 c6 08             	add    $0x8,%esi
  406dd2:	8b 06                	mov    (%esi),%eax
  406dd4:	eb 5a                	jmp    0x406e30
  406dd6:	8b c3                	mov    %ebx,%eax
  406dd8:	83 e8 0f             	sub    $0xf,%eax
  406ddb:	74 3c                	je     0x406e19
  406ddd:	83 e8 06             	sub    $0x6,%eax
  406de0:	74 2b                	je     0x406e0d
  406de2:	48                   	dec    %eax
  406de3:	74 1c                	je     0x406e01
  406de5:	e8 3b b6 ff ff       	call   0x402425
  406dea:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  406df0:	33 c0                	xor    %eax,%eax
  406df2:	50                   	push   %eax
  406df3:	50                   	push   %eax
  406df4:	50                   	push   %eax
  406df5:	50                   	push   %eax
  406df6:	50                   	push   %eax
  406df7:	e8 c1 b5 ff ff       	call   0x4023bd
  406dfc:	83 c4 14             	add    $0x14,%esp
  406dff:	eb ae                	jmp    0x406daf
  406e01:	be 34 f6 40 00       	mov    $0x40f634,%esi
  406e06:	a1 34 f6 40 00       	mov    0x40f634,%eax
  406e0b:	eb 16                	jmp    0x406e23
  406e0d:	be 30 f6 40 00       	mov    $0x40f630,%esi
  406e12:	a1 30 f6 40 00       	mov    0x40f630,%eax
  406e17:	eb 0a                	jmp    0x406e23
  406e19:	be 38 f6 40 00       	mov    $0x40f638,%esi
  406e1e:	a1 38 f6 40 00       	mov    0x40f638,%eax
  406e23:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
  406e2a:	50                   	push   %eax
  406e2b:	e8 05 d7 ff ff       	call   0x404535
  406e30:	89 45 e0             	mov    %eax,-0x20(%ebp)
  406e33:	59                   	pop    %ecx
  406e34:	33 c0                	xor    %eax,%eax
  406e36:	83 7d e0 01          	cmpl   $0x1,-0x20(%ebp)
  406e3a:	0f 84 d8 00 00 00    	je     0x406f18
  406e40:	39 45 e0             	cmp    %eax,-0x20(%ebp)
  406e43:	75 07                	jne    0x406e4c
  406e45:	6a 03                	push   $0x3
  406e47:	e8 9d cb ff ff       	call   0x4039e9
  406e4c:	39 45 e4             	cmp    %eax,-0x1c(%ebp)
  406e4f:	74 07                	je     0x406e58
  406e51:	50                   	push   %eax
  406e52:	e8 33 e2 ff ff       	call   0x40508a
  406e57:	59                   	pop    %ecx
  406e58:	33 c0                	xor    %eax,%eax
  406e5a:	89 45 fc             	mov    %eax,-0x4(%ebp)
  406e5d:	83 fb 08             	cmp    $0x8,%ebx
  406e60:	74 0a                	je     0x406e6c
  406e62:	83 fb 0b             	cmp    $0xb,%ebx
  406e65:	74 05                	je     0x406e6c
  406e67:	83 fb 04             	cmp    $0x4,%ebx
  406e6a:	75 1b                	jne    0x406e87
  406e6c:	8b 4f 60             	mov    0x60(%edi),%ecx
  406e6f:	89 4d d4             	mov    %ecx,-0x2c(%ebp)
  406e72:	89 47 60             	mov    %eax,0x60(%edi)
  406e75:	83 fb 08             	cmp    $0x8,%ebx
  406e78:	75 40                	jne    0x406eba
  406e7a:	8b 4f 64             	mov    0x64(%edi),%ecx
  406e7d:	89 4d d0             	mov    %ecx,-0x30(%ebp)
  406e80:	c7 47 64 8c 00 00 00 	movl   $0x8c,0x64(%edi)
  406e87:	83 fb 08             	cmp    $0x8,%ebx
  406e8a:	75 2e                	jne    0x406eba
  406e8c:	8b 0d c8 e4 40 00    	mov    0x40e4c8,%ecx
  406e92:	89 4d dc             	mov    %ecx,-0x24(%ebp)
  406e95:	8b 0d cc e4 40 00    	mov    0x40e4cc,%ecx
  406e9b:	8b 15 c8 e4 40 00    	mov    0x40e4c8,%edx
  406ea1:	03 ca                	add    %edx,%ecx
  406ea3:	39 4d dc             	cmp    %ecx,-0x24(%ebp)
  406ea6:	7d 19                	jge    0x406ec1
  406ea8:	8b 4d dc             	mov    -0x24(%ebp),%ecx
  406eab:	6b c9 0c             	imul   $0xc,%ecx,%ecx
  406eae:	8b 57 5c             	mov    0x5c(%edi),%edx
  406eb1:	89 44 11 08          	mov    %eax,0x8(%ecx,%edx,1)
  406eb5:	ff 45 dc             	incl   -0x24(%ebp)
  406eb8:	eb db                	jmp    0x406e95
  406eba:	e8 6d d6 ff ff       	call   0x40452c
  406ebf:	89 06                	mov    %eax,(%esi)
  406ec1:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  406ec8:	e8 15 00 00 00       	call   0x406ee2
  406ecd:	83 fb 08             	cmp    $0x8,%ebx
  406ed0:	75 1f                	jne    0x406ef1
  406ed2:	ff 77 64             	pushl  0x64(%edi)
  406ed5:	53                   	push   %ebx
  406ed6:	ff 55 e0             	call   *-0x20(%ebp)
  406ed9:	59                   	pop    %ecx
  406eda:	eb 19                	jmp    0x406ef5
  406edc:	8b 5d 08             	mov    0x8(%ebp),%ebx
  406edf:	8b 7d d8             	mov    -0x28(%ebp),%edi
  406ee2:	83 7d e4 00          	cmpl   $0x0,-0x1c(%ebp)
  406ee6:	74 08                	je     0x406ef0
  406ee8:	6a 00                	push   $0x0
  406eea:	e8 c1 e0 ff ff       	call   0x404fb0
  406eef:	59                   	pop    %ecx
  406ef0:	c3                   	ret    
  406ef1:	53                   	push   %ebx
  406ef2:	ff 55 e0             	call   *-0x20(%ebp)
  406ef5:	59                   	pop    %ecx
  406ef6:	83 fb 08             	cmp    $0x8,%ebx
  406ef9:	74 0a                	je     0x406f05
  406efb:	83 fb 0b             	cmp    $0xb,%ebx
  406efe:	74 05                	je     0x406f05
  406f00:	83 fb 04             	cmp    $0x4,%ebx
  406f03:	75 11                	jne    0x406f16
  406f05:	8b 45 d4             	mov    -0x2c(%ebp),%eax
  406f08:	89 47 60             	mov    %eax,0x60(%edi)
  406f0b:	83 fb 08             	cmp    $0x8,%ebx
  406f0e:	75 06                	jne    0x406f16
  406f10:	8b 45 d0             	mov    -0x30(%ebp),%eax
  406f13:	89 47 64             	mov    %eax,0x64(%edi)
  406f16:	33 c0                	xor    %eax,%eax
  406f18:	e8 98 b5 ff ff       	call   0x4024b5
  406f1d:	c3                   	ret    
  406f1e:	8b ff                	mov    %edi,%edi
  406f20:	55                   	push   %ebp
  406f21:	8b ec                	mov    %esp,%ebp
  406f23:	8b 45 08             	mov    0x8(%ebp),%eax
  406f26:	a3 40 f6 40 00       	mov    %eax,0x40f640
  406f2b:	5d                   	pop    %ebp
  406f2c:	c3                   	ret    
  406f2d:	8b ff                	mov    %edi,%edi
  406f2f:	55                   	push   %ebp
  406f30:	8b ec                	mov    %esp,%ebp
  406f32:	8b 45 08             	mov    0x8(%ebp),%eax
  406f35:	a3 4c f6 40 00       	mov    %eax,0x40f64c
  406f3a:	5d                   	pop    %ebp
  406f3b:	c3                   	ret    
  406f3c:	8b ff                	mov    %edi,%edi
  406f3e:	55                   	push   %ebp
  406f3f:	8b ec                	mov    %esp,%ebp
  406f41:	8b 45 08             	mov    0x8(%ebp),%eax
  406f44:	a3 50 f6 40 00       	mov    %eax,0x40f650
  406f49:	5d                   	pop    %ebp
  406f4a:	c3                   	ret    
  406f4b:	6a 10                	push   $0x10
  406f4d:	68 38 d6 40 00       	push   $0x40d638
  406f52:	e8 19 b5 ff ff       	call   0x402470
  406f57:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  406f5b:	ff 75 0c             	pushl  0xc(%ebp)
  406f5e:	ff 75 08             	pushl  0x8(%ebp)
  406f61:	ff 15 bc c0 40 00    	call   *0x40c0bc
  406f67:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  406f6a:	eb 2f                	jmp    0x406f9b
  406f6c:	8b 45 ec             	mov    -0x14(%ebp),%eax
  406f6f:	8b 00                	mov    (%eax),%eax
  406f71:	8b 00                	mov    (%eax),%eax
  406f73:	89 45 e0             	mov    %eax,-0x20(%ebp)
  406f76:	33 c9                	xor    %ecx,%ecx
  406f78:	3d 17 00 00 c0       	cmp    $0xc0000017,%eax
  406f7d:	0f 94 c1             	sete   %cl
  406f80:	8b c1                	mov    %ecx,%eax
  406f82:	c3                   	ret    
  406f83:	8b 65 e8             	mov    -0x18(%ebp),%esp
  406f86:	81 7d e0 17 00 00 c0 	cmpl   $0xc0000017,-0x20(%ebp)
  406f8d:	75 08                	jne    0x406f97
  406f8f:	6a 08                	push   $0x8
  406f91:	ff 15 78 c0 40 00    	call   *0x40c078
  406f97:	83 65 e4 00          	andl   $0x0,-0x1c(%ebp)
  406f9b:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  406fa2:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  406fa5:	e8 0b b5 ff ff       	call   0x4024b5
  406faa:	c3                   	ret    
  406fab:	8b ff                	mov    %edi,%edi
  406fad:	55                   	push   %ebp
  406fae:	8b ec                	mov    %esp,%ebp
  406fb0:	8b 45 08             	mov    0x8(%ebp),%eax
  406fb3:	a3 54 f6 40 00       	mov    %eax,0x40f654
  406fb8:	5d                   	pop    %ebp
  406fb9:	c3                   	ret    
  406fba:	8b ff                	mov    %edi,%edi
  406fbc:	55                   	push   %ebp
  406fbd:	8b ec                	mov    %esp,%ebp
  406fbf:	ff 35 54 f6 40 00    	pushl  0x40f654
  406fc5:	e8 6b d5 ff ff       	call   0x404535
  406fca:	59                   	pop    %ecx
  406fcb:	85 c0                	test   %eax,%eax
  406fcd:	74 0f                	je     0x406fde
  406fcf:	ff 75 08             	pushl  0x8(%ebp)
  406fd2:	ff d0                	call   *%eax
  406fd4:	59                   	pop    %ecx
  406fd5:	85 c0                	test   %eax,%eax
  406fd7:	74 05                	je     0x406fde
  406fd9:	33 c0                	xor    %eax,%eax
  406fdb:	40                   	inc    %eax
  406fdc:	5d                   	pop    %ebp
  406fdd:	c3                   	ret    
  406fde:	33 c0                	xor    %eax,%eax
  406fe0:	5d                   	pop    %ebp
  406fe1:	c3                   	ret    
  406fe2:	8b ff                	mov    %edi,%edi
  406fe4:	55                   	push   %ebp
  406fe5:	8b ec                	mov    %esp,%ebp
  406fe7:	83 ec 14             	sub    $0x14,%esp
  406fea:	53                   	push   %ebx
  406feb:	56                   	push   %esi
  406fec:	57                   	push   %edi
  406fed:	e8 3a d5 ff ff       	call   0x40452c
  406ff2:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  406ff6:	83 3d 58 f6 40 00 00 	cmpl   $0x0,0x40f658
  406ffd:	8b d8                	mov    %eax,%ebx
  406fff:	0f 85 8e 00 00 00    	jne    0x407093
  407005:	68 e0 c9 40 00       	push   $0x40c9e0
  40700a:	ff 15 b8 c0 40 00    	call   *0x40c0b8
  407010:	8b f8                	mov    %eax,%edi
  407012:	85 ff                	test   %edi,%edi
  407014:	0f 84 2a 01 00 00    	je     0x407144
  40701a:	8b 35 28 c0 40 00    	mov    0x40c028,%esi
  407020:	68 d4 c9 40 00       	push   $0x40c9d4
  407025:	57                   	push   %edi
  407026:	ff d6                	call   *%esi
  407028:	85 c0                	test   %eax,%eax
  40702a:	0f 84 14 01 00 00    	je     0x407144
  407030:	50                   	push   %eax
  407031:	e8 84 d4 ff ff       	call   0x4044ba
  407036:	c7 04 24 c4 c9 40 00 	movl   $0x40c9c4,(%esp)
  40703d:	57                   	push   %edi
  40703e:	a3 58 f6 40 00       	mov    %eax,0x40f658
  407043:	ff d6                	call   *%esi
  407045:	50                   	push   %eax
  407046:	e8 6f d4 ff ff       	call   0x4044ba
  40704b:	c7 04 24 b0 c9 40 00 	movl   $0x40c9b0,(%esp)
  407052:	57                   	push   %edi
  407053:	a3 5c f6 40 00       	mov    %eax,0x40f65c
  407058:	ff d6                	call   *%esi
  40705a:	50                   	push   %eax
  40705b:	e8 5a d4 ff ff       	call   0x4044ba
  407060:	c7 04 24 94 c9 40 00 	movl   $0x40c994,(%esp)
  407067:	57                   	push   %edi
  407068:	a3 60 f6 40 00       	mov    %eax,0x40f660
  40706d:	ff d6                	call   *%esi
  40706f:	50                   	push   %eax
  407070:	e8 45 d4 ff ff       	call   0x4044ba
  407075:	59                   	pop    %ecx
  407076:	a3 68 f6 40 00       	mov    %eax,0x40f668
  40707b:	85 c0                	test   %eax,%eax
  40707d:	74 14                	je     0x407093
  40707f:	68 7c c9 40 00       	push   $0x40c97c
  407084:	57                   	push   %edi
  407085:	ff d6                	call   *%esi
  407087:	50                   	push   %eax
  407088:	e8 2d d4 ff ff       	call   0x4044ba
  40708d:	59                   	pop    %ecx
  40708e:	a3 64 f6 40 00       	mov    %eax,0x40f664
  407093:	a1 64 f6 40 00       	mov    0x40f664,%eax
  407098:	3b c3                	cmp    %ebx,%eax
  40709a:	74 4f                	je     0x4070eb
  40709c:	39 1d 68 f6 40 00    	cmp    %ebx,0x40f668
  4070a2:	74 47                	je     0x4070eb
  4070a4:	50                   	push   %eax
  4070a5:	e8 8b d4 ff ff       	call   0x404535
  4070aa:	ff 35 68 f6 40 00    	pushl  0x40f668
  4070b0:	8b f0                	mov    %eax,%esi
  4070b2:	e8 7e d4 ff ff       	call   0x404535
  4070b7:	59                   	pop    %ecx
  4070b8:	59                   	pop    %ecx
  4070b9:	8b f8                	mov    %eax,%edi
  4070bb:	85 f6                	test   %esi,%esi
  4070bd:	74 2c                	je     0x4070eb
  4070bf:	85 ff                	test   %edi,%edi
  4070c1:	74 28                	je     0x4070eb
  4070c3:	ff d6                	call   *%esi
  4070c5:	85 c0                	test   %eax,%eax
  4070c7:	74 19                	je     0x4070e2
  4070c9:	8d 4d f8             	lea    -0x8(%ebp),%ecx
  4070cc:	51                   	push   %ecx
  4070cd:	6a 0c                	push   $0xc
  4070cf:	8d 4d ec             	lea    -0x14(%ebp),%ecx
  4070d2:	51                   	push   %ecx
  4070d3:	6a 01                	push   $0x1
  4070d5:	50                   	push   %eax
  4070d6:	ff d7                	call   *%edi
  4070d8:	85 c0                	test   %eax,%eax
  4070da:	74 06                	je     0x4070e2
  4070dc:	f6 45 f4 01          	testb  $0x1,-0xc(%ebp)
  4070e0:	75 09                	jne    0x4070eb
  4070e2:	81 4d 10 00 00 20 00 	orl    $0x200000,0x10(%ebp)
  4070e9:	eb 39                	jmp    0x407124
  4070eb:	a1 5c f6 40 00       	mov    0x40f65c,%eax
  4070f0:	3b c3                	cmp    %ebx,%eax
  4070f2:	74 30                	je     0x407124
  4070f4:	50                   	push   %eax
  4070f5:	e8 3b d4 ff ff       	call   0x404535
  4070fa:	59                   	pop    %ecx
  4070fb:	85 c0                	test   %eax,%eax
  4070fd:	74 25                	je     0x407124
  4070ff:	ff d0                	call   *%eax
  407101:	89 45 fc             	mov    %eax,-0x4(%ebp)
  407104:	85 c0                	test   %eax,%eax
  407106:	74 1c                	je     0x407124
  407108:	a1 60 f6 40 00       	mov    0x40f660,%eax
  40710d:	3b c3                	cmp    %ebx,%eax
  40710f:	74 13                	je     0x407124
  407111:	50                   	push   %eax
  407112:	e8 1e d4 ff ff       	call   0x404535
  407117:	59                   	pop    %ecx
  407118:	85 c0                	test   %eax,%eax
  40711a:	74 08                	je     0x407124
  40711c:	ff 75 fc             	pushl  -0x4(%ebp)
  40711f:	ff d0                	call   *%eax
  407121:	89 45 fc             	mov    %eax,-0x4(%ebp)
  407124:	ff 35 58 f6 40 00    	pushl  0x40f658
  40712a:	e8 06 d4 ff ff       	call   0x404535
  40712f:	59                   	pop    %ecx
  407130:	85 c0                	test   %eax,%eax
  407132:	74 10                	je     0x407144
  407134:	ff 75 10             	pushl  0x10(%ebp)
  407137:	ff 75 0c             	pushl  0xc(%ebp)
  40713a:	ff 75 08             	pushl  0x8(%ebp)
  40713d:	ff 75 fc             	pushl  -0x4(%ebp)
  407140:	ff d0                	call   *%eax
  407142:	eb 02                	jmp    0x407146
  407144:	33 c0                	xor    %eax,%eax
  407146:	5f                   	pop    %edi
  407147:	5e                   	pop    %esi
  407148:	5b                   	pop    %ebx
  407149:	c9                   	leave  
  40714a:	c3                   	ret    
  40714b:	8b ff                	mov    %edi,%edi
  40714d:	55                   	push   %ebp
  40714e:	8b ec                	mov    %esp,%ebp
  407150:	8b 45 08             	mov    0x8(%ebp),%eax
  407153:	53                   	push   %ebx
  407154:	33 db                	xor    %ebx,%ebx
  407156:	56                   	push   %esi
  407157:	57                   	push   %edi
  407158:	3b c3                	cmp    %ebx,%eax
  40715a:	74 07                	je     0x407163
  40715c:	8b 7d 0c             	mov    0xc(%ebp),%edi
  40715f:	3b fb                	cmp    %ebx,%edi
  407161:	77 1b                	ja     0x40717e
  407163:	e8 bd b2 ff ff       	call   0x402425
  407168:	6a 16                	push   $0x16
  40716a:	5e                   	pop    %esi
  40716b:	89 30                	mov    %esi,(%eax)
  40716d:	53                   	push   %ebx
  40716e:	53                   	push   %ebx
  40716f:	53                   	push   %ebx
  407170:	53                   	push   %ebx
  407171:	53                   	push   %ebx
  407172:	e8 46 b2 ff ff       	call   0x4023bd
  407177:	83 c4 14             	add    $0x14,%esp
  40717a:	8b c6                	mov    %esi,%eax
  40717c:	eb 3c                	jmp    0x4071ba
  40717e:	8b 75 10             	mov    0x10(%ebp),%esi
  407181:	3b f3                	cmp    %ebx,%esi
  407183:	75 04                	jne    0x407189
  407185:	88 18                	mov    %bl,(%eax)
  407187:	eb da                	jmp    0x407163
  407189:	8b d0                	mov    %eax,%edx
  40718b:	38 1a                	cmp    %bl,(%edx)
  40718d:	74 04                	je     0x407193
  40718f:	42                   	inc    %edx
  407190:	4f                   	dec    %edi
  407191:	75 f8                	jne    0x40718b
  407193:	3b fb                	cmp    %ebx,%edi
  407195:	74 ee                	je     0x407185
  407197:	8a 0e                	mov    (%esi),%cl
  407199:	88 0a                	mov    %cl,(%edx)
  40719b:	42                   	inc    %edx
  40719c:	46                   	inc    %esi
  40719d:	3a cb                	cmp    %bl,%cl
  40719f:	74 03                	je     0x4071a4
  4071a1:	4f                   	dec    %edi
  4071a2:	75 f3                	jne    0x407197
  4071a4:	3b fb                	cmp    %ebx,%edi
  4071a6:	75 10                	jne    0x4071b8
  4071a8:	88 18                	mov    %bl,(%eax)
  4071aa:	e8 76 b2 ff ff       	call   0x402425
  4071af:	6a 22                	push   $0x22
  4071b1:	59                   	pop    %ecx
  4071b2:	89 08                	mov    %ecx,(%eax)
  4071b4:	8b f1                	mov    %ecx,%esi
  4071b6:	eb b5                	jmp    0x40716d
  4071b8:	33 c0                	xor    %eax,%eax
  4071ba:	5f                   	pop    %edi
  4071bb:	5e                   	pop    %esi
  4071bc:	5b                   	pop    %ebx
  4071bd:	5d                   	pop    %ebp
  4071be:	c3                   	ret    
  4071bf:	8b ff                	mov    %edi,%edi
  4071c1:	55                   	push   %ebp
  4071c2:	8b ec                	mov    %esp,%ebp
  4071c4:	53                   	push   %ebx
  4071c5:	56                   	push   %esi
  4071c6:	8b 75 08             	mov    0x8(%ebp),%esi
  4071c9:	33 db                	xor    %ebx,%ebx
  4071cb:	57                   	push   %edi
  4071cc:	39 5d 14             	cmp    %ebx,0x14(%ebp)
  4071cf:	75 10                	jne    0x4071e1
  4071d1:	3b f3                	cmp    %ebx,%esi
  4071d3:	75 10                	jne    0x4071e5
  4071d5:	39 5d 0c             	cmp    %ebx,0xc(%ebp)
  4071d8:	75 12                	jne    0x4071ec
  4071da:	33 c0                	xor    %eax,%eax
  4071dc:	5f                   	pop    %edi
  4071dd:	5e                   	pop    %esi
  4071de:	5b                   	pop    %ebx
  4071df:	5d                   	pop    %ebp
  4071e0:	c3                   	ret    
  4071e1:	3b f3                	cmp    %ebx,%esi
  4071e3:	74 07                	je     0x4071ec
  4071e5:	8b 7d 0c             	mov    0xc(%ebp),%edi
  4071e8:	3b fb                	cmp    %ebx,%edi
  4071ea:	77 1b                	ja     0x407207
  4071ec:	e8 34 b2 ff ff       	call   0x402425
  4071f1:	6a 16                	push   $0x16
  4071f3:	5e                   	pop    %esi
  4071f4:	89 30                	mov    %esi,(%eax)
  4071f6:	53                   	push   %ebx
  4071f7:	53                   	push   %ebx
  4071f8:	53                   	push   %ebx
  4071f9:	53                   	push   %ebx
  4071fa:	53                   	push   %ebx
  4071fb:	e8 bd b1 ff ff       	call   0x4023bd
  407200:	83 c4 14             	add    $0x14,%esp
  407203:	8b c6                	mov    %esi,%eax
  407205:	eb d5                	jmp    0x4071dc
  407207:	39 5d 14             	cmp    %ebx,0x14(%ebp)
  40720a:	75 04                	jne    0x407210
  40720c:	88 1e                	mov    %bl,(%esi)
  40720e:	eb ca                	jmp    0x4071da
  407210:	8b 55 10             	mov    0x10(%ebp),%edx
  407213:	3b d3                	cmp    %ebx,%edx
  407215:	75 04                	jne    0x40721b
  407217:	88 1e                	mov    %bl,(%esi)
  407219:	eb d1                	jmp    0x4071ec
  40721b:	83 7d 14 ff          	cmpl   $0xffffffff,0x14(%ebp)
  40721f:	8b c6                	mov    %esi,%eax
  407221:	75 0f                	jne    0x407232
  407223:	8a 0a                	mov    (%edx),%cl
  407225:	88 08                	mov    %cl,(%eax)
  407227:	40                   	inc    %eax
  407228:	42                   	inc    %edx
  407229:	3a cb                	cmp    %bl,%cl
  40722b:	74 1e                	je     0x40724b
  40722d:	4f                   	dec    %edi
  40722e:	75 f3                	jne    0x407223
  407230:	eb 19                	jmp    0x40724b
  407232:	8a 0a                	mov    (%edx),%cl
  407234:	88 08                	mov    %cl,(%eax)
  407236:	40                   	inc    %eax
  407237:	42                   	inc    %edx
  407238:	3a cb                	cmp    %bl,%cl
  40723a:	74 08                	je     0x407244
  40723c:	4f                   	dec    %edi
  40723d:	74 05                	je     0x407244
  40723f:	ff 4d 14             	decl   0x14(%ebp)
  407242:	75 ee                	jne    0x407232
  407244:	39 5d 14             	cmp    %ebx,0x14(%ebp)
  407247:	75 02                	jne    0x40724b
  407249:	88 18                	mov    %bl,(%eax)
  40724b:	3b fb                	cmp    %ebx,%edi
  40724d:	75 8b                	jne    0x4071da
  40724f:	83 7d 14 ff          	cmpl   $0xffffffff,0x14(%ebp)
  407253:	75 0f                	jne    0x407264
  407255:	8b 45 0c             	mov    0xc(%ebp),%eax
  407258:	6a 50                	push   $0x50
  40725a:	88 5c 06 ff          	mov    %bl,-0x1(%esi,%eax,1)
  40725e:	58                   	pop    %eax
  40725f:	e9 78 ff ff ff       	jmp    0x4071dc
  407264:	88 1e                	mov    %bl,(%esi)
  407266:	e8 ba b1 ff ff       	call   0x402425
  40726b:	6a 22                	push   $0x22
  40726d:	59                   	pop    %ecx
  40726e:	89 08                	mov    %ecx,(%eax)
  407270:	8b f1                	mov    %ecx,%esi
  407272:	eb 82                	jmp    0x4071f6
  407274:	8b ff                	mov    %edi,%edi
  407276:	55                   	push   %ebp
  407277:	8b ec                	mov    %esp,%ebp
  407279:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40727c:	53                   	push   %ebx
  40727d:	33 db                	xor    %ebx,%ebx
  40727f:	56                   	push   %esi
  407280:	57                   	push   %edi
  407281:	3b cb                	cmp    %ebx,%ecx
  407283:	74 07                	je     0x40728c
  407285:	8b 7d 0c             	mov    0xc(%ebp),%edi
  407288:	3b fb                	cmp    %ebx,%edi
  40728a:	77 1b                	ja     0x4072a7
  40728c:	e8 94 b1 ff ff       	call   0x402425
  407291:	6a 16                	push   $0x16
  407293:	5e                   	pop    %esi
  407294:	89 30                	mov    %esi,(%eax)
  407296:	53                   	push   %ebx
  407297:	53                   	push   %ebx
  407298:	53                   	push   %ebx
  407299:	53                   	push   %ebx
  40729a:	53                   	push   %ebx
  40729b:	e8 1d b1 ff ff       	call   0x4023bd
  4072a0:	83 c4 14             	add    $0x14,%esp
  4072a3:	8b c6                	mov    %esi,%eax
  4072a5:	eb 30                	jmp    0x4072d7
  4072a7:	8b 75 10             	mov    0x10(%ebp),%esi
  4072aa:	3b f3                	cmp    %ebx,%esi
  4072ac:	75 04                	jne    0x4072b2
  4072ae:	88 19                	mov    %bl,(%ecx)
  4072b0:	eb da                	jmp    0x40728c
  4072b2:	8b d1                	mov    %ecx,%edx
  4072b4:	8a 06                	mov    (%esi),%al
  4072b6:	88 02                	mov    %al,(%edx)
  4072b8:	42                   	inc    %edx
  4072b9:	46                   	inc    %esi
  4072ba:	3a c3                	cmp    %bl,%al
  4072bc:	74 03                	je     0x4072c1
  4072be:	4f                   	dec    %edi
  4072bf:	75 f3                	jne    0x4072b4
  4072c1:	3b fb                	cmp    %ebx,%edi
  4072c3:	75 10                	jne    0x4072d5
  4072c5:	88 19                	mov    %bl,(%ecx)
  4072c7:	e8 59 b1 ff ff       	call   0x402425
  4072cc:	6a 22                	push   $0x22
  4072ce:	59                   	pop    %ecx
  4072cf:	89 08                	mov    %ecx,(%eax)
  4072d1:	8b f1                	mov    %ecx,%esi
  4072d3:	eb c1                	jmp    0x407296
  4072d5:	33 c0                	xor    %eax,%eax
  4072d7:	5f                   	pop    %edi
  4072d8:	5e                   	pop    %esi
  4072d9:	5b                   	pop    %ebx
  4072da:	5d                   	pop    %ebp
  4072db:	c3                   	ret    
  4072dc:	8b ff                	mov    %edi,%edi
  4072de:	55                   	push   %ebp
  4072df:	8b ec                	mov    %esp,%ebp
  4072e1:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4072e4:	56                   	push   %esi
  4072e5:	33 f6                	xor    %esi,%esi
  4072e7:	3b ce                	cmp    %esi,%ecx
  4072e9:	7c 1e                	jl     0x407309
  4072eb:	83 f9 02             	cmp    $0x2,%ecx
  4072ee:	7e 0c                	jle    0x4072fc
  4072f0:	83 f9 03             	cmp    $0x3,%ecx
  4072f3:	75 14                	jne    0x407309
  4072f5:	a1 0c f0 40 00       	mov    0x40f00c,%eax
  4072fa:	eb 28                	jmp    0x407324
  4072fc:	a1 0c f0 40 00       	mov    0x40f00c,%eax
  407301:	89 0d 0c f0 40 00    	mov    %ecx,0x40f00c
  407307:	eb 1b                	jmp    0x407324
  407309:	e8 17 b1 ff ff       	call   0x402425
  40730e:	56                   	push   %esi
  40730f:	56                   	push   %esi
  407310:	56                   	push   %esi
  407311:	56                   	push   %esi
  407312:	56                   	push   %esi
  407313:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  407319:	e8 9f b0 ff ff       	call   0x4023bd
  40731e:	83 c4 14             	add    $0x14,%esp
  407321:	83 c8 ff             	or     $0xffffffff,%eax
  407324:	5e                   	pop    %esi
  407325:	5d                   	pop    %ebp
  407326:	c3                   	ret    
  407327:	8b ff                	mov    %edi,%edi
  407329:	55                   	push   %ebp
  40732a:	8b ec                	mov    %esp,%ebp
  40732c:	83 ec 10             	sub    $0x10,%esp
  40732f:	ff 75 08             	pushl  0x8(%ebp)
  407332:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  407335:	e8 87 a2 ff ff       	call   0x4015c1
  40733a:	0f b6 45 0c          	movzbl 0xc(%ebp),%eax
  40733e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  407341:	8a 55 14             	mov    0x14(%ebp),%dl
  407344:	84 54 01 1d          	test   %dl,0x1d(%ecx,%eax,1)
  407348:	75 1e                	jne    0x407368
  40734a:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
  40734e:	74 12                	je     0x407362
  407350:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  407353:	8b 89 c8 00 00 00    	mov    0xc8(%ecx),%ecx
  407359:	0f b7 04 41          	movzwl (%ecx,%eax,2),%eax
  40735d:	23 45 10             	and    0x10(%ebp),%eax
  407360:	eb 02                	jmp    0x407364
  407362:	33 c0                	xor    %eax,%eax
  407364:	85 c0                	test   %eax,%eax
  407366:	74 03                	je     0x40736b
  407368:	33 c0                	xor    %eax,%eax
  40736a:	40                   	inc    %eax
  40736b:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
  40736f:	74 07                	je     0x407378
  407371:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  407374:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  407378:	c9                   	leave  
  407379:	c3                   	ret    
  40737a:	8b ff                	mov    %edi,%edi
  40737c:	55                   	push   %ebp
  40737d:	8b ec                	mov    %esp,%ebp
  40737f:	6a 04                	push   $0x4
  407381:	6a 00                	push   $0x0
  407383:	ff 75 08             	pushl  0x8(%ebp)
  407386:	6a 00                	push   $0x0
  407388:	e8 9a ff ff ff       	call   0x407327
  40738d:	83 c4 10             	add    $0x10,%esp
  407390:	5d                   	pop    %ebp
  407391:	c3                   	ret    
  407392:	8b ff                	mov    %edi,%edi
  407394:	55                   	push   %ebp
  407395:	8b ec                	mov    %esp,%ebp
  407397:	8b 0d 64 fa 40 00    	mov    0x40fa64,%ecx
  40739d:	a1 68 fa 40 00       	mov    0x40fa68,%eax
  4073a2:	6b c9 14             	imul   $0x14,%ecx,%ecx
  4073a5:	03 c8                	add    %eax,%ecx
  4073a7:	eb 11                	jmp    0x4073ba
  4073a9:	8b 55 08             	mov    0x8(%ebp),%edx
  4073ac:	2b 50 0c             	sub    0xc(%eax),%edx
  4073af:	81 fa 00 00 10 00    	cmp    $0x100000,%edx
  4073b5:	72 09                	jb     0x4073c0
  4073b7:	83 c0 14             	add    $0x14,%eax
  4073ba:	3b c1                	cmp    %ecx,%eax
  4073bc:	72 eb                	jb     0x4073a9
  4073be:	33 c0                	xor    %eax,%eax
  4073c0:	5d                   	pop    %ebp
  4073c1:	c3                   	ret    
  4073c2:	8b ff                	mov    %edi,%edi
  4073c4:	55                   	push   %ebp
  4073c5:	8b ec                	mov    %esp,%ebp
  4073c7:	83 ec 10             	sub    $0x10,%esp
  4073ca:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4073cd:	8b 41 10             	mov    0x10(%ecx),%eax
  4073d0:	56                   	push   %esi
  4073d1:	8b 75 0c             	mov    0xc(%ebp),%esi
  4073d4:	57                   	push   %edi
  4073d5:	8b fe                	mov    %esi,%edi
  4073d7:	2b 79 0c             	sub    0xc(%ecx),%edi
  4073da:	83 c6 fc             	add    $0xfffffffc,%esi
  4073dd:	c1 ef 0f             	shr    $0xf,%edi
  4073e0:	8b cf                	mov    %edi,%ecx
  4073e2:	69 c9 04 02 00 00    	imul   $0x204,%ecx,%ecx
  4073e8:	8d 8c 01 44 01 00 00 	lea    0x144(%ecx,%eax,1),%ecx
  4073ef:	89 4d f0             	mov    %ecx,-0x10(%ebp)
  4073f2:	8b 0e                	mov    (%esi),%ecx
  4073f4:	49                   	dec    %ecx
  4073f5:	89 4d fc             	mov    %ecx,-0x4(%ebp)
  4073f8:	f6 c1 01             	test   $0x1,%cl
  4073fb:	0f 85 d3 02 00 00    	jne    0x4076d4
  407401:	53                   	push   %ebx
  407402:	8d 1c 31             	lea    (%ecx,%esi,1),%ebx
  407405:	8b 13                	mov    (%ebx),%edx
  407407:	89 55 f4             	mov    %edx,-0xc(%ebp)
  40740a:	8b 56 fc             	mov    -0x4(%esi),%edx
  40740d:	89 55 f8             	mov    %edx,-0x8(%ebp)
  407410:	8b 55 f4             	mov    -0xc(%ebp),%edx
  407413:	89 5d 0c             	mov    %ebx,0xc(%ebp)
  407416:	f6 c2 01             	test   $0x1,%dl
  407419:	75 74                	jne    0x40748f
  40741b:	c1 fa 04             	sar    $0x4,%edx
  40741e:	4a                   	dec    %edx
  40741f:	83 fa 3f             	cmp    $0x3f,%edx
  407422:	76 03                	jbe    0x407427
  407424:	6a 3f                	push   $0x3f
  407426:	5a                   	pop    %edx
  407427:	8b 4b 04             	mov    0x4(%ebx),%ecx
  40742a:	3b 4b 08             	cmp    0x8(%ebx),%ecx
  40742d:	75 42                	jne    0x407471
  40742f:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  407434:	83 fa 20             	cmp    $0x20,%edx
  407437:	73 19                	jae    0x407452
  407439:	8b ca                	mov    %edx,%ecx
  40743b:	d3 eb                	shr    %cl,%ebx
  40743d:	8d 4c 02 04          	lea    0x4(%edx,%eax,1),%ecx
  407441:	f7 d3                	not    %ebx
  407443:	21 5c b8 44          	and    %ebx,0x44(%eax,%edi,4)
  407447:	fe 09                	decb   (%ecx)
  407449:	75 23                	jne    0x40746e
  40744b:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40744e:	21 19                	and    %ebx,(%ecx)
  407450:	eb 1c                	jmp    0x40746e
  407452:	8d 4a e0             	lea    -0x20(%edx),%ecx
  407455:	d3 eb                	shr    %cl,%ebx
  407457:	8d 4c 02 04          	lea    0x4(%edx,%eax,1),%ecx
  40745b:	f7 d3                	not    %ebx
  40745d:	21 9c b8 c4 00 00 00 	and    %ebx,0xc4(%eax,%edi,4)
  407464:	fe 09                	decb   (%ecx)
  407466:	75 06                	jne    0x40746e
  407468:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40746b:	21 59 04             	and    %ebx,0x4(%ecx)
  40746e:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  407471:	8b 53 08             	mov    0x8(%ebx),%edx
  407474:	8b 5b 04             	mov    0x4(%ebx),%ebx
  407477:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  40747a:	03 4d f4             	add    -0xc(%ebp),%ecx
  40747d:	89 5a 04             	mov    %ebx,0x4(%edx)
  407480:	8b 55 0c             	mov    0xc(%ebp),%edx
  407483:	8b 5a 04             	mov    0x4(%edx),%ebx
  407486:	8b 52 08             	mov    0x8(%edx),%edx
  407489:	89 53 08             	mov    %edx,0x8(%ebx)
  40748c:	89 4d fc             	mov    %ecx,-0x4(%ebp)
  40748f:	8b d1                	mov    %ecx,%edx
  407491:	c1 fa 04             	sar    $0x4,%edx
  407494:	4a                   	dec    %edx
  407495:	83 fa 3f             	cmp    $0x3f,%edx
  407498:	76 03                	jbe    0x40749d
  40749a:	6a 3f                	push   $0x3f
  40749c:	5a                   	pop    %edx
  40749d:	8b 5d f8             	mov    -0x8(%ebp),%ebx
  4074a0:	83 e3 01             	and    $0x1,%ebx
  4074a3:	89 5d f4             	mov    %ebx,-0xc(%ebp)
  4074a6:	0f 85 8f 00 00 00    	jne    0x40753b
  4074ac:	2b 75 f8             	sub    -0x8(%ebp),%esi
  4074af:	8b 5d f8             	mov    -0x8(%ebp),%ebx
  4074b2:	c1 fb 04             	sar    $0x4,%ebx
  4074b5:	6a 3f                	push   $0x3f
  4074b7:	89 75 0c             	mov    %esi,0xc(%ebp)
  4074ba:	4b                   	dec    %ebx
  4074bb:	5e                   	pop    %esi
  4074bc:	3b de                	cmp    %esi,%ebx
  4074be:	76 02                	jbe    0x4074c2
  4074c0:	8b de                	mov    %esi,%ebx
  4074c2:	03 4d f8             	add    -0x8(%ebp),%ecx
  4074c5:	8b d1                	mov    %ecx,%edx
  4074c7:	c1 fa 04             	sar    $0x4,%edx
  4074ca:	4a                   	dec    %edx
  4074cb:	89 4d fc             	mov    %ecx,-0x4(%ebp)
  4074ce:	3b d6                	cmp    %esi,%edx
  4074d0:	76 02                	jbe    0x4074d4
  4074d2:	8b d6                	mov    %esi,%edx
  4074d4:	3b da                	cmp    %edx,%ebx
  4074d6:	74 5e                	je     0x407536
  4074d8:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  4074db:	8b 71 04             	mov    0x4(%ecx),%esi
  4074de:	3b 71 08             	cmp    0x8(%ecx),%esi
  4074e1:	75 3b                	jne    0x40751e
  4074e3:	be 00 00 00 80       	mov    $0x80000000,%esi
  4074e8:	83 fb 20             	cmp    $0x20,%ebx
  4074eb:	73 17                	jae    0x407504
  4074ed:	8b cb                	mov    %ebx,%ecx
  4074ef:	d3 ee                	shr    %cl,%esi
  4074f1:	f7 d6                	not    %esi
  4074f3:	21 74 b8 44          	and    %esi,0x44(%eax,%edi,4)
  4074f7:	fe 4c 03 04          	decb   0x4(%ebx,%eax,1)
  4074fb:	75 21                	jne    0x40751e
  4074fd:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407500:	21 31                	and    %esi,(%ecx)
  407502:	eb 1a                	jmp    0x40751e
  407504:	8d 4b e0             	lea    -0x20(%ebx),%ecx
  407507:	d3 ee                	shr    %cl,%esi
  407509:	f7 d6                	not    %esi
  40750b:	21 b4 b8 c4 00 00 00 	and    %esi,0xc4(%eax,%edi,4)
  407512:	fe 4c 03 04          	decb   0x4(%ebx,%eax,1)
  407516:	75 06                	jne    0x40751e
  407518:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40751b:	21 71 04             	and    %esi,0x4(%ecx)
  40751e:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  407521:	8b 71 08             	mov    0x8(%ecx),%esi
  407524:	8b 49 04             	mov    0x4(%ecx),%ecx
  407527:	89 4e 04             	mov    %ecx,0x4(%esi)
  40752a:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  40752d:	8b 71 04             	mov    0x4(%ecx),%esi
  407530:	8b 49 08             	mov    0x8(%ecx),%ecx
  407533:	89 4e 08             	mov    %ecx,0x8(%esi)
  407536:	8b 75 0c             	mov    0xc(%ebp),%esi
  407539:	eb 03                	jmp    0x40753e
  40753b:	8b 5d 08             	mov    0x8(%ebp),%ebx
  40753e:	83 7d f4 00          	cmpl   $0x0,-0xc(%ebp)
  407542:	75 08                	jne    0x40754c
  407544:	3b da                	cmp    %edx,%ebx
  407546:	0f 84 80 00 00 00    	je     0x4075cc
  40754c:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  40754f:	8d 0c d1             	lea    (%ecx,%edx,8),%ecx
  407552:	8b 59 04             	mov    0x4(%ecx),%ebx
  407555:	89 4e 08             	mov    %ecx,0x8(%esi)
  407558:	89 5e 04             	mov    %ebx,0x4(%esi)
  40755b:	89 71 04             	mov    %esi,0x4(%ecx)
  40755e:	8b 4e 04             	mov    0x4(%esi),%ecx
  407561:	89 71 08             	mov    %esi,0x8(%ecx)
  407564:	8b 4e 04             	mov    0x4(%esi),%ecx
  407567:	3b 4e 08             	cmp    0x8(%esi),%ecx
  40756a:	75 60                	jne    0x4075cc
  40756c:	8a 4c 02 04          	mov    0x4(%edx,%eax,1),%cl
  407570:	88 4d 0f             	mov    %cl,0xf(%ebp)
  407573:	fe c1                	inc    %cl
  407575:	88 4c 02 04          	mov    %cl,0x4(%edx,%eax,1)
  407579:	83 fa 20             	cmp    $0x20,%edx
  40757c:	73 25                	jae    0x4075a3
  40757e:	80 7d 0f 00          	cmpb   $0x0,0xf(%ebp)
  407582:	75 0e                	jne    0x407592
  407584:	8b ca                	mov    %edx,%ecx
  407586:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  40758b:	d3 eb                	shr    %cl,%ebx
  40758d:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407590:	09 19                	or     %ebx,(%ecx)
  407592:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  407597:	8b ca                	mov    %edx,%ecx
  407599:	d3 eb                	shr    %cl,%ebx
  40759b:	8d 44 b8 44          	lea    0x44(%eax,%edi,4),%eax
  40759f:	09 18                	or     %ebx,(%eax)
  4075a1:	eb 29                	jmp    0x4075cc
  4075a3:	80 7d 0f 00          	cmpb   $0x0,0xf(%ebp)
  4075a7:	75 10                	jne    0x4075b9
  4075a9:	8d 4a e0             	lea    -0x20(%edx),%ecx
  4075ac:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  4075b1:	d3 eb                	shr    %cl,%ebx
  4075b3:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4075b6:	09 59 04             	or     %ebx,0x4(%ecx)
  4075b9:	8d 4a e0             	lea    -0x20(%edx),%ecx
  4075bc:	ba 00 00 00 80       	mov    $0x80000000,%edx
  4075c1:	d3 ea                	shr    %cl,%edx
  4075c3:	8d 84 b8 c4 00 00 00 	lea    0xc4(%eax,%edi,4),%eax
  4075ca:	09 10                	or     %edx,(%eax)
  4075cc:	8b 45 fc             	mov    -0x4(%ebp),%eax
  4075cf:	89 06                	mov    %eax,(%esi)
  4075d1:	89 44 30 fc          	mov    %eax,-0x4(%eax,%esi,1)
  4075d5:	8b 45 f0             	mov    -0x10(%ebp),%eax
  4075d8:	ff 08                	decl   (%eax)
  4075da:	0f 85 f3 00 00 00    	jne    0x4076d3
  4075e0:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  4075e5:	85 c0                	test   %eax,%eax
  4075e7:	0f 84 d8 00 00 00    	je     0x4076c5
  4075ed:	8b 0d 78 fa 40 00    	mov    0x40fa78,%ecx
  4075f3:	8b 35 88 c0 40 00    	mov    0x40c088,%esi
  4075f9:	68 00 40 00 00       	push   $0x4000
  4075fe:	c1 e1 0f             	shl    $0xf,%ecx
  407601:	03 48 0c             	add    0xc(%eax),%ecx
  407604:	bb 00 80 00 00       	mov    $0x8000,%ebx
  407609:	53                   	push   %ebx
  40760a:	51                   	push   %ecx
  40760b:	ff d6                	call   *%esi
  40760d:	8b 0d 78 fa 40 00    	mov    0x40fa78,%ecx
  407613:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  407618:	ba 00 00 00 80       	mov    $0x80000000,%edx
  40761d:	d3 ea                	shr    %cl,%edx
  40761f:	09 50 08             	or     %edx,0x8(%eax)
  407622:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  407627:	8b 40 10             	mov    0x10(%eax),%eax
  40762a:	8b 0d 78 fa 40 00    	mov    0x40fa78,%ecx
  407630:	83 a4 88 c4 00 00 00 	andl   $0x0,0xc4(%eax,%ecx,4)
  407637:	00 
  407638:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  40763d:	8b 40 10             	mov    0x10(%eax),%eax
  407640:	fe 48 43             	decb   0x43(%eax)
  407643:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  407648:	8b 48 10             	mov    0x10(%eax),%ecx
  40764b:	80 79 43 00          	cmpb   $0x0,0x43(%ecx)
  40764f:	75 09                	jne    0x40765a
  407651:	83 60 04 fe          	andl   $0xfffffffe,0x4(%eax)
  407655:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  40765a:	83 78 08 ff          	cmpl   $0xffffffff,0x8(%eax)
  40765e:	75 65                	jne    0x4076c5
  407660:	53                   	push   %ebx
  407661:	6a 00                	push   $0x0
  407663:	ff 70 0c             	pushl  0xc(%eax)
  407666:	ff d6                	call   *%esi
  407668:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  40766d:	ff 70 10             	pushl  0x10(%eax)
  407670:	6a 00                	push   $0x0
  407672:	ff 35 8c f4 40 00    	pushl  0x40f48c
  407678:	ff 15 8c c0 40 00    	call   *0x40c08c
  40767e:	8b 0d 64 fa 40 00    	mov    0x40fa64,%ecx
  407684:	a1 6c f6 40 00       	mov    0x40f66c,%eax
  407689:	6b c9 14             	imul   $0x14,%ecx,%ecx
  40768c:	8b 15 68 fa 40 00    	mov    0x40fa68,%edx
  407692:	2b c8                	sub    %eax,%ecx
  407694:	8d 4c 11 ec          	lea    -0x14(%ecx,%edx,1),%ecx
  407698:	51                   	push   %ecx
  407699:	8d 48 14             	lea    0x14(%eax),%ecx
  40769c:	51                   	push   %ecx
  40769d:	50                   	push   %eax
  40769e:	e8 cd 32 00 00       	call   0x40a970
  4076a3:	8b 45 08             	mov    0x8(%ebp),%eax
  4076a6:	83 c4 0c             	add    $0xc,%esp
  4076a9:	ff 0d 64 fa 40 00    	decl   0x40fa64
  4076af:	3b 05 6c f6 40 00    	cmp    0x40f66c,%eax
  4076b5:	76 04                	jbe    0x4076bb
  4076b7:	83 6d 08 14          	subl   $0x14,0x8(%ebp)
  4076bb:	a1 68 fa 40 00       	mov    0x40fa68,%eax
  4076c0:	a3 70 fa 40 00       	mov    %eax,0x40fa70
  4076c5:	8b 45 08             	mov    0x8(%ebp),%eax
  4076c8:	a3 6c f6 40 00       	mov    %eax,0x40f66c
  4076cd:	89 3d 78 fa 40 00    	mov    %edi,0x40fa78
  4076d3:	5b                   	pop    %ebx
  4076d4:	5f                   	pop    %edi
  4076d5:	5e                   	pop    %esi
  4076d6:	c9                   	leave  
  4076d7:	c3                   	ret    
  4076d8:	a1 74 fa 40 00       	mov    0x40fa74,%eax
  4076dd:	56                   	push   %esi
  4076de:	8b 35 64 fa 40 00    	mov    0x40fa64,%esi
  4076e4:	57                   	push   %edi
  4076e5:	33 ff                	xor    %edi,%edi
  4076e7:	3b f0                	cmp    %eax,%esi
  4076e9:	75 34                	jne    0x40771f
  4076eb:	83 c0 10             	add    $0x10,%eax
  4076ee:	6b c0 14             	imul   $0x14,%eax,%eax
  4076f1:	50                   	push   %eax
  4076f2:	ff 35 68 fa 40 00    	pushl  0x40fa68
  4076f8:	57                   	push   %edi
  4076f9:	ff 35 8c f4 40 00    	pushl  0x40f48c
  4076ff:	ff 15 c8 c0 40 00    	call   *0x40c0c8
  407705:	3b c7                	cmp    %edi,%eax
  407707:	75 04                	jne    0x40770d
  407709:	33 c0                	xor    %eax,%eax
  40770b:	eb 78                	jmp    0x407785
  40770d:	83 05 74 fa 40 00 10 	addl   $0x10,0x40fa74
  407714:	8b 35 64 fa 40 00    	mov    0x40fa64,%esi
  40771a:	a3 68 fa 40 00       	mov    %eax,0x40fa68
  40771f:	6b f6 14             	imul   $0x14,%esi,%esi
  407722:	03 35 68 fa 40 00    	add    0x40fa68,%esi
  407728:	68 c4 41 00 00       	push   $0x41c4
  40772d:	6a 08                	push   $0x8
  40772f:	ff 35 8c f4 40 00    	pushl  0x40f48c
  407735:	ff 15 c0 c0 40 00    	call   *0x40c0c0
  40773b:	89 46 10             	mov    %eax,0x10(%esi)
  40773e:	3b c7                	cmp    %edi,%eax
  407740:	74 c7                	je     0x407709
  407742:	6a 04                	push   $0x4
  407744:	68 00 20 00 00       	push   $0x2000
  407749:	68 00 00 10 00       	push   $0x100000
  40774e:	57                   	push   %edi
  40774f:	ff 15 c4 c0 40 00    	call   *0x40c0c4
  407755:	89 46 0c             	mov    %eax,0xc(%esi)
  407758:	3b c7                	cmp    %edi,%eax
  40775a:	75 12                	jne    0x40776e
  40775c:	ff 76 10             	pushl  0x10(%esi)
  40775f:	57                   	push   %edi
  407760:	ff 35 8c f4 40 00    	pushl  0x40f48c
  407766:	ff 15 8c c0 40 00    	call   *0x40c08c
  40776c:	eb 9b                	jmp    0x407709
  40776e:	83 4e 08 ff          	orl    $0xffffffff,0x8(%esi)
  407772:	89 3e                	mov    %edi,(%esi)
  407774:	89 7e 04             	mov    %edi,0x4(%esi)
  407777:	ff 05 64 fa 40 00    	incl   0x40fa64
  40777d:	8b 46 10             	mov    0x10(%esi),%eax
  407780:	83 08 ff             	orl    $0xffffffff,(%eax)
  407783:	8b c6                	mov    %esi,%eax
  407785:	5f                   	pop    %edi
  407786:	5e                   	pop    %esi
  407787:	c3                   	ret    
  407788:	8b ff                	mov    %edi,%edi
  40778a:	55                   	push   %ebp
  40778b:	8b ec                	mov    %esp,%ebp
  40778d:	51                   	push   %ecx
  40778e:	51                   	push   %ecx
  40778f:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407792:	8b 41 08             	mov    0x8(%ecx),%eax
  407795:	53                   	push   %ebx
  407796:	56                   	push   %esi
  407797:	8b 71 10             	mov    0x10(%ecx),%esi
  40779a:	57                   	push   %edi
  40779b:	33 db                	xor    %ebx,%ebx
  40779d:	eb 03                	jmp    0x4077a2
  40779f:	03 c0                	add    %eax,%eax
  4077a1:	43                   	inc    %ebx
  4077a2:	85 c0                	test   %eax,%eax
  4077a4:	7d f9                	jge    0x40779f
  4077a6:	8b c3                	mov    %ebx,%eax
  4077a8:	69 c0 04 02 00 00    	imul   $0x204,%eax,%eax
  4077ae:	8d 84 30 44 01 00 00 	lea    0x144(%eax,%esi,1),%eax
  4077b5:	6a 3f                	push   $0x3f
  4077b7:	89 45 f8             	mov    %eax,-0x8(%ebp)
  4077ba:	5a                   	pop    %edx
  4077bb:	89 40 08             	mov    %eax,0x8(%eax)
  4077be:	89 40 04             	mov    %eax,0x4(%eax)
  4077c1:	83 c0 08             	add    $0x8,%eax
  4077c4:	4a                   	dec    %edx
  4077c5:	75 f4                	jne    0x4077bb
  4077c7:	6a 04                	push   $0x4
  4077c9:	8b fb                	mov    %ebx,%edi
  4077cb:	68 00 10 00 00       	push   $0x1000
  4077d0:	c1 e7 0f             	shl    $0xf,%edi
  4077d3:	03 79 0c             	add    0xc(%ecx),%edi
  4077d6:	68 00 80 00 00       	push   $0x8000
  4077db:	57                   	push   %edi
  4077dc:	ff 15 c4 c0 40 00    	call   *0x40c0c4
  4077e2:	85 c0                	test   %eax,%eax
  4077e4:	75 08                	jne    0x4077ee
  4077e6:	83 c8 ff             	or     $0xffffffff,%eax
  4077e9:	e9 9d 00 00 00       	jmp    0x40788b
  4077ee:	8d 97 00 70 00 00    	lea    0x7000(%edi),%edx
  4077f4:	89 55 fc             	mov    %edx,-0x4(%ebp)
  4077f7:	3b fa                	cmp    %edx,%edi
  4077f9:	77 43                	ja     0x40783e
  4077fb:	8b ca                	mov    %edx,%ecx
  4077fd:	2b cf                	sub    %edi,%ecx
  4077ff:	c1 e9 0c             	shr    $0xc,%ecx
  407802:	8d 47 10             	lea    0x10(%edi),%eax
  407805:	41                   	inc    %ecx
  407806:	83 48 f8 ff          	orl    $0xffffffff,-0x8(%eax)
  40780a:	83 88 ec 0f 00 00 ff 	orl    $0xffffffff,0xfec(%eax)
  407811:	8d 90 fc 0f 00 00    	lea    0xffc(%eax),%edx
  407817:	89 10                	mov    %edx,(%eax)
  407819:	8d 90 fc ef ff ff    	lea    -0x1004(%eax),%edx
  40781f:	c7 40 fc f0 0f 00 00 	movl   $0xff0,-0x4(%eax)
  407826:	89 50 04             	mov    %edx,0x4(%eax)
  407829:	c7 80 e8 0f 00 00 f0 	movl   $0xff0,0xfe8(%eax)
  407830:	0f 00 00 
  407833:	05 00 10 00 00       	add    $0x1000,%eax
  407838:	49                   	dec    %ecx
  407839:	75 cb                	jne    0x407806
  40783b:	8b 55 fc             	mov    -0x4(%ebp),%edx
  40783e:	8b 45 f8             	mov    -0x8(%ebp),%eax
  407841:	05 f8 01 00 00       	add    $0x1f8,%eax
  407846:	8d 4f 0c             	lea    0xc(%edi),%ecx
  407849:	89 48 04             	mov    %ecx,0x4(%eax)
  40784c:	89 41 08             	mov    %eax,0x8(%ecx)
  40784f:	8d 4a 0c             	lea    0xc(%edx),%ecx
  407852:	89 48 08             	mov    %ecx,0x8(%eax)
  407855:	89 41 04             	mov    %eax,0x4(%ecx)
  407858:	83 64 9e 44 00       	andl   $0x0,0x44(%esi,%ebx,4)
  40785d:	33 ff                	xor    %edi,%edi
  40785f:	47                   	inc    %edi
  407860:	89 bc 9e c4 00 00 00 	mov    %edi,0xc4(%esi,%ebx,4)
  407867:	8a 46 43             	mov    0x43(%esi),%al
  40786a:	8a c8                	mov    %al,%cl
  40786c:	fe c1                	inc    %cl
  40786e:	84 c0                	test   %al,%al
  407870:	8b 45 08             	mov    0x8(%ebp),%eax
  407873:	88 4e 43             	mov    %cl,0x43(%esi)
  407876:	75 03                	jne    0x40787b
  407878:	09 78 04             	or     %edi,0x4(%eax)
  40787b:	ba 00 00 00 80       	mov    $0x80000000,%edx
  407880:	8b cb                	mov    %ebx,%ecx
  407882:	d3 ea                	shr    %cl,%edx
  407884:	f7 d2                	not    %edx
  407886:	21 50 08             	and    %edx,0x8(%eax)
  407889:	8b c3                	mov    %ebx,%eax
  40788b:	5f                   	pop    %edi
  40788c:	5e                   	pop    %esi
  40788d:	5b                   	pop    %ebx
  40788e:	c9                   	leave  
  40788f:	c3                   	ret    
  407890:	8b ff                	mov    %edi,%edi
  407892:	55                   	push   %ebp
  407893:	8b ec                	mov    %esp,%ebp
  407895:	83 ec 0c             	sub    $0xc,%esp
  407898:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40789b:	8b 41 10             	mov    0x10(%ecx),%eax
  40789e:	53                   	push   %ebx
  40789f:	56                   	push   %esi
  4078a0:	8b 75 10             	mov    0x10(%ebp),%esi
  4078a3:	57                   	push   %edi
  4078a4:	8b 7d 0c             	mov    0xc(%ebp),%edi
  4078a7:	8b d7                	mov    %edi,%edx
  4078a9:	2b 51 0c             	sub    0xc(%ecx),%edx
  4078ac:	83 c6 17             	add    $0x17,%esi
  4078af:	c1 ea 0f             	shr    $0xf,%edx
  4078b2:	8b ca                	mov    %edx,%ecx
  4078b4:	69 c9 04 02 00 00    	imul   $0x204,%ecx,%ecx
  4078ba:	8d 8c 01 44 01 00 00 	lea    0x144(%ecx,%eax,1),%ecx
  4078c1:	89 4d f4             	mov    %ecx,-0xc(%ebp)
  4078c4:	8b 4f fc             	mov    -0x4(%edi),%ecx
  4078c7:	83 e6 f0             	and    $0xfffffff0,%esi
  4078ca:	49                   	dec    %ecx
  4078cb:	3b f1                	cmp    %ecx,%esi
  4078cd:	8d 7c 39 fc          	lea    -0x4(%ecx,%edi,1),%edi
  4078d1:	8b 1f                	mov    (%edi),%ebx
  4078d3:	89 4d 10             	mov    %ecx,0x10(%ebp)
  4078d6:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  4078d9:	0f 8e 55 01 00 00    	jle    0x407a34
  4078df:	f6 c3 01             	test   $0x1,%bl
  4078e2:	0f 85 45 01 00 00    	jne    0x407a2d
  4078e8:	03 d9                	add    %ecx,%ebx
  4078ea:	3b f3                	cmp    %ebx,%esi
  4078ec:	0f 8f 3b 01 00 00    	jg     0x407a2d
  4078f2:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  4078f5:	c1 f9 04             	sar    $0x4,%ecx
  4078f8:	49                   	dec    %ecx
  4078f9:	89 4d f8             	mov    %ecx,-0x8(%ebp)
  4078fc:	83 f9 3f             	cmp    $0x3f,%ecx
  4078ff:	76 06                	jbe    0x407907
  407901:	6a 3f                	push   $0x3f
  407903:	59                   	pop    %ecx
  407904:	89 4d f8             	mov    %ecx,-0x8(%ebp)
  407907:	8b 5f 04             	mov    0x4(%edi),%ebx
  40790a:	3b 5f 08             	cmp    0x8(%edi),%ebx
  40790d:	75 43                	jne    0x407952
  40790f:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  407914:	83 f9 20             	cmp    $0x20,%ecx
  407917:	73 1a                	jae    0x407933
  407919:	d3 eb                	shr    %cl,%ebx
  40791b:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  40791e:	8d 4c 01 04          	lea    0x4(%ecx,%eax,1),%ecx
  407922:	f7 d3                	not    %ebx
  407924:	21 5c 90 44          	and    %ebx,0x44(%eax,%edx,4)
  407928:	fe 09                	decb   (%ecx)
  40792a:	75 26                	jne    0x407952
  40792c:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40792f:	21 19                	and    %ebx,(%ecx)
  407931:	eb 1f                	jmp    0x407952
  407933:	83 c1 e0             	add    $0xffffffe0,%ecx
  407936:	d3 eb                	shr    %cl,%ebx
  407938:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  40793b:	8d 4c 01 04          	lea    0x4(%ecx,%eax,1),%ecx
  40793f:	f7 d3                	not    %ebx
  407941:	21 9c 90 c4 00 00 00 	and    %ebx,0xc4(%eax,%edx,4)
  407948:	fe 09                	decb   (%ecx)
  40794a:	75 06                	jne    0x407952
  40794c:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40794f:	21 59 04             	and    %ebx,0x4(%ecx)
  407952:	8b 4f 08             	mov    0x8(%edi),%ecx
  407955:	8b 5f 04             	mov    0x4(%edi),%ebx
  407958:	89 59 04             	mov    %ebx,0x4(%ecx)
  40795b:	8b 4f 04             	mov    0x4(%edi),%ecx
  40795e:	8b 7f 08             	mov    0x8(%edi),%edi
  407961:	89 79 08             	mov    %edi,0x8(%ecx)
  407964:	8b 4d 10             	mov    0x10(%ebp),%ecx
  407967:	2b ce                	sub    %esi,%ecx
  407969:	01 4d fc             	add    %ecx,-0x4(%ebp)
  40796c:	83 7d fc 00          	cmpl   $0x0,-0x4(%ebp)
  407970:	0f 8e a5 00 00 00    	jle    0x407a1b
  407976:	8b 7d fc             	mov    -0x4(%ebp),%edi
  407979:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  40797c:	c1 ff 04             	sar    $0x4,%edi
  40797f:	4f                   	dec    %edi
  407980:	8d 4c 31 fc          	lea    -0x4(%ecx,%esi,1),%ecx
  407984:	83 ff 3f             	cmp    $0x3f,%edi
  407987:	76 03                	jbe    0x40798c
  407989:	6a 3f                	push   $0x3f
  40798b:	5f                   	pop    %edi
  40798c:	8b 5d f4             	mov    -0xc(%ebp),%ebx
  40798f:	8d 1c fb             	lea    (%ebx,%edi,8),%ebx
  407992:	89 5d 10             	mov    %ebx,0x10(%ebp)
  407995:	8b 5b 04             	mov    0x4(%ebx),%ebx
  407998:	89 59 04             	mov    %ebx,0x4(%ecx)
  40799b:	8b 5d 10             	mov    0x10(%ebp),%ebx
  40799e:	89 59 08             	mov    %ebx,0x8(%ecx)
  4079a1:	89 4b 04             	mov    %ecx,0x4(%ebx)
  4079a4:	8b 59 04             	mov    0x4(%ecx),%ebx
  4079a7:	89 4b 08             	mov    %ecx,0x8(%ebx)
  4079aa:	8b 59 04             	mov    0x4(%ecx),%ebx
  4079ad:	3b 59 08             	cmp    0x8(%ecx),%ebx
  4079b0:	75 57                	jne    0x407a09
  4079b2:	8a 4c 07 04          	mov    0x4(%edi,%eax,1),%cl
  4079b6:	88 4d 13             	mov    %cl,0x13(%ebp)
  4079b9:	fe c1                	inc    %cl
  4079bb:	88 4c 07 04          	mov    %cl,0x4(%edi,%eax,1)
  4079bf:	83 ff 20             	cmp    $0x20,%edi
  4079c2:	73 1c                	jae    0x4079e0
  4079c4:	80 7d 13 00          	cmpb   $0x0,0x13(%ebp)
  4079c8:	75 0e                	jne    0x4079d8
  4079ca:	8b cf                	mov    %edi,%ecx
  4079cc:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  4079d1:	d3 eb                	shr    %cl,%ebx
  4079d3:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4079d6:	09 19                	or     %ebx,(%ecx)
  4079d8:	8d 44 90 44          	lea    0x44(%eax,%edx,4),%eax
  4079dc:	8b cf                	mov    %edi,%ecx
  4079de:	eb 20                	jmp    0x407a00
  4079e0:	80 7d 13 00          	cmpb   $0x0,0x13(%ebp)
  4079e4:	75 10                	jne    0x4079f6
  4079e6:	8d 4f e0             	lea    -0x20(%edi),%ecx
  4079e9:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  4079ee:	d3 eb                	shr    %cl,%ebx
  4079f0:	8b 4d 08             	mov    0x8(%ebp),%ecx
  4079f3:	09 59 04             	or     %ebx,0x4(%ecx)
  4079f6:	8d 84 90 c4 00 00 00 	lea    0xc4(%eax,%edx,4),%eax
  4079fd:	8d 4f e0             	lea    -0x20(%edi),%ecx
  407a00:	ba 00 00 00 80       	mov    $0x80000000,%edx
  407a05:	d3 ea                	shr    %cl,%edx
  407a07:	09 10                	or     %edx,(%eax)
  407a09:	8b 55 0c             	mov    0xc(%ebp),%edx
  407a0c:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  407a0f:	8d 44 32 fc          	lea    -0x4(%edx,%esi,1),%eax
  407a13:	89 08                	mov    %ecx,(%eax)
  407a15:	89 4c 01 fc          	mov    %ecx,-0x4(%ecx,%eax,1)
  407a19:	eb 03                	jmp    0x407a1e
  407a1b:	8b 55 0c             	mov    0xc(%ebp),%edx
  407a1e:	8d 46 01             	lea    0x1(%esi),%eax
  407a21:	89 42 fc             	mov    %eax,-0x4(%edx)
  407a24:	89 44 32 f8          	mov    %eax,-0x8(%edx,%esi,1)
  407a28:	e9 3c 01 00 00       	jmp    0x407b69
  407a2d:	33 c0                	xor    %eax,%eax
  407a2f:	e9 38 01 00 00       	jmp    0x407b6c
  407a34:	0f 8d 2f 01 00 00    	jge    0x407b69
  407a3a:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  407a3d:	29 75 10             	sub    %esi,0x10(%ebp)
  407a40:	8d 4e 01             	lea    0x1(%esi),%ecx
  407a43:	89 4b fc             	mov    %ecx,-0x4(%ebx)
  407a46:	8d 5c 33 fc          	lea    -0x4(%ebx,%esi,1),%ebx
  407a4a:	8b 75 10             	mov    0x10(%ebp),%esi
  407a4d:	c1 fe 04             	sar    $0x4,%esi
  407a50:	4e                   	dec    %esi
  407a51:	89 5d 0c             	mov    %ebx,0xc(%ebp)
  407a54:	89 4b fc             	mov    %ecx,-0x4(%ebx)
  407a57:	83 fe 3f             	cmp    $0x3f,%esi
  407a5a:	76 03                	jbe    0x407a5f
  407a5c:	6a 3f                	push   $0x3f
  407a5e:	5e                   	pop    %esi
  407a5f:	f6 45 fc 01          	testb  $0x1,-0x4(%ebp)
  407a63:	0f 85 80 00 00 00    	jne    0x407ae9
  407a69:	8b 75 fc             	mov    -0x4(%ebp),%esi
  407a6c:	c1 fe 04             	sar    $0x4,%esi
  407a6f:	4e                   	dec    %esi
  407a70:	83 fe 3f             	cmp    $0x3f,%esi
  407a73:	76 03                	jbe    0x407a78
  407a75:	6a 3f                	push   $0x3f
  407a77:	5e                   	pop    %esi
  407a78:	8b 4f 04             	mov    0x4(%edi),%ecx
  407a7b:	3b 4f 08             	cmp    0x8(%edi),%ecx
  407a7e:	75 42                	jne    0x407ac2
  407a80:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  407a85:	83 fe 20             	cmp    $0x20,%esi
  407a88:	73 19                	jae    0x407aa3
  407a8a:	8b ce                	mov    %esi,%ecx
  407a8c:	d3 eb                	shr    %cl,%ebx
  407a8e:	8d 74 06 04          	lea    0x4(%esi,%eax,1),%esi
  407a92:	f7 d3                	not    %ebx
  407a94:	21 5c 90 44          	and    %ebx,0x44(%eax,%edx,4)
  407a98:	fe 0e                	decb   (%esi)
  407a9a:	75 23                	jne    0x407abf
  407a9c:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407a9f:	21 19                	and    %ebx,(%ecx)
  407aa1:	eb 1c                	jmp    0x407abf
  407aa3:	8d 4e e0             	lea    -0x20(%esi),%ecx
  407aa6:	d3 eb                	shr    %cl,%ebx
  407aa8:	8d 4c 06 04          	lea    0x4(%esi,%eax,1),%ecx
  407aac:	f7 d3                	not    %ebx
  407aae:	21 9c 90 c4 00 00 00 	and    %ebx,0xc4(%eax,%edx,4)
  407ab5:	fe 09                	decb   (%ecx)
  407ab7:	75 06                	jne    0x407abf
  407ab9:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407abc:	21 59 04             	and    %ebx,0x4(%ecx)
  407abf:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  407ac2:	8b 4f 08             	mov    0x8(%edi),%ecx
  407ac5:	8b 77 04             	mov    0x4(%edi),%esi
  407ac8:	89 71 04             	mov    %esi,0x4(%ecx)
  407acb:	8b 77 08             	mov    0x8(%edi),%esi
  407ace:	8b 4f 04             	mov    0x4(%edi),%ecx
  407ad1:	89 71 08             	mov    %esi,0x8(%ecx)
  407ad4:	8b 75 10             	mov    0x10(%ebp),%esi
  407ad7:	03 75 fc             	add    -0x4(%ebp),%esi
  407ada:	89 75 10             	mov    %esi,0x10(%ebp)
  407add:	c1 fe 04             	sar    $0x4,%esi
  407ae0:	4e                   	dec    %esi
  407ae1:	83 fe 3f             	cmp    $0x3f,%esi
  407ae4:	76 03                	jbe    0x407ae9
  407ae6:	6a 3f                	push   $0x3f
  407ae8:	5e                   	pop    %esi
  407ae9:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  407aec:	8d 0c f1             	lea    (%ecx,%esi,8),%ecx
  407aef:	8b 79 04             	mov    0x4(%ecx),%edi
  407af2:	89 4b 08             	mov    %ecx,0x8(%ebx)
  407af5:	89 7b 04             	mov    %edi,0x4(%ebx)
  407af8:	89 59 04             	mov    %ebx,0x4(%ecx)
  407afb:	8b 4b 04             	mov    0x4(%ebx),%ecx
  407afe:	89 59 08             	mov    %ebx,0x8(%ecx)
  407b01:	8b 4b 04             	mov    0x4(%ebx),%ecx
  407b04:	3b 4b 08             	cmp    0x8(%ebx),%ecx
  407b07:	75 57                	jne    0x407b60
  407b09:	8a 4c 06 04          	mov    0x4(%esi,%eax,1),%cl
  407b0d:	88 4d 0f             	mov    %cl,0xf(%ebp)
  407b10:	fe c1                	inc    %cl
  407b12:	88 4c 06 04          	mov    %cl,0x4(%esi,%eax,1)
  407b16:	83 fe 20             	cmp    $0x20,%esi
  407b19:	73 1c                	jae    0x407b37
  407b1b:	80 7d 0f 00          	cmpb   $0x0,0xf(%ebp)
  407b1f:	75 0e                	jne    0x407b2f
  407b21:	8b ce                	mov    %esi,%ecx
  407b23:	bf 00 00 00 80       	mov    $0x80000000,%edi
  407b28:	d3 ef                	shr    %cl,%edi
  407b2a:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407b2d:	09 39                	or     %edi,(%ecx)
  407b2f:	8d 44 90 44          	lea    0x44(%eax,%edx,4),%eax
  407b33:	8b ce                	mov    %esi,%ecx
  407b35:	eb 20                	jmp    0x407b57
  407b37:	80 7d 0f 00          	cmpb   $0x0,0xf(%ebp)
  407b3b:	75 10                	jne    0x407b4d
  407b3d:	8d 4e e0             	lea    -0x20(%esi),%ecx
  407b40:	bf 00 00 00 80       	mov    $0x80000000,%edi
  407b45:	d3 ef                	shr    %cl,%edi
  407b47:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407b4a:	09 79 04             	or     %edi,0x4(%ecx)
  407b4d:	8d 84 90 c4 00 00 00 	lea    0xc4(%eax,%edx,4),%eax
  407b54:	8d 4e e0             	lea    -0x20(%esi),%ecx
  407b57:	ba 00 00 00 80       	mov    $0x80000000,%edx
  407b5c:	d3 ea                	shr    %cl,%edx
  407b5e:	09 10                	or     %edx,(%eax)
  407b60:	8b 45 10             	mov    0x10(%ebp),%eax
  407b63:	89 03                	mov    %eax,(%ebx)
  407b65:	89 44 18 fc          	mov    %eax,-0x4(%eax,%ebx,1)
  407b69:	33 c0                	xor    %eax,%eax
  407b6b:	40                   	inc    %eax
  407b6c:	5f                   	pop    %edi
  407b6d:	5e                   	pop    %esi
  407b6e:	5b                   	pop    %ebx
  407b6f:	c9                   	leave  
  407b70:	c3                   	ret    
  407b71:	8b ff                	mov    %edi,%edi
  407b73:	55                   	push   %ebp
  407b74:	8b ec                	mov    %esp,%ebp
  407b76:	83 ec 14             	sub    $0x14,%esp
  407b79:	a1 64 fa 40 00       	mov    0x40fa64,%eax
  407b7e:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407b81:	6b c0 14             	imul   $0x14,%eax,%eax
  407b84:	03 05 68 fa 40 00    	add    0x40fa68,%eax
  407b8a:	83 c1 17             	add    $0x17,%ecx
  407b8d:	83 e1 f0             	and    $0xfffffff0,%ecx
  407b90:	89 4d f0             	mov    %ecx,-0x10(%ebp)
  407b93:	c1 f9 04             	sar    $0x4,%ecx
  407b96:	53                   	push   %ebx
  407b97:	49                   	dec    %ecx
  407b98:	83 f9 20             	cmp    $0x20,%ecx
  407b9b:	56                   	push   %esi
  407b9c:	57                   	push   %edi
  407b9d:	7d 0b                	jge    0x407baa
  407b9f:	83 ce ff             	or     $0xffffffff,%esi
  407ba2:	d3 ee                	shr    %cl,%esi
  407ba4:	83 4d f8 ff          	orl    $0xffffffff,-0x8(%ebp)
  407ba8:	eb 0d                	jmp    0x407bb7
  407baa:	83 c1 e0             	add    $0xffffffe0,%ecx
  407bad:	83 ca ff             	or     $0xffffffff,%edx
  407bb0:	33 f6                	xor    %esi,%esi
  407bb2:	d3 ea                	shr    %cl,%edx
  407bb4:	89 55 f8             	mov    %edx,-0x8(%ebp)
  407bb7:	8b 0d 70 fa 40 00    	mov    0x40fa70,%ecx
  407bbd:	8b d9                	mov    %ecx,%ebx
  407bbf:	eb 11                	jmp    0x407bd2
  407bc1:	8b 53 04             	mov    0x4(%ebx),%edx
  407bc4:	8b 3b                	mov    (%ebx),%edi
  407bc6:	23 55 f8             	and    -0x8(%ebp),%edx
  407bc9:	23 fe                	and    %esi,%edi
  407bcb:	0b d7                	or     %edi,%edx
  407bcd:	75 0a                	jne    0x407bd9
  407bcf:	83 c3 14             	add    $0x14,%ebx
  407bd2:	89 5d 08             	mov    %ebx,0x8(%ebp)
  407bd5:	3b d8                	cmp    %eax,%ebx
  407bd7:	72 e8                	jb     0x407bc1
  407bd9:	3b d8                	cmp    %eax,%ebx
  407bdb:	75 7f                	jne    0x407c5c
  407bdd:	8b 1d 68 fa 40 00    	mov    0x40fa68,%ebx
  407be3:	eb 11                	jmp    0x407bf6
  407be5:	8b 53 04             	mov    0x4(%ebx),%edx
  407be8:	8b 3b                	mov    (%ebx),%edi
  407bea:	23 55 f8             	and    -0x8(%ebp),%edx
  407bed:	23 fe                	and    %esi,%edi
  407bef:	0b d7                	or     %edi,%edx
  407bf1:	75 0a                	jne    0x407bfd
  407bf3:	83 c3 14             	add    $0x14,%ebx
  407bf6:	89 5d 08             	mov    %ebx,0x8(%ebp)
  407bf9:	3b d9                	cmp    %ecx,%ebx
  407bfb:	72 e8                	jb     0x407be5
  407bfd:	3b d9                	cmp    %ecx,%ebx
  407bff:	75 5b                	jne    0x407c5c
  407c01:	eb 0c                	jmp    0x407c0f
  407c03:	83 7b 08 00          	cmpl   $0x0,0x8(%ebx)
  407c07:	75 0a                	jne    0x407c13
  407c09:	83 c3 14             	add    $0x14,%ebx
  407c0c:	89 5d 08             	mov    %ebx,0x8(%ebp)
  407c0f:	3b d8                	cmp    %eax,%ebx
  407c11:	72 f0                	jb     0x407c03
  407c13:	3b d8                	cmp    %eax,%ebx
  407c15:	75 31                	jne    0x407c48
  407c17:	8b 1d 68 fa 40 00    	mov    0x40fa68,%ebx
  407c1d:	eb 09                	jmp    0x407c28
  407c1f:	83 7b 08 00          	cmpl   $0x0,0x8(%ebx)
  407c23:	75 0a                	jne    0x407c2f
  407c25:	83 c3 14             	add    $0x14,%ebx
  407c28:	89 5d 08             	mov    %ebx,0x8(%ebp)
  407c2b:	3b d9                	cmp    %ecx,%ebx
  407c2d:	72 f0                	jb     0x407c1f
  407c2f:	3b d9                	cmp    %ecx,%ebx
  407c31:	75 15                	jne    0x407c48
  407c33:	e8 a0 fa ff ff       	call   0x4076d8
  407c38:	8b d8                	mov    %eax,%ebx
  407c3a:	89 5d 08             	mov    %ebx,0x8(%ebp)
  407c3d:	85 db                	test   %ebx,%ebx
  407c3f:	75 07                	jne    0x407c48
  407c41:	33 c0                	xor    %eax,%eax
  407c43:	e9 09 02 00 00       	jmp    0x407e51
  407c48:	53                   	push   %ebx
  407c49:	e8 3a fb ff ff       	call   0x407788
  407c4e:	59                   	pop    %ecx
  407c4f:	8b 4b 10             	mov    0x10(%ebx),%ecx
  407c52:	89 01                	mov    %eax,(%ecx)
  407c54:	8b 43 10             	mov    0x10(%ebx),%eax
  407c57:	83 38 ff             	cmpl   $0xffffffff,(%eax)
  407c5a:	74 e5                	je     0x407c41
  407c5c:	89 1d 70 fa 40 00    	mov    %ebx,0x40fa70
  407c62:	8b 43 10             	mov    0x10(%ebx),%eax
  407c65:	8b 10                	mov    (%eax),%edx
  407c67:	89 55 fc             	mov    %edx,-0x4(%ebp)
  407c6a:	83 fa ff             	cmp    $0xffffffff,%edx
  407c6d:	74 14                	je     0x407c83
  407c6f:	8b 8c 90 c4 00 00 00 	mov    0xc4(%eax,%edx,4),%ecx
  407c76:	8b 7c 90 44          	mov    0x44(%eax,%edx,4),%edi
  407c7a:	23 4d f8             	and    -0x8(%ebp),%ecx
  407c7d:	23 fe                	and    %esi,%edi
  407c7f:	0b cf                	or     %edi,%ecx
  407c81:	75 29                	jne    0x407cac
  407c83:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  407c87:	8b 90 c4 00 00 00    	mov    0xc4(%eax),%edx
  407c8d:	8d 48 44             	lea    0x44(%eax),%ecx
  407c90:	8b 39                	mov    (%ecx),%edi
  407c92:	23 55 f8             	and    -0x8(%ebp),%edx
  407c95:	23 fe                	and    %esi,%edi
  407c97:	0b d7                	or     %edi,%edx
  407c99:	75 0e                	jne    0x407ca9
  407c9b:	ff 45 fc             	incl   -0x4(%ebp)
  407c9e:	8b 91 84 00 00 00    	mov    0x84(%ecx),%edx
  407ca4:	83 c1 04             	add    $0x4,%ecx
  407ca7:	eb e7                	jmp    0x407c90
  407ca9:	8b 55 fc             	mov    -0x4(%ebp),%edx
  407cac:	8b ca                	mov    %edx,%ecx
  407cae:	69 c9 04 02 00 00    	imul   $0x204,%ecx,%ecx
  407cb4:	8d 8c 01 44 01 00 00 	lea    0x144(%ecx,%eax,1),%ecx
  407cbb:	89 4d f4             	mov    %ecx,-0xc(%ebp)
  407cbe:	8b 4c 90 44          	mov    0x44(%eax,%edx,4),%ecx
  407cc2:	33 ff                	xor    %edi,%edi
  407cc4:	23 ce                	and    %esi,%ecx
  407cc6:	75 12                	jne    0x407cda
  407cc8:	8b 8c 90 c4 00 00 00 	mov    0xc4(%eax,%edx,4),%ecx
  407ccf:	23 4d f8             	and    -0x8(%ebp),%ecx
  407cd2:	6a 20                	push   $0x20
  407cd4:	5f                   	pop    %edi
  407cd5:	eb 03                	jmp    0x407cda
  407cd7:	03 c9                	add    %ecx,%ecx
  407cd9:	47                   	inc    %edi
  407cda:	85 c9                	test   %ecx,%ecx
  407cdc:	7d f9                	jge    0x407cd7
  407cde:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  407ce1:	8b 54 f9 04          	mov    0x4(%ecx,%edi,8),%edx
  407ce5:	8b 0a                	mov    (%edx),%ecx
  407ce7:	2b 4d f0             	sub    -0x10(%ebp),%ecx
  407cea:	8b f1                	mov    %ecx,%esi
  407cec:	c1 fe 04             	sar    $0x4,%esi
  407cef:	4e                   	dec    %esi
  407cf0:	83 fe 3f             	cmp    $0x3f,%esi
  407cf3:	89 4d f8             	mov    %ecx,-0x8(%ebp)
  407cf6:	7e 03                	jle    0x407cfb
  407cf8:	6a 3f                	push   $0x3f
  407cfa:	5e                   	pop    %esi
  407cfb:	3b f7                	cmp    %edi,%esi
  407cfd:	0f 84 01 01 00 00    	je     0x407e04
  407d03:	8b 4a 04             	mov    0x4(%edx),%ecx
  407d06:	3b 4a 08             	cmp    0x8(%edx),%ecx
  407d09:	75 5c                	jne    0x407d67
  407d0b:	83 ff 20             	cmp    $0x20,%edi
  407d0e:	bb 00 00 00 80       	mov    $0x80000000,%ebx
  407d13:	7d 26                	jge    0x407d3b
  407d15:	8b cf                	mov    %edi,%ecx
  407d17:	d3 eb                	shr    %cl,%ebx
  407d19:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  407d1c:	8d 7c 38 04          	lea    0x4(%eax,%edi,1),%edi
  407d20:	f7 d3                	not    %ebx
  407d22:	89 5d ec             	mov    %ebx,-0x14(%ebp)
  407d25:	23 5c 88 44          	and    0x44(%eax,%ecx,4),%ebx
  407d29:	89 5c 88 44          	mov    %ebx,0x44(%eax,%ecx,4)
  407d2d:	fe 0f                	decb   (%edi)
  407d2f:	75 33                	jne    0x407d64
  407d31:	8b 4d ec             	mov    -0x14(%ebp),%ecx
  407d34:	8b 5d 08             	mov    0x8(%ebp),%ebx
  407d37:	21 0b                	and    %ecx,(%ebx)
  407d39:	eb 2c                	jmp    0x407d67
  407d3b:	8d 4f e0             	lea    -0x20(%edi),%ecx
  407d3e:	d3 eb                	shr    %cl,%ebx
  407d40:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  407d43:	8d 8c 88 c4 00 00 00 	lea    0xc4(%eax,%ecx,4),%ecx
  407d4a:	8d 7c 38 04          	lea    0x4(%eax,%edi,1),%edi
  407d4e:	f7 d3                	not    %ebx
  407d50:	21 19                	and    %ebx,(%ecx)
  407d52:	fe 0f                	decb   (%edi)
  407d54:	89 5d ec             	mov    %ebx,-0x14(%ebp)
  407d57:	75 0b                	jne    0x407d64
  407d59:	8b 5d 08             	mov    0x8(%ebp),%ebx
  407d5c:	8b 4d ec             	mov    -0x14(%ebp),%ecx
  407d5f:	21 4b 04             	and    %ecx,0x4(%ebx)
  407d62:	eb 03                	jmp    0x407d67
  407d64:	8b 5d 08             	mov    0x8(%ebp),%ebx
  407d67:	83 7d f8 00          	cmpl   $0x0,-0x8(%ebp)
  407d6b:	8b 4a 08             	mov    0x8(%edx),%ecx
  407d6e:	8b 7a 04             	mov    0x4(%edx),%edi
  407d71:	89 79 04             	mov    %edi,0x4(%ecx)
  407d74:	8b 4a 04             	mov    0x4(%edx),%ecx
  407d77:	8b 7a 08             	mov    0x8(%edx),%edi
  407d7a:	89 79 08             	mov    %edi,0x8(%ecx)
  407d7d:	0f 84 8d 00 00 00    	je     0x407e10
  407d83:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  407d86:	8d 0c f1             	lea    (%ecx,%esi,8),%ecx
  407d89:	8b 79 04             	mov    0x4(%ecx),%edi
  407d8c:	89 4a 08             	mov    %ecx,0x8(%edx)
  407d8f:	89 7a 04             	mov    %edi,0x4(%edx)
  407d92:	89 51 04             	mov    %edx,0x4(%ecx)
  407d95:	8b 4a 04             	mov    0x4(%edx),%ecx
  407d98:	89 51 08             	mov    %edx,0x8(%ecx)
  407d9b:	8b 4a 04             	mov    0x4(%edx),%ecx
  407d9e:	3b 4a 08             	cmp    0x8(%edx),%ecx
  407da1:	75 5e                	jne    0x407e01
  407da3:	8a 4c 06 04          	mov    0x4(%esi,%eax,1),%cl
  407da7:	88 4d 0b             	mov    %cl,0xb(%ebp)
  407daa:	fe c1                	inc    %cl
  407dac:	83 fe 20             	cmp    $0x20,%esi
  407daf:	88 4c 06 04          	mov    %cl,0x4(%esi,%eax,1)
  407db3:	7d 23                	jge    0x407dd8
  407db5:	80 7d 0b 00          	cmpb   $0x0,0xb(%ebp)
  407db9:	75 0b                	jne    0x407dc6
  407dbb:	bf 00 00 00 80       	mov    $0x80000000,%edi
  407dc0:	8b ce                	mov    %esi,%ecx
  407dc2:	d3 ef                	shr    %cl,%edi
  407dc4:	09 3b                	or     %edi,(%ebx)
  407dc6:	8b ce                	mov    %esi,%ecx
  407dc8:	bf 00 00 00 80       	mov    $0x80000000,%edi
  407dcd:	d3 ef                	shr    %cl,%edi
  407dcf:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  407dd2:	09 7c 88 44          	or     %edi,0x44(%eax,%ecx,4)
  407dd6:	eb 29                	jmp    0x407e01
  407dd8:	80 7d 0b 00          	cmpb   $0x0,0xb(%ebp)
  407ddc:	75 0d                	jne    0x407deb
  407dde:	8d 4e e0             	lea    -0x20(%esi),%ecx
  407de1:	bf 00 00 00 80       	mov    $0x80000000,%edi
  407de6:	d3 ef                	shr    %cl,%edi
  407de8:	09 7b 04             	or     %edi,0x4(%ebx)
  407deb:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  407dee:	8d bc 88 c4 00 00 00 	lea    0xc4(%eax,%ecx,4),%edi
  407df5:	8d 4e e0             	lea    -0x20(%esi),%ecx
  407df8:	be 00 00 00 80       	mov    $0x80000000,%esi
  407dfd:	d3 ee                	shr    %cl,%esi
  407dff:	09 37                	or     %esi,(%edi)
  407e01:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  407e04:	85 c9                	test   %ecx,%ecx
  407e06:	74 0b                	je     0x407e13
  407e08:	89 0a                	mov    %ecx,(%edx)
  407e0a:	89 4c 11 fc          	mov    %ecx,-0x4(%ecx,%edx,1)
  407e0e:	eb 03                	jmp    0x407e13
  407e10:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  407e13:	8b 75 f0             	mov    -0x10(%ebp),%esi
  407e16:	03 d1                	add    %ecx,%edx
  407e18:	8d 4e 01             	lea    0x1(%esi),%ecx
  407e1b:	89 0a                	mov    %ecx,(%edx)
  407e1d:	89 4c 32 fc          	mov    %ecx,-0x4(%edx,%esi,1)
  407e21:	8b 75 f4             	mov    -0xc(%ebp),%esi
  407e24:	8b 0e                	mov    (%esi),%ecx
  407e26:	8d 79 01             	lea    0x1(%ecx),%edi
  407e29:	89 3e                	mov    %edi,(%esi)
  407e2b:	85 c9                	test   %ecx,%ecx
  407e2d:	75 1a                	jne    0x407e49
  407e2f:	3b 1d 6c f6 40 00    	cmp    0x40f66c,%ebx
  407e35:	75 12                	jne    0x407e49
  407e37:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  407e3a:	3b 0d 78 fa 40 00    	cmp    0x40fa78,%ecx
  407e40:	75 07                	jne    0x407e49
  407e42:	83 25 6c f6 40 00 00 	andl   $0x0,0x40f66c
  407e49:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  407e4c:	89 08                	mov    %ecx,(%eax)
  407e4e:	8d 42 04             	lea    0x4(%edx),%eax
  407e51:	5f                   	pop    %edi
  407e52:	5e                   	pop    %esi
  407e53:	5b                   	pop    %ebx
  407e54:	c9                   	leave  
  407e55:	c3                   	ret    
  407e56:	6a 0c                	push   $0xc
  407e58:	68 58 d6 40 00       	push   $0x40d658
  407e5d:	e8 0e a6 ff ff       	call   0x402470
  407e62:	83 65 e4 00          	andl   $0x0,-0x1c(%ebp)
  407e66:	8b 75 08             	mov    0x8(%ebp),%esi
  407e69:	3b 35 6c fa 40 00    	cmp    0x40fa6c,%esi
  407e6f:	77 22                	ja     0x407e93
  407e71:	6a 04                	push   $0x4
  407e73:	e8 12 d2 ff ff       	call   0x40508a
  407e78:	59                   	pop    %ecx
  407e79:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  407e7d:	56                   	push   %esi
  407e7e:	e8 ee fc ff ff       	call   0x407b71
  407e83:	59                   	pop    %ecx
  407e84:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  407e87:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  407e8e:	e8 09 00 00 00       	call   0x407e9c
  407e93:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  407e96:	e8 1a a6 ff ff       	call   0x4024b5
  407e9b:	c3                   	ret    
  407e9c:	6a 04                	push   $0x4
  407e9e:	e8 0d d1 ff ff       	call   0x404fb0
  407ea3:	59                   	pop    %ecx
  407ea4:	c3                   	ret    
  407ea5:	8b ff                	mov    %edi,%edi
  407ea7:	55                   	push   %ebp
  407ea8:	8b ec                	mov    %esp,%ebp
  407eaa:	56                   	push   %esi
  407eab:	8b 75 08             	mov    0x8(%ebp),%esi
  407eae:	83 fe e0             	cmp    $0xffffffe0,%esi
  407eb1:	0f 87 a1 00 00 00    	ja     0x407f58
  407eb7:	53                   	push   %ebx
  407eb8:	57                   	push   %edi
  407eb9:	8b 3d c0 c0 40 00    	mov    0x40c0c0,%edi
  407ebf:	83 3d 8c f4 40 00 00 	cmpl   $0x0,0x40f48c
  407ec6:	75 18                	jne    0x407ee0
  407ec8:	e8 49 bd ff ff       	call   0x403c16
  407ecd:	6a 1e                	push   $0x1e
  407ecf:	e8 97 bb ff ff       	call   0x403a6b
  407ed4:	68 ff 00 00 00       	push   $0xff
  407ed9:	e8 d9 b8 ff ff       	call   0x4037b7
  407ede:	59                   	pop    %ecx
  407edf:	59                   	pop    %ecx
  407ee0:	a1 80 fa 40 00       	mov    0x40fa80,%eax
  407ee5:	83 f8 01             	cmp    $0x1,%eax
  407ee8:	75 0e                	jne    0x407ef8
  407eea:	85 f6                	test   %esi,%esi
  407eec:	74 04                	je     0x407ef2
  407eee:	8b c6                	mov    %esi,%eax
  407ef0:	eb 03                	jmp    0x407ef5
  407ef2:	33 c0                	xor    %eax,%eax
  407ef4:	40                   	inc    %eax
  407ef5:	50                   	push   %eax
  407ef6:	eb 1c                	jmp    0x407f14
  407ef8:	83 f8 03             	cmp    $0x3,%eax
  407efb:	75 0b                	jne    0x407f08
  407efd:	56                   	push   %esi
  407efe:	e8 53 ff ff ff       	call   0x407e56
  407f03:	59                   	pop    %ecx
  407f04:	85 c0                	test   %eax,%eax
  407f06:	75 16                	jne    0x407f1e
  407f08:	85 f6                	test   %esi,%esi
  407f0a:	75 01                	jne    0x407f0d
  407f0c:	46                   	inc    %esi
  407f0d:	83 c6 0f             	add    $0xf,%esi
  407f10:	83 e6 f0             	and    $0xfffffff0,%esi
  407f13:	56                   	push   %esi
  407f14:	6a 00                	push   $0x0
  407f16:	ff 35 8c f4 40 00    	pushl  0x40f48c
  407f1c:	ff d7                	call   *%edi
  407f1e:	8b d8                	mov    %eax,%ebx
  407f20:	85 db                	test   %ebx,%ebx
  407f22:	75 2e                	jne    0x407f52
  407f24:	6a 0c                	push   $0xc
  407f26:	5e                   	pop    %esi
  407f27:	39 05 a4 f9 40 00    	cmp    %eax,0x40f9a4
  407f2d:	74 15                	je     0x407f44
  407f2f:	ff 75 08             	pushl  0x8(%ebp)
  407f32:	e8 83 f0 ff ff       	call   0x406fba
  407f37:	59                   	pop    %ecx
  407f38:	85 c0                	test   %eax,%eax
  407f3a:	74 0f                	je     0x407f4b
  407f3c:	8b 75 08             	mov    0x8(%ebp),%esi
  407f3f:	e9 7b ff ff ff       	jmp    0x407ebf
  407f44:	e8 dc a4 ff ff       	call   0x402425
  407f49:	89 30                	mov    %esi,(%eax)
  407f4b:	e8 d5 a4 ff ff       	call   0x402425
  407f50:	89 30                	mov    %esi,(%eax)
  407f52:	5f                   	pop    %edi
  407f53:	8b c3                	mov    %ebx,%eax
  407f55:	5b                   	pop    %ebx
  407f56:	eb 14                	jmp    0x407f6c
  407f58:	56                   	push   %esi
  407f59:	e8 5c f0 ff ff       	call   0x406fba
  407f5e:	59                   	pop    %ecx
  407f5f:	e8 c1 a4 ff ff       	call   0x402425
  407f64:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  407f6a:	33 c0                	xor    %eax,%eax
  407f6c:	5e                   	pop    %esi
  407f6d:	5d                   	pop    %ebp
  407f6e:	c3                   	ret    
  407f6f:	6a 0c                	push   $0xc
  407f71:	68 78 d6 40 00       	push   $0x40d678
  407f76:	e8 f5 a4 ff ff       	call   0x402470
  407f7b:	8b 4d 08             	mov    0x8(%ebp),%ecx
  407f7e:	33 ff                	xor    %edi,%edi
  407f80:	3b cf                	cmp    %edi,%ecx
  407f82:	76 2e                	jbe    0x407fb2
  407f84:	6a e0                	push   $0xffffffe0
  407f86:	58                   	pop    %eax
  407f87:	33 d2                	xor    %edx,%edx
  407f89:	f7 f1                	div    %ecx
  407f8b:	3b 45 0c             	cmp    0xc(%ebp),%eax
  407f8e:	1b c0                	sbb    %eax,%eax
  407f90:	40                   	inc    %eax
  407f91:	75 1f                	jne    0x407fb2
  407f93:	e8 8d a4 ff ff       	call   0x402425
  407f98:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  407f9e:	57                   	push   %edi
  407f9f:	57                   	push   %edi
  407fa0:	57                   	push   %edi
  407fa1:	57                   	push   %edi
  407fa2:	57                   	push   %edi
  407fa3:	e8 15 a4 ff ff       	call   0x4023bd
  407fa8:	83 c4 14             	add    $0x14,%esp
  407fab:	33 c0                	xor    %eax,%eax
  407fad:	e9 d5 00 00 00       	jmp    0x408087
  407fb2:	0f af 4d 0c          	imul   0xc(%ebp),%ecx
  407fb6:	8b f1                	mov    %ecx,%esi
  407fb8:	89 75 08             	mov    %esi,0x8(%ebp)
  407fbb:	3b f7                	cmp    %edi,%esi
  407fbd:	75 03                	jne    0x407fc2
  407fbf:	33 f6                	xor    %esi,%esi
  407fc1:	46                   	inc    %esi
  407fc2:	33 db                	xor    %ebx,%ebx
  407fc4:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
  407fc7:	83 fe e0             	cmp    $0xffffffe0,%esi
  407fca:	77 69                	ja     0x408035
  407fcc:	83 3d 80 fa 40 00 03 	cmpl   $0x3,0x40fa80
  407fd3:	75 4b                	jne    0x408020
  407fd5:	83 c6 0f             	add    $0xf,%esi
  407fd8:	83 e6 f0             	and    $0xfffffff0,%esi
  407fdb:	89 75 0c             	mov    %esi,0xc(%ebp)
  407fde:	8b 45 08             	mov    0x8(%ebp),%eax
  407fe1:	3b 05 6c fa 40 00    	cmp    0x40fa6c,%eax
  407fe7:	77 37                	ja     0x408020
  407fe9:	6a 04                	push   $0x4
  407feb:	e8 9a d0 ff ff       	call   0x40508a
  407ff0:	59                   	pop    %ecx
  407ff1:	89 7d fc             	mov    %edi,-0x4(%ebp)
  407ff4:	ff 75 08             	pushl  0x8(%ebp)
  407ff7:	e8 75 fb ff ff       	call   0x407b71
  407ffc:	59                   	pop    %ecx
  407ffd:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  408000:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  408007:	e8 5f 00 00 00       	call   0x40806b
  40800c:	8b 5d e4             	mov    -0x1c(%ebp),%ebx
  40800f:	3b df                	cmp    %edi,%ebx
  408011:	74 11                	je     0x408024
  408013:	ff 75 08             	pushl  0x8(%ebp)
  408016:	57                   	push   %edi
  408017:	53                   	push   %ebx
  408018:	e8 d3 df ff ff       	call   0x405ff0
  40801d:	83 c4 0c             	add    $0xc,%esp
  408020:	3b df                	cmp    %edi,%ebx
  408022:	75 61                	jne    0x408085
  408024:	56                   	push   %esi
  408025:	6a 08                	push   $0x8
  408027:	ff 35 8c f4 40 00    	pushl  0x40f48c
  40802d:	ff 15 c0 c0 40 00    	call   *0x40c0c0
  408033:	8b d8                	mov    %eax,%ebx
  408035:	3b df                	cmp    %edi,%ebx
  408037:	75 4c                	jne    0x408085
  408039:	39 3d a4 f9 40 00    	cmp    %edi,0x40f9a4
  40803f:	74 33                	je     0x408074
  408041:	56                   	push   %esi
  408042:	e8 73 ef ff ff       	call   0x406fba
  408047:	59                   	pop    %ecx
  408048:	85 c0                	test   %eax,%eax
  40804a:	0f 85 72 ff ff ff    	jne    0x407fc2
  408050:	8b 45 10             	mov    0x10(%ebp),%eax
  408053:	3b c7                	cmp    %edi,%eax
  408055:	0f 84 50 ff ff ff    	je     0x407fab
  40805b:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  408061:	e9 45 ff ff ff       	jmp    0x407fab
  408066:	33 ff                	xor    %edi,%edi
  408068:	8b 75 0c             	mov    0xc(%ebp),%esi
  40806b:	6a 04                	push   $0x4
  40806d:	e8 3e cf ff ff       	call   0x404fb0
  408072:	59                   	pop    %ecx
  408073:	c3                   	ret    
  408074:	3b df                	cmp    %edi,%ebx
  408076:	75 0d                	jne    0x408085
  408078:	8b 45 10             	mov    0x10(%ebp),%eax
  40807b:	3b c7                	cmp    %edi,%eax
  40807d:	74 06                	je     0x408085
  40807f:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  408085:	8b c3                	mov    %ebx,%eax
  408087:	e8 29 a4 ff ff       	call   0x4024b5
  40808c:	c3                   	ret    
  40808d:	6a 10                	push   $0x10
  40808f:	68 98 d6 40 00       	push   $0x40d698
  408094:	e8 d7 a3 ff ff       	call   0x402470
  408099:	8b 5d 08             	mov    0x8(%ebp),%ebx
  40809c:	85 db                	test   %ebx,%ebx
  40809e:	75 0e                	jne    0x4080ae
  4080a0:	ff 75 0c             	pushl  0xc(%ebp)
  4080a3:	e8 fd fd ff ff       	call   0x407ea5
  4080a8:	59                   	pop    %ecx
  4080a9:	e9 cc 01 00 00       	jmp    0x40827a
  4080ae:	8b 75 0c             	mov    0xc(%ebp),%esi
  4080b1:	85 f6                	test   %esi,%esi
  4080b3:	75 0c                	jne    0x4080c1
  4080b5:	53                   	push   %ebx
  4080b6:	e8 93 cb ff ff       	call   0x404c4e
  4080bb:	59                   	pop    %ecx
  4080bc:	e9 b7 01 00 00       	jmp    0x408278
  4080c1:	83 3d 80 fa 40 00 03 	cmpl   $0x3,0x40fa80
  4080c8:	0f 85 93 01 00 00    	jne    0x408261
  4080ce:	33 ff                	xor    %edi,%edi
  4080d0:	89 7d e4             	mov    %edi,-0x1c(%ebp)
  4080d3:	83 fe e0             	cmp    $0xffffffe0,%esi
  4080d6:	0f 87 8a 01 00 00    	ja     0x408266
  4080dc:	6a 04                	push   $0x4
  4080de:	e8 a7 cf ff ff       	call   0x40508a
  4080e3:	59                   	pop    %ecx
  4080e4:	89 7d fc             	mov    %edi,-0x4(%ebp)
  4080e7:	53                   	push   %ebx
  4080e8:	e8 a5 f2 ff ff       	call   0x407392
  4080ed:	59                   	pop    %ecx
  4080ee:	89 45 e0             	mov    %eax,-0x20(%ebp)
  4080f1:	3b c7                	cmp    %edi,%eax
  4080f3:	0f 84 9e 00 00 00    	je     0x408197
  4080f9:	3b 35 6c fa 40 00    	cmp    0x40fa6c,%esi
  4080ff:	77 49                	ja     0x40814a
  408101:	56                   	push   %esi
  408102:	53                   	push   %ebx
  408103:	50                   	push   %eax
  408104:	e8 87 f7 ff ff       	call   0x407890
  408109:	83 c4 0c             	add    $0xc,%esp
  40810c:	85 c0                	test   %eax,%eax
  40810e:	74 05                	je     0x408115
  408110:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
  408113:	eb 35                	jmp    0x40814a
  408115:	56                   	push   %esi
  408116:	e8 56 fa ff ff       	call   0x407b71
  40811b:	59                   	pop    %ecx
  40811c:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  40811f:	3b c7                	cmp    %edi,%eax
  408121:	74 27                	je     0x40814a
  408123:	8b 43 fc             	mov    -0x4(%ebx),%eax
  408126:	48                   	dec    %eax
  408127:	3b c6                	cmp    %esi,%eax
  408129:	72 02                	jb     0x40812d
  40812b:	8b c6                	mov    %esi,%eax
  40812d:	50                   	push   %eax
  40812e:	53                   	push   %ebx
  40812f:	ff 75 e4             	pushl  -0x1c(%ebp)
  408132:	e8 d9 e1 ff ff       	call   0x406310
  408137:	53                   	push   %ebx
  408138:	e8 55 f2 ff ff       	call   0x407392
  40813d:	89 45 e0             	mov    %eax,-0x20(%ebp)
  408140:	53                   	push   %ebx
  408141:	50                   	push   %eax
  408142:	e8 7b f2 ff ff       	call   0x4073c2
  408147:	83 c4 18             	add    $0x18,%esp
  40814a:	39 7d e4             	cmp    %edi,-0x1c(%ebp)
  40814d:	75 48                	jne    0x408197
  40814f:	3b f7                	cmp    %edi,%esi
  408151:	75 06                	jne    0x408159
  408153:	33 f6                	xor    %esi,%esi
  408155:	46                   	inc    %esi
  408156:	89 75 0c             	mov    %esi,0xc(%ebp)
  408159:	83 c6 0f             	add    $0xf,%esi
  40815c:	83 e6 f0             	and    $0xfffffff0,%esi
  40815f:	89 75 0c             	mov    %esi,0xc(%ebp)
  408162:	56                   	push   %esi
  408163:	57                   	push   %edi
  408164:	ff 35 8c f4 40 00    	pushl  0x40f48c
  40816a:	ff 15 c0 c0 40 00    	call   *0x40c0c0
  408170:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  408173:	3b c7                	cmp    %edi,%eax
  408175:	74 20                	je     0x408197
  408177:	8b 43 fc             	mov    -0x4(%ebx),%eax
  40817a:	48                   	dec    %eax
  40817b:	3b c6                	cmp    %esi,%eax
  40817d:	72 02                	jb     0x408181
  40817f:	8b c6                	mov    %esi,%eax
  408181:	50                   	push   %eax
  408182:	53                   	push   %ebx
  408183:	ff 75 e4             	pushl  -0x1c(%ebp)
  408186:	e8 85 e1 ff ff       	call   0x406310
  40818b:	53                   	push   %ebx
  40818c:	ff 75 e0             	pushl  -0x20(%ebp)
  40818f:	e8 2e f2 ff ff       	call   0x4073c2
  408194:	83 c4 14             	add    $0x14,%esp
  408197:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40819e:	e8 2e 00 00 00       	call   0x4081d1
  4081a3:	83 7d e0 00          	cmpl   $0x0,-0x20(%ebp)
  4081a7:	75 31                	jne    0x4081da
  4081a9:	85 f6                	test   %esi,%esi
  4081ab:	75 01                	jne    0x4081ae
  4081ad:	46                   	inc    %esi
  4081ae:	83 c6 0f             	add    $0xf,%esi
  4081b1:	83 e6 f0             	and    $0xfffffff0,%esi
  4081b4:	89 75 0c             	mov    %esi,0xc(%ebp)
  4081b7:	56                   	push   %esi
  4081b8:	53                   	push   %ebx
  4081b9:	6a 00                	push   $0x0
  4081bb:	ff 35 8c f4 40 00    	pushl  0x40f48c
  4081c1:	ff 15 c8 c0 40 00    	call   *0x40c0c8
  4081c7:	8b f8                	mov    %eax,%edi
  4081c9:	eb 12                	jmp    0x4081dd
  4081cb:	8b 75 0c             	mov    0xc(%ebp),%esi
  4081ce:	8b 5d 08             	mov    0x8(%ebp),%ebx
  4081d1:	6a 04                	push   $0x4
  4081d3:	e8 d8 cd ff ff       	call   0x404fb0
  4081d8:	59                   	pop    %ecx
  4081d9:	c3                   	ret    
  4081da:	8b 7d e4             	mov    -0x1c(%ebp),%edi
  4081dd:	85 ff                	test   %edi,%edi
  4081df:	0f 85 bf 00 00 00    	jne    0x4082a4
  4081e5:	39 3d a4 f9 40 00    	cmp    %edi,0x40f9a4
  4081eb:	74 2c                	je     0x408219
  4081ed:	56                   	push   %esi
  4081ee:	e8 c7 ed ff ff       	call   0x406fba
  4081f3:	59                   	pop    %ecx
  4081f4:	85 c0                	test   %eax,%eax
  4081f6:	0f 85 d2 fe ff ff    	jne    0x4080ce
  4081fc:	e8 24 a2 ff ff       	call   0x402425
  408201:	39 7d e0             	cmp    %edi,-0x20(%ebp)
  408204:	75 6c                	jne    0x408272
  408206:	8b f0                	mov    %eax,%esi
  408208:	ff 15 4c c0 40 00    	call   *0x40c04c
  40820e:	50                   	push   %eax
  40820f:	e8 cf a1 ff ff       	call   0x4023e3
  408214:	59                   	pop    %ecx
  408215:	89 06                	mov    %eax,(%esi)
  408217:	eb 5f                	jmp    0x408278
  408219:	85 ff                	test   %edi,%edi
  40821b:	0f 85 83 00 00 00    	jne    0x4082a4
  408221:	e8 ff a1 ff ff       	call   0x402425
  408226:	39 7d e0             	cmp    %edi,-0x20(%ebp)
  408229:	74 68                	je     0x408293
  40822b:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  408231:	eb 71                	jmp    0x4082a4
  408233:	85 f6                	test   %esi,%esi
  408235:	75 01                	jne    0x408238
  408237:	46                   	inc    %esi
  408238:	56                   	push   %esi
  408239:	53                   	push   %ebx
  40823a:	6a 00                	push   $0x0
  40823c:	ff 35 8c f4 40 00    	pushl  0x40f48c
  408242:	ff 15 c8 c0 40 00    	call   *0x40c0c8
  408248:	8b f8                	mov    %eax,%edi
  40824a:	85 ff                	test   %edi,%edi
  40824c:	75 56                	jne    0x4082a4
  40824e:	39 05 a4 f9 40 00    	cmp    %eax,0x40f9a4
  408254:	74 34                	je     0x40828a
  408256:	56                   	push   %esi
  408257:	e8 5e ed ff ff       	call   0x406fba
  40825c:	59                   	pop    %ecx
  40825d:	85 c0                	test   %eax,%eax
  40825f:	74 1f                	je     0x408280
  408261:	83 fe e0             	cmp    $0xffffffe0,%esi
  408264:	76 cd                	jbe    0x408233
  408266:	56                   	push   %esi
  408267:	e8 4e ed ff ff       	call   0x406fba
  40826c:	59                   	pop    %ecx
  40826d:	e8 b3 a1 ff ff       	call   0x402425
  408272:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  408278:	33 c0                	xor    %eax,%eax
  40827a:	e8 36 a2 ff ff       	call   0x4024b5
  40827f:	c3                   	ret    
  408280:	e8 a0 a1 ff ff       	call   0x402425
  408285:	e9 7c ff ff ff       	jmp    0x408206
  40828a:	85 ff                	test   %edi,%edi
  40828c:	75 16                	jne    0x4082a4
  40828e:	e8 92 a1 ff ff       	call   0x402425
  408293:	8b f0                	mov    %eax,%esi
  408295:	ff 15 4c c0 40 00    	call   *0x40c04c
  40829b:	50                   	push   %eax
  40829c:	e8 42 a1 ff ff       	call   0x4023e3
  4082a1:	89 06                	mov    %eax,(%esi)
  4082a3:	59                   	pop    %ecx
  4082a4:	8b c7                	mov    %edi,%eax
  4082a6:	eb d2                	jmp    0x40827a
  4082a8:	8b ff                	mov    %edi,%edi
  4082aa:	55                   	push   %ebp
  4082ab:	8b ec                	mov    %esp,%ebp
  4082ad:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  4082b0:	53                   	push   %ebx
  4082b1:	33 db                	xor    %ebx,%ebx
  4082b3:	3b cb                	cmp    %ebx,%ecx
  4082b5:	76 28                	jbe    0x4082df
  4082b7:	6a e0                	push   $0xffffffe0
  4082b9:	33 d2                	xor    %edx,%edx
  4082bb:	58                   	pop    %eax
  4082bc:	f7 f1                	div    %ecx
  4082be:	3b 45 10             	cmp    0x10(%ebp),%eax
  4082c1:	73 1c                	jae    0x4082df
  4082c3:	e8 5d a1 ff ff       	call   0x402425
  4082c8:	53                   	push   %ebx
  4082c9:	53                   	push   %ebx
  4082ca:	53                   	push   %ebx
  4082cb:	53                   	push   %ebx
  4082cc:	53                   	push   %ebx
  4082cd:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  4082d3:	e8 e5 a0 ff ff       	call   0x4023bd
  4082d8:	83 c4 14             	add    $0x14,%esp
  4082db:	33 c0                	xor    %eax,%eax
  4082dd:	eb 41                	jmp    0x408320
  4082df:	0f af 4d 10          	imul   0x10(%ebp),%ecx
  4082e3:	56                   	push   %esi
  4082e4:	57                   	push   %edi
  4082e5:	8b f1                	mov    %ecx,%esi
  4082e7:	39 5d 08             	cmp    %ebx,0x8(%ebp)
  4082ea:	74 0b                	je     0x4082f7
  4082ec:	ff 75 08             	pushl  0x8(%ebp)
  4082ef:	e8 d1 25 00 00       	call   0x40a8c5
  4082f4:	59                   	pop    %ecx
  4082f5:	8b d8                	mov    %eax,%ebx
  4082f7:	56                   	push   %esi
  4082f8:	ff 75 08             	pushl  0x8(%ebp)
  4082fb:	e8 8d fd ff ff       	call   0x40808d
  408300:	8b f8                	mov    %eax,%edi
  408302:	59                   	pop    %ecx
  408303:	59                   	pop    %ecx
  408304:	85 ff                	test   %edi,%edi
  408306:	74 14                	je     0x40831c
  408308:	3b de                	cmp    %esi,%ebx
  40830a:	73 10                	jae    0x40831c
  40830c:	2b f3                	sub    %ebx,%esi
  40830e:	56                   	push   %esi
  40830f:	6a 00                	push   $0x0
  408311:	03 df                	add    %edi,%ebx
  408313:	53                   	push   %ebx
  408314:	e8 d7 dc ff ff       	call   0x405ff0
  408319:	83 c4 0c             	add    $0xc,%esp
  40831c:	8b c7                	mov    %edi,%eax
  40831e:	5f                   	pop    %edi
  40831f:	5e                   	pop    %esi
  408320:	5b                   	pop    %ebx
  408321:	5d                   	pop    %ebp
  408322:	c3                   	ret    
  408323:	8b ff                	mov    %edi,%edi
  408325:	55                   	push   %ebp
  408326:	8b ec                	mov    %esp,%ebp
  408328:	53                   	push   %ebx
  408329:	56                   	push   %esi
  40832a:	8b 75 08             	mov    0x8(%ebp),%esi
  40832d:	57                   	push   %edi
  40832e:	33 ff                	xor    %edi,%edi
  408330:	83 cb ff             	or     $0xffffffff,%ebx
  408333:	3b f7                	cmp    %edi,%esi
  408335:	75 1c                	jne    0x408353
  408337:	e8 e9 a0 ff ff       	call   0x402425
  40833c:	57                   	push   %edi
  40833d:	57                   	push   %edi
  40833e:	57                   	push   %edi
  40833f:	57                   	push   %edi
  408340:	57                   	push   %edi
  408341:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  408347:	e8 71 a0 ff ff       	call   0x4023bd
  40834c:	83 c4 14             	add    $0x14,%esp
  40834f:	0b c3                	or     %ebx,%eax
  408351:	eb 42                	jmp    0x408395
  408353:	f6 46 0c 83          	testb  $0x83,0xc(%esi)
  408357:	74 37                	je     0x408390
  408359:	56                   	push   %esi
  40835a:	e8 1c ca ff ff       	call   0x404d7b
  40835f:	56                   	push   %esi
  408360:	8b d8                	mov    %eax,%ebx
  408362:	e8 d7 2a 00 00       	call   0x40ae3e
  408367:	56                   	push   %esi
  408368:	e8 b4 cd ff ff       	call   0x405121
  40836d:	50                   	push   %eax
  40836e:	e8 fe 29 00 00       	call   0x40ad71
  408373:	83 c4 10             	add    $0x10,%esp
  408376:	85 c0                	test   %eax,%eax
  408378:	7d 05                	jge    0x40837f
  40837a:	83 cb ff             	or     $0xffffffff,%ebx
  40837d:	eb 11                	jmp    0x408390
  40837f:	8b 46 1c             	mov    0x1c(%esi),%eax
  408382:	3b c7                	cmp    %edi,%eax
  408384:	74 0a                	je     0x408390
  408386:	50                   	push   %eax
  408387:	e8 c2 c8 ff ff       	call   0x404c4e
  40838c:	59                   	pop    %ecx
  40838d:	89 7e 1c             	mov    %edi,0x1c(%esi)
  408390:	89 7e 0c             	mov    %edi,0xc(%esi)
  408393:	8b c3                	mov    %ebx,%eax
  408395:	5f                   	pop    %edi
  408396:	5e                   	pop    %esi
  408397:	5b                   	pop    %ebx
  408398:	5d                   	pop    %ebp
  408399:	c3                   	ret    
  40839a:	6a 0c                	push   $0xc
  40839c:	68 b8 d6 40 00       	push   $0x40d6b8
  4083a1:	e8 ca a0 ff ff       	call   0x402470
  4083a6:	83 4d e4 ff          	orl    $0xffffffff,-0x1c(%ebp)
  4083aa:	33 c0                	xor    %eax,%eax
  4083ac:	8b 75 08             	mov    0x8(%ebp),%esi
  4083af:	33 ff                	xor    %edi,%edi
  4083b1:	3b f7                	cmp    %edi,%esi
  4083b3:	0f 95 c0             	setne  %al
  4083b6:	3b c7                	cmp    %edi,%eax
  4083b8:	75 1d                	jne    0x4083d7
  4083ba:	e8 66 a0 ff ff       	call   0x402425
  4083bf:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  4083c5:	57                   	push   %edi
  4083c6:	57                   	push   %edi
  4083c7:	57                   	push   %edi
  4083c8:	57                   	push   %edi
  4083c9:	57                   	push   %edi
  4083ca:	e8 ee 9f ff ff       	call   0x4023bd
  4083cf:	83 c4 14             	add    $0x14,%esp
  4083d2:	83 c8 ff             	or     $0xffffffff,%eax
  4083d5:	eb 0c                	jmp    0x4083e3
  4083d7:	f6 46 0c 40          	testb  $0x40,0xc(%esi)
  4083db:	74 0c                	je     0x4083e9
  4083dd:	89 7e 0c             	mov    %edi,0xc(%esi)
  4083e0:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  4083e3:	e8 cd a0 ff ff       	call   0x4024b5
  4083e8:	c3                   	ret    
  4083e9:	56                   	push   %esi
  4083ea:	e8 24 90 ff ff       	call   0x401413
  4083ef:	59                   	pop    %ecx
  4083f0:	89 7d fc             	mov    %edi,-0x4(%ebp)
  4083f3:	56                   	push   %esi
  4083f4:	e8 2a ff ff ff       	call   0x408323
  4083f9:	59                   	pop    %ecx
  4083fa:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  4083fd:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  408404:	e8 05 00 00 00       	call   0x40840e
  408409:	eb d5                	jmp    0x4083e0
  40840b:	8b 75 08             	mov    0x8(%ebp),%esi
  40840e:	56                   	push   %esi
  40840f:	e8 72 90 ff ff       	call   0x401486
  408414:	59                   	pop    %ecx
  408415:	c3                   	ret    
  408416:	8b ff                	mov    %edi,%edi
  408418:	55                   	push   %ebp
  408419:	8b ec                	mov    %esp,%ebp
  40841b:	b8 e4 1a 00 00       	mov    $0x1ae4,%eax
  408420:	e8 1b 2b 00 00       	call   0x40af40
  408425:	a1 00 e4 40 00       	mov    0x40e400,%eax
  40842a:	33 c5                	xor    %ebp,%eax
  40842c:	89 45 fc             	mov    %eax,-0x4(%ebp)
  40842f:	8b 45 0c             	mov    0xc(%ebp),%eax
  408432:	56                   	push   %esi
  408433:	33 f6                	xor    %esi,%esi
  408435:	89 85 34 e5 ff ff    	mov    %eax,-0x1acc(%ebp)
  40843b:	89 b5 38 e5 ff ff    	mov    %esi,-0x1ac8(%ebp)
  408441:	89 b5 30 e5 ff ff    	mov    %esi,-0x1ad0(%ebp)
  408447:	39 75 10             	cmp    %esi,0x10(%ebp)
  40844a:	75 07                	jne    0x408453
  40844c:	33 c0                	xor    %eax,%eax
  40844e:	e9 e9 06 00 00       	jmp    0x408b3c
  408453:	3b c6                	cmp    %esi,%eax
  408455:	75 27                	jne    0x40847e
  408457:	e8 dc 9f ff ff       	call   0x402438
  40845c:	89 30                	mov    %esi,(%eax)
  40845e:	e8 c2 9f ff ff       	call   0x402425
  408463:	56                   	push   %esi
  408464:	56                   	push   %esi
  408465:	56                   	push   %esi
  408466:	56                   	push   %esi
  408467:	56                   	push   %esi
  408468:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  40846e:	e8 4a 9f ff ff       	call   0x4023bd
  408473:	83 c4 14             	add    $0x14,%esp
  408476:	83 c8 ff             	or     $0xffffffff,%eax
  408479:	e9 be 06 00 00       	jmp    0x408b3c
  40847e:	53                   	push   %ebx
  40847f:	57                   	push   %edi
  408480:	8b 7d 08             	mov    0x8(%ebp),%edi
  408483:	8b c7                	mov    %edi,%eax
  408485:	c1 f8 05             	sar    $0x5,%eax
  408488:	8d 34 85 a0 fa 40 00 	lea    0x40faa0(,%eax,4),%esi
  40848f:	8b 06                	mov    (%esi),%eax
  408491:	83 e7 1f             	and    $0x1f,%edi
  408494:	c1 e7 06             	shl    $0x6,%edi
  408497:	03 c7                	add    %edi,%eax
  408499:	8a 58 24             	mov    0x24(%eax),%bl
  40849c:	02 db                	add    %bl,%bl
  40849e:	d0 fb                	sar    %bl
  4084a0:	89 b5 28 e5 ff ff    	mov    %esi,-0x1ad8(%ebp)
  4084a6:	88 9d 27 e5 ff ff    	mov    %bl,-0x1ad9(%ebp)
  4084ac:	80 fb 02             	cmp    $0x2,%bl
  4084af:	74 05                	je     0x4084b6
  4084b1:	80 fb 01             	cmp    $0x1,%bl
  4084b4:	75 30                	jne    0x4084e6
  4084b6:	8b 4d 10             	mov    0x10(%ebp),%ecx
  4084b9:	f7 d1                	not    %ecx
  4084bb:	f6 c1 01             	test   $0x1,%cl
  4084be:	75 26                	jne    0x4084e6
  4084c0:	e8 73 9f ff ff       	call   0x402438
  4084c5:	33 f6                	xor    %esi,%esi
  4084c7:	89 30                	mov    %esi,(%eax)
  4084c9:	e8 57 9f ff ff       	call   0x402425
  4084ce:	56                   	push   %esi
  4084cf:	56                   	push   %esi
  4084d0:	56                   	push   %esi
  4084d1:	56                   	push   %esi
  4084d2:	56                   	push   %esi
  4084d3:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  4084d9:	e8 df 9e ff ff       	call   0x4023bd
  4084de:	83 c4 14             	add    $0x14,%esp
  4084e1:	e9 43 06 00 00       	jmp    0x408b29
  4084e6:	f6 40 04 20          	testb  $0x20,0x4(%eax)
  4084ea:	74 11                	je     0x4084fd
  4084ec:	6a 02                	push   $0x2
  4084ee:	6a 00                	push   $0x0
  4084f0:	6a 00                	push   $0x0
  4084f2:	ff 75 08             	pushl  0x8(%ebp)
  4084f5:	e8 a6 11 00 00       	call   0x4096a0
  4084fa:	83 c4 10             	add    $0x10,%esp
  4084fd:	ff 75 08             	pushl  0x8(%ebp)
  408500:	e8 b8 cb ff ff       	call   0x4050bd
  408505:	59                   	pop    %ecx
  408506:	85 c0                	test   %eax,%eax
  408508:	0f 84 9d 02 00 00    	je     0x4087ab
  40850e:	8b 06                	mov    (%esi),%eax
  408510:	f6 44 07 04 80       	testb  $0x80,0x4(%edi,%eax,1)
  408515:	0f 84 90 02 00 00    	je     0x4087ab
  40851b:	e8 61 c2 ff ff       	call   0x404781
  408520:	8b 40 6c             	mov    0x6c(%eax),%eax
  408523:	33 c9                	xor    %ecx,%ecx
  408525:	39 48 14             	cmp    %ecx,0x14(%eax)
  408528:	8d 85 1c e5 ff ff    	lea    -0x1ae4(%ebp),%eax
  40852e:	0f 94 c1             	sete   %cl
  408531:	50                   	push   %eax
  408532:	8b 06                	mov    (%esi),%eax
  408534:	ff 34 07             	pushl  (%edi,%eax,1)
  408537:	89 8d 20 e5 ff ff    	mov    %ecx,-0x1ae0(%ebp)
  40853d:	ff 15 d0 c0 40 00    	call   *0x40c0d0
  408543:	85 c0                	test   %eax,%eax
  408545:	0f 84 60 02 00 00    	je     0x4087ab
  40854b:	33 c9                	xor    %ecx,%ecx
  40854d:	39 8d 20 e5 ff ff    	cmp    %ecx,-0x1ae0(%ebp)
  408553:	74 08                	je     0x40855d
  408555:	84 db                	test   %bl,%bl
  408557:	0f 84 50 02 00 00    	je     0x4087ad
  40855d:	ff 15 cc c0 40 00    	call   *0x40c0cc
  408563:	8b 9d 34 e5 ff ff    	mov    -0x1acc(%ebp),%ebx
  408569:	89 85 1c e5 ff ff    	mov    %eax,-0x1ae4(%ebp)
  40856f:	33 c0                	xor    %eax,%eax
  408571:	89 85 3c e5 ff ff    	mov    %eax,-0x1ac4(%ebp)
  408577:	39 45 10             	cmp    %eax,0x10(%ebp)
  40857a:	0f 86 42 05 00 00    	jbe    0x408ac2
  408580:	89 85 44 e5 ff ff    	mov    %eax,-0x1abc(%ebp)
  408586:	8a 85 27 e5 ff ff    	mov    -0x1ad9(%ebp),%al
  40858c:	84 c0                	test   %al,%al
  40858e:	0f 85 67 01 00 00    	jne    0x4086fb
  408594:	8a 0b                	mov    (%ebx),%cl
  408596:	8b b5 28 e5 ff ff    	mov    -0x1ad8(%ebp),%esi
  40859c:	33 c0                	xor    %eax,%eax
  40859e:	80 f9 0a             	cmp    $0xa,%cl
  4085a1:	0f 94 c0             	sete   %al
  4085a4:	89 85 20 e5 ff ff    	mov    %eax,-0x1ae0(%ebp)
  4085aa:	8b 06                	mov    (%esi),%eax
  4085ac:	03 c7                	add    %edi,%eax
  4085ae:	83 78 38 00          	cmpl   $0x0,0x38(%eax)
  4085b2:	74 15                	je     0x4085c9
  4085b4:	8a 50 34             	mov    0x34(%eax),%dl
  4085b7:	88 55 f4             	mov    %dl,-0xc(%ebp)
  4085ba:	88 4d f5             	mov    %cl,-0xb(%ebp)
  4085bd:	83 60 38 00          	andl   $0x0,0x38(%eax)
  4085c1:	6a 02                	push   $0x2
  4085c3:	8d 45 f4             	lea    -0xc(%ebp),%eax
  4085c6:	50                   	push   %eax
  4085c7:	eb 4b                	jmp    0x408614
  4085c9:	0f be c1             	movsbl %cl,%eax
  4085cc:	50                   	push   %eax
  4085cd:	e8 5a d9 ff ff       	call   0x405f2c
  4085d2:	59                   	pop    %ecx
  4085d3:	85 c0                	test   %eax,%eax
  4085d5:	74 3a                	je     0x408611
  4085d7:	8b 8d 34 e5 ff ff    	mov    -0x1acc(%ebp),%ecx
  4085dd:	2b cb                	sub    %ebx,%ecx
  4085df:	03 4d 10             	add    0x10(%ebp),%ecx
  4085e2:	33 c0                	xor    %eax,%eax
  4085e4:	40                   	inc    %eax
  4085e5:	3b c8                	cmp    %eax,%ecx
  4085e7:	0f 86 a5 01 00 00    	jbe    0x408792
  4085ed:	6a 02                	push   $0x2
  4085ef:	8d 85 40 e5 ff ff    	lea    -0x1ac0(%ebp),%eax
  4085f5:	53                   	push   %ebx
  4085f6:	50                   	push   %eax
  4085f7:	e8 30 e5 ff ff       	call   0x406b2c
  4085fc:	83 c4 0c             	add    $0xc,%esp
  4085ff:	83 f8 ff             	cmp    $0xffffffff,%eax
  408602:	0f 84 b1 04 00 00    	je     0x408ab9
  408608:	43                   	inc    %ebx
  408609:	ff 85 44 e5 ff ff    	incl   -0x1abc(%ebp)
  40860f:	eb 1b                	jmp    0x40862c
  408611:	6a 01                	push   $0x1
  408613:	53                   	push   %ebx
  408614:	8d 85 40 e5 ff ff    	lea    -0x1ac0(%ebp),%eax
  40861a:	50                   	push   %eax
  40861b:	e8 0c e5 ff ff       	call   0x406b2c
  408620:	83 c4 0c             	add    $0xc,%esp
  408623:	83 f8 ff             	cmp    $0xffffffff,%eax
  408626:	0f 84 8d 04 00 00    	je     0x408ab9
  40862c:	33 c0                	xor    %eax,%eax
  40862e:	50                   	push   %eax
  40862f:	50                   	push   %eax
  408630:	6a 05                	push   $0x5
  408632:	8d 4d f4             	lea    -0xc(%ebp),%ecx
  408635:	51                   	push   %ecx
  408636:	6a 01                	push   $0x1
  408638:	8d 8d 40 e5 ff ff    	lea    -0x1ac0(%ebp),%ecx
  40863e:	51                   	push   %ecx
  40863f:	50                   	push   %eax
  408640:	ff b5 1c e5 ff ff    	pushl  -0x1ae4(%ebp)
  408646:	43                   	inc    %ebx
  408647:	ff 85 44 e5 ff ff    	incl   -0x1abc(%ebp)
  40864d:	ff 15 48 c0 40 00    	call   *0x40c048
  408653:	8b f0                	mov    %eax,%esi
  408655:	85 f6                	test   %esi,%esi
  408657:	0f 84 5c 04 00 00    	je     0x408ab9
  40865d:	6a 00                	push   $0x0
  40865f:	8d 85 3c e5 ff ff    	lea    -0x1ac4(%ebp),%eax
  408665:	50                   	push   %eax
  408666:	56                   	push   %esi
  408667:	8d 45 f4             	lea    -0xc(%ebp),%eax
  40866a:	50                   	push   %eax
  40866b:	8b 85 28 e5 ff ff    	mov    -0x1ad8(%ebp),%eax
  408671:	8b 00                	mov    (%eax),%eax
  408673:	ff 34 07             	pushl  (%edi,%eax,1)
  408676:	ff 15 30 c0 40 00    	call   *0x40c030
  40867c:	85 c0                	test   %eax,%eax
  40867e:	0f 84 29 04 00 00    	je     0x408aad
  408684:	8b 85 44 e5 ff ff    	mov    -0x1abc(%ebp),%eax
  40868a:	8b 8d 30 e5 ff ff    	mov    -0x1ad0(%ebp),%ecx
  408690:	03 c1                	add    %ecx,%eax
  408692:	39 b5 3c e5 ff ff    	cmp    %esi,-0x1ac4(%ebp)
  408698:	89 85 38 e5 ff ff    	mov    %eax,-0x1ac8(%ebp)
  40869e:	0f 8c 15 04 00 00    	jl     0x408ab9
  4086a4:	83 bd 20 e5 ff ff 00 	cmpl   $0x0,-0x1ae0(%ebp)
  4086ab:	0f 84 cd 00 00 00    	je     0x40877e
  4086b1:	6a 00                	push   $0x0
  4086b3:	8d 85 3c e5 ff ff    	lea    -0x1ac4(%ebp),%eax
  4086b9:	50                   	push   %eax
  4086ba:	6a 01                	push   $0x1
  4086bc:	8d 45 f4             	lea    -0xc(%ebp),%eax
  4086bf:	50                   	push   %eax
  4086c0:	8b 85 28 e5 ff ff    	mov    -0x1ad8(%ebp),%eax
  4086c6:	8b 00                	mov    (%eax),%eax
  4086c8:	c6 45 f4 0d          	movb   $0xd,-0xc(%ebp)
  4086cc:	ff 34 07             	pushl  (%edi,%eax,1)
  4086cf:	ff 15 30 c0 40 00    	call   *0x40c030
  4086d5:	85 c0                	test   %eax,%eax
  4086d7:	0f 84 d0 03 00 00    	je     0x408aad
  4086dd:	83 bd 3c e5 ff ff 01 	cmpl   $0x1,-0x1ac4(%ebp)
  4086e4:	0f 8c cf 03 00 00    	jl     0x408ab9
  4086ea:	ff 85 30 e5 ff ff    	incl   -0x1ad0(%ebp)
  4086f0:	ff 85 38 e5 ff ff    	incl   -0x1ac8(%ebp)
  4086f6:	e9 83 00 00 00       	jmp    0x40877e
  4086fb:	3c 01                	cmp    $0x1,%al
  4086fd:	74 04                	je     0x408703
  4086ff:	3c 02                	cmp    $0x2,%al
  408701:	75 21                	jne    0x408724
  408703:	0f b7 33             	movzwl (%ebx),%esi
  408706:	33 c9                	xor    %ecx,%ecx
  408708:	66 83 fe 0a          	cmp    $0xa,%si
  40870c:	0f 94 c1             	sete   %cl
  40870f:	43                   	inc    %ebx
  408710:	43                   	inc    %ebx
  408711:	83 85 44 e5 ff ff 02 	addl   $0x2,-0x1abc(%ebp)
  408718:	89 b5 40 e5 ff ff    	mov    %esi,-0x1ac0(%ebp)
  40871e:	89 8d 20 e5 ff ff    	mov    %ecx,-0x1ae0(%ebp)
  408724:	3c 01                	cmp    $0x1,%al
  408726:	74 04                	je     0x40872c
  408728:	3c 02                	cmp    $0x2,%al
  40872a:	75 52                	jne    0x40877e
  40872c:	ff b5 40 e5 ff ff    	pushl  -0x1ac0(%ebp)
  408732:	e8 38 27 00 00       	call   0x40ae6f
  408737:	59                   	pop    %ecx
  408738:	66 3b 85 40 e5 ff ff 	cmp    -0x1ac0(%ebp),%ax
  40873f:	0f 85 68 03 00 00    	jne    0x408aad
  408745:	83 85 38 e5 ff ff 02 	addl   $0x2,-0x1ac8(%ebp)
  40874c:	83 bd 20 e5 ff ff 00 	cmpl   $0x0,-0x1ae0(%ebp)
  408753:	74 29                	je     0x40877e
  408755:	6a 0d                	push   $0xd
  408757:	58                   	pop    %eax
  408758:	50                   	push   %eax
  408759:	89 85 40 e5 ff ff    	mov    %eax,-0x1ac0(%ebp)
  40875f:	e8 0b 27 00 00       	call   0x40ae6f
  408764:	59                   	pop    %ecx
  408765:	66 3b 85 40 e5 ff ff 	cmp    -0x1ac0(%ebp),%ax
  40876c:	0f 85 3b 03 00 00    	jne    0x408aad
  408772:	ff 85 38 e5 ff ff    	incl   -0x1ac8(%ebp)
  408778:	ff 85 30 e5 ff ff    	incl   -0x1ad0(%ebp)
  40877e:	8b 45 10             	mov    0x10(%ebp),%eax
  408781:	39 85 44 e5 ff ff    	cmp    %eax,-0x1abc(%ebp)
  408787:	0f 82 f9 fd ff ff    	jb     0x408586
  40878d:	e9 27 03 00 00       	jmp    0x408ab9
  408792:	8b 0e                	mov    (%esi),%ecx
  408794:	8a 13                	mov    (%ebx),%dl
  408796:	ff 85 38 e5 ff ff    	incl   -0x1ac8(%ebp)
  40879c:	88 54 0f 34          	mov    %dl,0x34(%edi,%ecx,1)
  4087a0:	8b 0e                	mov    (%esi),%ecx
  4087a2:	89 44 0f 38          	mov    %eax,0x38(%edi,%ecx,1)
  4087a6:	e9 0e 03 00 00       	jmp    0x408ab9
  4087ab:	33 c9                	xor    %ecx,%ecx
  4087ad:	8b 06                	mov    (%esi),%eax
  4087af:	03 c7                	add    %edi,%eax
  4087b1:	f6 40 04 80          	testb  $0x80,0x4(%eax)
  4087b5:	0f 84 bf 02 00 00    	je     0x408a7a
  4087bb:	8b 85 34 e5 ff ff    	mov    -0x1acc(%ebp),%eax
  4087c1:	89 8d 40 e5 ff ff    	mov    %ecx,-0x1ac0(%ebp)
  4087c7:	84 db                	test   %bl,%bl
  4087c9:	0f 85 ca 00 00 00    	jne    0x408899
  4087cf:	89 85 3c e5 ff ff    	mov    %eax,-0x1ac4(%ebp)
  4087d5:	39 4d 10             	cmp    %ecx,0x10(%ebp)
  4087d8:	0f 86 20 03 00 00    	jbe    0x408afe
  4087de:	eb 06                	jmp    0x4087e6
  4087e0:	8b b5 28 e5 ff ff    	mov    -0x1ad8(%ebp),%esi
  4087e6:	8b 8d 3c e5 ff ff    	mov    -0x1ac4(%ebp),%ecx
  4087ec:	83 a5 44 e5 ff ff 00 	andl   $0x0,-0x1abc(%ebp)
  4087f3:	2b 8d 34 e5 ff ff    	sub    -0x1acc(%ebp),%ecx
  4087f9:	8d 85 48 e5 ff ff    	lea    -0x1ab8(%ebp),%eax
  4087ff:	3b 4d 10             	cmp    0x10(%ebp),%ecx
  408802:	73 39                	jae    0x40883d
  408804:	8b 95 3c e5 ff ff    	mov    -0x1ac4(%ebp),%edx
  40880a:	ff 85 3c e5 ff ff    	incl   -0x1ac4(%ebp)
  408810:	8a 12                	mov    (%edx),%dl
  408812:	41                   	inc    %ecx
  408813:	80 fa 0a             	cmp    $0xa,%dl
  408816:	75 10                	jne    0x408828
  408818:	ff 85 30 e5 ff ff    	incl   -0x1ad0(%ebp)
  40881e:	c6 00 0d             	movb   $0xd,(%eax)
  408821:	40                   	inc    %eax
  408822:	ff 85 44 e5 ff ff    	incl   -0x1abc(%ebp)
  408828:	88 10                	mov    %dl,(%eax)
  40882a:	40                   	inc    %eax
  40882b:	ff 85 44 e5 ff ff    	incl   -0x1abc(%ebp)
  408831:	81 bd 44 e5 ff ff ff 	cmpl   $0x13ff,-0x1abc(%ebp)
  408838:	13 00 00 
  40883b:	72 c2                	jb     0x4087ff
  40883d:	8b d8                	mov    %eax,%ebx
  40883f:	8d 85 48 e5 ff ff    	lea    -0x1ab8(%ebp),%eax
  408845:	2b d8                	sub    %eax,%ebx
  408847:	6a 00                	push   $0x0
  408849:	8d 85 2c e5 ff ff    	lea    -0x1ad4(%ebp),%eax
  40884f:	50                   	push   %eax
  408850:	53                   	push   %ebx
  408851:	8d 85 48 e5 ff ff    	lea    -0x1ab8(%ebp),%eax
  408857:	50                   	push   %eax
  408858:	8b 06                	mov    (%esi),%eax
  40885a:	ff 34 07             	pushl  (%edi,%eax,1)
  40885d:	ff 15 30 c0 40 00    	call   *0x40c030
  408863:	85 c0                	test   %eax,%eax
  408865:	0f 84 42 02 00 00    	je     0x408aad
  40886b:	8b 85 2c e5 ff ff    	mov    -0x1ad4(%ebp),%eax
  408871:	01 85 38 e5 ff ff    	add    %eax,-0x1ac8(%ebp)
  408877:	3b c3                	cmp    %ebx,%eax
  408879:	0f 8c 3a 02 00 00    	jl     0x408ab9
  40887f:	8b 85 3c e5 ff ff    	mov    -0x1ac4(%ebp),%eax
  408885:	2b 85 34 e5 ff ff    	sub    -0x1acc(%ebp),%eax
  40888b:	3b 45 10             	cmp    0x10(%ebp),%eax
  40888e:	0f 82 4c ff ff ff    	jb     0x4087e0
  408894:	e9 20 02 00 00       	jmp    0x408ab9
  408899:	89 85 44 e5 ff ff    	mov    %eax,-0x1abc(%ebp)
  40889f:	80 fb 02             	cmp    $0x2,%bl
  4088a2:	0f 85 d1 00 00 00    	jne    0x408979
  4088a8:	39 4d 10             	cmp    %ecx,0x10(%ebp)
  4088ab:	0f 86 4d 02 00 00    	jbe    0x408afe
  4088b1:	eb 06                	jmp    0x4088b9
  4088b3:	8b b5 28 e5 ff ff    	mov    -0x1ad8(%ebp),%esi
  4088b9:	8b 8d 44 e5 ff ff    	mov    -0x1abc(%ebp),%ecx
  4088bf:	83 a5 3c e5 ff ff 00 	andl   $0x0,-0x1ac4(%ebp)
  4088c6:	2b 8d 34 e5 ff ff    	sub    -0x1acc(%ebp),%ecx
  4088cc:	8d 85 48 e5 ff ff    	lea    -0x1ab8(%ebp),%eax
  4088d2:	3b 4d 10             	cmp    0x10(%ebp),%ecx
  4088d5:	73 46                	jae    0x40891d
  4088d7:	8b 95 44 e5 ff ff    	mov    -0x1abc(%ebp),%edx
  4088dd:	83 85 44 e5 ff ff 02 	addl   $0x2,-0x1abc(%ebp)
  4088e4:	0f b7 12             	movzwl (%edx),%edx
  4088e7:	41                   	inc    %ecx
  4088e8:	41                   	inc    %ecx
  4088e9:	66 83 fa 0a          	cmp    $0xa,%dx
  4088ed:	75 16                	jne    0x408905
  4088ef:	83 85 30 e5 ff ff 02 	addl   $0x2,-0x1ad0(%ebp)
  4088f6:	6a 0d                	push   $0xd
  4088f8:	5b                   	pop    %ebx
  4088f9:	66 89 18             	mov    %bx,(%eax)
  4088fc:	40                   	inc    %eax
  4088fd:	40                   	inc    %eax
  4088fe:	83 85 3c e5 ff ff 02 	addl   $0x2,-0x1ac4(%ebp)
  408905:	83 85 3c e5 ff ff 02 	addl   $0x2,-0x1ac4(%ebp)
  40890c:	66 89 10             	mov    %dx,(%eax)
  40890f:	40                   	inc    %eax
  408910:	40                   	inc    %eax
  408911:	81 bd 3c e5 ff ff fe 	cmpl   $0x13fe,-0x1ac4(%ebp)
  408918:	13 00 00 
  40891b:	72 b5                	jb     0x4088d2
  40891d:	8b d8                	mov    %eax,%ebx
  40891f:	8d 85 48 e5 ff ff    	lea    -0x1ab8(%ebp),%eax
  408925:	2b d8                	sub    %eax,%ebx
  408927:	6a 00                	push   $0x0
  408929:	8d 85 2c e5 ff ff    	lea    -0x1ad4(%ebp),%eax
  40892f:	50                   	push   %eax
  408930:	53                   	push   %ebx
  408931:	8d 85 48 e5 ff ff    	lea    -0x1ab8(%ebp),%eax
  408937:	50                   	push   %eax
  408938:	8b 06                	mov    (%esi),%eax
  40893a:	ff 34 07             	pushl  (%edi,%eax,1)
  40893d:	ff 15 30 c0 40 00    	call   *0x40c030
  408943:	85 c0                	test   %eax,%eax
  408945:	0f 84 62 01 00 00    	je     0x408aad
  40894b:	8b 85 2c e5 ff ff    	mov    -0x1ad4(%ebp),%eax
  408951:	01 85 38 e5 ff ff    	add    %eax,-0x1ac8(%ebp)
  408957:	3b c3                	cmp    %ebx,%eax
  408959:	0f 8c 5a 01 00 00    	jl     0x408ab9
  40895f:	8b 85 44 e5 ff ff    	mov    -0x1abc(%ebp),%eax
  408965:	2b 85 34 e5 ff ff    	sub    -0x1acc(%ebp),%eax
  40896b:	3b 45 10             	cmp    0x10(%ebp),%eax
  40896e:	0f 82 3f ff ff ff    	jb     0x4088b3
  408974:	e9 40 01 00 00       	jmp    0x408ab9
  408979:	39 4d 10             	cmp    %ecx,0x10(%ebp)
  40897c:	0f 86 7c 01 00 00    	jbe    0x408afe
  408982:	8b 8d 44 e5 ff ff    	mov    -0x1abc(%ebp),%ecx
  408988:	83 a5 3c e5 ff ff 00 	andl   $0x0,-0x1ac4(%ebp)
  40898f:	2b 8d 34 e5 ff ff    	sub    -0x1acc(%ebp),%ecx
  408995:	6a 02                	push   $0x2
  408997:	8d 85 48 f9 ff ff    	lea    -0x6b8(%ebp),%eax
  40899d:	5e                   	pop    %esi
  40899e:	3b 4d 10             	cmp    0x10(%ebp),%ecx
  4089a1:	73 3c                	jae    0x4089df
  4089a3:	8b 95 44 e5 ff ff    	mov    -0x1abc(%ebp),%edx
  4089a9:	0f b7 12             	movzwl (%edx),%edx
  4089ac:	01 b5 44 e5 ff ff    	add    %esi,-0x1abc(%ebp)
  4089b2:	03 ce                	add    %esi,%ecx
  4089b4:	66 83 fa 0a          	cmp    $0xa,%dx
  4089b8:	75 0e                	jne    0x4089c8
  4089ba:	6a 0d                	push   $0xd
  4089bc:	5b                   	pop    %ebx
  4089bd:	66 89 18             	mov    %bx,(%eax)
  4089c0:	03 c6                	add    %esi,%eax
  4089c2:	01 b5 3c e5 ff ff    	add    %esi,-0x1ac4(%ebp)
  4089c8:	01 b5 3c e5 ff ff    	add    %esi,-0x1ac4(%ebp)
  4089ce:	66 89 10             	mov    %dx,(%eax)
  4089d1:	03 c6                	add    %esi,%eax
  4089d3:	81 bd 3c e5 ff ff a8 	cmpl   $0x6a8,-0x1ac4(%ebp)
  4089da:	06 00 00 
  4089dd:	72 bf                	jb     0x40899e
  4089df:	33 f6                	xor    %esi,%esi
  4089e1:	56                   	push   %esi
  4089e2:	56                   	push   %esi
  4089e3:	68 55 0d 00 00       	push   $0xd55
  4089e8:	8d 8d f0 eb ff ff    	lea    -0x1410(%ebp),%ecx
  4089ee:	51                   	push   %ecx
  4089ef:	8d 8d 48 f9 ff ff    	lea    -0x6b8(%ebp),%ecx
  4089f5:	2b c1                	sub    %ecx,%eax
  4089f7:	99                   	cltd   
  4089f8:	2b c2                	sub    %edx,%eax
  4089fa:	d1 f8                	sar    %eax
  4089fc:	50                   	push   %eax
  4089fd:	8b c1                	mov    %ecx,%eax
  4089ff:	50                   	push   %eax
  408a00:	56                   	push   %esi
  408a01:	68 e9 fd 00 00       	push   $0xfde9
  408a06:	ff 15 48 c0 40 00    	call   *0x40c048
  408a0c:	8b d8                	mov    %eax,%ebx
  408a0e:	3b de                	cmp    %esi,%ebx
  408a10:	0f 84 97 00 00 00    	je     0x408aad
  408a16:	6a 00                	push   $0x0
  408a18:	8d 85 2c e5 ff ff    	lea    -0x1ad4(%ebp),%eax
  408a1e:	50                   	push   %eax
  408a1f:	8b c3                	mov    %ebx,%eax
  408a21:	2b c6                	sub    %esi,%eax
  408a23:	50                   	push   %eax
  408a24:	8d 84 35 f0 eb ff ff 	lea    -0x1410(%ebp,%esi,1),%eax
  408a2b:	50                   	push   %eax
  408a2c:	8b 85 28 e5 ff ff    	mov    -0x1ad8(%ebp),%eax
  408a32:	8b 00                	mov    (%eax),%eax
  408a34:	ff 34 07             	pushl  (%edi,%eax,1)
  408a37:	ff 15 30 c0 40 00    	call   *0x40c030
  408a3d:	85 c0                	test   %eax,%eax
  408a3f:	74 0c                	je     0x408a4d
  408a41:	03 b5 2c e5 ff ff    	add    -0x1ad4(%ebp),%esi
  408a47:	3b de                	cmp    %esi,%ebx
  408a49:	7f cb                	jg     0x408a16
  408a4b:	eb 0c                	jmp    0x408a59
  408a4d:	ff 15 4c c0 40 00    	call   *0x40c04c
  408a53:	89 85 40 e5 ff ff    	mov    %eax,-0x1ac0(%ebp)
  408a59:	3b de                	cmp    %esi,%ebx
  408a5b:	7f 5c                	jg     0x408ab9
  408a5d:	8b 85 44 e5 ff ff    	mov    -0x1abc(%ebp),%eax
  408a63:	2b 85 34 e5 ff ff    	sub    -0x1acc(%ebp),%eax
  408a69:	89 85 38 e5 ff ff    	mov    %eax,-0x1ac8(%ebp)
  408a6f:	3b 45 10             	cmp    0x10(%ebp),%eax
  408a72:	0f 82 0a ff ff ff    	jb     0x408982
  408a78:	eb 3f                	jmp    0x408ab9
  408a7a:	6a 00                	push   $0x0
  408a7c:	8d 8d 2c e5 ff ff    	lea    -0x1ad4(%ebp),%ecx
  408a82:	51                   	push   %ecx
  408a83:	ff 75 10             	pushl  0x10(%ebp)
  408a86:	ff b5 34 e5 ff ff    	pushl  -0x1acc(%ebp)
  408a8c:	ff 30                	pushl  (%eax)
  408a8e:	ff 15 30 c0 40 00    	call   *0x40c030
  408a94:	85 c0                	test   %eax,%eax
  408a96:	74 15                	je     0x408aad
  408a98:	8b 85 2c e5 ff ff    	mov    -0x1ad4(%ebp),%eax
  408a9e:	83 a5 40 e5 ff ff 00 	andl   $0x0,-0x1ac0(%ebp)
  408aa5:	89 85 38 e5 ff ff    	mov    %eax,-0x1ac8(%ebp)
  408aab:	eb 0c                	jmp    0x408ab9
  408aad:	ff 15 4c c0 40 00    	call   *0x40c04c
  408ab3:	89 85 40 e5 ff ff    	mov    %eax,-0x1ac0(%ebp)
  408ab9:	83 bd 38 e5 ff ff 00 	cmpl   $0x0,-0x1ac8(%ebp)
  408ac0:	75 6c                	jne    0x408b2e
  408ac2:	83 bd 40 e5 ff ff 00 	cmpl   $0x0,-0x1ac0(%ebp)
  408ac9:	74 2d                	je     0x408af8
  408acb:	6a 05                	push   $0x5
  408acd:	5e                   	pop    %esi
  408ace:	39 b5 40 e5 ff ff    	cmp    %esi,-0x1ac0(%ebp)
  408ad4:	75 14                	jne    0x408aea
  408ad6:	e8 4a 99 ff ff       	call   0x402425
  408adb:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  408ae1:	e8 52 99 ff ff       	call   0x402438
  408ae6:	89 30                	mov    %esi,(%eax)
  408ae8:	eb 3f                	jmp    0x408b29
  408aea:	ff b5 40 e5 ff ff    	pushl  -0x1ac0(%ebp)
  408af0:	e8 56 99 ff ff       	call   0x40244b
  408af5:	59                   	pop    %ecx
  408af6:	eb 31                	jmp    0x408b29
  408af8:	8b b5 28 e5 ff ff    	mov    -0x1ad8(%ebp),%esi
  408afe:	8b 06                	mov    (%esi),%eax
  408b00:	f6 44 07 04 40       	testb  $0x40,0x4(%edi,%eax,1)
  408b05:	74 0f                	je     0x408b16
  408b07:	8b 85 34 e5 ff ff    	mov    -0x1acc(%ebp),%eax
  408b0d:	80 38 1a             	cmpb   $0x1a,(%eax)
  408b10:	75 04                	jne    0x408b16
  408b12:	33 c0                	xor    %eax,%eax
  408b14:	eb 24                	jmp    0x408b3a
  408b16:	e8 0a 99 ff ff       	call   0x402425
  408b1b:	c7 00 1c 00 00 00    	movl   $0x1c,(%eax)
  408b21:	e8 12 99 ff ff       	call   0x402438
  408b26:	83 20 00             	andl   $0x0,(%eax)
  408b29:	83 c8 ff             	or     $0xffffffff,%eax
  408b2c:	eb 0c                	jmp    0x408b3a
  408b2e:	8b 85 38 e5 ff ff    	mov    -0x1ac8(%ebp),%eax
  408b34:	2b 85 30 e5 ff ff    	sub    -0x1ad0(%ebp),%eax
  408b3a:	5f                   	pop    %edi
  408b3b:	5b                   	pop    %ebx
  408b3c:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  408b3f:	33 cd                	xor    %ebp,%ecx
  408b41:	5e                   	pop    %esi
  408b42:	e8 f8 d3 ff ff       	call   0x405f3f
  408b47:	c9                   	leave  
  408b48:	c3                   	ret    
  408b49:	6a 10                	push   $0x10
  408b4b:	68 d8 d6 40 00       	push   $0x40d6d8
  408b50:	e8 1b 99 ff ff       	call   0x402470
  408b55:	8b 45 08             	mov    0x8(%ebp),%eax
  408b58:	83 f8 fe             	cmp    $0xfffffffe,%eax
  408b5b:	75 1b                	jne    0x408b78
  408b5d:	e8 d6 98 ff ff       	call   0x402438
  408b62:	83 20 00             	andl   $0x0,(%eax)
  408b65:	e8 bb 98 ff ff       	call   0x402425
  408b6a:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  408b70:	83 c8 ff             	or     $0xffffffff,%eax
  408b73:	e9 9d 00 00 00       	jmp    0x408c15
  408b78:	33 ff                	xor    %edi,%edi
  408b7a:	3b c7                	cmp    %edi,%eax
  408b7c:	7c 08                	jl     0x408b86
  408b7e:	3b 05 84 fa 40 00    	cmp    0x40fa84,%eax
  408b84:	72 21                	jb     0x408ba7
  408b86:	e8 ad 98 ff ff       	call   0x402438
  408b8b:	89 38                	mov    %edi,(%eax)
  408b8d:	e8 93 98 ff ff       	call   0x402425
  408b92:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  408b98:	57                   	push   %edi
  408b99:	57                   	push   %edi
  408b9a:	57                   	push   %edi
  408b9b:	57                   	push   %edi
  408b9c:	57                   	push   %edi
  408b9d:	e8 1b 98 ff ff       	call   0x4023bd
  408ba2:	83 c4 14             	add    $0x14,%esp
  408ba5:	eb c9                	jmp    0x408b70
  408ba7:	8b c8                	mov    %eax,%ecx
  408ba9:	c1 f9 05             	sar    $0x5,%ecx
  408bac:	8d 1c 8d a0 fa 40 00 	lea    0x40faa0(,%ecx,4),%ebx
  408bb3:	8b f0                	mov    %eax,%esi
  408bb5:	83 e6 1f             	and    $0x1f,%esi
  408bb8:	c1 e6 06             	shl    $0x6,%esi
  408bbb:	8b 0b                	mov    (%ebx),%ecx
  408bbd:	0f be 4c 31 04       	movsbl 0x4(%ecx,%esi,1),%ecx
  408bc2:	83 e1 01             	and    $0x1,%ecx
  408bc5:	74 bf                	je     0x408b86
  408bc7:	50                   	push   %eax
  408bc8:	e8 9b 24 00 00       	call   0x40b068
  408bcd:	59                   	pop    %ecx
  408bce:	89 7d fc             	mov    %edi,-0x4(%ebp)
  408bd1:	8b 03                	mov    (%ebx),%eax
  408bd3:	f6 44 30 04 01       	testb  $0x1,0x4(%eax,%esi,1)
  408bd8:	74 16                	je     0x408bf0
  408bda:	ff 75 10             	pushl  0x10(%ebp)
  408bdd:	ff 75 0c             	pushl  0xc(%ebp)
  408be0:	ff 75 08             	pushl  0x8(%ebp)
  408be3:	e8 2e f8 ff ff       	call   0x408416
  408be8:	83 c4 0c             	add    $0xc,%esp
  408beb:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  408bee:	eb 16                	jmp    0x408c06
  408bf0:	e8 30 98 ff ff       	call   0x402425
  408bf5:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  408bfb:	e8 38 98 ff ff       	call   0x402438
  408c00:	89 38                	mov    %edi,(%eax)
  408c02:	83 4d e4 ff          	orl    $0xffffffff,-0x1c(%ebp)
  408c06:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  408c0d:	e8 09 00 00 00       	call   0x408c1b
  408c12:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  408c15:	e8 9b 98 ff ff       	call   0x4024b5
  408c1a:	c3                   	ret    
  408c1b:	ff 75 08             	pushl  0x8(%ebp)
  408c1e:	e8 e5 24 00 00       	call   0x40b108
  408c23:	59                   	pop    %ecx
  408c24:	c3                   	ret    
  408c25:	6a 10                	push   $0x10
  408c27:	68 f8 d6 40 00       	push   $0x40d6f8
  408c2c:	e8 3f 98 ff ff       	call   0x402470
  408c31:	8b 45 08             	mov    0x8(%ebp),%eax
  408c34:	83 f8 fe             	cmp    $0xfffffffe,%eax
  408c37:	75 13                	jne    0x408c4c
  408c39:	e8 e7 97 ff ff       	call   0x402425
  408c3e:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  408c44:	83 c8 ff             	or     $0xffffffff,%eax
  408c47:	e9 aa 00 00 00       	jmp    0x408cf6
  408c4c:	33 db                	xor    %ebx,%ebx
  408c4e:	3b c3                	cmp    %ebx,%eax
  408c50:	7c 08                	jl     0x408c5a
  408c52:	3b 05 84 fa 40 00    	cmp    0x40fa84,%eax
  408c58:	72 1a                	jb     0x408c74
  408c5a:	e8 c6 97 ff ff       	call   0x402425
  408c5f:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  408c65:	53                   	push   %ebx
  408c66:	53                   	push   %ebx
  408c67:	53                   	push   %ebx
  408c68:	53                   	push   %ebx
  408c69:	53                   	push   %ebx
  408c6a:	e8 4e 97 ff ff       	call   0x4023bd
  408c6f:	83 c4 14             	add    $0x14,%esp
  408c72:	eb d0                	jmp    0x408c44
  408c74:	8b c8                	mov    %eax,%ecx
  408c76:	c1 f9 05             	sar    $0x5,%ecx
  408c79:	8d 3c 8d a0 fa 40 00 	lea    0x40faa0(,%ecx,4),%edi
  408c80:	8b f0                	mov    %eax,%esi
  408c82:	83 e6 1f             	and    $0x1f,%esi
  408c85:	c1 e6 06             	shl    $0x6,%esi
  408c88:	8b 0f                	mov    (%edi),%ecx
  408c8a:	0f be 4c 0e 04       	movsbl 0x4(%esi,%ecx,1),%ecx
  408c8f:	83 e1 01             	and    $0x1,%ecx
  408c92:	74 c6                	je     0x408c5a
  408c94:	50                   	push   %eax
  408c95:	e8 ce 23 00 00       	call   0x40b068
  408c9a:	59                   	pop    %ecx
  408c9b:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  408c9e:	8b 07                	mov    (%edi),%eax
  408ca0:	f6 44 06 04 01       	testb  $0x1,0x4(%esi,%eax,1)
  408ca5:	74 31                	je     0x408cd8
  408ca7:	ff 75 08             	pushl  0x8(%ebp)
  408caa:	e8 42 23 00 00       	call   0x40aff1
  408caf:	59                   	pop    %ecx
  408cb0:	50                   	push   %eax
  408cb1:	ff 15 d4 c0 40 00    	call   *0x40c0d4
  408cb7:	85 c0                	test   %eax,%eax
  408cb9:	75 0b                	jne    0x408cc6
  408cbb:	ff 15 4c c0 40 00    	call   *0x40c04c
  408cc1:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  408cc4:	eb 03                	jmp    0x408cc9
  408cc6:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
  408cc9:	39 5d e4             	cmp    %ebx,-0x1c(%ebp)
  408ccc:	74 19                	je     0x408ce7
  408cce:	e8 65 97 ff ff       	call   0x402438
  408cd3:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
  408cd6:	89 08                	mov    %ecx,(%eax)
  408cd8:	e8 48 97 ff ff       	call   0x402425
  408cdd:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  408ce3:	83 4d e4 ff          	orl    $0xffffffff,-0x1c(%ebp)
  408ce7:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  408cee:	e8 09 00 00 00       	call   0x408cfc
  408cf3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  408cf6:	e8 ba 97 ff ff       	call   0x4024b5
  408cfb:	c3                   	ret    
  408cfc:	ff 75 08             	pushl  0x8(%ebp)
  408cff:	e8 04 24 00 00       	call   0x40b108
  408d04:	59                   	pop    %ecx
  408d05:	c3                   	ret    
  408d06:	8b ff                	mov    %edi,%edi
  408d08:	55                   	push   %ebp
  408d09:	8b ec                	mov    %esp,%ebp
  408d0b:	8b 45 08             	mov    0x8(%ebp),%eax
  408d0e:	85 c0                	test   %eax,%eax
  408d10:	74 12                	je     0x408d24
  408d12:	83 e8 08             	sub    $0x8,%eax
  408d15:	81 38 dd dd 00 00    	cmpl   $0xdddd,(%eax)
  408d1b:	75 07                	jne    0x408d24
  408d1d:	50                   	push   %eax
  408d1e:	e8 2b bf ff ff       	call   0x404c4e
  408d23:	59                   	pop    %ecx
  408d24:	5d                   	pop    %ebp
  408d25:	c3                   	ret    
  408d26:	8b ff                	mov    %edi,%edi
  408d28:	55                   	push   %ebp
  408d29:	8b ec                	mov    %esp,%ebp
  408d2b:	83 ec 14             	sub    $0x14,%esp
  408d2e:	a1 00 e4 40 00       	mov    0x40e400,%eax
  408d33:	33 c5                	xor    %ebp,%eax
  408d35:	89 45 fc             	mov    %eax,-0x4(%ebp)
  408d38:	53                   	push   %ebx
  408d39:	56                   	push   %esi
  408d3a:	33 db                	xor    %ebx,%ebx
  408d3c:	57                   	push   %edi
  408d3d:	8b f1                	mov    %ecx,%esi
  408d3f:	39 1d 70 f6 40 00    	cmp    %ebx,0x40f670
  408d45:	75 38                	jne    0x408d7f
  408d47:	53                   	push   %ebx
  408d48:	53                   	push   %ebx
  408d49:	33 ff                	xor    %edi,%edi
  408d4b:	47                   	inc    %edi
  408d4c:	57                   	push   %edi
  408d4d:	68 ec c9 40 00       	push   $0x40c9ec
  408d52:	68 00 01 00 00       	push   $0x100
  408d57:	53                   	push   %ebx
  408d58:	ff 15 dc c0 40 00    	call   *0x40c0dc
  408d5e:	85 c0                	test   %eax,%eax
  408d60:	74 08                	je     0x408d6a
  408d62:	89 3d 70 f6 40 00    	mov    %edi,0x40f670
  408d68:	eb 15                	jmp    0x408d7f
  408d6a:	ff 15 4c c0 40 00    	call   *0x40c04c
  408d70:	83 f8 78             	cmp    $0x78,%eax
  408d73:	75 0a                	jne    0x408d7f
  408d75:	c7 05 70 f6 40 00 02 	movl   $0x2,0x40f670
  408d7c:	00 00 00 
  408d7f:	39 5d 14             	cmp    %ebx,0x14(%ebp)
  408d82:	7e 22                	jle    0x408da6
  408d84:	8b 4d 14             	mov    0x14(%ebp),%ecx
  408d87:	8b 45 10             	mov    0x10(%ebp),%eax
  408d8a:	49                   	dec    %ecx
  408d8b:	38 18                	cmp    %bl,(%eax)
  408d8d:	74 08                	je     0x408d97
  408d8f:	40                   	inc    %eax
  408d90:	3b cb                	cmp    %ebx,%ecx
  408d92:	75 f6                	jne    0x408d8a
  408d94:	83 c9 ff             	or     $0xffffffff,%ecx
  408d97:	8b 45 14             	mov    0x14(%ebp),%eax
  408d9a:	2b c1                	sub    %ecx,%eax
  408d9c:	48                   	dec    %eax
  408d9d:	3b 45 14             	cmp    0x14(%ebp),%eax
  408da0:	7d 01                	jge    0x408da3
  408da2:	40                   	inc    %eax
  408da3:	89 45 14             	mov    %eax,0x14(%ebp)
  408da6:	a1 70 f6 40 00       	mov    0x40f670,%eax
  408dab:	83 f8 02             	cmp    $0x2,%eax
  408dae:	0f 84 ac 01 00 00    	je     0x408f60
  408db4:	3b c3                	cmp    %ebx,%eax
  408db6:	0f 84 a4 01 00 00    	je     0x408f60
  408dbc:	83 f8 01             	cmp    $0x1,%eax
  408dbf:	0f 85 cc 01 00 00    	jne    0x408f91
  408dc5:	89 5d f8             	mov    %ebx,-0x8(%ebp)
  408dc8:	39 5d 20             	cmp    %ebx,0x20(%ebp)
  408dcb:	75 08                	jne    0x408dd5
  408dcd:	8b 06                	mov    (%esi),%eax
  408dcf:	8b 40 04             	mov    0x4(%eax),%eax
  408dd2:	89 45 20             	mov    %eax,0x20(%ebp)
  408dd5:	8b 35 b4 c0 40 00    	mov    0x40c0b4,%esi
  408ddb:	33 c0                	xor    %eax,%eax
  408ddd:	39 5d 24             	cmp    %ebx,0x24(%ebp)
  408de0:	53                   	push   %ebx
  408de1:	53                   	push   %ebx
  408de2:	ff 75 14             	pushl  0x14(%ebp)
  408de5:	0f 95 c0             	setne  %al
  408de8:	ff 75 10             	pushl  0x10(%ebp)
  408deb:	8d 04 c5 01 00 00 00 	lea    0x1(,%eax,8),%eax
  408df2:	50                   	push   %eax
  408df3:	ff 75 20             	pushl  0x20(%ebp)
  408df6:	ff d6                	call   *%esi
  408df8:	8b f8                	mov    %eax,%edi
  408dfa:	3b fb                	cmp    %ebx,%edi
  408dfc:	0f 84 8f 01 00 00    	je     0x408f91
  408e02:	7e 43                	jle    0x408e47
  408e04:	6a e0                	push   $0xffffffe0
  408e06:	33 d2                	xor    %edx,%edx
  408e08:	58                   	pop    %eax
  408e09:	f7 f7                	div    %edi
  408e0b:	83 f8 02             	cmp    $0x2,%eax
  408e0e:	72 37                	jb     0x408e47
  408e10:	8d 44 3f 08          	lea    0x8(%edi,%edi,1),%eax
  408e14:	3d 00 04 00 00       	cmp    $0x400,%eax
  408e19:	77 13                	ja     0x408e2e
  408e1b:	e8 10 25 00 00       	call   0x40b330
  408e20:	8b c4                	mov    %esp,%eax
  408e22:	3b c3                	cmp    %ebx,%eax
  408e24:	74 1c                	je     0x408e42
  408e26:	c7 00 cc cc 00 00    	movl   $0xcccc,(%eax)
  408e2c:	eb 11                	jmp    0x408e3f
  408e2e:	50                   	push   %eax
  408e2f:	e8 71 f0 ff ff       	call   0x407ea5
  408e34:	59                   	pop    %ecx
  408e35:	3b c3                	cmp    %ebx,%eax
  408e37:	74 09                	je     0x408e42
  408e39:	c7 00 dd dd 00 00    	movl   $0xdddd,(%eax)
  408e3f:	83 c0 08             	add    $0x8,%eax
  408e42:	89 45 f4             	mov    %eax,-0xc(%ebp)
  408e45:	eb 03                	jmp    0x408e4a
  408e47:	89 5d f4             	mov    %ebx,-0xc(%ebp)
  408e4a:	39 5d f4             	cmp    %ebx,-0xc(%ebp)
  408e4d:	0f 84 3e 01 00 00    	je     0x408f91
  408e53:	57                   	push   %edi
  408e54:	ff 75 f4             	pushl  -0xc(%ebp)
  408e57:	ff 75 14             	pushl  0x14(%ebp)
  408e5a:	ff 75 10             	pushl  0x10(%ebp)
  408e5d:	6a 01                	push   $0x1
  408e5f:	ff 75 20             	pushl  0x20(%ebp)
  408e62:	ff d6                	call   *%esi
  408e64:	85 c0                	test   %eax,%eax
  408e66:	0f 84 e3 00 00 00    	je     0x408f4f
  408e6c:	8b 35 dc c0 40 00    	mov    0x40c0dc,%esi
  408e72:	53                   	push   %ebx
  408e73:	53                   	push   %ebx
  408e74:	57                   	push   %edi
  408e75:	ff 75 f4             	pushl  -0xc(%ebp)
  408e78:	ff 75 0c             	pushl  0xc(%ebp)
  408e7b:	ff 75 08             	pushl  0x8(%ebp)
  408e7e:	ff d6                	call   *%esi
  408e80:	8b c8                	mov    %eax,%ecx
  408e82:	89 4d f8             	mov    %ecx,-0x8(%ebp)
  408e85:	3b cb                	cmp    %ebx,%ecx
  408e87:	0f 84 c2 00 00 00    	je     0x408f4f
  408e8d:	f7 45 0c 00 04 00 00 	testl  $0x400,0xc(%ebp)
  408e94:	74 29                	je     0x408ebf
  408e96:	39 5d 1c             	cmp    %ebx,0x1c(%ebp)
  408e99:	0f 84 b0 00 00 00    	je     0x408f4f
  408e9f:	3b 4d 1c             	cmp    0x1c(%ebp),%ecx
  408ea2:	0f 8f a7 00 00 00    	jg     0x408f4f
  408ea8:	ff 75 1c             	pushl  0x1c(%ebp)
  408eab:	ff 75 18             	pushl  0x18(%ebp)
  408eae:	57                   	push   %edi
  408eaf:	ff 75 f4             	pushl  -0xc(%ebp)
  408eb2:	ff 75 0c             	pushl  0xc(%ebp)
  408eb5:	ff 75 08             	pushl  0x8(%ebp)
  408eb8:	ff d6                	call   *%esi
  408eba:	e9 90 00 00 00       	jmp    0x408f4f
  408ebf:	3b cb                	cmp    %ebx,%ecx
  408ec1:	7e 45                	jle    0x408f08
  408ec3:	6a e0                	push   $0xffffffe0
  408ec5:	33 d2                	xor    %edx,%edx
  408ec7:	58                   	pop    %eax
  408ec8:	f7 f1                	div    %ecx
  408eca:	83 f8 02             	cmp    $0x2,%eax
  408ecd:	72 39                	jb     0x408f08
  408ecf:	8d 44 09 08          	lea    0x8(%ecx,%ecx,1),%eax
  408ed3:	3d 00 04 00 00       	cmp    $0x400,%eax
  408ed8:	77 16                	ja     0x408ef0
  408eda:	e8 51 24 00 00       	call   0x40b330
  408edf:	8b f4                	mov    %esp,%esi
  408ee1:	3b f3                	cmp    %ebx,%esi
  408ee3:	74 6a                	je     0x408f4f
  408ee5:	c7 06 cc cc 00 00    	movl   $0xcccc,(%esi)
  408eeb:	83 c6 08             	add    $0x8,%esi
  408eee:	eb 1a                	jmp    0x408f0a
  408ef0:	50                   	push   %eax
  408ef1:	e8 af ef ff ff       	call   0x407ea5
  408ef6:	59                   	pop    %ecx
  408ef7:	3b c3                	cmp    %ebx,%eax
  408ef9:	74 09                	je     0x408f04
  408efb:	c7 00 dd dd 00 00    	movl   $0xdddd,(%eax)
  408f01:	83 c0 08             	add    $0x8,%eax
  408f04:	8b f0                	mov    %eax,%esi
  408f06:	eb 02                	jmp    0x408f0a
  408f08:	33 f6                	xor    %esi,%esi
  408f0a:	3b f3                	cmp    %ebx,%esi
  408f0c:	74 41                	je     0x408f4f
  408f0e:	ff 75 f8             	pushl  -0x8(%ebp)
  408f11:	56                   	push   %esi
  408f12:	57                   	push   %edi
  408f13:	ff 75 f4             	pushl  -0xc(%ebp)
  408f16:	ff 75 0c             	pushl  0xc(%ebp)
  408f19:	ff 75 08             	pushl  0x8(%ebp)
  408f1c:	ff 15 dc c0 40 00    	call   *0x40c0dc
  408f22:	85 c0                	test   %eax,%eax
  408f24:	74 22                	je     0x408f48
  408f26:	53                   	push   %ebx
  408f27:	53                   	push   %ebx
  408f28:	39 5d 1c             	cmp    %ebx,0x1c(%ebp)
  408f2b:	75 04                	jne    0x408f31
  408f2d:	53                   	push   %ebx
  408f2e:	53                   	push   %ebx
  408f2f:	eb 06                	jmp    0x408f37
  408f31:	ff 75 1c             	pushl  0x1c(%ebp)
  408f34:	ff 75 18             	pushl  0x18(%ebp)
  408f37:	ff 75 f8             	pushl  -0x8(%ebp)
  408f3a:	56                   	push   %esi
  408f3b:	53                   	push   %ebx
  408f3c:	ff 75 20             	pushl  0x20(%ebp)
  408f3f:	ff 15 48 c0 40 00    	call   *0x40c048
  408f45:	89 45 f8             	mov    %eax,-0x8(%ebp)
  408f48:	56                   	push   %esi
  408f49:	e8 b8 fd ff ff       	call   0x408d06
  408f4e:	59                   	pop    %ecx
  408f4f:	ff 75 f4             	pushl  -0xc(%ebp)
  408f52:	e8 af fd ff ff       	call   0x408d06
  408f57:	8b 45 f8             	mov    -0x8(%ebp),%eax
  408f5a:	59                   	pop    %ecx
  408f5b:	e9 59 01 00 00       	jmp    0x4090b9
  408f60:	89 5d f4             	mov    %ebx,-0xc(%ebp)
  408f63:	89 5d f0             	mov    %ebx,-0x10(%ebp)
  408f66:	39 5d 08             	cmp    %ebx,0x8(%ebp)
  408f69:	75 08                	jne    0x408f73
  408f6b:	8b 06                	mov    (%esi),%eax
  408f6d:	8b 40 14             	mov    0x14(%eax),%eax
  408f70:	89 45 08             	mov    %eax,0x8(%ebp)
  408f73:	39 5d 20             	cmp    %ebx,0x20(%ebp)
  408f76:	75 08                	jne    0x408f80
  408f78:	8b 06                	mov    (%esi),%eax
  408f7a:	8b 40 04             	mov    0x4(%eax),%eax
  408f7d:	89 45 20             	mov    %eax,0x20(%ebp)
  408f80:	ff 75 08             	pushl  0x8(%ebp)
  408f83:	e8 a7 21 00 00       	call   0x40b12f
  408f88:	59                   	pop    %ecx
  408f89:	89 45 ec             	mov    %eax,-0x14(%ebp)
  408f8c:	83 f8 ff             	cmp    $0xffffffff,%eax
  408f8f:	75 07                	jne    0x408f98
  408f91:	33 c0                	xor    %eax,%eax
  408f93:	e9 21 01 00 00       	jmp    0x4090b9
  408f98:	3b 45 20             	cmp    0x20(%ebp),%eax
  408f9b:	0f 84 db 00 00 00    	je     0x40907c
  408fa1:	53                   	push   %ebx
  408fa2:	53                   	push   %ebx
  408fa3:	8d 4d 14             	lea    0x14(%ebp),%ecx
  408fa6:	51                   	push   %ecx
  408fa7:	ff 75 10             	pushl  0x10(%ebp)
  408faa:	50                   	push   %eax
  408fab:	ff 75 20             	pushl  0x20(%ebp)
  408fae:	e8 c5 21 00 00       	call   0x40b178
  408fb3:	83 c4 18             	add    $0x18,%esp
  408fb6:	89 45 f4             	mov    %eax,-0xc(%ebp)
  408fb9:	3b c3                	cmp    %ebx,%eax
  408fbb:	74 d4                	je     0x408f91
  408fbd:	8b 35 d8 c0 40 00    	mov    0x40c0d8,%esi
  408fc3:	53                   	push   %ebx
  408fc4:	53                   	push   %ebx
  408fc5:	ff 75 14             	pushl  0x14(%ebp)
  408fc8:	50                   	push   %eax
  408fc9:	ff 75 0c             	pushl  0xc(%ebp)
  408fcc:	ff 75 08             	pushl  0x8(%ebp)
  408fcf:	ff d6                	call   *%esi
  408fd1:	89 45 f8             	mov    %eax,-0x8(%ebp)
  408fd4:	3b c3                	cmp    %ebx,%eax
  408fd6:	75 07                	jne    0x408fdf
  408fd8:	33 f6                	xor    %esi,%esi
  408fda:	e9 b7 00 00 00       	jmp    0x409096
  408fdf:	7e 3d                	jle    0x40901e
  408fe1:	83 f8 e0             	cmp    $0xffffffe0,%eax
  408fe4:	77 38                	ja     0x40901e
  408fe6:	83 c0 08             	add    $0x8,%eax
  408fe9:	3d 00 04 00 00       	cmp    $0x400,%eax
  408fee:	77 16                	ja     0x409006
  408ff0:	e8 3b 23 00 00       	call   0x40b330
  408ff5:	8b fc                	mov    %esp,%edi
  408ff7:	3b fb                	cmp    %ebx,%edi
  408ff9:	74 dd                	je     0x408fd8
  408ffb:	c7 07 cc cc 00 00    	movl   $0xcccc,(%edi)
  409001:	83 c7 08             	add    $0x8,%edi
  409004:	eb 1a                	jmp    0x409020
  409006:	50                   	push   %eax
  409007:	e8 99 ee ff ff       	call   0x407ea5
  40900c:	59                   	pop    %ecx
  40900d:	3b c3                	cmp    %ebx,%eax
  40900f:	74 09                	je     0x40901a
  409011:	c7 00 dd dd 00 00    	movl   $0xdddd,(%eax)
  409017:	83 c0 08             	add    $0x8,%eax
  40901a:	8b f8                	mov    %eax,%edi
  40901c:	eb 02                	jmp    0x409020
  40901e:	33 ff                	xor    %edi,%edi
  409020:	3b fb                	cmp    %ebx,%edi
  409022:	74 b4                	je     0x408fd8
  409024:	ff 75 f8             	pushl  -0x8(%ebp)
  409027:	53                   	push   %ebx
  409028:	57                   	push   %edi
  409029:	e8 c2 cf ff ff       	call   0x405ff0
  40902e:	83 c4 0c             	add    $0xc,%esp
  409031:	ff 75 f8             	pushl  -0x8(%ebp)
  409034:	57                   	push   %edi
  409035:	ff 75 14             	pushl  0x14(%ebp)
  409038:	ff 75 f4             	pushl  -0xc(%ebp)
  40903b:	ff 75 0c             	pushl  0xc(%ebp)
  40903e:	ff 75 08             	pushl  0x8(%ebp)
  409041:	ff d6                	call   *%esi
  409043:	89 45 f8             	mov    %eax,-0x8(%ebp)
  409046:	3b c3                	cmp    %ebx,%eax
  409048:	75 04                	jne    0x40904e
  40904a:	33 f6                	xor    %esi,%esi
  40904c:	eb 25                	jmp    0x409073
  40904e:	ff 75 1c             	pushl  0x1c(%ebp)
  409051:	8d 45 f8             	lea    -0x8(%ebp),%eax
  409054:	ff 75 18             	pushl  0x18(%ebp)
  409057:	50                   	push   %eax
  409058:	57                   	push   %edi
  409059:	ff 75 20             	pushl  0x20(%ebp)
  40905c:	ff 75 ec             	pushl  -0x14(%ebp)
  40905f:	e8 14 21 00 00       	call   0x40b178
  409064:	8b f0                	mov    %eax,%esi
  409066:	89 75 f0             	mov    %esi,-0x10(%ebp)
  409069:	83 c4 18             	add    $0x18,%esp
  40906c:	f7 de                	neg    %esi
  40906e:	1b f6                	sbb    %esi,%esi
  409070:	23 75 f8             	and    -0x8(%ebp),%esi
  409073:	57                   	push   %edi
  409074:	e8 8d fc ff ff       	call   0x408d06
  409079:	59                   	pop    %ecx
  40907a:	eb 1a                	jmp    0x409096
  40907c:	ff 75 1c             	pushl  0x1c(%ebp)
  40907f:	ff 75 18             	pushl  0x18(%ebp)
  409082:	ff 75 14             	pushl  0x14(%ebp)
  409085:	ff 75 10             	pushl  0x10(%ebp)
  409088:	ff 75 0c             	pushl  0xc(%ebp)
  40908b:	ff 75 08             	pushl  0x8(%ebp)
  40908e:	ff 15 d8 c0 40 00    	call   *0x40c0d8
  409094:	8b f0                	mov    %eax,%esi
  409096:	39 5d f4             	cmp    %ebx,-0xc(%ebp)
  409099:	74 09                	je     0x4090a4
  40909b:	ff 75 f4             	pushl  -0xc(%ebp)
  40909e:	e8 ab bb ff ff       	call   0x404c4e
  4090a3:	59                   	pop    %ecx
  4090a4:	8b 45 f0             	mov    -0x10(%ebp),%eax
  4090a7:	3b c3                	cmp    %ebx,%eax
  4090a9:	74 0c                	je     0x4090b7
  4090ab:	39 45 18             	cmp    %eax,0x18(%ebp)
  4090ae:	74 07                	je     0x4090b7
  4090b0:	50                   	push   %eax
  4090b1:	e8 98 bb ff ff       	call   0x404c4e
  4090b6:	59                   	pop    %ecx
  4090b7:	8b c6                	mov    %esi,%eax
  4090b9:	8d 65 e0             	lea    -0x20(%ebp),%esp
  4090bc:	5f                   	pop    %edi
  4090bd:	5e                   	pop    %esi
  4090be:	5b                   	pop    %ebx
  4090bf:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  4090c2:	33 cd                	xor    %ebp,%ecx
  4090c4:	e8 76 ce ff ff       	call   0x405f3f
  4090c9:	c9                   	leave  
  4090ca:	c3                   	ret    
  4090cb:	8b ff                	mov    %edi,%edi
  4090cd:	55                   	push   %ebp
  4090ce:	8b ec                	mov    %esp,%ebp
  4090d0:	83 ec 10             	sub    $0x10,%esp
  4090d3:	ff 75 08             	pushl  0x8(%ebp)
  4090d6:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  4090d9:	e8 e3 84 ff ff       	call   0x4015c1
  4090de:	ff 75 28             	pushl  0x28(%ebp)
  4090e1:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  4090e4:	ff 75 24             	pushl  0x24(%ebp)
  4090e7:	ff 75 20             	pushl  0x20(%ebp)
  4090ea:	ff 75 1c             	pushl  0x1c(%ebp)
  4090ed:	ff 75 18             	pushl  0x18(%ebp)
  4090f0:	ff 75 14             	pushl  0x14(%ebp)
  4090f3:	ff 75 10             	pushl  0x10(%ebp)
  4090f6:	ff 75 0c             	pushl  0xc(%ebp)
  4090f9:	e8 28 fc ff ff       	call   0x408d26
  4090fe:	83 c4 20             	add    $0x20,%esp
  409101:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
  409105:	74 07                	je     0x40910e
  409107:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  40910a:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  40910e:	c9                   	leave  
  40910f:	c3                   	ret    
  409110:	8b ff                	mov    %edi,%edi
  409112:	55                   	push   %ebp
  409113:	8b ec                	mov    %esp,%ebp
  409115:	51                   	push   %ecx
  409116:	51                   	push   %ecx
  409117:	a1 00 e4 40 00       	mov    0x40e400,%eax
  40911c:	33 c5                	xor    %ebp,%eax
  40911e:	89 45 fc             	mov    %eax,-0x4(%ebp)
  409121:	a1 74 f6 40 00       	mov    0x40f674,%eax
  409126:	53                   	push   %ebx
  409127:	56                   	push   %esi
  409128:	33 db                	xor    %ebx,%ebx
  40912a:	57                   	push   %edi
  40912b:	8b f9                	mov    %ecx,%edi
  40912d:	3b c3                	cmp    %ebx,%eax
  40912f:	75 3a                	jne    0x40916b
  409131:	8d 45 f8             	lea    -0x8(%ebp),%eax
  409134:	50                   	push   %eax
  409135:	33 f6                	xor    %esi,%esi
  409137:	46                   	inc    %esi
  409138:	56                   	push   %esi
  409139:	68 ec c9 40 00       	push   $0x40c9ec
  40913e:	56                   	push   %esi
  40913f:	ff 15 e4 c0 40 00    	call   *0x40c0e4
  409145:	85 c0                	test   %eax,%eax
  409147:	74 08                	je     0x409151
  409149:	89 35 74 f6 40 00    	mov    %esi,0x40f674
  40914f:	eb 34                	jmp    0x409185
  409151:	ff 15 4c c0 40 00    	call   *0x40c04c
  409157:	83 f8 78             	cmp    $0x78,%eax
  40915a:	75 0a                	jne    0x409166
  40915c:	6a 02                	push   $0x2
  40915e:	58                   	pop    %eax
  40915f:	a3 74 f6 40 00       	mov    %eax,0x40f674
  409164:	eb 05                	jmp    0x40916b
  409166:	a1 74 f6 40 00       	mov    0x40f674,%eax
  40916b:	83 f8 02             	cmp    $0x2,%eax
  40916e:	0f 84 cf 00 00 00    	je     0x409243
  409174:	3b c3                	cmp    %ebx,%eax
  409176:	0f 84 c7 00 00 00    	je     0x409243
  40917c:	83 f8 01             	cmp    $0x1,%eax
  40917f:	0f 85 e8 00 00 00    	jne    0x40926d
  409185:	89 5d f8             	mov    %ebx,-0x8(%ebp)
  409188:	39 5d 18             	cmp    %ebx,0x18(%ebp)
  40918b:	75 08                	jne    0x409195
  40918d:	8b 07                	mov    (%edi),%eax
  40918f:	8b 40 04             	mov    0x4(%eax),%eax
  409192:	89 45 18             	mov    %eax,0x18(%ebp)
  409195:	8b 35 b4 c0 40 00    	mov    0x40c0b4,%esi
  40919b:	33 c0                	xor    %eax,%eax
  40919d:	39 5d 20             	cmp    %ebx,0x20(%ebp)
  4091a0:	53                   	push   %ebx
  4091a1:	53                   	push   %ebx
  4091a2:	ff 75 10             	pushl  0x10(%ebp)
  4091a5:	0f 95 c0             	setne  %al
  4091a8:	ff 75 0c             	pushl  0xc(%ebp)
  4091ab:	8d 04 c5 01 00 00 00 	lea    0x1(,%eax,8),%eax
  4091b2:	50                   	push   %eax
  4091b3:	ff 75 18             	pushl  0x18(%ebp)
  4091b6:	ff d6                	call   *%esi
  4091b8:	8b f8                	mov    %eax,%edi
  4091ba:	3b fb                	cmp    %ebx,%edi
  4091bc:	0f 84 ab 00 00 00    	je     0x40926d
  4091c2:	7e 3c                	jle    0x409200
  4091c4:	81 ff f0 ff ff 7f    	cmp    $0x7ffffff0,%edi
  4091ca:	77 34                	ja     0x409200
  4091cc:	8d 44 3f 08          	lea    0x8(%edi,%edi,1),%eax
  4091d0:	3d 00 04 00 00       	cmp    $0x400,%eax
  4091d5:	77 13                	ja     0x4091ea
  4091d7:	e8 54 21 00 00       	call   0x40b330
  4091dc:	8b c4                	mov    %esp,%eax
  4091de:	3b c3                	cmp    %ebx,%eax
  4091e0:	74 1c                	je     0x4091fe
  4091e2:	c7 00 cc cc 00 00    	movl   $0xcccc,(%eax)
  4091e8:	eb 11                	jmp    0x4091fb
  4091ea:	50                   	push   %eax
  4091eb:	e8 b5 ec ff ff       	call   0x407ea5
  4091f0:	59                   	pop    %ecx
  4091f1:	3b c3                	cmp    %ebx,%eax
  4091f3:	74 09                	je     0x4091fe
  4091f5:	c7 00 dd dd 00 00    	movl   $0xdddd,(%eax)
  4091fb:	83 c0 08             	add    $0x8,%eax
  4091fe:	8b d8                	mov    %eax,%ebx
  409200:	85 db                	test   %ebx,%ebx
  409202:	74 69                	je     0x40926d
  409204:	8d 04 3f             	lea    (%edi,%edi,1),%eax
  409207:	50                   	push   %eax
  409208:	6a 00                	push   $0x0
  40920a:	53                   	push   %ebx
  40920b:	e8 e0 cd ff ff       	call   0x405ff0
  409210:	83 c4 0c             	add    $0xc,%esp
  409213:	57                   	push   %edi
  409214:	53                   	push   %ebx
  409215:	ff 75 10             	pushl  0x10(%ebp)
  409218:	ff 75 0c             	pushl  0xc(%ebp)
  40921b:	6a 01                	push   $0x1
  40921d:	ff 75 18             	pushl  0x18(%ebp)
  409220:	ff d6                	call   *%esi
  409222:	85 c0                	test   %eax,%eax
  409224:	74 11                	je     0x409237
  409226:	ff 75 14             	pushl  0x14(%ebp)
  409229:	50                   	push   %eax
  40922a:	53                   	push   %ebx
  40922b:	ff 75 08             	pushl  0x8(%ebp)
  40922e:	ff 15 e4 c0 40 00    	call   *0x40c0e4
  409234:	89 45 f8             	mov    %eax,-0x8(%ebp)
  409237:	53                   	push   %ebx
  409238:	e8 c9 fa ff ff       	call   0x408d06
  40923d:	8b 45 f8             	mov    -0x8(%ebp),%eax
  409240:	59                   	pop    %ecx
  409241:	eb 75                	jmp    0x4092b8
  409243:	33 f6                	xor    %esi,%esi
  409245:	39 5d 1c             	cmp    %ebx,0x1c(%ebp)
  409248:	75 08                	jne    0x409252
  40924a:	8b 07                	mov    (%edi),%eax
  40924c:	8b 40 14             	mov    0x14(%eax),%eax
  40924f:	89 45 1c             	mov    %eax,0x1c(%ebp)
  409252:	39 5d 18             	cmp    %ebx,0x18(%ebp)
  409255:	75 08                	jne    0x40925f
  409257:	8b 07                	mov    (%edi),%eax
  409259:	8b 40 04             	mov    0x4(%eax),%eax
  40925c:	89 45 18             	mov    %eax,0x18(%ebp)
  40925f:	ff 75 1c             	pushl  0x1c(%ebp)
  409262:	e8 c8 1e 00 00       	call   0x40b12f
  409267:	59                   	pop    %ecx
  409268:	83 f8 ff             	cmp    $0xffffffff,%eax
  40926b:	75 04                	jne    0x409271
  40926d:	33 c0                	xor    %eax,%eax
  40926f:	eb 47                	jmp    0x4092b8
  409271:	3b 45 18             	cmp    0x18(%ebp),%eax
  409274:	74 1e                	je     0x409294
  409276:	53                   	push   %ebx
  409277:	53                   	push   %ebx
  409278:	8d 4d 10             	lea    0x10(%ebp),%ecx
  40927b:	51                   	push   %ecx
  40927c:	ff 75 0c             	pushl  0xc(%ebp)
  40927f:	50                   	push   %eax
  409280:	ff 75 18             	pushl  0x18(%ebp)
  409283:	e8 f0 1e 00 00       	call   0x40b178
  409288:	8b f0                	mov    %eax,%esi
  40928a:	83 c4 18             	add    $0x18,%esp
  40928d:	3b f3                	cmp    %ebx,%esi
  40928f:	74 dc                	je     0x40926d
  409291:	89 75 0c             	mov    %esi,0xc(%ebp)
  409294:	ff 75 14             	pushl  0x14(%ebp)
  409297:	ff 75 10             	pushl  0x10(%ebp)
  40929a:	ff 75 0c             	pushl  0xc(%ebp)
  40929d:	ff 75 08             	pushl  0x8(%ebp)
  4092a0:	ff 75 1c             	pushl  0x1c(%ebp)
  4092a3:	ff 15 e0 c0 40 00    	call   *0x40c0e0
  4092a9:	8b f8                	mov    %eax,%edi
  4092ab:	3b f3                	cmp    %ebx,%esi
  4092ad:	74 07                	je     0x4092b6
  4092af:	56                   	push   %esi
  4092b0:	e8 99 b9 ff ff       	call   0x404c4e
  4092b5:	59                   	pop    %ecx
  4092b6:	8b c7                	mov    %edi,%eax
  4092b8:	8d 65 ec             	lea    -0x14(%ebp),%esp
  4092bb:	5f                   	pop    %edi
  4092bc:	5e                   	pop    %esi
  4092bd:	5b                   	pop    %ebx
  4092be:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  4092c1:	33 cd                	xor    %ebp,%ecx
  4092c3:	e8 77 cc ff ff       	call   0x405f3f
  4092c8:	c9                   	leave  
  4092c9:	c3                   	ret    
  4092ca:	8b ff                	mov    %edi,%edi
  4092cc:	55                   	push   %ebp
  4092cd:	8b ec                	mov    %esp,%ebp
  4092cf:	83 ec 10             	sub    $0x10,%esp
  4092d2:	ff 75 08             	pushl  0x8(%ebp)
  4092d5:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  4092d8:	e8 e4 82 ff ff       	call   0x4015c1
  4092dd:	ff 75 24             	pushl  0x24(%ebp)
  4092e0:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  4092e3:	ff 75 20             	pushl  0x20(%ebp)
  4092e6:	ff 75 1c             	pushl  0x1c(%ebp)
  4092e9:	ff 75 18             	pushl  0x18(%ebp)
  4092ec:	ff 75 14             	pushl  0x14(%ebp)
  4092ef:	ff 75 10             	pushl  0x10(%ebp)
  4092f2:	ff 75 0c             	pushl  0xc(%ebp)
  4092f5:	e8 16 fe ff ff       	call   0x409110
  4092fa:	83 c4 1c             	add    $0x1c,%esp
  4092fd:	80 7d fc 00          	cmpb   $0x0,-0x4(%ebp)
  409301:	74 07                	je     0x40930a
  409303:	8b 4d f8             	mov    -0x8(%ebp),%ecx
  409306:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  40930a:	c9                   	leave  
  40930b:	c3                   	ret    
  40930c:	8b ff                	mov    %edi,%edi
  40930e:	55                   	push   %ebp
  40930f:	8b ec                	mov    %esp,%ebp
  409311:	56                   	push   %esi
  409312:	8b 75 08             	mov    0x8(%ebp),%esi
  409315:	85 f6                	test   %esi,%esi
  409317:	0f 84 81 01 00 00    	je     0x40949e
  40931d:	ff 76 04             	pushl  0x4(%esi)
  409320:	e8 29 b9 ff ff       	call   0x404c4e
  409325:	ff 76 08             	pushl  0x8(%esi)
  409328:	e8 21 b9 ff ff       	call   0x404c4e
  40932d:	ff 76 0c             	pushl  0xc(%esi)
  409330:	e8 19 b9 ff ff       	call   0x404c4e
  409335:	ff 76 10             	pushl  0x10(%esi)
  409338:	e8 11 b9 ff ff       	call   0x404c4e
  40933d:	ff 76 14             	pushl  0x14(%esi)
  409340:	e8 09 b9 ff ff       	call   0x404c4e
  409345:	ff 76 18             	pushl  0x18(%esi)
  409348:	e8 01 b9 ff ff       	call   0x404c4e
  40934d:	ff 36                	pushl  (%esi)
  40934f:	e8 fa b8 ff ff       	call   0x404c4e
  409354:	ff 76 20             	pushl  0x20(%esi)
  409357:	e8 f2 b8 ff ff       	call   0x404c4e
  40935c:	ff 76 24             	pushl  0x24(%esi)
  40935f:	e8 ea b8 ff ff       	call   0x404c4e
  409364:	ff 76 28             	pushl  0x28(%esi)
  409367:	e8 e2 b8 ff ff       	call   0x404c4e
  40936c:	ff 76 2c             	pushl  0x2c(%esi)
  40936f:	e8 da b8 ff ff       	call   0x404c4e
  409374:	ff 76 30             	pushl  0x30(%esi)
  409377:	e8 d2 b8 ff ff       	call   0x404c4e
  40937c:	ff 76 34             	pushl  0x34(%esi)
  40937f:	e8 ca b8 ff ff       	call   0x404c4e
  409384:	ff 76 1c             	pushl  0x1c(%esi)
  409387:	e8 c2 b8 ff ff       	call   0x404c4e
  40938c:	ff 76 38             	pushl  0x38(%esi)
  40938f:	e8 ba b8 ff ff       	call   0x404c4e
  409394:	ff 76 3c             	pushl  0x3c(%esi)
  409397:	e8 b2 b8 ff ff       	call   0x404c4e
  40939c:	83 c4 40             	add    $0x40,%esp
  40939f:	ff 76 40             	pushl  0x40(%esi)
  4093a2:	e8 a7 b8 ff ff       	call   0x404c4e
  4093a7:	ff 76 44             	pushl  0x44(%esi)
  4093aa:	e8 9f b8 ff ff       	call   0x404c4e
  4093af:	ff 76 48             	pushl  0x48(%esi)
  4093b2:	e8 97 b8 ff ff       	call   0x404c4e
  4093b7:	ff 76 4c             	pushl  0x4c(%esi)
  4093ba:	e8 8f b8 ff ff       	call   0x404c4e
  4093bf:	ff 76 50             	pushl  0x50(%esi)
  4093c2:	e8 87 b8 ff ff       	call   0x404c4e
  4093c7:	ff 76 54             	pushl  0x54(%esi)
  4093ca:	e8 7f b8 ff ff       	call   0x404c4e
  4093cf:	ff 76 58             	pushl  0x58(%esi)
  4093d2:	e8 77 b8 ff ff       	call   0x404c4e
  4093d7:	ff 76 5c             	pushl  0x5c(%esi)
  4093da:	e8 6f b8 ff ff       	call   0x404c4e
  4093df:	ff 76 60             	pushl  0x60(%esi)
  4093e2:	e8 67 b8 ff ff       	call   0x404c4e
  4093e7:	ff 76 64             	pushl  0x64(%esi)
  4093ea:	e8 5f b8 ff ff       	call   0x404c4e
  4093ef:	ff 76 68             	pushl  0x68(%esi)
  4093f2:	e8 57 b8 ff ff       	call   0x404c4e
  4093f7:	ff 76 6c             	pushl  0x6c(%esi)
  4093fa:	e8 4f b8 ff ff       	call   0x404c4e
  4093ff:	ff 76 70             	pushl  0x70(%esi)
  409402:	e8 47 b8 ff ff       	call   0x404c4e
  409407:	ff 76 74             	pushl  0x74(%esi)
  40940a:	e8 3f b8 ff ff       	call   0x404c4e
  40940f:	ff 76 78             	pushl  0x78(%esi)
  409412:	e8 37 b8 ff ff       	call   0x404c4e
  409417:	ff 76 7c             	pushl  0x7c(%esi)
  40941a:	e8 2f b8 ff ff       	call   0x404c4e
  40941f:	83 c4 40             	add    $0x40,%esp
  409422:	ff b6 80 00 00 00    	pushl  0x80(%esi)
  409428:	e8 21 b8 ff ff       	call   0x404c4e
  40942d:	ff b6 84 00 00 00    	pushl  0x84(%esi)
  409433:	e8 16 b8 ff ff       	call   0x404c4e
  409438:	ff b6 88 00 00 00    	pushl  0x88(%esi)
  40943e:	e8 0b b8 ff ff       	call   0x404c4e
  409443:	ff b6 8c 00 00 00    	pushl  0x8c(%esi)
  409449:	e8 00 b8 ff ff       	call   0x404c4e
  40944e:	ff b6 90 00 00 00    	pushl  0x90(%esi)
  409454:	e8 f5 b7 ff ff       	call   0x404c4e
  409459:	ff b6 94 00 00 00    	pushl  0x94(%esi)
  40945f:	e8 ea b7 ff ff       	call   0x404c4e
  409464:	ff b6 98 00 00 00    	pushl  0x98(%esi)
  40946a:	e8 df b7 ff ff       	call   0x404c4e
  40946f:	ff b6 9c 00 00 00    	pushl  0x9c(%esi)
  409475:	e8 d4 b7 ff ff       	call   0x404c4e
  40947a:	ff b6 a0 00 00 00    	pushl  0xa0(%esi)
  409480:	e8 c9 b7 ff ff       	call   0x404c4e
  409485:	ff b6 a4 00 00 00    	pushl  0xa4(%esi)
  40948b:	e8 be b7 ff ff       	call   0x404c4e
  409490:	ff b6 a8 00 00 00    	pushl  0xa8(%esi)
  409496:	e8 b3 b7 ff ff       	call   0x404c4e
  40949b:	83 c4 2c             	add    $0x2c,%esp
  40949e:	5e                   	pop    %esi
  40949f:	5d                   	pop    %ebp
  4094a0:	c3                   	ret    
  4094a1:	8b ff                	mov    %edi,%edi
  4094a3:	55                   	push   %ebp
  4094a4:	8b ec                	mov    %esp,%ebp
  4094a6:	56                   	push   %esi
  4094a7:	8b 75 08             	mov    0x8(%ebp),%esi
  4094aa:	85 f6                	test   %esi,%esi
  4094ac:	74 35                	je     0x4094e3
  4094ae:	8b 06                	mov    (%esi),%eax
  4094b0:	3b 05 58 ed 40 00    	cmp    0x40ed58,%eax
  4094b6:	74 07                	je     0x4094bf
  4094b8:	50                   	push   %eax
  4094b9:	e8 90 b7 ff ff       	call   0x404c4e
  4094be:	59                   	pop    %ecx
  4094bf:	8b 46 04             	mov    0x4(%esi),%eax
  4094c2:	3b 05 5c ed 40 00    	cmp    0x40ed5c,%eax
  4094c8:	74 07                	je     0x4094d1
  4094ca:	50                   	push   %eax
  4094cb:	e8 7e b7 ff ff       	call   0x404c4e
  4094d0:	59                   	pop    %ecx
  4094d1:	8b 76 08             	mov    0x8(%esi),%esi
  4094d4:	3b 35 60 ed 40 00    	cmp    0x40ed60,%esi
  4094da:	74 07                	je     0x4094e3
  4094dc:	56                   	push   %esi
  4094dd:	e8 6c b7 ff ff       	call   0x404c4e
  4094e2:	59                   	pop    %ecx
  4094e3:	5e                   	pop    %esi
  4094e4:	5d                   	pop    %ebp
  4094e5:	c3                   	ret    
  4094e6:	8b ff                	mov    %edi,%edi
  4094e8:	55                   	push   %ebp
  4094e9:	8b ec                	mov    %esp,%ebp
  4094eb:	56                   	push   %esi
  4094ec:	8b 75 08             	mov    0x8(%ebp),%esi
  4094ef:	85 f6                	test   %esi,%esi
  4094f1:	74 7e                	je     0x409571
  4094f3:	8b 46 0c             	mov    0xc(%esi),%eax
  4094f6:	3b 05 64 ed 40 00    	cmp    0x40ed64,%eax
  4094fc:	74 07                	je     0x409505
  4094fe:	50                   	push   %eax
  4094ff:	e8 4a b7 ff ff       	call   0x404c4e
  409504:	59                   	pop    %ecx
  409505:	8b 46 10             	mov    0x10(%esi),%eax
  409508:	3b 05 68 ed 40 00    	cmp    0x40ed68,%eax
  40950e:	74 07                	je     0x409517
  409510:	50                   	push   %eax
  409511:	e8 38 b7 ff ff       	call   0x404c4e
  409516:	59                   	pop    %ecx
  409517:	8b 46 14             	mov    0x14(%esi),%eax
  40951a:	3b 05 6c ed 40 00    	cmp    0x40ed6c,%eax
  409520:	74 07                	je     0x409529
  409522:	50                   	push   %eax
  409523:	e8 26 b7 ff ff       	call   0x404c4e
  409528:	59                   	pop    %ecx
  409529:	8b 46 18             	mov    0x18(%esi),%eax
  40952c:	3b 05 70 ed 40 00    	cmp    0x40ed70,%eax
  409532:	74 07                	je     0x40953b
  409534:	50                   	push   %eax
  409535:	e8 14 b7 ff ff       	call   0x404c4e
  40953a:	59                   	pop    %ecx
  40953b:	8b 46 1c             	mov    0x1c(%esi),%eax
  40953e:	3b 05 74 ed 40 00    	cmp    0x40ed74,%eax
  409544:	74 07                	je     0x40954d
  409546:	50                   	push   %eax
  409547:	e8 02 b7 ff ff       	call   0x404c4e
  40954c:	59                   	pop    %ecx
  40954d:	8b 46 20             	mov    0x20(%esi),%eax
  409550:	3b 05 78 ed 40 00    	cmp    0x40ed78,%eax
  409556:	74 07                	je     0x40955f
  409558:	50                   	push   %eax
  409559:	e8 f0 b6 ff ff       	call   0x404c4e
  40955e:	59                   	pop    %ecx
  40955f:	8b 76 24             	mov    0x24(%esi),%esi
  409562:	3b 35 7c ed 40 00    	cmp    0x40ed7c,%esi
  409568:	74 07                	je     0x409571
  40956a:	56                   	push   %esi
  40956b:	e8 de b6 ff ff       	call   0x404c4e
  409570:	59                   	pop    %ecx
  409571:	5e                   	pop    %esi
  409572:	5d                   	pop    %ebp
  409573:	c3                   	ret    
  409574:	cc                   	int3   
  409575:	cc                   	int3   
  409576:	cc                   	int3   
  409577:	cc                   	int3   
  409578:	cc                   	int3   
  409579:	cc                   	int3   
  40957a:	cc                   	int3   
  40957b:	cc                   	int3   
  40957c:	cc                   	int3   
  40957d:	cc                   	int3   
  40957e:	cc                   	int3   
  40957f:	cc                   	int3   
  409580:	55                   	push   %ebp
  409581:	8b ec                	mov    %esp,%ebp
  409583:	56                   	push   %esi
  409584:	33 c0                	xor    %eax,%eax
  409586:	50                   	push   %eax
  409587:	50                   	push   %eax
  409588:	50                   	push   %eax
  409589:	50                   	push   %eax
  40958a:	50                   	push   %eax
  40958b:	50                   	push   %eax
  40958c:	50                   	push   %eax
  40958d:	50                   	push   %eax
  40958e:	8b 55 0c             	mov    0xc(%ebp),%edx
  409591:	8d 49 00             	lea    0x0(%ecx),%ecx
  409594:	8a 02                	mov    (%edx),%al
  409596:	0a c0                	or     %al,%al
  409598:	74 09                	je     0x4095a3
  40959a:	83 c2 01             	add    $0x1,%edx
  40959d:	0f ab 04 24          	bts    %eax,(%esp)
  4095a1:	eb f1                	jmp    0x409594
  4095a3:	8b 75 08             	mov    0x8(%ebp),%esi
  4095a6:	83 c9 ff             	or     $0xffffffff,%ecx
  4095a9:	8d 49 00             	lea    0x0(%ecx),%ecx
  4095ac:	83 c1 01             	add    $0x1,%ecx
  4095af:	8a 06                	mov    (%esi),%al
  4095b1:	0a c0                	or     %al,%al
  4095b3:	74 09                	je     0x4095be
  4095b5:	83 c6 01             	add    $0x1,%esi
  4095b8:	0f a3 04 24          	bt     %eax,(%esp)
  4095bc:	73 ee                	jae    0x4095ac
  4095be:	8b c1                	mov    %ecx,%eax
  4095c0:	83 c4 20             	add    $0x20,%esp
  4095c3:	5e                   	pop    %esi
  4095c4:	c9                   	leave  
  4095c5:	c3                   	ret    
  4095c6:	cc                   	int3   
  4095c7:	cc                   	int3   
  4095c8:	cc                   	int3   
  4095c9:	cc                   	int3   
  4095ca:	cc                   	int3   
  4095cb:	cc                   	int3   
  4095cc:	cc                   	int3   
  4095cd:	cc                   	int3   
  4095ce:	cc                   	int3   
  4095cf:	cc                   	int3   
  4095d0:	8b 54 24 04          	mov    0x4(%esp),%edx
  4095d4:	8b 4c 24 08          	mov    0x8(%esp),%ecx
  4095d8:	f7 c2 03 00 00 00    	test   $0x3,%edx
  4095de:	75 3c                	jne    0x40961c
  4095e0:	8b 02                	mov    (%edx),%eax
  4095e2:	3a 01                	cmp    (%ecx),%al
  4095e4:	75 2e                	jne    0x409614
  4095e6:	0a c0                	or     %al,%al
  4095e8:	74 26                	je     0x409610
  4095ea:	3a 61 01             	cmp    0x1(%ecx),%ah
  4095ed:	75 25                	jne    0x409614
  4095ef:	0a e4                	or     %ah,%ah
  4095f1:	74 1d                	je     0x409610
  4095f3:	c1 e8 10             	shr    $0x10,%eax
  4095f6:	3a 41 02             	cmp    0x2(%ecx),%al
  4095f9:	75 19                	jne    0x409614
  4095fb:	0a c0                	or     %al,%al
  4095fd:	74 11                	je     0x409610
  4095ff:	3a 61 03             	cmp    0x3(%ecx),%ah
  409602:	75 10                	jne    0x409614
  409604:	83 c1 04             	add    $0x4,%ecx
  409607:	83 c2 04             	add    $0x4,%edx
  40960a:	0a e4                	or     %ah,%ah
  40960c:	75 d2                	jne    0x4095e0
  40960e:	8b ff                	mov    %edi,%edi
  409610:	33 c0                	xor    %eax,%eax
  409612:	c3                   	ret    
  409613:	90                   	nop    
  409614:	1b c0                	sbb    %eax,%eax
  409616:	d1 e0                	shl    %eax
  409618:	83 c0 01             	add    $0x1,%eax
  40961b:	c3                   	ret    
  40961c:	f7 c2 01 00 00 00    	test   $0x1,%edx
  409622:	74 18                	je     0x40963c
  409624:	8a 02                	mov    (%edx),%al
  409626:	83 c2 01             	add    $0x1,%edx
  409629:	3a 01                	cmp    (%ecx),%al
  40962b:	75 e7                	jne    0x409614
  40962d:	83 c1 01             	add    $0x1,%ecx
  409630:	0a c0                	or     %al,%al
  409632:	74 dc                	je     0x409610
  409634:	f7 c2 02 00 00 00    	test   $0x2,%edx
  40963a:	74 a4                	je     0x4095e0
  40963c:	66 8b 02             	mov    (%edx),%ax
  40963f:	83 c2 02             	add    $0x2,%edx
  409642:	3a 01                	cmp    (%ecx),%al
  409644:	75 ce                	jne    0x409614
  409646:	0a c0                	or     %al,%al
  409648:	74 c6                	je     0x409610
  40964a:	3a 61 01             	cmp    0x1(%ecx),%ah
  40964d:	75 c5                	jne    0x409614
  40964f:	0a e4                	or     %ah,%ah
  409651:	74 bd                	je     0x409610
  409653:	83 c1 02             	add    $0x2,%ecx
  409656:	eb 88                	jmp    0x4095e0
  409658:	cc                   	int3   
  409659:	cc                   	int3   
  40965a:	cc                   	int3   
  40965b:	cc                   	int3   
  40965c:	cc                   	int3   
  40965d:	cc                   	int3   
  40965e:	cc                   	int3   
  40965f:	cc                   	int3   
  409660:	55                   	push   %ebp
  409661:	8b ec                	mov    %esp,%ebp
  409663:	56                   	push   %esi
  409664:	33 c0                	xor    %eax,%eax
  409666:	50                   	push   %eax
  409667:	50                   	push   %eax
  409668:	50                   	push   %eax
  409669:	50                   	push   %eax
  40966a:	50                   	push   %eax
  40966b:	50                   	push   %eax
  40966c:	50                   	push   %eax
  40966d:	50                   	push   %eax
  40966e:	8b 55 0c             	mov    0xc(%ebp),%edx
  409671:	8d 49 00             	lea    0x0(%ecx),%ecx
  409674:	8a 02                	mov    (%edx),%al
  409676:	0a c0                	or     %al,%al
  409678:	74 09                	je     0x409683
  40967a:	83 c2 01             	add    $0x1,%edx
  40967d:	0f ab 04 24          	bts    %eax,(%esp)
  409681:	eb f1                	jmp    0x409674
  409683:	8b 75 08             	mov    0x8(%ebp),%esi
  409686:	8b ff                	mov    %edi,%edi
  409688:	8a 06                	mov    (%esi),%al
  40968a:	0a c0                	or     %al,%al
  40968c:	74 0c                	je     0x40969a
  40968e:	83 c6 01             	add    $0x1,%esi
  409691:	0f a3 04 24          	bt     %eax,(%esp)
  409695:	73 f1                	jae    0x409688
  409697:	8d 46 ff             	lea    -0x1(%esi),%eax
  40969a:	83 c4 20             	add    $0x20,%esp
  40969d:	5e                   	pop    %esi
  40969e:	c9                   	leave  
  40969f:	c3                   	ret    
  4096a0:	8b ff                	mov    %edi,%edi
  4096a2:	55                   	push   %ebp
  4096a3:	8b ec                	mov    %esp,%ebp
  4096a5:	51                   	push   %ecx
  4096a6:	51                   	push   %ecx
  4096a7:	8b 45 0c             	mov    0xc(%ebp),%eax
  4096aa:	56                   	push   %esi
  4096ab:	8b 75 08             	mov    0x8(%ebp),%esi
  4096ae:	89 45 f8             	mov    %eax,-0x8(%ebp)
  4096b1:	8b 45 10             	mov    0x10(%ebp),%eax
  4096b4:	57                   	push   %edi
  4096b5:	56                   	push   %esi
  4096b6:	89 45 fc             	mov    %eax,-0x4(%ebp)
  4096b9:	e8 33 19 00 00       	call   0x40aff1
  4096be:	83 cf ff             	or     $0xffffffff,%edi
  4096c1:	59                   	pop    %ecx
  4096c2:	3b c7                	cmp    %edi,%eax
  4096c4:	75 11                	jne    0x4096d7
  4096c6:	e8 5a 8d ff ff       	call   0x402425
  4096cb:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  4096d1:	8b c7                	mov    %edi,%eax
  4096d3:	8b d7                	mov    %edi,%edx
  4096d5:	eb 4a                	jmp    0x409721
  4096d7:	ff 75 14             	pushl  0x14(%ebp)
  4096da:	8d 4d fc             	lea    -0x4(%ebp),%ecx
  4096dd:	51                   	push   %ecx
  4096de:	ff 75 f8             	pushl  -0x8(%ebp)
  4096e1:	50                   	push   %eax
  4096e2:	ff 15 ec c0 40 00    	call   *0x40c0ec
  4096e8:	89 45 f8             	mov    %eax,-0x8(%ebp)
  4096eb:	3b c7                	cmp    %edi,%eax
  4096ed:	75 13                	jne    0x409702
  4096ef:	ff 15 4c c0 40 00    	call   *0x40c04c
  4096f5:	85 c0                	test   %eax,%eax
  4096f7:	74 09                	je     0x409702
  4096f9:	50                   	push   %eax
  4096fa:	e8 4c 8d ff ff       	call   0x40244b
  4096ff:	59                   	pop    %ecx
  409700:	eb cf                	jmp    0x4096d1
  409702:	8b c6                	mov    %esi,%eax
  409704:	c1 f8 05             	sar    $0x5,%eax
  409707:	8b 04 85 a0 fa 40 00 	mov    0x40faa0(,%eax,4),%eax
  40970e:	83 e6 1f             	and    $0x1f,%esi
  409711:	c1 e6 06             	shl    $0x6,%esi
  409714:	8d 44 30 04          	lea    0x4(%eax,%esi,1),%eax
  409718:	80 20 fd             	andb   $0xfd,(%eax)
  40971b:	8b 45 f8             	mov    -0x8(%ebp),%eax
  40971e:	8b 55 fc             	mov    -0x4(%ebp),%edx
  409721:	5f                   	pop    %edi
  409722:	5e                   	pop    %esi
  409723:	c9                   	leave  
  409724:	c3                   	ret    
  409725:	6a 14                	push   $0x14
  409727:	68 18 d7 40 00       	push   $0x40d718
  40972c:	e8 3f 8d ff ff       	call   0x402470
  409731:	83 ce ff             	or     $0xffffffff,%esi
  409734:	89 75 dc             	mov    %esi,-0x24(%ebp)
  409737:	89 75 e0             	mov    %esi,-0x20(%ebp)
  40973a:	8b 45 08             	mov    0x8(%ebp),%eax
  40973d:	83 f8 fe             	cmp    $0xfffffffe,%eax
  409740:	75 1c                	jne    0x40975e
  409742:	e8 f1 8c ff ff       	call   0x402438
  409747:	83 20 00             	andl   $0x0,(%eax)
  40974a:	e8 d6 8c ff ff       	call   0x402425
  40974f:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  409755:	8b c6                	mov    %esi,%eax
  409757:	8b d6                	mov    %esi,%edx
  409759:	e9 d0 00 00 00       	jmp    0x40982e
  40975e:	33 ff                	xor    %edi,%edi
  409760:	3b c7                	cmp    %edi,%eax
  409762:	7c 08                	jl     0x40976c
  409764:	3b 05 84 fa 40 00    	cmp    0x40fa84,%eax
  40976a:	72 21                	jb     0x40978d
  40976c:	e8 c7 8c ff ff       	call   0x402438
  409771:	89 38                	mov    %edi,(%eax)
  409773:	e8 ad 8c ff ff       	call   0x402425
  409778:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40977e:	57                   	push   %edi
  40977f:	57                   	push   %edi
  409780:	57                   	push   %edi
  409781:	57                   	push   %edi
  409782:	57                   	push   %edi
  409783:	e8 35 8c ff ff       	call   0x4023bd
  409788:	83 c4 14             	add    $0x14,%esp
  40978b:	eb c8                	jmp    0x409755
  40978d:	8b c8                	mov    %eax,%ecx
  40978f:	c1 f9 05             	sar    $0x5,%ecx
  409792:	8d 1c 8d a0 fa 40 00 	lea    0x40faa0(,%ecx,4),%ebx
  409799:	8b f0                	mov    %eax,%esi
  40979b:	83 e6 1f             	and    $0x1f,%esi
  40979e:	c1 e6 06             	shl    $0x6,%esi
  4097a1:	8b 0b                	mov    (%ebx),%ecx
  4097a3:	0f be 4c 31 04       	movsbl 0x4(%ecx,%esi,1),%ecx
  4097a8:	83 e1 01             	and    $0x1,%ecx
  4097ab:	75 26                	jne    0x4097d3
  4097ad:	e8 86 8c ff ff       	call   0x402438
  4097b2:	89 38                	mov    %edi,(%eax)
  4097b4:	e8 6c 8c ff ff       	call   0x402425
  4097b9:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  4097bf:	57                   	push   %edi
  4097c0:	57                   	push   %edi
  4097c1:	57                   	push   %edi
  4097c2:	57                   	push   %edi
  4097c3:	57                   	push   %edi
  4097c4:	e8 f4 8b ff ff       	call   0x4023bd
  4097c9:	83 c4 14             	add    $0x14,%esp
  4097cc:	83 ca ff             	or     $0xffffffff,%edx
  4097cf:	8b c2                	mov    %edx,%eax
  4097d1:	eb 5b                	jmp    0x40982e
  4097d3:	50                   	push   %eax
  4097d4:	e8 8f 18 00 00       	call   0x40b068
  4097d9:	59                   	pop    %ecx
  4097da:	89 7d fc             	mov    %edi,-0x4(%ebp)
  4097dd:	8b 03                	mov    (%ebx),%eax
  4097df:	f6 44 30 04 01       	testb  $0x1,0x4(%eax,%esi,1)
  4097e4:	74 1c                	je     0x409802
  4097e6:	ff 75 14             	pushl  0x14(%ebp)
  4097e9:	ff 75 10             	pushl  0x10(%ebp)
  4097ec:	ff 75 0c             	pushl  0xc(%ebp)
  4097ef:	ff 75 08             	pushl  0x8(%ebp)
  4097f2:	e8 a9 fe ff ff       	call   0x4096a0
  4097f7:	83 c4 10             	add    $0x10,%esp
  4097fa:	89 45 dc             	mov    %eax,-0x24(%ebp)
  4097fd:	89 55 e0             	mov    %edx,-0x20(%ebp)
  409800:	eb 1a                	jmp    0x40981c
  409802:	e8 1e 8c ff ff       	call   0x402425
  409807:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40980d:	e8 26 8c ff ff       	call   0x402438
  409812:	89 38                	mov    %edi,(%eax)
  409814:	83 4d dc ff          	orl    $0xffffffff,-0x24(%ebp)
  409818:	83 4d e0 ff          	orl    $0xffffffff,-0x20(%ebp)
  40981c:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  409823:	e8 0c 00 00 00       	call   0x409834
  409828:	8b 45 dc             	mov    -0x24(%ebp),%eax
  40982b:	8b 55 e0             	mov    -0x20(%ebp),%edx
  40982e:	e8 82 8c ff ff       	call   0x4024b5
  409833:	c3                   	ret    
  409834:	ff 75 08             	pushl  0x8(%ebp)
  409837:	e8 cc 18 00 00       	call   0x40b108
  40983c:	59                   	pop    %ecx
  40983d:	c3                   	ret    
  40983e:	8b ff                	mov    %edi,%edi
  409840:	55                   	push   %ebp
  409841:	8b ec                	mov    %esp,%ebp
  409843:	ff 05 10 f0 40 00    	incl   0x40f010
  409849:	68 00 10 00 00       	push   $0x1000
  40984e:	e8 ca b2 ff ff       	call   0x404b1d
  409853:	59                   	pop    %ecx
  409854:	8b 4d 08             	mov    0x8(%ebp),%ecx
  409857:	89 41 08             	mov    %eax,0x8(%ecx)
  40985a:	85 c0                	test   %eax,%eax
  40985c:	74 0d                	je     0x40986b
  40985e:	83 49 0c 08          	orl    $0x8,0xc(%ecx)
  409862:	c7 41 18 00 10 00 00 	movl   $0x1000,0x18(%ecx)
  409869:	eb 11                	jmp    0x40987c
  40986b:	83 49 0c 04          	orl    $0x4,0xc(%ecx)
  40986f:	8d 41 14             	lea    0x14(%ecx),%eax
  409872:	89 41 08             	mov    %eax,0x8(%ecx)
  409875:	c7 41 18 02 00 00 00 	movl   $0x2,0x18(%ecx)
  40987c:	8b 41 08             	mov    0x8(%ecx),%eax
  40987f:	83 61 04 00          	andl   $0x0,0x4(%ecx)
  409883:	89 01                	mov    %eax,(%ecx)
  409885:	5d                   	pop    %ebp
  409886:	c3                   	ret    
  409887:	6a 02                	push   $0x2
  409889:	e8 d5 9e ff ff       	call   0x403763
  40988e:	59                   	pop    %ecx
  40988f:	c3                   	ret    
  409890:	8b ff                	mov    %edi,%edi
  409892:	55                   	push   %ebp
  409893:	8b ec                	mov    %esp,%ebp
  409895:	81 ec 28 03 00 00    	sub    $0x328,%esp
  40989b:	a3 88 f7 40 00       	mov    %eax,0x40f788
  4098a0:	89 0d 84 f7 40 00    	mov    %ecx,0x40f784
  4098a6:	89 15 80 f7 40 00    	mov    %edx,0x40f780
  4098ac:	89 1d 7c f7 40 00    	mov    %ebx,0x40f77c
  4098b2:	89 35 78 f7 40 00    	mov    %esi,0x40f778
  4098b8:	89 3d 74 f7 40 00    	mov    %edi,0x40f774
  4098be:	66                   	data16
  4098bf:	8c 15 a0 f7 40 00    	mov    %ss,0x40f7a0
  4098c5:	66                   	data16
  4098c6:	8c 0d 94 f7 40 00    	mov    %cs,0x40f794
  4098cc:	66                   	data16
  4098cd:	8c 1d 70 f7 40 00    	mov    %ds,0x40f770
  4098d3:	66                   	data16
  4098d4:	8c 05 6c f7 40 00    	mov    %es,0x40f76c
  4098da:	66                   	data16
  4098db:	8c 25 68 f7 40 00    	mov    %fs,0x40f768
  4098e1:	66                   	data16
  4098e2:	8c 2d 64 f7 40 00    	mov    %gs,0x40f764
  4098e8:	9c                   	pushf  
  4098e9:	8f 05 98 f7 40 00    	popl   0x40f798
  4098ef:	8b 45 00             	mov    0x0(%ebp),%eax
  4098f2:	a3 8c f7 40 00       	mov    %eax,0x40f78c
  4098f7:	8b 45 04             	mov    0x4(%ebp),%eax
  4098fa:	a3 90 f7 40 00       	mov    %eax,0x40f790
  4098ff:	8d 45 08             	lea    0x8(%ebp),%eax
  409902:	a3 9c f7 40 00       	mov    %eax,0x40f79c
  409907:	8b 85 e0 fc ff ff    	mov    -0x320(%ebp),%eax
  40990d:	c7 05 d8 f6 40 00 01 	movl   $0x10001,0x40f6d8
  409914:	00 01 00 
  409917:	a1 90 f7 40 00       	mov    0x40f790,%eax
  40991c:	a3 8c f6 40 00       	mov    %eax,0x40f68c
  409921:	c7 05 80 f6 40 00 09 	movl   $0xc0000409,0x40f680
  409928:	04 00 c0 
  40992b:	c7 05 84 f6 40 00 01 	movl   $0x1,0x40f684
  409932:	00 00 00 
  409935:	a1 00 e4 40 00       	mov    0x40e400,%eax
  40993a:	89 85 d8 fc ff ff    	mov    %eax,-0x328(%ebp)
  409940:	a1 04 e4 40 00       	mov    0x40e404,%eax
  409945:	89 85 dc fc ff ff    	mov    %eax,-0x324(%ebp)
  40994b:	ff 15 1c c0 40 00    	call   *0x40c01c
  409951:	a3 d0 f6 40 00       	mov    %eax,0x40f6d0
  409956:	6a 01                	push   $0x1
  409958:	e8 88 c6 ff ff       	call   0x405fe5
  40995d:	59                   	pop    %ecx
  40995e:	6a 00                	push   $0x0
  409960:	ff 15 18 c0 40 00    	call   *0x40c018
  409966:	68 24 d3 40 00       	push   $0x40d324
  40996b:	ff 15 14 c0 40 00    	call   *0x40c014
  409971:	83 3d d0 f6 40 00 00 	cmpl   $0x0,0x40f6d0
  409978:	75 08                	jne    0x409982
  40997a:	6a 01                	push   $0x1
  40997c:	e8 64 c6 ff ff       	call   0x405fe5
  409981:	59                   	pop    %ecx
  409982:	68 09 04 00 c0       	push   $0xc0000409
  409987:	ff 15 10 c0 40 00    	call   *0x40c010
  40998d:	50                   	push   %eax
  40998e:	ff 15 0c c0 40 00    	call   *0x40c00c
  409994:	c9                   	leave  
  409995:	c3                   	ret    
  409996:	55                   	push   %ebp
  409997:	8b ec                	mov    %esp,%ebp
  409999:	83 ec 04             	sub    $0x4,%esp
  40999c:	89 7d fc             	mov    %edi,-0x4(%ebp)
  40999f:	8b 7d 08             	mov    0x8(%ebp),%edi
  4099a2:	8b 4d 0c             	mov    0xc(%ebp),%ecx
  4099a5:	c1 e9 07             	shr    $0x7,%ecx
  4099a8:	66 0f ef c0          	pxor   %xmm0,%xmm0
  4099ac:	eb 08                	jmp    0x4099b6
  4099ae:	8d a4 24 00 00 00 00 	lea    0x0(%esp),%esp
  4099b5:	90                   	nop    
  4099b6:	66 0f 7f 07          	movdqa %xmm0,(%edi)
  4099ba:	66 0f 7f 47 10       	movdqa %xmm0,0x10(%edi)
  4099bf:	66 0f 7f 47 20       	movdqa %xmm0,0x20(%edi)
  4099c4:	66 0f 7f 47 30       	movdqa %xmm0,0x30(%edi)
  4099c9:	66 0f 7f 47 40       	movdqa %xmm0,0x40(%edi)
  4099ce:	66 0f 7f 47 50       	movdqa %xmm0,0x50(%edi)
  4099d3:	66 0f 7f 47 60       	movdqa %xmm0,0x60(%edi)
  4099d8:	66 0f 7f 47 70       	movdqa %xmm0,0x70(%edi)
  4099dd:	8d bf 80 00 00 00    	lea    0x80(%edi),%edi
  4099e3:	49                   	dec    %ecx
  4099e4:	75 d0                	jne    0x4099b6
  4099e6:	8b 7d fc             	mov    -0x4(%ebp),%edi
  4099e9:	8b e5                	mov    %ebp,%esp
  4099eb:	5d                   	pop    %ebp
  4099ec:	c3                   	ret    
  4099ed:	55                   	push   %ebp
  4099ee:	8b ec                	mov    %esp,%ebp
  4099f0:	83 ec 10             	sub    $0x10,%esp
  4099f3:	89 7d fc             	mov    %edi,-0x4(%ebp)
  4099f6:	8b 45 08             	mov    0x8(%ebp),%eax
  4099f9:	99                   	cltd   
  4099fa:	8b f8                	mov    %eax,%edi
  4099fc:	33 fa                	xor    %edx,%edi
  4099fe:	2b fa                	sub    %edx,%edi
  409a00:	83 e7 0f             	and    $0xf,%edi
  409a03:	33 fa                	xor    %edx,%edi
  409a05:	2b fa                	sub    %edx,%edi
  409a07:	85 ff                	test   %edi,%edi
  409a09:	75 3c                	jne    0x409a47
  409a0b:	8b 4d 10             	mov    0x10(%ebp),%ecx
  409a0e:	8b d1                	mov    %ecx,%edx
  409a10:	83 e2 7f             	and    $0x7f,%edx
  409a13:	89 55 f4             	mov    %edx,-0xc(%ebp)
  409a16:	3b ca                	cmp    %edx,%ecx
  409a18:	74 12                	je     0x409a2c
  409a1a:	2b ca                	sub    %edx,%ecx
  409a1c:	51                   	push   %ecx
  409a1d:	50                   	push   %eax
  409a1e:	e8 73 ff ff ff       	call   0x409996
  409a23:	83 c4 08             	add    $0x8,%esp
  409a26:	8b 45 08             	mov    0x8(%ebp),%eax
  409a29:	8b 55 f4             	mov    -0xc(%ebp),%edx
  409a2c:	85 d2                	test   %edx,%edx
  409a2e:	74 45                	je     0x409a75
  409a30:	03 45 10             	add    0x10(%ebp),%eax
  409a33:	2b c2                	sub    %edx,%eax
  409a35:	89 45 f8             	mov    %eax,-0x8(%ebp)
  409a38:	33 c0                	xor    %eax,%eax
  409a3a:	8b 7d f8             	mov    -0x8(%ebp),%edi
  409a3d:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  409a40:	f3 aa                	rep stos %al,%es:(%edi)
  409a42:	8b 45 08             	mov    0x8(%ebp),%eax
  409a45:	eb 2e                	jmp    0x409a75
  409a47:	f7 df                	neg    %edi
  409a49:	83 c7 10             	add    $0x10,%edi
  409a4c:	89 7d f0             	mov    %edi,-0x10(%ebp)
  409a4f:	33 c0                	xor    %eax,%eax
  409a51:	8b 7d 08             	mov    0x8(%ebp),%edi
  409a54:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  409a57:	f3 aa                	rep stos %al,%es:(%edi)
  409a59:	8b 45 f0             	mov    -0x10(%ebp),%eax
  409a5c:	8b 4d 08             	mov    0x8(%ebp),%ecx
  409a5f:	8b 55 10             	mov    0x10(%ebp),%edx
  409a62:	03 c8                	add    %eax,%ecx
  409a64:	2b d0                	sub    %eax,%edx
  409a66:	52                   	push   %edx
  409a67:	6a 00                	push   $0x0
  409a69:	51                   	push   %ecx
  409a6a:	e8 7e ff ff ff       	call   0x4099ed
  409a6f:	83 c4 0c             	add    $0xc,%esp
  409a72:	8b 45 08             	mov    0x8(%ebp),%eax
  409a75:	8b 7d fc             	mov    -0x4(%ebp),%edi
  409a78:	8b e5                	mov    %ebp,%esp
  409a7a:	5d                   	pop    %ebp
  409a7b:	c3                   	ret    
  409a7c:	6a 0c                	push   $0xc
  409a7e:	68 38 d7 40 00       	push   $0x40d738
  409a83:	e8 e8 89 ff ff       	call   0x402470
  409a88:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  409a8c:	66 0f 28 c1          	movapd %xmm1,%xmm0
  409a90:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
  409a97:	eb 23                	jmp    0x409abc
  409a99:	8b 45 ec             	mov    -0x14(%ebp),%eax
  409a9c:	8b 00                	mov    (%eax),%eax
  409a9e:	8b 00                	mov    (%eax),%eax
  409aa0:	3d 05 00 00 c0       	cmp    $0xc0000005,%eax
  409aa5:	74 0a                	je     0x409ab1
  409aa7:	3d 1d 00 00 c0       	cmp    $0xc000001d,%eax
  409aac:	74 03                	je     0x409ab1
  409aae:	33 c0                	xor    %eax,%eax
  409ab0:	c3                   	ret    
  409ab1:	33 c0                	xor    %eax,%eax
  409ab3:	40                   	inc    %eax
  409ab4:	c3                   	ret    
  409ab5:	8b 65 e8             	mov    -0x18(%ebp),%esp
  409ab8:	83 65 e4 00          	andl   $0x0,-0x1c(%ebp)
  409abc:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  409ac3:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  409ac6:	e8 ea 89 ff ff       	call   0x4024b5
  409acb:	c3                   	ret    
  409acc:	8b ff                	mov    %edi,%edi
  409ace:	55                   	push   %ebp
  409acf:	8b ec                	mov    %esp,%ebp
  409ad1:	83 ec 18             	sub    $0x18,%esp
  409ad4:	33 c0                	xor    %eax,%eax
  409ad6:	53                   	push   %ebx
  409ad7:	89 45 fc             	mov    %eax,-0x4(%ebp)
  409ada:	89 45 f4             	mov    %eax,-0xc(%ebp)
  409add:	89 45 f8             	mov    %eax,-0x8(%ebp)
  409ae0:	53                   	push   %ebx
  409ae1:	9c                   	pushf  
  409ae2:	58                   	pop    %eax
  409ae3:	8b c8                	mov    %eax,%ecx
  409ae5:	35 00 00 20 00       	xor    $0x200000,%eax
  409aea:	50                   	push   %eax
  409aeb:	9d                   	popf   
  409aec:	9c                   	pushf  
  409aed:	5a                   	pop    %edx
  409aee:	2b d1                	sub    %ecx,%edx
  409af0:	74 1f                	je     0x409b11
  409af2:	51                   	push   %ecx
  409af3:	9d                   	popf   
  409af4:	33 c0                	xor    %eax,%eax
  409af6:	0f a2                	cpuid  
  409af8:	89 45 f4             	mov    %eax,-0xc(%ebp)
  409afb:	89 5d e8             	mov    %ebx,-0x18(%ebp)
  409afe:	89 55 ec             	mov    %edx,-0x14(%ebp)
  409b01:	89 4d f0             	mov    %ecx,-0x10(%ebp)
  409b04:	b8 01 00 00 00       	mov    $0x1,%eax
  409b09:	0f a2                	cpuid  
  409b0b:	89 55 fc             	mov    %edx,-0x4(%ebp)
  409b0e:	89 45 f8             	mov    %eax,-0x8(%ebp)
  409b11:	5b                   	pop    %ebx
  409b12:	f7 45 fc 00 00 00 04 	testl  $0x4000000,-0x4(%ebp)
  409b19:	74 0e                	je     0x409b29
  409b1b:	e8 5c ff ff ff       	call   0x409a7c
  409b20:	85 c0                	test   %eax,%eax
  409b22:	74 05                	je     0x409b29
  409b24:	33 c0                	xor    %eax,%eax
  409b26:	40                   	inc    %eax
  409b27:	eb 02                	jmp    0x409b2b
  409b29:	33 c0                	xor    %eax,%eax
  409b2b:	5b                   	pop    %ebx
  409b2c:	c9                   	leave  
  409b2d:	c3                   	ret    
  409b2e:	e8 99 ff ff ff       	call   0x409acc
  409b33:	a3 60 fa 40 00       	mov    %eax,0x40fa60
  409b38:	33 c0                	xor    %eax,%eax
  409b3a:	c3                   	ret    
  409b3b:	cc                   	int3   
  409b3c:	55                   	push   %ebp
  409b3d:	8b ec                	mov    %esp,%ebp
  409b3f:	53                   	push   %ebx
  409b40:	56                   	push   %esi
  409b41:	57                   	push   %edi
  409b42:	55                   	push   %ebp
  409b43:	6a 00                	push   $0x0
  409b45:	6a 00                	push   $0x0
  409b47:	68 54 9b 40 00       	push   $0x409b54
  409b4c:	ff 75 08             	pushl  0x8(%ebp)
  409b4f:	e8 aa 19 00 00       	call   0x40b4fe
  409b54:	5d                   	pop    %ebp
  409b55:	5f                   	pop    %edi
  409b56:	5e                   	pop    %esi
  409b57:	5b                   	pop    %ebx
  409b58:	8b e5                	mov    %ebp,%esp
  409b5a:	5d                   	pop    %ebp
  409b5b:	c3                   	ret    
  409b5c:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  409b60:	f7 41 04 06 00 00 00 	testl  $0x6,0x4(%ecx)
  409b67:	b8 01 00 00 00       	mov    $0x1,%eax
  409b6c:	74 32                	je     0x409ba0
  409b6e:	8b 44 24 14          	mov    0x14(%esp),%eax
  409b72:	8b 48 fc             	mov    -0x4(%eax),%ecx
  409b75:	33 c8                	xor    %eax,%ecx
  409b77:	e8 c3 c3 ff ff       	call   0x405f3f
  409b7c:	55                   	push   %ebp
  409b7d:	8b 68 10             	mov    0x10(%eax),%ebp
  409b80:	8b 50 28             	mov    0x28(%eax),%edx
  409b83:	52                   	push   %edx
  409b84:	8b 50 24             	mov    0x24(%eax),%edx
  409b87:	52                   	push   %edx
  409b88:	e8 14 00 00 00       	call   0x409ba1
  409b8d:	83 c4 08             	add    $0x8,%esp
  409b90:	5d                   	pop    %ebp
  409b91:	8b 44 24 08          	mov    0x8(%esp),%eax
  409b95:	8b 54 24 10          	mov    0x10(%esp),%edx
  409b99:	89 02                	mov    %eax,(%edx)
  409b9b:	b8 03 00 00 00       	mov    $0x3,%eax
  409ba0:	c3                   	ret    
  409ba1:	53                   	push   %ebx
  409ba2:	56                   	push   %esi
  409ba3:	57                   	push   %edi
  409ba4:	8b 44 24 10          	mov    0x10(%esp),%eax
  409ba8:	55                   	push   %ebp
  409ba9:	50                   	push   %eax
  409baa:	6a fe                	push   $0xfffffffe
  409bac:	68 5c 9b 40 00       	push   $0x409b5c
  409bb1:	64 ff 35 00 00 00 00 	pushl  %fs:0x0
  409bb8:	a1 00 e4 40 00       	mov    0x40e400,%eax
  409bbd:	33 c4                	xor    %esp,%eax
  409bbf:	50                   	push   %eax
  409bc0:	8d 44 24 04          	lea    0x4(%esp),%eax
  409bc4:	64 a3 00 00 00 00    	mov    %eax,%fs:0x0
  409bca:	8b 44 24 28          	mov    0x28(%esp),%eax
  409bce:	8b 58 08             	mov    0x8(%eax),%ebx
  409bd1:	8b 70 0c             	mov    0xc(%eax),%esi
  409bd4:	83 fe ff             	cmp    $0xffffffff,%esi
  409bd7:	74 3a                	je     0x409c13
  409bd9:	83 7c 24 2c ff       	cmpl   $0xffffffff,0x2c(%esp)
  409bde:	74 06                	je     0x409be6
  409be0:	3b 74 24 2c          	cmp    0x2c(%esp),%esi
  409be4:	76 2d                	jbe    0x409c13
  409be6:	8d 34 76             	lea    (%esi,%esi,2),%esi
  409be9:	8b 0c b3             	mov    (%ebx,%esi,4),%ecx
  409bec:	89 4c 24 0c          	mov    %ecx,0xc(%esp)
  409bf0:	89 48 0c             	mov    %ecx,0xc(%eax)
  409bf3:	83 7c b3 04 00       	cmpl   $0x0,0x4(%ebx,%esi,4)
  409bf8:	75 17                	jne    0x409c11
  409bfa:	68 01 01 00 00       	push   $0x101
  409bff:	8b 44 b3 08          	mov    0x8(%ebx,%esi,4),%eax
  409c03:	e8 49 00 00 00       	call   0x409c51
  409c08:	8b 44 b3 08          	mov    0x8(%ebx,%esi,4),%eax
  409c0c:	e8 5f 00 00 00       	call   0x409c70
  409c11:	eb b7                	jmp    0x409bca
  409c13:	8b 4c 24 04          	mov    0x4(%esp),%ecx
  409c17:	64 89 0d 00 00 00 00 	mov    %ecx,%fs:0x0
  409c1e:	83 c4 18             	add    $0x18,%esp
  409c21:	5f                   	pop    %edi
  409c22:	5e                   	pop    %esi
  409c23:	5b                   	pop    %ebx
  409c24:	c3                   	ret    
  409c25:	33 c0                	xor    %eax,%eax
  409c27:	64 8b 0d 00 00 00 00 	mov    %fs:0x0,%ecx
  409c2e:	81 79 04 5c 9b 40 00 	cmpl   $0x409b5c,0x4(%ecx)
  409c35:	75 10                	jne    0x409c47
  409c37:	8b 51 0c             	mov    0xc(%ecx),%edx
  409c3a:	8b 52 0c             	mov    0xc(%edx),%edx
  409c3d:	39 51 08             	cmp    %edx,0x8(%ecx)
  409c40:	75 05                	jne    0x409c47
  409c42:	b8 01 00 00 00       	mov    $0x1,%eax
  409c47:	c3                   	ret    
  409c48:	53                   	push   %ebx
  409c49:	51                   	push   %ecx
  409c4a:	bb a0 ed 40 00       	mov    $0x40eda0,%ebx
  409c4f:	eb 0b                	jmp    0x409c5c
  409c51:	53                   	push   %ebx
  409c52:	51                   	push   %ecx
  409c53:	bb a0 ed 40 00       	mov    $0x40eda0,%ebx
  409c58:	8b 4c 24 0c          	mov    0xc(%esp),%ecx
  409c5c:	89 4b 08             	mov    %ecx,0x8(%ebx)
  409c5f:	89 43 04             	mov    %eax,0x4(%ebx)
  409c62:	89 6b 0c             	mov    %ebp,0xc(%ebx)
  409c65:	55                   	push   %ebp
  409c66:	51                   	push   %ecx
  409c67:	50                   	push   %eax
  409c68:	58                   	pop    %eax
  409c69:	59                   	pop    %ecx
  409c6a:	5d                   	pop    %ebp
  409c6b:	59                   	pop    %ecx
  409c6c:	5b                   	pop    %ebx
  409c6d:	c2 04 00             	ret    $0x4
  409c70:	ff d0                	call   *%eax
  409c72:	c3                   	ret    
  409c73:	8b ff                	mov    %edi,%edi
  409c75:	55                   	push   %ebp
  409c76:	8b ec                	mov    %esp,%ebp
  409c78:	83 ec 14             	sub    $0x14,%esp
  409c7b:	56                   	push   %esi
  409c7c:	57                   	push   %edi
  409c7d:	ff 75 08             	pushl  0x8(%ebp)
  409c80:	8d 4d ec             	lea    -0x14(%ebp),%ecx
  409c83:	e8 39 79 ff ff       	call   0x4015c1
  409c88:	8b 45 10             	mov    0x10(%ebp),%eax
  409c8b:	8b 75 0c             	mov    0xc(%ebp),%esi
  409c8e:	33 ff                	xor    %edi,%edi
  409c90:	3b c7                	cmp    %edi,%eax
  409c92:	74 02                	je     0x409c96
  409c94:	89 30                	mov    %esi,(%eax)
  409c96:	3b f7                	cmp    %edi,%esi
  409c98:	75 2c                	jne    0x409cc6
  409c9a:	e8 86 87 ff ff       	call   0x402425
  409c9f:	57                   	push   %edi
  409ca0:	57                   	push   %edi
  409ca1:	57                   	push   %edi
  409ca2:	57                   	push   %edi
  409ca3:	57                   	push   %edi
  409ca4:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  409caa:	e8 0e 87 ff ff       	call   0x4023bd
  409caf:	83 c4 14             	add    $0x14,%esp
  409cb2:	80 7d f8 00          	cmpb   $0x0,-0x8(%ebp)
  409cb6:	74 07                	je     0x409cbf
  409cb8:	8b 45 f4             	mov    -0xc(%ebp),%eax
  409cbb:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  409cbf:	33 c0                	xor    %eax,%eax
  409cc1:	e9 d8 01 00 00       	jmp    0x409e9e
  409cc6:	39 7d 14             	cmp    %edi,0x14(%ebp)
  409cc9:	74 0c                	je     0x409cd7
  409ccb:	83 7d 14 02          	cmpl   $0x2,0x14(%ebp)
  409ccf:	7c c9                	jl     0x409c9a
  409cd1:	83 7d 14 24          	cmpl   $0x24,0x14(%ebp)
  409cd5:	7f c3                	jg     0x409c9a
  409cd7:	8b 4d ec             	mov    -0x14(%ebp),%ecx
  409cda:	53                   	push   %ebx
  409cdb:	8a 1e                	mov    (%esi),%bl
  409cdd:	89 7d fc             	mov    %edi,-0x4(%ebp)
  409ce0:	8d 7e 01             	lea    0x1(%esi),%edi
  409ce3:	83 b9 ac 00 00 00 01 	cmpl   $0x1,0xac(%ecx)
  409cea:	7e 17                	jle    0x409d03
  409cec:	8d 45 ec             	lea    -0x14(%ebp),%eax
  409cef:	50                   	push   %eax
  409cf0:	0f b6 c3             	movzbl %bl,%eax
  409cf3:	6a 08                	push   $0x8
  409cf5:	50                   	push   %eax
  409cf6:	e8 3c 03 00 00       	call   0x40a037
  409cfb:	8b 4d ec             	mov    -0x14(%ebp),%ecx
  409cfe:	83 c4 0c             	add    $0xc,%esp
  409d01:	eb 10                	jmp    0x409d13
  409d03:	8b 91 c8 00 00 00    	mov    0xc8(%ecx),%edx
  409d09:	0f b6 c3             	movzbl %bl,%eax
  409d0c:	0f b7 04 42          	movzwl (%edx,%eax,2),%eax
  409d10:	83 e0 08             	and    $0x8,%eax
  409d13:	85 c0                	test   %eax,%eax
  409d15:	74 05                	je     0x409d1c
  409d17:	8a 1f                	mov    (%edi),%bl
  409d19:	47                   	inc    %edi
  409d1a:	eb c7                	jmp    0x409ce3
  409d1c:	80 fb 2d             	cmp    $0x2d,%bl
  409d1f:	75 06                	jne    0x409d27
  409d21:	83 4d 18 02          	orl    $0x2,0x18(%ebp)
  409d25:	eb 05                	jmp    0x409d2c
  409d27:	80 fb 2b             	cmp    $0x2b,%bl
  409d2a:	75 03                	jne    0x409d2f
  409d2c:	8a 1f                	mov    (%edi),%bl
  409d2e:	47                   	inc    %edi
  409d2f:	8b 45 14             	mov    0x14(%ebp),%eax
  409d32:	85 c0                	test   %eax,%eax
  409d34:	0f 8c 4b 01 00 00    	jl     0x409e85
  409d3a:	83 f8 01             	cmp    $0x1,%eax
  409d3d:	0f 84 42 01 00 00    	je     0x409e85
  409d43:	83 f8 24             	cmp    $0x24,%eax
  409d46:	0f 8f 39 01 00 00    	jg     0x409e85
  409d4c:	85 c0                	test   %eax,%eax
  409d4e:	75 2a                	jne    0x409d7a
  409d50:	80 fb 30             	cmp    $0x30,%bl
  409d53:	74 09                	je     0x409d5e
  409d55:	c7 45 14 0a 00 00 00 	movl   $0xa,0x14(%ebp)
  409d5c:	eb 34                	jmp    0x409d92
  409d5e:	8a 07                	mov    (%edi),%al
  409d60:	3c 78                	cmp    $0x78,%al
  409d62:	74 0d                	je     0x409d71
  409d64:	3c 58                	cmp    $0x58,%al
  409d66:	74 09                	je     0x409d71
  409d68:	c7 45 14 08 00 00 00 	movl   $0x8,0x14(%ebp)
  409d6f:	eb 21                	jmp    0x409d92
  409d71:	c7 45 14 10 00 00 00 	movl   $0x10,0x14(%ebp)
  409d78:	eb 0a                	jmp    0x409d84
  409d7a:	83 f8 10             	cmp    $0x10,%eax
  409d7d:	75 13                	jne    0x409d92
  409d7f:	80 fb 30             	cmp    $0x30,%bl
  409d82:	75 0e                	jne    0x409d92
  409d84:	8a 07                	mov    (%edi),%al
  409d86:	3c 78                	cmp    $0x78,%al
  409d88:	74 04                	je     0x409d8e
  409d8a:	3c 58                	cmp    $0x58,%al
  409d8c:	75 04                	jne    0x409d92
  409d8e:	47                   	inc    %edi
  409d8f:	8a 1f                	mov    (%edi),%bl
  409d91:	47                   	inc    %edi
  409d92:	8b b1 c8 00 00 00    	mov    0xc8(%ecx),%esi
  409d98:	b8 ff ff ff ff       	mov    $0xffffffff,%eax
  409d9d:	33 d2                	xor    %edx,%edx
  409d9f:	f7 75 14             	divl   0x14(%ebp)
  409da2:	0f b6 cb             	movzbl %bl,%ecx
  409da5:	0f b7 0c 4e          	movzwl (%esi,%ecx,2),%ecx
  409da9:	f6 c1 04             	test   $0x4,%cl
  409dac:	74 08                	je     0x409db6
  409dae:	0f be cb             	movsbl %bl,%ecx
  409db1:	83 e9 30             	sub    $0x30,%ecx
  409db4:	eb 1b                	jmp    0x409dd1
  409db6:	f7 c1 03 01 00 00    	test   $0x103,%ecx
  409dbc:	74 31                	je     0x409def
  409dbe:	8a cb                	mov    %bl,%cl
  409dc0:	80 e9 61             	sub    $0x61,%cl
  409dc3:	80 f9 19             	cmp    $0x19,%cl
  409dc6:	0f be cb             	movsbl %bl,%ecx
  409dc9:	77 03                	ja     0x409dce
  409dcb:	83 e9 20             	sub    $0x20,%ecx
  409dce:	83 c1 c9             	add    $0xffffffc9,%ecx
  409dd1:	3b 4d 14             	cmp    0x14(%ebp),%ecx
  409dd4:	73 19                	jae    0x409def
  409dd6:	83 4d 18 08          	orl    $0x8,0x18(%ebp)
  409dda:	39 45 fc             	cmp    %eax,-0x4(%ebp)
  409ddd:	72 27                	jb     0x409e06
  409ddf:	75 04                	jne    0x409de5
  409de1:	3b ca                	cmp    %edx,%ecx
  409de3:	76 21                	jbe    0x409e06
  409de5:	83 4d 18 04          	orl    $0x4,0x18(%ebp)
  409de9:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
  409ded:	75 23                	jne    0x409e12
  409def:	8b 45 18             	mov    0x18(%ebp),%eax
  409df2:	4f                   	dec    %edi
  409df3:	a8 08                	test   $0x8,%al
  409df5:	75 20                	jne    0x409e17
  409df7:	83 7d 10 00          	cmpl   $0x0,0x10(%ebp)
  409dfb:	74 03                	je     0x409e00
  409dfd:	8b 7d 0c             	mov    0xc(%ebp),%edi
  409e00:	83 65 fc 00          	andl   $0x0,-0x4(%ebp)
  409e04:	eb 5b                	jmp    0x409e61
  409e06:	8b 5d fc             	mov    -0x4(%ebp),%ebx
  409e09:	0f af 5d 14          	imul   0x14(%ebp),%ebx
  409e0d:	03 d9                	add    %ecx,%ebx
  409e0f:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  409e12:	8a 1f                	mov    (%edi),%bl
  409e14:	47                   	inc    %edi
  409e15:	eb 8b                	jmp    0x409da2
  409e17:	be ff ff ff 7f       	mov    $0x7fffffff,%esi
  409e1c:	a8 04                	test   $0x4,%al
  409e1e:	75 1b                	jne    0x409e3b
  409e20:	a8 01                	test   $0x1,%al
  409e22:	75 3d                	jne    0x409e61
  409e24:	83 e0 02             	and    $0x2,%eax
  409e27:	74 09                	je     0x409e32
  409e29:	81 7d fc 00 00 00 80 	cmpl   $0x80000000,-0x4(%ebp)
  409e30:	77 09                	ja     0x409e3b
  409e32:	85 c0                	test   %eax,%eax
  409e34:	75 2b                	jne    0x409e61
  409e36:	39 75 fc             	cmp    %esi,-0x4(%ebp)
  409e39:	76 26                	jbe    0x409e61
  409e3b:	e8 e5 85 ff ff       	call   0x402425
  409e40:	f6 45 18 01          	testb  $0x1,0x18(%ebp)
  409e44:	c7 00 22 00 00 00    	movl   $0x22,(%eax)
  409e4a:	74 06                	je     0x409e52
  409e4c:	83 4d fc ff          	orl    $0xffffffff,-0x4(%ebp)
  409e50:	eb 0f                	jmp    0x409e61
  409e52:	f6 45 18 02          	testb  $0x2,0x18(%ebp)
  409e56:	6a 00                	push   $0x0
  409e58:	58                   	pop    %eax
  409e59:	0f 95 c0             	setne  %al
  409e5c:	03 c6                	add    %esi,%eax
  409e5e:	89 45 fc             	mov    %eax,-0x4(%ebp)
  409e61:	8b 45 10             	mov    0x10(%ebp),%eax
  409e64:	85 c0                	test   %eax,%eax
  409e66:	74 02                	je     0x409e6a
  409e68:	89 38                	mov    %edi,(%eax)
  409e6a:	f6 45 18 02          	testb  $0x2,0x18(%ebp)
  409e6e:	74 03                	je     0x409e73
  409e70:	f7 5d fc             	negl   -0x4(%ebp)
  409e73:	80 7d f8 00          	cmpb   $0x0,-0x8(%ebp)
  409e77:	74 07                	je     0x409e80
  409e79:	8b 45 f4             	mov    -0xc(%ebp),%eax
  409e7c:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  409e80:	8b 45 fc             	mov    -0x4(%ebp),%eax
  409e83:	eb 18                	jmp    0x409e9d
  409e85:	8b 45 10             	mov    0x10(%ebp),%eax
  409e88:	85 c0                	test   %eax,%eax
  409e8a:	74 02                	je     0x409e8e
  409e8c:	89 30                	mov    %esi,(%eax)
  409e8e:	80 7d f8 00          	cmpb   $0x0,-0x8(%ebp)
  409e92:	74 07                	je     0x409e9b
  409e94:	8b 45 f4             	mov    -0xc(%ebp),%eax
  409e97:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  409e9b:	33 c0                	xor    %eax,%eax
  409e9d:	5b                   	pop    %ebx
  409e9e:	5f                   	pop    %edi
  409e9f:	5e                   	pop    %esi
  409ea0:	c9                   	leave  
  409ea1:	c3                   	ret    
  409ea2:	8b ff                	mov    %edi,%edi
  409ea4:	55                   	push   %ebp
  409ea5:	8b ec                	mov    %esp,%ebp
  409ea7:	33 c0                	xor    %eax,%eax
  409ea9:	50                   	push   %eax
  409eaa:	ff 75 10             	pushl  0x10(%ebp)
  409ead:	ff 75 0c             	pushl  0xc(%ebp)
  409eb0:	ff 75 08             	pushl  0x8(%ebp)
  409eb3:	39 05 04 f6 40 00    	cmp    %eax,0x40f604
  409eb9:	75 07                	jne    0x409ec2
  409ebb:	68 58 ec 40 00       	push   $0x40ec58
  409ec0:	eb 01                	jmp    0x409ec3
  409ec2:	50                   	push   %eax
  409ec3:	e8 ab fd ff ff       	call   0x409c73
  409ec8:	83 c4 14             	add    $0x14,%esp
  409ecb:	5d                   	pop    %ebp
  409ecc:	c3                   	ret    
  409ecd:	55                   	push   %ebp
  409ece:	8b ec                	mov    %esp,%ebp
  409ed0:	83 ec 08             	sub    $0x8,%esp
  409ed3:	89 7d fc             	mov    %edi,-0x4(%ebp)
  409ed6:	89 75 f8             	mov    %esi,-0x8(%ebp)
  409ed9:	8b 75 0c             	mov    0xc(%ebp),%esi
  409edc:	8b 7d 08             	mov    0x8(%ebp),%edi
  409edf:	8b 4d 10             	mov    0x10(%ebp),%ecx
  409ee2:	c1 e9 07             	shr    $0x7,%ecx
  409ee5:	eb 06                	jmp    0x409eed
  409ee7:	8d 9b 00 00 00 00    	lea    0x0(%ebx),%ebx
  409eed:	66 0f 6f 06          	movdqa (%esi),%xmm0
  409ef1:	66 0f 6f 4e 10       	movdqa 0x10(%esi),%xmm1
  409ef6:	66 0f 6f 56 20       	movdqa 0x20(%esi),%xmm2
  409efb:	66 0f 6f 5e 30       	movdqa 0x30(%esi),%xmm3
  409f00:	66 0f 7f 07          	movdqa %xmm0,(%edi)
  409f04:	66 0f 7f 4f 10       	movdqa %xmm1,0x10(%edi)
  409f09:	66 0f 7f 57 20       	movdqa %xmm2,0x20(%edi)
  409f0e:	66 0f 7f 5f 30       	movdqa %xmm3,0x30(%edi)
  409f13:	66 0f 6f 66 40       	movdqa 0x40(%esi),%xmm4
  409f18:	66 0f 6f 6e 50       	movdqa 0x50(%esi),%xmm5
  409f1d:	66 0f 6f 76 60       	movdqa 0x60(%esi),%xmm6
  409f22:	66 0f 6f 7e 70       	movdqa 0x70(%esi),%xmm7
  409f27:	66 0f 7f 67 40       	movdqa %xmm4,0x40(%edi)
  409f2c:	66 0f 7f 6f 50       	movdqa %xmm5,0x50(%edi)
  409f31:	66 0f 7f 77 60       	movdqa %xmm6,0x60(%edi)
  409f36:	66 0f 7f 7f 70       	movdqa %xmm7,0x70(%edi)
  409f3b:	8d b6 80 00 00 00    	lea    0x80(%esi),%esi
  409f41:	8d bf 80 00 00 00    	lea    0x80(%edi),%edi
  409f47:	49                   	dec    %ecx
  409f48:	75 a3                	jne    0x409eed
  409f4a:	8b 75 f8             	mov    -0x8(%ebp),%esi
  409f4d:	8b 7d fc             	mov    -0x4(%ebp),%edi
  409f50:	8b e5                	mov    %ebp,%esp
  409f52:	5d                   	pop    %ebp
  409f53:	c3                   	ret    
  409f54:	55                   	push   %ebp
  409f55:	8b ec                	mov    %esp,%ebp
  409f57:	83 ec 1c             	sub    $0x1c,%esp
  409f5a:	89 7d f4             	mov    %edi,-0xc(%ebp)
  409f5d:	89 75 f8             	mov    %esi,-0x8(%ebp)
  409f60:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  409f63:	8b 5d 0c             	mov    0xc(%ebp),%ebx
  409f66:	8b c3                	mov    %ebx,%eax
  409f68:	99                   	cltd   
  409f69:	8b c8                	mov    %eax,%ecx
  409f6b:	8b 45 08             	mov    0x8(%ebp),%eax
  409f6e:	33 ca                	xor    %edx,%ecx
  409f70:	2b ca                	sub    %edx,%ecx
  409f72:	83 e1 0f             	and    $0xf,%ecx
  409f75:	33 ca                	xor    %edx,%ecx
  409f77:	2b ca                	sub    %edx,%ecx
  409f79:	99                   	cltd   
  409f7a:	8b f8                	mov    %eax,%edi
  409f7c:	33 fa                	xor    %edx,%edi
  409f7e:	2b fa                	sub    %edx,%edi
  409f80:	83 e7 0f             	and    $0xf,%edi
  409f83:	33 fa                	xor    %edx,%edi
  409f85:	2b fa                	sub    %edx,%edi
  409f87:	8b d1                	mov    %ecx,%edx
  409f89:	0b d7                	or     %edi,%edx
  409f8b:	75 4a                	jne    0x409fd7
  409f8d:	8b 75 10             	mov    0x10(%ebp),%esi
  409f90:	8b ce                	mov    %esi,%ecx
  409f92:	83 e1 7f             	and    $0x7f,%ecx
  409f95:	89 4d e8             	mov    %ecx,-0x18(%ebp)
  409f98:	3b f1                	cmp    %ecx,%esi
  409f9a:	74 13                	je     0x409faf
  409f9c:	2b f1                	sub    %ecx,%esi
  409f9e:	56                   	push   %esi
  409f9f:	53                   	push   %ebx
  409fa0:	50                   	push   %eax
  409fa1:	e8 27 ff ff ff       	call   0x409ecd
  409fa6:	83 c4 0c             	add    $0xc,%esp
  409fa9:	8b 45 08             	mov    0x8(%ebp),%eax
  409fac:	8b 4d e8             	mov    -0x18(%ebp),%ecx
  409faf:	85 c9                	test   %ecx,%ecx
  409fb1:	74 77                	je     0x40a02a
  409fb3:	8b 5d 10             	mov    0x10(%ebp),%ebx
  409fb6:	8b 55 0c             	mov    0xc(%ebp),%edx
  409fb9:	03 d3                	add    %ebx,%edx
  409fbb:	2b d1                	sub    %ecx,%edx
  409fbd:	89 55 ec             	mov    %edx,-0x14(%ebp)
  409fc0:	03 d8                	add    %eax,%ebx
  409fc2:	2b d9                	sub    %ecx,%ebx
  409fc4:	89 5d f0             	mov    %ebx,-0x10(%ebp)
  409fc7:	8b 75 ec             	mov    -0x14(%ebp),%esi
  409fca:	8b 7d f0             	mov    -0x10(%ebp),%edi
  409fcd:	8b 4d e8             	mov    -0x18(%ebp),%ecx
  409fd0:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
  409fd2:	8b 45 08             	mov    0x8(%ebp),%eax
  409fd5:	eb 53                	jmp    0x40a02a
  409fd7:	3b cf                	cmp    %edi,%ecx
  409fd9:	75 35                	jne    0x40a010
  409fdb:	f7 d9                	neg    %ecx
  409fdd:	83 c1 10             	add    $0x10,%ecx
  409fe0:	89 4d e4             	mov    %ecx,-0x1c(%ebp)
  409fe3:	8b 75 0c             	mov    0xc(%ebp),%esi
  409fe6:	8b 7d 08             	mov    0x8(%ebp),%edi
  409fe9:	8b 4d e4             	mov    -0x1c(%ebp),%ecx
  409fec:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
  409fee:	8b 4d 08             	mov    0x8(%ebp),%ecx
  409ff1:	03 4d e4             	add    -0x1c(%ebp),%ecx
  409ff4:	8b 55 0c             	mov    0xc(%ebp),%edx
  409ff7:	03 55 e4             	add    -0x1c(%ebp),%edx
  409ffa:	8b 45 10             	mov    0x10(%ebp),%eax
  409ffd:	2b 45 e4             	sub    -0x1c(%ebp),%eax
  40a000:	50                   	push   %eax
  40a001:	52                   	push   %edx
  40a002:	51                   	push   %ecx
  40a003:	e8 4c ff ff ff       	call   0x409f54
  40a008:	83 c4 0c             	add    $0xc,%esp
  40a00b:	8b 45 08             	mov    0x8(%ebp),%eax
  40a00e:	eb 1a                	jmp    0x40a02a
  40a010:	8b 75 0c             	mov    0xc(%ebp),%esi
  40a013:	8b 7d 08             	mov    0x8(%ebp),%edi
  40a016:	8b 4d 10             	mov    0x10(%ebp),%ecx
  40a019:	8b d1                	mov    %ecx,%edx
  40a01b:	c1 e9 02             	shr    $0x2,%ecx
  40a01e:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40a020:	8b ca                	mov    %edx,%ecx
  40a022:	83 e1 03             	and    $0x3,%ecx
  40a025:	f3 a4                	rep movsb %ds:(%esi),%es:(%edi)
  40a027:	8b 45 08             	mov    0x8(%ebp),%eax
  40a02a:	8b 5d fc             	mov    -0x4(%ebp),%ebx
  40a02d:	8b 75 f8             	mov    -0x8(%ebp),%esi
  40a030:	8b 7d f4             	mov    -0xc(%ebp),%edi
  40a033:	8b e5                	mov    %ebp,%esp
  40a035:	5d                   	pop    %ebp
  40a036:	c3                   	ret    
  40a037:	8b ff                	mov    %edi,%edi
  40a039:	55                   	push   %ebp
  40a03a:	8b ec                	mov    %esp,%ebp
  40a03c:	83 ec 18             	sub    $0x18,%esp
  40a03f:	53                   	push   %ebx
  40a040:	ff 75 10             	pushl  0x10(%ebp)
  40a043:	8d 4d e8             	lea    -0x18(%ebp),%ecx
  40a046:	e8 76 75 ff ff       	call   0x4015c1
  40a04b:	8b 5d 08             	mov    0x8(%ebp),%ebx
  40a04e:	8d 43 01             	lea    0x1(%ebx),%eax
  40a051:	3d 00 01 00 00       	cmp    $0x100,%eax
  40a056:	77 0f                	ja     0x40a067
  40a058:	8b 45 e8             	mov    -0x18(%ebp),%eax
  40a05b:	8b 80 c8 00 00 00    	mov    0xc8(%eax),%eax
  40a061:	0f b7 04 58          	movzwl (%eax,%ebx,2),%eax
  40a065:	eb 75                	jmp    0x40a0dc
  40a067:	89 5d 08             	mov    %ebx,0x8(%ebp)
  40a06a:	c1 7d 08 08          	sarl   $0x8,0x8(%ebp)
  40a06e:	8d 45 e8             	lea    -0x18(%ebp),%eax
  40a071:	50                   	push   %eax
  40a072:	8b 45 08             	mov    0x8(%ebp),%eax
  40a075:	25 ff 00 00 00       	and    $0xff,%eax
  40a07a:	50                   	push   %eax
  40a07b:	e8 74 be ff ff       	call   0x405ef4
  40a080:	59                   	pop    %ecx
  40a081:	59                   	pop    %ecx
  40a082:	85 c0                	test   %eax,%eax
  40a084:	74 12                	je     0x40a098
  40a086:	8a 45 08             	mov    0x8(%ebp),%al
  40a089:	6a 02                	push   $0x2
  40a08b:	88 45 f8             	mov    %al,-0x8(%ebp)
  40a08e:	88 5d f9             	mov    %bl,-0x7(%ebp)
  40a091:	c6 45 fa 00          	movb   $0x0,-0x6(%ebp)
  40a095:	59                   	pop    %ecx
  40a096:	eb 0a                	jmp    0x40a0a2
  40a098:	33 c9                	xor    %ecx,%ecx
  40a09a:	88 5d f8             	mov    %bl,-0x8(%ebp)
  40a09d:	c6 45 f9 00          	movb   $0x0,-0x7(%ebp)
  40a0a1:	41                   	inc    %ecx
  40a0a2:	8b 45 e8             	mov    -0x18(%ebp),%eax
  40a0a5:	6a 01                	push   $0x1
  40a0a7:	ff 70 14             	pushl  0x14(%eax)
  40a0aa:	ff 70 04             	pushl  0x4(%eax)
  40a0ad:	8d 45 fc             	lea    -0x4(%ebp),%eax
  40a0b0:	50                   	push   %eax
  40a0b1:	51                   	push   %ecx
  40a0b2:	8d 45 f8             	lea    -0x8(%ebp),%eax
  40a0b5:	50                   	push   %eax
  40a0b6:	8d 45 e8             	lea    -0x18(%ebp),%eax
  40a0b9:	6a 01                	push   $0x1
  40a0bb:	50                   	push   %eax
  40a0bc:	e8 09 f2 ff ff       	call   0x4092ca
  40a0c1:	83 c4 20             	add    $0x20,%esp
  40a0c4:	85 c0                	test   %eax,%eax
  40a0c6:	75 10                	jne    0x40a0d8
  40a0c8:	38 45 f4             	cmp    %al,-0xc(%ebp)
  40a0cb:	74 07                	je     0x40a0d4
  40a0cd:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a0d0:	83 60 70 fd          	andl   $0xfffffffd,0x70(%eax)
  40a0d4:	33 c0                	xor    %eax,%eax
  40a0d6:	eb 14                	jmp    0x40a0ec
  40a0d8:	0f b7 45 fc          	movzwl -0x4(%ebp),%eax
  40a0dc:	23 45 0c             	and    0xc(%ebp),%eax
  40a0df:	80 7d f4 00          	cmpb   $0x0,-0xc(%ebp)
  40a0e3:	74 07                	je     0x40a0ec
  40a0e5:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  40a0e8:	83 61 70 fd          	andl   $0xfffffffd,0x70(%ecx)
  40a0ec:	5b                   	pop    %ebx
  40a0ed:	c9                   	leave  
  40a0ee:	c3                   	ret    
  40a0ef:	8b ff                	mov    %edi,%edi
  40a0f1:	55                   	push   %ebp
  40a0f2:	8b ec                	mov    %esp,%ebp
  40a0f4:	83 ec 1c             	sub    $0x1c,%esp
  40a0f7:	8b 55 10             	mov    0x10(%ebp),%edx
  40a0fa:	56                   	push   %esi
  40a0fb:	8b 75 08             	mov    0x8(%ebp),%esi
  40a0fe:	6a fe                	push   $0xfffffffe
  40a100:	58                   	pop    %eax
  40a101:	89 45 ec             	mov    %eax,-0x14(%ebp)
  40a104:	89 55 e4             	mov    %edx,-0x1c(%ebp)
  40a107:	3b f0                	cmp    %eax,%esi
  40a109:	75 1b                	jne    0x40a126
  40a10b:	e8 28 83 ff ff       	call   0x402438
  40a110:	83 20 00             	andl   $0x0,(%eax)
  40a113:	e8 0d 83 ff ff       	call   0x402425
  40a118:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40a11e:	83 c8 ff             	or     $0xffffffff,%eax
  40a121:	e9 88 05 00 00       	jmp    0x40a6ae
  40a126:	53                   	push   %ebx
  40a127:	33 db                	xor    %ebx,%ebx
  40a129:	3b f3                	cmp    %ebx,%esi
  40a12b:	7c 08                	jl     0x40a135
  40a12d:	3b 35 84 fa 40 00    	cmp    0x40fa84,%esi
  40a133:	72 27                	jb     0x40a15c
  40a135:	e8 fe 82 ff ff       	call   0x402438
  40a13a:	89 18                	mov    %ebx,(%eax)
  40a13c:	e8 e4 82 ff ff       	call   0x402425
  40a141:	53                   	push   %ebx
  40a142:	53                   	push   %ebx
  40a143:	53                   	push   %ebx
  40a144:	53                   	push   %ebx
  40a145:	53                   	push   %ebx
  40a146:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40a14c:	e8 6c 82 ff ff       	call   0x4023bd
  40a151:	83 c4 14             	add    $0x14,%esp
  40a154:	83 c8 ff             	or     $0xffffffff,%eax
  40a157:	e9 51 05 00 00       	jmp    0x40a6ad
  40a15c:	8b c6                	mov    %esi,%eax
  40a15e:	c1 f8 05             	sar    $0x5,%eax
  40a161:	57                   	push   %edi
  40a162:	8d 3c 85 a0 fa 40 00 	lea    0x40faa0(,%eax,4),%edi
  40a169:	8b 07                	mov    (%edi),%eax
  40a16b:	83 e6 1f             	and    $0x1f,%esi
  40a16e:	c1 e6 06             	shl    $0x6,%esi
  40a171:	03 c6                	add    %esi,%eax
  40a173:	8a 48 04             	mov    0x4(%eax),%cl
  40a176:	f6 c1 01             	test   $0x1,%cl
  40a179:	75 14                	jne    0x40a18f
  40a17b:	e8 b8 82 ff ff       	call   0x402438
  40a180:	89 18                	mov    %ebx,(%eax)
  40a182:	e8 9e 82 ff ff       	call   0x402425
  40a187:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40a18d:	eb 6a                	jmp    0x40a1f9
  40a18f:	81 fa ff ff ff 7f    	cmp    $0x7fffffff,%edx
  40a195:	77 50                	ja     0x40a1e7
  40a197:	89 5d f0             	mov    %ebx,-0x10(%ebp)
  40a19a:	3b d3                	cmp    %ebx,%edx
  40a19c:	0f 84 08 05 00 00    	je     0x40a6aa
  40a1a2:	f6 c1 02             	test   $0x2,%cl
  40a1a5:	0f 85 ff 04 00 00    	jne    0x40a6aa
  40a1ab:	39 5d 0c             	cmp    %ebx,0xc(%ebp)
  40a1ae:	74 37                	je     0x40a1e7
  40a1b0:	8a 40 24             	mov    0x24(%eax),%al
  40a1b3:	02 c0                	add    %al,%al
  40a1b5:	d0 f8                	sar    %al
  40a1b7:	88 45 fe             	mov    %al,-0x2(%ebp)
  40a1ba:	0f be c0             	movsbl %al,%eax
  40a1bd:	48                   	dec    %eax
  40a1be:	6a 04                	push   $0x4
  40a1c0:	59                   	pop    %ecx
  40a1c1:	74 1c                	je     0x40a1df
  40a1c3:	48                   	dec    %eax
  40a1c4:	75 0e                	jne    0x40a1d4
  40a1c6:	8b c2                	mov    %edx,%eax
  40a1c8:	f7 d0                	not    %eax
  40a1ca:	a8 01                	test   $0x1,%al
  40a1cc:	74 19                	je     0x40a1e7
  40a1ce:	83 e2 fe             	and    $0xfffffffe,%edx
  40a1d1:	89 55 10             	mov    %edx,0x10(%ebp)
  40a1d4:	8b 45 0c             	mov    0xc(%ebp),%eax
  40a1d7:	89 45 f4             	mov    %eax,-0xc(%ebp)
  40a1da:	e9 81 00 00 00       	jmp    0x40a260
  40a1df:	8b c2                	mov    %edx,%eax
  40a1e1:	f7 d0                	not    %eax
  40a1e3:	a8 01                	test   $0x1,%al
  40a1e5:	75 21                	jne    0x40a208
  40a1e7:	e8 4c 82 ff ff       	call   0x402438
  40a1ec:	89 18                	mov    %ebx,(%eax)
  40a1ee:	e8 32 82 ff ff       	call   0x402425
  40a1f3:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  40a1f9:	53                   	push   %ebx
  40a1fa:	53                   	push   %ebx
  40a1fb:	53                   	push   %ebx
  40a1fc:	53                   	push   %ebx
  40a1fd:	53                   	push   %ebx
  40a1fe:	e8 ba 81 ff ff       	call   0x4023bd
  40a203:	83 c4 14             	add    $0x14,%esp
  40a206:	eb 34                	jmp    0x40a23c
  40a208:	8b c2                	mov    %edx,%eax
  40a20a:	d1 e8                	shr    %eax
  40a20c:	89 4d 10             	mov    %ecx,0x10(%ebp)
  40a20f:	3b c1                	cmp    %ecx,%eax
  40a211:	72 03                	jb     0x40a216
  40a213:	89 45 10             	mov    %eax,0x10(%ebp)
  40a216:	ff 75 10             	pushl  0x10(%ebp)
  40a219:	e8 ff a8 ff ff       	call   0x404b1d
  40a21e:	59                   	pop    %ecx
  40a21f:	89 45 f4             	mov    %eax,-0xc(%ebp)
  40a222:	3b c3                	cmp    %ebx,%eax
  40a224:	75 1e                	jne    0x40a244
  40a226:	e8 fa 81 ff ff       	call   0x402425
  40a22b:	c7 00 0c 00 00 00    	movl   $0xc,(%eax)
  40a231:	e8 02 82 ff ff       	call   0x402438
  40a236:	c7 00 08 00 00 00    	movl   $0x8,(%eax)
  40a23c:	83 c8 ff             	or     $0xffffffff,%eax
  40a23f:	e9 68 04 00 00       	jmp    0x40a6ac
  40a244:	6a 01                	push   $0x1
  40a246:	53                   	push   %ebx
  40a247:	53                   	push   %ebx
  40a248:	ff 75 08             	pushl  0x8(%ebp)
  40a24b:	e8 50 f4 ff ff       	call   0x4096a0
  40a250:	8b 0f                	mov    (%edi),%ecx
  40a252:	89 44 0e 28          	mov    %eax,0x28(%esi,%ecx,1)
  40a256:	8b 45 f4             	mov    -0xc(%ebp),%eax
  40a259:	83 c4 10             	add    $0x10,%esp
  40a25c:	89 54 0e 2c          	mov    %edx,0x2c(%esi,%ecx,1)
  40a260:	8b 0f                	mov    (%edi),%ecx
  40a262:	03 ce                	add    %esi,%ecx
  40a264:	f6 41 04 48          	testb  $0x48,0x4(%ecx)
  40a268:	74 74                	je     0x40a2de
  40a26a:	8a 49 05             	mov    0x5(%ecx),%cl
  40a26d:	80 f9 0a             	cmp    $0xa,%cl
  40a270:	74 6c                	je     0x40a2de
  40a272:	39 5d 10             	cmp    %ebx,0x10(%ebp)
  40a275:	74 67                	je     0x40a2de
  40a277:	88 08                	mov    %cl,(%eax)
  40a279:	8b 0f                	mov    (%edi),%ecx
  40a27b:	40                   	inc    %eax
  40a27c:	ff 4d 10             	decl   0x10(%ebp)
  40a27f:	c7 45 f0 01 00 00 00 	movl   $0x1,-0x10(%ebp)
  40a286:	c6 44 0e 05 0a       	movb   $0xa,0x5(%esi,%ecx,1)
  40a28b:	38 5d fe             	cmp    %bl,-0x2(%ebp)
  40a28e:	74 4e                	je     0x40a2de
  40a290:	8b 0f                	mov    (%edi),%ecx
  40a292:	8a 4c 0e 25          	mov    0x25(%esi,%ecx,1),%cl
  40a296:	80 f9 0a             	cmp    $0xa,%cl
  40a299:	74 43                	je     0x40a2de
  40a29b:	39 5d 10             	cmp    %ebx,0x10(%ebp)
  40a29e:	74 3e                	je     0x40a2de
  40a2a0:	88 08                	mov    %cl,(%eax)
  40a2a2:	8b 0f                	mov    (%edi),%ecx
  40a2a4:	40                   	inc    %eax
  40a2a5:	ff 4d 10             	decl   0x10(%ebp)
  40a2a8:	80 7d fe 01          	cmpb   $0x1,-0x2(%ebp)
  40a2ac:	c7 45 f0 02 00 00 00 	movl   $0x2,-0x10(%ebp)
  40a2b3:	c6 44 0e 25 0a       	movb   $0xa,0x25(%esi,%ecx,1)
  40a2b8:	75 24                	jne    0x40a2de
  40a2ba:	8b 0f                	mov    (%edi),%ecx
  40a2bc:	8a 4c 0e 26          	mov    0x26(%esi,%ecx,1),%cl
  40a2c0:	80 f9 0a             	cmp    $0xa,%cl
  40a2c3:	74 19                	je     0x40a2de
  40a2c5:	39 5d 10             	cmp    %ebx,0x10(%ebp)
  40a2c8:	74 14                	je     0x40a2de
  40a2ca:	88 08                	mov    %cl,(%eax)
  40a2cc:	8b 0f                	mov    (%edi),%ecx
  40a2ce:	40                   	inc    %eax
  40a2cf:	ff 4d 10             	decl   0x10(%ebp)
  40a2d2:	c7 45 f0 03 00 00 00 	movl   $0x3,-0x10(%ebp)
  40a2d9:	c6 44 0e 26 0a       	movb   $0xa,0x26(%esi,%ecx,1)
  40a2de:	53                   	push   %ebx
  40a2df:	8d 4d e8             	lea    -0x18(%ebp),%ecx
  40a2e2:	51                   	push   %ecx
  40a2e3:	ff 75 10             	pushl  0x10(%ebp)
  40a2e6:	50                   	push   %eax
  40a2e7:	8b 07                	mov    (%edi),%eax
  40a2e9:	ff 34 06             	pushl  (%esi,%eax,1)
  40a2ec:	ff 15 f0 c0 40 00    	call   *0x40c0f0
  40a2f2:	85 c0                	test   %eax,%eax
  40a2f4:	0f 84 7b 03 00 00    	je     0x40a675
  40a2fa:	8b 4d e8             	mov    -0x18(%ebp),%ecx
  40a2fd:	3b cb                	cmp    %ebx,%ecx
  40a2ff:	0f 8c 70 03 00 00    	jl     0x40a675
  40a305:	3b 4d 10             	cmp    0x10(%ebp),%ecx
  40a308:	0f 87 67 03 00 00    	ja     0x40a675
  40a30e:	8b 07                	mov    (%edi),%eax
  40a310:	01 4d f0             	add    %ecx,-0x10(%ebp)
  40a313:	8d 44 06 04          	lea    0x4(%esi,%eax,1),%eax
  40a317:	f6 00 80             	testb  $0x80,(%eax)
  40a31a:	0f 84 e6 01 00 00    	je     0x40a506
  40a320:	80 7d fe 02          	cmpb   $0x2,-0x2(%ebp)
  40a324:	0f 84 16 02 00 00    	je     0x40a540
  40a32a:	3b cb                	cmp    %ebx,%ecx
  40a32c:	74 0d                	je     0x40a33b
  40a32e:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  40a331:	80 39 0a             	cmpb   $0xa,(%ecx)
  40a334:	75 05                	jne    0x40a33b
  40a336:	80 08 04             	orb    $0x4,(%eax)
  40a339:	eb 03                	jmp    0x40a33e
  40a33b:	80 20 fb             	andb   $0xfb,(%eax)
  40a33e:	8b 5d f4             	mov    -0xc(%ebp),%ebx
  40a341:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a344:	03 c3                	add    %ebx,%eax
  40a346:	89 5d 10             	mov    %ebx,0x10(%ebp)
  40a349:	89 45 f0             	mov    %eax,-0x10(%ebp)
  40a34c:	3b d8                	cmp    %eax,%ebx
  40a34e:	0f 83 d0 00 00 00    	jae    0x40a424
  40a354:	8b 4d 10             	mov    0x10(%ebp),%ecx
  40a357:	8a 01                	mov    (%ecx),%al
  40a359:	3c 1a                	cmp    $0x1a,%al
  40a35b:	0f 84 ae 00 00 00    	je     0x40a40f
  40a361:	3c 0d                	cmp    $0xd,%al
  40a363:	74 0c                	je     0x40a371
  40a365:	88 03                	mov    %al,(%ebx)
  40a367:	43                   	inc    %ebx
  40a368:	41                   	inc    %ecx
  40a369:	89 4d 10             	mov    %ecx,0x10(%ebp)
  40a36c:	e9 90 00 00 00       	jmp    0x40a401
  40a371:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a374:	48                   	dec    %eax
  40a375:	3b c8                	cmp    %eax,%ecx
  40a377:	73 17                	jae    0x40a390
  40a379:	8d 41 01             	lea    0x1(%ecx),%eax
  40a37c:	80 38 0a             	cmpb   $0xa,(%eax)
  40a37f:	75 0a                	jne    0x40a38b
  40a381:	41                   	inc    %ecx
  40a382:	41                   	inc    %ecx
  40a383:	89 4d 10             	mov    %ecx,0x10(%ebp)
  40a386:	c6 03 0a             	movb   $0xa,(%ebx)
  40a389:	eb 75                	jmp    0x40a400
  40a38b:	89 45 10             	mov    %eax,0x10(%ebp)
  40a38e:	eb 6d                	jmp    0x40a3fd
  40a390:	ff 45 10             	incl   0x10(%ebp)
  40a393:	6a 00                	push   $0x0
  40a395:	8d 45 e8             	lea    -0x18(%ebp),%eax
  40a398:	50                   	push   %eax
  40a399:	6a 01                	push   $0x1
  40a39b:	8d 45 ff             	lea    -0x1(%ebp),%eax
  40a39e:	50                   	push   %eax
  40a39f:	8b 07                	mov    (%edi),%eax
  40a3a1:	ff 34 06             	pushl  (%esi,%eax,1)
  40a3a4:	ff 15 f0 c0 40 00    	call   *0x40c0f0
  40a3aa:	85 c0                	test   %eax,%eax
  40a3ac:	75 0a                	jne    0x40a3b8
  40a3ae:	ff 15 4c c0 40 00    	call   *0x40c04c
  40a3b4:	85 c0                	test   %eax,%eax
  40a3b6:	75 45                	jne    0x40a3fd
  40a3b8:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
  40a3bc:	74 3f                	je     0x40a3fd
  40a3be:	8b 07                	mov    (%edi),%eax
  40a3c0:	f6 44 06 04 48       	testb  $0x48,0x4(%esi,%eax,1)
  40a3c5:	74 14                	je     0x40a3db
  40a3c7:	80 7d ff 0a          	cmpb   $0xa,-0x1(%ebp)
  40a3cb:	74 b9                	je     0x40a386
  40a3cd:	c6 03 0d             	movb   $0xd,(%ebx)
  40a3d0:	8b 07                	mov    (%edi),%eax
  40a3d2:	8a 4d ff             	mov    -0x1(%ebp),%cl
  40a3d5:	88 4c 06 05          	mov    %cl,0x5(%esi,%eax,1)
  40a3d9:	eb 25                	jmp    0x40a400
  40a3db:	3b 5d f4             	cmp    -0xc(%ebp),%ebx
  40a3de:	75 06                	jne    0x40a3e6
  40a3e0:	80 7d ff 0a          	cmpb   $0xa,-0x1(%ebp)
  40a3e4:	74 a0                	je     0x40a386
  40a3e6:	6a 01                	push   $0x1
  40a3e8:	6a ff                	push   $0xffffffff
  40a3ea:	6a ff                	push   $0xffffffff
  40a3ec:	ff 75 08             	pushl  0x8(%ebp)
  40a3ef:	e8 ac f2 ff ff       	call   0x4096a0
  40a3f4:	83 c4 10             	add    $0x10,%esp
  40a3f7:	80 7d ff 0a          	cmpb   $0xa,-0x1(%ebp)
  40a3fb:	74 04                	je     0x40a401
  40a3fd:	c6 03 0d             	movb   $0xd,(%ebx)
  40a400:	43                   	inc    %ebx
  40a401:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a404:	39 45 10             	cmp    %eax,0x10(%ebp)
  40a407:	0f 82 47 ff ff ff    	jb     0x40a354
  40a40d:	eb 15                	jmp    0x40a424
  40a40f:	8b 07                	mov    (%edi),%eax
  40a411:	8d 44 06 04          	lea    0x4(%esi,%eax,1),%eax
  40a415:	f6 00 40             	testb  $0x40,(%eax)
  40a418:	75 05                	jne    0x40a41f
  40a41a:	80 08 02             	orb    $0x2,(%eax)
  40a41d:	eb 05                	jmp    0x40a424
  40a41f:	8a 01                	mov    (%ecx),%al
  40a421:	88 03                	mov    %al,(%ebx)
  40a423:	43                   	inc    %ebx
  40a424:	8b c3                	mov    %ebx,%eax
  40a426:	2b 45 f4             	sub    -0xc(%ebp),%eax
  40a429:	80 7d fe 01          	cmpb   $0x1,-0x2(%ebp)
  40a42d:	89 45 f0             	mov    %eax,-0x10(%ebp)
  40a430:	0f 85 d0 00 00 00    	jne    0x40a506
  40a436:	85 c0                	test   %eax,%eax
  40a438:	0f 84 c8 00 00 00    	je     0x40a506
  40a43e:	4b                   	dec    %ebx
  40a43f:	8a 0b                	mov    (%ebx),%cl
  40a441:	84 c9                	test   %cl,%cl
  40a443:	78 06                	js     0x40a44b
  40a445:	43                   	inc    %ebx
  40a446:	e9 86 00 00 00       	jmp    0x40a4d1
  40a44b:	33 c0                	xor    %eax,%eax
  40a44d:	40                   	inc    %eax
  40a44e:	0f b6 c9             	movzbl %cl,%ecx
  40a451:	eb 0f                	jmp    0x40a462
  40a453:	83 f8 04             	cmp    $0x4,%eax
  40a456:	7f 13                	jg     0x40a46b
  40a458:	3b 5d f4             	cmp    -0xc(%ebp),%ebx
  40a45b:	72 0e                	jb     0x40a46b
  40a45d:	4b                   	dec    %ebx
  40a45e:	0f b6 0b             	movzbl (%ebx),%ecx
  40a461:	40                   	inc    %eax
  40a462:	80 b9 b0 ed 40 00 00 	cmpb   $0x0,0x40edb0(%ecx)
  40a469:	74 e8                	je     0x40a453
  40a46b:	8a 13                	mov    (%ebx),%dl
  40a46d:	0f b6 ca             	movzbl %dl,%ecx
  40a470:	0f be 89 b0 ed 40 00 	movsbl 0x40edb0(%ecx),%ecx
  40a477:	85 c9                	test   %ecx,%ecx
  40a479:	75 0d                	jne    0x40a488
  40a47b:	e8 a5 7f ff ff       	call   0x402425
  40a480:	c7 00 2a 00 00 00    	movl   $0x2a,(%eax)
  40a486:	eb 7a                	jmp    0x40a502
  40a488:	41                   	inc    %ecx
  40a489:	3b c8                	cmp    %eax,%ecx
  40a48b:	75 04                	jne    0x40a491
  40a48d:	03 d8                	add    %eax,%ebx
  40a48f:	eb 40                	jmp    0x40a4d1
  40a491:	8b 0f                	mov    (%edi),%ecx
  40a493:	03 ce                	add    %esi,%ecx
  40a495:	f6 41 04 48          	testb  $0x48,0x4(%ecx)
  40a499:	74 24                	je     0x40a4bf
  40a49b:	43                   	inc    %ebx
  40a49c:	83 f8 02             	cmp    $0x2,%eax
  40a49f:	88 51 05             	mov    %dl,0x5(%ecx)
  40a4a2:	7c 09                	jl     0x40a4ad
  40a4a4:	8a 13                	mov    (%ebx),%dl
  40a4a6:	8b 0f                	mov    (%edi),%ecx
  40a4a8:	88 54 0e 25          	mov    %dl,0x25(%esi,%ecx,1)
  40a4ac:	43                   	inc    %ebx
  40a4ad:	83 f8 03             	cmp    $0x3,%eax
  40a4b0:	75 09                	jne    0x40a4bb
  40a4b2:	8a 13                	mov    (%ebx),%dl
  40a4b4:	8b 0f                	mov    (%edi),%ecx
  40a4b6:	88 54 0e 26          	mov    %dl,0x26(%esi,%ecx,1)
  40a4ba:	43                   	inc    %ebx
  40a4bb:	2b d8                	sub    %eax,%ebx
  40a4bd:	eb 12                	jmp    0x40a4d1
  40a4bf:	f7 d8                	neg    %eax
  40a4c1:	99                   	cltd   
  40a4c2:	6a 01                	push   $0x1
  40a4c4:	52                   	push   %edx
  40a4c5:	50                   	push   %eax
  40a4c6:	ff 75 08             	pushl  0x8(%ebp)
  40a4c9:	e8 d2 f1 ff ff       	call   0x4096a0
  40a4ce:	83 c4 10             	add    $0x10,%esp
  40a4d1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  40a4d4:	2b 5d f4             	sub    -0xc(%ebp),%ebx
  40a4d7:	d1 e8                	shr    %eax
  40a4d9:	50                   	push   %eax
  40a4da:	ff 75 0c             	pushl  0xc(%ebp)
  40a4dd:	53                   	push   %ebx
  40a4de:	ff 75 f4             	pushl  -0xc(%ebp)
  40a4e1:	6a 00                	push   $0x0
  40a4e3:	68 e9 fd 00 00       	push   $0xfde9
  40a4e8:	ff 15 b4 c0 40 00    	call   *0x40c0b4
  40a4ee:	89 45 f0             	mov    %eax,-0x10(%ebp)
  40a4f1:	85 c0                	test   %eax,%eax
  40a4f3:	75 34                	jne    0x40a529
  40a4f5:	ff 15 4c c0 40 00    	call   *0x40c04c
  40a4fb:	50                   	push   %eax
  40a4fc:	e8 4a 7f ff ff       	call   0x40244b
  40a501:	59                   	pop    %ecx
  40a502:	83 4d ec ff          	orl    $0xffffffff,-0x14(%ebp)
  40a506:	8b 45 f4             	mov    -0xc(%ebp),%eax
  40a509:	3b 45 0c             	cmp    0xc(%ebp),%eax
  40a50c:	74 07                	je     0x40a515
  40a50e:	50                   	push   %eax
  40a50f:	e8 3a a7 ff ff       	call   0x404c4e
  40a514:	59                   	pop    %ecx
  40a515:	8b 45 ec             	mov    -0x14(%ebp),%eax
  40a518:	83 f8 fe             	cmp    $0xfffffffe,%eax
  40a51b:	0f 85 8b 01 00 00    	jne    0x40a6ac
  40a521:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a524:	e9 83 01 00 00       	jmp    0x40a6ac
  40a529:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a52c:	8b 17                	mov    (%edi),%edx
  40a52e:	33 c9                	xor    %ecx,%ecx
  40a530:	3b c3                	cmp    %ebx,%eax
  40a532:	0f 95 c1             	setne  %cl
  40a535:	03 c0                	add    %eax,%eax
  40a537:	89 45 f0             	mov    %eax,-0x10(%ebp)
  40a53a:	89 4c 16 30          	mov    %ecx,0x30(%esi,%edx,1)
  40a53e:	eb c6                	jmp    0x40a506
  40a540:	3b cb                	cmp    %ebx,%ecx
  40a542:	74 0e                	je     0x40a552
  40a544:	8b 4d f4             	mov    -0xc(%ebp),%ecx
  40a547:	66 83 39 0a          	cmpw   $0xa,(%ecx)
  40a54b:	75 05                	jne    0x40a552
  40a54d:	80 08 04             	orb    $0x4,(%eax)
  40a550:	eb 03                	jmp    0x40a555
  40a552:	80 20 fb             	andb   $0xfb,(%eax)
  40a555:	8b 5d f4             	mov    -0xc(%ebp),%ebx
  40a558:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a55b:	03 c3                	add    %ebx,%eax
  40a55d:	89 5d 10             	mov    %ebx,0x10(%ebp)
  40a560:	89 45 f0             	mov    %eax,-0x10(%ebp)
  40a563:	3b d8                	cmp    %eax,%ebx
  40a565:	0f 83 ff 00 00 00    	jae    0x40a66a
  40a56b:	8b 45 10             	mov    0x10(%ebp),%eax
  40a56e:	0f b7 08             	movzwl (%eax),%ecx
  40a571:	66 83 f9 1a          	cmp    $0x1a,%cx
  40a575:	0f 84 d7 00 00 00    	je     0x40a652
  40a57b:	66 83 f9 0d          	cmp    $0xd,%cx
  40a57f:	74 0f                	je     0x40a590
  40a581:	66 89 0b             	mov    %cx,(%ebx)
  40a584:	43                   	inc    %ebx
  40a585:	43                   	inc    %ebx
  40a586:	40                   	inc    %eax
  40a587:	40                   	inc    %eax
  40a588:	89 45 10             	mov    %eax,0x10(%ebp)
  40a58b:	e9 b4 00 00 00       	jmp    0x40a644
  40a590:	8b 4d f0             	mov    -0x10(%ebp),%ecx
  40a593:	83 c1 fe             	add    $0xfffffffe,%ecx
  40a596:	3b c1                	cmp    %ecx,%eax
  40a598:	73 1e                	jae    0x40a5b8
  40a59a:	8d 48 02             	lea    0x2(%eax),%ecx
  40a59d:	66 83 39 0a          	cmpw   $0xa,(%ecx)
  40a5a1:	75 0d                	jne    0x40a5b0
  40a5a3:	83 c0 04             	add    $0x4,%eax
  40a5a6:	89 45 10             	mov    %eax,0x10(%ebp)
  40a5a9:	6a 0a                	push   $0xa
  40a5ab:	e9 8e 00 00 00       	jmp    0x40a63e
  40a5b0:	89 4d 10             	mov    %ecx,0x10(%ebp)
  40a5b3:	e9 84 00 00 00       	jmp    0x40a63c
  40a5b8:	83 45 10 02          	addl   $0x2,0x10(%ebp)
  40a5bc:	6a 00                	push   $0x0
  40a5be:	8d 45 e8             	lea    -0x18(%ebp),%eax
  40a5c1:	50                   	push   %eax
  40a5c2:	6a 02                	push   $0x2
  40a5c4:	8d 45 f8             	lea    -0x8(%ebp),%eax
  40a5c7:	50                   	push   %eax
  40a5c8:	8b 07                	mov    (%edi),%eax
  40a5ca:	ff 34 06             	pushl  (%esi,%eax,1)
  40a5cd:	ff 15 f0 c0 40 00    	call   *0x40c0f0
  40a5d3:	85 c0                	test   %eax,%eax
  40a5d5:	75 0a                	jne    0x40a5e1
  40a5d7:	ff 15 4c c0 40 00    	call   *0x40c04c
  40a5dd:	85 c0                	test   %eax,%eax
  40a5df:	75 5b                	jne    0x40a63c
  40a5e1:	83 7d e8 00          	cmpl   $0x0,-0x18(%ebp)
  40a5e5:	74 55                	je     0x40a63c
  40a5e7:	8b 07                	mov    (%edi),%eax
  40a5e9:	f6 44 06 04 48       	testb  $0x48,0x4(%esi,%eax,1)
  40a5ee:	74 28                	je     0x40a618
  40a5f0:	66 83 7d f8 0a       	cmpw   $0xa,-0x8(%ebp)
  40a5f5:	74 b2                	je     0x40a5a9
  40a5f7:	6a 0d                	push   $0xd
  40a5f9:	58                   	pop    %eax
  40a5fa:	66 89 03             	mov    %ax,(%ebx)
  40a5fd:	8b 07                	mov    (%edi),%eax
  40a5ff:	8a 4d f8             	mov    -0x8(%ebp),%cl
  40a602:	88 4c 06 05          	mov    %cl,0x5(%esi,%eax,1)
  40a606:	8b 07                	mov    (%edi),%eax
  40a608:	8a 4d f9             	mov    -0x7(%ebp),%cl
  40a60b:	88 4c 06 25          	mov    %cl,0x25(%esi,%eax,1)
  40a60f:	8b 07                	mov    (%edi),%eax
  40a611:	c6 44 06 26 0a       	movb   $0xa,0x26(%esi,%eax,1)
  40a616:	eb 2a                	jmp    0x40a642
  40a618:	3b 5d f4             	cmp    -0xc(%ebp),%ebx
  40a61b:	75 07                	jne    0x40a624
  40a61d:	66 83 7d f8 0a       	cmpw   $0xa,-0x8(%ebp)
  40a622:	74 85                	je     0x40a5a9
  40a624:	6a 01                	push   $0x1
  40a626:	6a ff                	push   $0xffffffff
  40a628:	6a fe                	push   $0xfffffffe
  40a62a:	ff 75 08             	pushl  0x8(%ebp)
  40a62d:	e8 6e f0 ff ff       	call   0x4096a0
  40a632:	83 c4 10             	add    $0x10,%esp
  40a635:	66 83 7d f8 0a       	cmpw   $0xa,-0x8(%ebp)
  40a63a:	74 08                	je     0x40a644
  40a63c:	6a 0d                	push   $0xd
  40a63e:	58                   	pop    %eax
  40a63f:	66 89 03             	mov    %ax,(%ebx)
  40a642:	43                   	inc    %ebx
  40a643:	43                   	inc    %ebx
  40a644:	8b 45 f0             	mov    -0x10(%ebp),%eax
  40a647:	39 45 10             	cmp    %eax,0x10(%ebp)
  40a64a:	0f 82 1b ff ff ff    	jb     0x40a56b
  40a650:	eb 18                	jmp    0x40a66a
  40a652:	8b 0f                	mov    (%edi),%ecx
  40a654:	8d 74 0e 04          	lea    0x4(%esi,%ecx,1),%esi
  40a658:	f6 06 40             	testb  $0x40,(%esi)
  40a65b:	75 05                	jne    0x40a662
  40a65d:	80 0e 02             	orb    $0x2,(%esi)
  40a660:	eb 08                	jmp    0x40a66a
  40a662:	66 8b 00             	mov    (%eax),%ax
  40a665:	66 89 03             	mov    %ax,(%ebx)
  40a668:	43                   	inc    %ebx
  40a669:	43                   	inc    %ebx
  40a66a:	2b 5d f4             	sub    -0xc(%ebp),%ebx
  40a66d:	89 5d f0             	mov    %ebx,-0x10(%ebp)
  40a670:	e9 91 fe ff ff       	jmp    0x40a506
  40a675:	ff 15 4c c0 40 00    	call   *0x40c04c
  40a67b:	6a 05                	push   $0x5
  40a67d:	5e                   	pop    %esi
  40a67e:	3b c6                	cmp    %esi,%eax
  40a680:	75 17                	jne    0x40a699
  40a682:	e8 9e 7d ff ff       	call   0x402425
  40a687:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40a68d:	e8 a6 7d ff ff       	call   0x402438
  40a692:	89 30                	mov    %esi,(%eax)
  40a694:	e9 69 fe ff ff       	jmp    0x40a502
  40a699:	83 f8 6d             	cmp    $0x6d,%eax
  40a69c:	0f 85 59 fe ff ff    	jne    0x40a4fb
  40a6a2:	89 5d ec             	mov    %ebx,-0x14(%ebp)
  40a6a5:	e9 5c fe ff ff       	jmp    0x40a506
  40a6aa:	33 c0                	xor    %eax,%eax
  40a6ac:	5f                   	pop    %edi
  40a6ad:	5b                   	pop    %ebx
  40a6ae:	5e                   	pop    %esi
  40a6af:	c9                   	leave  
  40a6b0:	c3                   	ret    
  40a6b1:	6a 10                	push   $0x10
  40a6b3:	68 58 d7 40 00       	push   $0x40d758
  40a6b8:	e8 b3 7d ff ff       	call   0x402470
  40a6bd:	8b 45 08             	mov    0x8(%ebp),%eax
  40a6c0:	83 f8 fe             	cmp    $0xfffffffe,%eax
  40a6c3:	75 1b                	jne    0x40a6e0
  40a6c5:	e8 6e 7d ff ff       	call   0x402438
  40a6ca:	83 20 00             	andl   $0x0,(%eax)
  40a6cd:	e8 53 7d ff ff       	call   0x402425
  40a6d2:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40a6d8:	83 c8 ff             	or     $0xffffffff,%eax
  40a6db:	e9 be 00 00 00       	jmp    0x40a79e
  40a6e0:	33 f6                	xor    %esi,%esi
  40a6e2:	3b c6                	cmp    %esi,%eax
  40a6e4:	7c 08                	jl     0x40a6ee
  40a6e6:	3b 05 84 fa 40 00    	cmp    0x40fa84,%eax
  40a6ec:	72 21                	jb     0x40a70f
  40a6ee:	e8 45 7d ff ff       	call   0x402438
  40a6f3:	89 30                	mov    %esi,(%eax)
  40a6f5:	e8 2b 7d ff ff       	call   0x402425
  40a6fa:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40a700:	56                   	push   %esi
  40a701:	56                   	push   %esi
  40a702:	56                   	push   %esi
  40a703:	56                   	push   %esi
  40a704:	56                   	push   %esi
  40a705:	e8 b3 7c ff ff       	call   0x4023bd
  40a70a:	83 c4 14             	add    $0x14,%esp
  40a70d:	eb c9                	jmp    0x40a6d8
  40a70f:	8b c8                	mov    %eax,%ecx
  40a711:	c1 f9 05             	sar    $0x5,%ecx
  40a714:	8d 1c 8d a0 fa 40 00 	lea    0x40faa0(,%ecx,4),%ebx
  40a71b:	8b f8                	mov    %eax,%edi
  40a71d:	83 e7 1f             	and    $0x1f,%edi
  40a720:	c1 e7 06             	shl    $0x6,%edi
  40a723:	8b 0b                	mov    (%ebx),%ecx
  40a725:	0f be 4c 39 04       	movsbl 0x4(%ecx,%edi,1),%ecx
  40a72a:	83 e1 01             	and    $0x1,%ecx
  40a72d:	74 bf                	je     0x40a6ee
  40a72f:	b9 ff ff ff 7f       	mov    $0x7fffffff,%ecx
  40a734:	3b 4d 10             	cmp    0x10(%ebp),%ecx
  40a737:	1b c9                	sbb    %ecx,%ecx
  40a739:	41                   	inc    %ecx
  40a73a:	75 14                	jne    0x40a750
  40a73c:	e8 f7 7c ff ff       	call   0x402438
  40a741:	89 30                	mov    %esi,(%eax)
  40a743:	e8 dd 7c ff ff       	call   0x402425
  40a748:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  40a74e:	eb b0                	jmp    0x40a700
  40a750:	50                   	push   %eax
  40a751:	e8 12 09 00 00       	call   0x40b068
  40a756:	59                   	pop    %ecx
  40a757:	89 75 fc             	mov    %esi,-0x4(%ebp)
  40a75a:	8b 03                	mov    (%ebx),%eax
  40a75c:	f6 44 38 04 01       	testb  $0x1,0x4(%eax,%edi,1)
  40a761:	74 16                	je     0x40a779
  40a763:	ff 75 10             	pushl  0x10(%ebp)
  40a766:	ff 75 0c             	pushl  0xc(%ebp)
  40a769:	ff 75 08             	pushl  0x8(%ebp)
  40a76c:	e8 7e f9 ff ff       	call   0x40a0ef
  40a771:	83 c4 0c             	add    $0xc,%esp
  40a774:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  40a777:	eb 16                	jmp    0x40a78f
  40a779:	e8 a7 7c ff ff       	call   0x402425
  40a77e:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40a784:	e8 af 7c ff ff       	call   0x402438
  40a789:	89 30                	mov    %esi,(%eax)
  40a78b:	83 4d e4 ff          	orl    $0xffffffff,-0x1c(%ebp)
  40a78f:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40a796:	e8 09 00 00 00       	call   0x40a7a4
  40a79b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  40a79e:	e8 12 7d ff ff       	call   0x4024b5
  40a7a3:	c3                   	ret    
  40a7a4:	ff 75 08             	pushl  0x8(%ebp)
  40a7a7:	e8 5c 09 00 00       	call   0x40b108
  40a7ac:	59                   	pop    %ecx
  40a7ad:	c3                   	ret    
  40a7ae:	8b ff                	mov    %edi,%edi
  40a7b0:	55                   	push   %ebp
  40a7b1:	8b ec                	mov    %esp,%ebp
  40a7b3:	81 ec 28 03 00 00    	sub    $0x328,%esp
  40a7b9:	a1 00 e4 40 00       	mov    0x40e400,%eax
  40a7be:	33 c5                	xor    %ebp,%eax
  40a7c0:	89 45 fc             	mov    %eax,-0x4(%ebp)
  40a7c3:	f6 05 b0 ee 40 00 01 	testb  $0x1,0x40eeb0
  40a7ca:	56                   	push   %esi
  40a7cb:	74 08                	je     0x40a7d5
  40a7cd:	6a 0a                	push   $0xa
  40a7cf:	e8 97 92 ff ff       	call   0x403a6b
  40a7d4:	59                   	pop    %ecx
  40a7d5:	e8 87 c5 ff ff       	call   0x406d61
  40a7da:	85 c0                	test   %eax,%eax
  40a7dc:	74 08                	je     0x40a7e6
  40a7de:	6a 16                	push   $0x16
  40a7e0:	e8 89 c5 ff ff       	call   0x406d6e
  40a7e5:	59                   	pop    %ecx
  40a7e6:	f6 05 b0 ee 40 00 02 	testb  $0x2,0x40eeb0
  40a7ed:	0f 84 ca 00 00 00    	je     0x40a8bd
  40a7f3:	89 85 e0 fd ff ff    	mov    %eax,-0x220(%ebp)
  40a7f9:	89 8d dc fd ff ff    	mov    %ecx,-0x224(%ebp)
  40a7ff:	89 95 d8 fd ff ff    	mov    %edx,-0x228(%ebp)
  40a805:	89 9d d4 fd ff ff    	mov    %ebx,-0x22c(%ebp)
  40a80b:	89 b5 d0 fd ff ff    	mov    %esi,-0x230(%ebp)
  40a811:	89 bd cc fd ff ff    	mov    %edi,-0x234(%ebp)
  40a817:	66                   	data16
  40a818:	8c 95 f8 fd ff ff    	mov    %ss,-0x208(%ebp)
  40a81e:	66                   	data16
  40a81f:	8c 8d ec fd ff ff    	mov    %cs,-0x214(%ebp)
  40a825:	66                   	data16
  40a826:	8c 9d c8 fd ff ff    	mov    %ds,-0x238(%ebp)
  40a82c:	66                   	data16
  40a82d:	8c 85 c4 fd ff ff    	mov    %es,-0x23c(%ebp)
  40a833:	66                   	data16
  40a834:	8c a5 c0 fd ff ff    	mov    %fs,-0x240(%ebp)
  40a83a:	66                   	data16
  40a83b:	8c ad bc fd ff ff    	mov    %gs,-0x244(%ebp)
  40a841:	9c                   	pushf  
  40a842:	8f 85 f0 fd ff ff    	popl   -0x210(%ebp)
  40a848:	8b 75 04             	mov    0x4(%ebp),%esi
  40a84b:	8d 45 04             	lea    0x4(%ebp),%eax
  40a84e:	89 85 f4 fd ff ff    	mov    %eax,-0x20c(%ebp)
  40a854:	c7 85 30 fd ff ff 01 	movl   $0x10001,-0x2d0(%ebp)
  40a85b:	00 01 00 
  40a85e:	89 b5 e8 fd ff ff    	mov    %esi,-0x218(%ebp)
  40a864:	8b 40 fc             	mov    -0x4(%eax),%eax
  40a867:	6a 50                	push   $0x50
  40a869:	89 85 e4 fd ff ff    	mov    %eax,-0x21c(%ebp)
  40a86f:	8d 85 d8 fc ff ff    	lea    -0x328(%ebp),%eax
  40a875:	6a 00                	push   $0x0
  40a877:	50                   	push   %eax
  40a878:	e8 73 b7 ff ff       	call   0x405ff0
  40a87d:	8d 85 d8 fc ff ff    	lea    -0x328(%ebp),%eax
  40a883:	83 c4 0c             	add    $0xc,%esp
  40a886:	89 85 28 fd ff ff    	mov    %eax,-0x2d8(%ebp)
  40a88c:	8d 85 30 fd ff ff    	lea    -0x2d0(%ebp),%eax
  40a892:	6a 00                	push   $0x0
  40a894:	c7 85 d8 fc ff ff 15 	movl   $0x40000015,-0x328(%ebp)
  40a89b:	00 00 40 
  40a89e:	89 b5 e4 fc ff ff    	mov    %esi,-0x31c(%ebp)
  40a8a4:	89 85 2c fd ff ff    	mov    %eax,-0x2d4(%ebp)
  40a8aa:	ff 15 18 c0 40 00    	call   *0x40c018
  40a8b0:	8d 85 28 fd ff ff    	lea    -0x2d8(%ebp),%eax
  40a8b6:	50                   	push   %eax
  40a8b7:	ff 15 14 c0 40 00    	call   *0x40c014
  40a8bd:	6a 03                	push   $0x3
  40a8bf:	e8 25 91 ff ff       	call   0x4039e9
  40a8c4:	cc                   	int3   
  40a8c5:	6a 10                	push   $0x10
  40a8c7:	68 78 d7 40 00       	push   $0x40d778
  40a8cc:	e8 9f 7b ff ff       	call   0x402470
  40a8d1:	33 c0                	xor    %eax,%eax
  40a8d3:	8b 5d 08             	mov    0x8(%ebp),%ebx
  40a8d6:	33 ff                	xor    %edi,%edi
  40a8d8:	3b df                	cmp    %edi,%ebx
  40a8da:	0f 95 c0             	setne  %al
  40a8dd:	3b c7                	cmp    %edi,%eax
  40a8df:	75 1d                	jne    0x40a8fe
  40a8e1:	e8 3f 7b ff ff       	call   0x402425
  40a8e6:	c7 00 16 00 00 00    	movl   $0x16,(%eax)
  40a8ec:	57                   	push   %edi
  40a8ed:	57                   	push   %edi
  40a8ee:	57                   	push   %edi
  40a8ef:	57                   	push   %edi
  40a8f0:	57                   	push   %edi
  40a8f1:	e8 c7 7a ff ff       	call   0x4023bd
  40a8f6:	83 c4 14             	add    $0x14,%esp
  40a8f9:	83 c8 ff             	or     $0xffffffff,%eax
  40a8fc:	eb 53                	jmp    0x40a951
  40a8fe:	83 3d 80 fa 40 00 03 	cmpl   $0x3,0x40fa80
  40a905:	75 38                	jne    0x40a93f
  40a907:	6a 04                	push   $0x4
  40a909:	e8 7c a7 ff ff       	call   0x40508a
  40a90e:	59                   	pop    %ecx
  40a90f:	89 7d fc             	mov    %edi,-0x4(%ebp)
  40a912:	53                   	push   %ebx
  40a913:	e8 7a ca ff ff       	call   0x407392
  40a918:	59                   	pop    %ecx
  40a919:	89 45 e0             	mov    %eax,-0x20(%ebp)
  40a91c:	3b c7                	cmp    %edi,%eax
  40a91e:	74 0b                	je     0x40a92b
  40a920:	8b 73 fc             	mov    -0x4(%ebx),%esi
  40a923:	83 ee 09             	sub    $0x9,%esi
  40a926:	89 75 e4             	mov    %esi,-0x1c(%ebp)
  40a929:	eb 03                	jmp    0x40a92e
  40a92b:	8b 75 e4             	mov    -0x1c(%ebp),%esi
  40a92e:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40a935:	e8 25 00 00 00       	call   0x40a95f
  40a93a:	39 7d e0             	cmp    %edi,-0x20(%ebp)
  40a93d:	75 10                	jne    0x40a94f
  40a93f:	53                   	push   %ebx
  40a940:	57                   	push   %edi
  40a941:	ff 35 8c f4 40 00    	pushl  0x40f48c
  40a947:	ff 15 f4 c0 40 00    	call   *0x40c0f4
  40a94d:	8b f0                	mov    %eax,%esi
  40a94f:	8b c6                	mov    %esi,%eax
  40a951:	e8 5f 7b ff ff       	call   0x4024b5
  40a956:	c3                   	ret    
  40a957:	33 ff                	xor    %edi,%edi
  40a959:	8b 5d 08             	mov    0x8(%ebp),%ebx
  40a95c:	8b 75 e4             	mov    -0x1c(%ebp),%esi
  40a95f:	6a 04                	push   $0x4
  40a961:	e8 4a a6 ff ff       	call   0x404fb0
  40a966:	59                   	pop    %ecx
  40a967:	c3                   	ret    
  40a968:	cc                   	int3   
  40a969:	cc                   	int3   
  40a96a:	cc                   	int3   
  40a96b:	cc                   	int3   
  40a96c:	cc                   	int3   
  40a96d:	cc                   	int3   
  40a96e:	cc                   	int3   
  40a96f:	cc                   	int3   
  40a970:	55                   	push   %ebp
  40a971:	8b ec                	mov    %esp,%ebp
  40a973:	57                   	push   %edi
  40a974:	56                   	push   %esi
  40a975:	8b 75 0c             	mov    0xc(%ebp),%esi
  40a978:	8b 4d 10             	mov    0x10(%ebp),%ecx
  40a97b:	8b 7d 08             	mov    0x8(%ebp),%edi
  40a97e:	8b c1                	mov    %ecx,%eax
  40a980:	8b d1                	mov    %ecx,%edx
  40a982:	03 c6                	add    %esi,%eax
  40a984:	3b fe                	cmp    %esi,%edi
  40a986:	76 08                	jbe    0x40a990
  40a988:	3b f8                	cmp    %eax,%edi
  40a98a:	0f 82 a4 01 00 00    	jb     0x40ab34
  40a990:	81 f9 00 01 00 00    	cmp    $0x100,%ecx
  40a996:	72 1f                	jb     0x40a9b7
  40a998:	83 3d 60 fa 40 00 00 	cmpl   $0x0,0x40fa60
  40a99f:	74 16                	je     0x40a9b7
  40a9a1:	57                   	push   %edi
  40a9a2:	56                   	push   %esi
  40a9a3:	83 e7 0f             	and    $0xf,%edi
  40a9a6:	83 e6 0f             	and    $0xf,%esi
  40a9a9:	3b fe                	cmp    %esi,%edi
  40a9ab:	5e                   	pop    %esi
  40a9ac:	5f                   	pop    %edi
  40a9ad:	75 08                	jne    0x40a9b7
  40a9af:	5e                   	pop    %esi
  40a9b0:	5f                   	pop    %edi
  40a9b1:	5d                   	pop    %ebp
  40a9b2:	e9 9d f5 ff ff       	jmp    0x409f54
  40a9b7:	f7 c7 03 00 00 00    	test   $0x3,%edi
  40a9bd:	75 15                	jne    0x40a9d4
  40a9bf:	c1 e9 02             	shr    $0x2,%ecx
  40a9c2:	83 e2 03             	and    $0x3,%edx
  40a9c5:	83 f9 08             	cmp    $0x8,%ecx
  40a9c8:	72 2a                	jb     0x40a9f4
  40a9ca:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40a9cc:	ff 24 95 e4 aa 40 00 	jmp    *0x40aae4(,%edx,4)
  40a9d3:	90                   	nop    
  40a9d4:	8b c7                	mov    %edi,%eax
  40a9d6:	ba 03 00 00 00       	mov    $0x3,%edx
  40a9db:	83 e9 04             	sub    $0x4,%ecx
  40a9de:	72 0c                	jb     0x40a9ec
  40a9e0:	83 e0 03             	and    $0x3,%eax
  40a9e3:	03 c8                	add    %eax,%ecx
  40a9e5:	ff 24 85 f8 a9 40 00 	jmp    *0x40a9f8(,%eax,4)
  40a9ec:	ff 24 8d f4 aa 40 00 	jmp    *0x40aaf4(,%ecx,4)
  40a9f3:	90                   	nop    
  40a9f4:	ff 24 8d 78 aa 40 00 	jmp    *0x40aa78(,%ecx,4)
  40a9fb:	90                   	nop    
  40a9fc:	08 aa 40 00 34 aa    	or     %ch,-0x55cbffc0(%edx)
  40aa02:	40                   	inc    %eax
  40aa03:	00 58 aa             	add    %bl,-0x56(%eax)
  40aa06:	40                   	inc    %eax
  40aa07:	00 23                	add    %ah,(%ebx)
  40aa09:	d1 8a 06 88 07 8a    	rorl   -0x75f877fa(%edx)
  40aa0f:	46                   	inc    %esi
  40aa10:	01 88 47 01 8a 46    	add    %ecx,0x468a0147(%eax)
  40aa16:	02 c1                	add    %cl,%al
  40aa18:	e9 02 88 47 02       	jmp    0x288321f
  40aa1d:	83 c6 03             	add    $0x3,%esi
  40aa20:	83 c7 03             	add    $0x3,%edi
  40aa23:	83 f9 08             	cmp    $0x8,%ecx
  40aa26:	72 cc                	jb     0x40a9f4
  40aa28:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40aa2a:	ff 24 95 e4 aa 40 00 	jmp    *0x40aae4(,%edx,4)
  40aa31:	8d 49 00             	lea    0x0(%ecx),%ecx
  40aa34:	23 d1                	and    %ecx,%edx
  40aa36:	8a 06                	mov    (%esi),%al
  40aa38:	88 07                	mov    %al,(%edi)
  40aa3a:	8a 46 01             	mov    0x1(%esi),%al
  40aa3d:	c1 e9 02             	shr    $0x2,%ecx
  40aa40:	88 47 01             	mov    %al,0x1(%edi)
  40aa43:	83 c6 02             	add    $0x2,%esi
  40aa46:	83 c7 02             	add    $0x2,%edi
  40aa49:	83 f9 08             	cmp    $0x8,%ecx
  40aa4c:	72 a6                	jb     0x40a9f4
  40aa4e:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40aa50:	ff 24 95 e4 aa 40 00 	jmp    *0x40aae4(,%edx,4)
  40aa57:	90                   	nop    
  40aa58:	23 d1                	and    %ecx,%edx
  40aa5a:	8a 06                	mov    (%esi),%al
  40aa5c:	88 07                	mov    %al,(%edi)
  40aa5e:	83 c6 01             	add    $0x1,%esi
  40aa61:	c1 e9 02             	shr    $0x2,%ecx
  40aa64:	83 c7 01             	add    $0x1,%edi
  40aa67:	83 f9 08             	cmp    $0x8,%ecx
  40aa6a:	72 88                	jb     0x40a9f4
  40aa6c:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40aa6e:	ff 24 95 e4 aa 40 00 	jmp    *0x40aae4(,%edx,4)
  40aa75:	8d 49 00             	lea    0x0(%ecx),%ecx
  40aa78:	db aa 40 00 c8 aa    	fldt   -0x5537ffc0(%edx)
  40aa7e:	40                   	inc    %eax
  40aa7f:	00 c0                	add    %al,%al
  40aa81:	aa                   	stos   %al,%es:(%edi)
  40aa82:	40                   	inc    %eax
  40aa83:	00 b8 aa 40 00 b0    	add    %bh,-0x4fffbf56(%eax)
  40aa89:	aa                   	stos   %al,%es:(%edi)
  40aa8a:	40                   	inc    %eax
  40aa8b:	00 a8 aa 40 00 a0    	add    %ch,-0x5fffbf56(%eax)
  40aa91:	aa                   	stos   %al,%es:(%edi)
  40aa92:	40                   	inc    %eax
  40aa93:	00 98 aa 40 00 8b    	add    %bl,-0x74ffbf56(%eax)
  40aa99:	44                   	inc    %esp
  40aa9a:	8e e4                	mov    %esp,%fs
  40aa9c:	89 44 8f e4          	mov    %eax,-0x1c(%edi,%ecx,4)
  40aaa0:	8b 44 8e e8          	mov    -0x18(%esi,%ecx,4),%eax
  40aaa4:	89 44 8f e8          	mov    %eax,-0x18(%edi,%ecx,4)
  40aaa8:	8b 44 8e ec          	mov    -0x14(%esi,%ecx,4),%eax
  40aaac:	89 44 8f ec          	mov    %eax,-0x14(%edi,%ecx,4)
  40aab0:	8b 44 8e f0          	mov    -0x10(%esi,%ecx,4),%eax
  40aab4:	89 44 8f f0          	mov    %eax,-0x10(%edi,%ecx,4)
  40aab8:	8b 44 8e f4          	mov    -0xc(%esi,%ecx,4),%eax
  40aabc:	89 44 8f f4          	mov    %eax,-0xc(%edi,%ecx,4)
  40aac0:	8b 44 8e f8          	mov    -0x8(%esi,%ecx,4),%eax
  40aac4:	89 44 8f f8          	mov    %eax,-0x8(%edi,%ecx,4)
  40aac8:	8b 44 8e fc          	mov    -0x4(%esi,%ecx,4),%eax
  40aacc:	89 44 8f fc          	mov    %eax,-0x4(%edi,%ecx,4)
  40aad0:	8d 04 8d 00 00 00 00 	lea    0x0(,%ecx,4),%eax
  40aad7:	03 f0                	add    %eax,%esi
  40aad9:	03 f8                	add    %eax,%edi
  40aadb:	ff 24 95 e4 aa 40 00 	jmp    *0x40aae4(,%edx,4)
  40aae2:	8b ff                	mov    %edi,%edi
  40aae4:	f4                   	hlt    
  40aae5:	aa                   	stos   %al,%es:(%edi)
  40aae6:	40                   	inc    %eax
  40aae7:	00 fc                	add    %bh,%ah
  40aae9:	aa                   	stos   %al,%es:(%edi)
  40aaea:	40                   	inc    %eax
  40aaeb:	00 08                	add    %cl,(%eax)
  40aaed:	ab                   	stos   %eax,%es:(%edi)
  40aaee:	40                   	inc    %eax
  40aaef:	00 1c ab             	add    %bl,(%ebx,%ebp,4)
  40aaf2:	40                   	inc    %eax
  40aaf3:	00 8b 45 08 5e 5f    	add    %cl,0x5f5e0845(%ebx)
  40aaf9:	c9                   	leave  
  40aafa:	c3                   	ret    
  40aafb:	90                   	nop    
  40aafc:	8a 06                	mov    (%esi),%al
  40aafe:	88 07                	mov    %al,(%edi)
  40ab00:	8b 45 08             	mov    0x8(%ebp),%eax
  40ab03:	5e                   	pop    %esi
  40ab04:	5f                   	pop    %edi
  40ab05:	c9                   	leave  
  40ab06:	c3                   	ret    
  40ab07:	90                   	nop    
  40ab08:	8a 06                	mov    (%esi),%al
  40ab0a:	88 07                	mov    %al,(%edi)
  40ab0c:	8a 46 01             	mov    0x1(%esi),%al
  40ab0f:	88 47 01             	mov    %al,0x1(%edi)
  40ab12:	8b 45 08             	mov    0x8(%ebp),%eax
  40ab15:	5e                   	pop    %esi
  40ab16:	5f                   	pop    %edi
  40ab17:	c9                   	leave  
  40ab18:	c3                   	ret    
  40ab19:	8d 49 00             	lea    0x0(%ecx),%ecx
  40ab1c:	8a 06                	mov    (%esi),%al
  40ab1e:	88 07                	mov    %al,(%edi)
  40ab20:	8a 46 01             	mov    0x1(%esi),%al
  40ab23:	88 47 01             	mov    %al,0x1(%edi)
  40ab26:	8a 46 02             	mov    0x2(%esi),%al
  40ab29:	88 47 02             	mov    %al,0x2(%edi)
  40ab2c:	8b 45 08             	mov    0x8(%ebp),%eax
  40ab2f:	5e                   	pop    %esi
  40ab30:	5f                   	pop    %edi
  40ab31:	c9                   	leave  
  40ab32:	c3                   	ret    
  40ab33:	90                   	nop    
  40ab34:	8d 74 31 fc          	lea    -0x4(%ecx,%esi,1),%esi
  40ab38:	8d 7c 39 fc          	lea    -0x4(%ecx,%edi,1),%edi
  40ab3c:	f7 c7 03 00 00 00    	test   $0x3,%edi
  40ab42:	75 24                	jne    0x40ab68
  40ab44:	c1 e9 02             	shr    $0x2,%ecx
  40ab47:	83 e2 03             	and    $0x3,%edx
  40ab4a:	83 f9 08             	cmp    $0x8,%ecx
  40ab4d:	72 0d                	jb     0x40ab5c
  40ab4f:	fd                   	std    
  40ab50:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40ab52:	fc                   	cld    
  40ab53:	ff 24 95 80 ac 40 00 	jmp    *0x40ac80(,%edx,4)
  40ab5a:	8b ff                	mov    %edi,%edi
  40ab5c:	f7 d9                	neg    %ecx
  40ab5e:	ff 24 8d 30 ac 40 00 	jmp    *0x40ac30(,%ecx,4)
  40ab65:	8d 49 00             	lea    0x0(%ecx),%ecx
  40ab68:	8b c7                	mov    %edi,%eax
  40ab6a:	ba 03 00 00 00       	mov    $0x3,%edx
  40ab6f:	83 f9 04             	cmp    $0x4,%ecx
  40ab72:	72 0c                	jb     0x40ab80
  40ab74:	83 e0 03             	and    $0x3,%eax
  40ab77:	2b c8                	sub    %eax,%ecx
  40ab79:	ff 24 85 84 ab 40 00 	jmp    *0x40ab84(,%eax,4)
  40ab80:	ff 24 8d 80 ac 40 00 	jmp    *0x40ac80(,%ecx,4)
  40ab87:	90                   	nop    
  40ab88:	94                   	xchg   %eax,%esp
  40ab89:	ab                   	stos   %eax,%es:(%edi)
  40ab8a:	40                   	inc    %eax
  40ab8b:	00 b8 ab 40 00 e0    	add    %bh,-0x1fffbf55(%eax)
  40ab91:	ab                   	stos   %eax,%es:(%edi)
  40ab92:	40                   	inc    %eax
  40ab93:	00 8a 46 03 23 d1    	add    %cl,-0x2edcfcba(%edx)
  40ab99:	88 47 03             	mov    %al,0x3(%edi)
  40ab9c:	83 ee 01             	sub    $0x1,%esi
  40ab9f:	c1 e9 02             	shr    $0x2,%ecx
  40aba2:	83 ef 01             	sub    $0x1,%edi
  40aba5:	83 f9 08             	cmp    $0x8,%ecx
  40aba8:	72 b2                	jb     0x40ab5c
  40abaa:	fd                   	std    
  40abab:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40abad:	fc                   	cld    
  40abae:	ff 24 95 80 ac 40 00 	jmp    *0x40ac80(,%edx,4)
  40abb5:	8d 49 00             	lea    0x0(%ecx),%ecx
  40abb8:	8a 46 03             	mov    0x3(%esi),%al
  40abbb:	23 d1                	and    %ecx,%edx
  40abbd:	88 47 03             	mov    %al,0x3(%edi)
  40abc0:	8a 46 02             	mov    0x2(%esi),%al
  40abc3:	c1 e9 02             	shr    $0x2,%ecx
  40abc6:	88 47 02             	mov    %al,0x2(%edi)
  40abc9:	83 ee 02             	sub    $0x2,%esi
  40abcc:	83 ef 02             	sub    $0x2,%edi
  40abcf:	83 f9 08             	cmp    $0x8,%ecx
  40abd2:	72 88                	jb     0x40ab5c
  40abd4:	fd                   	std    
  40abd5:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40abd7:	fc                   	cld    
  40abd8:	ff 24 95 80 ac 40 00 	jmp    *0x40ac80(,%edx,4)
  40abdf:	90                   	nop    
  40abe0:	8a 46 03             	mov    0x3(%esi),%al
  40abe3:	23 d1                	and    %ecx,%edx
  40abe5:	88 47 03             	mov    %al,0x3(%edi)
  40abe8:	8a 46 02             	mov    0x2(%esi),%al
  40abeb:	88 47 02             	mov    %al,0x2(%edi)
  40abee:	8a 46 01             	mov    0x1(%esi),%al
  40abf1:	c1 e9 02             	shr    $0x2,%ecx
  40abf4:	88 47 01             	mov    %al,0x1(%edi)
  40abf7:	83 ee 03             	sub    $0x3,%esi
  40abfa:	83 ef 03             	sub    $0x3,%edi
  40abfd:	83 f9 08             	cmp    $0x8,%ecx
  40ac00:	0f 82 56 ff ff ff    	jb     0x40ab5c
  40ac06:	fd                   	std    
  40ac07:	f3 a5                	rep movsl %ds:(%esi),%es:(%edi)
  40ac09:	fc                   	cld    
  40ac0a:	ff 24 95 80 ac 40 00 	jmp    *0x40ac80(,%edx,4)
  40ac11:	8d 49 00             	lea    0x0(%ecx),%ecx
  40ac14:	34 ac                	xor    $0xac,%al
  40ac16:	40                   	inc    %eax
  40ac17:	00 3c ac             	add    %bh,(%esp,%ebp,4)
  40ac1a:	40                   	inc    %eax
  40ac1b:	00 44 ac 40          	add    %al,0x40(%esp,%ebp,4)
  40ac1f:	00 4c ac 40          	add    %cl,0x40(%esp,%ebp,4)
  40ac23:	00 54 ac 40          	add    %dl,0x40(%esp,%ebp,4)
  40ac27:	00 5c ac 40          	add    %bl,0x40(%esp,%ebp,4)
  40ac2b:	00 64 ac 40          	add    %ah,0x40(%esp,%ebp,4)
  40ac2f:	00 77 ac             	add    %dh,-0x54(%edi)
  40ac32:	40                   	inc    %eax
  40ac33:	00 8b 44 8e 1c 89    	add    %cl,-0x76e371bc(%ebx)
  40ac39:	44                   	inc    %esp
  40ac3a:	8f                   	(bad)  
  40ac3b:	1c 8b                	sbb    $0x8b,%al
  40ac3d:	44                   	inc    %esp
  40ac3e:	8e 18                	mov    (%eax),%ds
  40ac40:	89 44 8f 18          	mov    %eax,0x18(%edi,%ecx,4)
  40ac44:	8b 44 8e 14          	mov    0x14(%esi,%ecx,4),%eax
  40ac48:	89 44 8f 14          	mov    %eax,0x14(%edi,%ecx,4)
  40ac4c:	8b 44 8e 10          	mov    0x10(%esi,%ecx,4),%eax
  40ac50:	89 44 8f 10          	mov    %eax,0x10(%edi,%ecx,4)
  40ac54:	8b 44 8e 0c          	mov    0xc(%esi,%ecx,4),%eax
  40ac58:	89 44 8f 0c          	mov    %eax,0xc(%edi,%ecx,4)
  40ac5c:	8b 44 8e 08          	mov    0x8(%esi,%ecx,4),%eax
  40ac60:	89 44 8f 08          	mov    %eax,0x8(%edi,%ecx,4)
  40ac64:	8b 44 8e 04          	mov    0x4(%esi,%ecx,4),%eax
  40ac68:	89 44 8f 04          	mov    %eax,0x4(%edi,%ecx,4)
  40ac6c:	8d 04 8d 00 00 00 00 	lea    0x0(,%ecx,4),%eax
  40ac73:	03 f0                	add    %eax,%esi
  40ac75:	03 f8                	add    %eax,%edi
  40ac77:	ff 24 95 80 ac 40 00 	jmp    *0x40ac80(,%edx,4)
  40ac7e:	8b ff                	mov    %edi,%edi
  40ac80:	90                   	nop    
  40ac81:	ac                   	lods   %ds:(%esi),%al
  40ac82:	40                   	inc    %eax
  40ac83:	00 98 ac 40 00 a8    	add    %bl,-0x57ffbf54(%eax)
  40ac89:	ac                   	lods   %ds:(%esi),%al
  40ac8a:	40                   	inc    %eax
  40ac8b:	00 bc ac 40 00 8b 45 	add    %bh,0x458b0040(%esp,%ebp,4)
  40ac92:	08 5e 5f             	or     %bl,0x5f(%esi)
  40ac95:	c9                   	leave  
  40ac96:	c3                   	ret    
  40ac97:	90                   	nop    
  40ac98:	8a 46 03             	mov    0x3(%esi),%al
  40ac9b:	88 47 03             	mov    %al,0x3(%edi)
  40ac9e:	8b 45 08             	mov    0x8(%ebp),%eax
  40aca1:	5e                   	pop    %esi
  40aca2:	5f                   	pop    %edi
  40aca3:	c9                   	leave  
  40aca4:	c3                   	ret    
  40aca5:	8d 49 00             	lea    0x0(%ecx),%ecx
  40aca8:	8a 46 03             	mov    0x3(%esi),%al
  40acab:	88 47 03             	mov    %al,0x3(%edi)
  40acae:	8a 46 02             	mov    0x2(%esi),%al
  40acb1:	88 47 02             	mov    %al,0x2(%edi)
  40acb4:	8b 45 08             	mov    0x8(%ebp),%eax
  40acb7:	5e                   	pop    %esi
  40acb8:	5f                   	pop    %edi
  40acb9:	c9                   	leave  
  40acba:	c3                   	ret    
  40acbb:	90                   	nop    
  40acbc:	8a 46 03             	mov    0x3(%esi),%al
  40acbf:	88 47 03             	mov    %al,0x3(%edi)
  40acc2:	8a 46 02             	mov    0x2(%esi),%al
  40acc5:	88 47 02             	mov    %al,0x2(%edi)
  40acc8:	8a 46 01             	mov    0x1(%esi),%al
  40accb:	88 47 01             	mov    %al,0x1(%edi)
  40acce:	8b 45 08             	mov    0x8(%ebp),%eax
  40acd1:	5e                   	pop    %esi
  40acd2:	5f                   	pop    %edi
  40acd3:	c9                   	leave  
  40acd4:	c3                   	ret    
  40acd5:	8b ff                	mov    %edi,%edi
  40acd7:	55                   	push   %ebp
  40acd8:	8b ec                	mov    %esp,%ebp
  40acda:	56                   	push   %esi
  40acdb:	8b 75 08             	mov    0x8(%ebp),%esi
  40acde:	57                   	push   %edi
  40acdf:	56                   	push   %esi
  40ace0:	e8 0c 03 00 00       	call   0x40aff1
  40ace5:	59                   	pop    %ecx
  40ace6:	83 f8 ff             	cmp    $0xffffffff,%eax
  40ace9:	74 50                	je     0x40ad3b
  40aceb:	a1 a0 fa 40 00       	mov    0x40faa0,%eax
  40acf0:	83 fe 01             	cmp    $0x1,%esi
  40acf3:	75 09                	jne    0x40acfe
  40acf5:	f6 80 84 00 00 00 01 	testb  $0x1,0x84(%eax)
  40acfc:	75 0b                	jne    0x40ad09
  40acfe:	83 fe 02             	cmp    $0x2,%esi
  40ad01:	75 1c                	jne    0x40ad1f
  40ad03:	f6 40 44 01          	testb  $0x1,0x44(%eax)
  40ad07:	74 16                	je     0x40ad1f
  40ad09:	6a 02                	push   $0x2
  40ad0b:	e8 e1 02 00 00       	call   0x40aff1
  40ad10:	6a 01                	push   $0x1
  40ad12:	8b f8                	mov    %eax,%edi
  40ad14:	e8 d8 02 00 00       	call   0x40aff1
  40ad19:	59                   	pop    %ecx
  40ad1a:	59                   	pop    %ecx
  40ad1b:	3b c7                	cmp    %edi,%eax
  40ad1d:	74 1c                	je     0x40ad3b
  40ad1f:	56                   	push   %esi
  40ad20:	e8 cc 02 00 00       	call   0x40aff1
  40ad25:	59                   	pop    %ecx
  40ad26:	50                   	push   %eax
  40ad27:	ff 15 f8 c0 40 00    	call   *0x40c0f8
  40ad2d:	85 c0                	test   %eax,%eax
  40ad2f:	75 0a                	jne    0x40ad3b
  40ad31:	ff 15 4c c0 40 00    	call   *0x40c04c
  40ad37:	8b f8                	mov    %eax,%edi
  40ad39:	eb 02                	jmp    0x40ad3d
  40ad3b:	33 ff                	xor    %edi,%edi
  40ad3d:	56                   	push   %esi
  40ad3e:	e8 28 02 00 00       	call   0x40af6b
  40ad43:	8b c6                	mov    %esi,%eax
  40ad45:	c1 f8 05             	sar    $0x5,%eax
  40ad48:	8b 04 85 a0 fa 40 00 	mov    0x40faa0(,%eax,4),%eax
  40ad4f:	83 e6 1f             	and    $0x1f,%esi
  40ad52:	c1 e6 06             	shl    $0x6,%esi
  40ad55:	59                   	pop    %ecx
  40ad56:	c6 44 30 04 00       	movb   $0x0,0x4(%eax,%esi,1)
  40ad5b:	85 ff                	test   %edi,%edi
  40ad5d:	74 0c                	je     0x40ad6b
  40ad5f:	57                   	push   %edi
  40ad60:	e8 e6 76 ff ff       	call   0x40244b
  40ad65:	59                   	pop    %ecx
  40ad66:	83 c8 ff             	or     $0xffffffff,%eax
  40ad69:	eb 02                	jmp    0x40ad6d
  40ad6b:	33 c0                	xor    %eax,%eax
  40ad6d:	5f                   	pop    %edi
  40ad6e:	5e                   	pop    %esi
  40ad6f:	5d                   	pop    %ebp
  40ad70:	c3                   	ret    
  40ad71:	6a 10                	push   $0x10
  40ad73:	68 98 d7 40 00       	push   $0x40d798
  40ad78:	e8 f3 76 ff ff       	call   0x402470
  40ad7d:	8b 45 08             	mov    0x8(%ebp),%eax
  40ad80:	83 f8 fe             	cmp    $0xfffffffe,%eax
  40ad83:	75 1b                	jne    0x40ada0
  40ad85:	e8 ae 76 ff ff       	call   0x402438
  40ad8a:	83 20 00             	andl   $0x0,(%eax)
  40ad8d:	e8 93 76 ff ff       	call   0x402425
  40ad92:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40ad98:	83 c8 ff             	or     $0xffffffff,%eax
  40ad9b:	e9 8e 00 00 00       	jmp    0x40ae2e
  40ada0:	33 ff                	xor    %edi,%edi
  40ada2:	3b c7                	cmp    %edi,%eax
  40ada4:	7c 08                	jl     0x40adae
  40ada6:	3b 05 84 fa 40 00    	cmp    0x40fa84,%eax
  40adac:	72 21                	jb     0x40adcf
  40adae:	e8 85 76 ff ff       	call   0x402438
  40adb3:	89 38                	mov    %edi,(%eax)
  40adb5:	e8 6b 76 ff ff       	call   0x402425
  40adba:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40adc0:	57                   	push   %edi
  40adc1:	57                   	push   %edi
  40adc2:	57                   	push   %edi
  40adc3:	57                   	push   %edi
  40adc4:	57                   	push   %edi
  40adc5:	e8 f3 75 ff ff       	call   0x4023bd
  40adca:	83 c4 14             	add    $0x14,%esp
  40adcd:	eb c9                	jmp    0x40ad98
  40adcf:	8b c8                	mov    %eax,%ecx
  40add1:	c1 f9 05             	sar    $0x5,%ecx
  40add4:	8d 1c 8d a0 fa 40 00 	lea    0x40faa0(,%ecx,4),%ebx
  40addb:	8b f0                	mov    %eax,%esi
  40addd:	83 e6 1f             	and    $0x1f,%esi
  40ade0:	c1 e6 06             	shl    $0x6,%esi
  40ade3:	8b 0b                	mov    (%ebx),%ecx
  40ade5:	0f be 4c 31 04       	movsbl 0x4(%ecx,%esi,1),%ecx
  40adea:	83 e1 01             	and    $0x1,%ecx
  40aded:	74 bf                	je     0x40adae
  40adef:	50                   	push   %eax
  40adf0:	e8 73 02 00 00       	call   0x40b068
  40adf5:	59                   	pop    %ecx
  40adf6:	89 7d fc             	mov    %edi,-0x4(%ebp)
  40adf9:	8b 03                	mov    (%ebx),%eax
  40adfb:	f6 44 30 04 01       	testb  $0x1,0x4(%eax,%esi,1)
  40ae00:	74 0e                	je     0x40ae10
  40ae02:	ff 75 08             	pushl  0x8(%ebp)
  40ae05:	e8 cb fe ff ff       	call   0x40acd5
  40ae0a:	59                   	pop    %ecx
  40ae0b:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  40ae0e:	eb 0f                	jmp    0x40ae1f
  40ae10:	e8 10 76 ff ff       	call   0x402425
  40ae15:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40ae1b:	83 4d e4 ff          	orl    $0xffffffff,-0x1c(%ebp)
  40ae1f:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40ae26:	e8 09 00 00 00       	call   0x40ae34
  40ae2b:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  40ae2e:	e8 82 76 ff ff       	call   0x4024b5
  40ae33:	c3                   	ret    
  40ae34:	ff 75 08             	pushl  0x8(%ebp)
  40ae37:	e8 cc 02 00 00       	call   0x40b108
  40ae3c:	59                   	pop    %ecx
  40ae3d:	c3                   	ret    
  40ae3e:	8b ff                	mov    %edi,%edi
  40ae40:	55                   	push   %ebp
  40ae41:	8b ec                	mov    %esp,%ebp
  40ae43:	56                   	push   %esi
  40ae44:	8b 75 08             	mov    0x8(%ebp),%esi
  40ae47:	8b 46 0c             	mov    0xc(%esi),%eax
  40ae4a:	a8 83                	test   $0x83,%al
  40ae4c:	74 1e                	je     0x40ae6c
  40ae4e:	a8 08                	test   $0x8,%al
  40ae50:	74 1a                	je     0x40ae6c
  40ae52:	ff 76 08             	pushl  0x8(%esi)
  40ae55:	e8 f4 9d ff ff       	call   0x404c4e
  40ae5a:	81 66 0c f7 fb ff ff 	andl   $0xfffffbf7,0xc(%esi)
  40ae61:	33 c0                	xor    %eax,%eax
  40ae63:	59                   	pop    %ecx
  40ae64:	89 06                	mov    %eax,(%esi)
  40ae66:	89 46 08             	mov    %eax,0x8(%esi)
  40ae69:	89 46 04             	mov    %eax,0x4(%esi)
  40ae6c:	5e                   	pop    %esi
  40ae6d:	5d                   	pop    %ebp
  40ae6e:	c3                   	ret    
  40ae6f:	8b ff                	mov    %edi,%edi
  40ae71:	55                   	push   %ebp
  40ae72:	8b ec                	mov    %esp,%ebp
  40ae74:	83 ec 10             	sub    $0x10,%esp
  40ae77:	a1 00 e4 40 00       	mov    0x40e400,%eax
  40ae7c:	33 c5                	xor    %ebp,%eax
  40ae7e:	89 45 fc             	mov    %eax,-0x4(%ebp)
  40ae81:	56                   	push   %esi
  40ae82:	33 f6                	xor    %esi,%esi
  40ae84:	39 35 c0 ee 40 00    	cmp    %esi,0x40eec0
  40ae8a:	74 4f                	je     0x40aedb
  40ae8c:	83 3d 84 ef 40 00 fe 	cmpl   $0xfffffffe,0x40ef84
  40ae93:	75 05                	jne    0x40ae9a
  40ae95:	e8 d8 04 00 00       	call   0x40b372
  40ae9a:	a1 84 ef 40 00       	mov    0x40ef84,%eax
  40ae9f:	83 f8 ff             	cmp    $0xffffffff,%eax
  40aea2:	75 07                	jne    0x40aeab
  40aea4:	b8 ff ff 00 00       	mov    $0xffff,%eax
  40aea9:	eb 70                	jmp    0x40af1b
  40aeab:	56                   	push   %esi
  40aeac:	8d 4d f0             	lea    -0x10(%ebp),%ecx
  40aeaf:	51                   	push   %ecx
  40aeb0:	6a 01                	push   $0x1
  40aeb2:	8d 4d 08             	lea    0x8(%ebp),%ecx
  40aeb5:	51                   	push   %ecx
  40aeb6:	50                   	push   %eax
  40aeb7:	ff 15 04 c1 40 00    	call   *0x40c104
  40aebd:	85 c0                	test   %eax,%eax
  40aebf:	75 67                	jne    0x40af28
  40aec1:	83 3d c0 ee 40 00 02 	cmpl   $0x2,0x40eec0
  40aec8:	75 da                	jne    0x40aea4
  40aeca:	ff 15 4c c0 40 00    	call   *0x40c04c
  40aed0:	83 f8 78             	cmp    $0x78,%eax
  40aed3:	75 cf                	jne    0x40aea4
  40aed5:	89 35 c0 ee 40 00    	mov    %esi,0x40eec0
  40aedb:	56                   	push   %esi
  40aedc:	56                   	push   %esi
  40aedd:	6a 05                	push   $0x5
  40aedf:	8d 45 f4             	lea    -0xc(%ebp),%eax
  40aee2:	50                   	push   %eax
  40aee3:	6a 01                	push   $0x1
  40aee5:	8d 45 08             	lea    0x8(%ebp),%eax
  40aee8:	50                   	push   %eax
  40aee9:	56                   	push   %esi
  40aeea:	ff 15 00 c1 40 00    	call   *0x40c100
  40aef0:	50                   	push   %eax
  40aef1:	ff 15 48 c0 40 00    	call   *0x40c048
  40aef7:	8b 0d 84 ef 40 00    	mov    0x40ef84,%ecx
  40aefd:	83 f9 ff             	cmp    $0xffffffff,%ecx
  40af00:	74 a2                	je     0x40aea4
  40af02:	56                   	push   %esi
  40af03:	8d 55 f0             	lea    -0x10(%ebp),%edx
  40af06:	52                   	push   %edx
  40af07:	50                   	push   %eax
  40af08:	8d 45 f4             	lea    -0xc(%ebp),%eax
  40af0b:	50                   	push   %eax
  40af0c:	51                   	push   %ecx
  40af0d:	ff 15 fc c0 40 00    	call   *0x40c0fc
  40af13:	85 c0                	test   %eax,%eax
  40af15:	74 8d                	je     0x40aea4
  40af17:	66 8b 45 08          	mov    0x8(%ebp),%ax
  40af1b:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  40af1e:	33 cd                	xor    %ebp,%ecx
  40af20:	5e                   	pop    %esi
  40af21:	e8 19 b0 ff ff       	call   0x405f3f
  40af26:	c9                   	leave  
  40af27:	c3                   	ret    
  40af28:	c7 05 c0 ee 40 00 01 	movl   $0x1,0x40eec0
  40af2f:	00 00 00 
  40af32:	eb e3                	jmp    0x40af17
  40af34:	cc                   	int3   
  40af35:	cc                   	int3   
  40af36:	cc                   	int3   
  40af37:	cc                   	int3   
  40af38:	cc                   	int3   
  40af39:	cc                   	int3   
  40af3a:	cc                   	int3   
  40af3b:	cc                   	int3   
  40af3c:	cc                   	int3   
  40af3d:	cc                   	int3   
  40af3e:	cc                   	int3   
  40af3f:	cc                   	int3   
  40af40:	51                   	push   %ecx
  40af41:	8d 4c 24 04          	lea    0x4(%esp),%ecx
  40af45:	2b c8                	sub    %eax,%ecx
  40af47:	1b c0                	sbb    %eax,%eax
  40af49:	f7 d0                	not    %eax
  40af4b:	23 c8                	and    %eax,%ecx
  40af4d:	8b c4                	mov    %esp,%eax
  40af4f:	25 00 f0 ff ff       	and    $0xfffff000,%eax
  40af54:	3b c8                	cmp    %eax,%ecx
  40af56:	72 0a                	jb     0x40af62
  40af58:	8b c1                	mov    %ecx,%eax
  40af5a:	59                   	pop    %ecx
  40af5b:	94                   	xchg   %eax,%esp
  40af5c:	8b 00                	mov    (%eax),%eax
  40af5e:	89 04 24             	mov    %eax,(%esp)
  40af61:	c3                   	ret    
  40af62:	2d 00 10 00 00       	sub    $0x1000,%eax
  40af67:	85 00                	test   %eax,(%eax)
  40af69:	eb e9                	jmp    0x40af54
  40af6b:	8b ff                	mov    %edi,%edi
  40af6d:	55                   	push   %ebp
  40af6e:	8b ec                	mov    %esp,%ebp
  40af70:	8b 4d 08             	mov    0x8(%ebp),%ecx
  40af73:	53                   	push   %ebx
  40af74:	33 db                	xor    %ebx,%ebx
  40af76:	3b cb                	cmp    %ebx,%ecx
  40af78:	56                   	push   %esi
  40af79:	57                   	push   %edi
  40af7a:	7c 5b                	jl     0x40afd7
  40af7c:	3b 0d 84 fa 40 00    	cmp    0x40fa84,%ecx
  40af82:	73 53                	jae    0x40afd7
  40af84:	8b c1                	mov    %ecx,%eax
  40af86:	c1 f8 05             	sar    $0x5,%eax
  40af89:	8b f1                	mov    %ecx,%esi
  40af8b:	8d 3c 85 a0 fa 40 00 	lea    0x40faa0(,%eax,4),%edi
  40af92:	8b 07                	mov    (%edi),%eax
  40af94:	83 e6 1f             	and    $0x1f,%esi
  40af97:	c1 e6 06             	shl    $0x6,%esi
  40af9a:	03 c6                	add    %esi,%eax
  40af9c:	f6 40 04 01          	testb  $0x1,0x4(%eax)
  40afa0:	74 35                	je     0x40afd7
  40afa2:	83 38 ff             	cmpl   $0xffffffff,(%eax)
  40afa5:	74 30                	je     0x40afd7
  40afa7:	83 3d 00 e0 40 00 01 	cmpl   $0x1,0x40e000
  40afae:	75 1d                	jne    0x40afcd
  40afb0:	2b cb                	sub    %ebx,%ecx
  40afb2:	74 10                	je     0x40afc4
  40afb4:	49                   	dec    %ecx
  40afb5:	74 08                	je     0x40afbf
  40afb7:	49                   	dec    %ecx
  40afb8:	75 13                	jne    0x40afcd
  40afba:	53                   	push   %ebx
  40afbb:	6a f4                	push   $0xfffffff4
  40afbd:	eb 08                	jmp    0x40afc7
  40afbf:	53                   	push   %ebx
  40afc0:	6a f5                	push   $0xfffffff5
  40afc2:	eb 03                	jmp    0x40afc7
  40afc4:	53                   	push   %ebx
  40afc5:	6a f6                	push   $0xfffffff6
  40afc7:	ff 15 08 c1 40 00    	call   *0x40c108
  40afcd:	8b 07                	mov    (%edi),%eax
  40afcf:	83 0c 06 ff          	orl    $0xffffffff,(%esi,%eax,1)
  40afd3:	33 c0                	xor    %eax,%eax
  40afd5:	eb 15                	jmp    0x40afec
  40afd7:	e8 49 74 ff ff       	call   0x402425
  40afdc:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40afe2:	e8 51 74 ff ff       	call   0x402438
  40afe7:	89 18                	mov    %ebx,(%eax)
  40afe9:	83 c8 ff             	or     $0xffffffff,%eax
  40afec:	5f                   	pop    %edi
  40afed:	5e                   	pop    %esi
  40afee:	5b                   	pop    %ebx
  40afef:	5d                   	pop    %ebp
  40aff0:	c3                   	ret    
  40aff1:	8b ff                	mov    %edi,%edi
  40aff3:	55                   	push   %ebp
  40aff4:	8b ec                	mov    %esp,%ebp
  40aff6:	8b 45 08             	mov    0x8(%ebp),%eax
  40aff9:	83 f8 fe             	cmp    $0xfffffffe,%eax
  40affc:	75 18                	jne    0x40b016
  40affe:	e8 35 74 ff ff       	call   0x402438
  40b003:	83 20 00             	andl   $0x0,(%eax)
  40b006:	e8 1a 74 ff ff       	call   0x402425
  40b00b:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40b011:	83 c8 ff             	or     $0xffffffff,%eax
  40b014:	5d                   	pop    %ebp
  40b015:	c3                   	ret    
  40b016:	56                   	push   %esi
  40b017:	33 f6                	xor    %esi,%esi
  40b019:	3b c6                	cmp    %esi,%eax
  40b01b:	7c 22                	jl     0x40b03f
  40b01d:	3b 05 84 fa 40 00    	cmp    0x40fa84,%eax
  40b023:	73 1a                	jae    0x40b03f
  40b025:	8b c8                	mov    %eax,%ecx
  40b027:	83 e0 1f             	and    $0x1f,%eax
  40b02a:	c1 f9 05             	sar    $0x5,%ecx
  40b02d:	8b 0c 8d a0 fa 40 00 	mov    0x40faa0(,%ecx,4),%ecx
  40b034:	c1 e0 06             	shl    $0x6,%eax
  40b037:	03 c1                	add    %ecx,%eax
  40b039:	f6 40 04 01          	testb  $0x1,0x4(%eax)
  40b03d:	75 24                	jne    0x40b063
  40b03f:	e8 f4 73 ff ff       	call   0x402438
  40b044:	89 30                	mov    %esi,(%eax)
  40b046:	e8 da 73 ff ff       	call   0x402425
  40b04b:	56                   	push   %esi
  40b04c:	56                   	push   %esi
  40b04d:	56                   	push   %esi
  40b04e:	56                   	push   %esi
  40b04f:	56                   	push   %esi
  40b050:	c7 00 09 00 00 00    	movl   $0x9,(%eax)
  40b056:	e8 62 73 ff ff       	call   0x4023bd
  40b05b:	83 c4 14             	add    $0x14,%esp
  40b05e:	83 c8 ff             	or     $0xffffffff,%eax
  40b061:	eb 02                	jmp    0x40b065
  40b063:	8b 00                	mov    (%eax),%eax
  40b065:	5e                   	pop    %esi
  40b066:	5d                   	pop    %ebp
  40b067:	c3                   	ret    
  40b068:	6a 0c                	push   $0xc
  40b06a:	68 b8 d7 40 00       	push   $0x40d7b8
  40b06f:	e8 fc 73 ff ff       	call   0x402470
  40b074:	8b 7d 08             	mov    0x8(%ebp),%edi
  40b077:	8b c7                	mov    %edi,%eax
  40b079:	c1 f8 05             	sar    $0x5,%eax
  40b07c:	8b f7                	mov    %edi,%esi
  40b07e:	83 e6 1f             	and    $0x1f,%esi
  40b081:	c1 e6 06             	shl    $0x6,%esi
  40b084:	03 34 85 a0 fa 40 00 	add    0x40faa0(,%eax,4),%esi
  40b08b:	c7 45 e4 01 00 00 00 	movl   $0x1,-0x1c(%ebp)
  40b092:	33 db                	xor    %ebx,%ebx
  40b094:	39 5e 08             	cmp    %ebx,0x8(%esi)
  40b097:	75 36                	jne    0x40b0cf
  40b099:	6a 0a                	push   $0xa
  40b09b:	e8 ea 9f ff ff       	call   0x40508a
  40b0a0:	59                   	pop    %ecx
  40b0a1:	89 5d fc             	mov    %ebx,-0x4(%ebp)
  40b0a4:	39 5e 08             	cmp    %ebx,0x8(%esi)
  40b0a7:	75 1a                	jne    0x40b0c3
  40b0a9:	68 a0 0f 00 00       	push   $0xfa0
  40b0ae:	8d 46 0c             	lea    0xc(%esi),%eax
  40b0b1:	50                   	push   %eax
  40b0b2:	e8 94 be ff ff       	call   0x406f4b
  40b0b7:	59                   	pop    %ecx
  40b0b8:	59                   	pop    %ecx
  40b0b9:	85 c0                	test   %eax,%eax
  40b0bb:	75 03                	jne    0x40b0c0
  40b0bd:	89 5d e4             	mov    %ebx,-0x1c(%ebp)
  40b0c0:	ff 46 08             	incl   0x8(%esi)
  40b0c3:	c7 45 fc fe ff ff ff 	movl   $0xfffffffe,-0x4(%ebp)
  40b0ca:	e8 30 00 00 00       	call   0x40b0ff
  40b0cf:	39 5d e4             	cmp    %ebx,-0x1c(%ebp)
  40b0d2:	74 1d                	je     0x40b0f1
  40b0d4:	8b c7                	mov    %edi,%eax
  40b0d6:	c1 f8 05             	sar    $0x5,%eax
  40b0d9:	83 e7 1f             	and    $0x1f,%edi
  40b0dc:	c1 e7 06             	shl    $0x6,%edi
  40b0df:	8b 04 85 a0 fa 40 00 	mov    0x40faa0(,%eax,4),%eax
  40b0e6:	8d 44 38 0c          	lea    0xc(%eax,%edi,1),%eax
  40b0ea:	50                   	push   %eax
  40b0eb:	ff 15 04 c0 40 00    	call   *0x40c004
  40b0f1:	8b 45 e4             	mov    -0x1c(%ebp),%eax
  40b0f4:	e8 bc 73 ff ff       	call   0x4024b5
  40b0f9:	c3                   	ret    
  40b0fa:	33 db                	xor    %ebx,%ebx
  40b0fc:	8b 7d 08             	mov    0x8(%ebp),%edi
  40b0ff:	6a 0a                	push   $0xa
  40b101:	e8 aa 9e ff ff       	call   0x404fb0
  40b106:	59                   	pop    %ecx
  40b107:	c3                   	ret    
  40b108:	8b ff                	mov    %edi,%edi
  40b10a:	55                   	push   %ebp
  40b10b:	8b ec                	mov    %esp,%ebp
  40b10d:	8b 45 08             	mov    0x8(%ebp),%eax
  40b110:	8b c8                	mov    %eax,%ecx
  40b112:	83 e0 1f             	and    $0x1f,%eax
  40b115:	c1 f9 05             	sar    $0x5,%ecx
  40b118:	8b 0c 8d a0 fa 40 00 	mov    0x40faa0(,%ecx,4),%ecx
  40b11f:	c1 e0 06             	shl    $0x6,%eax
  40b122:	8d 44 01 0c          	lea    0xc(%ecx,%eax,1),%eax
  40b126:	50                   	push   %eax
  40b127:	ff 15 08 c0 40 00    	call   *0x40c008
  40b12d:	5d                   	pop    %ebp
  40b12e:	c3                   	ret    
  40b12f:	8b ff                	mov    %edi,%edi
  40b131:	55                   	push   %ebp
  40b132:	8b ec                	mov    %esp,%ebp
  40b134:	83 ec 0c             	sub    $0xc,%esp
  40b137:	a1 00 e4 40 00       	mov    0x40e400,%eax
  40b13c:	33 c5                	xor    %ebp,%eax
  40b13e:	89 45 fc             	mov    %eax,-0x4(%ebp)
  40b141:	6a 06                	push   $0x6
  40b143:	8d 45 f4             	lea    -0xc(%ebp),%eax
  40b146:	50                   	push   %eax
  40b147:	68 04 10 00 00       	push   $0x1004
  40b14c:	ff 75 08             	pushl  0x8(%ebp)
  40b14f:	c6 45 fa 00          	movb   $0x0,-0x6(%ebp)
  40b153:	ff 15 e8 c0 40 00    	call   *0x40c0e8
  40b159:	85 c0                	test   %eax,%eax
  40b15b:	75 05                	jne    0x40b162
  40b15d:	83 c8 ff             	or     $0xffffffff,%eax
  40b160:	eb 0a                	jmp    0x40b16c
  40b162:	8d 45 f4             	lea    -0xc(%ebp),%eax
  40b165:	50                   	push   %eax
  40b166:	e8 f1 01 00 00       	call   0x40b35c
  40b16b:	59                   	pop    %ecx
  40b16c:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  40b16f:	33 cd                	xor    %ebp,%ecx
  40b171:	e8 c9 ad ff ff       	call   0x405f3f
  40b176:	c9                   	leave  
  40b177:	c3                   	ret    
  40b178:	8b ff                	mov    %edi,%edi
  40b17a:	55                   	push   %ebp
  40b17b:	8b ec                	mov    %esp,%ebp
  40b17d:	83 ec 34             	sub    $0x34,%esp
  40b180:	a1 00 e4 40 00       	mov    0x40e400,%eax
  40b185:	33 c5                	xor    %ebp,%eax
  40b187:	89 45 fc             	mov    %eax,-0x4(%ebp)
  40b18a:	8b 45 10             	mov    0x10(%ebp),%eax
  40b18d:	8b 4d 18             	mov    0x18(%ebp),%ecx
  40b190:	89 45 d8             	mov    %eax,-0x28(%ebp)
  40b193:	8b 45 14             	mov    0x14(%ebp),%eax
  40b196:	53                   	push   %ebx
  40b197:	89 45 d0             	mov    %eax,-0x30(%ebp)
  40b19a:	8b 00                	mov    (%eax),%eax
  40b19c:	56                   	push   %esi
  40b19d:	89 45 dc             	mov    %eax,-0x24(%ebp)
  40b1a0:	8b 45 08             	mov    0x8(%ebp),%eax
  40b1a3:	57                   	push   %edi
  40b1a4:	33 ff                	xor    %edi,%edi
  40b1a6:	89 4d cc             	mov    %ecx,-0x34(%ebp)
  40b1a9:	89 7d e0             	mov    %edi,-0x20(%ebp)
  40b1ac:	89 7d d4             	mov    %edi,-0x2c(%ebp)
  40b1af:	3b 45 0c             	cmp    0xc(%ebp),%eax
  40b1b2:	0f 84 5f 01 00 00    	je     0x40b317
  40b1b8:	8b 35 a0 c0 40 00    	mov    0x40c0a0,%esi
  40b1be:	8d 4d e8             	lea    -0x18(%ebp),%ecx
  40b1c1:	51                   	push   %ecx
  40b1c2:	50                   	push   %eax
  40b1c3:	ff d6                	call   *%esi
  40b1c5:	8b 1d b4 c0 40 00    	mov    0x40c0b4,%ebx
  40b1cb:	85 c0                	test   %eax,%eax
  40b1cd:	74 5e                	je     0x40b22d
  40b1cf:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
  40b1d3:	75 58                	jne    0x40b22d
  40b1d5:	8d 45 e8             	lea    -0x18(%ebp),%eax
  40b1d8:	50                   	push   %eax
  40b1d9:	ff 75 0c             	pushl  0xc(%ebp)
  40b1dc:	ff d6                	call   *%esi
  40b1de:	85 c0                	test   %eax,%eax
  40b1e0:	74 4b                	je     0x40b22d
  40b1e2:	83 7d e8 01          	cmpl   $0x1,-0x18(%ebp)
  40b1e6:	75 45                	jne    0x40b22d
  40b1e8:	8b 75 dc             	mov    -0x24(%ebp),%esi
  40b1eb:	c7 45 d4 01 00 00 00 	movl   $0x1,-0x2c(%ebp)
  40b1f2:	83 fe ff             	cmp    $0xffffffff,%esi
  40b1f5:	75 0c                	jne    0x40b203
  40b1f7:	ff 75 d8             	pushl  -0x28(%ebp)
  40b1fa:	e8 e1 aa ff ff       	call   0x405ce0
  40b1ff:	8b f0                	mov    %eax,%esi
  40b201:	59                   	pop    %ecx
  40b202:	46                   	inc    %esi
  40b203:	3b f7                	cmp    %edi,%esi
  40b205:	7e 5b                	jle    0x40b262
  40b207:	81 fe f0 ff ff 7f    	cmp    $0x7ffffff0,%esi
  40b20d:	77 53                	ja     0x40b262
  40b20f:	8d 44 36 08          	lea    0x8(%esi,%esi,1),%eax
  40b213:	3d 00 04 00 00       	cmp    $0x400,%eax
  40b218:	77 2f                	ja     0x40b249
  40b21a:	e8 11 01 00 00       	call   0x40b330
  40b21f:	8b c4                	mov    %esp,%eax
  40b221:	3b c7                	cmp    %edi,%eax
  40b223:	74 38                	je     0x40b25d
  40b225:	c7 00 cc cc 00 00    	movl   $0xcccc,(%eax)
  40b22b:	eb 2d                	jmp    0x40b25a
  40b22d:	57                   	push   %edi
  40b22e:	57                   	push   %edi
  40b22f:	ff 75 dc             	pushl  -0x24(%ebp)
  40b232:	ff 75 d8             	pushl  -0x28(%ebp)
  40b235:	6a 01                	push   $0x1
  40b237:	ff 75 08             	pushl  0x8(%ebp)
  40b23a:	ff d3                	call   *%ebx
  40b23c:	8b f0                	mov    %eax,%esi
  40b23e:	3b f7                	cmp    %edi,%esi
  40b240:	75 c3                	jne    0x40b205
  40b242:	33 c0                	xor    %eax,%eax
  40b244:	e9 d1 00 00 00       	jmp    0x40b31a
  40b249:	50                   	push   %eax
  40b24a:	e8 56 cc ff ff       	call   0x407ea5
  40b24f:	59                   	pop    %ecx
  40b250:	3b c7                	cmp    %edi,%eax
  40b252:	74 09                	je     0x40b25d
  40b254:	c7 00 dd dd 00 00    	movl   $0xdddd,(%eax)
  40b25a:	83 c0 08             	add    $0x8,%eax
  40b25d:	89 45 e4             	mov    %eax,-0x1c(%ebp)
  40b260:	eb 03                	jmp    0x40b265
  40b262:	89 7d e4             	mov    %edi,-0x1c(%ebp)
  40b265:	39 7d e4             	cmp    %edi,-0x1c(%ebp)
  40b268:	74 d8                	je     0x40b242
  40b26a:	8d 04 36             	lea    (%esi,%esi,1),%eax
  40b26d:	50                   	push   %eax
  40b26e:	57                   	push   %edi
  40b26f:	ff 75 e4             	pushl  -0x1c(%ebp)
  40b272:	e8 79 ad ff ff       	call   0x405ff0
  40b277:	83 c4 0c             	add    $0xc,%esp
  40b27a:	56                   	push   %esi
  40b27b:	ff 75 e4             	pushl  -0x1c(%ebp)
  40b27e:	ff 75 dc             	pushl  -0x24(%ebp)
  40b281:	ff 75 d8             	pushl  -0x28(%ebp)
  40b284:	6a 01                	push   $0x1
  40b286:	ff 75 08             	pushl  0x8(%ebp)
  40b289:	ff d3                	call   *%ebx
  40b28b:	85 c0                	test   %eax,%eax
  40b28d:	74 7f                	je     0x40b30e
  40b28f:	8b 5d cc             	mov    -0x34(%ebp),%ebx
  40b292:	3b df                	cmp    %edi,%ebx
  40b294:	74 1d                	je     0x40b2b3
  40b296:	57                   	push   %edi
  40b297:	57                   	push   %edi
  40b298:	ff 75 1c             	pushl  0x1c(%ebp)
  40b29b:	53                   	push   %ebx
  40b29c:	56                   	push   %esi
  40b29d:	ff 75 e4             	pushl  -0x1c(%ebp)
  40b2a0:	57                   	push   %edi
  40b2a1:	ff 75 0c             	pushl  0xc(%ebp)
  40b2a4:	ff 15 48 c0 40 00    	call   *0x40c048
  40b2aa:	85 c0                	test   %eax,%eax
  40b2ac:	74 60                	je     0x40b30e
  40b2ae:	89 5d e0             	mov    %ebx,-0x20(%ebp)
  40b2b1:	eb 5b                	jmp    0x40b30e
  40b2b3:	8b 1d 48 c0 40 00    	mov    0x40c048,%ebx
  40b2b9:	39 7d d4             	cmp    %edi,-0x2c(%ebp)
  40b2bc:	75 14                	jne    0x40b2d2
  40b2be:	57                   	push   %edi
  40b2bf:	57                   	push   %edi
  40b2c0:	57                   	push   %edi
  40b2c1:	57                   	push   %edi
  40b2c2:	56                   	push   %esi
  40b2c3:	ff 75 e4             	pushl  -0x1c(%ebp)
  40b2c6:	57                   	push   %edi
  40b2c7:	ff 75 0c             	pushl  0xc(%ebp)
  40b2ca:	ff d3                	call   *%ebx
  40b2cc:	8b f0                	mov    %eax,%esi
  40b2ce:	3b f7                	cmp    %edi,%esi
  40b2d0:	74 3c                	je     0x40b30e
  40b2d2:	56                   	push   %esi
  40b2d3:	6a 01                	push   $0x1
  40b2d5:	e8 88 98 ff ff       	call   0x404b62
  40b2da:	59                   	pop    %ecx
  40b2db:	59                   	pop    %ecx
  40b2dc:	89 45 e0             	mov    %eax,-0x20(%ebp)
  40b2df:	3b c7                	cmp    %edi,%eax
  40b2e1:	74 2b                	je     0x40b30e
  40b2e3:	57                   	push   %edi
  40b2e4:	57                   	push   %edi
  40b2e5:	56                   	push   %esi
  40b2e6:	50                   	push   %eax
  40b2e7:	56                   	push   %esi
  40b2e8:	ff 75 e4             	pushl  -0x1c(%ebp)
  40b2eb:	57                   	push   %edi
  40b2ec:	ff 75 0c             	pushl  0xc(%ebp)
  40b2ef:	ff d3                	call   *%ebx
  40b2f1:	3b c7                	cmp    %edi,%eax
  40b2f3:	75 0e                	jne    0x40b303
  40b2f5:	ff 75 e0             	pushl  -0x20(%ebp)
  40b2f8:	e8 51 99 ff ff       	call   0x404c4e
  40b2fd:	59                   	pop    %ecx
  40b2fe:	89 7d e0             	mov    %edi,-0x20(%ebp)
  40b301:	eb 0b                	jmp    0x40b30e
  40b303:	83 7d dc ff          	cmpl   $0xffffffff,-0x24(%ebp)
  40b307:	74 05                	je     0x40b30e
  40b309:	8b 4d d0             	mov    -0x30(%ebp),%ecx
  40b30c:	89 01                	mov    %eax,(%ecx)
  40b30e:	ff 75 e4             	pushl  -0x1c(%ebp)
  40b311:	e8 f0 d9 ff ff       	call   0x408d06
  40b316:	59                   	pop    %ecx
  40b317:	8b 45 e0             	mov    -0x20(%ebp),%eax
  40b31a:	8d 65 c0             	lea    -0x40(%ebp),%esp
  40b31d:	5f                   	pop    %edi
  40b31e:	5e                   	pop    %esi
  40b31f:	5b                   	pop    %ebx
  40b320:	8b 4d fc             	mov    -0x4(%ebp),%ecx
  40b323:	33 cd                	xor    %ebp,%ecx
  40b325:	e8 15 ac ff ff       	call   0x405f3f
  40b32a:	c9                   	leave  
  40b32b:	c3                   	ret    
  40b32c:	cc                   	int3   
  40b32d:	cc                   	int3   
  40b32e:	cc                   	int3   
  40b32f:	cc                   	int3   
  40b330:	51                   	push   %ecx
  40b331:	8d 4c 24 08          	lea    0x8(%esp),%ecx
  40b335:	2b c8                	sub    %eax,%ecx
  40b337:	83 e1 0f             	and    $0xf,%ecx
  40b33a:	03 c1                	add    %ecx,%eax
  40b33c:	1b c9                	sbb    %ecx,%ecx
  40b33e:	0b c1                	or     %ecx,%eax
  40b340:	59                   	pop    %ecx
  40b341:	e9 fa fb ff ff       	jmp    0x40af40
  40b346:	51                   	push   %ecx
  40b347:	8d 4c 24 08          	lea    0x8(%esp),%ecx
  40b34b:	2b c8                	sub    %eax,%ecx
  40b34d:	83 e1 07             	and    $0x7,%ecx
  40b350:	03 c1                	add    %ecx,%eax
  40b352:	1b c9                	sbb    %ecx,%ecx
  40b354:	0b c1                	or     %ecx,%eax
  40b356:	59                   	pop    %ecx
  40b357:	e9 e4 fb ff ff       	jmp    0x40af40
  40b35c:	8b ff                	mov    %edi,%edi
  40b35e:	55                   	push   %ebp
  40b35f:	8b ec                	mov    %esp,%ebp
  40b361:	6a 0a                	push   $0xa
  40b363:	6a 00                	push   $0x0
  40b365:	ff 75 08             	pushl  0x8(%ebp)
  40b368:	e8 35 eb ff ff       	call   0x409ea2
  40b36d:	83 c4 0c             	add    $0xc,%esp
  40b370:	5d                   	pop    %ebp
  40b371:	c3                   	ret    
  40b372:	33 c0                	xor    %eax,%eax
  40b374:	50                   	push   %eax
  40b375:	50                   	push   %eax
  40b376:	6a 03                	push   $0x3
  40b378:	50                   	push   %eax
  40b379:	6a 03                	push   $0x3
  40b37b:	68 00 00 00 40       	push   $0x40000000
  40b380:	68 6c d3 40 00       	push   $0x40d36c
  40b385:	ff 15 0c c1 40 00    	call   *0x40c10c
  40b38b:	a3 84 ef 40 00       	mov    %eax,0x40ef84
  40b390:	c3                   	ret    
  40b391:	a1 84 ef 40 00       	mov    0x40ef84,%eax
  40b396:	56                   	push   %esi
  40b397:	8b 35 f8 c0 40 00    	mov    0x40c0f8,%esi
  40b39d:	83 f8 ff             	cmp    $0xffffffff,%eax
  40b3a0:	74 08                	je     0x40b3aa
  40b3a2:	83 f8 fe             	cmp    $0xfffffffe,%eax
  40b3a5:	74 03                	je     0x40b3aa
  40b3a7:	50                   	push   %eax
  40b3a8:	ff d6                	call   *%esi
  40b3aa:	a1 80 ef 40 00       	mov    0x40ef80,%eax
  40b3af:	83 f8 ff             	cmp    $0xffffffff,%eax
  40b3b2:	74 08                	je     0x40b3bc
  40b3b4:	83 f8 fe             	cmp    $0xfffffffe,%eax
  40b3b7:	74 03                	je     0x40b3bc
  40b3b9:	50                   	push   %eax
  40b3ba:	ff d6                	call   *%esi
  40b3bc:	5e                   	pop    %esi
  40b3bd:	c3                   	ret    
  40b3be:	cc                   	int3   
  40b3bf:	cc                   	int3   
  40b3c0:	55                   	push   %ebp
  40b3c1:	8b ec                	mov    %esp,%ebp
  40b3c3:	57                   	push   %edi
  40b3c4:	56                   	push   %esi
  40b3c5:	53                   	push   %ebx
  40b3c6:	8b 4d 10             	mov    0x10(%ebp),%ecx
  40b3c9:	0b c9                	or     %ecx,%ecx
  40b3cb:	74 4d                	je     0x40b41a
  40b3cd:	8b 75 08             	mov    0x8(%ebp),%esi
  40b3d0:	8b 7d 0c             	mov    0xc(%ebp),%edi
  40b3d3:	b7 41                	mov    $0x41,%bh
  40b3d5:	b3 5a                	mov    $0x5a,%bl
  40b3d7:	b6 20                	mov    $0x20,%dh
  40b3d9:	8d 49 00             	lea    0x0(%ecx),%ecx
  40b3dc:	8a 26                	mov    (%esi),%ah
  40b3de:	0a e4                	or     %ah,%ah
  40b3e0:	8a 07                	mov    (%edi),%al
  40b3e2:	74 27                	je     0x40b40b
  40b3e4:	0a c0                	or     %al,%al
  40b3e6:	74 23                	je     0x40b40b
  40b3e8:	83 c6 01             	add    $0x1,%esi
  40b3eb:	83 c7 01             	add    $0x1,%edi
  40b3ee:	3a e7                	cmp    %bh,%ah
  40b3f0:	72 06                	jb     0x40b3f8
  40b3f2:	3a e3                	cmp    %bl,%ah
  40b3f4:	77 02                	ja     0x40b3f8
  40b3f6:	02 e6                	add    %dh,%ah
  40b3f8:	3a c7                	cmp    %bh,%al
  40b3fa:	72 06                	jb     0x40b402
  40b3fc:	3a c3                	cmp    %bl,%al
  40b3fe:	77 02                	ja     0x40b402
  40b400:	02 c6                	add    %dh,%al
  40b402:	3a e0                	cmp    %al,%ah
  40b404:	75 0b                	jne    0x40b411
  40b406:	83 e9 01             	sub    $0x1,%ecx
  40b409:	75 d1                	jne    0x40b3dc
  40b40b:	33 c9                	xor    %ecx,%ecx
  40b40d:	3a e0                	cmp    %al,%ah
  40b40f:	74 09                	je     0x40b41a
  40b411:	b9 ff ff ff ff       	mov    $0xffffffff,%ecx
  40b416:	72 02                	jb     0x40b41a
  40b418:	f7 d9                	neg    %ecx
  40b41a:	8b c1                	mov    %ecx,%eax
  40b41c:	5b                   	pop    %ebx
  40b41d:	5e                   	pop    %esi
  40b41e:	5f                   	pop    %edi
  40b41f:	c9                   	leave  
  40b420:	c3                   	ret    
  40b421:	cc                   	int3   
  40b422:	cc                   	int3   
  40b423:	cc                   	int3   
  40b424:	cc                   	int3   
  40b425:	cc                   	int3   
  40b426:	cc                   	int3   
  40b427:	cc                   	int3   
  40b428:	cc                   	int3   
  40b429:	cc                   	int3   
  40b42a:	cc                   	int3   
  40b42b:	cc                   	int3   
  40b42c:	cc                   	int3   
  40b42d:	cc                   	int3   
  40b42e:	cc                   	int3   
  40b42f:	cc                   	int3   
  40b430:	8d 42 ff             	lea    -0x1(%edx),%eax
  40b433:	5b                   	pop    %ebx
  40b434:	c3                   	ret    
  40b435:	8d a4 24 00 00 00 00 	lea    0x0(%esp),%esp
  40b43c:	8d 64 24 00          	lea    0x0(%esp),%esp
  40b440:	33 c0                	xor    %eax,%eax
  40b442:	8a 44 24 08          	mov    0x8(%esp),%al
  40b446:	53                   	push   %ebx
  40b447:	8b d8                	mov    %eax,%ebx
  40b449:	c1 e0 08             	shl    $0x8,%eax
  40b44c:	8b 54 24 08          	mov    0x8(%esp),%edx
  40b450:	f7 c2 03 00 00 00    	test   $0x3,%edx
  40b456:	74 15                	je     0x40b46d
  40b458:	8a 0a                	mov    (%edx),%cl
  40b45a:	83 c2 01             	add    $0x1,%edx
  40b45d:	3a cb                	cmp    %bl,%cl
  40b45f:	74 cf                	je     0x40b430
  40b461:	84 c9                	test   %cl,%cl
  40b463:	74 51                	je     0x40b4b6
  40b465:	f7 c2 03 00 00 00    	test   $0x3,%edx
  40b46b:	75 eb                	jne    0x40b458
  40b46d:	0b d8                	or     %eax,%ebx
  40b46f:	57                   	push   %edi
  40b470:	8b c3                	mov    %ebx,%eax
  40b472:	c1 e3 10             	shl    $0x10,%ebx
  40b475:	56                   	push   %esi
  40b476:	0b d8                	or     %eax,%ebx
  40b478:	8b 0a                	mov    (%edx),%ecx
  40b47a:	bf ff fe fe 7e       	mov    $0x7efefeff,%edi
  40b47f:	8b c1                	mov    %ecx,%eax
  40b481:	8b f7                	mov    %edi,%esi
  40b483:	33 cb                	xor    %ebx,%ecx
  40b485:	03 f0                	add    %eax,%esi
  40b487:	03 f9                	add    %ecx,%edi
  40b489:	83 f1 ff             	xor    $0xffffffff,%ecx
  40b48c:	83 f0 ff             	xor    $0xffffffff,%eax
  40b48f:	33 cf                	xor    %edi,%ecx
  40b491:	33 c6                	xor    %esi,%eax
  40b493:	83 c2 04             	add    $0x4,%edx
  40b496:	81 e1 00 01 01 81    	and    $0x81010100,%ecx
  40b49c:	75 1c                	jne    0x40b4ba
  40b49e:	25 00 01 01 81       	and    $0x81010100,%eax
  40b4a3:	74 d3                	je     0x40b478
  40b4a5:	25 00 01 01 01       	and    $0x1010100,%eax
  40b4aa:	75 08                	jne    0x40b4b4
  40b4ac:	81 e6 00 00 00 80    	and    $0x80000000,%esi
  40b4b2:	75 c4                	jne    0x40b478
  40b4b4:	5e                   	pop    %esi
  40b4b5:	5f                   	pop    %edi
  40b4b6:	5b                   	pop    %ebx
  40b4b7:	33 c0                	xor    %eax,%eax
  40b4b9:	c3                   	ret    
  40b4ba:	8b 42 fc             	mov    -0x4(%edx),%eax
  40b4bd:	3a c3                	cmp    %bl,%al
  40b4bf:	74 36                	je     0x40b4f7
  40b4c1:	84 c0                	test   %al,%al
  40b4c3:	74 ef                	je     0x40b4b4
  40b4c5:	3a e3                	cmp    %bl,%ah
  40b4c7:	74 27                	je     0x40b4f0
  40b4c9:	84 e4                	test   %ah,%ah
  40b4cb:	74 e7                	je     0x40b4b4
  40b4cd:	c1 e8 10             	shr    $0x10,%eax
  40b4d0:	3a c3                	cmp    %bl,%al
  40b4d2:	74 15                	je     0x40b4e9
  40b4d4:	84 c0                	test   %al,%al
  40b4d6:	74 dc                	je     0x40b4b4
  40b4d8:	3a e3                	cmp    %bl,%ah
  40b4da:	74 06                	je     0x40b4e2
  40b4dc:	84 e4                	test   %ah,%ah
  40b4de:	74 d4                	je     0x40b4b4
  40b4e0:	eb 96                	jmp    0x40b478
  40b4e2:	5e                   	pop    %esi
  40b4e3:	5f                   	pop    %edi
  40b4e4:	8d 42 ff             	lea    -0x1(%edx),%eax
  40b4e7:	5b                   	pop    %ebx
  40b4e8:	c3                   	ret    
  40b4e9:	8d 42 fe             	lea    -0x2(%edx),%eax
  40b4ec:	5e                   	pop    %esi
  40b4ed:	5f                   	pop    %edi
  40b4ee:	5b                   	pop    %ebx
  40b4ef:	c3                   	ret    
  40b4f0:	8d 42 fd             	lea    -0x3(%edx),%eax
  40b4f3:	5e                   	pop    %esi
  40b4f4:	5f                   	pop    %edi
  40b4f5:	5b                   	pop    %ebx
  40b4f6:	c3                   	ret    
  40b4f7:	8d 42 fc             	lea    -0x4(%edx),%eax
  40b4fa:	5e                   	pop    %esi
  40b4fb:	5f                   	pop    %edi
  40b4fc:	5b                   	pop    %ebx
  40b4fd:	c3                   	ret    
  40b4fe:	ff 25 b0 c0 40 00    	jmp    *0x40c0b0
