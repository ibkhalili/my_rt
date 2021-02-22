
#include<rt.h>

int		rt_add_noise(char *val, t_rt *rt) //parser
{

	// arefaire with return type int instead of struct noise


	if (!ft_strcmp(val, "damier"))
		return (0);
	else if (!ft_strcmp(val, "circles"))
		return (1);
	else if (!ft_strcmp(val, "voronoi1"))
		return (2);
	else if (!ft_strcmp(val, "voronoi2"))
	   	return (3);
	else if (!ft_strcmp(val, "voronoi3"))
	   	return (4);
	rt_exit(rt, "noise: Uknown type!", EXIT_FAILURE);
	return (-1);	
}