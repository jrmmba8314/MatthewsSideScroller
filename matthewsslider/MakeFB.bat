@echo off
echo Building project using Borland Free Command Line Tools.  Please wait ...

set ppp=%PATH%
set PATH="c:\users\public\borland\bcc55\BIN";"%PATH%"
make.exe -B -f"matthewsslider.mak" -s -N >> tmp

set PATH=%ppp%
set ppp=
