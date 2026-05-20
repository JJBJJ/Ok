void __f30(int param0, int param1, int param2) {
    int v0;
    int v1;
    if(__g1 == 2) {
        *__g2 -= 4;
        int* ptr0 = *__g2;
        param0 = *ptr0;
        param1 = *(ptr0 + 1);
        param2 = *(ptr0 + 2);
        v1 = *(ptr0 + 3);
    }
    if(__g1 == 2) {
        --*__g2;
        v0 = **__g2;
    }
    if(__g1 == 0) {
        if(param0 == 0) {
            jump 0;
        }
        int v2 = __f28(param0, *(int*)(param0 + 4), *(int*)(param0 + 12), param1);
        v1 = v2;
    }
    if((unsigned int)(__g1 == 0) | (unsigned int)(v0 == 0)) {
        __f50(v1, param2, param1, param0);
        if(__g1 == 1) {
            **__g2 = 0;
            ++*__g2;
            int* ptr1 = *__g2;
            *ptr1 = param0;
            *(ptr1 + 1) = param1;
            *(ptr1 + 2) = param2;
            *(ptr1 + 3) = v1;
            *__g2 += 4;
        }
    }
}
