// python wrapper for vtkKdTreeSelector
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkKdTreeSelector.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkKdTreeSelector(PyObject *dict); }
extern "C" { PyObject *PyvtkKdTreeSelector_ClassNew(); }


static PyObject *
PyvtkKdTreeSelector_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkKdTreeSelector::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkKdTreeSelector::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkKdTreeSelector *tempr = vtkKdTreeSelector::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdTreeSelector *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkKdTreeSelector::NewInstance());

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
PyvtkKdTreeSelector_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkKdTreeSelector::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkKdTreeSelector::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  vtkKdTree *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkKdTree"))
  {
    if (ap.IsBound())
    {
      op->SetKdTree(temp0);
    }
    else
    {
      op->vtkKdTreeSelector::SetKdTree(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetKdTree(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetKdTree");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkKdTree *tempr = (ap.IsBound() ?
      op->GetKdTree() :
      op->vtkKdTreeSelector::GetKdTree());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSelectionBounds_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  double temp0;
  double temp1;
  double temp2;
  double temp3;
  double temp4;
  double temp5;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(6) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3) &&
      ap.GetValue(temp4) &&
      ap.GetValue(temp5))
  {
    if (ap.IsBound())
    {
      op->SetSelectionBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }
    else
    {
      op->vtkKdTreeSelector::SetSelectionBounds(temp0, temp1, temp2, temp3, temp4, temp5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdTreeSelector_SetSelectionBounds_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  const size_t size0 = 6;
  double temp0[6];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionBounds(temp0);
    }
    else
    {
      op->vtkKdTreeSelector::SetSelectionBounds(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkKdTreeSelector_SetSelectionBounds(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 6:
      return PyvtkKdTreeSelector_SetSelectionBounds_s1(self, args);
    case 1:
      return PyvtkKdTreeSelector_SetSelectionBounds_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetSelectionBounds");
  return nullptr;
}


static PyObject *
PyvtkKdTreeSelector_GetSelectionBounds(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionBounds");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  size_t sizer = 6;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetSelectionBounds() :
      op->vtkKdTreeSelector::GetSelectionBounds());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSelectionFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionFieldName(temp0);
    }
    else
    {
      op->vtkKdTreeSelector::SetSelectionFieldName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSelectionFieldName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionFieldName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetSelectionFieldName() :
      op->vtkKdTreeSelector::GetSelectionFieldName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSelectionAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSelectionAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSelectionAttribute(temp0);
    }
    else
    {
      op->vtkKdTreeSelector::SetSelectionAttribute(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSelectionAttribute(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSelectionAttribute");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetSelectionAttribute() :
      op->vtkKdTreeSelector::GetSelectionAttribute());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSingleSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleSelection(temp0);
    }
    else
    {
      op->vtkKdTreeSelector::SetSingleSelection(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSingleSelection(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleSelection");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSingleSelection() :
      op->vtkKdTreeSelector::GetSingleSelection());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SingleSelectionOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleSelectionOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleSelectionOn();
    }
    else
    {
      op->vtkKdTreeSelector::SingleSelectionOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SingleSelectionOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SingleSelectionOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SingleSelectionOff();
    }
    else
    {
      op->vtkKdTreeSelector::SingleSelectionOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_SetSingleSelectionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSingleSelectionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSingleSelectionThreshold(temp0);
    }
    else
    {
      op->vtkKdTreeSelector::SetSingleSelectionThreshold(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetSingleSelectionThreshold(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSingleSelectionThreshold");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetSingleSelectionThreshold() :
      op->vtkKdTreeSelector::GetSingleSelectionThreshold());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkKdTreeSelector_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkKdTreeSelector *op = static_cast<vtkKdTreeSelector *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkKdTreeSelector::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkKdTreeSelector_Methods[] = {
  {"IsTypeOf", PyvtkKdTreeSelector_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkKdTreeSelector_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkKdTreeSelector_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkKdTreeSelector\nC++: static vtkKdTreeSelector *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkKdTreeSelector_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkKdTreeSelector\nC++: vtkKdTreeSelector *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkKdTreeSelector_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkKdTreeSelector_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetKdTree", PyvtkKdTreeSelector_SetKdTree, METH_VARARGS,
   "SetKdTree(self, tree:vtkKdTree) -> None\nC++: void SetKdTree(vtkKdTree *tree)\n\nThe kd-tree to use to find selected ids. The kd-tree must be\ninitialized with the desired set of points. When this is set, the\noptional input is ignored.\n"},
  {"GetKdTree", PyvtkKdTreeSelector_GetKdTree, METH_VARARGS,
   "GetKdTree(self) -> vtkKdTree\nC++: virtual vtkKdTree *GetKdTree()\n\n"},
  {"SetSelectionBounds", PyvtkKdTreeSelector_SetSelectionBounds, METH_VARARGS,
   "SetSelectionBounds(self, _arg1:float, _arg2:float, _arg3:float,\n    _arg4:float, _arg5:float, _arg6:float) -> None\nC++: virtual void SetSelectionBounds(double _arg1, double _arg2,\n    double _arg3, double _arg4, double _arg5, double _arg6)\nSetSelectionBounds(self, _arg:(float, float, float, float, float,\n    float)) -> None\nC++: virtual void SetSelectionBounds(const double _arg[6])\n\nThe bounds of the form (xmin,xmax,ymin,ymax,zmin,zmax). To\nperform a search in 2D, use the bounds\n(xmin,xmax,ymin,ymax,VTK_DOUBLE_MIN,VTK_DOUBLE_MAX).\n"},
  {"GetSelectionBounds", PyvtkKdTreeSelector_GetSelectionBounds, METH_VARARGS,
   "GetSelectionBounds(self) -> (float, float, float, float, float,\n    float)\nC++: virtual double *GetSelectionBounds()\n\n"},
  {"SetSelectionFieldName", PyvtkKdTreeSelector_SetSelectionFieldName, METH_VARARGS,
   "SetSelectionFieldName(self, _arg:str) -> None\nC++: virtual void SetSelectionFieldName(const char *_arg)\n\nThe field name to use when generating the selection. If set,\ncreates a VALUES selection. If not set (or is set to nullptr),\ncreates a INDICES selection. By default this is not set.\n"},
  {"GetSelectionFieldName", PyvtkKdTreeSelector_GetSelectionFieldName, METH_VARARGS,
   "GetSelectionFieldName(self) -> str\nC++: virtual char *GetSelectionFieldName()\n\n"},
  {"SetSelectionAttribute", PyvtkKdTreeSelector_SetSelectionAttribute, METH_VARARGS,
   "SetSelectionAttribute(self, _arg:int) -> None\nC++: virtual void SetSelectionAttribute(int _arg)\n\nThe field attribute to use when generating the selection. If set,\ncreates a PEDIGREEIDS or GLOBALIDS selection. If not set (or is\nset to -1), creates a INDICES selection. By default this is not\nset. NOTE: This should be set a constant in vtkDataSetAttributes,\nnot vtkSelection.\n"},
  {"GetSelectionAttribute", PyvtkKdTreeSelector_GetSelectionAttribute, METH_VARARGS,
   "GetSelectionAttribute(self) -> int\nC++: virtual int GetSelectionAttribute()\n\n"},
  {"SetSingleSelection", PyvtkKdTreeSelector_SetSingleSelection, METH_VARARGS,
   "SetSingleSelection(self, _arg:bool) -> None\nC++: virtual void SetSingleSelection(bool _arg)\n\nWhether to only allow up to one value in the result. The item\nselected is closest to the center of the bounds, if there are any\npoints within the selection threshold. Default is off.\n"},
  {"GetSingleSelection", PyvtkKdTreeSelector_GetSingleSelection, METH_VARARGS,
   "GetSingleSelection(self) -> bool\nC++: virtual bool GetSingleSelection()\n\n"},
  {"SingleSelectionOn", PyvtkKdTreeSelector_SingleSelectionOn, METH_VARARGS,
   "SingleSelectionOn(self) -> None\nC++: virtual void SingleSelectionOn()\n\n"},
  {"SingleSelectionOff", PyvtkKdTreeSelector_SingleSelectionOff, METH_VARARGS,
   "SingleSelectionOff(self) -> None\nC++: virtual void SingleSelectionOff()\n\n"},
  {"SetSingleSelectionThreshold", PyvtkKdTreeSelector_SetSingleSelectionThreshold, METH_VARARGS,
   "SetSingleSelectionThreshold(self, _arg:float) -> None\nC++: virtual void SetSingleSelectionThreshold(double _arg)\n\nThe threshold for the single selection. A single point is added\nto the selection if it is within this threshold from the bounds\ncenter. Default is 1.\n"},
  {"GetSingleSelectionThreshold", PyvtkKdTreeSelector_GetSingleSelectionThreshold, METH_VARARGS,
   "GetSingleSelectionThreshold(self) -> float\nC++: virtual double GetSingleSelectionThreshold()\n\n"},
  {"GetMTime", PyvtkKdTreeSelector_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nReturn this object's modified time.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkKdTreeSelector_Doc =
  "vtkKdTreeSelector - Selects point ids using a kd-tree.\n\n"
  "Superclass: vtkSelectionAlgorithm\n\n"
  "If SetKdTree is used, the filter ignores the input and selects based\n"
  "on that kd-tree.  If SetKdTree is not used, the filter builds a\n"
  "kd-tree using the input point set and uses that tree for selection. \n"
  "The output is a vtkSelection containing the ids found in the kd-tree\n"
  "using the specified bounds.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkKdTreeSelector_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersSelection.vtkKdTreeSelector", // tp_name
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
  PyvtkKdTreeSelector_Doc, // tp_doc
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

static vtkObjectBase *PyvtkKdTreeSelector_StaticNew()
{
  return vtkKdTreeSelector::New();
}

PyObject *PyvtkKdTreeSelector_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkKdTreeSelector_Type, PyvtkKdTreeSelector_Methods,
    "vtkKdTreeSelector",
 &PyvtkKdTreeSelector_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkSelectionAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkKdTreeSelector(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkKdTreeSelector_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkKdTreeSelector", o) != 0)
  {
    Py_DECREF(o);
  }

}

