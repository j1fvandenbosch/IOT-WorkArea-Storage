0x8d, 0x02, 0x60, // sta 0x6002
0x18, // clc
0xa9, 0x01, // lda 0x01
0x8d, 0x00, 0x60, // sta 0x6000
0x2a, // rol
0x90, -6, // bcc -6
0x18, // clc
0xa9, 0x80, // lda 0x80
0x8d, 0x00, 0x60, // sta 0x6000
0x6a, // ror
0x90, -6, // bcc -6
0x4c, 0x05, 0x80, // jmp 0x8005