/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 10 "pmysql.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

void yyerror(char *s, ...);
void emit(char *s, ...);
int get_first_line();
int get_last_line();
int get_first_column();
int get_last_column();

#line 84 "pmysql.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    NAME = 258,
    STRING = 259,
    INTNUM = 260,
    BOOL = 261,
    APPROXNUM = 262,
    USERVAR = 263,
    ASSIGN = 264,
    OR = 265,
    XOR = 266,
    ANDOP = 267,
    IN = 268,
    IS = 269,
    LIKE = 270,
    REGEXP = 271,
    NOT = 272,
    BETWEEN = 273,
    COMPARISON = 274,
    SHIFT = 275,
    MOD = 276,
    UMINUS = 277,
    ADD = 278,
    ALL = 279,
    ALTER = 280,
    ANALYZE = 281,
    AND = 282,
    ANY = 283,
    AS = 284,
    ASC = 285,
    AUTO_INCREMENT = 286,
    BEFORE = 287,
    BIGINT = 288,
    BINARY = 289,
    BIT = 290,
    BLOB = 291,
    BOTH = 292,
    BY = 293,
    CALL = 294,
    CASCADE = 295,
    CASE = 296,
    CHANGE = 297,
    CHAR = 298,
    CHECK = 299,
    COLLATE = 300,
    COLUMN = 301,
    COMMENT = 302,
    CONDITION = 303,
    CONSTRAINT = 304,
    CONTINUE = 305,
    CONVERT = 306,
    CREATE = 307,
    CROSS = 308,
    CURRENT_DATE = 309,
    CURRENT_TIME = 310,
    CURRENT_TIMESTAMP = 311,
    CURRENT_USER = 312,
    CURSOR = 313,
    DATABASE = 314,
    DATABASES = 315,
    DATE = 316,
    DATETIME = 317,
    DAY_HOUR = 318,
    DAY_MICROSECOND = 319,
    DAY_MINUTE = 320,
    DAY_SECOND = 321,
    DECIMAL = 322,
    DECLARE = 323,
    DEFAULT = 324,
    DELAYED = 325,
    DELETE = 326,
    DESC = 327,
    DESCRIBE = 328,
    DETERMINISTIC = 329,
    DISTINCT = 330,
    DISTINCTROW = 331,
    DIV = 332,
    DOUBLE = 333,
    DROP = 334,
    DUAL = 335,
    EACH = 336,
    ELSE = 337,
    ELSEIF = 338,
    ENCLOSED = 339,
    END = 340,
    ENUM = 341,
    ESCAPED = 342,
    EXISTS = 343,
    EXIT = 344,
    EXPLAIN = 345,
    FETCH = 346,
    FLOAT = 347,
    FOR = 348,
    FORCE = 349,
    FOREIGN = 350,
    FROM = 351,
    FULLTEXT = 352,
    GRANT = 353,
    GROUP = 354,
    HAVING = 355,
    HIGH_PRIORITY = 356,
    HOUR_MICROSECOND = 357,
    HOUR_MINUTE = 358,
    HOUR_SECOND = 359,
    IF = 360,
    IGNORE = 361,
    INDEX = 362,
    INFILE = 363,
    INNER = 364,
    INOUT = 365,
    INSENSITIVE = 366,
    INSERT = 367,
    INT = 368,
    INTEGER = 369,
    INTERVAL = 370,
    INTO = 371,
    ITERATE = 372,
    JOIN = 373,
    KEY = 374,
    KEYS = 375,
    KILL = 376,
    LEADING = 377,
    LEAVE = 378,
    LEFT = 379,
    LIMIT = 380,
    LINES = 381,
    LOAD = 382,
    LOCALTIME = 383,
    LOCALTIMESTAMP = 384,
    LOCK = 385,
    LONG = 386,
    LONGBLOB = 387,
    LONGTEXT = 388,
    LOOP = 389,
    LOW_PRIORITY = 390,
    MATCH = 391,
    MEDIUMBLOB = 392,
    MEDIUMINT = 393,
    MEDIUMTEXT = 394,
    MINUTE_MICROSECOND = 395,
    MINUTE_SECOND = 396,
    MODIFIES = 397,
    NATURAL = 398,
    NO_WRITE_TO_BINLOG = 399,
    NULLX = 400,
    NUMBER = 401,
    ON = 402,
    ONDUPLICATE = 403,
    OPTIMIZE = 404,
    OPTION = 405,
    OPTIONALLY = 406,
    ORDER = 407,
    OUT = 408,
    OUTER = 409,
    OUTFILE = 410,
    PRECISION = 411,
    PRIMARY = 412,
    PROCEDURE = 413,
    PURGE = 414,
    QUICK = 415,
    READ = 416,
    READS = 417,
    REAL = 418,
    REFERENCES = 419,
    RELEASE = 420,
    RENAME = 421,
    REPEAT = 422,
    REPLACE = 423,
    REQUIRE = 424,
    RESTRICT = 425,
    RETURN = 426,
    REVOKE = 427,
    RIGHT = 428,
    ROLLUP = 429,
    SCHEMA = 430,
    SCHEMAS = 431,
    SECOND_MICROSECOND = 432,
    SELECT = 433,
    SENSITIVE = 434,
    SEPARATOR = 435,
    SET = 436,
    SHOW = 437,
    SMALLINT = 438,
    SOME = 439,
    SONAME = 440,
    SPATIAL = 441,
    SPECIFIC = 442,
    SQL = 443,
    SQLEXCEPTION = 444,
    SQLSTATE = 445,
    SQLWARNING = 446,
    SQL_BIG_RESULT = 447,
    SQL_CALC_FOUND_ROWS = 448,
    SQL_SMALL_RESULT = 449,
    SSL = 450,
    STARTING = 451,
    STRAIGHT_JOIN = 452,
    TABLE = 453,
    TEMPORARY = 454,
    TEXT = 455,
    TERMINATED = 456,
    THEN = 457,
    TIME = 458,
    TIMESTAMP = 459,
    TINYBLOB = 460,
    TINYINT = 461,
    TINYTEXT = 462,
    TO = 463,
    TRAILING = 464,
    TRIGGER = 465,
    UNDO = 466,
    UNION = 467,
    UNIQUE = 468,
    UNLOCK = 469,
    UNSIGNED = 470,
    UPDATE = 471,
    USAGE = 472,
    USE = 473,
    USING = 474,
    UTC_DATE = 475,
    UTC_TIME = 476,
    UTC_TIMESTAMP = 477,
    VALUES = 478,
    VARBINARY = 479,
    VARCHAR = 480,
    VARYING = 481,
    WHEN = 482,
    WHERE = 483,
    WHILE = 484,
    WITH = 485,
    WRITE = 486,
    YEAR = 487,
    YEAR_MONTH = 488,
    ZEROFILL = 489,
    FSUBSTRING = 490,
    FTRIM = 491,
    FDATE_ADD = 492,
    FDATE_SUB = 493,
    FCOUNT = 494
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 26 "pmysql.y"

	int intval;
	double floatval;
	char *strval;
	int subtok;

#line 380 "pmysql.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
             && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE) \
             + YYSIZEOF (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  31
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1538

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  254
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  74
/* YYNRULES -- Number of rules.  */
#define YYNRULES  300
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  620

#define YYUNDEFTOK  2
#define YYMAXUTOK   494


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    18,     2,     2,     2,    28,    22,     2,
     252,   253,    26,    24,   250,    25,   251,    27,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,   249,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    30,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    19,    20,    23,    29,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,   181,   182,   183,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,   248
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,   307,   307,   308,   313,   316,   318,   324,   325,   327,
     328,   332,   334,   338,   339,   340,   343,   344,   347,   347,
     349,   349,   352,   352,   353,   356,   357,   360,   361,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   375,   376,
     377,   380,   382,   383,   386,   387,   391,   392,   394,   395,
     398,   399,   402,   403,   404,   408,   410,   412,   414,   416,
     420,   421,   422,   425,   426,   429,   430,   433,   434,   435,
     438,   438,   441,   442,   446,   448,   450,   452,   455,   456,
     459,   460,   463,   468,   471,   476,   477,   478,   479,   482,
     487,   488,   492,   492,   494,   502,   505,   511,   512,   515,
     516,   517,   518,   519,   522,   522,   525,   526,   529,   530,
     533,   534,   535,   536,   539,   545,   551,   554,   557,   560,
     566,   569,   575,   581,   587,   590,   597,   598,   599,   603,
     606,   609,   612,   620,   624,   625,   628,   629,   635,   638,
     642,   647,   652,   656,   662,   667,   668,   671,   671,   674,
     675,   676,   677,   678,   681,   682,   683,   684,   685,   686,
     687,   688,   689,   690,   691,   692,   693,   696,   697,   698,
     701,   702,   705,   706,   707,   710,   711,   712,   716,   717,
     718,   719,   720,   721,   722,   723,   724,   725,   726,   727,
     728,   729,   730,   731,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   748,   749,
     752,   755,   756,   757,   760,   761,   766,   769,   771,   771,
     774,   776,   781,   782,   783,   784,   785,   786,   787,   790,
     791,   792,   793,   794,   795,   796,   797,   798,   799,   800,
     801,   802,   803,   804,   805,   806,   807,   808,   809,   810,
     811,   814,   815,   816,   817,   820,   824,   825,   828,   829,
     832,   833,   834,   835,   836,   839,   843,   844,   846,   847,
     848,   849,   850,   853,   854,   855,   858,   859,   862,   863,
     864,   865,   866,   867,   868,   869,   870,   873,   874,   875,
     876,   879,   880,   883,   884,   887,   888,   891,   892,   893,
     896
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAME", "STRING", "INTNUM", "BOOL",
  "APPROXNUM", "USERVAR", "ASSIGN", "OR", "XOR", "ANDOP", "IN", "IS",
  "LIKE", "REGEXP", "NOT", "'!'", "BETWEEN", "COMPARISON", "'|'", "'&'",
  "SHIFT", "'+'", "'-'", "'*'", "'/'", "'%'", "MOD", "'^'", "UMINUS",
  "ADD", "ALL", "ALTER", "ANALYZE", "AND", "ANY", "AS", "ASC",
  "AUTO_INCREMENT", "BEFORE", "BIGINT", "BINARY", "BIT", "BLOB", "BOTH",
  "BY", "CALL", "CASCADE", "CASE", "CHANGE", "CHAR", "CHECK", "COLLATE",
  "COLUMN", "COMMENT", "CONDITION", "CONSTRAINT", "CONTINUE", "CONVERT",
  "CREATE", "CROSS", "CURRENT_DATE", "CURRENT_TIME", "CURRENT_TIMESTAMP",
  "CURRENT_USER", "CURSOR", "DATABASE", "DATABASES", "DATE", "DATETIME",
  "DAY_HOUR", "DAY_MICROSECOND", "DAY_MINUTE", "DAY_SECOND", "DECIMAL",
  "DECLARE", "DEFAULT", "DELAYED", "DELETE", "DESC", "DESCRIBE",
  "DETERMINISTIC", "DISTINCT", "DISTINCTROW", "DIV", "DOUBLE", "DROP",
  "DUAL", "EACH", "ELSE", "ELSEIF", "ENCLOSED", "END", "ENUM", "ESCAPED",
  "EXISTS", "EXIT", "EXPLAIN", "FETCH", "FLOAT", "FOR", "FORCE", "FOREIGN",
  "FROM", "FULLTEXT", "GRANT", "GROUP", "HAVING", "HIGH_PRIORITY",
  "HOUR_MICROSECOND", "HOUR_MINUTE", "HOUR_SECOND", "IF", "IGNORE",
  "INDEX", "INFILE", "INNER", "INOUT", "INSENSITIVE", "INSERT", "INT",
  "INTEGER", "INTERVAL", "INTO", "ITERATE", "JOIN", "KEY", "KEYS", "KILL",
  "LEADING", "LEAVE", "LEFT", "LIMIT", "LINES", "LOAD", "LOCALTIME",
  "LOCALTIMESTAMP", "LOCK", "LONG", "LONGBLOB", "LONGTEXT", "LOOP",
  "LOW_PRIORITY", "MATCH", "MEDIUMBLOB", "MEDIUMINT", "MEDIUMTEXT",
  "MINUTE_MICROSECOND", "MINUTE_SECOND", "MODIFIES", "NATURAL",
  "NO_WRITE_TO_BINLOG", "NULLX", "NUMBER", "ON", "ONDUPLICATE", "OPTIMIZE",
  "OPTION", "OPTIONALLY", "ORDER", "OUT", "OUTER", "OUTFILE", "PRECISION",
  "PRIMARY", "PROCEDURE", "PURGE", "QUICK", "READ", "READS", "REAL",
  "REFERENCES", "RELEASE", "RENAME", "REPEAT", "REPLACE", "REQUIRE",
  "RESTRICT", "RETURN", "REVOKE", "RIGHT", "ROLLUP", "SCHEMA", "SCHEMAS",
  "SECOND_MICROSECOND", "SELECT", "SENSITIVE", "SEPARATOR", "SET", "SHOW",
  "SMALLINT", "SOME", "SONAME", "SPATIAL", "SPECIFIC", "SQL",
  "SQLEXCEPTION", "SQLSTATE", "SQLWARNING", "SQL_BIG_RESULT",
  "SQL_CALC_FOUND_ROWS", "SQL_SMALL_RESULT", "SSL", "STARTING",
  "STRAIGHT_JOIN", "TABLE", "TEMPORARY", "TEXT", "TERMINATED", "THEN",
  "TIME", "TIMESTAMP", "TINYBLOB", "TINYINT", "TINYTEXT", "TO", "TRAILING",
  "TRIGGER", "UNDO", "UNION", "UNIQUE", "UNLOCK", "UNSIGNED", "UPDATE",
  "USAGE", "USE", "USING", "UTC_DATE", "UTC_TIME", "UTC_TIMESTAMP",
  "VALUES", "VARBINARY", "VARCHAR", "VARYING", "WHEN", "WHERE", "WHILE",
  "WITH", "WRITE", "YEAR", "YEAR_MONTH", "ZEROFILL", "FSUBSTRING", "FTRIM",
  "FDATE_ADD", "FDATE_SUB", "FCOUNT", "';'", "','", "'.'", "'('", "')'",
  "$accept", "stmt_list", "stmt", "select_stmt", "opt_where",
  "opt_groupby", "groupby_list", "opt_asc_desc", "opt_with_rollup",
  "opt_having", "opt_orderby", "opt_limit", "opt_into_list", "column_list",
  "select_opts", "select_expr_list", "select_expr", "table_references",
  "table_reference", "table_factor", "opt_as", "opt_as_alias",
  "join_table", "opt_inner_cross", "opt_outer", "left_or_right",
  "opt_left_or_right_outer", "opt_join_condition", "join_condition",
  "index_hint", "opt_for_join", "index_list", "table_subquery",
  "delete_stmt", "delete_opts", "delete_list", "opt_dot_star",
  "insert_stmt", "opt_ondupupdate", "insert_opts", "opt_into",
  "opt_col_names", "insert_vals_list", "insert_vals", "insert_asgn_list",
  "replace_stmt", "update_stmt", "update_opts", "update_asgn_list",
  "create_database_stmt", "opt_if_not_exists", "create_table_stmt",
  "create_col_list", "create_definition", "$@1", "column_atts",
  "opt_length", "opt_binary", "opt_uz", "opt_csc", "data_type",
  "enum_list", "create_select_statement", "opt_ignore_replace",
  "opt_temporary", "set_stmt", "set_list", "set_expr", "expr", "val_list",
  "opt_val_list", "trim_ltb", "interval_exp", "case_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,    33,   273,
     274,   124,    38,   275,    43,    45,    42,    47,    37,   276,
      94,   277,   278,   279,   280,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,   419,   420,   421,   422,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,    59,
      44,    46,    40,    41
};
# endif

#define YYPACT_NINF (-355)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-141)

#define yytable_value_is_error(Yyn) \
  ((Yyn) == YYTABLE_NINF)

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -20,   -50,  -355,  -355,  -355,  -355,    46,    -1,   417,  -193,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,   -15,   -15,
    -355,   -82,    50,   118,   118,   175,     3,  -157,  -355,   132,
       0,  -355,   -73,  -355,   133,   207,   212,   -15,    -5,   288,
    -355,  -355,  -355,   -97,  -355,  -355,  -355,  -355,  -355,   298,
     303,   -28,  -355,  -355,  -355,  -355,   249,   683,   683,   683,
    -355,  -355,   683,   337,  -355,  -355,  -355,  -355,  -355,    62,
    -355,  -355,  -355,  -355,  -355,    87,    94,   120,   122,   137,
     -79,  -355,  1405,   683,   683,    46,     1,     2,     6,     4,
    -144,   255,  -355,  -355,   294,  -355,  -355,  -355,  -355,   358,
     339,  -355,   -24,  -200,     0,   392,  -129,   -46,   406,   683,
     683,   735,   735,  -355,  -355,   683,   995,   -75,   227,   683,
     261,   683,   683,   450,     0,   683,  -355,   683,   683,   683,
     179,    14,   683,   683,   136,   683,   123,   683,   683,   683,
     683,   683,   683,   683,   683,   683,   683,   437,  -355,  1470,
    1470,  -355,   457,    81,   210,  -202,   462,     0,  -355,  -355,
    -355,   -91,  -355,     0,   345,   310,  -355,   463,    97,  -355,
     683,   313,     0,   -34,    -5,   474,   477,  -162,   474,  -140,
    -355,   855,  -355,   228,  1470,  1048,   -67,   683,  -355,   683,
     229,   834,   230,  -355,  -355,  -355,   234,   683,   895,   930,
     235,   792,   -34,  -355,  1490,  1014,  1213,   421,  -355,     5,
    -355,  1508,  1508,   237,   683,   683,  1443,   238,   239,   240,
     227,   688,   759,   628,   749,   308,   308,   464,   464,   464,
     464,  -355,  -355,   206,   367,   368,   370,  -355,  -355,  -355,
     -14,    33,   255,   310,   310,   372,   347,     0,  -355,   374,
    -355,  -355,  -355,   499,   -71,  -355,   294,  1470,   465,   376,
     -34,  -355,  -355,   484,  -128,  -355,   -21,   259,   359,  -128,
     259,   359,   683,  -355,   683,   683,  -355,  1329,  1087,  -355,
     683,  -355,  -355,  1308,   393,   393,  -355,  -355,   411,   267,
     270,  -355,  -355,   421,  1508,  1508,   683,   227,   227,   227,
     271,    81,   420,   420,   420,   683,   522,   523,   313,  -355,
    -355,     0,   683,  -139,     0,   -31,   -76,   281,   282,   407,
      45,  -355,   533,   227,   683,   683,  -355,  -355,   524,   409,
     536,  -355,   537,  -355,   547,  -108,  -355,  -355,  -108,  -355,
    -355,  1470,  1350,  -355,   683,    52,   683,   683,   290,   291,
     498,   439,  -355,  -355,   293,   309,   866,   315,   316,   322,
    -355,  -355,   436,   314,   324,   325,  1470,   559,   -10,   376,
    -355,  1470,   683,   328,  -355,  -355,  -139,   -71,  -355,   334,
     340,   477,   477,   341,   -71,   -72,  1076,  -355,   348,  1371,
     951,  -355,  1470,   366,   575,  -355,  -355,    60,  1470,   349,
    -355,  -355,  -355,  1470,   683,  -355,   352,   974,  -355,  -355,
     683,   683,   313,  -355,  -355,  -355,  -355,  -355,  -355,   596,
     596,   596,   683,   683,   597,  -355,  1470,   477,  -355,    65,
     477,   477,    77,    78,   477,  -355,  -355,   354,   354,   354,
    -355,   354,  -355,  -355,   354,   354,   357,   354,   354,   354,
    -355,   570,  -355,   354,   570,   354,   362,   354,   570,  -355,
    -355,  -355,   354,   570,   363,   371,  -355,  -355,   683,  -355,
    -355,  -355,   683,   474,   553,   656,  -355,   547,   813,  -355,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,  -355,    38,
    1470,   376,  -355,   106,   140,   141,  1470,  1470,   599,   146,
     -27,   155,   163,  -355,  -355,   165,   615,  -355,  -355,  -355,
    -355,  -355,  -355,   618,  -355,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,   618,  -355,  -355,  -355,  -355,   619,   621,   107,
    1371,  1470,   378,  -355,  1470,  -355,  1470,   182,  -355,   447,
    -355,   507,   631,  -355,  -355,  -355,   683,  -355,  -355,  -355,
    -355,  -355,   191,  -188,   269,  -188,  -188,  -355,   192,  -188,
    -188,  -188,   269,  -188,   269,  -188,   198,  -188,   269,  -188,
     269,   383,   384,   485,  -355,   634,   346,  -355,  -355,   512,
    -114,  -355,  -355,  -355,   477,  -355,  -355,  1470,   636,  -355,
    -355,  -355,   453,   641,   642,  -355,  -355,  -355,  -355,  -355,
    -355,  -355,  -355,  -355,  -355,  -355,  -355,   477,   397,   395,
     645,  -355,  -355,   269,   269,   269,   209,  -355,  -355,  -355
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int16 yydefact[] =
{
       0,   214,    88,    99,    99,    29,     0,    99,     0,     0,
       4,    83,    95,   120,   124,   133,   138,   216,   136,   136,
     215,     0,     0,   105,   105,     0,     0,   217,   218,     0,
       0,     1,     0,     2,     0,     0,     0,   136,    92,     0,
      87,    85,    86,     0,   101,   102,   103,   104,   100,     0,
       0,   222,   225,   226,   228,   227,   223,     0,     0,     0,
      40,    30,     0,     0,   298,   299,   297,    31,    32,     0,
      33,    36,    37,    35,    34,     0,     0,     0,     0,     0,
       5,    38,    54,     0,     0,     0,   103,   100,    54,     0,
       0,    42,    44,    45,    51,     3,   137,   134,   135,     0,
       0,    90,     7,     0,     0,     0,   106,   106,     0,   258,
       0,   248,   249,   235,   300,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    53,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    41,   221,
     220,   219,     0,    77,     0,     0,     0,     0,    62,    61,
      65,    69,    66,     0,     0,    63,    50,     0,   211,    93,
       0,    20,     0,     7,    92,     0,     0,     0,     0,     0,
     224,   256,   259,     0,   250,     0,     0,     0,   289,     0,
       0,   256,     0,   275,   273,   274,     0,     0,     0,     0,
       0,     0,     7,    39,   237,   238,   236,     0,   253,     0,
     251,   293,   295,     0,     0,     0,     0,     0,     0,     0,
       0,   239,   244,   245,   247,   229,   230,   231,   232,   233,
     234,   246,    52,    54,     0,     0,     0,    46,    82,    49,
       0,     7,    43,    63,    63,     0,    56,     0,    64,     0,
      48,   212,   213,     0,   147,   142,    51,     8,     0,    22,
       7,    89,    91,     0,    97,    27,     0,     0,    97,    97,
       0,    97,     0,   265,     0,     0,   287,     0,     0,   264,
       0,   268,   271,     0,     0,     0,   266,   267,     9,     0,
       0,   254,   252,     0,   294,   296,     0,     0,     0,     0,
       0,    77,    79,    79,    79,     0,     0,     0,    20,    67,
      68,     0,     0,    71,     0,   211,     0,     0,     0,     0,
       0,   145,     0,     0,     0,     0,    84,    94,     0,     0,
       0,   114,     0,   107,     0,    97,   115,   122,    97,   123,
     257,   291,     0,   290,     0,     0,     0,     0,     0,     0,
       0,    18,   262,   260,     0,     0,   255,     0,     0,     0,
     240,    47,     0,     0,     0,     0,   129,     0,     0,    22,
      59,    57,     0,     0,    55,    70,     0,   147,   144,     0,
       0,     0,     0,     0,   147,   211,     0,   210,    21,    13,
      23,   117,   116,     0,     0,    28,   111,     0,   110,     0,
      96,   121,   288,   292,     0,   269,     0,     0,   276,   277,
       0,     0,    20,   263,   261,   243,   241,   242,    78,     0,
       0,     0,     0,     0,     0,   125,    72,     0,    58,     0,
       0,     0,     0,     0,     0,   146,   141,   167,   167,   167,
     199,   167,   189,   192,   167,   167,     0,   167,   167,   167,
     201,   170,   200,   167,   170,   167,     0,   167,   170,   190,
     191,   198,   167,   170,     0,     0,   193,   154,     0,    14,
      15,    11,     0,     0,     0,     0,   108,     0,     0,   272,
     278,   279,   280,   281,   284,   285,   286,   283,   282,    16,
      19,    22,    80,     0,     0,     0,   130,   131,     0,     0,
     211,     0,     0,   151,   150,     0,     0,   172,   196,   178,
     175,   172,   172,     0,   172,   172,   172,   171,   175,   172,
     175,   172,     0,   172,   175,   172,   175,     0,     0,   148,
      13,    24,    98,   119,   118,   113,   112,     0,   270,     0,
      10,    25,     0,    76,    75,    74,     0,    73,   143,   152,
     153,   149,     0,   184,   194,   188,   186,   208,     0,   187,
     182,   183,   205,   181,   204,   185,     0,   180,   203,   179,
     202,     0,     0,     0,   161,     0,     0,   165,   156,     0,
       0,    12,   109,    17,     0,     6,    81,   132,     0,   168,
     173,   174,     0,     0,     0,   175,   175,   197,   175,   155,
     166,   157,   158,   160,   159,   164,   163,     0,    26,     0,
       0,   177,   209,   206,   207,   195,     0,   169,   176,   162
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -355,  -355,   662,   113,    34,  -355,   262,   145,  -355,  -355,
    -269,  -354,  -355,  -295,  -355,  -355,   546,   110,   519,   -30,
     422,   -58,  -355,  -355,   160,  -355,  -355,  -355,   301,   379,
      80,    49,  -355,  -355,  -355,   640,   508,  -355,    95,   353,
     659,   577,   415,   215,  -177,  -355,  -355,  -355,  -355,  -355,
     226,  -355,   326,   318,  -355,  -355,   686,  -161,   216,   109,
    -355,   171,  -302,  -355,  -355,  -355,  -355,   637,   -25,   -98,
    -355,  -355,   438,   608
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,   171,   351,   388,   471,   540,   412,
     259,   326,   585,   266,    25,    80,    81,    90,    91,    92,
     167,   148,    93,   164,   249,   165,   245,   374,   375,   237,
     363,   493,    94,    11,    22,    43,   101,    12,   331,    23,
      49,   177,   335,   397,   264,    13,    14,    30,   241,    15,
      35,    16,   320,   321,   322,   529,   507,   518,   553,   554,
     467,   558,   255,   256,    21,    17,    27,    28,   181,   182,
     183,   197,   348,   117
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      82,   269,  -126,    88,  -128,  -127,   305,    88,   104,   126,
     423,   291,    83,   378,   606,   425,   187,   372,    18,   188,
     208,   192,   196,    84,   275,     5,   124,   276,   172,   329,
     153,   209,   111,   112,   113,   316,   590,   114,   116,   369,
     379,     1,   243,   251,   147,   317,   156,     5,   157,   329,
     105,   239,   380,    38,    26,   591,    33,   318,   149,   150,
       2,   175,   127,   128,   129,   130,   131,   132,   133,   134,
     267,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   436,   251,   184,   432,   433,   251,   373,
     185,   244,   270,    85,   191,   319,   198,   199,   201,    34,
      82,     3,   204,   205,   206,   252,   157,   211,   212,   290,
     216,   221,   222,   223,   224,   225,   226,   227,   228,   229,
     230,   231,   330,   176,   573,    37,    51,    52,    53,    54,
      55,    56,   499,   246,    19,   501,   502,   541,   607,   505,
      57,    58,   399,   491,   178,   257,   252,   574,    59,   213,
     252,   214,   215,   105,   404,    39,   217,     4,    20,   292,
     218,   189,   277,   575,   278,    40,    62,     5,   210,   189,
       6,   125,   283,    63,   340,   301,    95,  -139,    51,    52,
      53,    54,    55,    56,   234,   576,    64,    65,    66,   294,
     295,     5,    57,    58,    41,   355,   235,    44,   548,   155,
      59,    60,   154,   170,   -92,     7,   176,   261,    61,   126,
      97,    44,   251,   170,   173,    98,   157,   313,    62,    42,
      69,   377,  -140,   108,   109,    63,   -92,   100,    45,   332,
      96,   190,   333,    46,   202,   577,   288,   306,    64,    65,
      66,   424,    45,    47,   147,    36,   100,    86,   406,   341,
     342,  -126,    89,  -128,  -127,   345,    89,   152,   110,    67,
      68,   578,    48,    99,    51,    52,    53,    54,    55,    56,
     170,   356,    69,   579,   252,   308,    87,   539,    57,    58,
     366,   370,   260,   307,   376,    70,    59,   371,   468,   608,
     268,   102,   271,   520,   327,   384,   532,   524,   385,   389,
     390,   106,   526,   392,    62,   405,   107,   193,   236,   398,
     475,    63,   616,   476,   118,   384,   219,   158,   500,   403,
     289,   592,   407,   593,    64,    65,    66,   332,   332,   580,
     503,   504,   166,   300,   142,   143,   144,   145,   146,   119,
      51,    52,    53,    54,    55,    56,   120,   426,   253,   254,
     601,   602,   603,   604,    57,    58,   542,    24,    69,   543,
      29,   168,    59,   336,   337,   169,   339,    75,    76,    77,
      78,    79,   121,   159,   122,   220,    71,    72,    73,   478,
      62,    74,   -60,   364,   365,   389,   490,    63,   160,   123,
     542,   542,   194,   544,   545,   174,   332,   496,   497,   547,
      64,    65,    66,   309,   310,   332,   354,   161,   549,   180,
     357,   358,   359,   332,     5,   332,   550,    31,   551,    75,
      76,    77,    78,    79,    51,    52,    53,    54,    55,    56,
     400,   207,   475,   401,    69,   582,   387,   162,    57,    58,
     232,   588,   594,   530,   589,   595,    59,   531,   594,   534,
     536,   596,   398,    51,    52,    53,    54,    55,    56,   332,
     233,   163,   619,   238,    62,   240,   250,    57,    58,   494,
     495,    63,   247,   248,   258,    59,   200,   263,     1,   195,
     265,   273,   279,   281,    64,    65,    66,   282,   286,   293,
     297,   298,   299,    62,   146,   302,   303,     2,   304,   311,
      63,   314,   315,   312,   328,    75,    76,    77,    78,    79,
     325,   334,   324,    64,    65,    66,   329,   347,    69,   350,
     352,   587,   362,   353,   360,   367,   368,    51,    52,    53,
      54,    55,    56,   381,   382,   383,   386,   393,     3,   394,
     395,    57,    58,   408,   409,   410,   413,    69,   411,    59,
      51,    52,    53,    54,    55,    56,    51,    52,    53,    54,
      55,    56,   414,   418,    57,    58,   419,    62,   415,   416,
      57,    58,    59,   115,    63,   417,   420,   421,    59,   422,
     427,    75,    76,    77,    78,    79,   430,    64,    65,    66,
      62,   473,   431,   434,     4,   474,    62,    63,   468,   492,
     498,   477,   391,    63,     5,   479,   506,     6,     5,   513,
      64,    65,    66,   517,   522,   527,    64,    65,    66,   546,
     552,    69,   557,   528,   571,   396,   572,   562,   330,   564,
     583,   533,   584,   568,   586,   570,   597,   598,   600,   599,
     605,   609,     7,   610,    69,   611,   612,   332,   617,   618,
      69,   139,   140,   141,   142,   143,   144,   145,   146,    51,
      52,    53,    54,    55,    56,    75,    76,    77,    78,    79,
      32,   203,   489,    57,    58,   581,   242,   428,   323,   103,
     361,    59,   262,    50,   179,   338,    51,    52,    53,    54,
      55,    56,   537,   566,    75,    76,    77,    78,    79,    62,
      57,    58,   435,   429,   613,   614,    63,   615,    59,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    64,
      65,    66,   151,   349,   186,     0,    62,   555,   556,     0,
     559,   560,   561,    63,   535,   563,     0,   565,     0,   567,
       0,   569,     0,     0,     0,     0,    64,    65,    66,     0,
       0,     0,     0,    69,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,     0,    75,    76,
      77,    78,    79,   140,   141,   142,   143,   144,   145,   146,
      69,   138,   139,   140,   141,   142,   143,   144,   145,   146,
       0,    75,    76,    77,    78,    79,     0,    75,    76,    77,
      78,    79,   127,   128,   129,   130,   131,   132,   133,   134,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   127,   128,   129,   130,   131,   132,   133,
     134,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   127,   128,   129,   130,   131,   132,
     133,   134,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   127,   128,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,     0,     0,     0,
      75,    76,    77,    78,    79,   127,   128,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,   280,
     127,   128,   129,   130,   131,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   127,   128,   129,   130,   131,   132,   133,   134,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     0,     0,   127,   128,   129,   130,   131,   132,
     133,   134,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   127,   128,   129,   130,   131,
     132,   133,   134,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   129,   130,   131,   132,
     133,   134,     0,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   287,   480,   481,   482,   483,
       0,     0,     0,     0,     0,     0,     0,     0,   127,   128,
     129,   130,   131,   132,   133,   134,   538,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,     0,
       0,     0,     0,     0,   272,   484,   485,   486,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   127,   128,   129,
     130,   131,   132,   133,   134,   272,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   437,   438,
     439,   440,     0,     0,   508,   509,     0,   510,   441,     0,
     511,   512,     0,   514,   515,   516,     0,     0,     0,   519,
       0,   521,     0,   523,     0,   284,   442,   443,   525,     0,
       0,     0,   444,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   445,     0,     0,     0,     0,     0,     0,
       0,   446,     0,     0,     0,     0,     0,   447,     0,     0,
     285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   448,   449,
       0,   472,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,   488,   450,   451,     0,
       0,     0,   452,   453,   454,     0,   130,   131,   132,   133,
     134,   115,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     0,     0,     0,     0,   455,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   274,
       0,     0,     0,     0,     0,     0,   456,     0,   457,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   458,     0,     0,   459,   460,
     461,   462,   463,     0,     0,     0,     0,     0,   344,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   464,
     465,     0,     0,     0,     0,     0,     0,   466,   127,   128,
     129,   130,   131,   132,   133,   134,     0,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   127,
     128,   129,   130,   131,   132,   133,   134,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     127,   128,   129,   130,   131,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   127,   128,   129,   130,   131,   132,   133,   134,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,     0,     0,     0,     0,     0,     0,   126,     0,
     469,     0,     0,   346,     0,   127,   128,   129,   130,   131,
     132,   133,   134,   343,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,     0,     0,     0,     0,
       0,     0,     0,   147,   402,     0,     0,     0,     0,     0,
       0,     0,   470,   127,   128,   129,   130,   131,   132,   133,
     134,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,     0,     0,     0,     0,     0,   296,
     127,   128,   129,   130,   131,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   128,   129,   130,   131,   132,   133,   134,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,  -141,  -141,  -141,  -141,   134,     0,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146
};

static const yytype_int16 yycheck[] =
{
      25,   178,     3,     3,     3,     3,    20,     3,   105,     3,
      20,     6,     9,   315,   128,   369,    91,   156,    68,    94,
       6,   119,   120,    20,    91,   187,   105,    94,   228,   157,
      88,    17,    57,    58,    59,   106,   224,    62,    63,   308,
     116,    61,   133,   115,    38,   116,   190,   187,   250,   157,
     250,   253,   128,     3,     8,   243,   249,   128,    83,    84,
      80,   190,    10,    11,    12,    13,    14,    15,    16,    17,
     232,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,   385,   115,   110,   381,   382,   115,   228,
     115,   182,   232,   250,   119,   166,   121,   122,   123,   114,
     125,   121,   127,   128,   129,   177,   250,   132,   133,   207,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   250,   252,    17,   207,     3,     4,     5,     6,
       7,     8,   427,   163,   184,   430,   431,   491,   252,   434,
      17,    18,   250,   412,   190,   170,   177,    40,    25,    13,
     177,    15,    16,   250,   102,   105,    33,   177,   208,   154,
      37,   236,   187,    56,   189,   115,    43,   187,   154,   236,
     190,   250,   197,    50,   272,   233,   249,   249,     3,     4,
       5,     6,     7,     8,   103,    78,    63,    64,    65,   214,
     215,   187,    17,    18,   144,   293,   115,    79,   500,    89,
      25,    26,    89,   237,   228,   225,   252,   173,    33,     3,
       3,    79,   115,   237,   104,     3,   250,   247,    43,   169,
      97,   252,   249,   251,   252,    50,   250,   251,   110,   250,
      97,   118,   253,   115,   124,   128,   202,   251,    63,    64,
      65,   251,   110,   125,    38,    19,   251,   115,   346,   274,
     275,   252,   252,   252,   252,   280,   252,   251,     9,    84,
      85,   154,   144,    37,     3,     4,     5,     6,     7,     8,
     237,   296,    97,   166,   177,   241,   144,   239,    17,    18,
     305,   311,   172,   250,   314,   110,    25,   312,   250,   584,
     177,     3,   179,   454,   260,   250,   473,   458,   253,   324,
     325,     3,   463,   328,    43,   253,     3,    46,   227,   334,
     250,    50,   607,   253,   252,   250,   193,    62,   253,   344,
     207,    52,   347,    54,    63,    64,    65,   250,   250,   222,
     253,   253,    38,   220,    26,    27,    28,    29,    30,   252,
       3,     4,     5,     6,     7,     8,   252,   372,   251,   252,
       4,     5,     6,     7,    17,    18,   250,     4,    97,   253,
       7,     3,    25,   268,   269,    26,   271,   244,   245,   246,
     247,   248,   252,   118,   252,   252,   201,   202,   203,   404,
      43,   206,   127,   303,   304,   410,   411,    50,   133,   252,
     250,   250,   131,   253,   253,     3,   250,   422,   423,   253,
      63,    64,    65,   243,   244,   250,   293,   152,   253,     3,
     297,   298,   299,   250,   187,   250,   253,     0,   253,   244,
     245,   246,   247,   248,     3,     4,     5,     6,     7,     8,
     335,   252,   250,   338,    97,   253,   323,   182,    17,    18,
       3,   250,   250,   468,   253,   253,    25,   472,   250,   474,
     475,   253,   477,     3,     4,     5,     6,     7,     8,   250,
       3,   206,   253,   253,    43,     3,     3,    17,    18,   420,
     421,    50,   127,   163,   161,    25,    26,     3,    61,   218,
       3,   253,   253,   253,    63,    64,    65,   253,   253,   252,
     252,   252,   252,    43,    30,   128,   128,    80,   128,   127,
      50,   127,     3,   156,    20,   244,   245,   246,   247,   248,
     134,   252,    47,    63,    64,    65,   157,   124,    97,   108,
     253,   546,   102,   253,   253,     3,     3,     3,     4,     5,
       6,     7,     8,   252,   252,   128,     3,   128,   121,     3,
       3,    17,    18,   253,   253,    47,   253,    97,   109,    25,
       3,     4,     5,     6,     7,     8,     3,     4,     5,     6,
       7,     8,   253,   127,    17,    18,   252,    43,   253,   253,
      17,    18,    25,   236,    50,   253,   252,   252,    25,    20,
     252,   244,   245,   246,   247,   248,   252,    63,    64,    65,
      43,   225,   252,   252,   177,    20,    43,    50,   250,     3,
       3,   252,    78,    50,   187,   253,   252,   190,   187,   252,
      63,    64,    65,    43,   252,   252,    63,    64,    65,    20,
       5,    97,     4,   252,     5,    78,     5,   518,   250,   520,
     183,    78,   125,   524,     3,   526,   253,   253,     4,   154,
     128,     5,   225,   190,    97,     4,     4,   250,   253,     4,
      97,    23,    24,    25,    26,    27,    28,    29,    30,     3,
       4,     5,     6,     7,     8,   244,   245,   246,   247,   248,
       8,   125,   410,    17,    18,   530,   157,   376,   256,    39,
     301,    25,   174,    24,   107,   270,     3,     4,     5,     6,
       7,     8,   477,   522,   244,   245,   246,   247,   248,    43,
      17,    18,   384,   377,   595,   596,    50,   598,    25,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    63,
      64,    65,    85,   285,   116,    -1,    43,   511,   512,    -1,
     514,   515,   516,    50,    78,   519,    -1,   521,    -1,   523,
      -1,   525,    -1,    -1,    -1,    -1,    63,    64,    65,    -1,
      -1,    -1,    -1,    97,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,   244,   245,
     246,   247,   248,    24,    25,    26,    27,    28,    29,    30,
      97,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      -1,   244,   245,   246,   247,   248,    -1,   244,   245,   246,
     247,   248,    10,    11,    12,    13,    14,    15,    16,    17,
      -1,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    -1,    -1,    -1,
     244,   245,   246,   247,   248,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,   244,   245,   246,
     247,   248,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   105,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    10,    11,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    11,    12,    13,    14,
      15,    16,    17,    -1,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    12,    13,    14,    15,
      16,    17,    -1,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,   253,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,
      12,    13,    14,    15,    16,    17,   253,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      -1,    -1,    -1,    -1,   250,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    10,    11,    12,
      13,    14,    15,    16,    17,   250,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    42,    43,
      44,    45,    -1,    -1,   438,   439,    -1,   441,    52,    -1,
     444,   445,    -1,   447,   448,   449,    -1,    -1,    -1,   453,
      -1,   455,    -1,   457,    -1,   250,    70,    71,   462,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,   101,    -1,    -1,
     250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,   123,
      -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,   242,   141,   142,    -1,
      -1,    -1,   146,   147,   148,    -1,    13,    14,    15,    16,
      17,   236,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,   172,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   211,
      -1,    -1,    -1,    -1,    -1,    -1,   190,    -1,   192,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   209,    -1,    -1,   212,   213,
     214,   215,   216,    -1,    -1,    -1,    -1,    -1,   211,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   233,
     234,    -1,    -1,    -1,    -1,    -1,    -1,   241,    10,    11,
      12,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    10,
      11,    12,    13,    14,    15,    16,    17,    -1,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    10,    11,    12,    13,    14,    15,    16,    17,    -1,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      39,    -1,    -1,   105,    -1,    10,    11,    12,    13,    14,
      15,    16,    17,    94,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    10,    11,    12,    13,    14,    15,    16,
      17,    -1,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    -1,    -1,    -1,    -1,    36,
      10,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    11,    12,    13,    14,    15,    16,    17,    -1,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    13,    14,    15,    16,    17,    -1,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int16 yystos[] =
{
       0,    61,    80,   121,   177,   187,   190,   225,   255,   256,
     257,   287,   291,   299,   300,   303,   305,   319,    68,   184,
     208,   318,   288,   293,   293,   268,     8,   320,   321,   293,
     301,     0,   256,   249,   114,   304,   304,   207,     3,   105,
     115,   144,   169,   289,    79,   110,   115,   125,   144,   294,
     294,     3,     4,     5,     6,     7,     8,    17,    18,    25,
      26,    33,    43,    50,    63,    64,    65,    84,    85,    97,
     110,   201,   202,   203,   206,   244,   245,   246,   247,   248,
     269,   270,   322,     9,    20,   250,   115,   144,     3,   252,
     271,   272,   273,   276,   286,   249,    97,     3,     3,   304,
     251,   290,     3,   289,   105,   250,     3,     3,   251,   252,
       9,   322,   322,   322,   322,   236,   322,   327,   252,   252,
     252,   252,   252,   252,   105,   250,     3,    10,    11,    12,
      13,    14,    15,    16,    17,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    38,   275,   322,
     322,   321,   251,   275,   257,   271,   190,   250,    62,   118,
     133,   152,   182,   206,   277,   279,    38,   274,     3,    26,
     237,   258,   228,   271,     3,   190,   252,   295,   190,   295,
       3,   322,   323,   324,   322,   322,   327,    91,    94,   236,
     257,   322,   323,    46,   131,   218,   323,   325,   322,   322,
      26,   322,   271,   270,   322,   322,   322,   252,     6,    17,
     154,   322,   322,    13,    15,    16,   322,    33,    37,   193,
     252,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,     3,     3,   103,   115,   227,   283,   253,   253,
       3,   302,   272,   133,   182,   280,   273,   127,   163,   278,
       3,   115,   177,   251,   252,   316,   317,   322,   161,   264,
     271,   258,   290,     3,   298,     3,   267,   232,   257,   298,
     232,   257,   250,   253,   211,    91,    94,   322,   322,   253,
     105,   253,   253,   322,   250,   250,   253,   253,   258,   257,
     323,     6,   154,   252,   322,   322,    36,   252,   252,   252,
     257,   275,   128,   128,   128,    20,   251,   250,   258,   278,
     278,   127,   156,   273,   127,     3,   106,   116,   128,   166,
     306,   307,   308,   274,    47,   134,   265,   258,    20,   157,
     250,   292,   250,   253,   252,   296,   292,   292,   296,   292,
     323,   322,   322,    94,   211,   322,   105,   124,   326,   326,
     108,   259,   253,   253,   257,   323,   322,   257,   257,   257,
     253,   283,   102,   284,   284,   284,   322,     3,     3,   264,
     273,   322,   156,   228,   281,   282,   273,   252,   316,   116,
     128,   252,   252,   128,   250,   253,     3,   257,   260,   322,
     322,    78,   322,   128,     3,     3,    78,   297,   322,   250,
     292,   292,    94,   322,   102,   253,   323,   322,   253,   253,
      47,   109,   263,   253,   253,   253,   253,   253,   127,   252,
     252,   252,    20,    20,   251,   265,   322,   252,   282,   306,
     252,   252,   267,   267,   252,   307,   316,    42,    43,    44,
      45,    52,    70,    71,    76,    87,    95,   101,   122,   123,
     141,   142,   146,   147,   148,   172,   190,   192,   209,   212,
     213,   214,   215,   216,   233,   234,   241,   314,   250,    39,
      81,   261,   250,   225,    20,   250,   253,   252,   322,   253,
      72,    73,    74,    75,   111,   112,   113,   241,   242,   260,
     322,   264,     3,   285,   285,   285,   322,   322,     3,   267,
     253,   267,   267,   253,   253,   267,   252,   310,   310,   310,
     310,   310,   310,   252,   310,   310,   310,    43,   311,   310,
     311,   310,   252,   310,   311,   310,   311,   252,   252,   309,
     322,   322,   298,    78,   322,    78,   322,   297,   253,   239,
     262,   265,   250,   253,   253,   253,    20,   253,   316,   253,
     253,   253,     5,   312,   313,   312,   312,     4,   315,   312,
     312,   312,   313,   312,   313,   312,   315,   312,   313,   312,
     313,     5,     5,    17,    40,    56,    78,   128,   154,   166,
     222,   261,   253,   183,   125,   266,     3,   322,   250,   253,
     224,   243,    52,    54,   250,   253,   253,   253,   253,   154,
       4,     4,     5,     6,     7,   128,   128,   252,   267,     5,
     190,     4,     4,   313,   313,   313,   267,   253,     4,   253
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int16 yyr1[] =
{
       0,   254,   255,   255,   256,   257,   257,   258,   258,   259,
     259,   260,   260,   261,   261,   261,   262,   262,   263,   263,
     264,   264,   265,   265,   265,   266,   266,   267,   267,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   269,   269,
     269,   270,   271,   271,   272,   272,   273,   273,   273,   273,
     274,   274,   275,   275,   275,   276,   276,   276,   276,   276,
     277,   277,   277,   278,   278,   279,   279,   280,   280,   280,
     281,   281,   282,   282,   283,   283,   283,   283,   284,   284,
     285,   285,   286,   256,   287,   288,   288,   288,   288,   287,
     289,   289,   290,   290,   287,   256,   291,   292,   292,   293,
     293,   293,   293,   293,   294,   294,   295,   295,   296,   296,
     297,   297,   297,   297,   291,   291,   298,   298,   298,   298,
     256,   299,   299,   299,   256,   300,   301,   301,   301,   302,
     302,   302,   302,   256,   303,   303,   304,   304,   256,   305,
     305,   305,   305,   305,   305,   306,   306,   308,   307,   307,
     307,   307,   307,   307,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   309,   309,   309,   310,   310,   310,
     311,   311,   312,   312,   312,   313,   313,   313,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   314,   314,
     314,   314,   314,   314,   314,   314,   314,   314,   315,   315,
     316,   317,   317,   317,   318,   318,   256,   319,   320,   320,
     321,   321,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   323,   323,   324,   324,
     322,   322,   322,   322,   322,   322,   322,   322,   322,   322,
     322,   322,   322,   325,   325,   325,   322,   322,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   322,   322,   322,
     322,   327,   327,   322,   322,   322,   322,   322,   322,   322,
     322
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     3,     1,     3,    11,     0,     2,     0,
       4,     2,     4,     0,     1,     1,     0,     2,     0,     2,
       0,     3,     0,     2,     4,     0,     2,     1,     3,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     1,     3,
       1,     2,     1,     3,     1,     1,     3,     5,     3,     3,
       1,     0,     2,     1,     0,     5,     3,     5,     6,     5,
       0,     1,     1,     0,     1,     1,     1,     2,     2,     0,
       1,     0,     2,     4,     6,     6,     6,     0,     2,     0,
       1,     3,     3,     1,     7,     2,     2,     2,     0,     6,
       2,     4,     0,     2,     7,     1,     8,     0,     4,     0,
       2,     2,     2,     2,     1,     0,     0,     3,     3,     5,
       1,     1,     3,     3,     7,     7,     3,     3,     5,     5,
       1,     8,     7,     7,     1,     8,     0,     2,     2,     3,
       5,     5,     7,     1,     4,     4,     0,     2,     1,     8,
      10,     9,     6,    11,     8,     1,     3,     0,     4,     5,
       4,     4,     5,     5,     0,     3,     2,     3,     3,     3,
       3,     2,     5,     3,     3,     2,     3,     0,     3,     5,
       0,     1,     0,     2,     2,     0,     4,     3,     2,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     1,
       1,     1,     1,     1,     3,     5,     2,     4,     1,     1,
       1,     1,     3,     3,     3,     3,     5,     5,     1,     3,
       3,     0,     1,     1,     0,     1,     1,     2,     1,     3,
       3,     3,     1,     1,     3,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     2,     3,     3,     3,     3,
       5,     6,     6,     6,     3,     3,     3,     3,     2,     2,
       3,     3,     4,     3,     4,     5,     1,     3,     0,     1,
       5,     6,     5,     6,     4,     4,     4,     4,     4,     6,
       8,     4,     7,     1,     1,     1,     6,     6,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     4,     6,     3,
       5,     4,     5,     3,     4,     3,     4,     1,     1,     1,
       2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (0)
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

YY_ATTRIBUTE_UNUSED
static int
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
{
  int res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += YYFPRINTF (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += YYFPRINTF (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += YYFPRINTF (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += YYFPRINTF (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += YYFPRINTF (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  YYUSE (yylocationp);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  YY_LOCATION_PRINT (yyo, *yylocationp);
  YYFPRINTF (yyo, ": ");
  yy_symbol_value_print (yyo, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                       , &(yylsp[(yyi + 1) - (yynrhs)])                       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, yylsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.
       'yyls': related to locations.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[3];

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;
        YYLTYPE *yyls1 = yyls;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yyls1, yysize * YYSIZEOF (*yylsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
        yyls = yyls1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
        YYSTACK_RELOCATE (yyls_alloc, yyls);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
  *++yylsp = yylloc;

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location. */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  yyerror_range[1] = yyloc;
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 4:
#line 313 "pmysql.y"
                  { emit("STMT"); }
#line 2351 "pmysql.tab.c"
    break;

  case 5:
#line 317 "pmysql.y"
                        { emit("SELECTNODATA %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2357 "pmysql.tab.c"
    break;

  case 6:
#line 321 "pmysql.y"
                   { emit("SELECT %d %d %d", (yyvsp[-9].intval), (yyvsp[-8].intval), (yyvsp[-6].intval)); }
#line 2363 "pmysql.tab.c"
    break;

  case 8:
#line 325 "pmysql.y"
                { emit("WHERE"); }
#line 2369 "pmysql.tab.c"
    break;

  case 10:
#line 329 "pmysql.y"
                             { emit("GROUPBYLIST %d %d", (yyvsp[-1].intval), (yyvsp[0].intval)); }
#line 2375 "pmysql.tab.c"
    break;

  case 11:
#line 333 "pmysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = 1; }
#line 2381 "pmysql.tab.c"
    break;

  case 12:
#line 335 "pmysql.y"
                             { emit("GROUPBY %d",  (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2387 "pmysql.tab.c"
    break;

  case 13:
#line 338 "pmysql.y"
                        { (yyval.intval) = 0; }
#line 2393 "pmysql.tab.c"
    break;

  case 14:
#line 339 "pmysql.y"
                        { (yyval.intval) = 0; }
#line 2399 "pmysql.tab.c"
    break;

  case 15:
#line 340 "pmysql.y"
                        { (yyval.intval) = 1; }
#line 2405 "pmysql.tab.c"
    break;

  case 16:
#line 343 "pmysql.y"
                            { (yyval.intval) = 0; }
#line 2411 "pmysql.tab.c"
    break;

  case 17:
#line 344 "pmysql.y"
                  { (yyval.intval) = 1; }
#line 2417 "pmysql.tab.c"
    break;

  case 19:
#line 347 "pmysql.y"
                                    { emit("HAVING"); }
#line 2423 "pmysql.tab.c"
    break;

  case 21:
#line 349 "pmysql.y"
                                               { emit("ORDERBY %d", (yyvsp[0].intval)); }
#line 2429 "pmysql.tab.c"
    break;

  case 23:
#line 352 "pmysql.y"
                                  { emit("LIMIT 1"); }
#line 2435 "pmysql.tab.c"
    break;

  case 24:
#line 353 "pmysql.y"
                                    { emit("LIMIT 2"); }
#line 2441 "pmysql.tab.c"
    break;

  case 26:
#line 357 "pmysql.y"
                      { emit("INTO %d", (yyvsp[0].intval)); }
#line 2447 "pmysql.tab.c"
    break;

  case 27:
#line 360 "pmysql.y"
                  { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2453 "pmysql.tab.c"
    break;

  case 28:
#line 361 "pmysql.y"
                          { emit("COLUMN %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2459 "pmysql.tab.c"
    break;

  case 29:
#line 364 "pmysql.y"
                                      { (yyval.intval) = 0; }
#line 2465 "pmysql.tab.c"
    break;

  case 30:
#line 365 "pmysql.y"
                                  { if((yyval.intval) & 01) yyerror("duplicate ALL option"); (yyval.intval) = (yyvsp[-1].intval) | 01; }
#line 2471 "pmysql.tab.c"
    break;

  case 31:
#line 366 "pmysql.y"
                                  { if((yyval.intval) & 02) yyerror("duplicate DISTINCT option"); (yyval.intval) = (yyvsp[-1].intval) | 02; }
#line 2477 "pmysql.tab.c"
    break;

  case 32:
#line 367 "pmysql.y"
                                  { if((yyval.intval) & 04) yyerror("duplicate DISTINCTROW option"); (yyval.intval) = (yyvsp[-1].intval) | 04; }
#line 2483 "pmysql.tab.c"
    break;

  case 33:
#line 368 "pmysql.y"
                                  { if((yyval.intval) & 010) yyerror("duplicate HIGH_PRIORITY option"); (yyval.intval) = (yyvsp[-1].intval) | 010; }
#line 2489 "pmysql.tab.c"
    break;

  case 34:
#line 369 "pmysql.y"
                                  { if((yyval.intval) & 020) yyerror("duplicate STRAIGHT_JOIN option"); (yyval.intval) = (yyvsp[-1].intval) | 020; }
#line 2495 "pmysql.tab.c"
    break;

  case 35:
#line 370 "pmysql.y"
                                  { if((yyval.intval) & 040) yyerror("duplicate SQL_SMALL_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 040; }
#line 2501 "pmysql.tab.c"
    break;

  case 36:
#line 371 "pmysql.y"
                                  { if((yyval.intval) & 0100) yyerror("duplicate SQL_BIG_RESULT option"); (yyval.intval) = (yyvsp[-1].intval) | 0100; }
#line 2507 "pmysql.tab.c"
    break;

  case 37:
#line 372 "pmysql.y"
                                  { if((yyval.intval) & 0200) yyerror("duplicate SQL_CALC_FOUND_ROWS option"); (yyval.intval) = (yyvsp[-1].intval) | 0200; }
#line 2513 "pmysql.tab.c"
    break;

  case 38:
#line 375 "pmysql.y"
                              { (yyval.intval) = 1; }
#line 2519 "pmysql.tab.c"
    break;

  case 39:
#line 376 "pmysql.y"
                                       {(yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2525 "pmysql.tab.c"
    break;

  case 40:
#line 377 "pmysql.y"
          { emit("SELECTALL"); (yyval.intval) = 1; }
#line 2531 "pmysql.tab.c"
    break;

  case 42:
#line 382 "pmysql.y"
                                     { (yyval.intval) = 1; }
#line 2537 "pmysql.tab.c"
    break;

  case 43:
#line 383 "pmysql.y"
                                           { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2543 "pmysql.tab.c"
    break;

  case 46:
#line 391 "pmysql.y"
                                 { emit("TABLE %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 2549 "pmysql.tab.c"
    break;

  case 47:
#line 392 "pmysql.y"
                                          { emit("TABLE %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval));
                               free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); }
#line 2556 "pmysql.tab.c"
    break;

  case 48:
#line 394 "pmysql.y"
                               { emit("SUBQUERYAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2562 "pmysql.tab.c"
    break;

  case 49:
#line 395 "pmysql.y"
                             { emit("TABLEREFERENCES %d", (yyvsp[-1].intval)); }
#line 2568 "pmysql.tab.c"
    break;

  case 52:
#line 402 "pmysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2574 "pmysql.tab.c"
    break;

  case 53:
#line 403 "pmysql.y"
                      { emit ("ALIAS %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 2580 "pmysql.tab.c"
    break;

  case 55:
#line 409 "pmysql.y"
                  { emit("JOIN %d", 0100+(yyvsp[-3].intval)); }
#line 2586 "pmysql.tab.c"
    break;

  case 56:
#line 411 "pmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2592 "pmysql.tab.c"
    break;

  case 57:
#line 413 "pmysql.y"
                  { emit("JOIN %d", 0200); }
#line 2598 "pmysql.tab.c"
    break;

  case 58:
#line 415 "pmysql.y"
                  { emit("JOIN %d", 0300+(yyvsp[-4].intval)+(yyvsp[-3].intval)); }
#line 2604 "pmysql.tab.c"
    break;

  case 59:
#line 417 "pmysql.y"
                  { emit("JOIN %d", 0400+(yyvsp[-2].intval)); }
#line 2610 "pmysql.tab.c"
    break;

  case 60:
#line 420 "pmysql.y"
                           { (yyval.intval) = 0; }
#line 2616 "pmysql.tab.c"
    break;

  case 61:
#line 421 "pmysql.y"
           { (yyval.intval) = 1; }
#line 2622 "pmysql.tab.c"
    break;

  case 62:
#line 422 "pmysql.y"
            { (yyval.intval) = 2; }
#line 2628 "pmysql.tab.c"
    break;

  case 63:
#line 425 "pmysql.y"
                      { (yyval.intval) = 0; }
#line 2634 "pmysql.tab.c"
    break;

  case 64:
#line 426 "pmysql.y"
           {(yyval.intval) = 4; }
#line 2640 "pmysql.tab.c"
    break;

  case 65:
#line 429 "pmysql.y"
                    { (yyval.intval) = 1; }
#line 2646 "pmysql.tab.c"
    break;

  case 66:
#line 430 "pmysql.y"
            { (yyval.intval) = 2; }
#line 2652 "pmysql.tab.c"
    break;

  case 67:
#line 433 "pmysql.y"
                                        { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 2658 "pmysql.tab.c"
    break;

  case 68:
#line 434 "pmysql.y"
                      { (yyval.intval) = 2 + (yyvsp[0].intval); }
#line 2664 "pmysql.tab.c"
    break;

  case 69:
#line 435 "pmysql.y"
               { (yyval.intval) = 0; }
#line 2670 "pmysql.tab.c"
    break;

  case 72:
#line 441 "pmysql.y"
            { emit("ONEXPR"); }
#line 2676 "pmysql.tab.c"
    break;

  case 73:
#line 442 "pmysql.y"
                                { emit("USING %d", (yyvsp[-1].intval)); }
#line 2682 "pmysql.tab.c"
    break;

  case 74:
#line 447 "pmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 010+(yyvsp[-3].intval)); }
#line 2688 "pmysql.tab.c"
    break;

  case 75:
#line 449 "pmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 020+(yyvsp[-3].intval)); }
#line 2694 "pmysql.tab.c"
    break;

  case 76:
#line 451 "pmysql.y"
                  { emit("INDEXHINT %d %d", (yyvsp[-1].intval), 030+(yyvsp[-3].intval)); }
#line 2700 "pmysql.tab.c"
    break;

  case 78:
#line 455 "pmysql.y"
                       { (yyval.intval) = 1; }
#line 2706 "pmysql.tab.c"
    break;

  case 79:
#line 456 "pmysql.y"
               { (yyval.intval) = 0; }
#line 2712 "pmysql.tab.c"
    break;

  case 80:
#line 459 "pmysql.y"
                  { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 2718 "pmysql.tab.c"
    break;

  case 81:
#line 460 "pmysql.y"
                         { emit("INDEX %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2724 "pmysql.tab.c"
    break;

  case 82:
#line 463 "pmysql.y"
                                    { emit("SUBQUERY"); }
#line 2730 "pmysql.tab.c"
    break;

  case 83:
#line 468 "pmysql.y"
                  { emit("STMT"); }
#line 2736 "pmysql.tab.c"
    break;

  case 84:
#line 473 "pmysql.y"
                  { emit("DELETEONE %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2742 "pmysql.tab.c"
    break;

  case 85:
#line 476 "pmysql.y"
                                      { (yyval.intval) = (yyvsp[-1].intval) + 01; }
#line 2748 "pmysql.tab.c"
    break;

  case 86:
#line 477 "pmysql.y"
                       { (yyval.intval) = (yyvsp[-1].intval) + 02; }
#line 2754 "pmysql.tab.c"
    break;

  case 87:
#line 478 "pmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) + 04; }
#line 2760 "pmysql.tab.c"
    break;

  case 88:
#line 479 "pmysql.y"
               { (yyval.intval) = 0; }
#line 2766 "pmysql.tab.c"
    break;

  case 89:
#line 485 "pmysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-4].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2772 "pmysql.tab.c"
    break;

  case 90:
#line 487 "pmysql.y"
                               { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = 1; }
#line 2778 "pmysql.tab.c"
    break;

  case 91:
#line 489 "pmysql.y"
            { emit("TABLE %s", (yyvsp[-1].strval)); free((yyvsp[-1].strval)); (yyval.intval) = (yyvsp[-3].intval) + 1; }
#line 2784 "pmysql.tab.c"
    break;

  case 94:
#line 497 "pmysql.y"
            { emit("DELETEMULTI %d %d %d", (yyvsp[-5].intval), (yyvsp[-3].intval), (yyvsp[-1].intval)); }
#line 2790 "pmysql.tab.c"
    break;

  case 95:
#line 502 "pmysql.y"
                  { emit("STMT"); }
#line 2796 "pmysql.tab.c"
    break;

  case 96:
#line 508 "pmysql.y"
                     { emit("INSERTVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2802 "pmysql.tab.c"
    break;

  case 98:
#line 512 "pmysql.y"
                                             { emit("DUPUPDATE %d", (yyvsp[0].intval)); }
#line 2808 "pmysql.tab.c"
    break;

  case 99:
#line 515 "pmysql.y"
                       { (yyval.intval) = 0; }
#line 2814 "pmysql.tab.c"
    break;

  case 100:
#line 516 "pmysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2820 "pmysql.tab.c"
    break;

  case 101:
#line 517 "pmysql.y"
                         { (yyval.intval) = (yyvsp[-1].intval) | 02 ; }
#line 2826 "pmysql.tab.c"
    break;

  case 102:
#line 518 "pmysql.y"
                               { (yyval.intval) = (yyvsp[-1].intval) | 04 ; }
#line 2832 "pmysql.tab.c"
    break;

  case 103:
#line 519 "pmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2838 "pmysql.tab.c"
    break;

  case 107:
#line 526 "pmysql.y"
                         { emit("INSERTCOLS %d", (yyvsp[-1].intval)); }
#line 2844 "pmysql.tab.c"
    break;

  case 108:
#line 529 "pmysql.y"
                                      { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = 1; }
#line 2850 "pmysql.tab.c"
    break;

  case 109:
#line 530 "pmysql.y"
                                              { emit("VALUES %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2856 "pmysql.tab.c"
    break;

  case 110:
#line 533 "pmysql.y"
          { (yyval.intval) = 1; }
#line 2862 "pmysql.tab.c"
    break;

  case 111:
#line 534 "pmysql.y"
             { emit("DEFAULT"); (yyval.intval) = 1; }
#line 2868 "pmysql.tab.c"
    break;

  case 112:
#line 535 "pmysql.y"
                          { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2874 "pmysql.tab.c"
    break;

  case 113:
#line 536 "pmysql.y"
                             { emit("DEFAULT"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 2880 "pmysql.tab.c"
    break;

  case 114:
#line 542 "pmysql.y"
     { emit("INSERTASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2886 "pmysql.tab.c"
    break;

  case 115:
#line 547 "pmysql.y"
                    { emit("INSERTSELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2892 "pmysql.tab.c"
    break;

  case 116:
#line 552 "pmysql.y"
     { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
       emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2899 "pmysql.tab.c"
    break;

  case 117:
#line 555 "pmysql.y"
               { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2906 "pmysql.tab.c"
    break;

  case 118:
#line 558 "pmysql.y"
               { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-4].intval));
                 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2913 "pmysql.tab.c"
    break;

  case 119:
#line 561 "pmysql.y"
               { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-4].intval));
                 emit("DEFAULT"); emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2920 "pmysql.tab.c"
    break;

  case 120:
#line 566 "pmysql.y"
                   { emit("STMT"); }
#line 2926 "pmysql.tab.c"
    break;

  case 121:
#line 572 "pmysql.y"
                     { emit("REPLACEVALS %d %d %s", (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 2932 "pmysql.tab.c"
    break;

  case 122:
#line 578 "pmysql.y"
     { emit("REPLACEASGN %d %d %s", (yyvsp[-5].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2938 "pmysql.tab.c"
    break;

  case 123:
#line 583 "pmysql.y"
                    { emit("REPLACESELECT %d %s", (yyvsp[-5].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 2944 "pmysql.tab.c"
    break;

  case 124:
#line 587 "pmysql.y"
                  { emit("STMT"); }
#line 2950 "pmysql.tab.c"
    break;

  case 125:
#line 594 "pmysql.y"
          { emit("UPDATE %d %d %d", (yyvsp[-6].intval), (yyvsp[-5].intval), (yyvsp[-3].intval)); }
#line 2956 "pmysql.tab.c"
    break;

  case 126:
#line 597 "pmysql.y"
                       { (yyval.intval) = 0; }
#line 2962 "pmysql.tab.c"
    break;

  case 127:
#line 598 "pmysql.y"
                              { (yyval.intval) = (yyvsp[-1].intval) | 01 ; }
#line 2968 "pmysql.tab.c"
    break;

  case 128:
#line 599 "pmysql.y"
                        { (yyval.intval) = (yyvsp[-1].intval) | 010 ; }
#line 2974 "pmysql.tab.c"
    break;

  case 129:
#line 604 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
	 emit("ASSIGN %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2981 "pmysql.tab.c"
    break;

  case 130:
#line 607 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-4].strval));
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 2988 "pmysql.tab.c"
    break;

  case 131:
#line 610 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s", (yyvsp[-2].strval));
	 emit("ASSIGN %s.%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 2995 "pmysql.tab.c"
    break;

  case 132:
#line 613 "pmysql.y"
       { if ((yyvsp[-1].subtok) != 4) yyerror("bad insert assignment to %s.$s", (yyvsp[-4].strval), (yyvsp[-2].strval));
	 emit("ASSIGN %s.%s", (yyvsp[-4].strval), (yyvsp[-2].strval)); free((yyvsp[-4].strval)); free((yyvsp[-2].strval)); (yyval.intval) = 1; }
#line 3002 "pmysql.tab.c"
    break;

  case 133:
#line 620 "pmysql.y"
                           { emit("STMT"); }
#line 3008 "pmysql.tab.c"
    break;

  case 134:
#line 624 "pmysql.y"
                                            { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3014 "pmysql.tab.c"
    break;

  case 135:
#line 625 "pmysql.y"
                                          { emit("CREATEDATABASE %d %s", (yyvsp[-1].intval), (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3020 "pmysql.tab.c"
    break;

  case 136:
#line 628 "pmysql.y"
                              { (yyval.intval) = 0; }
#line 3026 "pmysql.tab.c"
    break;

  case 137:
#line 629 "pmysql.y"
                         { if(!(yyvsp[0].subtok))yyerror("IF EXISTS doesn't exist");
                        (yyval.intval) = (yyvsp[0].subtok); /* NOT EXISTS hack */ }
#line 3033 "pmysql.tab.c"
    break;

  case 138:
#line 635 "pmysql.y"
                        { emit("STMT"); }
#line 3039 "pmysql.tab.c"
    break;

  case 139:
#line 639 "pmysql.y"
                           { emit("CREATE %d %d %d %s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3045 "pmysql.tab.c"
    break;

  case 140:
#line 643 "pmysql.y"
                           { emit("CREATE %d %d %d %s.%s", (yyvsp[-8].intval), (yyvsp[-6].intval), (yyvsp[-1].intval), (yyvsp[-5].strval), (yyvsp[-3].strval));
                          free((yyvsp[-5].strval)); free((yyvsp[-3].strval)); }
#line 3052 "pmysql.tab.c"
    break;

  case 141:
#line 649 "pmysql.y"
                        { emit("CREATESELECT %d %d %d %s", (yyvsp[-7].intval), (yyvsp[-5].intval), (yyvsp[-2].intval), (yyvsp[-4].strval)); free((yyvsp[-4].strval)); }
#line 3058 "pmysql.tab.c"
    break;

  case 142:
#line 653 "pmysql.y"
                           { emit("CREATESELECT %d %d 0 %s", (yyvsp[-4].intval), (yyvsp[-2].intval), (yyvsp[-1].strval)); free((yyvsp[-1].strval)); }
#line 3064 "pmysql.tab.c"
    break;

  case 143:
#line 658 "pmysql.y"
                            { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-9].intval), (yyvsp[-7].intval), (yyvsp[-6].strval), (yyvsp[-4].strval));
                              free((yyvsp[-6].strval)); free((yyvsp[-4].strval)); }
#line 3071 "pmysql.tab.c"
    break;

  case 144:
#line 663 "pmysql.y"
                           { emit("CREATESELECT %d %d 0 %s.%s", (yyvsp[-6].intval), (yyvsp[-4].intval), (yyvsp[-3].strval), (yyvsp[-1].strval));
                          free((yyvsp[-3].strval)); free((yyvsp[-1].strval)); }
#line 3078 "pmysql.tab.c"
    break;

  case 145:
#line 667 "pmysql.y"
                                   { (yyval.intval) = 1; }
#line 3084 "pmysql.tab.c"
    break;

  case 146:
#line 668 "pmysql.y"
                                            { (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3090 "pmysql.tab.c"
    break;

  case 147:
#line 671 "pmysql.y"
                   { emit("STARTCOL"); }
#line 3096 "pmysql.tab.c"
    break;

  case 148:
#line 672 "pmysql.y"
                   { emit("COLUMNDEF %d %s", (yyvsp[-1].intval), (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3102 "pmysql.tab.c"
    break;

  case 149:
#line 674 "pmysql.y"
                                         { emit("PRIKEY %d", (yyvsp[-1].intval)); }
#line 3108 "pmysql.tab.c"
    break;

  case 150:
#line 675 "pmysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3114 "pmysql.tab.c"
    break;

  case 151:
#line 676 "pmysql.y"
                                         { emit("KEY %d", (yyvsp[-1].intval)); }
#line 3120 "pmysql.tab.c"
    break;

  case 152:
#line 677 "pmysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3126 "pmysql.tab.c"
    break;

  case 153:
#line 678 "pmysql.y"
                                         { emit("TEXTINDEX %d", (yyvsp[-1].intval)); }
#line 3132 "pmysql.tab.c"
    break;

  case 154:
#line 681 "pmysql.y"
                       { (yyval.intval) = 0; }
#line 3138 "pmysql.tab.c"
    break;

  case 155:
#line 682 "pmysql.y"
                                        { emit("ATTR NOTNULL"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3144 "pmysql.tab.c"
    break;

  case 157:
#line 684 "pmysql.y"
                                        { emit("ATTR DEFAULT STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3150 "pmysql.tab.c"
    break;

  case 158:
#line 685 "pmysql.y"
                                        { emit("ATTR DEFAULT NUMBER %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3156 "pmysql.tab.c"
    break;

  case 159:
#line 686 "pmysql.y"
                                        { emit("ATTR DEFAULT FLOAT %g", (yyvsp[0].floatval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3162 "pmysql.tab.c"
    break;

  case 160:
#line 687 "pmysql.y"
                                        { emit("ATTR DEFAULT BOOL %d", (yyvsp[0].intval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3168 "pmysql.tab.c"
    break;

  case 161:
#line 688 "pmysql.y"
                                        { emit("ATTR AUTOINC"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3174 "pmysql.tab.c"
    break;

  case 162:
#line 689 "pmysql.y"
                                             { emit("ATTR UNIQUEKEY %d", (yyvsp[-1].intval)); (yyval.intval) = (yyvsp[-4].intval) + 1; }
#line 3180 "pmysql.tab.c"
    break;

  case 163:
#line 690 "pmysql.y"
                             { emit("ATTR UNIQUEKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3186 "pmysql.tab.c"
    break;

  case 164:
#line 691 "pmysql.y"
                              { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3192 "pmysql.tab.c"
    break;

  case 165:
#line 692 "pmysql.y"
                      { emit("ATTR PRIKEY"); (yyval.intval) = (yyvsp[-1].intval) + 1; }
#line 3198 "pmysql.tab.c"
    break;

  case 166:
#line 693 "pmysql.y"
                                 { emit("ATTR COMMENT %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3204 "pmysql.tab.c"
    break;

  case 167:
#line 696 "pmysql.y"
                      { (yyval.intval) = 0; }
#line 3210 "pmysql.tab.c"
    break;

  case 168:
#line 697 "pmysql.y"
                    { (yyval.intval) = (yyvsp[-1].intval); }
#line 3216 "pmysql.tab.c"
    break;

  case 169:
#line 698 "pmysql.y"
                               { (yyval.intval) = (yyvsp[-3].intval) + 1000*(yyvsp[-1].intval); }
#line 3222 "pmysql.tab.c"
    break;

  case 170:
#line 701 "pmysql.y"
                      { (yyval.intval) = 0; }
#line 3228 "pmysql.tab.c"
    break;

  case 171:
#line 702 "pmysql.y"
            { (yyval.intval) = 4000; }
#line 3234 "pmysql.tab.c"
    break;

  case 172:
#line 705 "pmysql.y"
                  { (yyval.intval) = 0; }
#line 3240 "pmysql.tab.c"
    break;

  case 173:
#line 706 "pmysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 1000; }
#line 3246 "pmysql.tab.c"
    break;

  case 174:
#line 707 "pmysql.y"
                     { (yyval.intval) = (yyvsp[-1].intval) | 2000; }
#line 3252 "pmysql.tab.c"
    break;

  case 176:
#line 711 "pmysql.y"
                             { emit("COLCHARSET %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3258 "pmysql.tab.c"
    break;

  case 177:
#line 712 "pmysql.y"
                            { emit("COLCOLLATE %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3264 "pmysql.tab.c"
    break;

  case 178:
#line 716 "pmysql.y"
                    { (yyval.intval) = 10000 + (yyvsp[0].intval); }
#line 3270 "pmysql.tab.c"
    break;

  case 179:
#line 717 "pmysql.y"
                               { (yyval.intval) = 10000 + (yyvsp[-1].intval); }
#line 3276 "pmysql.tab.c"
    break;

  case 180:
#line 718 "pmysql.y"
                                { (yyval.intval) = 20000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3282 "pmysql.tab.c"
    break;

  case 181:
#line 719 "pmysql.y"
                                 { (yyval.intval) = 30000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3288 "pmysql.tab.c"
    break;

  case 182:
#line 720 "pmysql.y"
                           { (yyval.intval) = 40000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3294 "pmysql.tab.c"
    break;

  case 183:
#line 721 "pmysql.y"
                               { (yyval.intval) = 50000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3300 "pmysql.tab.c"
    break;

  case 184:
#line 722 "pmysql.y"
                              { (yyval.intval) = 60000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3306 "pmysql.tab.c"
    break;

  case 185:
#line 723 "pmysql.y"
                            { (yyval.intval) = 70000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3312 "pmysql.tab.c"
    break;

  case 186:
#line 724 "pmysql.y"
                              { (yyval.intval) = 80000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3318 "pmysql.tab.c"
    break;

  case 187:
#line 725 "pmysql.y"
                             { (yyval.intval) = 90000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3324 "pmysql.tab.c"
    break;

  case 188:
#line 726 "pmysql.y"
                               { (yyval.intval) = 110000 + (yyvsp[-1].intval) + (yyvsp[0].intval); }
#line 3330 "pmysql.tab.c"
    break;

  case 189:
#line 727 "pmysql.y"
          { (yyval.intval) = 100001; }
#line 3336 "pmysql.tab.c"
    break;

  case 190:
#line 728 "pmysql.y"
          { (yyval.intval) = 100002; }
#line 3342 "pmysql.tab.c"
    break;

  case 191:
#line 729 "pmysql.y"
               { (yyval.intval) = 100003; }
#line 3348 "pmysql.tab.c"
    break;

  case 192:
#line 730 "pmysql.y"
              { (yyval.intval) = 100004; }
#line 3354 "pmysql.tab.c"
    break;

  case 193:
#line 731 "pmysql.y"
          { (yyval.intval) = 100005; }
#line 3360 "pmysql.tab.c"
    break;

  case 194:
#line 732 "pmysql.y"
                             { (yyval.intval) = 120000 + (yyvsp[-1].intval); }
#line 3366 "pmysql.tab.c"
    break;

  case 195:
#line 733 "pmysql.y"
                                    { (yyval.intval) = 130000 + (yyvsp[-2].intval); }
#line 3372 "pmysql.tab.c"
    break;

  case 196:
#line 734 "pmysql.y"
                       { (yyval.intval) = 140000 + (yyvsp[0].intval); }
#line 3378 "pmysql.tab.c"
    break;

  case 197:
#line 735 "pmysql.y"
                              { (yyval.intval) = 150000 + (yyvsp[-1].intval); }
#line 3384 "pmysql.tab.c"
    break;

  case 198:
#line 736 "pmysql.y"
              { (yyval.intval) = 160001; }
#line 3390 "pmysql.tab.c"
    break;

  case 199:
#line 737 "pmysql.y"
          { (yyval.intval) = 160002; }
#line 3396 "pmysql.tab.c"
    break;

  case 200:
#line 738 "pmysql.y"
                { (yyval.intval) = 160003; }
#line 3402 "pmysql.tab.c"
    break;

  case 201:
#line 739 "pmysql.y"
              { (yyval.intval) = 160004; }
#line 3408 "pmysql.tab.c"
    break;

  case 202:
#line 740 "pmysql.y"
                                 { (yyval.intval) = 170000 + (yyvsp[-1].intval); }
#line 3414 "pmysql.tab.c"
    break;

  case 203:
#line 741 "pmysql.y"
                             { (yyval.intval) = 171000 + (yyvsp[-1].intval); }
#line 3420 "pmysql.tab.c"
    break;

  case 204:
#line 742 "pmysql.y"
                                   { (yyval.intval) = 172000 + (yyvsp[-1].intval); }
#line 3426 "pmysql.tab.c"
    break;

  case 205:
#line 743 "pmysql.y"
                                 { (yyval.intval) = 173000 + (yyvsp[-1].intval); }
#line 3432 "pmysql.tab.c"
    break;

  case 206:
#line 744 "pmysql.y"
                                    { (yyval.intval) = 200000 + (yyvsp[-2].intval); }
#line 3438 "pmysql.tab.c"
    break;

  case 207:
#line 745 "pmysql.y"
                                   { (yyval.intval) = 210000 + (yyvsp[-2].intval); }
#line 3444 "pmysql.tab.c"
    break;

  case 208:
#line 748 "pmysql.y"
                  { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = 1; }
#line 3450 "pmysql.tab.c"
    break;

  case 209:
#line 749 "pmysql.y"
                          { emit("ENUMVAL %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); (yyval.intval) = (yyvsp[-2].intval) + 1; }
#line 3456 "pmysql.tab.c"
    break;

  case 210:
#line 752 "pmysql.y"
                                                               { emit("CREATESELECT %d", (yyvsp[-2].intval)); }
#line 3462 "pmysql.tab.c"
    break;

  case 211:
#line 755 "pmysql.y"
                              { (yyval.intval) = 0; }
#line 3468 "pmysql.tab.c"
    break;

  case 212:
#line 756 "pmysql.y"
            { (yyval.intval) = 1; }
#line 3474 "pmysql.tab.c"
    break;

  case 213:
#line 757 "pmysql.y"
             { (yyval.intval) = 2; }
#line 3480 "pmysql.tab.c"
    break;

  case 214:
#line 760 "pmysql.y"
                           { (yyval.intval) = 0; }
#line 3486 "pmysql.tab.c"
    break;

  case 215:
#line 761 "pmysql.y"
               { (yyval.intval) = 1;}
#line 3492 "pmysql.tab.c"
    break;

  case 216:
#line 766 "pmysql.y"
               { emit("STMT"); }
#line 3498 "pmysql.tab.c"
    break;

  case 220:
#line 774 "pmysql.y"
                              { if ((yyvsp[-1].subtok) != 4) yyerror("bad set to @%s", (yyvsp[-2].strval));
		 emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3505 "pmysql.tab.c"
    break;

  case 221:
#line 776 "pmysql.y"
                          { emit("SET %s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3511 "pmysql.tab.c"
    break;

  case 222:
#line 781 "pmysql.y"
                    { emit("NAME %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3517 "pmysql.tab.c"
    break;

  case 223:
#line 782 "pmysql.y"
                     { emit("USERVAR %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3523 "pmysql.tab.c"
    break;

  case 224:
#line 783 "pmysql.y"
                   { emit("FIELDNAME %s.%s", (yyvsp[-2].strval), (yyvsp[0].strval)); free((yyvsp[-2].strval)); free((yyvsp[0].strval)); }
#line 3529 "pmysql.tab.c"
    break;

  case 225:
#line 784 "pmysql.y"
                   { emit("STRING %s", (yyvsp[0].strval)); free((yyvsp[0].strval)); }
#line 3535 "pmysql.tab.c"
    break;

  case 226:
#line 785 "pmysql.y"
                   { emit("NUMBER %d", (yyvsp[0].intval)); }
#line 3541 "pmysql.tab.c"
    break;

  case 227:
#line 786 "pmysql.y"
                   { emit("FLOAT %g", (yyvsp[0].floatval)); }
#line 3547 "pmysql.tab.c"
    break;

  case 228:
#line 787 "pmysql.y"
                   { emit("BOOL %d", (yyvsp[0].intval)); }
#line 3553 "pmysql.tab.c"
    break;

  case 229:
#line 790 "pmysql.y"
                    { emit("ADD"); }
#line 3559 "pmysql.tab.c"
    break;

  case 230:
#line 791 "pmysql.y"
                   { emit("SUB"); }
#line 3565 "pmysql.tab.c"
    break;

  case 231:
#line 792 "pmysql.y"
                   { emit("MUL"); }
#line 3571 "pmysql.tab.c"
    break;

  case 232:
#line 793 "pmysql.y"
                   { emit("DIV"); }
#line 3577 "pmysql.tab.c"
    break;

  case 233:
#line 794 "pmysql.y"
                   { emit("MOD"); }
#line 3583 "pmysql.tab.c"
    break;

  case 234:
#line 795 "pmysql.y"
                   { emit("MOD"); }
#line 3589 "pmysql.tab.c"
    break;

  case 235:
#line 796 "pmysql.y"
                           { emit("NEG"); }
#line 3595 "pmysql.tab.c"
    break;

  case 236:
#line 797 "pmysql.y"
                     { emit("AND"); }
#line 3601 "pmysql.tab.c"
    break;

  case 237:
#line 798 "pmysql.y"
                  { emit("OR"); }
#line 3607 "pmysql.tab.c"
    break;

  case 238:
#line 799 "pmysql.y"
                   { emit("XOR"); }
#line 3613 "pmysql.tab.c"
    break;

  case 239:
#line 800 "pmysql.y"
                          { emit("CMP %d", (yyvsp[-1].subtok)); }
#line 3619 "pmysql.tab.c"
    break;

  case 240:
#line 801 "pmysql.y"
                                         { emit("CMPSELECT %d", (yyvsp[-3].subtok)); }
#line 3625 "pmysql.tab.c"
    break;

  case 241:
#line 802 "pmysql.y"
                                             { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3631 "pmysql.tab.c"
    break;

  case 242:
#line 803 "pmysql.y"
                                              { emit("CMPANYSELECT %d", (yyvsp[-4].subtok)); }
#line 3637 "pmysql.tab.c"
    break;

  case 243:
#line 804 "pmysql.y"
                                             { emit("CMPALLSELECT %d", (yyvsp[-4].subtok)); }
#line 3643 "pmysql.tab.c"
    break;

  case 244:
#line 805 "pmysql.y"
                   { emit("BITOR"); }
#line 3649 "pmysql.tab.c"
    break;

  case 245:
#line 806 "pmysql.y"
                   { emit("BITAND"); }
#line 3655 "pmysql.tab.c"
    break;

  case 246:
#line 807 "pmysql.y"
                   { emit("BITXOR"); }
#line 3661 "pmysql.tab.c"
    break;

  case 247:
#line 808 "pmysql.y"
                     { emit("SHIFT %s", (yyvsp[-1].subtok)==1?"left":"right"); }
#line 3667 "pmysql.tab.c"
    break;

  case 248:
#line 809 "pmysql.y"
              { emit("NOT"); }
#line 3673 "pmysql.tab.c"
    break;

  case 249:
#line 810 "pmysql.y"
              { emit("NOT"); }
#line 3679 "pmysql.tab.c"
    break;

  case 250:
#line 811 "pmysql.y"
                         { emit("ASSIGN @%s", (yyvsp[-2].strval)); free((yyvsp[-2].strval)); }
#line 3685 "pmysql.tab.c"
    break;

  case 251:
#line 814 "pmysql.y"
                         { emit("ISNULL"); }
#line 3691 "pmysql.tab.c"
    break;

  case 252:
#line 815 "pmysql.y"
                         { emit("ISNULL"); emit("NOT"); }
#line 3697 "pmysql.tab.c"
    break;

  case 253:
#line 816 "pmysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); }
#line 3703 "pmysql.tab.c"
    break;

  case 254:
#line 817 "pmysql.y"
                         { emit("ISBOOL %d", (yyvsp[0].intval)); emit("NOT"); }
#line 3709 "pmysql.tab.c"
    break;

  case 255:
#line 820 "pmysql.y"
                                               { emit("BETWEEN"); }
#line 3715 "pmysql.tab.c"
    break;

  case 256:
#line 824 "pmysql.y"
               { (yyval.intval) = 1; }
#line 3721 "pmysql.tab.c"
    break;

  case 257:
#line 825 "pmysql.y"
                       { (yyval.intval) = 1 + (yyvsp[0].intval); }
#line 3727 "pmysql.tab.c"
    break;

  case 258:
#line 828 "pmysql.y"
                        { (yyval.intval) = 0; }
#line 3733 "pmysql.tab.c"
    break;

  case 260:
#line 832 "pmysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); }
#line 3739 "pmysql.tab.c"
    break;

  case 261:
#line 833 "pmysql.y"
                                     { emit("ISIN %d", (yyvsp[-1].intval)); emit("NOT"); }
#line 3745 "pmysql.tab.c"
    break;

  case 262:
#line 834 "pmysql.y"
                                     { emit("INSELECT"); }
#line 3751 "pmysql.tab.c"
    break;

  case 263:
#line 835 "pmysql.y"
                                     { emit("INSELECT"); emit("NOT"); }
#line 3757 "pmysql.tab.c"
    break;

  case 264:
#line 836 "pmysql.y"
                                     { emit("EXISTS"); if((yyvsp[-3].subtok))emit("NOT"); }
#line 3763 "pmysql.tab.c"
    break;

  case 265:
#line 839 "pmysql.y"
                                {  emit("CALL %d %s", (yyvsp[-1].intval), (yyvsp[-3].strval)); free((yyvsp[-3].strval)); }
#line 3769 "pmysql.tab.c"
    break;

  case 266:
#line 843 "pmysql.y"
                         { emit("COUNTALL"); }
#line 3775 "pmysql.tab.c"
    break;

  case 267:
#line 844 "pmysql.y"
                         { emit(" CALL 1 COUNT"); }
#line 3781 "pmysql.tab.c"
    break;

  case 268:
#line 846 "pmysql.y"
                                  {  emit("CALL %d SUBSTR", (yyvsp[-1].intval));}
#line 3787 "pmysql.tab.c"
    break;

  case 269:
#line 847 "pmysql.y"
                                       {  emit("CALL 2 SUBSTR"); }
#line 3793 "pmysql.tab.c"
    break;

  case 270:
#line 848 "pmysql.y"
                                                {  emit("CALL 3 SUBSTR"); }
#line 3799 "pmysql.tab.c"
    break;

  case 271:
#line 849 "pmysql.y"
                         { emit("CALL %d TRIM", (yyvsp[-1].intval)); }
#line 3805 "pmysql.tab.c"
    break;

  case 272:
#line 850 "pmysql.y"
                                               { emit("CALL 3 TRIM"); }
#line 3811 "pmysql.tab.c"
    break;

  case 273:
#line 853 "pmysql.y"
                  { emit("INT 1"); }
#line 3817 "pmysql.tab.c"
    break;

  case 274:
#line 854 "pmysql.y"
              { emit("INT 2"); }
#line 3823 "pmysql.tab.c"
    break;

  case 275:
#line 855 "pmysql.y"
          { emit("INT 3"); }
#line 3829 "pmysql.tab.c"
    break;

  case 276:
#line 858 "pmysql.y"
                                              { emit("CALL 3 DATE_ADD"); }
#line 3835 "pmysql.tab.c"
    break;

  case 277:
#line 859 "pmysql.y"
                                              { emit("CALL 3 DATE_SUB"); }
#line 3841 "pmysql.tab.c"
    break;

  case 278:
#line 862 "pmysql.y"
                                     { emit("NUMBER 1"); }
#line 3847 "pmysql.tab.c"
    break;

  case 279:
#line 863 "pmysql.y"
                                   { emit("NUMBER 2"); }
#line 3853 "pmysql.tab.c"
    break;

  case 280:
#line 864 "pmysql.y"
                              { emit("NUMBER 3"); }
#line 3859 "pmysql.tab.c"
    break;

  case 281:
#line 865 "pmysql.y"
                              { emit("NUMBER 4"); }
#line 3865 "pmysql.tab.c"
    break;

  case 282:
#line 866 "pmysql.y"
                              { emit("NUMBER 5"); }
#line 3871 "pmysql.tab.c"
    break;

  case 283:
#line 867 "pmysql.y"
                              { emit("NUMBER 6"); }
#line 3877 "pmysql.tab.c"
    break;

  case 284:
#line 868 "pmysql.y"
                                    { emit("NUMBER 7"); }
#line 3883 "pmysql.tab.c"
    break;

  case 285:
#line 869 "pmysql.y"
                               { emit("NUMBER 8"); }
#line 3889 "pmysql.tab.c"
    break;

  case 286:
#line 870 "pmysql.y"
                               { emit("NUMBER 9"); }
#line 3895 "pmysql.tab.c"
    break;

  case 287:
#line 873 "pmysql.y"
                                        { emit("CASEVAL %d 0", (yyvsp[-1].intval)); }
#line 3901 "pmysql.tab.c"
    break;

  case 288:
#line 874 "pmysql.y"
                                        { emit("CASEVAL %d 1", (yyvsp[-3].intval)); }
#line 3907 "pmysql.tab.c"
    break;

  case 289:
#line 875 "pmysql.y"
                                        { emit("CASE %d 0", (yyvsp[-1].intval)); }
#line 3913 "pmysql.tab.c"
    break;

  case 290:
#line 876 "pmysql.y"
                                        { emit("CASE %d 1", (yyvsp[-3].intval)); }
#line 3919 "pmysql.tab.c"
    break;

  case 291:
#line 879 "pmysql.y"
                                   { (yyval.intval) = 1; }
#line 3925 "pmysql.tab.c"
    break;

  case 292:
#line 880 "pmysql.y"
                                         { (yyval.intval) = (yyvsp[-4].intval)+1; }
#line 3931 "pmysql.tab.c"
    break;

  case 293:
#line 883 "pmysql.y"
                     { emit("LIKE"); }
#line 3937 "pmysql.tab.c"
    break;

  case 294:
#line 884 "pmysql.y"
                        { emit("LIKE"); emit("NOT"); }
#line 3943 "pmysql.tab.c"
    break;

  case 295:
#line 887 "pmysql.y"
                       { emit("REGEXP"); }
#line 3949 "pmysql.tab.c"
    break;

  case 296:
#line 888 "pmysql.y"
                          { emit("REGEXP"); emit("NOT"); }
#line 3955 "pmysql.tab.c"
    break;

  case 297:
#line 891 "pmysql.y"
                        { emit("NOW"); }
#line 3961 "pmysql.tab.c"
    break;

  case 298:
#line 892 "pmysql.y"
                        { emit("NOW"); }
#line 3967 "pmysql.tab.c"
    break;

  case 299:
#line 893 "pmysql.y"
                        { emit("NOW"); }
#line 3973 "pmysql.tab.c"
    break;

  case 300:
#line 896 "pmysql.y"
                               { emit("STRTOBIN"); }
#line 3979 "pmysql.tab.c"
    break;


#line 3983 "pmysql.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval, &yylloc);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;


#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 899 "pmysql.y"


void
emit(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  printf("rpn: ");
  vfprintf(stdout, s, ap);
  printf("\n");
}

void
yyerror(char *s, ...)
{
  extern yylineno;

  va_list ap;
  va_start(ap, s);

  fprintf(stderr, "%d: error: ", yylineno);
  vfprintf(stderr, s, ap);
  fprintf(stderr, "\n");
}

int get_first_line() { return yylloc.first_line; }
int get_last_line() { return yylloc.last_line; }
int get_first_column() { return yylloc.first_column; }
int get_last_column() { return yylloc.last_column; }

main(int ac, char **av)
{
  extern FILE *yyin;

  if(ac > 1 && !strcmp(av[1], "-d")) {
    yydebug = 1; ac--; av++;
  }

  if(ac > 1 && (yyin = fopen(av[1], "r")) == NULL) {
    perror(av[1]);
    exit(1);
  }

  if(!yyparse())
    printf("SQL parse worked\n");
  else
    printf("SQL parse failed\n");
} /* main */
