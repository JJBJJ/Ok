void __f13(int param0) {
    int v0;
    int v1 = __g0 - &gvar_40;
    __g0 -= &gvar_40;
    *(long long*)(v1 + &gvar_38) = 0L;
    *(long long*)(v1 + &gvar_18) = *(long long*)&g10A04;
    *(long long*)(v1 + &gvar_20) = *(long long*)&g10A0C;
    *(long long*)(v1 + &gvar_28) = *(long long*)&g10A14;
    *(long long*)(v1 + &gvar_30) = 0L;
    *(unsigned long long*)(v1 + &gvar_8) = gvar_10008;
    *(unsigned long long*)v1 = gvar_10000;
    *(long long*)(v1 + &gvar_10) = *(long long*)&g109FC;
    __f14(v1, param0);
    *(long long*)&g10A14 = *(long long*)(param0 + &gvar_18);
    *(long long*)&g10A0C = *(long long*)(param0 + &gvar_10);
    *(long long*)&g10A04 = *(long long*)(param0 + &gvar_8);
    *(long long*)&g109FC = *(long long*)param0;
    while(v0 != 0x200) {
        __f14(v1, param0 + v0);
        v0 += &gvar_40;
    }
    __g0 = v1 + &gvar_40;
}
