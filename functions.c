#include "headers.h"

void welcome()
{
	printf("-------------------------------------------------------------------------------------------------\n");
	printf("|                       !!!WELCOME TO THE @ COMMAND LINE INTERFACE!!!                           |\n");
	printf("|This is a command line interface program designed by Dhruva Kashyap, Subodh K J, S Nikhil Ram  |\n");
	printf("|This was designed in C                                                                         |\n");
	printf("|Type help to display a manual for the interface                                                |\n");
	printf("-------------------------------------------------------------------------------------------------%c\n",' ');
	fflush(stdout);	
};

void help(char* args)
{
	if(strcmp(args,"help")==0)
		printf("help\n\tThis command gives the instructions for other commands and shows this help\n");
	else if(strcmp(args,"say")==0)
		printf("say\n\tThis command behave like echo from the bash shell, it prints out the string t\n");
	else if(strcmp(args,"exit")==0)
		printf("exit\n\tThis command exits the @ interface and enters the GNU+LinuxBash SHELL\n");
	else if(strcmp(args,"GOT")==0)
		printf("Winter is coming\n");
	else if(strcmp(args,"goto")==0)
		printf("goto [dir]\n\tMoves the directory of this process to dir\n");
	else if(strcmp(args,"show")==0)
		printf("show [filename]\n\tDisplays the content of a file created through file command\n");
	else if(strcmp(args,"pigsay")==0)
		printf("You should be able to figure this out yourself you idiot.\n");
	else if(strcmp(args,"dragonsay")==0)
		printf("You should be able to figure this out yourself you idiot.\n");
	else if(strcmp(args,"calc")==0)
		printf("calc [expression]\n\tEvaluates arithmetic expression considering prescendence\n");
	else if(strcmp(args,"time")==0)
		printf("time [optional parameters]\n\tReturns time\n\t Optional parameters\n\t\tnow:returns current time\n\t\ttoday:returns date\n\t\tday_quotes:returns a thought for the day\n\t\ttime:returns time and time of the day\n");
	else if(strcmp(args,"list")==0)
		printf("list [all]\n\tlists the files and directories in the current working directory of the process\n\t\tOptional parameter:all\n\t\t\tAlso displays hidden files\n");
	else if(strcmp(args,"file")==0)
		printf("file [filename] [input text]\n\tCreates the file with name as filename and enters text input text to it\n");
	else if(strcmp(args,"whereami")==0)
		printf("whereami\n\tReturns the current working directory of the process\n");
	else if(strcmp(args,"clean")==0)
		printf("clean\n\tClears previous text\n");
	else if(strcmp(args,"play")==0)
		printf("play\n\tPlay a fun game!!\n");

	else if(strcmp(args,"")==0)
	{
		printf("The following commands are available:\n");
		printf("goto [dir]\n\tMoves the directory of this process to dir\n");
		printf("show [filename]\n\tDisplays the content of a file created through file command\n");
		printf("pigsay [text]\n\tEntertaining way to use say command\n");
		printf("dragonsay [text]\n\tPigsay but you burn people\n");
		printf("calc [expression]\n\tEvaluates arithmetic expression considering prescendence\n");
		printf("time [optional parameters]\n\tReturns time\n\t Optional parameters\n\t\tnow:returns current time\n\t\ttoday:returns date\n\t\tday_quotes:returns a thought for the day\n\t\ttime:returns time and time of the day\n");
		printf("list [all]\n\tlists the files and directories in the current working directory of the process\n\t\tOptional parameter:all\n\t\t\tAlso displays hidden files\n");
		printf("file [filename] [input text]\n\tCreates the file with name as filename and enters text input text to it\n");
		printf("help [command]\n\tThis command gives the instructions for other commands and shows this help\n");
		printf("say [command]\n\tThis command behave like echo from the bash shell, it prints out the string \n\toptional argument: myname\n\t\treturns name of system\n");
		printf("clean\n\tClears previous text\n");
		printf("play\n\tPlay a fun game!!\n");
		printf("whereami\n\tReturns the current working directory of the process\n");
		printf("exit\n\tThis command exits the @ interface and enters the GNU+LinuxBash SHELL\n");
	}
	else
	{
		printf("No command %s exists. Sorry for the disappointment\n",args);
	}
};

void say(char* args)
{
	if(strcmp(args,"myname")==0)
	{
		char uname[10]="";
		getlogin_r(uname,sizeof(uname));
		printf("%s\n",uname);
		if(strcmp(uname,"heisenberg")==0)
			printf("You're goddamn right\n");
	}
	else
		printf("%s\n",args);
};

void pigsay(char* A)
{
	printf("                                     \n");
	printf("                                     	  |%s|\n",A);
	printf("                                     	  /	\n");
	printf("                  XXXXXXXXXXXXXXX        /         \n");
	printf("               XXX               XXX    /              \n");
	printf("            XXX     _         _     XXX \n");
	printf("            XXX    IOI       I0I    XXX \n");
	printf("            XXX                     XXX \n");
	printf("            XXX        OOOOO        XXX \n");
	printf("            XXX       0000000       XXX \n");
	printf("               XXX               XXX    \n");
	printf("                  XXXXXXXXXXXXXXX                   \n");
	
};

void dragonsay(char* A)
{
	int i;
	for(i=0;i<(strlen(A)+4);i++)
		printf("_");
	printf("\n");
	printf("< %s >\n",A);
	for(i=0;i<(strlen(A)+4);i++)
		printf("-");
	printf("\n");
	printf("      \\                    / \\  //\\\n");
	printf("       \\    |\\___/|      /   \\//  \\\n");
	printf("            /0  0  \\__  /    //  | \\ \\ \n");   
	printf("           /     /  \\/_/    //   |  \\  \\  \n");
	printf("           @_^_@'/   \\/_   //    |   \\   \\ \n");
	printf("           //_^_/     \\/_ //     |    \\    \\\n");
	printf("        ( //) |        \\///      |     \\     \\\n");
	printf("      ( / /) _|_ /   )  //       |      \\     _\\\n");
	printf("    ( // /) '/,_ _ _/  ( ; -.    |    _ _\\.-~        .-~~~^-.\n");
	printf("  (( / / )) ,-{        _      `-.|.-~-.           .~         `.\n");
	printf(" (( // / ))  '/\\      /                 ~-. _ .-~      .-~^-.  \\\n");
	printf(" (( /// ))      `.   {            }                   /      \\  \\\n");
	printf("  (( / ))     .----~-.\\        \\-'                 .~         \\  `. \\^-.\n");
	printf("             ///.----..>        \\             _ -~             `.  ^-`  ^-_\n");
	printf(" (._.)<aah!> ///-._ _ _ _ _ _ _}^ - - - - ~                     ~-- ,.-~\n");
	printf("\\  | /                                                             /.-~\n");
	printf("   |  \n");
	printf("  / \\ \n");
	printf("\n");
};

void printcwd()
{
	char cwd[1024]="";
	getcwd(cwd,sizeof(cwd));
	printf("%s\n",cwd);
};

void list(char *a)
{
    DIR *d;
    struct dirent *dir;
    char Path[100];
    getcwd(Path,sizeof(Path));
    d = opendir(Path);
    printf("\n\n");
    if(d)
    {
        while ((dir = readdir(d)) != NULL)
        {
        	if(dir->d_name[0]!='.' || strcmp(a,"all")==0)
            	printf("%s\n", dir->d_name);
        }
        closedir(d);
    }
    printf("\n\n");
};

void file(char *A)
{
	FILE *fp;
	char filename[20];
	char text[100];
	char c;
	int i,j;
	for(i=0;A[i]!=' ' && A[i]!='\0';i++)
		filename[i]=A[i];
	i++;
	fp=fopen(filename,"w+");
	if(fp)
	{
		if(i<strlen(A))
		{
			for(j=0;A[i]!='\0';i++,j++)
				text[j]=A[i];
			text[j]='\0';
			fprintf(fp,"%s",text);
			fprintf(fp,"%c",EOF);
		}
		else
			fprintf(fp,"%c",EOF);
	}
	else
	{
		printf("Invalid file, no permissions authorized\n");
	}
	fclose(fp);
};

void show(char *A)
{
	FILE *fp;
	char c='a';
	fp=fopen(A,"r");
	if(fp)
	{
		while(c!=EOF && c!='\0')
		{
			fscanf(fp,"%c",&c);
			if(c!=EOF)
				printf("%c",c);
		}
		printf("\n");
		fclose(fp);
	}
	else
	{
		printf("File does not exist\n");
	}
};

void changedir(char *Path)
{
	int chk;
	chk=chdir(Path);
	if(chk)
		printf("Error in changing path\n");
};

int power(int x,int y)
{
	int z=1,i;
	if(y==0)
		return(1);
	if(y>=0)
	{
		for(i=1;i<=y;i++)
		{
			z=z*x;
		}
		return(z);
	}
};

void strpop(char* s,int loc)
{
	int len,i;
	len=(int)strlen(s);
	for(i=loc;i<=len;i++)
	{
		s[i]=s[i+1];
	}

};

void strins(char* s,int loc,char ele)
{
	int len,i;
	len=(int)strlen(s);
	for(i=len+1;i>=loc;i--)
	{
		s[i+1]=s[i];
	}
	i++;
	s[i]=ele;
};

int modify(char* s,int loc)
{
	char sym;
	int a=0,b=0,cnt1=0,cnt2=0,i,ans,flag=0;
	char ele;
	int zero=0;
	sym=s[loc];
	//left check
	i=loc-1;
	while((int)(s[i])<=(int)('9') && (int)(s[i])>=(int)('0') && i>=0)
	{
		a=a + ((int)(s[i])-(int)('0'))*power(10,cnt1);
		cnt1++;
		i--;
	}
	
	if(s[i]=='-' && i==0)
	{
		a=-a;
		cnt1++;
	}
	//printf("a= %d\n",a);
	//right check
	
	if(s[loc+1]=='-')
		i=loc+2;
	else 
		i=loc+1;
	
	while((int)(s[i])<=(int)('9') && (int)(s[i])>=(int)('0') && i>=0)
	{
		b=b*10+ (int)s[i] - (int)('0');
		cnt2++;
		i++;
	}
	//printf("b= %d\n",b);
	if(s[loc+1]=='-')
	{
		b=-b;
		cnt2++;
	}
	//printf("b= %d\n",b);
	//calculating answer
	if(sym=='/')
	{
		if(b!=0)
			ans=(int)(a/b);
		else
		{
				ans=0;
				zero=1;
		}
	}
	else if(sym=='*')
	{
		ans=(int)(a*b);
	}
	else if(sym=='+')
	{
		ans=(int)(a+b);
	}
	else if(sym=='-')
	{
		ans=(int)(a-b);
	}
	if (sym=='/' || sym=='*')
	{
		if(s[loc-cnt1-1]=='-' && (a<=0 || b<=0))
			ans=-ans;
	}
	//popping string
	for(i=0;i<(cnt2+cnt1+1);i++)
	{
		strpop(s,loc-cnt1);
	}
	//inserting string
	//printf("ans= %d\n",ans);
	if(ans<0)
	{
		ans=-ans;
		flag=1;
	}
	//printf("ans2= %d\n",ans);
	while((int)(ans/10)>0)
	{
		ele=(char)((int)(ans%10)+(int)('0'));
		ans=(int)ans/10;
		strins(s,loc-cnt1,ele);
	}
	if(zero==0)
	{
	ele=(char)((int)(ans%10)+(int)('0'));
	ans=(int)ans/10;
	strins(s,loc-cnt1,ele);
	if(flag==1)
		strins(s,loc-cnt1,'-');
	return 0;
	}
	else
		return -1;
};

int calc(char* s)
{
	int len=(int)strlen(s);
	int cp1=0,cp2=0,i,j,chk,ex=0;
	for(i=1;i<len;i++)
	{
		if(s[i]=='*' || s[i]=='/')
		{
			cp1++;
		}
	}
	for(i=0;i<cp1;i++)
	{
		for(j=1;j<(int)strlen(s);j++)
		{
			if(s[j]=='*' || s[j]=='/')
			{
				chk=modify(s,j);
				if(chk==-1)
					ex=1;
				break;
			}
		}
		if(ex==1)
			break;
	}
	if(ex==1)
		
		{
			printf("zero division error\n");
			return -1;
		}
	for(i=1;i<(int)strlen(s);i++)
	{
		if(s[i]=='+' || s[i]=='-')
			{
				cp2++;
			}
	}
	for(i=0;i<cp2;i++)
	{
		for(j=1;j<(int)strlen(s);j++)
		{
			if(s[j]=='+' || s[j]=='-')
			{
				chk=modify(s,j);
				break;
			}
		}
	}
	return 0;
};

void now(char* c)
{
	time_t curtime;
	time(&curtime);
	char day[10],quote[100];
	struct tm *myTime = localtime(&curtime);
	int hour,min,sec;
	if(!strcmp(c,"now\0"))
		printf("current_instant = %s\n",ctime(&curtime));
	else if(!strcmp(c,"day_quotes\0"))
	{
		printf("\nSUNDAY: This is your last day to enjoy... HURRY UP!!!\n");
		printf("MONDAY: Time has started for you to strive an entire week\n");
		printf("TUESDAY: You are still in the first half of your week, don't chill\n");
		printf("WEDNESDAY: You are exactly in the middle, no way back!\n");
		printf("THURSDAY: One more days to go ....\n");
		printf("FRIDAY: Wait till the evening until you are free\n");
		printf("SATURDAY: Trust me, its the best day of your week!!!\n");
	}
	else if(!strcmp(c,"today\0"))
	{	
		switch(myTime->tm_wday)
		{
			case 0:strcpy(day,"SUNDAY\0"); strcpy(quote,"This is your last day to enjoy... HURRY UP!!!\0");break;
			case 1:strcpy(day,"MONDAY\0"); strcpy(quote,"Time has started for you to strive an entire week\0");break;
			case 2:strcpy(day,"TUESDAY\0"); strcpy(quote,"You are still in the first half of your week, don't chill\0");break;
			case 3:strcpy(day,"WEDNESDAY\0"); strcpy(quote,"You are exactly in the middle, no way back!\0");break;
			case 4:strcpy(day,"THURSDAY\0"); strcpy(quote,"One more days to go ....\0");break;
			case 5:strcpy(day,"FRIDAY\0"); strcpy(quote,"Wait till the evening until you are free\0");break;
			case 6:strcpy(day,"SATURDAY\0"); strcpy(quote,"Trust me, its the best day of your week!!!\0");break;
		};
		printf("Today is %d-%s\n",myTime->tm_mday,day);
		printf("Advice: %s\n",quote);
	}
	else if(!strcmp(c,"time\0"))
	{
		hour=(int)(myTime->tm_hour);
		printf("TIME now is %d:%d:%d--",myTime->tm_hour,myTime->tm_min,myTime->tm_sec);
		if(hour>=12 && hour<=17)
			printf("Afternoon\n");
		else if(hour>=5 && hour<=11)
			printf("Morning\n");
		else if(hour>=17 && hour<=19)
			printf("Evening\n");
		else if(hour>=19&& hour<=23)
			printf("Night\n");
		else if(hour>=0 && hour<=4)
			printf("Mid-Night\n");
	}
};

void clean()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
};

void play()
{
printf("welcome to !!! ROCK PAPER SCISSORS !!!\n\n");
	printf("0 - ROCK, 1 - PAPER, 2 - SCISSORS...... the persn who gets 5 points wins\n");
	int p=0,c=0,randi,ppl;
	char cd='a',pd='a';
	srand(time(0));
	while( p<5 && c<5)
	{
		//computer decides
		randi=rand()%3;
		switch(randi)
		{
			case 0: cd='r';break;
			case 1: cd='p';break;
			case 2: cd='s';break;
		};
		//human decision
		do{
			printf("enter your decision\n");
			scanf("%d",&ppl);
			switch(ppl)
			{
				case 0: pd='r';break;
				case 1: pd='p';break;
				case 2: pd='s';break;
			};
			if(pd>=0 && pd<=2)
				printf("INPUT ERROR\n");
		}
		while(pd>=0 && pd<=2);

		printf("computer decision %c\n",cd);

		if(pd=='r' && cd=='s')
			p++;
		else if(pd=='p' && cd=='r')
			p++;
		else if(pd=='s' && cd=='p')
			p++;
		else if(cd=='r' && pd=='s')
			c++;
		else if(cd=='p' && pd=='r')
			c++;
		else if(cd=='s' && pd=='p')
			c++;

		printf("your points: %d\n",p);
		printf("Bot's points: %d\n",c);
		printf("\n\n");

	}
	if(c==5)
		printf("So shameful!!!..... You couldn't beat a bot\n");
	else if(p==5)
		printf("You won it!! HOW's THE JOSH?\n");

};

int caller(char* command,char* arguments)
{
	if(strcmp("say",command)==0)
	{	
		say(arguments);
		return 1;
	}
	else if(strcmp("help",command)==0)
	{
		help(arguments);
		return 1;
	}
	else if(strcmp("pigsay",command)==0)
	{
		pigsay(arguments);
		return 1;
	}
	else if(strcmp("dragonsay",command)==0)
	{
		dragonsay(arguments);
		return 1;
	}
	else if(strcmp("whereami",command)==0)
	{
		printcwd();
		return 1;
	}
	else if(strcmp("life",command)==0)
		printf("%d\n",42);
	else if(strcmp("list",command)==0)
	{
		list(arguments);
		return 1;
	}	
	else if(strcmp("file",command)==0)
	{
		file(arguments);
		return 1;
	}
	else if(strcmp("show",command)==0)
	{
		show(arguments);
		return 1;
	}
	else if(strcmp("goto",command)==0)
	{
		changedir(arguments);
		return 1;
	}
	else if(strcmp("calc",command)==0)
	{
		int checker=0;
		checker=calc(arguments);
		if(checker==0)
			printf("%s\n",arguments);
		return 1;
	}
	else if(strcmp("clean",command)==0)
	{
		clean();
		return 1;
	}
	else if(strcmp("time",command)==0)
	{
		now(arguments);
		return 1;
	}
	else if(strcmp("play",command)==0)
	{
		play();
		return 1;
	}
	else if(strcmp("exit",command)==0)
	{
		printf("\n\nExiting program.....\n\n\n\n");
		return 0;
	}
	else
	{
		printf("No command %s\n",command);
		return 1;
	}
};

int input_string()
{
	char str[100]="";
	char ch;
	int i,j=0,c;
	char command[10]="";
    char arguments[100]="";
	printf("@");
	fflush(stdin);
	fflush(stdout);
	scanf("%[^\n]s",str);
	ch=getchar();
    
    for(i=0;str[i]!=' ' && str[i]!='\0';i++)
    	command[i]=str[i];
    i++;
    
    for(c=0;str[i]!='\0';i++,c++)
    		arguments[c]=str[i];
	arguments[c+1]='\0';
	return caller(command,arguments);
};