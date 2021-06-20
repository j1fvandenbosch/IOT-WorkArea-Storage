8000 :
; --- set I/O port B as output
: a9 ff ; lda #$ff
: 8d 02 60 ; sta $6002

@loop
; --- write $55 to I/O port B
: a9 55 ; lda #$55
: 8d 00 60 ; sta $6000
: ea ; nop

; --- write $aa to I/O port B
: a9 aa ; lda #$aa
: 8d 00 60 ; sta $6000

; --- loop...
: 80 f3 ; bra @loop

fffc : 00 80 ; --- boot/reset vector