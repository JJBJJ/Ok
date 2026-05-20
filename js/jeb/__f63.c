void __f63(unsigned int* param0, unsigned int* param1) {
    if(param1 != 0) {
        int* ptr0 = *(unsigned int*)((int)&gvar_8 + (int)param1);
        if((int)ptr0 >= 0) {
            unsigned int* ptr1 = *(param1 + 1);
            if(!((unsigned int)(ptr1 == 0) & (unsigned int)(ptr0 != 0))) {
                *(param0 + 1) = ptr0;
                *param0 = ptr1;
                return;
            }
        }
    }
    jump 0;
}
