#include "linked_list.h"
#include "hash_tables.h"

int main()
{
		node *head = NULL;
		shash_node_t *var1, *var2, *var3;
		var1 = malloc(sizeof(shash_node_t));
		var1->key = strdup("3");
		var2 = malloc(sizeof(shash_node_t));
		var2->key = strdup("2");
		var3 = malloc(sizeof(shash_node_t));
		var3->key = strdup("1");

		head = add_before(head, "habibi", var1);
		head = add_before(head, var1->key, var2);
		head = add_before(head, var2->key, var3);
		print(head);
		return (0);
}
