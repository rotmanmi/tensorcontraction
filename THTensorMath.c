void THTensor_(contract)(THTensor *r_, THTensor *t1 , THTensor *t2, real dimension1, real dimension2)
{
	

	//Asserting the size of the result tensor
	if (t1->nDimension + t2->nDimension  -2 != r_->nDimension)
		THError("Output tensor should have the number of dimensions of input tensor - 2");
	
	if (t1->size[dimension1 - 1] !=  t2->size[dimension2 - 1])
		THError("Index contracted on should have the same number of variables");
	
	//size of contracted dimension
	dimsize = t1->size[dimension1 - 1]
	
 

	//Here  I create a new tensor with one less index. dim1 + dim2
	
	real *rp = THTensor_(data)(r_);	
	real *t1p = THTensor_(data)(t1);
	real *t2p = THTensor_(data)(t2);

	
	// i - dimension index of output tensor
	for (int i = 0; i < r_->nDimension ; i++)
		
















//Old 
THTensor_(resizeAs)(r_, t);
  if (THTensor_(isContiguous)(r_) && THTensor_(isContiguous)(t) && THTensor_(nElement)(r_) == THTensor_(nElement)(t)) {
      real *tp = THTensor_(data)(t);
      real *rp = THTensor_(data)(r_);
      long sz = THTensor_(nElement)(t);
      long i;
      #pragma omp parallel for if(sz > TH_OMP_OVERHEAD_THRESHOLD) private(i)
      for (i=0; i<sz; i++)
          rp[i] = tp[i] + value;
  } else {
      TH_TENSOR_APPLY2(real, r_, real, t, *r__data = *t_data + value;);
  }
}
