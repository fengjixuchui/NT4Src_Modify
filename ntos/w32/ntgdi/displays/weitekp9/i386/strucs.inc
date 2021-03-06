;---------------------------- Include File Header ---------------------------;
; Module Name: strucs.inc
;
; Most of these definitions are pulled straight from winddi.h.  We have
; to copy these here because we don't have any good 'h2inc' C-include-to-
; Asm-include program for NT.
;
; Copyright (c) 1993-1994 Microsoft Corporation
;----------------------------------------------------------------------------;

BMF_1BPP        equ     1
BMF_4BPP        equ     2
BMF_8BPP        equ     3
BMF_16BPP       equ     4
BMF_24BPP       equ     5
BMF_32BPP       equ     6

;-----------------------------------------------------------------------;
; POINTL is used for points with a range of +/- 2G.
;-----------------------------------------------------------------------;

POINTL          STRUC
ptl_x           DD      0
ptl_y           DD      0
POINTL          ENDS

;-----------------------------------------------------------------------;
; SIZEL is used for extents with a range of +/- 2G
;-----------------------------------------------------------------------;

SIZEL           STRUC
sizl_cx         DD      0
sizl_cy         DD      0
SIZEL           ENDS

;-----------------------------------------------------------------------;
; Definition of a rectangle
;-----------------------------------------------------------------------;


RECTL               struc           ; /* rcl */
xLeft               dd      ?
yTop                dd      ?
xRight              dd      ?
yBottom             dd      ?
RECTL               ends

;-----------------------------------------------------------------------;
; Definition of the physical device data structure
;
; NOTE: Changes to this structure must be reflected in driver.h!
;-----------------------------------------------------------------------;

PDEV                struc           ; /* pdev, ppdev */
pdev_xOffset            dd  ?
pdev_yOffset            dd  ?
pdev_pjBase             dd  ?
pdev_pjScreen           dd  ?
pdev_lDelta             dd  ?
pdev_iBoard             dd  ?
pdev_iBitmapFormat      dd  ?
pdev_pvTmpBuffer        dd  ?
PDEV                ends

;-----------------------------------------------------------------------;
; Macro to do a simple RET, with no stack stuff, in a proc.
;-----------------------------------------------------------------------;

PLAIN_RET macro
        db      0c3h
        endm
