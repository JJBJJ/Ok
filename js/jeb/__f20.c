void __f20(int* param0) {
    unsigned int* ptr0 = *(unsigned int**)&g10C44;
    if(ptr0) {
        *ptr0 = param0;
    }
    *(int**)&g10C44 = param0;
    if(param0) {
        *param0 = 0;
        if(*(int*)&g10C40 == 0) {
            *(int**)&g10C40 = param0;
        }
        return;
    }
    jump 0;
}
