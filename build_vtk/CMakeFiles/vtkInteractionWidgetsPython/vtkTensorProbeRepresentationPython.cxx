// python wrapper for vtkTensorProbeRepresentation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkTensorProbeRepresentation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkTensorProbeRepresentation(PyObject *dict); }
extern "C" { PyObject *PyvtkTensorProbeRepresentation_ClassNew(); }

#ifndef DECLARED_PyvtkWidgetRepresentation_ClassNew
extern "C" { PyObject *PyvtkWidgetRepresentation_ClassNew(); }
#define DECLARED_PyvtkWidgetRepresentation_ClassNew
#endif

static PyObject *
PyvtkTensorProbeRepresentation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkTensorProbeRepresentation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkTensorProbeRepresentation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkTensorProbeRepresentation *tempr = vtkTensorProbeRepresentation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkTensorProbeRepresentation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkTensorProbeRepresentation::NewInstance());

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
PyvtkTensorProbeRepresentation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkTensorProbeRepresentation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkTensorProbeRepresentation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_BuildRepresentation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildRepresentation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildRepresentation();
    }
    else
    {
      op->vtkTensorProbeRepresentation::BuildRepresentation();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_RenderOpaqueGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderOpaqueGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkViewport *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkViewport"))
  {
    int tempr = (ap.IsBound() ?
      op->RenderOpaqueGeometry(temp0) :
      op->vtkTensorProbeRepresentation::RenderOpaqueGeometry(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

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
      op->SetProbePosition(temp0, temp1, temp2);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetProbePosition(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    if (ap.IsBound())
    {
      op->SetProbePosition(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetProbePosition(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkTensorProbeRepresentation_SetProbePosition(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 3:
      return PyvtkTensorProbeRepresentation_SetProbePosition_s1(self, args);
    case 1:
      return PyvtkTensorProbeRepresentation_SetProbePosition_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetProbePosition");
  return nullptr;
}


static PyObject *
PyvtkTensorProbeRepresentation_GetProbePosition(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbePosition");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetProbePosition() :
      op->vtkTensorProbeRepresentation::GetProbePosition());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetProbeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetProbeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetProbeCellId(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetProbeCellId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_GetProbeCellId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetProbeCellId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetProbeCellId() :
      op->vtkTensorProbeRepresentation::GetProbeCellId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SetTrajectory(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTrajectory");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->SetTrajectory(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::SetTrajectory(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_Initialize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Initialize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Initialize();
    }
    else
    {
      op->vtkTensorProbeRepresentation::Initialize();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_SelectProbe(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SelectProbe");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const size_t size0 = 2;
  int temp0[2];
  int save0[2];
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = op->SelectProbe(temp0);

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_Move(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Move");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  const size_t size0 = 2;
  double temp0[2];
  double save0[2];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    int tempr = (ap.IsBound() ?
      op->Move(temp0) :
      op->vtkTensorProbeRepresentation::Move(temp0));

    if (vtkPythonArgs::HasChanged(temp0, save0, size0) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(0, temp0, size0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_GetActors(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetActors");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkPropCollection *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPropCollection"))
  {
    if (ap.IsBound())
    {
      op->GetActors(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::GetActors(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkTensorProbeRepresentation_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkTensorProbeRepresentation *op = static_cast<vtkTensorProbeRepresentation *>(vp);

  vtkWindow *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkWindow"))
  {
    if (ap.IsBound())
    {
      op->ReleaseGraphicsResources(temp0);
    }
    else
    {
      op->vtkTensorProbeRepresentation::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkTensorProbeRepresentation_Methods[] = {
  {"IsTypeOf", PyvtkTensorProbeRepresentation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkTensorProbeRepresentation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkTensorProbeRepresentation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkTensorProbeRepresentation\nC++: static vtkTensorProbeRepresentation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkTensorProbeRepresentation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkTensorProbeRepresentation\nC++: vtkTensorProbeRepresentation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkTensorProbeRepresentation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkTensorProbeRepresentation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"BuildRepresentation", PyvtkTensorProbeRepresentation_BuildRepresentation, METH_VARARGS,
   "BuildRepresentation(self) -> None\nC++: void BuildRepresentation() override;\n\nSee vtkWidgetRepresentation for details.\n"},
  {"RenderOpaqueGeometry", PyvtkTensorProbeRepresentation_RenderOpaqueGeometry, METH_VARARGS,
   "RenderOpaqueGeometry(self, __a:vtkViewport) -> int\nC++: int RenderOpaqueGeometry(vtkViewport *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE DO NOT\nUSE THESE METHODS OUTSIDE OF THE RENDERING PROCESS All concrete\nsubclasses must be able to render themselves. There are four key\nrender methods in vtk and they correspond to four different\npoints in the rendering cycle. Any given prop may implement one\nor more of these methods. The first method is intended for\nrendering all opaque geometry. The second method is intended for\nrendering all translucent polygonal geometry. The third one is\nintended for rendering all translucent volumetric geometry. Most\nof the volume rendering mappers draw their results during this\nthird method. The last method is to render any 2D annotation or\noverlays. Each of these methods return an integer value\nindicating whether or not this render method was applied to this\ndata.\n"},
  {"SetProbePosition", PyvtkTensorProbeRepresentation_SetProbePosition, METH_VARARGS,
   "SetProbePosition(self, _arg1:float, _arg2:float, _arg3:float)\n    -> None\nC++: virtual void SetProbePosition(double _arg1, double _arg2,\n    double _arg3)\nSetProbePosition(self, _arg:(float, float, float)) -> None\nC++: virtual void SetProbePosition(const double _arg[3])\n\nSet the position of the Tensor probe.\n"},
  {"GetProbePosition", PyvtkTensorProbeRepresentation_GetProbePosition, METH_VARARGS,
   "GetProbePosition(self) -> (float, float, float)\nC++: virtual double *GetProbePosition()\n\n"},
  {"SetProbeCellId", PyvtkTensorProbeRepresentation_SetProbeCellId, METH_VARARGS,
   "SetProbeCellId(self, _arg:int) -> None\nC++: virtual void SetProbeCellId(vtkIdType _arg)\n\n"},
  {"GetProbeCellId", PyvtkTensorProbeRepresentation_GetProbeCellId, METH_VARARGS,
   "GetProbeCellId(self) -> int\nC++: virtual vtkIdType GetProbeCellId()\n\n"},
  {"SetTrajectory", PyvtkTensorProbeRepresentation_SetTrajectory, METH_VARARGS,
   "SetTrajectory(self, __a:vtkPolyData) -> None\nC++: virtual void SetTrajectory(vtkPolyData *)\n\nSet the trajectory that we are trying to probe tensors on\n"},
  {"Initialize", PyvtkTensorProbeRepresentation_Initialize, METH_VARARGS,
   "Initialize(self) -> None\nC++: void Initialize()\n\nSet the probe position to a reasonable location on the\ntrajectory.\n"},
  {"SelectProbe", PyvtkTensorProbeRepresentation_SelectProbe, METH_VARARGS,
   "SelectProbe(self, pos:[int, int]) -> int\nC++: virtual int SelectProbe(int pos[2])\n\nThis method is invoked by the widget during user interaction. Can\nwe pick the tensor glyph at the current cursor pos\n"},
  {"Move", PyvtkTensorProbeRepresentation_Move, METH_VARARGS,
   "Move(self, motionVector:[float, float]) -> int\nC++: virtual int Move(double motionVector[2])\n\nINTERNAL - Do not use This method is invoked by the widget during\nuser interaction. Move probe based on the position and the motion\nvector.\n"},
  {"GetActors", PyvtkTensorProbeRepresentation_GetActors, METH_VARARGS,
   "GetActors(self, __a:vtkPropCollection) -> None\nC++: void GetActors(vtkPropCollection *) override;\n\nSee vtkProp for details.\n"},
  {"ReleaseGraphicsResources", PyvtkTensorProbeRepresentation_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nWARNING: INTERNAL METHOD - NOT INTENDED FOR GENERAL USE Release\nany graphics resources that are being consumed by this actor. The\nparameter window could be used to determine which graphic\nresources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkTensorProbeRepresentation_Doc =
  "vtkTensorProbeRepresentation - Abstract class that serves as a\nrepresentation for vtkTensorProbeWidget\n\n"
  "Superclass: vtkWidgetRepresentation\n\n"
  "The class serves as an abstract geometrical representation for the\n"
  "vtkTensorProbeWidget. It is left to the concrete implementation to\n"
  "render the tensors as it desires. For instance,\n"
  "vtkEllipsoidTensorProbeRepresentation renders the tensors as\n"
  "ellipsoids.\n\n"
  "@sa\n"
  "vtkTensorProbeWidget\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkTensorProbeRepresentation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionWidgets.vtkTensorProbeRepresentation", // tp_name
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
  PyvtkTensorProbeRepresentation_Doc, // tp_doc
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

PyObject *PyvtkTensorProbeRepresentation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkTensorProbeRepresentation_Type, PyvtkTensorProbeRepresentation_Methods,
    "vtkTensorProbeRepresentation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkWidgetRepresentation_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkTensorProbeRepresentation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkTensorProbeRepresentation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkTensorProbeRepresentation", o) != 0)
  {
    Py_DECREF(o);
  }

}

