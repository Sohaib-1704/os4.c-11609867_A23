void release_pid(int pid)
 {
    if (pid < 100) {
        printf("\nInvalid PID: It should lie between 100 and 1000.");
        return;
    }
    int i = pid - min_pid;
    b[i/cb] &= ~(1 << (i & (cb-1)));
}