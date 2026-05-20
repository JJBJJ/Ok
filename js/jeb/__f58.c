void __f58(unsigned int* param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int v0 = __g0 - 0x100;
    __g0 -= 0x100;
    if(!((param2 & 0x3f) | (unsigned int)(param2 != param5))) {
        int v1 = *(int*)(param0 + 11);
        int v2 = (int)*(unsigned int*)((int)&gvar_28 + (int)param0);
        int v3 = *(int*)((unsigned int*)((int)&gvar_20 + (int)param0) + 1);
        int v4 = *(int*)(param0 + 7);
        int v5 = (int)*(unsigned int*)((int)&gvar_18 + (int)param0);
        int v6 = *(int*)((unsigned int*)((int)&gvar_10 + (int)param0) + 1);
        int v7 = *(int*)((int)&gvar_10 + (int)param0);
        int v8 = *(int*)((unsigned int*)((int)&gvar_8 + (int)param0) + 1);
        int v9 = *(int*)((int)&gvar_8 + (int)param0);
        int v10 = *(int*)(param0 + 1);
        int v11 = *param0;
        if(*(unsigned char*)((unsigned char*)param0 + 117) == 0) {
            __f59(v3, v6, v10, 857760878, v0 + 240);
            unsigned long long v12 = *(unsigned long long*)(v0 + 240);
            *(unsigned long long*)(param0 + &gvar_20) = *(unsigned long long*)(v0 + 248);
            *(unsigned long long*)((int)&gvar_78 + (int)param0) = v12;
            __f59(v2, v5, v9, 2036477234, v0 + 224);
            v12 = *(unsigned long long*)(v0 + 224);
            *(unsigned long long*)(param0 + 36) = *(unsigned long long*)(v0 + 232);
            *(unsigned long long*)(param0 + 34) = v12;
            __f59(v1, v4, v8, 1797285236, v0 + 208);
            v12 = *(unsigned long long*)(v0 + 208);
            *(unsigned long long*)(param0 + &gvar_28) = *(unsigned long long*)(v0 + 216);
            *(unsigned long long*)(param0 + 38) = v12;
            *(unsigned char*)((unsigned char*)param0 + 117) = 1;
        }
        while(param2 >= &gvar_40) {
            __f59(*(int*)((int)&gvar_20 + (int)param0), v7, v11, 0x61707865, v0 + 192);
            __f59(*(int*)(param0 + 41), *(int*)(param0 + 36), *(int*)(param0 + 31), *(int*)(v0 + 192), v0 + 176);
            int v13 = *(int*)(v0 + 188);
            int v14 = *(int*)(v0 + 184);
            int v15 = *(int*)(v0 + 180);
            int v16 = *(int*)(v0 + 176);
            __f59(*(int*)(v0 + 0xcc), *(int*)(param0 + &gvar_28), *(int*)(param0 + 35), *(int*)((int)&gvar_78 + (int)param0), v0 + 160);
            int v17 = *(int*)(v0 + 172);
            int v18 = *(int*)(v0 + 168);
            int v19 = *(int*)(v0 + 164);
            int v20 = *(int*)(v0 + 160);
            __f59(*(int*)(param0 + 33), *(int*)(v0 + 200), *(int*)(param0 + 39), *(int*)(param0 + 34), v0 + 144);
            int v21 = *(int*)(v0 + 156);
            int v22 = *(int*)(v0 + 152);
            int v23 = *(int*)(v0 + 148);
            int v24 = *(int*)(v0 + 144);
            __f59(*(int*)(param0 + 37), *(int*)(param0 + &gvar_20), *(int*)(v0 + 196), *(int*)(param0 + 38), v0 + 128);
            param5 = 9;
            int v25 = *(int*)(v0 + 140);
            int v26 = *(int*)(v0 + 0x88);
            int v27 = *(int*)(v0 + 132);
            int i;
            for(i = *(int*)(v0 + 128); param5; i = *(int*)v0) {
                __f59(v17, v22, v27, v16, v0 + &gvar_70);
                __f59(v21, v26, v15, v20, v0 + &gvar_60);
                __f59(v25, v14, v19, v24, v0 + &gvar_50);
                __f59(v13, v18, v23, i, v0 + &gvar_40);
                __f59(*(int*)((int)&gvar_4C + v0), *(int*)((int)&gvar_58 + v0), *(int*)(v0 + 100), *(int*)((int)&gvar_70 + v0), v0 + &gvar_30);
                v13 = *((int*)((int)&gvar_38 + v0) + 1);
                v14 = *(int*)((int)&gvar_38 + v0);
                v15 = *(int*)(v0 + 52);
                v16 = *(unsigned int*)((int)&gvar_30 + v0);
                __f59(*(int*)(v0 + 124), *(int*)((int)&gvar_48 + v0), *(int*)(v0 + 84), *(int*)((int)&gvar_60 + v0), v0 + &gvar_20);
                v17 = *(int*)(v0 + 44);
                v18 = *(unsigned int*)((int)&gvar_28 + v0);
                v19 = *((int*)((int)&gvar_20 + v0) + 1);
                v20 = *(int*)((int)&gvar_20 + v0);
                __f59(*((int*)((int)&gvar_68 + v0) + 1), *(int*)((int)&gvar_78 + v0), *(int*)((int)&gvar_44 + v0), *(int*)((int)&gvar_50 + v0), v0 + &gvar_10);
                v21 = *(int*)(v0 + &gvar_1C);
                v22 = *(unsigned int*)((int)&gvar_18 + v0);
                v23 = *((int*)((int)&gvar_10 + v0) + 1);
                v24 = *(int*)((int)&gvar_10 + v0);
                __f59(*(int*)(v0 + 92), *(int*)((int)&gvar_68 + v0), *(int*)(v0 + 116), *(int*)((int)&gvar_40 + v0), v0);
                --param5;
                v25 = *((int*)((int)&gvar_8 + v0) + 1);
                v26 = *(int*)((int)&gvar_8 + v0);
                v27 = *(int*)(v0 + 4);
            }
            if((unsigned int)(param3 < 4) | (unsigned int)(param6 < 4)) {
                jump 0;
            }
            __f60(0x61707865, v16, param4, param1);
            if((unsigned int)(param3 < &gvar_8) | (unsigned int)(param6 < &gvar_8)) {
                jump 0;
            }
            __f60(857760878, v20, param4 + 4, param1 + 4);
            if((unsigned int)(param3 < 12) | (unsigned int)(param6 < 12)) {
                jump 0;
            }
            __f60(2036477234, v24, param4 + &gvar_8, param1 + &gvar_8);
            if((unsigned int)(param3 < &gvar_10) | (unsigned int)(param6 < &gvar_10)) {
                jump 0;
            }
            __f60(1797285236, i, param4 + 12, param1 + 12);
            if((unsigned int)(param3 < 20) | (unsigned int)(param6 < 20)) {
                jump 0;
            }
            __f60(v11, v27, param4 + &gvar_10, param1 + &gvar_10);
            if((unsigned int)(param3 < &gvar_18) | (unsigned int)(param6 < &gvar_18)) {
                jump 0;
            }
            __f60(v10, v15, param4 + 20, param1 + 20);
            if((unsigned int)(param3 < &gvar_1C) | (unsigned int)(param6 < &gvar_1C)) {
                jump 0;
            }
            __f60(v9, v19, param4 + &gvar_18, param1 + &gvar_18);
            if((unsigned int)(param3 < &gvar_20) | (unsigned int)(param6 < &gvar_20)) {
                jump 0;
            }
            __f60(v8, v23, param4 + &gvar_1C, param1 + &gvar_1C);
            if((unsigned int)(param3 < 36) | (unsigned int)(param6 < 36)) {
                jump 0;
            }
            __f60(v7, v22, param4 + &gvar_20, param1 + &gvar_20);
            if((unsigned int)(param3 < &gvar_28) | (unsigned int)(param6 < &gvar_28)) {
                jump 0;
            }
            __f60(v6, v26, param4 + 36, param1 + 36);
            if((unsigned int)(param3 < 44) | (unsigned int)(param6 < 44)) {
                jump 0;
            }
            __f60(v5, v14, param4 + &gvar_28, param1 + &gvar_28);
            if((unsigned int)(param3 < &gvar_30) | (unsigned int)(param6 < &gvar_30)) {
                jump 0;
            }
            __f60(v4, v18, param4 + 44, param1 + 44);
            if((unsigned int)(param3 < 52) | (unsigned int)(param6 < 52)) {
                jump 0;
            }
            __f60(*(int*)((int)&gvar_20 + (int)param0), v17, param4 + &gvar_30, param1 + &gvar_30);
            if((unsigned int)(param3 < &gvar_38) | (unsigned int)(param6 < &gvar_38)) {
                jump 0;
            }
            __f60(v3, v21, param4 + 52, param1 + 52);
            if((unsigned int)(param3 < 60) | (unsigned int)(param6 < 60)) {
                jump 0;
            }
            __f60(v2, v25, param4 + &gvar_38, param1 + &gvar_38);
            if((unsigned int)(param3 < &gvar_40) | (unsigned int)(param6 < &gvar_40)) {
                jump 0;
            }
            __f60(v1, v13, param4 + 60, param1 + 60);
            ++*(unsigned int*)((int)&gvar_20 + (int)param0);
            if((unsigned int)(param2 > param3) | (unsigned int)(param2 > param6)) {
                jump 0;
            }
            param3 -= &gvar_40;
            param1 += &gvar_40;
            param4 += &gvar_40;
            param2 -= &gvar_40;
            param6 -= &gvar_40;
        }
        __g0 = v0 + 0x100;
        return;
    }
    jump 0;
}
