void x(unsigned int* param0) {
    __g1 = 2;
    __g2 = param0;
    if(*(param0 + 1) < *param0) {
        jump 0;
    }
}
