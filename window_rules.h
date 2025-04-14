static const Rule rules[] = {
	/* xprop(1):
	 *	WM_CLASS(STRING) = instance, class
	 *	WM_NAME(STRING) = title
	 */
	/* class            instance    title           tags mask	isfloating  isterminal  noswallow  monitor */
	{ "firefox-esr",	NULL,       NULL,           1 << 8,		0,          0,           0,        -1 },
	{ "zen",			NULL,       NULL,           1 << 8,		0,          0,           0,        -1 },
	{ "WhatsApp Web",   NULL,       NULL,           1 << 7,		0,          0,          -1,        -1 },
	{ "Gimp",           NULL,       NULL,           0,			1,          0,           0,        -1 },
	{ "St",             NULL,       NULL,           0,			0,          1,           0,        -1 },
	{ NULL,      NULL,     "Event Tester",          0,			0,          0,           1,        -1 }, /* xev */

	{ "Galculator",     NULL,       NULL,           0,         1,          0,           0,        -1 },
	{ "Dragon-drop",    NULL,       NULL,           0,         1,          0,           1,        -1 },
	{ NULL,	NULL,"About Mozilla Firefox",			0,         1,          0,           1,        -1 },
};
