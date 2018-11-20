@ECHO OFF
CLS
ECHO © Creative Services and Development
ECHO Suporte: www.creativesd.com.br
ECHO.
ECHO Opcoes:
ECHO  1. Preparar Bibliotecas para Renewal (x86)
ECHO  2. Preparar Bibliotecas para Pre-Renewal (x86)
ECHO  3. Preparar Bibliotecas para Renewal (x64)
ECHO  4. Preparar Bibliotecas para Pre-Renewal (x64)
ECHO  5. Cancelar
ECHO.

CHOICE /C 12345 /M "Entre com uma Opcao:"

:: Note - list ERRORLEVELS in decreasing order
IF ERRORLEVEL 5 GOTO CloseAllWindows
IF ERRORLEVEL 4 GOTO PreRenewalX64
IF ERRORLEVEL 3 GOTO RenewalX64
IF ERRORLEVEL 2 GOTO PreRenewalX86
IF ERRORLEVEL 1 GOTO RenewalX86

:RenewalX64
REM RENEWAL X64 DEFINE
ECHO Definindo Projetos para Biblioteca Renewal (x64)
@echo off &setlocal
REM Enter the Map-Server directory
cd src/map/
REM Alter map-server.vcxproj
set "search1=map-server-win-x64-pre.lib"
set "search2=map-server-win-x86-pre.lib"
set "search3=map-server-win-x86-re.lib"
set "replace=map-server-win-x64-re.lib"
set "textfile=map-server.vcxproj"
set "newfile=map-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
REM Alter map-server.vcxproj.filters
set "search1=map-server-win-x64-pre.lib"
set "search2=map-server-win-x86-pre.lib"
set "search3=map-server-win-x86-re.lib"
set "replace=map-server-win-x64-re.lib"
set "textfile=map-server.vcxproj.filters"
set "newfile=map-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Enter the Char-Server directory
cd ../char/
REM Alter char-server.vcxproj
set "search1=char-server-win-x64-pre.lib"
set "search2=char-server-win-x86-pre.lib"
set "search3=char-server-win-x86-re.lib"
set "replace=char-server-win-x64-re.lib"
set "textfile=char-server.vcxproj"
set "newfile=char-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Alter char-server.vcxproj.filters
set "search1=char-server-win-x64-pre.lib"
set "search2=char-server-win-x86-pre.lib"
set "search3=char-server-win-x86-re.lib"
set "replace=char-server-win-x64-re.lib"
set "textfile=char-server.vcxproj.filters"
set "newfile=char-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
ECHO Biblioteca definida com sucesso!
ECHO Voce ja pode abrir o projeto de compilacao...
GOTO End

:RenewalX86
REM RENEWAL X86 DEFINE
ECHO Definindo Projetos para Biblioteca Renewal (x86)
@echo off &setlocal
REM Enter the Map-Server directory
cd src/map/
REM Alter map-server.vcxproj
set "search1=map-server-win-x64-re.lib"
set "search2=map-server-win-x64-pre.lib"
set "search3=map-server-win-x86-pre.lib"
set "replace=map-server-win-x86-re.lib"
set "textfile=map-server.vcxproj"
set "newfile=map-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
REM Alter map-server.vcxproj.filters
set "search1=map-server-win-x64-re.lib"
set "search2=map-server-win-x64-pre.lib"
set "search3=map-server-win-x86-pre.lib"
set "replace=map-server-win-x86-re.lib"
set "textfile=map-server.vcxproj.filters"
set "newfile=map-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Enter the Char-Server directory
cd ../char/
REM Alter char-server.vcxproj
set "search1=char-server-win-x64-pre.lib"
set "search2=char-server-win-x86-pre.lib"
set "search3=char-server-win-x64-re.lib"
set "replace=char-server-win-x86-re.lib"
set "textfile=char-server.vcxproj"
set "newfile=char-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Alter char-server.vcxproj.filters
set "search1=char-server-win-x64-pre.lib"
set "search2=char-server-win-x86-pre.lib"
set "search3=char-server-win-x64-re.lib"
set "replace=char-server-win-x86-re.lib"
set "textfile=char-server.vcxproj.filters"
set "newfile=char-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
ECHO Biblioteca definida com sucesso!
ECHO Voce ja pode abrir o projeto de compilacao...
GOTO End

:PreRenewalX64
REM PRERENEWAL X64 DEFINE
ECHO Definindo Projetos para Biblioteca Pre-Renewal (x64)
@echo off &setlocal
REM Enter the Map-Server directory
cd src/map/
REM Alter map-server.vcxproj
set "search1=map-server-win-x64-re.lib"
set "search2=map-server-win-x86-re.lib"
set "search3=map-server-win-x86-pre.lib"
set "replace=map-server-win-x64-pre.lib"
set "textfile=map-server.vcxproj"
set "newfile=map-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
REM Alter map-server.vcxproj.filters
set "search1=map-server-win-x64-re.lib"
set "search2=map-server-win-x86-re.lib"
set "search3=map-server-win-x86-pre.lib"
set "replace=map-server-win-x64-pre.lib"
set "textfile=map-server.vcxproj.filters"
set "newfile=map-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Enter the Char-Server directory
cd ../char/
REM Alter char-server.vcxproj
set "search1=char-server-win-x64-re.lib"
set "search2=char-server-win-x86-re.lib"
set "search3=char-server-win-x86-pre.lib"
set "replace=char-server-win-x64-pre.lib"
set "textfile=char-server.vcxproj"
set "newfile=char-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Alter char-server.vcxproj.filters
set "search1=char-server-win-x64-re.lib"
set "search2=char-server-win-x86-re.lib"
set "search3=char-server-win-x86-pre.lib"
set "replace=char-server-win-x64-pre.lib"
set "textfile=char-server.vcxproj.filters"
set "newfile=char-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
ECHO Biblioteca definida com sucesso!
ECHO Voce ja pode abrir o projeto de compilacao...
GOTO End

:PreRenewalX86
REM PRERENEWAL X86 DEFINE
ECHO Definindo Projetos para Biblioteca Pre-Renewal (x86)
@echo off &setlocal
REM Enter the Map-Server directory
cd src/map/
REM Alter map-server.vcxproj
set "search1=map-server-win-x64-re.lib"
set "search2=map-server-win-x86-re.lib"
set "search3=map-server-win-x64-pre.lib"
set "replace=map-server-win-x86-pre.lib"
set "textfile=map-server.vcxproj"
set "newfile=map-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
REM Alter map-server.vcxproj.filters
set "search1=map-server-win-x64-re.lib"
set "search2=map-server-win-x86-re.lib"
set "search3=map-server-win-x64-pre.lib"
set "replace=map-server-win-x86-pre.lib"
set "textfile=map-server.vcxproj.filters"
set "newfile=map-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Enter the Char-Server directory
cd ../char/
REM Alter char-server.vcxproj
set "search1=char-server-win-x64-re.lib"
set "search2=char-server-win-x86-re.lib"
set "search3=char-server-win-x64-pre.lib"
set "replace=char-server-win-x86-pre.lib"
set "textfile=char-server.vcxproj"
set "newfile=char-server.vcxproj.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%

REM Alter char-server.vcxproj.filters
set "search1=char-server-win-x64-re.lib"
set "search2=char-server-win-x86-re.lib"
set "search3=char-server-win-x64-pre.lib"
set "replace=char-server-win-x86-pre.lib"
set "textfile=char-server.vcxproj.filters"
set "newfile=char-server.vcxproj.filters.txt"
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search1%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search2%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
(for /f "delims=" %%i in (%textfile%) do (
    set "line=%%i"
    setlocal enabledelayedexpansion
    set "line=!line:%search3%=%replace%!"
    echo(!line!
    endlocal
))>"%newfile%"
del %textfile%
rename %newfile%  %textfile%
ECHO Biblioteca definida com sucesso!
ECHO Voce ja pode abrir o projeto de compilacao...
GOTO End

:CloseAllWindows
EXIT

:End
ECHO Pressione a tecla 'Enter' para fechar...
set /p input=