void __f56(int* param0, int* param1) {
    int v0;
    int v1;
    int v2;
    int v3 = __g0 - &gvar_20;
    __g0 -= &gvar_20;
    while(v1 != 12) {
        __f57(*(int*)((int)param1 + v1), v3 + &gvar_10);
        v1 += 4;
        v0 += *((int*)((int)&gvar_10 + v3) + 1);
    }
    int v4 = __f22(v0);
    int v5 = -1;
    do {
        int v6 = v5 + 1;
        ++v5;
        __f57(*(int*)(v6 * 4 + (int)param1), v3 + &gvar_8);
        *(int*)(v3 + &gvar_1C) = *(int*)((int)&gvar_8 + v3);
        char* ptr0 = (char*)(v4 + v2);
        int v7 = *((int*)((int)&gvar_8 + v3) + 1);
        v1 = *((int*)((int)&gvar_8 + v3) + 1);
        int v8 = v1 > 0 ? v7: 0;
        v2 += v1 > 0 ? v7: 0;
        char* ptr1 = (char*)(v3 + &gvar_1C);
        while(v8 != 0) {
            if(v1 != 0) {
                *ptr0 = *ptr1;
                ++ptr1;
                --v8;
                --v1;
                ++ptr0;
                continue;
            }
            jump 0;
        }
    }
    while(v5 != 2);
    *(param0 + 1) = v0;
    *param0 = v4;
    __g0 = v3 + &gvar_20;
}
