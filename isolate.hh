#if !defined(_ISOLATE_)

template <typename T> SimpleMatrix<T> isolate(const std::vector<SimpleMatrix<T> >& A) {
  assert(0 < A.size() && A[0].rows() == A[0].cols());
  SimpleMatrix<T> B(A[0].rows() + A[0].cols(), A[0].rows() + A[0].cols());
  SimpleMatrix<T> I(A[0].rows(), A[0].cols());
  I.I();
  B.O();
  for(int k = 0; k < A.size(); k ++) {
    assert(A[0].rows() == A[k].rows() && A[0].cols() == A[k].cols());
    auto BB(B);
    B += log(SimpleMatrix<T>(B.rows(), B.cols()).I().
      setMatrix(0, A[k].cols(), A[k] - I).
      setMatrix(A[k].rows(), 0, (A[k] - I).transpose()));
  }
  B = exp(B /=T(int(A.size())));
  return B.subMatrix(0, A[0].cols(), A[0].rows(), A[0].cols()) + B.subMatrix(0, 0, A[0].rows(), A[0].cols());
}

template <typename T> SimpleVector<T> isolateif(const std::vector<SimpleMatrix<T> >& A) {
  assert(0 < A.size() && A[0].rows() == A[0].cols());
  SimpleVector<T> b(A[0].cols());
  SimpleMatrix<T> I(A[0].rows(), A[0].cols());
  I.I();
  b.O();
  // A[k] == <b, x> A'[k] + (1 - <b, x>) A''[k] for any k.
  return b;
}

#define _SURFACE_
#endif

