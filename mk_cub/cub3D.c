#include "./includes/cub3D.h"

int is_cubfile(char *file)
{
	int i;
  
	i = ft_strlen(file); 
	if (i < 5)   
		return (0);
	if (file[i - 4] != '.' || (file[i - 3] != 'c' || (file[i - 2] != 'u') || (file[i - 1] != 'b')))
		return (0);
	return (1);
}

void free_memory(t_parse *parse, t_data *data)
{
	if (parse->no_text)
		free(parse->no_text);
	if (parse->so_text)
		free(parse->so_text);
	if (parse->we_text)
		free(parse->we_text);
	if (parse->ea_text)
		free(parse->ea_text);
	if (parse->text)
		free_double_array(&parse->text);
	if (parse->map)
		free_double_array(&parse->map);
	(void)data;
}
void print_data(const t_data *data)
{
	printf("Data Structure Contents:\n");
	// printf("Player Position: (%f, %f)\n", data->player.x_pos, data->player.y_pos);
	// printf("Player Angle: %f\n", data->player.angle);
	// printf("FOV: %f\n", data->player.fov);
	printf("map %s", data->parse->no_text);
	// Add more print statements for other members as needed.
}

void	print_all_data(const t_data *data)
{
	// printf("data\n");
	// printf("data -> t parse = %p\n", data->parse);
	// printf("data -> t ray = %p\n", data->ray);
	// printf("data -> t player = %p\n", data->player);
	// printf("data -> t window = %p\n", data->window);
	// printf("data -> t keys = %p\n", data->keys);
	// printf("data ->   angle_increment = %f\n", data->angle_increment);
	// printf("data -> t image = %p\n", data->image);
	// printf("data -> t mini_map = %p\n", data->mini_map);
	// printf("data ->   buffer = %p\n", data->buffer);
	// printf("data ->   previous = %d\n", data->previous);
	// printf("data -> t texture = %p\n", data->texture);
	// printf("data -> t no_img = %p\n", data->no_img);
	// printf("data -> t so_img = %p\n", data->so_img);
	// printf("data -> t we_img = %p\n", data->we_img);
	// printf("data -> t ea_img = %p\n", data->ea_img);
	// printf("data -> t draw_line = %p\n\n", data->draw_line);

	// printf("data->draw_line\n");
	// printf("data -> draw_line x1 = %d\n", data->draw_line.x1);
	// printf("data -> draw_line y1 = %d\n", data->draw_line.y1);
	// printf("data -> draw_line x2 = %d\n", data->draw_line.x2);
	// printf("data -> draw_line y2 = %d\n", data->draw_line.y2);
	// printf("data -> draw_line dx = %d\n", data->draw_line.dx);
	// printf("data -> draw_line dy = %d\n", data->draw_line.dy);
	// printf("data -> draw_line sx = %d\n", data->draw_line.sx);
	// printf("data -> draw_line sy = %d\n", data->draw_line.sy);
	// printf("data -> draw_line err = %d\n", data->draw_line.err);
	// printf("data -> draw_line e2 = %d\n", data->draw_line.e2);
	// printf("data -> draw_line color = %d\n\n", data->draw_line.color);

	// printf("data->image, bruh\n\n");

	// printf("data->keys\n");
	// printf("data -> keys w = %d\n", data->keys.w);
	// printf("data -> keys a = %d\n", data->keys.a);
	// printf("data -> keys s = %d\n", data->keys.s);
	// printf("data -> keys d = %d\n", data->keys.d);
	// printf("data -> keys left = %d\n", data->keys.left);
	// printf("data -> keys right = %d\n", data->keys.right);

	// printf("data->window, bruh\n\n");

	// printf("data -> player x_pos = %f\n", data->player.x_pos);
	// printf("data -> player y_pos = %f\n", data->player.y_pos);
	// printf("data -> player angle = %f\n", data->player.angle);
	// printf("data -> player fov = %f\n", data->player.fov);
	// printf("data -> player delta_x = %f\n", data->player.delta_x);
	// printf("data -> player delta_y = %f\n", data->player.delta_y);

	// printf("data->img, bruh\n\n");

	// printf("data->ray\n");
	// printf("data -> ray angle = %f\n", data->ray.angle);
	// printf("data -> ray data = %p\n", data->ray.data);
	// printf("data -> ray x = %f\n", data->ray.x);
	// printf("data -> ray y = %f\n", data->ray.y);
	// printf("data -> ray x_intercept = %f\n", data->ray.x_intercept);
	// printf("data -> ray y_intercept = %f\n", data->ray.y_intercept);
	// printf("data -> ray intercepts = %p\n", data->ray.intercepts);
	// printf("data -> ray h_wall_hit_flag = %d\n", data->ray.h_wall_hit_flag);
	// printf("data -> ray v_wall_hit_flag = %d\n", data->ray.v_wall_hit_flag);
	// printf("data -> ray h_distance = %f\n", data->ray.h_distance);
	// printf("data -> ray v_distance = %f\n", data->ray.v_distance);
	// printf("data -> ray ray_length = %f\n", data->ray.ray_length);
	// printf("data -> ray wall_height = %f\n", data->ray.wall_height);
	// printf("data -> ray draw_start = %d\n", data->ray.draw_start);
	// printf("data -> ray draw_end = %d\n", data->ray.draw_end);

	printf("data->parse\n");
	printf("data -> parse map = %p\n", data->parse->map);
	printf("data -> parse map = %s\n", data->parse->map[0]);
	printf("data -> parse map = %s\n", data->parse->map[1]);
	printf("data -> parse num_lines = %d\n", data->parse->num_lines);
	printf("data -> parse text = %p\n", data->parse->text);
	printf("data -> parse no_text = %s\n", data->parse->no_text);
	printf("data -> parse so_text = %s\n", data->parse->so_text);
	printf("data -> parse we_text = %s\n", data->parse->we_text);
	printf("data -> parse ea_text = %s\n", data->parse->ea_text);
	printf("data -> parse floor_color = %d\n", data->parse->floor_color);
	printf("data -> parse ceil_color = %d\n", data->parse->ceil_color);
	printf("data -> parse column = %zu\n", data->parse->column);
	printf("data -> parse row = %zu\n", data->parse->row);
	printf("data -> parse floor = %p\n", data->parse->floor);
	printf("data -> parse ceiling = %p\n", data->parse->ceiling);
	printf("data -> parse pdir = %c\n", data->parse->pdir);
	// printf("data -> parse imap = %p\n", data->parse->imap);

	printf("data->imap\n");
	printf("data -> imap fd = %d\n", data->parse->imap.fd);
	printf("data -> imap line_count = %d\n", data->parse->imap.line_count);
	printf("data -> imap path = %s\n", data->parse->imap.path);
	printf("data -> imap file = %p\n", data->parse->imap.file);
	printf("data -> imap height = %d\n", data->parse->imap.height);
	printf("data -> imap width = %d\n", data->parse->imap.width);
	printf("data -> imap end_idx = %d\n", data->parse->imap.end_idx);
}

int main(int argc, char **argv)
{
	t_data data;
	t_parse parse;

	// (void)data;
	// // data->previous = 0;
	if (argc < 2 || argc > 2)
		return (printf("Wrong input. Usage (./Cub3d ./maps/map.cub)\n"), 1);
	if (!ft_parse(&parse, argv[1]))
		return (EXIT_FAILURE);
	data.parse = &parse;
	print_data(&data);
	print_all_data(&data);
	printf ("Correct Data\n");
	free_memory(&parse, &data);
	return (0);
}
