// python wrapper for vtkInteractorStyleAreaSelectHover
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleAreaSelectHover.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleAreaSelectHover(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyleAreaSelectHover_ClassNew(); }


static PyObject *
PyvtkInteractorStyleAreaSelectHover_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleAreaSelectHover::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleAreaSelectHover::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleAreaSelectHover *tempr = vtkInteractorStyleAreaSelectHover::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleAreaSelectHover *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleAreaSelectHover::NewInstance());

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
PyvtkInteractorStyleAreaSelectHover_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyleAreaSelectHover::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyleAreaSelectHover::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  vtkAreaLayout *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAreaLayout"))
  {
    if (ap.IsBound())
    {
      op->SetLayout(temp0);
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::SetLayout(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetLayout(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLayout");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAreaLayout *tempr = (ap.IsBound() ?
      op->GetLayout() :
      op->vtkInteractorStyleAreaSelectHover::GetLayout());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLabelField(temp0);
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::SetLabelField(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetLabelField(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLabelField");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetLabelField() :
      op->vtkInteractorStyleAreaSelectHover::GetLabelField());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetUseRectangularCoordinates(temp0);
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::SetUseRectangularCoordinates(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetUseRectangularCoordinates(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUseRectangularCoordinates");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetUseRectangularCoordinates() :
      op->vtkInteractorStyleAreaSelectHover::GetUseRectangularCoordinates());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOn();
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::UseRectangularCoordinatesOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "UseRectangularCoordinatesOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->UseRectangularCoordinatesOff();
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::UseRectangularCoordinatesOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetInteractor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInteractor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  vtkRenderWindowInteractor *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderWindowInteractor"))
  {
    if (ap.IsBound())
    {
      op->SetInteractor(temp0);
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::SetInteractor(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetHighLightColor(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightColor");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  double temp0;
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
      op->SetHighLightColor(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::SetHighLightColor(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_SetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetHighLightWidth(temp0);
    }
    else
    {
      op->vtkInteractorStyleAreaSelectHover::SetHighLightWidth(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetHighLightWidth(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHighLightWidth");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetHighLightWidth() :
      op->vtkInteractorStyleAreaSelectHover::GetHighLightWidth());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleAreaSelectHover_GetIdAtPos(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetIdAtPos");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleAreaSelectHover *op = static_cast<vtkInteractorStyleAreaSelectHover *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    long long tempr = (ap.IsBound() ?
      op->GetIdAtPos(temp0, temp1) :
      op->vtkInteractorStyleAreaSelectHover::GetIdAtPos(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleAreaSelectHover_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleAreaSelectHover_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleAreaSelectHover_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleAreaSelectHover_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorStyleAreaSelectHover\nC++: static vtkInteractorStyleAreaSelectHover *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleAreaSelectHover_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyleAreaSelectHover\nC++: vtkInteractorStyleAreaSelectHover *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyleAreaSelectHover_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyleAreaSelectHover_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetLayout", PyvtkInteractorStyleAreaSelectHover_SetLayout, METH_VARARGS,
   "SetLayout(self, layout:vtkAreaLayout) -> None\nC++: void SetLayout(vtkAreaLayout *layout)\n\nMust be set to the vtkAreaLayout used to compute the bounds of\neach vertex.\n"},
  {"GetLayout", PyvtkInteractorStyleAreaSelectHover_GetLayout, METH_VARARGS,
   "GetLayout(self) -> vtkAreaLayout\nC++: virtual vtkAreaLayout *GetLayout()\n\n"},
  {"SetLabelField", PyvtkInteractorStyleAreaSelectHover_SetLabelField, METH_VARARGS,
   "SetLabelField(self, _arg:str) -> None\nC++: virtual void SetLabelField(const char *_arg)\n\nThe name of the field to use when displaying text in the hover\nballoon.\n"},
  {"GetLabelField", PyvtkInteractorStyleAreaSelectHover_GetLabelField, METH_VARARGS,
   "GetLabelField(self) -> str\nC++: virtual char *GetLabelField()\n\n"},
  {"SetUseRectangularCoordinates", PyvtkInteractorStyleAreaSelectHover_SetUseRectangularCoordinates, METH_VARARGS,
   "SetUseRectangularCoordinates(self, _arg:bool) -> None\nC++: virtual void SetUseRectangularCoordinates(bool _arg)\n\nDetermine whether or not to use rectangular coordinates instead\nof polar coordinates.\n"},
  {"GetUseRectangularCoordinates", PyvtkInteractorStyleAreaSelectHover_GetUseRectangularCoordinates, METH_VARARGS,
   "GetUseRectangularCoordinates(self) -> bool\nC++: virtual bool GetUseRectangularCoordinates()\n\n"},
  {"UseRectangularCoordinatesOn", PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOn, METH_VARARGS,
   "UseRectangularCoordinatesOn(self) -> None\nC++: virtual void UseRectangularCoordinatesOn()\n\n"},
  {"UseRectangularCoordinatesOff", PyvtkInteractorStyleAreaSelectHover_UseRectangularCoordinatesOff, METH_VARARGS,
   "UseRectangularCoordinatesOff(self) -> None\nC++: virtual void UseRectangularCoordinatesOff()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleAreaSelectHover_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove() override;\n\nOverridden from vtkInteractorStyleImage to provide the desired\ninteraction behavior.\n"},
  {"SetInteractor", PyvtkInteractorStyleAreaSelectHover_SetInteractor, METH_VARARGS,
   "SetInteractor(self, rwi:vtkRenderWindowInteractor) -> None\nC++: void SetInteractor(vtkRenderWindowInteractor *rwi) override;\n\nSet the interactor that this interactor style works with.\n"},
  {"SetHighLightColor", PyvtkInteractorStyleAreaSelectHover_SetHighLightColor, METH_VARARGS,
   "SetHighLightColor(self, r:float, g:float, b:float) -> None\nC++: void SetHighLightColor(double r, double g, double b)\n\nSet the color used to highlight the hovered vertex.\n"},
  {"SetHighLightWidth", PyvtkInteractorStyleAreaSelectHover_SetHighLightWidth, METH_VARARGS,
   "SetHighLightWidth(self, lw:float) -> None\nC++: void SetHighLightWidth(double lw)\n\nThe width of the line around the hovered vertex.\n"},
  {"GetHighLightWidth", PyvtkInteractorStyleAreaSelectHover_GetHighLightWidth, METH_VARARGS,
   "GetHighLightWidth(self) -> float\nC++: double GetHighLightWidth()\n\n"},
  {"GetIdAtPos", PyvtkInteractorStyleAreaSelectHover_GetIdAtPos, METH_VARARGS,
   "GetIdAtPos(self, x:int, y:int) -> int\nC++: vtkIdType GetIdAtPos(int x, int y)\n\nObtain the tree vertex id at the position specified.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyleAreaSelectHover_Doc =
  "vtkInteractorStyleAreaSelectHover - An interactor style for an area\ntree view\n\n"
  "Superclass: vtkInteractorStyleRubberBand2D\n\n"
  "The vtkInteractorStyleAreaSelectHover specifically works with\n"
  "pipelines that create a hierarchical tree.  Such pipelines will have\n"
  "a vtkAreaLayout filter which must be passed to this interactor style\n"
  "for it to function correctly. This interactor style allows only 2D\n"
  "panning and zooming, rubber band selection and provides a balloon\n"
  "containing the name of the vertex hovered over.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyleAreaSelectHover_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkViewsInfovis.vtkInteractorStyleAreaSelectHover", // tp_name
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
  PyvtkInteractorStyleAreaSelectHover_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleAreaSelectHover_StaticNew()
{
  return vtkInteractorStyleAreaSelectHover::New();
}

PyObject *PyvtkInteractorStyleAreaSelectHover_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyleAreaSelectHover_Type, PyvtkInteractorStyleAreaSelectHover_Methods,
    "vtkInteractorStyleAreaSelectHover",
 &PyvtkInteractorStyleAreaSelectHover_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInteractorStyleRubberBand2D");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkInteractorStyleAreaSelectHover(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleAreaSelectHover_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleAreaSelectHover", o) != 0)
  {
    Py_DECREF(o);
  }

}

