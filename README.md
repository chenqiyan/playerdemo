

## 简介

- 使用 FFmpeg-4.2.1 (x86) 解码，SDL2-2.0.7 (x86) 渲染。  
- 在 Windows 下使用 Qt5.10.x (MinGW 32版本) 开发。  
- 项目目录下的 .pro 文件，  QtCreator 打开编译调试。  

 


## Windows平台编译调试
1. 程序运行需要的运行时库在playerdemo\dll

2. 使用 QtCreator 打开 playerdemo.pro。  
3. 编译运行。  





# 原GitHub作者

# playerdemo


[![GitHub issues](https://img.shields.io/github/issues/itisyang/playerdemo.svg)](https://github.com/itisyang/playerdemo/issues)
[![GitHub stars](https://img.shields.io/github/stars/itisyang/playerdemo.svg)](https://github.com/itisyang/playerdemo/stargazers)
[![GitHub forks](https://img.shields.io/github/forks/itisyang/playerdemo.svg)](https://github.com/itisyang/playerdemo/network)
[![GitHub release](https://img.shields.io/github/release/itisyang/playerdemo.svg)](https://github.com/itisyang/playerdemo/releases)
![Build Status](https://github.com/itisyang/playerdemo/actions/workflows/windows.yml/badge.svg)
![Build Status](https://github.com/itisyang/playerdemo/actions/workflows/macos.yml/badge.svg)
![Build Status](https://github.com/itisyang/playerdemo/actions/workflows/ubuntu.yml/badge.svg)
![language](https://img.shields.io/badge/language-c++-DeepPink.svg)
[![GitHub license](https://img.shields.io/github/license/itisyang/playerdemo.svg)](https://github.com/itisyang/playerdemo/blob/master/LICENSE)



## 简介
- 使用 FFmpeg-3.4 (x64) 解码，SDL2-2.0.7 (x64) 渲染。  
- 在 Windows 下使用 Qt5.12.x (MinGW x64) 开发。  
- 项目目录下的 .pro 文件，支持在多平台（Windows、Linux、Mac）下 QtCreator 打开编译调试。  

![playerdemo_play](https://cdn.staticaly.com/gh/itisyang/MyImages@master/images/playerdemo_play.png)

## 沟通
- Issues: 欢迎给我提 issues，关于本项目的问题，请优先提 issues，我会尽量当天回复。

## Windows平台编译调试
1. 下载 FFmpeg、SDL2 动态库，dll放在 bin 目录下，头文件和lib文件替换掉lib文件夹中的内容。(直接从官网下载即可)  
    FFmpeg 库下载地址 [https://ffmpeg.zeranoe.com/builds/](https://ffmpeg.zeranoe.com/builds/)  
    SDL2 库下载地址 [https://www.libsdl.org/download-2.0.php](https://www.libsdl.org/download-2.0.php)  
2. 使用 QtCreator 打开 playerdemo.pro。  
3. 编译运行。  



