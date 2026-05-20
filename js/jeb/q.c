int q(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    if(__g1 == 2) {
        *__g2 -= 2;
        int* ptr0 = *__g2;
        param0 = *ptr0;
        param1 = *(ptr0 + 1);
    }
    int v5 = (unsigned int)(__g1 == 0);
    if(__g1 == 2) {
        --*__g2;
        v2 = **__g2;
    }
    else {
        v2 = 0;
    }
    if((unsigned int)(v2 == 0) | v5) {
        int v6 = param0;
        int v7 = param1;
        if(__g1 == 2) {
            *__g2 -= 2;
            int* ptr1 = *__g2;
            v6 = *ptr1;
            v7 = *(ptr1 + 1);
        }
        v6 = __g1 ? v6: v6 * v7;
        int v8 = (unsigned int)(__g1 == 0);
        if(__g1 == 2) {
            --*__g2;
            v1 = **__g2;
        }
        else {
            v1 = 0;
        }
        if((unsigned int)(v1 == 0) | v8) {
            __f29(v6);
            if(__g1 == 1) {
                **__g2 = v3;
                ++*__g2;
                int* ptr2 = *__g2;
                *ptr2 = v6;
                *(ptr2 + 1) = v7;
                *__g2 += 2;
                v0 = 0;
            }
            else {
                goto loc_50009178;
            }
        }
        else {
        loc_50009178:
            if(__g1 != 0) {
                jump 0;
            }
        }
        if(__g1 == 1) {
            **__g2 = v4;
            ++*__g2;
            int* ptr3 = *__g2;
            *ptr3 = param0;
            *(ptr3 + 1) = param1;
            *__g2 += 2;
            return 0;
        }
        param0 = v0;
    }
    if(__g1 == 0) {
        return param0;
    }
    jump 0;
}
