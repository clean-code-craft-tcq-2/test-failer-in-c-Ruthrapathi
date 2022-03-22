#include <stdio.h>
#include <assert.h>
#include <string.h>

const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};


struct Colorpair
{
	int Number;
	char MajorColor[8];
	char MinorColor[8];
};

Colorpair colorpair[25];

void printOnConsole(int ColorPairArrayIndex, char *majorColor, char *minorColor)
{
printf("%d | %s | %s\n", ColorPairArrayIndex, majorColor, minorColor);
}

int printColorMap()
{
    
    int i = 0, j = 0,ColorPairArrayIndex = 1;
    for(i = 0; i < 5; i++) 
	{
        for(j = 0; j < 5; j++)
		{			
			colorpair[ColorPairArrayIndex].Number = ColorPairArrayIndex;
			strcpy(colorpair[ColorPairArrayIndex].MajorColor , majorColor[i]);
			strcpy(colorpair[ColorPairArrayIndex].MinorColor , minorColor[j]);
			printOnConsole(ColorPairArrayIndex,colorpair[ColorPairArrayIndex].MajorColor,colorpair[ColorPairArrayIndex].MinorColor);	
		        ColorPairArrayIndex++;       
        }
    }
    return i * j;
}

int main()
{
    int result = printColorMap();
    assert(result == 25);
	assert(colorpair[23].Number == 23);	
	assert(strcmp(colorpair[23].MajorColor, "Violet") == 0);
	assert(strcmp(colorpair[23].MinorColor, "Green") == 0);
	assert(colorpair[15].Number == 15);	
	assert(strcmp(colorpair[15].MajorColor, "Black") == 0);
	assert(strcmp(colorpair[15].MinorColor, "Slate") == 0);
    printf("All is well (Yes,it is! :> )\n");
    return 0;
}
