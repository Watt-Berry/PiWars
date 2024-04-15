// python wrapper for vtkDiscreteFlyingEdges2D
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkDiscreteFlyingEdges2D.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDiscreteFlyingEdges2D(PyObject *dict); }
extern "C" { PyObject *PyvtkDiscreteFlyingEdges2D_ClassNew(); }


static PyObject *
PyvtkDiscreteFlyingEdges2D_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDiscreteFlyingEdges2D::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDiscreteFlyingEdges2D::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDiscreteFlyingEdges2D *tempr = vtkDiscreteFlyingEdges2D::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDiscreteFlyingEdges2D *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDiscreteFlyingEdges2D::NewInstance());

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
PyvtkDiscreteFlyingEdges2D_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDiscreteFlyingEdges2D::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDiscreteFlyingEdges2D::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkDiscreteFlyingEdges2D::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_SetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  int temp0;
  double temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetValue(temp0, temp1);
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::SetValue(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GetValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    double tempr = (ap.IsBound() ?
      op->GetValue(temp0) :
      op->vtkDiscreteFlyingEdges2D::GetValue(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GetValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetValues() :
      op->vtkDiscreteFlyingEdges2D::GetValues());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdges2D_GetValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<double> store0(2*size0);
  double *temp0 = store0.Data();
  double *save0 = (size0 == 0 ? nullptr : temp0 + size0);
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->GetValues(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::GetValues(temp0);
    }

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdges2D_GetValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 0:
      return PyvtkDiscreteFlyingEdges2D_GetValues_s1(self, args);
    case 1:
      return PyvtkDiscreteFlyingEdges2D_GetValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetValues");
  return nullptr;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_SetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfContours(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::SetNumberOfContours(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GetNumberOfContours(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfContours");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfContours() :
      op->vtkDiscreteFlyingEdges2D::GetNumberOfContours());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GenerateValues_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  int temp0;
  const size_t size1 = 2;
  double temp1[2];
  double save1[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetArray(temp1, size1))
  {
    vtkPythonArgs::Save(temp1, save1, size1);

    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1);
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::GenerateValues(temp0, temp1);
    }

    if (vtkPythonArgs::HasChanged(temp1, save1, size1) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(1, temp1, size1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdges2D_GenerateValues_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateValues");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  int temp0;
  double temp1;
  double temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->GenerateValues(temp0, temp1, temp2);
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::GenerateValues(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkDiscreteFlyingEdges2D_GenerateValues(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkDiscreteFlyingEdges2D_GenerateValues_s1(self, args);
    case 3:
      return PyvtkDiscreteFlyingEdges2D_GenerateValues_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GenerateValues");
  return nullptr;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_SetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComputeScalars(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::SetComputeScalars(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GetComputeScalars(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComputeScalars");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetComputeScalars() :
      op->vtkDiscreteFlyingEdges2D::GetComputeScalars());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_ComputeScalarsOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOn();
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::ComputeScalarsOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_ComputeScalarsOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ComputeScalarsOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ComputeScalarsOff();
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::ComputeScalarsOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_SetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetArrayComponent(temp0);
    }
    else
    {
      op->vtkDiscreteFlyingEdges2D::SetArrayComponent(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDiscreteFlyingEdges2D_GetArrayComponent(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetArrayComponent");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDiscreteFlyingEdges2D *op = static_cast<vtkDiscreteFlyingEdges2D *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetArrayComponent() :
      op->vtkDiscreteFlyingEdges2D::GetArrayComponent());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkDiscreteFlyingEdges2D_Methods[] = {
  {"IsTypeOf", PyvtkDiscreteFlyingEdges2D_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDiscreteFlyingEdges2D_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDiscreteFlyingEdges2D_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDiscreteFlyingEdges2D\nC++: static vtkDiscreteFlyingEdges2D *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDiscreteFlyingEdges2D_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDiscreteFlyingEdges2D\nC++: vtkDiscreteFlyingEdges2D *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDiscreteFlyingEdges2D_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDiscreteFlyingEdges2D_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetMTime", PyvtkDiscreteFlyingEdges2D_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nBecause we delegate to vtkContourValues.\n"},
  {"SetValue", PyvtkDiscreteFlyingEdges2D_SetValue, METH_VARARGS,
   "SetValue(self, i:int, value:float) -> None\nC++: void SetValue(int i, double value)\n\nSet a particular contour value at contour number i. The index i\nranges between 0<=i<NumberOfContours.\n"},
  {"GetValue", PyvtkDiscreteFlyingEdges2D_GetValue, METH_VARARGS,
   "GetValue(self, i:int) -> float\nC++: double GetValue(int i)\n\nGet the ith contour value.\n"},
  {"GetValues", PyvtkDiscreteFlyingEdges2D_GetValues, METH_VARARGS,
   "GetValues(self) -> Pointer\nC++: double *GetValues()\nGetValues(self, contourValues:[float, ...]) -> None\nC++: void GetValues(double *contourValues)\n\nGet a pointer to an array of contour values. There will be\nGetNumberOfContours() values in the list.\n"},
  {"SetNumberOfContours", PyvtkDiscreteFlyingEdges2D_SetNumberOfContours, METH_VARARGS,
   "SetNumberOfContours(self, number:int) -> None\nC++: void SetNumberOfContours(int number)\n\nSet the number of contours to place into the list. You only\nreally need to use this method to reduce list size. The method\nSetValue() will automatically increase list size as needed.\n"},
  {"GetNumberOfContours", PyvtkDiscreteFlyingEdges2D_GetNumberOfContours, METH_VARARGS,
   "GetNumberOfContours(self) -> int\nC++: vtkIdType GetNumberOfContours()\n\nGet the number of contours in the list of contour values.\n"},
  {"GenerateValues", PyvtkDiscreteFlyingEdges2D_GenerateValues, METH_VARARGS,
   "GenerateValues(self, numContours:int, range:[float, float])\n    -> None\nC++: void GenerateValues(int numContours, double range[2])\nGenerateValues(self, numContours:int, rangeStart:float,\n    rangeEnd:float) -> None\nC++: void GenerateValues(int numContours, double rangeStart,\n    double rangeEnd)\n\nGenerate numContours equally spaced contour values between\nspecified range. Contour values will include min/max range\nvalues.\n"},
  {"SetComputeScalars", PyvtkDiscreteFlyingEdges2D_SetComputeScalars, METH_VARARGS,
   "SetComputeScalars(self, _arg:int) -> None\nC++: virtual void SetComputeScalars(vtkTypeBool _arg)\n\nOption to set the point scalars of the output.  The scalars will\nbe the label values.  By default this flag is on.\n"},
  {"GetComputeScalars", PyvtkDiscreteFlyingEdges2D_GetComputeScalars, METH_VARARGS,
   "GetComputeScalars(self) -> int\nC++: virtual vtkTypeBool GetComputeScalars()\n\n"},
  {"ComputeScalarsOn", PyvtkDiscreteFlyingEdges2D_ComputeScalarsOn, METH_VARARGS,
   "ComputeScalarsOn(self) -> None\nC++: virtual void ComputeScalarsOn()\n\n"},
  {"ComputeScalarsOff", PyvtkDiscreteFlyingEdges2D_ComputeScalarsOff, METH_VARARGS,
   "ComputeScalarsOff(self) -> None\nC++: virtual void ComputeScalarsOff()\n\n"},
  {"SetArrayComponent", PyvtkDiscreteFlyingEdges2D_SetArrayComponent, METH_VARARGS,
   "SetArrayComponent(self, _arg:int) -> None\nC++: virtual void SetArrayComponent(int _arg)\n\nSet/get which component of the scalar array to contour on;\ndefaults to 0.\n"},
  {"GetArrayComponent", PyvtkDiscreteFlyingEdges2D_GetArrayComponent, METH_VARARGS,
   "GetArrayComponent(self) -> int\nC++: virtual int GetArrayComponent()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDiscreteFlyingEdges2D_Doc =
  "vtkDiscreteFlyingEdges2D - generate isoline(s) from 2D image data\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "vtkDiscreteFlyingEdges2D creates output representations of label maps\n"
  "(e.g., segmented images) using a variation of the flying edges\n"
  "algorithm. The input is a 2D image where each point is labeled\n"
  "(integer labels are preferred to real values), and the output data is\n"
  "polygonal data representing labeled regions. (Note that on output\n"
  "each region [corresponding to a different contour value] is\n"
  "represented independently; i.e., points are not shared between\n"
  "regions even if they are coincident.)\n\n"
  "@warning\n"
  "This filter is specialized to 2D images. This implementation can\n"
  "produce degenerate line segments (i.e., zero-length line segments).\n\n"
  "@warning\n"
  "Use vtkContourLoopExtraction if you wish to create polygons from the\n"
  "line segments.\n\n"
  "@warning\n"
  "This class has been threaded with vtkSMPTools. Using TBB or other\n"
  "non-sequential type (set in the CMake variable\n"
  "VTK_SMP_IMPLEMENTATION_TYPE) may improve performance significantly.\n\n"
  "@sa\n"
  "vtkDiscreteMarchingCubes vtkContourLoopExtraction\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDiscreteFlyingEdges2D_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkDiscreteFlyingEdges2D", // tp_name
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
  PyvtkDiscreteFlyingEdges2D_Doc, // tp_doc
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

static vtkObjectBase *PyvtkDiscreteFlyingEdges2D_StaticNew()
{
  return vtkDiscreteFlyingEdges2D::New();
}

PyObject *PyvtkDiscreteFlyingEdges2D_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDiscreteFlyingEdges2D_Type, PyvtkDiscreteFlyingEdges2D_Methods,
    "vtkDiscreteFlyingEdges2D",
 &PyvtkDiscreteFlyingEdges2D_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDiscreteFlyingEdges2D(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDiscreteFlyingEdges2D_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDiscreteFlyingEdges2D", o) != 0)
  {
    Py_DECREF(o);
  }

}

