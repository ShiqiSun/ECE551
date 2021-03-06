
#include<stdlib.h>
#include<stdio.h>

struct _retire_info{
  int months;
  double contribution;
  double rate_of_return;
};
  typedef struct  _retire_info retire_info;

 void retirement (int startAge,   //in months
                  double initial, //initial savings in dollars
                  retire_info working, //info about working
                   retire_info retired)
		  {
		    for(;working.months>0;working.months--)
		      {
			printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
			initial=initial*(1+working.rate_of_return)+working.contribution;
			startAge++;
		      }

		    for(;retired.months>0;retired.months--)
                      {
                        printf("Age %3d month %2d you have $%.2lf\n",startAge/12,startAge%12,initial);
                        initial=initial*(1+retired.rate_of_return)+retired.contribution;
                        startAge++;
                      }
		  }


int main(void)
{
  retire_info working={489,1000,0.045/12};
  retire_info retired={384,-4000,0.01/12};
  int startAge=327;
  double initial=21345;
  retirement(startAge,initial,working,retired);
  return 0;


}
	    


