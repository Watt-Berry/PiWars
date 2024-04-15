// python wrapper for vtkVisibilitySort
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVisibilitySort.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkVisibilitySort(PyObject *dict); }
extern "C" { PyObject *PyvtkVisibilitySort_ClassNew(); }


static PyObject *
PyvtkVisibilitySort_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkVisibilitySort::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkVisibilitySort::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkVisibilitySort *tempr = vtkVisibilitySort::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkVisibilitySort *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkVisibilitySort::NewInstance());

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
PyvtkVisibilitySort_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkVisibilitySort::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkVisibilitySort::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_InitTraversal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitTraversal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    op->InitTraversal();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetNextCells(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNextCells");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkIdTypeArray *tempr = op->GetNextCells();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetMaxCellsReturned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxCellsReturned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxCellsReturned(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetMaxCellsReturned(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturnedMinValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturnedMinValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellsReturnedMinValue() :
      op->vtkVisibilitySort::GetMaxCellsReturnedMinValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturnedMaxValue(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturnedMaxValue");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellsReturnedMaxValue() :
      op->vtkVisibilitySort::GetMaxCellsReturnedMaxValue());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetMaxCellsReturned(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxCellsReturned");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetMaxCellsReturned() :
      op->vtkVisibilitySort::GetMaxCellsReturned());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkMatrix4x4 *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->SetModelTransform(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetModelTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetModelTransform() :
      op->vtkVisibilitySort::GetModelTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetInverseModelTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInverseModelTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMatrix4x4 *tempr = (ap.IsBound() ?
      op->GetInverseModelTransform() :
      op->vtkVisibilitySort::GetInverseModelTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkCamera *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkCamera"))
  {
    if (ap.IsBound())
    {
      op->SetCamera(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetCamera(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetCamera(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetCamera");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkCamera *tempr = (ap.IsBound() ?
      op->GetCamera() :
      op->vtkVisibilitySort::GetCamera());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  vtkDataSet *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkDataSet"))
  {
    if (ap.IsBound())
    {
      op->SetInput(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetInput(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetInput(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInput");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDataSet *tempr = (ap.IsBound() ?
      op->GetInput() :
      op->vtkVisibilitySort::GetInput());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_GetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDirection() :
      op->vtkVisibilitySort::GetDirection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetDirection(temp0);
    }
    else
    {
      op->vtkVisibilitySort::SetDirection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirectionToBackToFront(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToBackToFront");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToBackToFront();
    }
    else
    {
      op->vtkVisibilitySort::SetDirectionToBackToFront();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_SetDirectionToFrontToBack(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetDirectionToFrontToBack");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SetDirectionToFrontToBack();
    }
    else
    {
      op->vtkVisibilitySort::SetDirectionToFrontToBack();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkVisibilitySort_UsesGarbageCollector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UsesGarbageCollector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkVisibilitySort *op = static_cast<vtkVisibilitySort *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->UsesGarbageCollector() :
      op->vtkVisibilitySort::UsesGarbageCollector());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkVisibilitySort_Methods[] = {
  {"IsTypeOf", PyvtkVisibilitySort_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkVisibilitySort_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkVisibilitySort_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkVisibilitySort\nC++: static vtkVisibilitySort *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkVisibilitySort_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkVisibilitySort\nC++: vtkVisibilitySort *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkVisibilitySort_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkVisibilitySort_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InitTraversal", PyvtkVisibilitySort_InitTraversal, METH_VARARGS,
   "InitTraversal(self) -> None\nC++: virtual void InitTraversal()\n\nTo facilitate incremental sorting algorithms, the cells are\nretrieved in an iteration process.  That is, call InitTraversal\nto start the iteration and call GetNextCells to get the cell IDs\nin order. However, for efficiencies sake, GetNextCells returns an\nordered list of several id's in once call (but not necessarily\nall).  GetNextCells will return NULL once the entire sorted list\nis output.  The vtkIdTypeArray returned from GetNextCells is a\ncached array, so do not delete it.  At the same note, do not\nexpect the array to be valid after subsequent calls to\nGetNextCells.\n"},
  {"GetNextCells", PyvtkVisibilitySort_GetNextCells, METH_VARARGS,
   "GetNextCells(self) -> vtkIdTypeArray\nC++: virtual vtkIdTypeArray *GetNextCells()\n\n"},
  {"SetMaxCellsReturned", PyvtkVisibilitySort_SetMaxCellsReturned, METH_VARARGS,
   "SetMaxCellsReturned(self, _arg:int) -> None\nC++: virtual void SetMaxCellsReturned(int _arg)\n\nSet/Get the maximum number of cells that GetNextCells will return\nin one invocation.\n"},
  {"GetMaxCellsReturnedMinValue", PyvtkVisibilitySort_GetMaxCellsReturnedMinValue, METH_VARARGS,
   "GetMaxCellsReturnedMinValue(self) -> int\nC++: virtual int GetMaxCellsReturnedMinValue()\n\n"},
  {"GetMaxCellsReturnedMaxValue", PyvtkVisibilitySort_GetMaxCellsReturnedMaxValue, METH_VARARGS,
   "GetMaxCellsReturnedMaxValue(self) -> int\nC++: virtual int GetMaxCellsReturnedMaxValue()\n\n"},
  {"GetMaxCellsReturned", PyvtkVisibilitySort_GetMaxCellsReturned, METH_VARARGS,
   "GetMaxCellsReturned(self) -> int\nC++: virtual int GetMaxCellsReturned()\n\n"},
  {"SetModelTransform", PyvtkVisibilitySort_SetModelTransform, METH_VARARGS,
   "SetModelTransform(self, mat:vtkMatrix4x4) -> None\nC++: virtual void SetModelTransform(vtkMatrix4x4 *mat)\n\nSet/Get the matrix that transforms from object space to world\nspace. Generally, you get this matrix from a call to GetMatrix of\na vtkProp3D (vtkActor).\n"},
  {"GetModelTransform", PyvtkVisibilitySort_GetModelTransform, METH_VARARGS,
   "GetModelTransform(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetModelTransform()\n\n"},
  {"GetInverseModelTransform", PyvtkVisibilitySort_GetInverseModelTransform, METH_VARARGS,
   "GetInverseModelTransform(self) -> vtkMatrix4x4\nC++: virtual vtkMatrix4x4 *GetInverseModelTransform()\n\n"},
  {"SetCamera", PyvtkVisibilitySort_SetCamera, METH_VARARGS,
   "SetCamera(self, camera:vtkCamera) -> None\nC++: virtual void SetCamera(vtkCamera *camera)\n\nSet/Get the camera that specifies the viewing parameters.\n"},
  {"GetCamera", PyvtkVisibilitySort_GetCamera, METH_VARARGS,
   "GetCamera(self) -> vtkCamera\nC++: virtual vtkCamera *GetCamera()\n\n"},
  {"SetInput", PyvtkVisibilitySort_SetInput, METH_VARARGS,
   "SetInput(self, data:vtkDataSet) -> None\nC++: virtual void SetInput(vtkDataSet *data)\n\nSet/Get the data set containing the cells to sort.\n"},
  {"GetInput", PyvtkVisibilitySort_GetInput, METH_VARARGS,
   "GetInput(self) -> vtkDataSet\nC++: virtual vtkDataSet *GetInput()\n\n"},
  {"GetDirection", PyvtkVisibilitySort_GetDirection, METH_VARARGS,
   "GetDirection(self) -> int\nC++: virtual int GetDirection()\n\nSet/Get the sorting direction.  Be default, the direction is set\nto back to front.\n"},
  {"SetDirection", PyvtkVisibilitySort_SetDirection, METH_VARARGS,
   "SetDirection(self, _arg:int) -> None\nC++: virtual void SetDirection(int _arg)\n\n"},
  {"SetDirectionToBackToFront", PyvtkVisibilitySort_SetDirectionToBackToFront, METH_VARARGS,
   "SetDirectionToBackToFront(self) -> None\nC++: void SetDirectionToBackToFront()\n\n"},
  {"SetDirectionToFrontToBack", PyvtkVisibilitySort_SetDirectionToFrontToBack, METH_VARARGS,
   "SetDirectionToFrontToBack(self) -> None\nC++: void SetDirectionToFrontToBack()\n\n"},
  {"UsesGarbageCollector", PyvtkVisibilitySort_UsesGarbageCollector, METH_VARARGS,
   "UsesGarbageCollector(self) -> bool\nC++: bool UsesGarbageCollector() override;\n\nOverwritten to enable garbage collection.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkVisibilitySort_Doc =
  "vtkVisibilitySort - Abstract class that can sort cell data along a\nviewpoint.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkVisibilitySort encapsulates a method for depth sorting the cells\n"
  "of a vtkDataSet for a given viewpoint.  It should be noted that\n"
  "subclasses are not required to give an absolutely correct sorting. \n"
  "Many types of unstructured grids may have sorting cycles, meaning\n"
  "that there is no possible correct sorting.  Some subclasses also only\n"
  "give an approximate sorting in the interest of speed.\n\n"
  "@attention The Input field of this class tends to causes reference\n"
  "cycles.  To help break these cycles, garbage collection is enabled on\n"
  "this object and the input parameter is traced.  For this to work,\n"
  "though, an object in the loop holding the visibility sort should also\n"
  "report that to the garbage collector.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkVisibilitySort_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkVisibilitySort", // tp_name
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
  PyvtkVisibilitySort_Doc, // tp_doc
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

PyObject *PyvtkVisibilitySort_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkVisibilitySort_Type, PyvtkVisibilitySort_Methods,
    "vtkVisibilitySort",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 2; c++)
  {
    static const struct { const char *name; int value; }
      constants[2] = {
        { "BACK_TO_FRONT", vtkVisibilitySort::BACK_TO_FRONT },
        { "FRONT_TO_BACK", vtkVisibilitySort::FRONT_TO_BACK },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkVisibilitySort(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkVisibilitySort_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkVisibilitySort", o) != 0)
  {
    Py_DECREF(o);
  }

}

