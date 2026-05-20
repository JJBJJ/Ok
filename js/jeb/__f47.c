void __f47(int param0, int param1, int param2, int param3, int param4, int param5, int param6) {
    int v0;
    int v1;
    unsigned int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int v7;
    int v8;
    int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 17;
        int* ptr1 = *__g2;
        param0 = *ptr1;
        param1 = *(int*)(ptr1 + 1);
        param2 = *((int*)((int)&gvar_8 + (int)ptr1) + 1);
        param3 = *(int*)((int)&gvar_10 + (int)ptr1);
        param4 = *((int*)((int)&gvar_10 + (int)ptr1) + 1);
        param5 = *(unsigned int*)((int)&gvar_18 + (int)ptr1);
        param6 = *(ptr1 + 7);
        v8 = *(int*)((int)&gvar_20 + (int)ptr1);
        v7 = *((int*)((int)&gvar_20 + (int)ptr1) + 1);
        v6 = *(unsigned int*)((int)&gvar_28 + (int)ptr1);
        v5 = *(ptr1 + 11);
        v4 = *(unsigned int*)((int)&gvar_30 + (int)ptr1);
        v3 = *(int*)(ptr1 + 13);
        v2 = *(unsigned int*)((int*)((int)&gvar_38 + (int)ptr1) + 1);
        v1 = *(unsigned int*)((int)&gvar_40 + (int)ptr1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v8 = __g0 - 128;
        __g0 -= 128;
        __f72(param6, v8 + &gvar_68);
        v2 = *(unsigned int*)((int)&gvar_70 + v8);
        v6 = *((int*)((int)&gvar_68 + v8) + 1);
        v5 = *(int*)(v8 + 116);
        v4 = *(unsigned int*)((int)&gvar_78 + v8);
        v7 = *(int*)((int)&gvar_68 + v8);
        v1 = *(int*)(v8 + 124);
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        __f73(v4, v5, v6, v7, param6, param5);
        if(__g1 == 1) {
            goto loc_500035D6;
        }
    }
    param5 = __g1 ? param5: v8 + &gvar_58;
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
        j(v1, (long long)v4, v5, param4, param3, param1, param5);
        if(__g1 == 1) {
            goto loc_500035D6;
        }
    }
    if(__g1 == 0) {
        param5 = *(char*)((int)&gvar_60 + v8);
        v3 = *(int*)((int)&gvar_58 + v8);
        int v9 = __f22(&gvar_10);
        *(int*)((int)&gvar_8 + v9) = param2;
        *(int*)v9 = param1;
        int v10 = __f22(12);
        param6 = v10;
        *(unsigned int*)((int)&gvar_8 + v10) = v2;
        *(int*)(param6 + 4) = v6;
        *(int*)param6 = v7;
    }
    if(__g1 == 0 && param5) {
        goto loc_500034CE;
    }
    else if(__g1 == 0) {
        int v11 = __f45((long long)param1);
        param0 = (v11 & 0x6) != 6;
    }
    if(__g1 == 0 && param0) {
        goto loc_500034C6;
    }
    else if(__g1 == 0) {
        param0 = v8 + &gvar_48;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 2)) {
        __f38(param4, (long long)param3, param2, param1, param0);
        if(__g1 == 1) {
        loc_500035D6:
            **__g2 = ptr0;
            ++*__g2;
            ptr0 = *__g2;
            *ptr0 = param0;
            *(int*)(ptr0 + 1) = param1;
            *((int*)((int)&gvar_8 + (int)ptr0) + 1) = param2;
            *(int*)((int)&gvar_10 + (int)ptr0) = param3;
            *((int*)((int)&gvar_10 + (int)ptr0) + 1) = param4;
            *(unsigned int*)((int)&gvar_18 + (int)ptr0) = (unsigned int)param5;
            *(ptr0 + 7) = param6;
            *(unsigned long long*)((int)&gvar_20 + (int)ptr0) = (unsigned long long)v8 | ((unsigned long long)v7 << &gvar_20);
            *(unsigned int*)((int)&gvar_28 + (int)ptr0) = (unsigned int)v6;
            *(ptr0 + 11) = v5;
            *(unsigned int*)((int)&gvar_30 + (int)ptr0) = (unsigned int)v4;
            *(int*)(ptr0 + 13) = v3;
            *(unsigned int*)((int*)((int)&gvar_38 + (int)ptr0) + 1) = v2;
            *(unsigned int*)((int)&gvar_40 + (int)ptr0) = (unsigned int)v1;
            *__g2 += 17;
        }
    }
    if(__g1 != 0) {
        goto loc_500034C6;
    }
    int v12 = __f45(*(long long*)((int)&gvar_48 + v8));
    param6 = v12;
    if(v12 == 7) {
        param0 = v8 + &gvar_18;
        __f46(v3, (long long)(v8 + &gvar_18));
    loc_500034C6:
        if(__g1 == 0) {
            jump 0;
        }
    loc_500034CE:
        if(__g1 == 0) {
            __f46(v3, (long long)(v8 + &gvar_8));
            param1 = *(unsigned long long*)((int)&gvar_8 + v8);
            *(int*)((int)&gvar_8 + param0) = *(int*)((int)&gvar_10 + v8);
            *(int*)param0 = param1;
            __g0 = v8 + 128;
            return;
        }
    }
    if(__g1 == 0) {
        __f54(param4, param3, 33, "ObjectAsia/Shanghai", v8 + &gvar_40);
        __f54(&gvar_18, "ObjectAsia/Shanghai", *(int*)((int)&gvar_44 + v8), *(int*)((int)&gvar_40 + v8), v8 + &gvar_38);
        param0 = v8 + &gvar_30;
        param3 = 9;
        param2 = "ObjectAsia/Shanghai";
        switch(param6) {
            case 0: {
                break;
            }
            case 1: {
                param3 = 4;
                param2 = "ObjectAsia/Shanghai";
                break;
            }
            case 2: {
                param3 = 7;
                param2 = "ObjectAsia/Shanghai";
                break;
            }
            case 3: 
            case 4: 
            case 5: {
                param3 = 6;
                param2 = "ObjectAsia/Shanghai";
                break;
            }
            default: {
                param3 = 6;
                param2 = "ObjectAsia/Shanghai";
            }
        }
        *(int*)param0 = param2;
        *(int*)(param0 + 4) = param3;
        __f54(*(int*)(v8 + 52), *(int*)((int)&gvar_30 + v8), *((int*)((int)&gvar_38 + v8) + 1), *(int*)((int)&gvar_38 + v8), v8 + &gvar_28);
        jump 0;
    }
}
