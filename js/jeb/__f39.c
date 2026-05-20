void __f39(unsigned int* param0, int* param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3 = __g0 - &gvar_20;
    __g0 -= &gvar_20;
    int v4 = param2 > 0 ? param2: 0;
    while(v4) {
        if(param2 != 0) {
            int v5 = *param1;
            *(char*)(v3 + 31) = v5 <= 58 ? aRM_cQiwGaXbeYFs[v5]: '?';
            __f53(1, v0, v1, v3 + 31, v2, v3 + &gvar_10);
            ++param1;
            --v4;
            --param2;
            v0 = *(unsigned int*)((int)&gvar_18 + v3);
            v1 = *((int*)((int)&gvar_10 + v3) + 1);
            v2 = *(int*)((int)&gvar_10 + v3);
            continue;
        }
        jump 0;
    }
    __f55(v1, v2, v3 + &gvar_8);
    param1 = *((unsigned int*)((int)&gvar_8 + v3) + 1);
    *param0 = *(unsigned int*)((int)&gvar_8 + v3);
    *(param0 + 1) = param1;
    __g0 = v3 + &gvar_20;
}
