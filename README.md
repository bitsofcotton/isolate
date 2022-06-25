# isolate
Isolate original matrices into chain of set of matrices.

# Descriptions
One of some machine learning methods produces the correnspondance with A\[x, y\]==0 as invariant.
Some of the mutilayer methods concludes same as them but the structure is A B...\[x, y\]==0.
They excludes decomposition as some layers.

So this aims to get from last matrices A\_k\[x, y\] == 0 learned matrices, A'\_k B \[x, y\] == 0
with the condition A\_k -\> A'\_k reduces some of accuracy, B is the same matrix.

By symmetrize A\_k to A''\_k, log(A''\_k) = log(A'''\_k) + log(B) in ivariant meaning,
So it's only a balancing method.

However, if the program has some switching, it's also A\_k = \<b,x\> A'\_k + (1 - \<b,x\>) A''\_k for any k, so to decompose this, we need another decomposition methods.
