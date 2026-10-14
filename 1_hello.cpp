#include <iostream>

/*int main() {
   int a,b;
   std::cout<<"1 удар:\n";
   std::cin>>a;
   std::cout<<"2 удар:\n ";

   std::cin>>b;
   std::cout<<"суммарный урон:\n"<<(a + b);
    
  
    return 0;
}*/

/*int main(){
int n,k;
std::cout<<"кол-во кусков: \n";
std::cin>>n;
std::cout<<"кол-во друзей: \n";
std::cin>>k;
std::cout<<"получат: \n"<<n/k<<std::endl;
std::cout<<"останется: \n"<<n % k<<std::endl;



    return 0;
}*/
/*int main() {
int t1,t2,t3; 
std::cout<<"температура в понедельник: ";
std::cin>>t1;
std::cout<<"температура во вторник: ";
std::cin>>t2;
std::cout<<"температура в среду : ";
std::cin>>t3;
if (t1 > t2 && t1 > t3){
    std::cout<<"понедельник \n"<<t1<<std::endl;
}
if (t2 > t1  && t2 > t3){
std::cout<<"вторник \n"<<t2<<std::endl;
}
if (t3 > t2 && t3 > t1){
    std::cout<<"среда \n"<<t3<<std::endl;
}
    else{ 
        std::cout<<"понедельник"<<t1;
    

    }



        return 0;
}*/


/*int main(){
int s,p,t;
std::cout<<"первоначально денег:";
std::cin>>s;
std::cout<<"проценты в рублях:";
std::cin>>p;
std::cout<<"какая то сумма:";
std::cin>>t;
int u = 1;
while (s <= t){
    s = s + s*p/100;
    // std::cout<<s << "\n";
u = u + 1;
}


std::cout<<u << "\n";
    return 0;
}
*/

int main (){
int t;
std::cout<<"кол во секунд: ";
std::cin>>t;
std::cout<<t/3600<<"::"<<(t%3600)/60<<"::"<<t%60;





    return 0;
}