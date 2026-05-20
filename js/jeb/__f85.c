void __f85(int* param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    unsigned int* ptr0;
    if(__g1 == 2) {
        *__g2 -= 9;
        unsigned int* ptr1 = *__g2;
        param0 = *ptr1;
        v6 = *(int*)(ptr1 + 1);
        v5 = *(int*)((int)&gvar_8 + (int)ptr1);
        v4 = *(int*)((unsigned int*)((int)&gvar_8 + (int)ptr1) + 1);
        v3 = *(unsigned long long*)((int)&gvar_10 + (int)ptr1);
        v2 = *(int*)((int)&gvar_18 + (int)ptr1);
        v1 = *(int*)((int)&gvar_20 + (int)ptr1);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v6 = __g0 - 144;
        __g0 -= 144;
        v5 = v6 + &gvar_70;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        __f38(6, "ObjectAsia/Shanghai", 0, 5, v5);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if(__g1 == 0) {
        v3 = *(int*)((int)&gvar_70 + v6);
        v4 = *(unsigned int*)((int)&gvar_78 + v6);
        v5 = v6 + &gvar_60;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
        __f71(0, 0, v4, v3, v5);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if(__g1 == 0) {
        v3 = *(int*)((int)&gvar_60 + v6);
        v5 = *(int*)((int)&gvar_68 + v6);
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 2)) {
        __f42(67320, 66676, &gvar_8, "timeZonezh-CN", v5, v3);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 3)) {
        __f42(67128, 66676, 4, 0x10640, v5, v3);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 4)) {
        __f42(0x10650, 66676, 5, 0x10644, v5, v3);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 5)) {
        __f42(0x10650, 66676, 3, "daytoLocaleDateString-!~!@#$~*/&*^*&*#$&*$£¡@$/*@#&*$/^£¡@#^$<#$&@#*^&£¡@#$!.$#&^*^&>#£¡@#$/*&!&@*^~£¡@#/$#@*&&*@#@#£¡@#:$/~#@*&&*@$ObjectAsia/Shanghai", v5, v3);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    v4 = __g1 ? v4: v6 + &gvar_50;
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 6)) {
        __f38(4, "ObjectAsia/Shanghai", 0, 5, v4);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if(__g1 == 0) {
        v2 = *(int*)((int)&gvar_50 + v6);
        v1 = *(unsigned int*)((int)&gvar_58 + v6);
        v4 = v6 + &gvar_40;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 7)) {
        __f71(0, 0, v1, v2, v4);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if(__g1 == 0) {
        *(int*)(v6 + 132) = 67344;
        *(int*)(v6 + 128) = 66676;
        v1 = *(unsigned int*)((int)&gvar_48 + v6);
        v2 = *(int*)((int)&gvar_40 + v6);
        int v7 = __f22(&gvar_10);
        *(int*)((int)&gvar_8 + v7) = v5;
        *(int*)v7 = v3;
        *(int*)(v6 + 140) = v7;
        *(int*)(v6 + 0x88) = 67428;
        v4 = v6 + 128;
        v5 = v6 + &gvar_30;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == &gvar_8)) {
        __f47(2, (long long)v4, 18, "ObjectAsia/Shanghai", v1, v2, v5);
        if(__g1 == 1) {
            goto loc_50008EAC;
        }
    }
    if(__g1 == 0) {
        v3 = *(int*)((int)&gvar_30 + v6);
        v4 = *(int*)((int)&gvar_38 + v6);
        v5 = v6 + &gvar_28;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 9)) {
        __f68(v4, (long long)v3, v5);
        if(__g1 == 1) {
        loc_50008EAC:
            **__g2 = ptr0;
            ++*__g2;
            ptr0 = *__g2;
            *ptr0 = param0;
            *(int*)(ptr0 + 1) = v6;
            *(unsigned long long*)((int)&gvar_8 + (int)ptr0) = (unsigned long long)v5 | ((unsigned long long)v4 << &gvar_20);
            *(unsigned long long*)((int)&gvar_10 + (int)ptr0) = (unsigned long long)v3;
            *(int*)((int)&gvar_18 + (int)ptr0) = v2;
            *(int*)((int)&gvar_20 + (int)ptr0) = v1;
            *__g2 += 9;
        }
    }
    if(__g1 == 0) {
        v5 = *(int*)(v6 + 44);
        if((unsigned int)*(int*)(v6 + 44) >= 4) {
            v4 = *(unsigned int*)((int)&gvar_28 + v6);
            __f54(1, "ObjectAsia/Shanghai", 4, (int)*(unsigned int*)((int)&gvar_28 + v6), v6 + &gvar_20);
            if((unsigned int)v5 >= 7) {
                __f54(2, v4 + 5, *((int*)((int)&gvar_20 + v6) + 1), *(int*)((int)&gvar_20 + v6), v6 + &gvar_18);
                __f54(1, "ObjectAsia/Shanghai", *(int*)(v6 + &gvar_1C), *(int*)((int)&gvar_18 + v6), v6 + &gvar_10);
                if((unsigned int)v5 >= 10) {
                    __f54(2, v4 + &gvar_8, *((int*)((int)&gvar_10 + v6) + 1), *(int*)((int)&gvar_10 + v6), v6 + &gvar_8);
                    v5 = *((int*)((int)&gvar_8 + v6) + 1);
                    *param0 = *(int*)((int)&gvar_8 + v6);
                    *(param0 + 1) = v5;
                    __g0 = v6 + 144;
                    return;
                }
            }
        }
        jump 0;
    }
}
