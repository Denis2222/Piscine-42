#include <libft.h>

struct s_list	*ft_create_elem(void *data)
{
	struct s_list *list;

	list = NULL;
	list = malloc(sizeof(struct s_list));
	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

void	ft_print_list(t_list *elem)
{
	t_list *list;

	list = elem;
	printf("<=I==[%s]:", (char *)list->data);
		while (list->next)
	{
		list = list->next;
		if(list->data != NULL)
			printf("[[%s]]:",(char *)list->data);
	}
}

void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*list;

	list = *begin_list;
	if (!list)
	{
		list = ft_create_elem(data);
	}
	else
	{
		while (list->next != NULL)
		{
			list = list->next;
		}
		list->next = ft_create_elem(data);
	}
}

void ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *list;

	list = ft_create_elem(data);
	list->next = *begin_list;

	*begin_list = list;
}
