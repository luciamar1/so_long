/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lucia-ma <lucia-ma@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 12:48:04 by lucia-ma          #+#    #+#             */
/*   Updated: 2023/06/11 01:59:06 by lucia-ma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int argc, char **argv)
{
    //t_minilib   program;

	if(check_file(argc, argv) != 0)
		return(1);

    //program.mlx_pointer = mlx_init();
    //program.window = mlx_new_window(program.mlx_pointer, 1980, 1080, "Hellow minilib =)");
    
    //mlx_loop(program.mlx_pointer);
    
    return(0);
}
/*
int main()
{
	// ----------

	// Struct with all the info that I need to run the program (mlx_sample.h)
	t_minilib program;
	// mlx function that initialize the mlx and returns a pointer to it.
	program.mlx_pointer = mlx_init();
	// Open a window (window.c whitin this project)
	program.window = mlx_new_window(program.mlx_pointer, 1980, 1080, "Hello world!");

	// ----------

	// Create a new image/sprite (image.c)
	program.sprite = mlx_new_sprite(program.mlx_pointer, "block.xpm");
	program.sprite_position.x = 0;
	program.sprite_position.y = 0;
	// mlx function that draws an image into a window at the given position
	mlx_put_image_to_window(program.mlx_pointer, program.window->reference,
		program.sprite.reference, program.sprite_position.x, program.sprite_position.y);

	// ----------

	// hook the input() (hooks.c) function to the the key pressed event
	mlx_key_hook(program.window.reference, *mlx_input, &program);
	// hook a function to the loop (it would be called each frame)
	mlx_loop_hook(program.mlx_pointer, *mlx_update, &program);

	// ----------

	// mlx constant loop that keeps the detects the events
    
	mlx_loop(program.mlx_pointer);
}*/