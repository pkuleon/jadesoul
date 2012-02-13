# Microsoft Developer Studio Generated NMAKE File, Based on othello.dsp
!IF "$(CFG)" == ""
CFG=othello - Win32 Debug
!MESSAGE No configuration specified. Defaulting to othello - Win32 Debug.
!ENDIF 

!IF "$(CFG)" != "othello - Win32 Release" && "$(CFG)" !=\
 "othello - Win32 Debug" && "$(CFG)" != "othello - Win32 External"
!MESSAGE Invalid configuration "$(CFG)" specified.
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "othello.mak" CFG="othello - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "othello - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "othello - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE "othello - Win32 External" (based on\
 "Win32 (x86) Console Application")
!MESSAGE 
!ERROR An invalid configuration is specified.
!ENDIF 

!IF "$(OS)" == "Windows_NT"
NULL=
!ELSE 
NULL=nul
!ENDIF 

!IF  "$(CFG)" == "othello - Win32 Release"

OUTDIR=.\Release
INTDIR=.\Release
# Begin Custom Macros
OutDir=.\Release
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\othello.exe"

!ELSE 

ALL : "$(OUTDIR)\othello.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\AmsObjects.obj"
	-@erase "$(INTDIR)\bbm.obj"
	-@erase "$(INTDIR)\BitBoard.obj"
	-@erase "$(INTDIR)\BitBoardBlock.obj"
	-@erase "$(INTDIR)\Book.obj"
	-@erase "$(INTDIR)\Cache.obj"
	-@erase "$(INTDIR)\CksObjects.obj"
	-@erase "$(INTDIR)\Evaluator.obj"
	-@erase "$(INTDIR)\FastFlip.obj"
	-@erase "$(INTDIR)\FastFlipPatterns.obj"
	-@erase "$(INTDIR)\FastFlipTables.obj"
	-@erase "$(INTDIR)\flipfuncBB.obj"
	-@erase "$(INTDIR)\Games.obj"
	-@erase "$(INTDIR)\GGSMessage.obj"
	-@erase "$(INTDIR)\GGSObjects.obj"
	-@erase "$(INTDIR)\ggsstream.obj"
	-@erase "$(INTDIR)\main.obj"
	-@erase "$(INTDIR)\Moves.obj"
	-@erase "$(INTDIR)\MPCStats.obj"
	-@erase "$(INTDIR)\NodeStats.obj"
	-@erase "$(INTDIR)\ODKStream.obj"
	-@erase "$(INTDIR)\off.obj"
	-@erase "$(INTDIR)\off_dualuse.obj"
	-@erase "$(INTDIR)\options.obj"
	-@erase "$(INTDIR)\OsObjects.obj"
	-@erase "$(INTDIR)\Patterns.obj"
	-@erase "$(INTDIR)\Player.obj"
	-@erase "$(INTDIR)\Pos2.obj"
	-@erase "$(INTDIR)\Pos2Helpers.obj"
	-@erase "$(INTDIR)\QPosition.obj"
	-@erase "$(INTDIR)\SGBase.obj"
	-@erase "$(INTDIR)\SGMessages.obj"
	-@erase "$(INTDIR)\SGObjects.obj"
	-@erase "$(INTDIR)\sockbuf.obj"
	-@erase "$(INTDIR)\stabn.obj"
	-@erase "$(INTDIR)\SV.OBJ"
	-@erase "$(INTDIR)\Test.obj"
	-@erase "$(INTDIR)\Ticks.obj"
	-@erase "$(INTDIR)\Timing.obj"
	-@erase "$(INTDIR)\treedebug.obj"
	-@erase "$(INTDIR)\Utils.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\othello.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /G6 /Gr /ML /W3 /GR /GX /O2 /I "c:\devl\GDK" /D "WIN32" /D\
 "NDEBUG" /D "_CONSOLE" /D "_MBCS" /Fp"$(INTDIR)\othello.pch" /YX\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /Zm200 /c 
CPP_OBJS=.\Release/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

RSC=rc.exe
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\othello.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib\
 advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib\
 odbccp32.lib WS2_32.lib /nologo /subsystem:console /incremental:no\
 /pdb:"$(OUTDIR)\othello.pdb" /machine:I386 /out:"$(OUTDIR)\othello.exe" 
LINK32_OBJS= \
	"$(INTDIR)\AmsObjects.obj" \
	"$(INTDIR)\bbm.obj" \
	"$(INTDIR)\BitBoard.obj" \
	"$(INTDIR)\BitBoardBlock.obj" \
	"$(INTDIR)\Book.obj" \
	"$(INTDIR)\Cache.obj" \
	"$(INTDIR)\CksObjects.obj" \
	"$(INTDIR)\Evaluator.obj" \
	"$(INTDIR)\FastFlip.obj" \
	"$(INTDIR)\FastFlipPatterns.obj" \
	"$(INTDIR)\FastFlipTables.obj" \
	"$(INTDIR)\flipfuncBB.obj" \
	"$(INTDIR)\Games.obj" \
	"$(INTDIR)\GGSMessage.obj" \
	"$(INTDIR)\GGSObjects.obj" \
	"$(INTDIR)\ggsstream.obj" \
	"$(INTDIR)\main.obj" \
	"$(INTDIR)\Moves.obj" \
	"$(INTDIR)\MPCStats.obj" \
	"$(INTDIR)\NodeStats.obj" \
	"$(INTDIR)\ODKStream.obj" \
	"$(INTDIR)\off.obj" \
	"$(INTDIR)\off_dualuse.obj" \
	"$(INTDIR)\options.obj" \
	"$(INTDIR)\OsObjects.obj" \
	"$(INTDIR)\Patterns.obj" \
	"$(INTDIR)\Player.obj" \
	"$(INTDIR)\Pos2.obj" \
	"$(INTDIR)\Pos2Helpers.obj" \
	"$(INTDIR)\QPosition.obj" \
	"$(INTDIR)\SGBase.obj" \
	"$(INTDIR)\SGMessages.obj" \
	"$(INTDIR)\SGObjects.obj" \
	"$(INTDIR)\sockbuf.obj" \
	"$(INTDIR)\stabn.obj" \
	"$(INTDIR)\SV.OBJ" \
	"$(INTDIR)\Test.obj" \
	"$(INTDIR)\Ticks.obj" \
	"$(INTDIR)\Timing.obj" \
	"$(INTDIR)\treedebug.obj" \
	"$(INTDIR)\Utils.obj"

"$(OUTDIR)\othello.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

OUTDIR=.\Debug
INTDIR=.\Debug
# Begin Custom Macros
OutDir=.\Debug
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\othello.exe"

!ELSE 

ALL : "$(OUTDIR)\othello.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\AmsObjects.obj"
	-@erase "$(INTDIR)\bbm.obj"
	-@erase "$(INTDIR)\BitBoard.obj"
	-@erase "$(INTDIR)\BitBoardBlock.obj"
	-@erase "$(INTDIR)\Book.obj"
	-@erase "$(INTDIR)\Cache.obj"
	-@erase "$(INTDIR)\CksObjects.obj"
	-@erase "$(INTDIR)\Evaluator.obj"
	-@erase "$(INTDIR)\FastFlip.obj"
	-@erase "$(INTDIR)\FastFlipPatterns.obj"
	-@erase "$(INTDIR)\FastFlipTables.obj"
	-@erase "$(INTDIR)\flipfuncBB.obj"
	-@erase "$(INTDIR)\Games.obj"
	-@erase "$(INTDIR)\GGSMessage.obj"
	-@erase "$(INTDIR)\GGSObjects.obj"
	-@erase "$(INTDIR)\ggsstream.obj"
	-@erase "$(INTDIR)\main.obj"
	-@erase "$(INTDIR)\Moves.obj"
	-@erase "$(INTDIR)\MPCStats.obj"
	-@erase "$(INTDIR)\NodeStats.obj"
	-@erase "$(INTDIR)\ODKStream.obj"
	-@erase "$(INTDIR)\off.obj"
	-@erase "$(INTDIR)\off_dualuse.obj"
	-@erase "$(INTDIR)\options.obj"
	-@erase "$(INTDIR)\OsObjects.obj"
	-@erase "$(INTDIR)\Patterns.obj"
	-@erase "$(INTDIR)\Player.obj"
	-@erase "$(INTDIR)\Pos2.obj"
	-@erase "$(INTDIR)\Pos2Helpers.obj"
	-@erase "$(INTDIR)\QPosition.obj"
	-@erase "$(INTDIR)\SGBase.obj"
	-@erase "$(INTDIR)\SGMessages.obj"
	-@erase "$(INTDIR)\SGObjects.obj"
	-@erase "$(INTDIR)\sockbuf.obj"
	-@erase "$(INTDIR)\stabn.obj"
	-@erase "$(INTDIR)\SV.OBJ"
	-@erase "$(INTDIR)\Test.obj"
	-@erase "$(INTDIR)\Ticks.obj"
	-@erase "$(INTDIR)\Timing.obj"
	-@erase "$(INTDIR)\treedebug.obj"
	-@erase "$(INTDIR)\Utils.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(INTDIR)\vc50.pdb"
	-@erase "$(OUTDIR)\othello.exe"
	-@erase "$(OUTDIR)\othello.ilk"
	-@erase "$(OUTDIR)\othello.pdb"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /MLd /W3 /GR /GX /Zi /Od /I "c:\devl\GDK" /D "WIN32" /D\
 "_DEBUG" /D "_CONSOLE" /D "_MBCS" /Fp"$(INTDIR)\othello.pch" /YX\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /Zm200 /c 
CPP_OBJS=.\Debug/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

RSC=rc.exe
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\othello.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib\
 advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib\
 odbccp32.lib WS2_32.lib /nologo /subsystem:console /incremental:yes\
 /pdb:"$(OUTDIR)\othello.pdb" /debug /machine:I386 /out:"$(OUTDIR)\othello.exe"\
 /pdbtype:sept 
LINK32_OBJS= \
	"$(INTDIR)\AmsObjects.obj" \
	"$(INTDIR)\bbm.obj" \
	"$(INTDIR)\BitBoard.obj" \
	"$(INTDIR)\BitBoardBlock.obj" \
	"$(INTDIR)\Book.obj" \
	"$(INTDIR)\Cache.obj" \
	"$(INTDIR)\CksObjects.obj" \
	"$(INTDIR)\Evaluator.obj" \
	"$(INTDIR)\FastFlip.obj" \
	"$(INTDIR)\FastFlipPatterns.obj" \
	"$(INTDIR)\FastFlipTables.obj" \
	"$(INTDIR)\flipfuncBB.obj" \
	"$(INTDIR)\Games.obj" \
	"$(INTDIR)\GGSMessage.obj" \
	"$(INTDIR)\GGSObjects.obj" \
	"$(INTDIR)\ggsstream.obj" \
	"$(INTDIR)\main.obj" \
	"$(INTDIR)\Moves.obj" \
	"$(INTDIR)\MPCStats.obj" \
	"$(INTDIR)\NodeStats.obj" \
	"$(INTDIR)\ODKStream.obj" \
	"$(INTDIR)\off.obj" \
	"$(INTDIR)\off_dualuse.obj" \
	"$(INTDIR)\options.obj" \
	"$(INTDIR)\OsObjects.obj" \
	"$(INTDIR)\Patterns.obj" \
	"$(INTDIR)\Player.obj" \
	"$(INTDIR)\Pos2.obj" \
	"$(INTDIR)\Pos2Helpers.obj" \
	"$(INTDIR)\QPosition.obj" \
	"$(INTDIR)\SGBase.obj" \
	"$(INTDIR)\SGMessages.obj" \
	"$(INTDIR)\SGObjects.obj" \
	"$(INTDIR)\sockbuf.obj" \
	"$(INTDIR)\stabn.obj" \
	"$(INTDIR)\SV.OBJ" \
	"$(INTDIR)\Test.obj" \
	"$(INTDIR)\Ticks.obj" \
	"$(INTDIR)\Timing.obj" \
	"$(INTDIR)\treedebug.obj" \
	"$(INTDIR)\Utils.obj"

"$(OUTDIR)\othello.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ELSEIF  "$(CFG)" == "othello - Win32 External"

OUTDIR=.\External
INTDIR=.\External
# Begin Custom Macros
OutDir=.\External
# End Custom Macros

!IF "$(RECURSE)" == "0" 

ALL : "$(OUTDIR)\othello.exe"

!ELSE 

ALL : "$(OUTDIR)\othello.exe"

!ENDIF 

CLEAN :
	-@erase "$(INTDIR)\AmsObjects.obj"
	-@erase "$(INTDIR)\bbm.obj"
	-@erase "$(INTDIR)\BitBoard.obj"
	-@erase "$(INTDIR)\BitBoardBlock.obj"
	-@erase "$(INTDIR)\Book.obj"
	-@erase "$(INTDIR)\Cache.obj"
	-@erase "$(INTDIR)\CksObjects.obj"
	-@erase "$(INTDIR)\Evaluator.obj"
	-@erase "$(INTDIR)\FastFlip.obj"
	-@erase "$(INTDIR)\FastFlipPatterns.obj"
	-@erase "$(INTDIR)\FastFlipTables.obj"
	-@erase "$(INTDIR)\flipfuncBB.obj"
	-@erase "$(INTDIR)\Games.obj"
	-@erase "$(INTDIR)\GGSMessage.obj"
	-@erase "$(INTDIR)\GGSObjects.obj"
	-@erase "$(INTDIR)\ggsstream.obj"
	-@erase "$(INTDIR)\main.obj"
	-@erase "$(INTDIR)\Moves.obj"
	-@erase "$(INTDIR)\MPCStats.obj"
	-@erase "$(INTDIR)\NodeStats.obj"
	-@erase "$(INTDIR)\ODKStream.obj"
	-@erase "$(INTDIR)\off.obj"
	-@erase "$(INTDIR)\off_dualuse.obj"
	-@erase "$(INTDIR)\options.obj"
	-@erase "$(INTDIR)\OsObjects.obj"
	-@erase "$(INTDIR)\Patterns.obj"
	-@erase "$(INTDIR)\Player.obj"
	-@erase "$(INTDIR)\Pos2.obj"
	-@erase "$(INTDIR)\Pos2Helpers.obj"
	-@erase "$(INTDIR)\QPosition.obj"
	-@erase "$(INTDIR)\SGBase.obj"
	-@erase "$(INTDIR)\SGMessages.obj"
	-@erase "$(INTDIR)\SGObjects.obj"
	-@erase "$(INTDIR)\sockbuf.obj"
	-@erase "$(INTDIR)\stabn.obj"
	-@erase "$(INTDIR)\SV.OBJ"
	-@erase "$(INTDIR)\Test.obj"
	-@erase "$(INTDIR)\Ticks.obj"
	-@erase "$(INTDIR)\Timing.obj"
	-@erase "$(INTDIR)\treedebug.obj"
	-@erase "$(INTDIR)\Utils.obj"
	-@erase "$(INTDIR)\vc50.idb"
	-@erase "$(OUTDIR)\othello.exe"

"$(OUTDIR)" :
    if not exist "$(OUTDIR)/$(NULL)" mkdir "$(OUTDIR)"

CPP=cl.exe
CPP_PROJ=/nologo /G6 /Gr /ML /W3 /GR /GX /O2 /I "c:\devl\GDK" /D "WIN32" /D\
 "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D "EXTERNAL" /Fp"$(INTDIR)\othello.pch" /YX\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /Zm200 /c 
CPP_OBJS=.\External/
CPP_SBRS=.

.c{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_OBJS)}.obj::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.c{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cpp{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

.cxx{$(CPP_SBRS)}.sbr::
   $(CPP) @<<
   $(CPP_PROJ) $< 
<<

RSC=rc.exe
BSC32=bscmake.exe
BSC32_FLAGS=/nologo /o"$(OUTDIR)\othello.bsc" 
BSC32_SBRS= \
	
LINK32=link.exe
LINK32_FLAGS=kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib\
 advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib\
 odbccp32.lib WS2_32.lib /nologo /subsystem:console /incremental:no\
 /pdb:"$(OUTDIR)\othello.pdb" /machine:I386 /out:"$(OUTDIR)\othello.exe" 
LINK32_OBJS= \
	"$(INTDIR)\AmsObjects.obj" \
	"$(INTDIR)\bbm.obj" \
	"$(INTDIR)\BitBoard.obj" \
	"$(INTDIR)\BitBoardBlock.obj" \
	"$(INTDIR)\Book.obj" \
	"$(INTDIR)\Cache.obj" \
	"$(INTDIR)\CksObjects.obj" \
	"$(INTDIR)\Evaluator.obj" \
	"$(INTDIR)\FastFlip.obj" \
	"$(INTDIR)\FastFlipPatterns.obj" \
	"$(INTDIR)\FastFlipTables.obj" \
	"$(INTDIR)\flipfuncBB.obj" \
	"$(INTDIR)\Games.obj" \
	"$(INTDIR)\GGSMessage.obj" \
	"$(INTDIR)\GGSObjects.obj" \
	"$(INTDIR)\ggsstream.obj" \
	"$(INTDIR)\main.obj" \
	"$(INTDIR)\Moves.obj" \
	"$(INTDIR)\MPCStats.obj" \
	"$(INTDIR)\NodeStats.obj" \
	"$(INTDIR)\ODKStream.obj" \
	"$(INTDIR)\off.obj" \
	"$(INTDIR)\off_dualuse.obj" \
	"$(INTDIR)\options.obj" \
	"$(INTDIR)\OsObjects.obj" \
	"$(INTDIR)\Patterns.obj" \
	"$(INTDIR)\Player.obj" \
	"$(INTDIR)\Pos2.obj" \
	"$(INTDIR)\Pos2Helpers.obj" \
	"$(INTDIR)\QPosition.obj" \
	"$(INTDIR)\SGBase.obj" \
	"$(INTDIR)\SGMessages.obj" \
	"$(INTDIR)\SGObjects.obj" \
	"$(INTDIR)\sockbuf.obj" \
	"$(INTDIR)\stabn.obj" \
	"$(INTDIR)\SV.OBJ" \
	"$(INTDIR)\Test.obj" \
	"$(INTDIR)\Ticks.obj" \
	"$(INTDIR)\Timing.obj" \
	"$(INTDIR)\treedebug.obj" \
	"$(INTDIR)\Utils.obj"

"$(OUTDIR)\othello.exe" : "$(OUTDIR)" $(DEF_FILE) $(LINK32_OBJS)
    $(LINK32) @<<
  $(LINK32_FLAGS) $(LINK32_OBJS)
<<

!ENDIF 


!IF "$(CFG)" == "othello - Win32 Release" || "$(CFG)" ==\
 "othello - Win32 Debug" || "$(CFG)" == "othello - Win32 External"
SOURCE=..\GDK\AmsObjects.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_AMSOB=\
	"..\gdk\amsobjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\AmsObjects.obj" : $(SOURCE) $(DEP_CPP_AMSOB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_AMSOB=\
	"..\gdk\amsobjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\AmsObjects.obj" : $(SOURCE) $(DEP_CPP_AMSOB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_AMSOB=\
	"..\gdk\amsobjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\AmsObjects.obj" : $(SOURCE) $(DEP_CPP_AMSOB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=.\bbm.cpp
DEP_CPP_BBM_C=\
	".\bbm.h"\
	

"$(INTDIR)\bbm.obj" : $(SOURCE) $(DEP_CPP_BBM_C) "$(INTDIR)"


SOURCE=.\BitBoard.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_BITBO=\
	".\bbm.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\Patterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\BitBoard.obj" : $(SOURCE) $(DEP_CPP_BITBO) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_BITBO=\
	".\bbm.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\Patterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\BitBoard.obj" : $(SOURCE) $(DEP_CPP_BITBO) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_BITBO=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\Patterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\BitBoard.obj" : $(SOURCE) $(DEP_CPP_BITBO) "$(INTDIR)"


!ENDIF 

SOURCE=.\BitBoardBlock.cpp
DEP_CPP_BITBOA=\
	".\BitBoardBlock.h"\
	".\Utils.h"\
	

"$(INTDIR)\BitBoardBlock.obj" : $(SOURCE) $(DEP_CPP_BITBOA) "$(INTDIR)"


SOURCE=.\Book.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_BOOK_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Book.obj" : $(SOURCE) $(DEP_CPP_BOOK_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_BOOK_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Book.obj" : $(SOURCE) $(DEP_CPP_BOOK_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_BOOK_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	
NODEP_CPP_BOOK_=\
	".\negamax.h"\
	

"$(INTDIR)\Book.obj" : $(SOURCE) $(DEP_CPP_BOOK_) "$(INTDIR)"


!ENDIF 

SOURCE=.\Cache.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_CACHE=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\Cache.obj" : $(SOURCE) $(DEP_CPP_CACHE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_CACHE=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\Cache.obj" : $(SOURCE) $(DEP_CPP_CACHE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_CACHE=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Cache.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\Cache.obj" : $(SOURCE) $(DEP_CPP_CACHE) "$(INTDIR)"


!ENDIF 

SOURCE=..\GDK\CksObjects.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_CKSOB=\
	"..\gdk\cksobjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\CksObjects.obj" : $(SOURCE) $(DEP_CPP_CKSOB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_CKSOB=\
	"..\gdk\cksobjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\CksObjects.obj" : $(SOURCE) $(DEP_CPP_CKSOB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_CKSOB=\
	"..\gdk\cksobjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\CksObjects.obj" : $(SOURCE) $(DEP_CPP_CKSOB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=.\Evaluator.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_EVALU=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Evaluator.obj" : $(SOURCE) $(DEP_CPP_EVALU) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_EVALU=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Evaluator.obj" : $(SOURCE) $(DEP_CPP_EVALU) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_EVALU=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	
NODEP_CPP_EVALU=\
	".\maps.h"\
	

"$(INTDIR)\Evaluator.obj" : $(SOURCE) $(DEP_CPP_EVALU) "$(INTDIR)"


!ENDIF 

SOURCE=.\FastFlip.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_FASTF=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\flipfuncBB.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	
CPP_SWITCHES=/nologo /G6 /Gr /ML /W3 /GR /GX /O2 /I "c:\devl\GDK" /D "WIN32" /D\
 "NDEBUG" /D "_CONSOLE" /D "_MBCS" /FAs /Fa"$(INTDIR)\\"\
 /Fp"$(INTDIR)\othello.pch" /YX /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /Zm200 /c 

"$(INTDIR)\FastFlip.obj" : $(SOURCE) $(DEP_CPP_FASTF) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_FASTF=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\flipfuncBB.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	
CPP_SWITCHES=/nologo /MLd /W3 /GR /GX /Zi /Od /I "c:\devl\GDK" /D "WIN32" /D\
 "_DEBUG" /D "_CONSOLE" /D "_MBCS" /Fp"$(INTDIR)\othello.pch" /YX\
 /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /Zm200 /c 

"$(INTDIR)\FastFlip.obj" : $(SOURCE) $(DEP_CPP_FASTF) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_FASTF=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\flipfuncBB.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	
CPP_SWITCHES=/nologo /G6 /Gr /ML /W3 /GR /GX /O2 /I "c:\devl\GDK" /D "WIN32" /D\
 "NDEBUG" /D "_CONSOLE" /D "_MBCS" /D "EXTERNAL" /FAs /Fa"$(INTDIR)\\"\
 /Fp"$(INTDIR)\othello.pch" /YX /Fo"$(INTDIR)\\" /Fd"$(INTDIR)\\" /FD /Zm200 /c 

"$(INTDIR)\FastFlip.obj" : $(SOURCE) $(DEP_CPP_FASTF) "$(INTDIR)"
	$(CPP) @<<
  $(CPP_SWITCHES) $(SOURCE)
<<


!ENDIF 

SOURCE=.\FastFlipPatterns.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_FASTFL=\
	".\debug.h"\
	".\FastFlipPatterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\FastFlipPatterns.obj" : $(SOURCE) $(DEP_CPP_FASTFL) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_FASTFL=\
	".\debug.h"\
	".\FastFlipPatterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\FastFlipPatterns.obj" : $(SOURCE) $(DEP_CPP_FASTFL) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_FASTFL=\
	".\FastFlipPatterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\FastFlipPatterns.obj" : $(SOURCE) $(DEP_CPP_FASTFL) "$(INTDIR)"


!ENDIF 

SOURCE=.\FastFlipTables.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_FASTFLI=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\FastFlipTables.obj" : $(SOURCE) $(DEP_CPP_FASTFLI) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_FASTFLI=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\FastFlipTables.obj" : $(SOURCE) $(DEP_CPP_FASTFLI) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_FASTFLI=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\FastFlipTables.obj" : $(SOURCE) $(DEP_CPP_FASTFLI) "$(INTDIR)"


!ENDIF 

SOURCE=.\flipfuncBB.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_FLIPF=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\flipfuncBB.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\flipfuncBB.obj" : $(SOURCE) $(DEP_CPP_FLIPF) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_FLIPF=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\flipfuncBB.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\flipfuncBB.obj" : $(SOURCE) $(DEP_CPP_FLIPF) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_FLIPF=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\flipfuncBB.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\flipfuncBB.obj" : $(SOURCE) $(DEP_CPP_FLIPF) "$(INTDIR)"


!ENDIF 

SOURCE=.\Games.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_GAMES=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\Games.obj" : $(SOURCE) $(DEP_CPP_GAMES) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_GAMES=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\Games.obj" : $(SOURCE) $(DEP_CPP_GAMES) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_GAMES=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	
NODEP_CPP_GAMES=\
	".\negamax.h"\
	

"$(INTDIR)\Games.obj" : $(SOURCE) $(DEP_CPP_GAMES) "$(INTDIR)"


!ENDIF 

SOURCE=..\GDK\GGSMessage.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_GGSME=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\GGSMessage.obj" : $(SOURCE) $(DEP_CPP_GGSME) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_GGSME=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\GGSMessage.obj" : $(SOURCE) $(DEP_CPP_GGSME) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_GGSME=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\GGSMessage.obj" : $(SOURCE) $(DEP_CPP_GGSME) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\GDK\GGSObjects.cpp
DEP_CPP_GGSOB=\
	"..\gdk\ggsobjects.h"\
	

"$(INTDIR)\GGSObjects.obj" : $(SOURCE) $(DEP_CPP_GGSOB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=..\GDK\ggsstream.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_GGSST=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\ggsstream.obj" : $(SOURCE) $(DEP_CPP_GGSST) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_GGSST=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\ggsstream.obj" : $(SOURCE) $(DEP_CPP_GGSST) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_GGSST=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\ggsstream.obj" : $(SOURCE) $(DEP_CPP_GGSST) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=.\main.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_MAIN_=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Games.h"\
	".\main.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\ODKStream.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Test.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\main.obj" : $(SOURCE) $(DEP_CPP_MAIN_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_MAIN_=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Games.h"\
	".\main.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\ODKStream.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Test.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\main.obj" : $(SOURCE) $(DEP_CPP_MAIN_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_MAIN_=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Games.h"\
	".\main.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\ODKStream.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\Pos2Helpers.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Test.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	
NODEP_CPP_MAIN_=\
	".\negamax.h"\
	

"$(INTDIR)\main.obj" : $(SOURCE) $(DEP_CPP_MAIN_) "$(INTDIR)"


!ENDIF 

SOURCE=.\Moves.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_MOVES=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\Moves.obj" : $(SOURCE) $(DEP_CPP_MOVES) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_MOVES=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\Moves.obj" : $(SOURCE) $(DEP_CPP_MOVES) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_MOVES=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\Moves.obj" : $(SOURCE) $(DEP_CPP_MOVES) "$(INTDIR)"


!ENDIF 

SOURCE=.\MPCStats.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_MPCST=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\MPCStats.obj" : $(SOURCE) $(DEP_CPP_MPCST) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_MPCST=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\MPCStats.obj" : $(SOURCE) $(DEP_CPP_MPCST) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_MPCST=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\MPCStats.obj" : $(SOURCE) $(DEP_CPP_MPCST) "$(INTDIR)"


!ENDIF 

SOURCE=.\NodeStats.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_NODES=\
	".\debug.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\ticks.h"\
	".\Utils.h"\
	

"$(INTDIR)\NodeStats.obj" : $(SOURCE) $(DEP_CPP_NODES) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_NODES=\
	".\debug.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\ticks.h"\
	".\Utils.h"\
	

"$(INTDIR)\NodeStats.obj" : $(SOURCE) $(DEP_CPP_NODES) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_NODES=\
	".\NodeStats.h"\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\NodeStats.obj" : $(SOURCE) $(DEP_CPP_NODES) "$(INTDIR)"


!ENDIF 

SOURCE=.\ODKStream.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_ODKST=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\ODKStream.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\ODKStream.obj" : $(SOURCE) $(DEP_CPP_ODKST) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_ODKST=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\ODKStream.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\ODKStream.obj" : $(SOURCE) $(DEP_CPP_ODKST) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_ODKST=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\ODKStream.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\ODKStream.obj" : $(SOURCE) $(DEP_CPP_ODKST) "$(INTDIR)"


!ENDIF 

SOURCE=.\off.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_OFF_C=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\off_precoded.cpp"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\off.obj" : $(SOURCE) $(DEP_CPP_OFF_C) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_OFF_C=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\off_precoded.cpp"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\off.obj" : $(SOURCE) $(DEP_CPP_OFF_C) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_OFF_C=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\off_precoded.cpp"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\off.obj" : $(SOURCE) $(DEP_CPP_OFF_C) "$(INTDIR)"


!ENDIF 

SOURCE=.\off_dualuse.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_OFF_D=\
	".\debug.h"\
	".\off.h"\
	".\SV.H"\
	

"$(INTDIR)\off_dualuse.obj" : $(SOURCE) $(DEP_CPP_OFF_D) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_OFF_D=\
	".\debug.h"\
	".\off.h"\
	".\SV.H"\
	

"$(INTDIR)\off_dualuse.obj" : $(SOURCE) $(DEP_CPP_OFF_D) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_OFF_D=\
	".\off.h"\
	".\SV.H"\
	

"$(INTDIR)\off_dualuse.obj" : $(SOURCE) $(DEP_CPP_OFF_D) "$(INTDIR)"


!ENDIF 

SOURCE=.\options.cpp
DEP_CPP_OPTIO=\
	".\options.h"\
	".\Utils.h"\
	

"$(INTDIR)\options.obj" : $(SOURCE) $(DEP_CPP_OPTIO) "$(INTDIR)"


SOURCE=..\GDK\OsObjects.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_OSOBJ=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\OsObjects.obj" : $(SOURCE) $(DEP_CPP_OSOBJ) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_OSOBJ=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\OsObjects.obj" : $(SOURCE) $(DEP_CPP_OSOBJ) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_OSOBJ=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	

"$(INTDIR)\OsObjects.obj" : $(SOURCE) $(DEP_CPP_OSOBJ) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=.\Patterns.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_PATTE=\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Patterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\Patterns.obj" : $(SOURCE) $(DEP_CPP_PATTE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_PATTE=\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Patterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\Patterns.obj" : $(SOURCE) $(DEP_CPP_PATTE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_PATTE=\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Patterns.h"\
	".\Utils.h"\
	

"$(INTDIR)\Patterns.obj" : $(SOURCE) $(DEP_CPP_PATTE) "$(INTDIR)"


!ENDIF 

SOURCE=.\Player.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_PLAYE=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\ticks.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\Player.obj" : $(SOURCE) $(DEP_CPP_PLAYE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_PLAYE=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\ticks.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\Player.obj" : $(SOURCE) $(DEP_CPP_PLAYE) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_PLAYE=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Games.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	
NODEP_CPP_PLAYE=\
	".\negamax.h"\
	

"$(INTDIR)\Player.obj" : $(SOURCE) $(DEP_CPP_PLAYE) "$(INTDIR)"


!ENDIF 

SOURCE=.\Pos2.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_POS2_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\stabn.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\Pos2.obj" : $(SOURCE) $(DEP_CPP_POS2_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_POS2_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\stabn.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\Pos2.obj" : $(SOURCE) $(DEP_CPP_POS2_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_POS2_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\stabn.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	
NODEP_CPP_POS2_=\
	".\negamax.h"\
	

"$(INTDIR)\Pos2.obj" : $(SOURCE) $(DEP_CPP_POS2_) "$(INTDIR)"


!ENDIF 

SOURCE=.\Pos2Helpers.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_POS2H=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Pos2Helpers.obj" : $(SOURCE) $(DEP_CPP_POS2H) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_POS2H=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Pos2Helpers.obj" : $(SOURCE) $(DEP_CPP_POS2H) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_POS2H=\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Pos2Helpers.obj" : $(SOURCE) $(DEP_CPP_POS2H) "$(INTDIR)"


!ENDIF 

SOURCE=.\QPosition.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_QPOSI=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\QPosition.obj" : $(SOURCE) $(DEP_CPP_QPOSI) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_QPOSI=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\QPosition.obj" : $(SOURCE) $(DEP_CPP_QPOSI) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_QPOSI=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\QPosition.h"\
	".\Timing.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	
NODEP_CPP_QPOSI=\
	".\negamax.h"\
	

"$(INTDIR)\QPosition.obj" : $(SOURCE) $(DEP_CPP_QPOSI) "$(INTDIR)"


!ENDIF 

SOURCE=..\GDK\SGBase.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_SGBAS=\
	"..\gdk\amsobjects.h"\
	"..\gdk\cksobjects.h"\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sg_t.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGBase.obj" : $(SOURCE) $(DEP_CPP_SGBAS) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_SGBAS=\
	"..\gdk\amsobjects.h"\
	"..\gdk\cksobjects.h"\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sg_t.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGBase.obj" : $(SOURCE) $(DEP_CPP_SGBAS) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_SGBAS=\
	"..\gdk\amsobjects.h"\
	"..\gdk\cksobjects.h"\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sg.h"\
	"..\gdk\sg_t.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGBase.obj" : $(SOURCE) $(DEP_CPP_SGBAS) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\GDK\SGMessages.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_SGMES=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGMessages.obj" : $(SOURCE) $(DEP_CPP_SGMES) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_SGMES=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGMessages.obj" : $(SOURCE) $(DEP_CPP_SGMES) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_SGMES=\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\gdk\sgbase.h"\
	"..\gdk\sgmessages.h"\
	"..\gdk\sgmessages_t.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGMessages.obj" : $(SOURCE) $(DEP_CPP_SGMES) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\GDK\SGObjects.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_SGOBJ=\
	"..\gdk\cksobjects.h"\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGObjects.obj" : $(SOURCE) $(DEP_CPP_SGOBJ) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_SGOBJ=\
	"..\gdk\cksobjects.h"\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGObjects.obj" : $(SOURCE) $(DEP_CPP_SGOBJ) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_SGOBJ=\
	"..\gdk\cksobjects.h"\
	"..\gdk\ggsmessage.h"\
	"..\gdk\ggsobjects.h"\
	"..\gdk\ggsstream.h"\
	"..\GDK\OsObjects.h"\
	"..\gdk\sgbase.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\SGObjects.obj" : $(SOURCE) $(DEP_CPP_SGOBJ) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


!ENDIF 

SOURCE=..\GDK\sockbuf.cpp
DEP_CPP_SOCKB=\
	"..\gdk\sockbuf.h"\
	

"$(INTDIR)\sockbuf.obj" : $(SOURCE) $(DEP_CPP_SOCKB) "$(INTDIR)"
	$(CPP) $(CPP_PROJ) $(SOURCE)


SOURCE=.\stabn.cpp
DEP_CPP_STABN=\
	".\stabn.h"\
	

"$(INTDIR)\stabn.obj" : $(SOURCE) $(DEP_CPP_STABN) "$(INTDIR)"


SOURCE=.\SV.CPP

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_SV_CP=\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Patterns.h"\
	".\SV.H"\
	".\Utils.h"\
	

"$(INTDIR)\SV.OBJ" : $(SOURCE) $(DEP_CPP_SV_CP) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_SV_CP=\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Patterns.h"\
	".\SV.H"\
	".\Utils.h"\
	

"$(INTDIR)\SV.OBJ" : $(SOURCE) $(DEP_CPP_SV_CP) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_SV_CP=\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Patterns.h"\
	".\SV.H"\
	".\Utils.h"\
	

"$(INTDIR)\SV.OBJ" : $(SOURCE) $(DEP_CPP_SV_CP) "$(INTDIR)"


!ENDIF 

SOURCE=.\Test.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_TEST_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Games.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Test.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Test.obj" : $(SOURCE) $(DEP_CPP_TEST_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_TEST_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Games.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Test.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Test.obj" : $(SOURCE) $(DEP_CPP_TEST_) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_TEST_=\
	"..\GDK\OsObjects.h"\
	"..\GDK\SGObjects.h"\
	"..\gdk\sgobjects_t.h"\
	".\BitBoard.h"\
	".\BitBoardBlock.h"\
	".\Book.h"\
	".\Cache.h"\
	".\Evaluator.h"\
	".\FastFlip.h"\
	".\FastFlipPatterns.h"\
	".\FastFlipTables.h"\
	".\Games.h"\
	".\Moves.h"\
	".\MPCStats.h"\
	".\NodeStats.h"\
	".\off.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Player.h"\
	".\Pos2.h"\
	".\Pos2All.h"\
	".\Pos2Helpers.h"\
	".\Pos2HelpersInline.h"\
	".\Pos2Inlines.h"\
	".\Pos2Internal.h"\
	".\QPosition.h"\
	".\Test.h"\
	".\Timing.h"\
	".\Utils.h"\
	
NODEP_CPP_TEST_=\
	".\negamax.h"\
	

"$(INTDIR)\Test.obj" : $(SOURCE) $(DEP_CPP_TEST_) "$(INTDIR)"


!ENDIF 

SOURCE=.\Ticks.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_TICKS=\
	".\ticks.h"\
	".\Utils.h"\
	

"$(INTDIR)\Ticks.obj" : $(SOURCE) $(DEP_CPP_TICKS) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_TICKS=\
	".\ticks.h"\
	".\Utils.h"\
	

"$(INTDIR)\Ticks.obj" : $(SOURCE) $(DEP_CPP_TICKS) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_TICKS=\
	".\ticks.h"\
	".\Utils.h"\
	

"$(INTDIR)\Ticks.obj" : $(SOURCE) $(DEP_CPP_TICKS) "$(INTDIR)"


!ENDIF 

SOURCE=.\Timing.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_TIMIN=\
	".\debug.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Timing.obj" : $(SOURCE) $(DEP_CPP_TIMIN) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_TIMIN=\
	".\debug.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Timing.obj" : $(SOURCE) $(DEP_CPP_TIMIN) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_TIMIN=\
	".\NodeStats.h"\
	".\options.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Timing.obj" : $(SOURCE) $(DEP_CPP_TIMIN) "$(INTDIR)"


!ENDIF 

SOURCE=.\treedebug.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_TREED=\
	".\BitBoardBlock.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\treedebug.obj" : $(SOURCE) $(DEP_CPP_TREED) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_TREED=\
	".\BitBoardBlock.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\treedebug.obj" : $(SOURCE) $(DEP_CPP_TREED) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_TREED=\
	".\BitBoardBlock.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\TreeDebug.h"\
	".\Utils.h"\
	

"$(INTDIR)\treedebug.obj" : $(SOURCE) $(DEP_CPP_TREED) "$(INTDIR)"


!ENDIF 

SOURCE=.\Utils.cpp

!IF  "$(CFG)" == "othello - Win32 Release"

DEP_CPP_UTILS=\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Utils.obj" : $(SOURCE) $(DEP_CPP_UTILS) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 Debug"

DEP_CPP_UTILS=\
	".\BitBoardBlock.h"\
	".\debug.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Utils.obj" : $(SOURCE) $(DEP_CPP_UTILS) "$(INTDIR)"


!ELSEIF  "$(CFG)" == "othello - Win32 External"

DEP_CPP_UTILS=\
	".\BitBoardBlock.h"\
	".\Evaluator.h"\
	".\FastFlipPatterns.h"\
	".\Moves.h"\
	".\NodeStats.h"\
	".\options.h"\
	".\Patterns.h"\
	".\Pos2.h"\
	".\Timing.h"\
	".\Utils.h"\
	

"$(INTDIR)\Utils.obj" : $(SOURCE) $(DEP_CPP_UTILS) "$(INTDIR)"


!ENDIF 


!ENDIF 

