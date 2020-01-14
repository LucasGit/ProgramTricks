# ProgramTricks
Program Tricks concepts,normal functions (C/Cpp)

# git command bat
rem https://blog.csdn.net/weixin_34267123/article/details/92064013
echo off 

rem git pull bat
for /d %%i in ( _Project/ProgramTricks,_Project/Projects,_OS/OS,_Net/FTPPush) do if not %%i==[Filter] @cd %cd%\%%i && @git push

rem return bat file folder
cd /d %~dp0

pause