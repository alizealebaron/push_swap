# Les différentes étapes de push_swap

Cette to-do list a entièrement été reprise du [gitbook de Laura](https://42-cursus.gitbook.io/guide/2-rank-02/push_swap). Il a néanmoins été traduis en français afin de simplifier son utilisation. D'autres éléments ont aussi été rajoutés au fur et à mesure de mon avancement.

## Checklist principale

- [X] Choisir entre listes chaînés et tableaux.
- [X] Prendre en compte les arguments passés en paramètres
- [ ] Si vous utilisez l'algorithme de tri radix, normalisez vos données.

## Checklist des erreurs

Il y a beaucoup d'erreurs à prendre en compte dans push_swap, il ne faut pas en oublier une seule.

- [X] Le programme ne doit rien renvoyé s'il n'y a pas d'arguments
	- [X] `./push_swap`
- [X] Le programme doit fonctionner avec plus nombres en arguments
	- [X] `./push_swap 1 3 5 +9 20 -4 50 60 04 08`
- [X] Le programme doit aussi fonctionner avec une chaîne de caractères donnée en paramètre.
	- [X] `./push_swap "3 4 6 8 9 74 -56 +495"`
- [X] Le programme doit retourner une erreur si un caractère non digital est rencontré
	- [X] `./push_swap 1 3 dog 35 80 -3`
	- [X] `./push_swap a`
	- [X] `./push_swap 1 2 3 5 67b778 947`
	- [X] `./push_swap " 12 4 6 8 54fhd 4354"`
	- [X] `./push_swap 1 --    45 32`
	- [X] Ces exemples doivent retourner `Error\n`
- [X] Le programme ne doit pas fonctionner si deux nombres sont identiques
	- [X] `./push_swap 1 3 58 9 3`
	- [X] `./push_swap 3 03`
	- [X] `./push_swap " 49 128     50 38   49"`
	- [X] Ces exemples doivent retourner `Error\n`
	- [X] `./push_swap "95 99 -9 10 9"`
	- [X] Cet exemple fonctionne (9 != -9)
- [X] Le programme doit fonctionner avec MAX_INT et MIN_INT
	- [X] `./push_swap 2147483647 2 4 7`
	- [X] `./push_swap 99 -2147483648 23 545`
	- [X] `./push_swap "2147483647 843 56544 24394"`
- [X] Le programme ne doit pas fonctionner avec des nombres dépassant les bornes d'un int
	- [X] `./push_swap 54867543867438 3`
	- [X] `./push_swap -2147483647765 4 5`
	- [X] Ces exemples doivent retourner `Error\n`
- [X] Rien n'est spécifié concernant l'utilisation mixée de string et de int. Faites ce que vous voulez.
	- [X] `./push_swap "1 2 4 3" 76 90 "348 05"`
- [X] Les erreurs doivent être envoyées sur la sortie erreur standard.

## Checklist d'instructions

Cette checklist vous aidera à vérifier que vous avez coder les 11 instructions qui peuvent être utilisée par votre algorithme. Si vous ne comprenez pas ces instructions, vous pouvez consulter le sujet ou d'autres ressources. 

- [X] sa (swap a) : S'il y a 2 nombres, échangez les deux éléments au sommet de la pile a.
- [X] sb (swap b) : S'il y a 2 nombres, échangez les deux éléments au sommet de la pile b.
- [X] ss : sa et sb en même temps.
- [X] pa (push a) : Si b n'est pas vide, prends l'élement au sommet de b et l'ajoute dans a.
- [X] pb (push b) : Si a n'est pas vide, prends l'élement au sommet de a et l'ajoute dans b.
- [X] ra (rotate a) : Déplace tous les éléments de la pile a d'une position vers le haut. Le premier élément devient le dernier. 
- [X] rb (rotate b) : Déplace tous les éléments de la pile b d'une position vers le haut. Le premier élément devient le dernier. 
- [X] rr : ra et rb en même temps.
- [X] rra : Déplace tous les éléments de la pile a d'une position vers le bas. Le dernier élément devient le premier.
- [X] rrb : Déplace tous les éléments de la pile b d'une position vers le bas. Le dernier élément devient le premier.
- [X] rrr : rra et rrb en même temps.

## Checklist du tri / algorithme

- [X] Vérifiez si l'ordre de la liste est correct ou s'il doit être trié.
- [ ] Créez un petit algorithme pour les petits nombres (5 et moins).
- [ ] Implémentez une condition pour 2 nombres.
- [ ] Créez un algorithme pour 3 nombres.
- [ ] Créez un algorithme pour 4 nombres.
- [ ] Créez un algorithme pour 5 nombres.
- [ ] Créez un autre algorithme pour tous les autres nombres.

> [!NOTE]  
> J'ai laissé les cases pour l'algorithme des petits nombres (< 5) mais le sujet actuel ne nous demande plus de traîter leur cas à part.

Vérifiez à la fin que tout est correct ! Il ne doit y avoir aucune fuite, pensez à toujours libérer la mémoire allouée lorsque vous ne l'utilisez plus.