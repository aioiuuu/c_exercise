若 $f(x,y,z)$ 关于 $z$ 偶函数：
$f(x,y,-z)=f(x,y,z)$
$$\iint_\Sigma f\,dS = 2\iint_{\Sigma_1} f\,dS$$

若 $f(x,y,z)$ 关于 $z$ 的奇函数
$f(x,y,-z)=-f(x,y,z)$
$$\iint_\Sigma f\,dS = 0$$

上下对称关于 $y$ 偶倍奇零
左右对称关于 $x$ 偶倍奇零

## 格林公式（Green 公式）

### 一、适用条件
1. $D$ 是平面有界闭区域；
2. $L$ 是 $D$ 的取正向的分段光滑闭曲线（边界）；
   正向规定：人沿 $L$ 走，区域 $D$ 总在左侧；
3. $P(x,y),Q(x,y)$ 在 $D$ 上具有一阶连续偏导数。

## 形心（质心）全套公式

### 一、平面薄片（二重积分，均匀密度 = 形心）
设平面区域 $D$，面积
$$A=\iint_D dxdy$$
形心 $(\bar x,\bar y)$：
$$
\bar x = \frac{1}{A}\iint_D x\,dxdy,\quad
\bar y = \frac{1}{A}\iint_D y\,dxdy
$$

## 二元第一型曲线积分轮换对称性
设 $L$ 轮换对称（$x,y$ 互换曲线不变）：
$$\int_L f(x,y)\,ds = \int_L f(y,x)\,ds$$

## 三元空间第一型曲线积分
$$\int_\Gamma f(x,y,z)\,ds$$

**轮换对称条件**：曲线 $\Gamma$ 方程互换 $x,y,z$ 任意两个变量，曲线不变。

**结论**：
$$
\int_\Gamma f(x,y,z)\,ds
=\int_\Gamma f(y,x,z)\,ds
=\int_\Gamma f(z,y,x)\,ds
$$

**常用结论**：
$$\int_\Gamma x\,ds=\int_\Gamma y\,ds=\int_\Gamma z\,ds$$
$$\int_\Gamma (x+y+z)\,ds = 3\int_\Gamma x\,ds$$
