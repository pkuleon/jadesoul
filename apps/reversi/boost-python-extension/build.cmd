@echo off
echo [ Welcome to C++ compiling environment based on Notepad++ ]
echo using compilers: g++ and msvc
echo [ Designed By Jadesoul @ 2008��3��13��22:09:37 ]
g++ --version
::�任����ɫ
::E:\�ҵĳɹ�\�ҿ�����д��DOS�ն�\tools\randomdoscolor.cpp.exe

set param1=python-reversi.cpp

if exist %param1%.exe del %param1%.exe
::color 2f

::ʹ��gcc����
::g++ %param1% -o %param1%.exe

::ʹ��vc2005����
::call "D:\Program Files\Microsoft Visual Studio 8\VC\vcvarsall.bat"     ::this is old
call "C:\Program Files\Microsoft Visual Studio 9.0\VC\vcvarsall.bat"
::initial includes and libs
set includes=
set libpaths=
set libs=

::set environment for opengl
REM set includes=%includes% /I D:\cpp-dev-packages\glut
REM set libpaths=%libpaths% /LIBPATH:"D:\cpp-dev-packages\glut"
set libs=%libs% glut32.lib

::set environment for boost
set includes=%includes% /I D:\cpp-dev-packages\boost\boost_1_44_0
set libpaths=%libpaths% /LIBPATH:"D:\cpp-dev-packages\boost\boost_1_44_0\bin\vc9\lib"
::set libs=%libs% libboost_python-vc90-mt-s.lib libboost_python-vc90-mt-sgd.lib
set libs=%libs% libboost_python-vc90-mt-s.lib

::set environment for jadesoul utils
set includes=%includes% /I E:\svnprojects-linux\jadesoul\includes
REM set includes=%includes% /I E:\�ҵĳɹ�\�ҿ�����д��DOS�ն�\includes

::set environment for google test
set includes=%includes% /I E:\SvnProjects\googletest\include
set libpaths=%libpaths% /LIBPATH:"E:\SvnProjects\googletest\lib"
set libs=%libs% gtest.lib

::set environment for python extension
set includes=%includes% /I C:\Python26\include
set libpaths=%libpaths% /LIBPATH:"c:\Python26\libs"
set libs=%libs% python26.lib


::����python-ictclas��չ @2010��11��
::set cmdline=cl /EHsc /LD /DBOOST_PYTHON_STATIC_LIB ICTCLAS30.lib %includes%  %libs% %param1% -o python_ictclas.pyd

::����python-thunder-engine��չ @2011��3��19��17:31:09
::set cmdline=cl /LD /DUNICODE /D_UNICODE /Od /D "WIN32" /D "_WINDOWS" /EHsc  /W3  /INCREMENTAL /DNDEBUG /DYNAMICBASE:NO /ERRORREPORT:PROMPT  /DBOOST_PYTHON_STATIC_LIB XLDownload.lib %includes%  %libs% %param1% /o python_thunder_engine.pyd

set cmdline=cl /EHsc /LD /DBOOST_PYTHON_STATIC_LIB %includes%  %libs% %param1% -o reversi.pyd


::echo ��������:	%cmdline%
set mychar=:
echo ���ڱ���...
echo %mychar%
echo %mychar%
echo %cmdline%
echo %mychar%
echo %mychar%

%cmdline%

python test.py
