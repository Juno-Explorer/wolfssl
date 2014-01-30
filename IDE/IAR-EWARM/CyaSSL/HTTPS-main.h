/* HTTPS-main.h
 *
 * Copyright (C) 2006-2014 wolfSSL Inc.
 *
 * This file is part of CyaSSL.
 *
 * CyaSSL is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * CyaSSL is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

#ifndef __HTTPS_MAIN_H__
#define __HTTPS_MAIN_H__

extern CYASSL_HTTPS_NB CyaSSL_HTTPS_Client_1 ;
extern CYASSL_HTTPS_NB CyaSSL_HTTPS_Client_2 ;
extern CYASSL_HTTPS_NB CyaSSL_HTTPS_Client_3 ;
extern CYASSL_HTTPS_NB CyaSSL_HTTPS_Client_4 ;
extern CYASSL_HTTPS_NB CyaSSL_HTTPS_Client_5 ;

extern void HTTPS_Clinet_main_init(void) ;
extern void HTTPS_Clinet_main(void) ;

#endif
