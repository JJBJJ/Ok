void __f16(unsigned int* param0, char* param1, int param2) {
    char* ptr0;
    int v0;
    int* ptr1;
    int* ptr2 = (int*)&gFFFD;
    if(param2 > 0) {
        char* ptr3 = (unsigned int)*param1;
        int v1 = (unsigned int)*(ptr3 + 0x10010);
        ptr1 = &g1;
        if((unsigned int)(int*)(ptr3 - 245) <= -52) {
            ptr2 = (int)(int*)(((v1 & 0x1) - 1) & (int)ptr3) | ((0 - (v1 & 0x1)) & 0xfffd);
        }
        else if((v1 & 0x7) <= param2) {
            if(param2 == 1) {
                jump 0;
            }
            int v2 = (unsigned int)*(param1 + 1);
            if((unsigned int)*((char*)((v1 >>> 3) & 0x1e) + 0x10110) > v2 || (unsigned int)*((char*)((v1 >>> 3) & 0x1e) + 0x10111) < v2) {
                goto loc_500008E6;
            }
            else {
                if((unsigned int)(int*)(ptr3 - 245) <= -22) {
                    ptr2 = (int)(int*)((int)(int*)((int)ptr3 & 0x1f) * &gvar_40) | (v2 & 0x3f);
                    ptr1 = &g2;
                    goto loc_500008E6;
                }
                if(param2 < 3) {
                    jump 0;
                }
                v0 = *(param1 + 2);
                if(v0 > -65) {
                    goto loc_500008E6;
                }
                if((unsigned int)(int*)(ptr3 - 245) <= -6) {
                    ptr2 = (v0 & 0x3f) | (int)(int*)((int)(int*)((int)(int*)((int)ptr3 & 0xf) * 0x1000) | ((v2 & 0x3f) * &gvar_40));
                    ptr1 = &g3;
                    goto loc_500008E6;
                }
                if(param2 == 3) {
                    jump 0;
                }
                ptr0 = (int)*(param1 + 3);
            }
            if((int)ptr0 <= -65) {
                ptr2 = (int)(int*)((int)ptr0 & 0x3f) | (int)(int*)(((v0 & 0x3f) * &gvar_40) | (int)(int*)((int)(int*)((int)(int*)((int)ptr3 & 0x7) * 0x40000) | ((v2 & 0x3f) * 0x1000)));
                ptr1 = &g4;
            }
        }
    }
loc_500008E6:
    *param0 = ptr2;
    *(param0 + 1) = ptr1;
}
