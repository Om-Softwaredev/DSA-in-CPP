// https://www.interviewbit.com/problems/is-rectangle/
int Solution::solve(int A, int B, int C, int D) {
    if((A==B) && (C==D) ||(A==C)&&(B==D)||(A==D)&&(C==B))
        return 1;
    else
        return 0;
}
