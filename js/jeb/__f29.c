int __f29(int param0) {
    int v0;
    int result;
    int v1;
    int v2;
    if(__g1 == 2) {
        *__g2 -= 3;
        int* ptr0 = *__g2;
        param0 = *ptr0;
        v1 = *(ptr0 + 1);
        result = *(ptr0 + 2);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        v1 = __g0 - &gvar_10;
        __g0 -= &gvar_10;
    }
    if(__g1 != 0) {
    loc_50001708:
        if(__g1 != 0) {
        loc_5000173F:
            if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
                __f30(v1, param0, 0x1080c);
                if(__g1 == 1) {
                    **__g2 = v2;
                    ++*__g2;
                    int* ptr1 = *__g2;
                    *ptr1 = param0;
                    *(ptr1 + 1) = v1;
                    *(ptr1 + 2) = result;
                    *__g2 += 3;
                    return 0;
                }
            }
            if(__g1 != 0) {
            loc_5000175F:
                if(__g1 == 0) {
                    jump 0;
                }
            }
        }
        else if(result) {
            goto loc_5000175F;
        }
        else {
            result = __f22(param0);
            *(int*)(v1 + &gvar_8) = param0;
            *(int*)(v1 + 4) = param0;
            *(int*)v1 = result;
            *(int*)(v1 + 12) = result;
            param0 = v1 + 12;
            goto loc_5000173F;
        }
    }
    else if(param0 == 0) {
        result = 0;
    }
    else {
        result = param0 < 0;
        goto loc_50001708;
    }
    if(__g1 == 0) {
        __g0 = v1 + &gvar_10;
        return result;
    }
    jump 0;
}
