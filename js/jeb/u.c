void u() {
    int v0;
    int v1;
    int v2;
    int v3 = (int)(__g1 == 0);
    if(__g1 == 2) {
        --*__g2;
        v2 = **__g2;
    }
    else {
        v2 = 0;
    }
    if((unsigned int)(v2 == 0) | v3) {
        if(__g1 == 2) {
            --*__g2;
            v1 = **__g2;
        }
        if(__g1 == 2) {
            --*__g2;
            v0 = **__g2;
        }
        if(__g1 == 0) {
            *(int*)&g10C28 = 69232;
            v1 = 0x640000;
            *(int*)&g10C24 = 0x640000;
        }
        if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
            v3 = __f15();
            if(__g1 == 1) {
                v3 = 0;
                **__g2 = v3;
                ++*__g2;
                **__g2 = v1;
                ++*__g2;
            }
            else {
                v1 = v3;
                goto loc_50009569;
            }
        }
        else {
        loc_50009569:
            if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 1)) {
                __f15();
                v3 = 1;
                if(__g1 == 1) {
                    **__g2 = v3;
                    ++*__g2;
                    **__g2 = v1;
                    ++*__g2;
                    goto loc_500095CC;
                }
            }
            if(__g1 == 0) {
                gvar_10808 = (unsigned int)(v1 | 0x1);
                __f21(2);
                __f35();
            }
        }
    loc_500095CC:
        if(__g1 == 1) {
            **__g2 = 0;
            ++*__g2;
        }
    }
}
