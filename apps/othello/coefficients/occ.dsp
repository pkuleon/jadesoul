# Microsoft Developer Studio Project File - Name="occ" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 5.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Console Application" 0x0103

CFG=occ - Win32 Debug
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "occ.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "occ.mak" CFG="occ - Win32 Debug"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "occ - Win32 Release" (based on "Win32 (x86) Console Application")
!MESSAGE "occ - Win32 Debug" (based on "Win32 (x86) Console Application")
!MESSAGE 

# Begin Project
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
RSC=rc.exe

!IF  "$(CFG)" == "occ - Win32 Release"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "Release"
# PROP BASE Intermediate_Dir "Release"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "Release"
# PROP Intermediate_Dir "Release"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /GX /O2 /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /GR /GX /O2 /I "c:\devl\occ" /I "c:\devl\sirius_stl" /I "c:\devl\othello" /I "c:\devl\GDK" /D "WIN32" /D "NDEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD BASE RSC /l 0x809 /d "NDEBUG"
# ADD RSC /l 0x809 /d "NDEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /machine:I386
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib WS2_32.lib /nologo /subsystem:console /machine:I386

!ELSEIF  "$(CFG)" == "occ - Win32 Debug"

# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 1
# PROP BASE Output_Dir "Debug"
# PROP BASE Intermediate_Dir "Debug"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 1
# PROP Output_Dir "Debug"
# PROP Intermediate_Dir "Debug"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /W3 /Gm /GX /Zi /Od /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# ADD CPP /nologo /W3 /Gm /GR /GX /Zi /Od /I "c:\devl\occ" /I "c:\devl\sirius_stl" /I "c:\devl\othello" /I "c:\devl\GDK" /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /YX /FD /c
# SUBTRACT CPP /Gf
# ADD BASE RSC /l 0x809 /d "_DEBUG"
# ADD RSC /l 0x809 /d "_DEBUG"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib /nologo /subsystem:console /debug /machine:I386 /pdbtype:sept
# ADD LINK32 kernel32.lib user32.lib gdi32.lib winspool.lib comdlg32.lib advapi32.lib shell32.lib ole32.lib oleaut32.lib uuid.lib odbc32.lib odbccp32.lib WS2_32.lib /nologo /subsystem:console /incremental:no /debug /machine:I386 /pdbtype:sept

!ENDIF 

# Begin Target

# Name "occ - Win32 Release"
# Name "occ - Win32 Debug"
# Begin Source File

SOURCE=..\GDK\AmsObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\BitBoard.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\BitBoard.h
# End Source File
# Begin Source File

SOURCE=..\othello\BitBoardBlock.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\BitBoardBlock.h
# End Source File
# Begin Source File

SOURCE=..\othello\Book.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Book.h
# End Source File
# Begin Source File

SOURCE=..\othello\Cache.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Cache.h
# End Source File
# Begin Source File

SOURCE=..\GDK\CksObjects.cpp
# End Source File
# Begin Source File

SOURCE=.\Coeffs.cpp
# End Source File
# Begin Source File

SOURCE=.\Coeffs.h
# End Source File
# Begin Source File

SOURCE=..\othello\Evaluator.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Evaluator.h
# End Source File
# Begin Source File

SOURCE=..\othello\FastFlip.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\FastFlip.h
# End Source File
# Begin Source File

SOURCE=..\othello\FastFlipPatterns.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\FastFlipPatterns.h
# End Source File
# Begin Source File

SOURCE=..\othello\FastFlipTables.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\FastFlipTables.h
# End Source File
# Begin Source File

SOURCE=..\othello\flipfuncBB.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\flipfuncBB.h
# End Source File
# Begin Source File

SOURCE=..\othello\Games.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Games.h
# End Source File
# Begin Source File

SOURCE=..\GDK\GGSMessage.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\GGSObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\ggsstream.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Maps.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Moves.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Moves.h
# End Source File
# Begin Source File

SOURCE=..\othello\MPCStats.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\MPCStats.h
# End Source File
# Begin Source File

SOURCE=..\othello\Negamax.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Negamax.h
# End Source File
# Begin Source File

SOURCE=..\othello\NodeStats.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\NodeStats.h
# End Source File
# Begin Source File

SOURCE=..\othello\off.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\off_dualuse.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\options.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\options.h
# End Source File
# Begin Source File

SOURCE=..\GDK\OsObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\OsObjects.h
# End Source File
# Begin Source File

SOURCE=..\othello\PatternCoeffCalc.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\PatternCoeffCalc.h
# End Source File
# Begin Source File

SOURCE=..\othello\Patterns.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Patterns.h
# End Source File
# Begin Source File

SOURCE=..\othello\Player.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Player.h
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2.h
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2All.h
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2Helpers.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2Helpers.h
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2HelpersInline.h
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2Inlines.h
# End Source File
# Begin Source File

SOURCE=..\othello\Pos2Internal.h
# End Source File
# Begin Source File

SOURCE=..\othello\QPosition.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\QPosition.h
# End Source File
# Begin Source File

SOURCE=..\GDK\SG.h
# End Source File
# Begin Source File

SOURCE=..\GDK\SGBase.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\SGMessages.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\SGObjects.cpp
# End Source File
# Begin Source File

SOURCE=..\GDK\SGObjects.h
# End Source File
# Begin Source File

SOURCE=..\GDK\sockbuf.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\stabn.cpp
# End Source File
# Begin Source File

SOURCE=..\Off\SV.CPP
# End Source File
# Begin Source File

SOURCE=..\othello\Timing.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Timing.h
# End Source File
# Begin Source File

SOURCE=..\othello\treedebug.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\TreeDebug.h
# End Source File
# Begin Source File

SOURCE=..\othello\Utils.cpp
# End Source File
# Begin Source File

SOURCE=..\othello\Utils.h
# End Source File
# Begin Source File

SOURCE=..\othello\Window.h
# End Source File
# End Target
# End Project
