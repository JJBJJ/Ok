void __f57(char* param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    if(param1 < 128) {
        v4 = 1;
        v3 = param1;
    }
    else if(param1 <= 0x7ff) {
        v2 = (param1 & 0x3f) | 0xffffff80;
        v3 = (param1 >>> 6) | 0xffffffc0;
        v4 = 2;
    }
    else {
        v4 = 3;
        v1 = 189;
        v2 = 191;
        v3 = 239;
        if((param1 & 0x7ffff800) != 0xd800) {
            if(param1 <= 0xffff) {
                v1 = (param1 & 0x3f) | 0xffffff80;
                v3 = (param1 >>> 12) | 0xffffffe0;
                v2 = ((param1 >>> 6) & 0x3f) | 0xffffff80;
            }
            else if(param1 <= 0x10ffff) {
                v0 = (param1 & 0x3f) | 0xffffff80;
                v3 = (param1 >>> 18) | 0xfffffff0;
                v1 = ((param1 >>> 6) & 0x3f) | 0xffffff80;
                v2 = ((param1 >>> 12) & 0x3f) | 0xffffff80;
                v4 = 4;
            }
        }
    }
    *param0 = (unsigned char)v3;
    *(param0 + 1) = (unsigned char)v2;
    *(param0 + 2) = (unsigned char)v1;
    *(param0 + 3) = (unsigned char)v0;
    *(int*)(param0 + 4) = v4;
}
