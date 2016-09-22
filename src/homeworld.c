/*============================================================================
 * homeworld.c
 * Keeps make from bitching...
 *
 * Author:  Ted Cipicchio <ted@thereisnospork.com>
 * Created: Sat Oct 4 2003
 *==========================================================================*/

/* ... */

/*
 * On Windows, SDL contains a WinMain function in its own library libSDLMain.a (or SDLmain.lib
 * for VC++), so $(SDL_CFLAGS) contains -Dmain=SDL_main to expand 'main' as 'SDL_main', and
 * the WinMain function in libSDLMain.a calls 'SDL_main', i.e. the main function defined in
 * application source code. On MinGW, $(SDL_LIBS) is expanded as "... -lmingw32 -lSDLmain -lSDL
 * -mwindows"; and the linking command of homeoworld.exe is expanded as "gcc ... -o .libs/homeworld.exe
 * homeworld.o -mwindows ... ./SDL/libhw_SDL.a ... -lmingw32 -lSDLmain ...". If we define the main
 * function in one of those .a libraries of HW (such as libhw_SDL.a) other than in homeworld.o,
 * -lSDLmain won't be able to find the definition of 'SDL_main', and there will be a link error of 
 * "undefined reference to 'SDL_main'"; because -lSDL_main will only search for the definition
 * of 'SDL_main' in the libraries listed after -lSDL_main. Therefore, we have to define 'main'
 * in homeworld.c.
 *
 *          Zhixiang Zhu <zzxiang21cn@hotmail.com>
 *          Sun Feb 1 2015
 */

int HWSDL_main (int argc, char* argv[]);

int main (int argc, char* argv[])
{
    HWSDL_main(argc, argv);
}
