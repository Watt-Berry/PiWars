// python wrapper for vtkRandomPool
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkRandomPool.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkRandomPool(PyObject *dict); }
extern "C" { PyObject *PyvtkRandomPool_ClassNew(); }

#ifndef DECLARED_PyvtkObject_ClassNew
extern "C" { PyObject *PyvtkObject_ClassNew(); }
#define DECLARED_PyvtkObject_ClassNew
#endif

static PyObject *
PyvtkRandomPool_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkRandomPool::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkRandomPool::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkRandomPool *tempr = vtkRandomPool::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomPool *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkRandomPool::NewInstance());

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
PyvtkRandomPool_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkRandomPool::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkRandomPool::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_SetSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkRandomSequence *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRandomSequence"))
  {
    if (ap.IsBound())
    {
      op->SetSequence(temp0);
    }
    else
    {
      op->vtkRandomPool::SetSequence(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSequence(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSequence");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRandomSequence *tempr = (ap.IsBound() ?
      op->GetSequence() :
      op->vtkRandomPool::GetSequence());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_SetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSize(temp0);
    }
    else
    {
      op->vtkRandomPool::SetSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSizeMinValue() :
      op->vtkRandomPool::GetSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSizeMaxValue() :
      op->vtkRandomPool::GetSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetSize() :
      op->vtkRandomPool::GetSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_SetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfComponents(temp0);
    }
    else
    {
      op->vtkRandomPool::SetNumberOfComponents(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetNumberOfComponentsMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMinValue() :
      op->vtkRandomPool::GetNumberOfComponentsMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetNumberOfComponentsMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponentsMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfComponentsMaxValue() :
      op->vtkRandomPool::GetNumberOfComponentsMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetNumberOfComponents(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfComponents");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfComponents() :
      op->vtkRandomPool::GetNumberOfComponents());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetTotalSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTotalSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetTotalSize() :
      op->vtkRandomPool::GetTotalSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GeneratePool(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GeneratePool");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GeneratePool() :
      op->vtkRandomPool::GeneratePool());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetPool(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetPool");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const double *tempr = (ap.IsBound() ?
      op->GetPool() :
      op->vtkRandomPool::GetPool());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetValue_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkRandomPool::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_GetValue_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  long long temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0, temp1) :
      op->vtkRandomPool::GetValue(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_GetValue(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkRandomPool_GetValue_s1(self, args);
    case 2:
      return PyvtkRandomPool_GetValue_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValue");
  return nullptr;
}


static PyObject *
PyvtkRandomPool_PopulateDataArray_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopulateDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkDataArray *temp0 = nullptr;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->PopulateDataArray(temp0, temp1, temp2);
    }
    else
    {
      op->vtkRandomPool::PopulateDataArray(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_PopulateDataArray_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "PopulateDataArray");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  vtkDataArray *temp0 = nullptr;
  int temp1;
  double temp2;
  double temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkDataArray") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->PopulateDataArray(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkRandomPool::PopulateDataArray(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkRandomPool_PopulateDataArray(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkRandomPool_PopulateDataArray_s1(self, args);
    case 4:
      return PyvtkRandomPool_PopulateDataArray_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "PopulateDataArray");
  return nullptr;
}


static PyObject *
PyvtkRandomPool_SetChunkSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetChunkSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetChunkSize(temp0);
    }
    else
    {
      op->vtkRandomPool::SetChunkSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetChunkSizeMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChunkSizeMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetChunkSizeMinValue() :
      op->vtkRandomPool::GetChunkSizeMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetChunkSizeMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChunkSizeMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetChunkSizeMaxValue() :
      op->vtkRandomPool::GetChunkSizeMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkRandomPool_GetChunkSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetChunkSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkRandomPool *op = static_cast<vtkRandomPool *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetChunkSize() :
      op->vtkRandomPool::GetChunkSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkRandomPool_Methods[] = {
  {"IsTypeOf", PyvtkRandomPool_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkRandomPool_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkRandomPool_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkRandomPool\nC++: static vtkRandomPool *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkRandomPool_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkRandomPool\nC++: vtkRandomPool *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkRandomPool_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkRandomPool_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetSequence", PyvtkRandomPool_SetSequence, METH_VARARGS,
   "SetSequence(self, seq:vtkRandomSequence) -> None\nC++: virtual void SetSequence(vtkRandomSequence *seq)\n\nSpecify the random sequence generator used to produce the random\npool. By default vtkMersenneTwister is used.\n"},
  {"GetSequence", PyvtkRandomPool_GetSequence, METH_VARARGS,
   "GetSequence(self) -> vtkRandomSequence\nC++: virtual vtkRandomSequence *GetSequence()\n\n"},
  {"SetSize", PyvtkRandomPool_SetSize, METH_VARARGS,
   "SetSize(self, _arg:int) -> None\nC++: virtual void SetSize(vtkIdType _arg)\n\nMethods to set and get the size of the pool. The size must be\nspecified before invoking GeneratePool(). Note the number of\ncomponents will affect the total size (allocated memory is\nSize*NumberOfComponents).\n"},
  {"GetSizeMinValue", PyvtkRandomPool_GetSizeMinValue, METH_VARARGS,
   "GetSizeMinValue(self) -> int\nC++: virtual vtkIdType GetSizeMinValue()\n\n"},
  {"GetSizeMaxValue", PyvtkRandomPool_GetSizeMaxValue, METH_VARARGS,
   "GetSizeMaxValue(self) -> int\nC++: virtual vtkIdType GetSizeMaxValue()\n\n"},
  {"GetSize", PyvtkRandomPool_GetSize, METH_VARARGS,
   "GetSize(self) -> int\nC++: virtual vtkIdType GetSize()\n\n"},
  {"SetNumberOfComponents", PyvtkRandomPool_SetNumberOfComponents, METH_VARARGS,
   "SetNumberOfComponents(self, _arg:int) -> None\nC++: virtual void SetNumberOfComponents(vtkIdType _arg)\n\nMethods to set and get the number of components in the pool. This\nis a convenience capability and can be used to interface with\nvtkDataArrays. By default the number of components is =1.\n"},
  {"GetNumberOfComponentsMinValue", PyvtkRandomPool_GetNumberOfComponentsMinValue, METH_VARARGS,
   "GetNumberOfComponentsMinValue(self) -> int\nC++: virtual vtkIdType GetNumberOfComponentsMinValue()\n\n"},
  {"GetNumberOfComponentsMaxValue", PyvtkRandomPool_GetNumberOfComponentsMaxValue, METH_VARARGS,
   "GetNumberOfComponentsMaxValue(self) -> int\nC++: virtual vtkIdType GetNumberOfComponentsMaxValue()\n\n"},
  {"GetNumberOfComponents", PyvtkRandomPool_GetNumberOfComponents, METH_VARARGS,
   "GetNumberOfComponents(self) -> int\nC++: virtual vtkIdType GetNumberOfComponents()\n\n"},
  {"GetTotalSize", PyvtkRandomPool_GetTotalSize, METH_VARARGS,
   "GetTotalSize(self) -> int\nC++: vtkIdType GetTotalSize()\n\nThis convenience method returns the total size of the memory\npool, i.e., Size*NumberOfComponents.\n"},
  {"GeneratePool", PyvtkRandomPool_GeneratePool, METH_VARARGS,
   "GeneratePool(self) -> Pointer\nC++: const double *GeneratePool()\n\nThese methods provide access to the raw random pool as a double\narray. The size of the array is Size*NumberOfComponents. Each x\nvalue ranges between (0<=x<=1). The class will generate the pool\nas necessary (a modified time for generation is maintained). Also\na method is available for getting the value at the ith pool\nposition and compNum component. Finally, note that the GetValue()\nmethod uses modulo reduction to ensure that the request remains\ninside of the pool. Two forms are provided, the first assumes\nNumberOfComponents=1; the second allows access to a particular\ncomponent. The GetPool() and GetValue() methods should only be\ncalled after GeneratePool() has been invoked;\n"},
  {"GetPool", PyvtkRandomPool_GetPool, METH_VARARGS,
   "GetPool(self) -> Pointer\nC++: const double *GetPool()\n\n"},
  {"GetValue", PyvtkRandomPool_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(vtkIdType i)\nGetValue(self, i:int, compNum:int) -> float\nC++: double GetValue(vtkIdType i, int compNum)\n\n"},
  {"PopulateDataArray", PyvtkRandomPool_PopulateDataArray, METH_VARARGS,
   "PopulateDataArray(self, da:vtkDataArray, minRange:float,\n    maxRange:float) -> None\nC++: void PopulateDataArray(vtkDataArray *da, double minRange,\n    double maxRange)\nPopulateDataArray(self, da:vtkDataArray, compNumber:int,\n    minRange:float, maxRange:float) -> None\nC++: void PopulateDataArray(vtkDataArray *da, int compNumber,\n    double minRange, double maxRange)\n\nMethods to populate data arrays of various types with values\nwithin a specified (min,max) range. Note that compNumber is used\nto specify the range for a particular component; otherwise all\ngenerated components are within the (min,max) range specified.\n(Thus it is possible to make multiple calls to generate random\nnumbers for each component with different ranges.) Internally the\ntype of the data array passed in is used to cast to the\nappropriate type. Also the size and number of components of the\nvtkDataArray controls the total number of random numbers\ngenerated; so the input data array should be pre-allocated with\n(SetNumberOfComponents, SetNumberOfTuples).\n"},
  {"SetChunkSize", PyvtkRandomPool_SetChunkSize, METH_VARARGS,
   "SetChunkSize(self, _arg:int) -> None\nC++: virtual void SetChunkSize(vtkIdType _arg)\n\nSpecify the work chunk size at which point multithreading kicks\nin. For small memory pools < ChunkSize, no threading is used.\nLarger pools are computed using vtkMultiThreader.\n"},
  {"GetChunkSizeMinValue", PyvtkRandomPool_GetChunkSizeMinValue, METH_VARARGS,
   "GetChunkSizeMinValue(self) -> int\nC++: virtual vtkIdType GetChunkSizeMinValue()\n\n"},
  {"GetChunkSizeMaxValue", PyvtkRandomPool_GetChunkSizeMaxValue, METH_VARARGS,
   "GetChunkSizeMaxValue(self) -> int\nC++: virtual vtkIdType GetChunkSizeMaxValue()\n\n"},
  {"GetChunkSize", PyvtkRandomPool_GetChunkSize, METH_VARARGS,
   "GetChunkSize(self) -> int\nC++: virtual vtkIdType GetChunkSize()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkRandomPool_Doc =
  "vtkRandomPool - convenience class to quickly generate a pool of\nrandom numbers\n\n"
  "Superclass: vtkObject\n\n"
  "vtkRandomPool generates random numbers, and can do so using\n"
  "multithreading.  It supports parallel applications where generating\n"
  "random numbers on the fly is difficult (i.e., non-deterministic).\n"
  "Also, it can be used to populate vtkDataArrays in an efficient\n"
  "manner. By default it uses an instance of vtkMersenneTwister to\n"
  "generate random sequences, but any subclass of vtkRandomSequence may\n"
  "be used. It also supports simple methods to generate, access, and\n"
  "pass random memory pools between objects.\n\n"
  "In threaded applications, these class may be conveniently used to\n"
  "pre-generate a sequence of random numbers, followed by the use of\n"
  "deterministic accessor methods to produce random sequences without\n"
  "problems etc. due to unpredictable work load and order of thread\n"
  "execution.\n\n"
  "@warning\n"
  "The class uses vtkMultiThreader if the size of the pool is larger\n"
  "than the specified chunk size. Also, vtkSMPTools may be used to scale\n"
  "the components in the method PopulateDataArray().\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkRandomPool_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonCore.vtkRandomPool", // tp_name
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
  PyvtkRandomPool_Doc, // tp_doc
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

static vtkObjectBase *PyvtkRandomPool_StaticNew()
{
  return vtkRandomPool::New();
}

PyObject *PyvtkRandomPool_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkRandomPool_Type, PyvtkRandomPool_Methods,
    "vtkRandomPool",
 &PyvtkRandomPool_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkObject_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkRandomPool(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkRandomPool_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkRandomPool", o) != 0)
  {
    Py_DECREF(o);
  }

}

