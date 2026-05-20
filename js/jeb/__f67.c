void __f67(int* param0, int param1, int param2) {
    int v0;
    int v1 = __g0 - &gvar_10;
    __g0 -= &gvar_10;
    int v2 = 1;
    int v3 = param2;
    while(v3 > 0) {
        if(param2 < v3) {
            jump 0;
        }
        int i = (int)*(char*)(param1 - 1 + v3);
        if((int)*(char*)(param1 - 1 + v3) >= 0) {
            v0 = 1;
        }
        else {
            for(i = v3 - 2; i >= (v3 - 4 <= v3 ? v3 - 4: 0); --i) {
                if(v3 <= (unsigned int)i) {
                    jump 0;
                }
                if(((unsigned int)*(char*)(param1 + i) & 0xc0) != 128) {
                    break;
                }
            }
            if(v3 < i) {
                jump 0;
            }
            __f16(v3 - (i > 0 ? i: 0), (i > 0 ? i: 0) + param1, v1 + &gvar_8);
            int v4 = *((int*)((int)&gvar_8 + v1) + 1);
            int v5 = (unsigned int)((i > 0 ? i: 0) + v4 == v3);
            v0 = v5 ? v4: 1;
            i = v5 ? *(int*)((int)&gvar_8 + v1): 0xfffd;
        }
        v3 -= v0;
        int v6 = __f26(i);
        if(v6 & 0x1) {
            continue;
        }
        if(v3 >= 0) {
            if(param2 <= v3) {
                jump 0;
            }
            int v7 = param1 + v3;
            if(*(char*)v7 < 0) {
                __f16(param2 - v3, v7, v1);
                v2 = *(int*)(v1 + 4);
            }
        }
        goto loc_50004E2D;
    }
    v3 = -1;
loc_50004E2D:
    int v8 = v3 + v2;
    if(param2 >= v8) {
        *(param0 + 1) = v8;
        *param0 = param1;
        __g0 = v1 + &gvar_10;
        return;
    }
    jump 0;
}
