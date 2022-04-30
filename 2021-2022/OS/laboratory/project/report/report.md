
---
## Front matter
title: "Отчёт по первому этапу индивидуального проекта"
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

Создать статический сайт на базе HUGO.


# Задание

На первом этапе нам необходимо установить необходимое ПО, скачать шаблон темы сайта, разместить егог на хостинге, установить параметр для URLs сайта и разместить заготовку сайта на GitHub pages.


# Выполнение лабораторной работы

***Шаг 1***
Устанавливаем необходимое ПО с помощью команды sudo dnf install go hugo (рис. [@fig:001])
![Рис 1](image/1.png) {#fig:001 width=70%}

(рис. [@fig:015])

![Рис 1.1 - шаг 1](image/15.png) {#fig:015 width=70%}

(рис. [@fig:017])

![Рис 1.2 - шаг 1](image/17.png) {#fig:017 width=70%}


***Шаг 2*** 
Клонируем папку blog в нашу домашнюю папку из хостинга гитхаб (рис. [@fig:002])

![Рис 2 - выполняем шаг 2](image/2.png) {#fig:002 width=70%}


***Шаг 3***
С помощью команды ~/bin/hugo server генерируем шаблон нашего будущего сайта(рис. [@fig:003])

![Рис 3 - выполняем шаг 3, генерируем сайт](image/3.png) {#fig:003 width=70%}

(рис. [@fig:004])

![Рис 4 - выполняем шаг 3, получаем шаблон](image/4.png) {#fig:004 width=70%}


***Шаг 4***
Создаем пустой репозиторий и копируем его в терминал (рис. [@fig:005]) (рис. [@fig:006])

![Рис 5 -](image/5.png) {#fig:005 width=70%}

![Рис 6 - так как репозиторий пустой, создаем в нем новую ветку main](image/6.png) {#fig:006 width=70%}

***Шаг 5*** 
Добавляем новый файл README.md (рис. [@fig:007]) (рис. [@fig:008])

![Рис 7 - команда cd - позволяет передвигаться по каталогам](image/7.png) {#fig:007 width=70%}

![Рис 8 - установка команды mc на виртуальную машину(не относится к работе)](image/8.png) {#fig:008 width=70%}


***Шаг 6***
Клонируем все папки из каталога blog на хостинг (рис. [@fig:009])

![Рис 9 - шаг 6](image/9.png) {#fig:009 width=70%}

(рис. [@fig:010])

![Рис 10 - шаг 6](image/10.png) {#fig:010 width=70%}

***Шаг 7***
шаблон сайта уже с нашим адресом (рис. [@fig:013])

![Рис 11 - шаг 6](image/13.png) {#fig:013 width=70%}


# Выводы

Мы выполнили первый этап индивидуального проекта.

# Список литературы{.unnumbered}

::: {#refs}
:::
