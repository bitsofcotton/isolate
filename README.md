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

However, if the program has some switching, it's also A\_k = \<b,x\> A'\_k + (1 - \<b,x\>) A''\_k for any k, so to decompose this, we need another decomposition methods s.t. recompile into \<A\_k,i x, x\> form, then, decompose, then, reverse form and so on..

Either, we should need large enough padding on higher digit into A\_k.

# General Tips
We can isolate only commutative functions, in another words, non stacked nor non loop functions.
For them, we should copy the structure with 6 layered P01 predictor lilke methods.
This can isolate loops up to 6 layers.
We're doubting this is because of 2nd order saturation on the information amount nor, if the functions makes some better field, only counting up from -1 degree, it's 4 degree, so it's maximum of algebraic solution also be in the root added field.
This means if the invariants can be decomposed into some of the algebraic loops, we can decompose them with the limit with only the transformation once of the whole.
However, we are in the maze why this cannot be counted from -4 degree (it causes 9 layers whole, if 6 layers a re 2/3, 9 layers are 1.) nor why the analytic solution they cannot be solved algebraic one is excluded. Nor, why we need the invariant to take such decompositions' solution.

