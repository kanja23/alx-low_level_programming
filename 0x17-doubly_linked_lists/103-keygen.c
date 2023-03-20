#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 *  * f4 - finds the biggest number
 *   *
 *    * @usrn: username
 *     * @len: length of username
 *      * Return: the biggest number
 *       */
int f4(char *usrn, int len)
{
		int ch;
			int vch;
				unsigned int rand_num;

					ch = *usrn;
						vch = 0;

							while (vch < len)
									{
												if (ch < usrn[vch])
																ch = usrn[vch];
														vch += 1;
															}
	srand(ch ^ 14);
		rand_num = rand();

			return (rand_num & 63);
}

/**
 *  * f5 - multiplies each char of username
 *   *
 *    * @usrn: username
 *     * @len: length of username
 *      * Return: multiplied char
 *       */
int f5(char *usrn, int len)
{
		int ch;
			int vch;
	int vch;

		ch = vch = 0;

			while (vch < len)
					{
								ch = ch + usrn[vch] * usrn[vch];
										vch += 1;
											}

				return (((unsigned int)ch ^ 239) & 63);
}

/**
 *  * f6 - generates a random char
 *   *
 *    * @usrn: username
 *     * Return: a random char
 *      */
int f6(char *usrn)
{
		int ch;
			int vch;
		ch = vch = 0;

		while (vch < *usrn)
				{
							ch = rand();
									vch += 1;
										}
	
	keygen[1] = ((char *)alph)[(ch ^ 79) & 63];
		/* ----------- f3 ----------- */
		ch = 1;
			vch = 0;
				while (vch < len)
						{
									ch = argv[1][vch] * ch;
											vch = vch + 1;
												}
					keygen[2] = ((char *)alph)[(ch ^ 85) & 63];
						/* ----------- f4 ----------- */
						keygen[3] = ((char *)alph)[f4(argv[1], len)];
							/* ----------- f5 ----------- */
							keygen[4] = ((char *)alph)[f5(argv[1], len)];
								/* ----------- f6 ----------- */
								keygen[5] = ((char *)alph)[f6(argv[1])];
									keygen[6] = '\0';
										for (ch = 0; keygen[ch]; ch++)
													printf("%c", keygen[ch]);
											return (0);
}
