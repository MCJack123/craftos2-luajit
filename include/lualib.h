/*
** Standard library header.
** Copyright (C) 2005-2020 Mike Pall. See Copyright Notice in luajit.h
*/

#ifndef _LUALIB_H
#define _LUALIB_H

#include "lua.h"
#include <stdio.h>

#define LUA_FILEHANDLE	"FILE*"

#define LUA_COLIBNAME	"coroutine"
#define LUA_MATHLIBNAME	"math"
#define LUA_STRLIBNAME	"string"
#define LUA_TABLIBNAME	"table"
#define LUA_IOLIBNAME	"io"
#define LUA_OSLIBNAME	"os"
#define LUA_LOADLIBNAME	"package"
#define LUA_DBLIBNAME	"debug"
#define LUA_BITLIBNAME	"bit32"
#define LUA_JITLIBNAME	"jit"
#define LUA_FFILIBNAME	"ffi"
#define LUA_UTF8LIBNAME	"utf8"


LUALIB_API int luaopen_base(lua_State *L);
LUALIB_API int luaopen_math(lua_State *L);
LUALIB_API int luaopen_string(lua_State *L);
LUALIB_API int luaopen_table(lua_State *L);
LUALIB_API int luaopen_io(lua_State *L);
LUALIB_API int luaopen_os(lua_State *L);
LUALIB_API int luaopen_package(lua_State *L);
LUALIB_API int luaopen_debug(lua_State *L);
LUALIB_API int luaopen_bit(lua_State *L);
LUALIB_API int luaopen_jit(lua_State *L);
LUALIB_API int luaopen_ffi(lua_State *L);
LUALIB_API int luaopen_utf8(lua_State *L);

LUALIB_API void luaL_openlibs(lua_State *L);

LUALIB_API void (lualib_debug_ccpc_functions) (void(*scm)(lua_State *L, int), lua_CFunction debug, lua_CFunction breakpoint, lua_CFunction unsetbreakpoint);
LUALIB_API void (lualib_io_ccpc_functions) (FILE* (*open)(lua_State *L, const char * filename, const char * mode), int (*close)(lua_State *L, FILE * stream));

#ifndef lua_assert
#define lua_assert(x)	((void)0)
#endif

#endif
