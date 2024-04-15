// python wrapper for vtkDotProductSimilarity
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDotProductSimilarity.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDotProductSimilarity(PyObject *dict); }
extern "C" { PyObject *PyvtkDotProductSimilarity_ClassNew(); }


static PyObject *
PyvtkDotProductSimilarity_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDotProductSimilarity::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDotProductSimilarity::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDotProductSimilarity *tempr = vtkDotProductSimilarity::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDotProductSimilarity *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDotProductSimilarity::NewInstance());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
      if (result && PyVTKObject_Check(result))
      {
        PyVTKObject_GetObject(result)->UnRegister(nullptr);
        PyVTKObject_SetFlag(result, VTK_PYTHON_IGNORE_UNREGISTER, 1);
      }
    }
    else if (tempr != nullptr)
    {
      ap.DeleteVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDotProductSimilarity::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDotProductSimilarity::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetVectorDimension() :
      op->vtkDotProductSimilarity::GetVectorDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetVectorDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetVectorDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetVectorDimension(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetVectorDimension(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetUpperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUpperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetUpperDiagonal() :
      op->vtkDotProductSimilarity::GetUpperDiagonal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetUpperDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUpperDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUpperDiagonal(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetUpperDiagonal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDiagonal() :
      op->vtkDotProductSimilarity::GetDiagonal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDiagonal(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetDiagonal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetLowerDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowerDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetLowerDiagonal() :
      op->vtkDotProductSimilarity::GetLowerDiagonal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetLowerDiagonal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowerDiagonal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLowerDiagonal(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetLowerDiagonal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetFirstSecond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFirstSecond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetFirstSecond() :
      op->vtkDotProductSimilarity::GetFirstSecond());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetFirstSecond(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFirstSecond");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFirstSecond(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetFirstSecond(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetSecondFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSecondFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSecondFirst() :
      op->vtkDotProductSimilarity::GetSecondFirst());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetSecondFirst(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSecondFirst");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSecondFirst(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetSecondFirst(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetMinimumThreshold() :
      op->vtkDotProductSimilarity::GetMinimumThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetMinimumThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumThreshold(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetMinimumThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMinimumCount() :
      op->vtkDotProductSimilarity::GetMinimumCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetMinimumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMinimumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMinimumCount(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetMinimumCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_GetMaximumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaximumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaximumCount() :
      op->vtkDotProductSimilarity::GetMaximumCount());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDotProductSimilarity_SetMaximumCount(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaximumCount");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDotProductSimilarity *op = static_cast<vtkDotProductSimilarity *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaximumCount(temp0);
    }
    else
    {
      op->vtkDotProductSimilarity::SetMaximumCount(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDotProductSimilarity_Methods[] = {
  {"IsTypeOf", PyvtkDotProductSimilarity_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDotProductSimilarity_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDotProductSimilarity_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDotProductSimilarity\nC++: static vtkDotProductSimilarity *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDotProductSimilarity_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDotProductSimilarity\nC++: vtkDotProductSimilarity *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDotProductSimilarity_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDotProductSimilarity_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetVectorDimension", PyvtkDotProductSimilarity_GetVectorDimension, METH_VARARGS,
   "GetVectorDimension(self) -> int\nC++: virtual vtkIdType GetVectorDimension()\n\nControls whether to compute similarities for row-vectors or\ncolumn-vectors. 0 = rows, 1 = columns.\n"},
  {"SetVectorDimension", PyvtkDotProductSimilarity_SetVectorDimension, METH_VARARGS,
   "SetVectorDimension(self, _arg:int) -> None\nC++: virtual void SetVectorDimension(vtkIdType _arg)\n\n"},
  {"GetUpperDiagonal", PyvtkDotProductSimilarity_GetUpperDiagonal, METH_VARARGS,
   "GetUpperDiagonal(self) -> int\nC++: virtual int GetUpperDiagonal()\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the upper diagonal of the\nsimilarity matrix.  Default: true.\n"},
  {"SetUpperDiagonal", PyvtkDotProductSimilarity_SetUpperDiagonal, METH_VARARGS,
   "SetUpperDiagonal(self, _arg:int) -> None\nC++: virtual void SetUpperDiagonal(int _arg)\n\n"},
  {"GetDiagonal", PyvtkDotProductSimilarity_GetDiagonal, METH_VARARGS,
   "GetDiagonal(self) -> int\nC++: virtual int GetDiagonal()\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the diagonal of the similarity\nmatrix.  Default: false.\n"},
  {"SetDiagonal", PyvtkDotProductSimilarity_SetDiagonal, METH_VARARGS,
   "SetDiagonal(self, _arg:int) -> None\nC++: virtual void SetDiagonal(int _arg)\n\n"},
  {"GetLowerDiagonal", PyvtkDotProductSimilarity_GetLowerDiagonal, METH_VARARGS,
   "GetLowerDiagonal(self) -> int\nC++: virtual int GetLowerDiagonal()\n\nWhen computing similarities for a single input matrix, controls\nwhether the results will include the lower diagonal of the\nsimilarity matrix.  Default: false.\n"},
  {"SetLowerDiagonal", PyvtkDotProductSimilarity_SetLowerDiagonal, METH_VARARGS,
   "SetLowerDiagonal(self, _arg:int) -> None\nC++: virtual void SetLowerDiagonal(int _arg)\n\n"},
  {"GetFirstSecond", PyvtkDotProductSimilarity_GetFirstSecond, METH_VARARGS,
   "GetFirstSecond(self) -> int\nC++: virtual int GetFirstSecond()\n\nWhen computing similarities for two input matrices, controls\nwhether the results will include comparisons from the first\nmatrix to the second matrix.\n"},
  {"SetFirstSecond", PyvtkDotProductSimilarity_SetFirstSecond, METH_VARARGS,
   "SetFirstSecond(self, _arg:int) -> None\nC++: virtual void SetFirstSecond(int _arg)\n\n"},
  {"GetSecondFirst", PyvtkDotProductSimilarity_GetSecondFirst, METH_VARARGS,
   "GetSecondFirst(self) -> int\nC++: virtual int GetSecondFirst()\n\nWhen computing similarities for two input matrices, controls\nwhether the results will include comparisons from the second\nmatrix to the first matrix.\n"},
  {"SetSecondFirst", PyvtkDotProductSimilarity_SetSecondFirst, METH_VARARGS,
   "SetSecondFirst(self, _arg:int) -> None\nC++: virtual void SetSecondFirst(int _arg)\n\n"},
  {"GetMinimumThreshold", PyvtkDotProductSimilarity_GetMinimumThreshold, METH_VARARGS,
   "GetMinimumThreshold(self) -> float\nC++: virtual double GetMinimumThreshold()\n\nSpecifies a minimum threshold that a similarity must exceed to be\nincluded in the output.\n"},
  {"SetMinimumThreshold", PyvtkDotProductSimilarity_SetMinimumThreshold, METH_VARARGS,
   "SetMinimumThreshold(self, _arg:float) -> None\nC++: virtual void SetMinimumThreshold(double _arg)\n\n"},
  {"GetMinimumCount", PyvtkDotProductSimilarity_GetMinimumCount, METH_VARARGS,
   "GetMinimumCount(self) -> int\nC++: virtual vtkIdType GetMinimumCount()\n\nSpecifies a minimum number of edges to include for each vector.\n"},
  {"SetMinimumCount", PyvtkDotProductSimilarity_SetMinimumCount, METH_VARARGS,
   "SetMinimumCount(self, _arg:int) -> None\nC++: virtual void SetMinimumCount(vtkIdType _arg)\n\n"},
  {"GetMaximumCount", PyvtkDotProductSimilarity_GetMaximumCount, METH_VARARGS,
   "GetMaximumCount(self) -> int\nC++: virtual vtkIdType GetMaximumCount()\n\nSpecifies a maximum number of edges to include for each vector.\n"},
  {"SetMaximumCount", PyvtkDotProductSimilarity_SetMaximumCount, METH_VARARGS,
   "SetMaximumCount(self, _arg:int) -> None\nC++: virtual void SetMaximumCount(vtkIdType _arg)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDotProductSimilarity_Doc =
  "vtkDotProductSimilarity - compute dot-product similarity metrics.\n\n"
  "Superclass: vtkTableAlgorithm\n\n"
  "Treats matrices as collections of vectors and computes dot-product\n"
  "similarity metrics between vectors.\n\n"
  "The results are returned as an edge-table that lists the index of\n"
  "each vector and their computed similarity.  The output edge-table is\n"
  "typically used with vtkTableToGraph to create a similarity graph.\n\n"
  "This filter can be used with one or two input matrices.  If you\n"
  "provide a single matrix as input, every vector in the matrix is\n"
  "compared with every other vector. If you provide two matrices, every\n"
  "vector in the first matrix is compared with every vector in the\n"
  "second matrix.\n\n"
  "Note that this filter *only* computes the dot-product between each\n"
  "pair of vectors; if you want to compute the cosine of the angles\n"
  "between vectors, you will need to normalize the inputs yourself.\n\n"
  "Inputs:\n"
  "  Input port 0: (required) A vtkDenseArraywith two dimensions (a\n"
  "matrix).\n"
  "  Input port 1: (optional) A vtkDenseArraywith two dimensions (a\n"
  "matrix).\n\n"
  "Outputs:\n"
  "  Output port 0: A vtkTable containing \"source\", \"target\", and\n"
  "\"similarity\" columns.\n\n"
  "@warning\n"
  "Note that the complexity of this filter is quadratic!  It also\n"
  "requires dense arrays as input, in the future it should be\n"
  "generalized to accept sparse arrays.\n\n"
  "@par Thanks: Developed by Timothy M. Shead (tshead@sandia.gov) at\n"
  "Sandia National Laboratories.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDotProductSimilarity_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkDotProductSimilarity", // tp_name
  sizeof(PyVTKObject), // tp_basicsize
  0, // tp_itemsize
  PyVTKObject_Delete, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  PyVTKObject_Repr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  PyVTKObject_String, // tp_str
  PyObject_GenericGetAttr, // tp_getattro
  PyObject_GenericSetAttr, // tp_setattro
  &PyVTKObject_AsBuffer, // tp_as_buffer
  Py_TPFLAGS_DEFAULT|Py_TPFLAGS_HAVE_GC|Py_TPFLAGS_BASETYPE, // tp_flags
  PyvtkDotProductSimilarity_Doc, // tp_doc
  PyVTKObject_Traverse, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  offsetof(PyVTKObject, vtk_weakreflist), // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  PyVTKObject_GetSet, // tp_getset
  nullptr, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  offsetof(PyVTKObject, vtk_dict), // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  PyVTKObject_New, // tp_new
  PyObject_GC_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

static vtkObjectBase *PyvtkDotProductSimilarity_StaticNew()
{
  return vtkDotProductSimilarity::New();
}

PyObject *PyvtkDotProductSimilarity_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDotProductSimilarity_Type, PyvtkDotProductSimilarity_Methods,
    "vtkDotProductSimilarity",
 &PyvtkDotProductSimilarity_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkTableAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDotProductSimilarity(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDotProductSimilarity_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDotProductSimilarity", o) != 0)
  {
    Py_DECREF(o);
  }

}

