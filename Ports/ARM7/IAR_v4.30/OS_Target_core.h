//********************************************************************************
//*
//*     FULLNAME:  Single-Chip Microcontroller Real-Time Operating System
//*
//*     NICKNAME:  scmRTOS
//*
//*     PROCESSOR: ARM7
//*
//*     TOOLKIT:   EWARM (IAR Systems)
//*
//*     PURPOSE:   Target Dependent Stuff Header. Target chip depended file selector
//*
//*     Version:   3.00-beta
//*
//*     $Revision$
//*     $Date$
//*
//*     Copyright (c) 2003-2006, Harry E. Zhurov
//*
//*     =================================================================
//*     scmRTOS is free software; you can redistribute it and/or
//*     modify it under the terms of the GNU General Public License
//*     as published by the Free Software Foundation; either version 2
//*     of the License, or (at your option) any later version.
//*
//*     This program is distributed in the hope that it will be useful,
//*     but WITHOUT ANY WARRANTY; without even the implied warranty of
//*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//*     GNU General Public License for more details.
//*
//*     You should have received a copy of the GNU General Public License
//*     along with this program; if not, write to the Free Software
//*     Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
//*     MA  02110-1301, USA.
//*     =================================================================
//*
//*     =================================================================
//*     See http://scmrtos.sourceforge.net for documentation, latest
//*     information, license and contact details.
//*     =================================================================
//*
//********************************************************************************
//*     ARM port by Sergey A. Borshch, Copyright (c) 2006

#ifndef	TARGET_CORE_H__
#define	TARGET_CORE_H__

#if defined(AT91SAM7S32) | defined(AT91SAM7S64) | defined(AT91SAM7S128) | defined(AT91SAM7S256)
    #include    <Target_AT91SAM7.h>
#elif defined(LPC2119) | defined(LPC2129) | defined(LPC2212) | defined(LPC2214)
    #include    <Target_LPC2xxx.h>
#elif defined(ADuC7019) | defined(ADuC7020) | defined(ADuC7021) | defined(ADuC7022) \
    | defined(ADuC7024) | defined(ADuC7025) | defined(ADuC7026) | defined(ADuC7027)
    #include    <Target_ADuC70xx.h>
#endif

#endif  // TARGET_CORE_H__