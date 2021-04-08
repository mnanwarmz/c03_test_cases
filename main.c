/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azaid <azaid@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/08 10:03:51 by azaid             #+#    #+#             */
/*   Updated: 2021/04/08 10:15:16 by azaid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// ex00
int main()
{
	int a;
	int b;
	char c[20] = "Hello";
	char d[20] = "Hello";

	a = ft_strcmp(c,"Horld");
	b = strcmp(d,"Horld");

	printf("%s\n",c);
	printf("%d\n",a);
	printf("%s\n",d);
	printf("%d\n",b);
}

// ex01
int main()
{
	int a;
	int b;
	char c[20] = "Hello";
	char d[20] = "Hello";

	a = ft_strncmp(c,"World", 5);
	b = strncmp(d,"World", 5);

	printf("%s\n",c);
	printf("%d\n",a);
	printf("%s\n",d);
	printf("%d\n",b);
}

// ex02
int main()
{
	char *a;
	char *b;
	char c[20] = "Hello";
	char d[20] = "Hello";

	a = ft_strcat(c,"World");
	b = strcat(d,"World");

	printf("%s\n",a);
	printf("%s\n",c);
	printf("%s\n",b);
	printf("%s\n",d);
}

// ex03
int main()
{
	char a[20] = "Hello ";
	char b[20] = "World";
	char c[20] = "Hello ";
	char d[20] = "World";
	char *e;
	char *f;

	e = ft_strncat(a,b,3);
	f = strncat(c,d,3);
	printf("%s\n",a);
	printf("%s",c);
	printf("\n%s\n",e);
	printf("%s",f);
}

// ex05
int main()
{
	int c;
	int d;
	char e[20] = "World";
	char f[20] = "World";

	c = ft_strlcat(e,"Hello ",10);
	d = strlcat(f,"Hello  ",10);
	printf("%s ",e);
	printf("%d",c);
	printf("\n%s ",f);
	printf("%d",d);
}

