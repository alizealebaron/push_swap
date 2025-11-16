# Les différentes étapes de push_swap

Cette to-do list a entièrement été reprise du [gitbook de Laura](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap). Il a néanmoins été traduis en français afin de simplifier son utilisation.

## Checklist principale

- [ ] Choisir entre listes chaînés et tableaux.
- [ ] Prendre en compte les arguments passés en paramètres
- [ ] Si vous utilisez l'algorithmes de tri radix, normalisez vos données.

## Checklist des erreurs

Il y a beaucoup d'erreurs à prendre en compte dans push_swap, il ne faut pas en oublier une seule.

- [ ] Le programme doit fonctionner avec plus nombres en arguments
	- [ ] `./push_swap 1 3 5 +9 20 -4 50 60 04 08`
- [ ] Le programme doit aussi fonctionner avec une chaîne de caractères donnée en paramètre.
	- [ ] `./push_swap "3 4 6 8 9 74 -56 +495"`
- [ ] Le programme doit retourner une erreur si un caractère non digital est rencontré
	- [ ] `./push_swap 1 3 dog 35 80 -3`
	- [ ] `./push_swap a`
	- [ ] `./push_swap 1 2 3 5 67b778 947`
	- [ ] `.push_swap " 12 4 6 8 54fhd 4354"`
	- [ ] `./push_swap 1 --    45 32`
	- [ ] Ces exemples doivent retourner `Error\n`
- [ ] Le programme ne doit pas fonctionner si deux nombres sont identiques
	- [ ] `./push_swap 1 3 58 9 3`
	- [ ] `./push_swap 3 03`
	- [ ] `./push_swap " 49 128     50 38   49"`
	- [ ] Ces exemples doivent retourner `Error\n`
	- [ ] `./push_swap "95 99 -9 10 9"`
	- [ ] Cet exemple fonctionne (9 != -9)
- [ ] Le programme doit fonctionner avec MAX_INT et MIN_INT
	- [ ] `./push_swap 2147483647 2 4 7`
	- [ ] `./push_swap 99 -2147483648 23 545`
	- [ ] `./push_swap "2147483647 843 56544 24394"`
- [ ] Le programme ne doit pas fonctionner avec des nombres dépassant les bornes d'un int
	- [ ] `./push_swap 54867543867438 3`
	- [ ] `./push_swap -2147483647765 4 5`
	- [ ] `./push_swap "214748364748385 28 47 29"`
	- [ ] Ces exemples doivent retourner `Error\n`
- [ ] Rien n'est spécifié concernant l'utilisation mixée de string et de int. Faites ce que vous voulez.
	- [ ] `./push_swap "1 2 4 3" 76 90 "348 05`

## Checklist d'instructions

Cette checklist vous aidera à vérifier que vous avez coder les 11 instructions qui peuvent être utilisée par votre algorithme. Si vous ne comprenez pas ces instructions, vous pouvez consulter le sujet ou d'autres ressources. 

- [ ] sa (swap a) : S'il y a 2 nombres, échangez les deux éléments au sommet de la pile a.
- [ ] sb (swap b) : S'il y a 2 nombres, échangez les deux éléments au sommet de la pile b.
- [ ] ss : sa et sb en même temps.
- [ ] pa (push a) : Si b n'est pas vide, prends l'élement au sommet de b et l'ajoute dans a.
- [ ] pb (push b) : Si a n'est pas vide, prends l'élement au sommet de a et l'ajoute dans b.
- [ ] ra (rotate a) : Déplace tous les éléments de la pile a d'une position vers le haut. Le premier élément devient le dernier. 
- [ ] rb (rotate b) : Déplace tous les éléments de la pile b d'une position vers le haut. Le premier élément devient le dernier. 
- [ ] rr : ra et rb en même temps.
- [ ] rra : Déplace tous les éléments de la pile a d'une position vers le bas. Le dernier élément devient le premier.
- [ ] rrb : Déplace tous les éléments de la pile b d'une position vers le bas. Le dernier élément devient le premier.
- [ ] rrr : rra et rrb en même temps.

## Checklist du tri / algorithme

- [ ] Vérifiez si l'ordre de la liste est correct ou s'il doit être trié.
- [ ] Créez un petit algorithme pour les petits nombres (5 et moins).
- [ ] Implémentez une condition pour 2 nombres.
- [ ] Créez un algorithme pour 3 nombres.
- [ ] Créez un algorithme pour 4 nombres.
- [ ] Créez un algorithme pour 5 nombres.
- [ ] Créez un autre algorithme pour tous les autres nombres.

Vérifiez à la fin que tout est correct ! Il ne doit y avoir aucune fuite, pensez à toujours libérer la mémoire allouée lorsque vous ne l'utilisez plus.