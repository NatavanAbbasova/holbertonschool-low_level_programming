#include <unistd.h>
/**
*main -Entry point of tje program
*
*Return: Always 0 (Succes)
*/
int main(void)
{
const char msg[]="and that piece of art is useful\" - Dora Korpar, "
"2015-10-19\n";
write(2, msg, 59);
return (1);
}

