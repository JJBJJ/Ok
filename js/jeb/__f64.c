void __f64(int param0, int param1, int param2) {
    int v0 = __g0 - &gvar_10;
    __g0 -= &gvar_10;
    __f62(param0);
    if(param0) {
        __f53(param2, *((int*)((int)&gvar_8 + param0) + 1), *(int*)((int)&gvar_8 + param0), param1, *(int*)(param0 + 4), v0);
        param1 = *(int*)((int)&gvar_8 + v0);
        *(long long*)(param0 + 4) = *(long long*)v0;
        *((int*)((int)&gvar_8 + param0) + 1) = param1;
        __g0 = v0 + &gvar_10;
        return;
    }
    jump 0;
}
