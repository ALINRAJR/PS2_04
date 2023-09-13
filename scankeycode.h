/*
 * scankeycode.h
 
 */

#ifndef SCANKEYCODE_H_
#define SCANKEYCODE_H_



#define F1 0
#define ESC 0
#define TAB 0
#define F2 0
#define LCTRL 0
#define LSHIFT 0
#define CAPS 0
#define F3 0
#define F4 0
#define F5 0
#define LALT 0
#define F6 0
#define F7 0
#define F8 0
#define F9 0
#define F10 0
#define F11 0
#define RSHIFT 0
#define ENTER 0
#define F12 0
#define SLOCK 0
#define DELETE 0
#define BACKSPACE 0
#define NUMLOCK 0
#define SPACE 0


const uint8_t unshiftedllookuptable[]={
		0,      //0x00
		F9, 	//0x01
		0, 	    //0x02
		F5, 	//0x03
		F3, 	//0x04
		F1, 	//0x05
		F2, 	//0x06
		F12,  	//0x07
		0, 	    //0x08
		F10,  	//0x09
		F8,  	//0x0A
		F6,  	//0x0B
		F4,  	//0x0C
		TAB,  	//0x0D
		'`',  	//0x0E
		F2,   	//0x0F
		0,  	//0x10
		LALT, 	//0x11
		LSHIFT,	//0x12
		0,	    //0x13
		LCTRL, 	//0x14
		'q',	//0x15
		'1',	//0x16
		F3,   	//0x17
		0,  	//0x18
		0,	    //0x19
		'z',	//0x1A
		's',	//0x1B
		'a',	//0x1C
		'w',	//0x1D
		'2',	//0x1E
		F4,   	//0x1F
		0,  	//0x20
		'c', 	//0x21
		'x', 	//0x22
		'd', 	//0x23
		'e', 	//0x24
		'4', 	//0x25
		'3', 	//0x26
		F5,   	//0x27
		0,  	//0x28
		SPACE,  //0x29
		'v',	//0x2A
		'f',	//0x2B
		't',	//0x2C
		'r',	//0x2D
		'5',	//0x2E
		F6,   	//0x2F
		0,  	//0x30
		'n',	//0x31
		'b',	//0x32
		'h',	//0x33
		'g',	//0x34
		'y',	//0x35
		'6',	//0x36
		F7,     //0x37
		0,  	//0x38
		0,   	//0x39
		'm', 	//0x3A
		'j',	//0x3B
		'u', 	//0x3C
		'7', 	//0x3D
		'8', 	//0x3E
		F8,   	//0x3F
		0,  	//0x40
		',', 	//0x41
		'k',	//0x42
		'i',	//0x43
		'o',	//0x44
		'0',	//0x45
		'9',	//0x46
		F9,   	//0x47
		0,  	//0x48
		'.', 	//0x49
		'/', 	//0x4A
		'l', 	//0x4B
		';', 	//0x4C
		'p', 	//0x4D
		'-', 	//0x4E
		F10,  	//0x4F
		0,  	//0x50
		0,	    //0x51
		'\'',	//0x52
		0, 	    //0x53
		'[',	//0x54
		'=',	//0x55
		F11,	//0x56
		CAPS,	//0x58
		RSHIFT,	//0x59
		ENTER,	//0x5A
		']',	//0x5B
		0,	    //0x5C
		'\\',	//0x5D
		F12,	//0x5E
		SLOCK,	//0x5F
		0,	    //0x60
		0,	    //0x61
		0,	    //0x62
		0,	    //0x63
		DELETE, //0x64
		0,	    //0x65
		BACKSPACE,//0x66
		0,	    //0x67
		0,	    //0x68
		'1',    //0x69
		0,	    //0x6A
		'4',	//0x6B
		'7',    //0x6C
		0,      //0x6D
		0,	    //0x6E
		0,	    //0x6F
		'0',	//0x70
		DELETE,	//0x71
		'2',	//0x72
		'5',	//0x73
		'6',	//0x74
		'8',	//0x75
		ESC,	//0x76
		NUMLOCK,//0x77
		F11,	//0x78
		ENTER,  //0x79
		'3',	//0x7A
		'-',	//0x7B
		'*',	//0x7C
		'9',	//0x7D
		SLOCK,	//0x7E
		0,	    //0x7F
		0,	    //0x80
		0,	    //0x81
		0,	    //0x82
		F7,	    //0x83

};



const uint8_t shiftedllookuptable[]={
		0, 	    //0x00
		F9, 	//0x01
		0, 	    //0x02
		F5, 	//0x03
		F3, 	//0x04
		F1, 	//0x05
		F2, 	//0x06
		F12,  	//0x07
		0, 	    //0x08
		F10,  	//0x09
		F8,  	//0x0A
		F6,  	//0x0B
		F4,  	//0x0C
		TAB,  	//0x0D
		'~',  	//0x0E
		F2,   	//0x0F
		0,  	//0x10
		LALT, 	//0x11
		LSHIFT,	//0x12
		0,	//0x13
		LCTRL, 	//0x14
		'Q',	//0x15
		'!',	//0x16
		F3,   	//0x17
		0,  	//0x18
		0,	//0x19
		'Z',	//0x1A
		'S',	//0x1B
		'A',	//0x1C
		'W',	//0x1D
		'@',	//0x1E
		F4,   	//0x1F
		0,  	//0x20
		'C', 	//0x21
		'X', 	//0x22
		'D', 	//0x23
		'E', 	//0x24
		'$', 	//0x25
		'#', 	//0x26
		F5,   	//0x27
		0,  	//0x28
		SPACE,  //0x29
		'V',	//0x2A
		'F',	//0x2B
		'T',	//0x2C
		'R',	//0x2D
		'%',	//0x2E
		F6,   	//0x2F
		0,  	//0x30
		'N',	//0x31
		'B',	//0x32
		'H',	//0x33
		'G',	//0x34
		'Y',	//0x35
		'^',	//0x36
		F7,     //0x37
		0,  	//0x38
		0,   	//0x39
		'M', 	//0x3A
		'J',	//0x3B
		'U', 	//0x3C
		'&', 	//0x3D
		'*', 	//0x3E
		F8,   	//0x3F
		0,  	//0x40
		'<', 	//0x41
		'K',	//0x42
		'I',	//0x43
		'O',	//0x44
		')',	//0x45
		'(',	//0x46
		F9,   	//0x47
		0,  	//0x48
		'>', 	//0x49
		'?', 	//0x4A
		'L', 	//0x4B
		':', 	//0x4C
		'P', 	//0x4D
		'_', 	//0x4E
		F10,  	//0x4F
		0,  	//0x50
		0,	//0x51
		'"',	//0x52
		0, 	//0x53
		'{',	//0x54
		'+',	//0x55
		F11,	//0x56
		CAPS,	//0x58
		RSHIFT,	//0x59
		ENTER,	//0x5A
		'}',	//0x5B
		0,	//0x5C
		'|',	//0x5D
		F12,	//0x5E
		SLOCK,	//0x5F
		0,	//0x60
		0,	//0x61
		0,	//0x62
		0,	//0x63
		0,      //0x64
		0,	//0x65
		BACKSPACE,//0x66
		0,	//0x67
		0,	//0x68
		'1',     //0x69
		0,	//0x6A
		'4',	//0x6B
		'7',    //0x6C
		0,	//0x6D
		0,	//0x6E
		0,	//0x6F
		'0',	//0x70
		DELETE,	//0x71
		'2',	//0x72
		'5',	//0x73
		'6',	//0x74
		'8',	//0x75
		ESC,	//0x76
		NUMLOCK,//0x77
		F11,	//0x78
		0,      //0x79
		'3',	//0x7A
		'-',	//0x7B
		'*',	//0x7C
		'9',	//0x7D
		SLOCK,	//0x7E
		0,	//0x7F
		0,	//0x80
		0,	//0x81
		0,	//0x82
		F7,	//0x83
};

const uint8_t capslookuptable[]={
		0, 	//0x00
		F9, 	//0x01
		0, 	//0x02
		F5, 	//0x03
		F3, 	//0x04
		F1, 	//0x05
		F2, 	//0x06
		F12,  	//0x07
		0, 	//0x08
		F10,  	//0x09
		F8,  	//0x0A
		F6,  	//0x0B
		F4,  	//0x0C
		TAB,  	//0x0D
		'`',  	//0x0E
		F2,   	//0x0F
		0,  	//0x10
		LALT, 	//0x11
		LSHIFT,	//0x12
		0,	//0x13
		LCTRL, 	//0x14
		'Q',	//0x15
		'1',	//0x16
		F3,   	//0x17
		0,  	//0x18
		0,	//0x19
		'Z',	//0x1A
		'S',	//0x1B
		'A',	//0x1C
		'W',	//0x1D
		'2',	//0x1E
		F4,   	//0x1F
		0,  	//0x20
		'C', 	//0x21
		'X', 	//0x22
		'D', 	//0x23
		'E', 	//0x24
		'4', 	//0x25
		'3', 	//0x26
		F5,   	//0x27
		0,  	//0x28
		SPACE,  //0x29
		'V',	//0x2A
		'F',	//0x2B
		'T',	//0x2C
		'R',	//0x2D
		'5',	//0x2E
		F6,   	//0x2F
		0,  	//0x30
		'N',	//0x31
		'B',	//0x32
		'H',	//0x33
		'G',	//0x34
		'Y',	//0x35
		'6',	//0x36
		F7,     //0x37
		0,  	//0x38
		0,   	//0x39
		'M', 	//0x3A
		'J',	//0x3B
		'U', 	//0x3C
		'7', 	//0x3D
		'8', 	//0x3E
		F8,   	//0x3F
		0,  	//0x40
		',', 	//0x41
		'K',	//0x42
		'I',	//0x43
		'O',	//0x44
		'0',	//0x45
		'9',	//0x46
		F9,   	//0x47
		0,  	//0x48
		'.', 	//0x49
		'/', 	//0x4A
		'L', 	//0x4B
		';', 	//0x4C
		'P', 	//0x4D
		'-', 	//0x4E
		F10,  	//0x4F
		0,  	//0x50
		0,	//0x51
		'\'',	//0x52
		0, 	//0x53
		'[',	//0x54
		'=',	//0x55
		F11,	//0x56
		CAPS,	//0x58
		RSHIFT,	//0x59
		ENTER,	//0x5A
		']',	//0x5B
		0,	//0x5C
		'\\',	//0x5D
		F12,	//0x5E
		SLOCK,	//0x5F
		0,	//0x60
		0,	//0x61
		0,	//0x62
		0,	//0x63
		0,      //0x64
		0,	//0x65
		BACKSPACE,//0x66
		0,	//0x67
		0,	//0x68
		'1',     //0x69
		0,	//0x6A
		'4',	//0x6B
		'7',    //0x6C
		0,	//0x6D
		0,	//0x6E
		0,	//0x6F
		'0',	//0x70
		DELETE,	//0x71
		'2',	//0x72
		'5',	//0x73
		'6',	//0x74
		'8',	//0x75
		ESC,	//0x76
		NUMLOCK,//0x77
		F11,	//0x78
		0,      //0x79
		'3',	//0x7A
		'-',	//0x7B
		'*',	//0x7C
		'9',	//0x7D
		SLOCK,	//0x7E
		0,	//0x7F
		0,	//0x80
		0,	//0x81
		0,	//0x82
		F7,	//0x83
};


const uint8_t numlookuptable[]={
		0, 	//0x00
		F9, 	//0x01
		0, 	//0x02
		F5, 	//0x03
		F3, 	//0x04
		F1, 	//0x05
		F2, 	//0x06
		F12,  	//0x07
		0, 	//0x08
		F10,  	//0x09
		F8,  	//0x0A
		F6,  	//0x0B
		F4,  	//0x0C
		TAB,  	//0x0D
		'`',  	//0x0E
		F2,   	//0x0F
		0,  	//0x10
		LALT, 	//0x11
		LSHIFT,	//0x12
		0,	//0x13
		LCTRL, 	//0x14
		'q',	//0x15
		'1',	//0x16
		F3,   	//0x17
		0,  	//0x18
		0,	//0x19
		'z',	//0x1A
		's',	//0x1B
		'a',	//0x1C
		'w',	//0x1D
		'2',	//0x1E
		F4,   	//0x1F
		0,  	//0x20
		'c', 	//0x21
		'x', 	//0x22
		'd', 	//0x23
		'e', 	//0x24
		'4', 	//0x25
		'3', 	//0x26
		F5,   	//0x27
		0,  	//0x28
		SPACE,  //0x29
		'v',	//0x2A
		'f',	//0x2B
		't',	//0x2C
		'r',	//0x2D
		'5',	//0x2E
		F6,   	//0x2F
		0,  	//0x30
		'n',	//0x31
		'b',	//0x32
		'h',	//0x33
		'g',	//0x34
		'y',	//0x35
		'6',	//0x36
		F7,     //0x37
		0,  	//0x38
		0,   	//0x39
		'm', 	//0x3A
		'j',	//0x3B
		'u', 	//0x3C
		'7', 	//0x3D
		'8', 	//0x3E
		F8,   	//0x3F
		0,  	//0x40
		',', 	//0x41
		'k',	//0x42
		'i',	//0x43
		'o',	//0x44
		'0',	//0x45
		'9',	//0x46
		F9,   	//0x47
		0,  	//0x48
		'.', 	//0x49
		'/', 	//0x4A
		'l', 	//0x4B
		';', 	//0x4C
		'p', 	//0x4D
		'-', 	//0x4E
		F10,  	//0x4F
		0,  	//0x50
		0,	//0x51
		'\'',	//0x52
		0, 	//0x53
		'[',	//0x54
		'=',	//0x55
		F11,	//0x56
		CAPS,	//0x58
		RSHIFT,	//0x59
		ENTER,	//0x5A
		']',	//0x5B
		0,	//0x5C
		'\\',	//0x5D
		F12,	//0x5E
		SLOCK,	//0x5F
		0,	//0x60
		0,	//0x61
		0,	//0x62
		0,	//0x63
		DELETE, //0x64
		0,	//0x65
		BACKSPACE,//0x66
		0,	//0x67
		0,	//0x68
		'1',     //0x69
		0,	//0x6A
		'4',	//0x6B
		'7',    //0x6C
		0,      //0x6D
		0,	//0x6E
		0,	//0x6F
		'0',	//0x70
		DELETE,	//0x71
		'2',	//0x72
		'5',	//0x73
		'6',	//0x74
		'8',	//0x75
		ESC,	//0x76
		NUMLOCK,//0x77
		F11,	//0x78
		ENTER, //0x79
		'3',	//0x7A
		'-',	//0x7B
		'*',	//0x7C
		'9',	//0x7D
		SLOCK,	//0x7E
		0,	//0x7F
		0,	//0x80
		0,	//0x81
		0,	//0x82
		F7,	//0x83
};

const uint8_t altlookuptable[]={
0, //0x00
0, //0x01
0, //0x02
0, //0x03
0, //0x04
};

const uint8_t ctrllookuptable[]={
0, //0x00
0, //0x01
0, //0x02
0, //0x03
0, //0x04
};

const uint8_t capsshiftlookuptable[]={
		0, 		//0x00
		F9, 	//0x01
		0, 		//0x02
		F5, 	//0x03
		F3, 	//0x04
		F1, 	//0x05
		F2, 	//0x06
		F12,  	//0x07
		0, 		//0x08
		F10,  	//0x09
		F8,  	//0x0A
		F6,  	//0x0B
		F4,  	//0x0C
		TAB,  	//0x0D
		'~',  	//0x0E
		F2,   	//0x0F
		0,  	//0x10
		LALT, 	//0x11
		LSHIFT,	//0x12
		0,		//0x13
		LCTRL, 	//0x14
		'q',	//0x15
		'!',	//0x16
		F3,   	//0x17
		0,  	//0x18
		0,	    //0x19
		'z',	//0x1A
		's',	//0x1B
		'a',	//0x1C
		'w',	//0x1D
		'@',	//0x1E
		F4,   	//0x1F
		0,  	//0x20
		'c', 	//0x21
		'x', 	//0x22
		'd', 	//0x23
		'e', 	//0x24
		'$', 	//0x25
		'#', 	//0x26
		F5,   	//0x27
		0,  	//0x28
		SPACE,  //0x29
		'v',	//0x2A
		'f',	//0x2B
		't',	//0x2C
		'r',	//0x2D
		'%',	//0x2E
		F6,   	//0x2F
		0,  	//0x30
		'n',	//0x31
		'b',	//0x32
		'h',	//0x33
		'g',	//0x34
		'y',	//0x35
		'^',	//0x36
		F7,     //0x37
		0,  	//0x38
		0,   	//0x39
		'm', 	//0x3A
		'j',	//0x3B
		'u', 	//0x3C
		'&', 	//0x3D
		'*', 	//0x3E
		F8,   	//0x3F
		0,  	//0x40
		'<', 	//0x41
		'k',	//0x42
		'i',	//0x43
		'o',	//0x44
		')',	//0x45
		'(',	//0x46
		F9,   	//0x47
		0,  	//0x48
		'>', 	//0x49
		'?', 	//0x4A
		'l', 	//0x4B
		':', 	//0x4C
		'p', 	//0x4D
		'_', 	//0x4E
		F10,  	//0x4F
		0,  	//0x50
		0,		//0x51
		'"',	//0x52
		0, 		//0x53
		'{',	//0x54
		'+',	//0x55
		F11,	//0x56
		CAPS,	//0x58
		RSHIFT,	//0x59
		ENTER,	//0x5A
		'}',	//0x5B
		0,		//0x5C
		'|',	//0x5D
		F12,	//0x5E
		SLOCK,	//0x5F
		0,		//0x60
		0,		//0x61
		0,		//0x62
		0,		//0x63
		DELETE, //0x64
		0,		//0x65
		BACKSPACE,//0x66
		0,		//0x67
		0,		//0x68
		'1',     //0x69
		0,		//0x6A
		'4',	//0x6B
		'7',    //0x6C
		0,      //0x6D
		0,		//0x6E
		0,		//0x6F
		'0',	//0x70
		DELETE,	//0x71
		'2',	//0x72
		'5',	//0x73
		'6',	//0x74
		'8',	//0x75
		ESC,	//0x76
		NUMLOCK,//0x77
		F11,	//0x78
		'3',	//0x7A
		'-',	//0x7B
		'*',	//0x7C
		'9',	//0x7D
		SLOCK,	//0x7E
		0,		//0x7F
		0,		//0x80
		0,		//0x81
		0,		//0x82
		F7,		//0x83


		};


#endif /* SCANKEYCODE_H_ */
