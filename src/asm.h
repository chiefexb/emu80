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

// asm.h

#ifndef _E_ASM_H
#define _E_ASM_H

#include "emu80.h"

extern "C" void setup();

extern "C" void query();
extern "C" void getfilename();
extern "C" void ex_int_09(short wScanCode);

//extern "C" void InitOnce();            // ��������� ����-�� ��� �������
extern "C" unsigned char *mempages[4];   // ������ ������������ �� (4 ���.)
extern "C" unsigned char *mempage0;      // ������ ������������ �� (0 ���.)
extern "C" unsigned char *mempage1;      // ������ ������������ �� (1 ���.)
extern "C" unsigned char *mempage2;      // ������ ������������ �� (2 ���.)
extern "C" unsigned char *mempage3;      // ������ ������������ �� (3 ���.)
extern "C" unsigned char *mempage4;      // ������ ������������ �� (4 ���.)
extern "C" unsigned char *color_mem;     // ������ ����� "�����������"
extern "C" unsigned char *romdisk_mem;   // ������
extern "C" unsigned char *sym_gen;       // ��������������
extern "C" char color_table[4];        // ������� ������������ ������
extern "C" char or_color4_table[4];
extern "C" void Reset();
extern "C" void Emulate(int nCycles);
extern "C" int ProcessQuery();
extern "C" int PrepareScreen();
extern "C" void Init();                // ����-�� ��� ����� ���� ��
//extern "C" void LoadROM();             // �������� ���������������� ���
//extern "C" void ClearMem();            // ������� ������ �������� 8080
extern "C" void SetDefParams();        // ������������� ��������� �� ���������
extern "C" void FlushKeys();

extern "C" MENU_LINE f_speed;
extern "C" MENU_LINE f_scr;
extern "C" MENU_LINE f_snd;
extern "C" MENU_LINE f_tape;

extern "C" MENU_ITEM i_spmed;
extern "C" MENU_ITEM i_scrauto;

extern "C" unsigned char use_io_space; // ������������ �� ������� IN/OUT
extern "C" unsigned short scr_beg;           // ������ ������
extern "C" unsigned short scr_end;           // ����� ������
extern "C" unsigned short cur_corr;          // ������� ��������� ����-��
extern "C" unsigned short dma_begadr;        // ������ ������ (�� ���)
extern "C" unsigned short dma_len;           // ������ ������ -1 (�� ���)
 extern "C" unsigned short romvar_addr;       // ����� ���������� � ������� ���. ����.
 extern "C" unsigned short curpos_addr;       // ����� ���������� � �����. �������
extern "C" unsigned short cur_speed_sb;      // ������� ��������
extern "C" unsigned short delay_sb;          // ������� �������� (�� �����.)
extern "C" unsigned short delay_sb_dma; // ������ �� 1/44100 � ������ ���
extern "C" unsigned short delay_sb_norm;// ������ �� 1/44100 ��� ����� ���
extern "C" unsigned short rom_len;           // ����� ���
extern "C" unsigned short rom_adr;           // ���. ����� ���
extern "C" unsigned short reset_addr;        // ��������� �����
extern "C" unsigned char keybin_port;  // ���� ����� � ����������
extern "C" unsigned short ppi_portc_adr;     // ����� ����� C ���
extern "C" unsigned short crt_port1_adr;     // ����� �������� ���������� ��75
extern "C" char * romname;        // ��� ����� � ���
extern "C" void (*hook_proc_sb)();       // ������� ������� ������. - Sound Blast.
extern "C" void hook_p_sb();           // ������� ��������� ��� "��������"
extern "C" void hook_r_sb();           // ������� ��������� ��� ��
extern "C" void hook_m_sb();           // ������� ��������� ��� "�������"
extern "C" void hook_a_sb();           // ������� ��������� ��� "������"
extern "C" void hook_s_sb();           // ������� ��������� ��� "�����������"
extern "C" void hook_o_sb();           // ������� ��������� ��� "������"
extern "C" void hook_m80_sb();         // ������� ��������� ��� "�����-80"
extern "C" void hook_u_sb();           // ������� ��������� ��� "��-88"
extern "C" void corr_key_tbl();        // ����������� ������� ����. ��� ������
//extern "C" unsigned char ext_letter;   // ��������� ����� ���������� RKx
extern "C" void set_new_09_vect();       //
extern "C" void restore_09_vect();       //
extern "C" void AfterLoadRom();       //

extern "C" unsigned short sh_scrbeg;   // ������ �������� �������
extern "C" unsigned char sh_height;    // ���������� �����
extern "C" unsigned char sh_width;     // ���������� �������� � ������
extern "C" unsigned short sh_scrlen;   // ����� �������� �������
extern "C" unsigned char crt_param_1;  // �������� 1 ���������������� ��75
extern "C" unsigned char crt_param_2;  // �������� 2 ���������������� ��75
extern "C" unsigned char crt_param_3;  // �������� 3 ���������������� ��75
extern "C" unsigned char crt_param_4;  // �������� 4 ���������������� ��75
extern "C" unsigned char dma_mr;       // ������� ������ ��57
extern "C" unsigned char crt_mreg;     // ������� ������ ��75
extern "C" unsigned char mikr_symg;    // ���. �������������� "�������"
extern "C" unsigned char port_c;       // ���� C ��55
extern "C" unsigned char int_flag;     // ������� ���������� ����������
extern "C" unsigned char cur_x;        // ���������� X �������
extern "C" unsigned char cur_y;        // ���������� Y �������
extern "C" unsigned short cur_xy;      // ���������� XY �������
extern "C" unsigned char or_color_mode;// ������� ����� ������ "������"
extern "C" unsigned char mem_page_no;  // ������� �������� ������ "������"
extern "C" unsigned char or_scrpage;   // ������� ����� "������"
//extern "C" unsigned char f_chscr;      // 1, ���� ����� ���������. �����
extern "C" unsigned char f_saverom;    // 1, ���� ����� ��������� ��� � �����.
extern "C" unsigned short ticks_per_44100th; // ������ �� 1/44100-� �������

extern "C" void getfilename();         // ������ ����� �����
extern "C" void enable_ints();         // ���������� ����������
extern "C" void disable_ints();        // ���������� ����������
extern "C" void process_crt();         // �����. ������ � ����. � �����������
extern "C" void process_pit();         // �����. ������� � ����. � �����������
extern "C" void process_port_c();      // �������. ������. ����� C ���
extern "C" void process_orion();       // ��������� ���. ������ ��� ����. �����.
extern "C" char filename;              // ��������� ��� ����� (1-� ������)
extern "C" char f_choose_file;         // 1, ���� �������� ����
extern "C" char f_file_ss;             // 1, ���� ���� ��������, 2-ODI
extern "C" char f_synb;
//extern "C" char f_novesa;              // 1, ���� �� ���������� SVGA (VESA)
//extern "C" char f_led;                 // 1, �������� �� ������������ ����������
//extern "C" char f_use8x12;             // 1, ���. ����� 8x12 � ����� 80x40
//extern "C" unsigned short wSBPort;     // ������� ����� ������ SB
//extern "C" unsigned short wSBDMA;      // ����� ��� ��� SB
extern "C" char need_clear_mem;          // 1, ���� ����� ����. ���. ��� ���. ��
//extern "C" char com_path;              // ���� � com-�����
//extern "C" char com_path_len;          // ����� ���� � com-�����
//extern "C" unsigned short vmem_off;    // ����. � ��������. ������ ����. 800x600
extern "C" char f_quit;                  //

extern "C" unsigned char snd_state;                  //

extern "C" unsigned short reg_af;      // ������� AF
extern "C" unsigned short reg_bc;      // ������� BC
extern "C" unsigned short reg_de;      // ������� DE
extern "C" unsigned short reg_hl;      // ������� HL
extern "C" unsigned short reg_sp;      // ������� SP
extern "C" unsigned short reg_pc;      // ������� PC

#endif
