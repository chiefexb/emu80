/*
 *  Emu80/SDL 3.x
 *  Copyright (C) 1997-2013 Viktor Pykhonin <pyk@mail.ru>
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

// menus.h

// ���������� ��������� ���������.
// ������� ������ � ���� � ���������.

#ifndef _MENUS_H
#define _MENUS_H

// ppcMes - ������ �����
// nLines - ���������� �����
// szHeader - ��������� ����
// bChoice - ������������� ������ (� ����. ������ ������. ���������)
// nCurChoice - ������� �����
// bNoSwap - ���� true, �� ���������� ������� � ����. ������ �� ������ � ����.
// nMaxWidth - ������������ ������ ������������� ���� (0 - ���������.)
// nMaxHeight - ������������ ������ ������������� ���� (0 - ���������.)
int ShowMessage(char **ppcMes, int nLines,
                char *szHeader, int bChoice, int nCurChoice,
                int bNoSwap=0, int nMaxWidth=0, int nMaxHeight=0,
                int (*fnGetColor)(char *szName)=0);

#endif
