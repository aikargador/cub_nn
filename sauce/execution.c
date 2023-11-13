#include "cub69d.h"

/* 
	table->parse->swen_pth[3] = ft_strdup("./textures/wefuk/muha_ascend.xpm");
	table->parse->swen_pth[3] = ft_strdup("./textures/wefuk/muha_frozen.xpm");
	table->parse->swen_pth[3] = ft_strdup("./textures/wefuk/muha_highway.xpm");
	table->parse->swen_pth[0] = ft_strdup("./textures/wefuk/muha_lost.xpm"); //broke
	table->parse->swen_pth[2] = ft_strdup("./textures/wefuk/muha_lost_again.xpm");
	table->parse->swen_pth[3] = ft_strdup("./textures/wefuk/muha_tarzan_edition.xpm");
 */

void	texture_init(t_able *table)
{
	table->swen_pth[0] = table->parse->so_text;
	table->swen_pth[1] = table->parse->we_text;
	table->swen_pth[2] = table->parse->ea_text;
	table->swen_pth[3] = table->parse->no_text;
}

void	init_frame(t_able *table)
{
	int	i;

	i = -1;
	table->frame.frmes = malloc(3 * sizeof(size_t *));
	if (!table->frame.frmes)
		return ;//change this to appropriate eggor mono sodium glutamate!
	while (++i < 3)
	{
		table->frame.frmes[i] = malloc((TEX_DIM * TEX_DIM) * sizeof(size_t));
		if (!table->frame.frmes[i])
			return ;//again fex thes shet!
		if (!load_texture(table, table->frame.frmes[i], table->frame.fpth[i]))
			return ;//chkk and update to approp ret val!
	}
}

void	magic_frame_init(t_able *table)
{
	table->frame.fpth[0] = ft_strdup("./textures/wefuk/tf_this1.xpm");
	table->frame.fpth[1] = ft_strdup("./textures/wefuk/tf_this2.xpm");
	table->frame.fpth[2] = ft_strdup("./textures/wefuk/tf_this3.xpm");
}

int eggsecute(t_parse *parse)
{
	t_able table;

	// printf("no_texture = %s\n", parse->no_text);
	ft_memset(&table, 0, sizeof(t_able));
	table.parse = parse;
	table.frame.chnge = 0;
	table.frame.step = 1;
	magic_texture_init(&table);
	table.mlx.img = calloc(1, sizeof(t_img));
	if (!table.mlx.img)
		return 69;
	table.mlx.mlx = mlx_init();
	// table.plr.pos.x = 12;
	// table.plr.pos.y = 5;
	if (table.parse->pdir == 'N')
	{
		table.plr.dir.y = -1;
		table.plane.x = -0.80;
	}
	if (table.parse->pdir == 'S')
	{
		table.plr.dir.y = 1;
		table.plane.x = 0.80;
	}
	if (table.parse->pdir == 'W')
	{
		table.plr.dir.x = 1;
		table.plane.y = -0.80;
	}
	if (table.parse->pdir == 'E')
	{
		table.plr.dir.x = -1;
		table.plane.y = 0.80;
	}
	table.plr.pos.x = table.parse->pos.x;
	table.plr.pos.y = table.parse->pos.y;
	// table.plr.dir.x = -1;
	// table.plr.dir.y = 0;
	// table.plane.x = 0;
	// table.plane.y = 0.66;
	table.plr.mv_spd = 0.03;
	table.plr.rt_spd = 0.025;
	// table.plr.rt_spd = 0.05;
	// map_init(&table);
	// draw_map(&table); 
	table.mlx.win = mlx_new_window(table.mlx.mlx, width, height, "mlx");
	if (!table.mlx.win)
	{
		free(table.mlx.win);
		return (1);
	}
	table.mlx.img = new_image(&table, false);
	magic_frame_init(&table);
	init_texture(&table);
	init_frame(&table);
	if (!table.mlx.img)
		return (printf("tf\n"));
	mlx_hook(table.mlx.win, 03, 1L<<1, &handle_keyrelease, &table);
	mlx_hook(table.mlx.win, 02, 1L<<0, &handle_keypress, &table);
	mlx_loop_hook(table.mlx.mlx, &main_loop, &table);
	// mlx_key_hook(table.mlx.win, &key_press, &table);
	// mlx_hook(table.win, X_EVENT_KEY_PRESS, 0, &key_press, &table);
	mlx_loop(table.mlx.mlx);
	return (0);
}


// NO ./textures/jmyao.xpm
// SO ./textures/jmyao.xpm
// WE ./textures/wefuk/muha.xpm
// EA ./textures/wefuk/alien_tymr.xpm