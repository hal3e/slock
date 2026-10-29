/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nogroup";

static const char *colorname[NUMCOLS] = {
	[INIT] =   "black",     /* after initialization */
	[INPUT] =  "#005577",   /* during input */
	[FAILED] = "#CC3333",   /* wrong password */
};

/* lock screen opacity: 0.0 is transparent, 1.0 is opaque */
static const double alpha = 0.5;

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;
