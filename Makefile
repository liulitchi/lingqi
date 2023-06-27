#/*****************************************************************************
# * Copyright (C) 2023 Nymph <Academy of Artemis>
# * Copyright (C) 2023 liulitchi <kz-xy@163.com>
# *
# * This program is free software: you can redistribute it and/or modify
# * it under the terms of the GNU General Public License as published by
# * the Free Software Foundation, either version 3 of the License, or
# * (at your option) any later version.
# *
# * This program is distributed in the hope that it will be useful,
# * but WITHOUT ANY WARRANTY; without even the implied warranty of
# * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# * GNU General Public License for more details.
# *
# * You should have received a copy of the GNU General Public License
# * along with this program.  If not, see <https://www.gnu.org/licenses/>.
# *
# *
# * Ακαδημία της Αρτέμιδος (Academy of Artemis) is a loosely connected 
# * network of math learning group, whose members share a common interest 
# * in mathematics and statistics and often exchange their learning 
# * experiences with one another.

# * Many thanks to the video of “正月点灯笼”
# * Website：https://www.bilibili.com/video/BV1Mx411m7fm
# *  
# * Makefile 
# * Last edited: 2023/6/16
# *****************************************************************************/


CC = clang

main: main.c branch.o
	$(CC) main.c branch.o -o main
branch.o: branch.c
	$(CC) -c branch.c

	
clean:
	rm *.o main
