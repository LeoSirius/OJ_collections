### Solution1 数学方法

- 时间复杂度 O(1)
- 空间复杂度 O(1)

首先：

- 奇数 - 奇数 = 偶数

1. 最后一步，占 2 的赢，占 1 的输
2. 若当前是奇数，奇数的约数只能是奇数或者1，因此下一步是偶数
3. 若当前是偶数，偶数的约数可以是偶数，也可以是奇数，可以是1，直接减1
4. 最后 偶数必赢