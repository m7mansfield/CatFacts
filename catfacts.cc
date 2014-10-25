using namespace std;

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <ctime>

class Cat
{
  public:
    void send_fact();
    void import_facts();
  private:
  	string facts[80];
};

int main()
{
  system("echo 'Welcome to CatFacts! You will be recieving facts about cats every hour!' | mail @txt.att.net");
  Cat cat1;
  cat1.import_facts();
  time_t now = time(0);
  tm *ltm = localtime(&now);
  int init_hour = ltm->tm_hour;
  int counter = 0;
  
  switch(init_hour)
  {
  	case 0:
  		counter = 7;
  		break;
  	case 1:
  		counter = 7;
  		break;
  	case 2:
  		counter = 7;
  		break;
  	case 3:
  		counter = 7;
  		break;
  	case 4:
  		counter = 7;
  		break;
  	case 5:
  		counter = 7;
  		break;
  	case 6:
  		counter = 7;
  		break;
  	case 7:
  		counter = 8;
  		break;
  	case 8:
  		counter = 9;
  		break;
  	case 9:
  		counter = 10;
  		break;
  	case 10:
  		counter = 11;
  		break;
  	case 11:
  		counter = 12;
  		break;
  	case 12:
  		counter = 13;
  		break;
  	case 13:
  		counter = 14;
  		break;
  	case 14:
  		counter = 15;
  		break;
  	case 15:
  		counter = 16;
  		break;
  	case 16:
  		counter = 17;
  		break;
  	case 17:
  		counter = 18;
  		break;
  	case 18:
  		counter = 19;
  		break;
  	case 19:
  		counter = 20;
  		break;
  	case 20:
  		counter = 21;
  		break;
  	case 21:
  		counter = 22;
  		break;
  	case 22:
  		counter = 23;
  		break;
  	case 23:
  		counter = 7;
  }
  
  while (true)
  {
    time_t now = time(0);
  	tm *ltm = localtime(&now);
  	double time = ((ltm->tm_hour) + ((ltm->tm_min) / 60.0) + (((ltm->tm_sec) / 60.0) /60.0));
  
    if(time == 7 && counter == 7)
    {
    	cat1.send_fact();
    	counter = 8;
    }
    else if(time == 8 && counter == 8)
    {
    	cat1.send_fact();
    	counter = 9;
    }
    else if(time == 9 && counter == 9)
    {
    	cat1.send_fact();
    	counter = 10;
    }
    else if(time == 10 && counter == 10)
    {
    	cat1.send_fact();
    	counter = 11;
    }
    else if(time == 11 && counter == 11)
    {
    	cat1.send_fact();
    	counter = 12;
    }
    else if(time == 12 && counter == 12)
    {
    	cat1.send_fact();
    	counter = 13;
    }
    else if(time == 13 && counter == 13)
    {
    	cat1.send_fact();
    	counter = 14;
    }
    else if(time == 14 && counter == 14)
    {
    	cat1.send_fact();
    	counter = 15;
    }
    else if(time == 15 && counter == 15)
    {
    	cat1.send_fact();
    	counter = 16;
    }
    else if(time == 16 && counter == 16)
    {
    	cat1.send_fact();
    	counter = 17;
    }
    else if(time == 17 && counter == 17)
    {
    	cat1.send_fact();
    	counter = 18;
    }
    else if(time == 18 && counter == 18)
    {
    	cat1.send_fact();
    	counter = 19;
    }
    else if(time == 19 && counter == 19)
    {
    	cat1.send_fact();
    	counter = 20;
    }
    else if(time == 20 && counter == 20)
    {
    	cat1.send_fact();
    	counter = 21;
    }
    else if(time == 21 && counter == 21)
    {
    	cat1.send_fact();
    	counter = 22;
    }
    else if(time == 22 && counter == 22)
    {
    	cat1.send_fact();
    	counter = 23;
    }
    else if(time == 23 && counter == 23)
    {
    	cat1.send_fact();
    	counter = 7;
    }
  }
}

void Cat::import_facts()
{
  int index = 0;
  ifstream fin("CatFacts.dat");
  while (fin)
  {
  	getline(fin, facts[index]);
  	index++;
  }
  fin.close();
}

void Cat::send_fact()
{
  srand (time(NULL));
  int index = rand() % 67;
  string command = "echo '' | mail @txt.att.net";
  string random_fact = facts[index];
  command.insert(7, random_fact);
  system(command.c_str());
}
