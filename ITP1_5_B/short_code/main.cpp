#include <iostream>
#define C std::cout<<
main() {
    int H,W,i,j;
    while(std::cin>>H>>W&&H){
        for(i=0;i<H;i++,C"#\n")for(j=0;j<W-1;)C(i*(i+1-H)*j++?".":"#");
        C"\n";
    }
}
