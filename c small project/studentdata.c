#include <stdio.h>
#include <string.h>
int highestMathscore(
    char s1name[20],
    int s1age,
    int s1mathMark,
    int s1engMark,
    char s1branch[10],
    char s2name[20],
    int s2age,
    int s2mathMark,
    int s2engMark,
    char s2branch[10],
    ){
    int s1totalmark = s1engMark +s1mathMark;
    int s2totalmark = s2engMark +s2mathMark;
    if(s1totalmark<s2totalmark){
        
    }
   
}

struct studentData
{
    char name[20];
    int age;
    int mathMark;
    int engMark;
    char branch[10];
};

int main(){
    struct studentData s1 = {"Rohan",19,67,50,"cm"};
    struct studentData s2 = {"Rakesh",18,69,590,"mm"};
    struct studentData s3 = {"Rajesh",20,77,52,"eg"};
    struct studentData s4 = {"Rohan",17,37,90,"cm"};
    highestMathscore(s1.name,s1.age,s1.mathMark,s1.engMark,s1.branch,
                    s2.name,s2.age,s2.mathMark,s2.engMark,s2.branch);
    
}
