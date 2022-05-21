---
## Front matter
title: "Отчёт по лабораторной работе №10"
subtitle: "Дисциплина: Операционные системы"
author: "Татьяна Александровна Лебединец"

## Generic otions
lang: ru-RU
toc-title: "Содержание"

## Bibliography
bibliography: bib/cite.bib
csl: pandoc/csl/gost-r-7-0-5-2008-numeric.csl

## Pdf output format
toc: true # Table of contents
toc-depth: 2
lof: true # List of figures
lot: true # List of tables
fontsize: 12pt
linestretch: 1.5
papersize: a4
documentclass: scrreprt
## I18n polyglossia
polyglossia-lang:
  name: russian
  options:
	- spelling=modern
	- babelshorthands=true
polyglossia-otherlangs:
  name: english
## I18n babel
babel-lang: russian
babel-otherlangs: english
## Fonts
mainfont: PT Serif
romanfont: PT Serif
sansfont: PT Sans
monofont: PT Mono
mainfontoptions: Ligatures=TeX
romanfontoptions: Ligatures=TeX
sansfontoptions: Ligatures=TeX,Scale=MatchLowercase
monofontoptions: Scale=MatchLowercase,Scale=0.9
## Biblatex
biblatex: true
biblio-style: "gost-numeric"
biblatexoptions:
  - parentracker=true
  - backend=biber
  - hyperref=auto
  - language=auto
  - autolang=other*
  - citestyle=gost-numeric
## Pandoc-crossref LaTeX customization
figureTitle: "Рис."
tableTitle: "Таблица"
listingTitle: "Листинг"
lofTitle: "Список иллюстраций"
lotTitle: "Список таблиц"
lolTitle: "Листинги"
## Misc options
indent: true
header-includes:
  - \usepackage{indentfirst}
  - \usepackage{float} # keep figures where there are in the text
  - \floatplacement{figure}{H} # keep figures where there are in the text
---

# Цель работы

Познакомиться с операционной системой Linux. 


# Выполнение лабораторной работы

# Задание1

    ***1.***
    С помощью команды man открываем справку о командах. (рис. -@fig:001)
    
    ![Рис 1 - step 1](image/1.png) {#fig:001 width=70%}
    
 (рис. -@fig:002) (рис. -@fig:003)

![Рис 2 - step 1](image/2.png) {#fig:002 width=70%}

![Рис 3 - step 1](image/3.png) {#fig:003 width=70%}

    ***2.***
     Выполняем 2 шаг из л.р. (рис. -@fig:004)

![Рис 4 - step 2](image/4.png) {#fig:004 width=70%}



    ***3.***
     Проверяем работу скрипта (рис. -@fig:005)
     
![Рис 5 - step 3](image/5.png) {#fig:004 width=70%} 
     
    ***4.***
     Скрипты файлов (рис. -@fig:006) (рис. -@fig:008)
     
![Рис 6 - step 4](image/6.png) {#fig:006 width=70%}

![Рис 7 - step 4](image/8.png) {#fig:008 width=70%}

    ***5.***
     Проверка работы 3 файла (рис. -@fig:007)

![Рис 8 - step 5](image/7.png) {#fig:007 width=70%}

    ***6.*** Выполняем последний этап. (рис. -@fig:009)

![Рис 9 - step 6](image/9.png) {#fig:009 width=70%} 


# Выводы

Я познакомилась с операционной системой Linux.

#Контрольные вопросы


    

# Список литературы{.unnumbered}

::: {#refs}
:::
