int __f26(int param0) {
    short* ptr0;
    int result;
    if(param0 <= 0xff) {
        result = 1;
        if(!((unsigned int)((int*)((int)(int*)(1 << (int)(short*)((char*)(unsigned int)(unsigned char)param0 - 9)) & 0x80001f) == 0) | (unsigned int)((unsigned int)(short*)((char*)(unsigned int)(unsigned char)param0 - 9) > 23))) {
            return 1;
        }
        if(!((unsigned int)((unsigned char)param0 == 133) | (unsigned int)((unsigned char)param0 == 160))) {
            return 0;
        }
    }
    else if(param0 <= 0x3000) {
        short* ptr1 = (short*)&gFFFFFFDC;
        for(int i = (unsigned int)*(ptr1 + 0x80b0); i <= (unsigned int)(unsigned short)param0; i = (unsigned int)*(ptr1 + 0x80b0)) {
            short* ptr2 = ptr1 + 32945;
            ptr1 += 3;
            if((unsigned int)(unsigned short)param0 > (unsigned int)*ptr2) {
                goto loc_500015AF;
            }
            else {
                result = 1;
                ptr0 = (unsigned int)*(ptr1 + 32943);
            }
            switch(ptr0) {
                case 0: {
                    jump 0;
                }
                case 1: {
                    return result;
                }
                default: {
                    return (unsigned int)((int*)((unsigned int)((unsigned short)param0 - (unsigned short)i) % (int)(unsigned int)ptr0) == 0);
                loc_500015AF:
                    if(ptr1 == -6) {
                        return result;
                    }
                }
            }
        }
    }
    return result;
}
