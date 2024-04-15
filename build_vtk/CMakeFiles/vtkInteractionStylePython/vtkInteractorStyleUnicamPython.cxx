// python wrapper for vtkInteractorStyleUnicam
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkInteractorStyleUnicam.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkInteractorStyleUnicam(PyObject *dict); }
extern "C" { PyObject *PyvtkInteractorStyleUnicam_ClassNew(); }


static PyObject *
PyvtkInteractorStyleUnicam_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkInteractorStyleUnicam::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkInteractorStyleUnicam::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkInteractorStyleUnicam *tempr = vtkInteractorStyleUnicam::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkInteractorStyleUnicam *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkInteractorStyleUnicam::NewInstance());

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
PyvtkInteractorStyleUnicam_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkInteractorStyleUnicam::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkInteractorStyleUnicam::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_SetWorldUpVector_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  const size_t size0 = 3;
  double temp0[3];
  double save0[3];
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetArray(temp0, size0))
  {
    vtkPythonArgs::Save(temp0, save0, size0);

    if (ap.IsBound())
    {
      op->SetWorldUpVector(temp0);
    }
    else
    {
      op->vtkInteractorStyleUnicam::SetWorldUpVector(temp0);
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
PyvtkInteractorStyleUnicam_SetWorldUpVector_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetWorldUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

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
      op->SetWorldUpVector(temp0, temp1, temp2);
    }
    else
    {
      op->vtkInteractorStyleUnicam::SetWorldUpVector(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkInteractorStyleUnicam_SetWorldUpVector(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkInteractorStyleUnicam_SetWorldUpVector_s1(self, args);
    case 3:
      return PyvtkInteractorStyleUnicam_SetWorldUpVector_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetWorldUpVector");
  return nullptr;
}


static PyObject *
PyvtkInteractorStyleUnicam_GetWorldUpVector(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWorldUpVector");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  size_t sizer = 3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double *tempr = (ap.IsBound() ?
      op->GetWorldUpVector() :
      op->vtkInteractorStyleUnicam::GetWorldUpVector());

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnMouseMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnMouseMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnMouseMove();
    }
    else
    {
      op->vtkInteractorStyleUnicam::OnMouseMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnLeftButtonDown(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonDown");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonDown();
    }
    else
    {
      op->vtkInteractorStyleUnicam::OnLeftButtonDown();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnLeftButtonUp(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonUp");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonUp();
    }
    else
    {
      op->vtkInteractorStyleUnicam::OnLeftButtonUp();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnLeftButtonMove(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnLeftButtonMove");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnLeftButtonMove();
    }
    else
    {
      op->vtkInteractorStyleUnicam::OnLeftButtonMove();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkInteractorStyleUnicam_OnTimer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "OnTimer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkInteractorStyleUnicam *op = static_cast<vtkInteractorStyleUnicam *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->OnTimer();
    }
    else
    {
      op->vtkInteractorStyleUnicam::OnTimer();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkInteractorStyleUnicam_Methods[] = {
  {"IsTypeOf", PyvtkInteractorStyleUnicam_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkInteractorStyleUnicam_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkInteractorStyleUnicam_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkInteractorStyleUnicam\nC++: static vtkInteractorStyleUnicam *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkInteractorStyleUnicam_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkInteractorStyleUnicam\nC++: vtkInteractorStyleUnicam *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkInteractorStyleUnicam_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkInteractorStyleUnicam_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetWorldUpVector", PyvtkInteractorStyleUnicam_SetWorldUpVector, METH_VARARGS,
   "SetWorldUpVector(self, a:[float, float, float]) -> None\nC++: void SetWorldUpVector(double a[3])\nSetWorldUpVector(self, x:float, y:float, z:float) -> None\nC++: void SetWorldUpVector(double x, double y, double z)\n\n"},
  {"GetWorldUpVector", PyvtkInteractorStyleUnicam_GetWorldUpVector, METH_VARARGS,
   "GetWorldUpVector(self) -> (float, float, float)\nC++: virtual double *GetWorldUpVector()\n\n"},
  {"OnMouseMove", PyvtkInteractorStyleUnicam_OnMouseMove, METH_VARARGS,
   "OnMouseMove(self) -> None\nC++: void OnMouseMove() override;\n\nConcrete implementation of event bindings\n"},
  {"OnLeftButtonDown", PyvtkInteractorStyleUnicam_OnLeftButtonDown, METH_VARARGS,
   "OnLeftButtonDown(self) -> None\nC++: void OnLeftButtonDown() override;\n\n"},
  {"OnLeftButtonUp", PyvtkInteractorStyleUnicam_OnLeftButtonUp, METH_VARARGS,
   "OnLeftButtonUp(self) -> None\nC++: void OnLeftButtonUp() override;\n\n"},
  {"OnLeftButtonMove", PyvtkInteractorStyleUnicam_OnLeftButtonMove, METH_VARARGS,
   "OnLeftButtonMove(self) -> None\nC++: virtual void OnLeftButtonMove()\n\n"},
  {"OnTimer", PyvtkInteractorStyleUnicam_OnTimer, METH_VARARGS,
   "OnTimer(self) -> None\nC++: void OnTimer() override;\n\nOnTimer calls RotateCamera, RotateActor etc which should be\noverridden by style subclasses.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkInteractorStyleUnicam_Doc =
  "vtkInteractorStyleUnicam - provides Unicam navigation style\n\n"
  "Superclass: vtkInteractorStyle\n\n"
  "UniCam is a camera interactor.  Here, just the primary features of\n"
  "the UniCam technique are implemented.  UniCam requires just one mouse\n"
  "button and supports context sensitive dollying, panning, and\n"
  "rotation.  (In this implementation, it uses the right mouse button,\n"
  "leaving the middle and left available for other functions.) For more\n"
  "information, see the paper at:\n\n\n"
  "   ftp://ftp.cs.brown.edu/pub/papers/graphics/research/unicam.pdf\n\n"
  "The following is a brief description of the UniCam Camera Controls. \n"
  "You can perform 3 operations on the camera: rotate, pan, and dolly\n"
  "the camera. All operations are reached through the right mouse button\n"
  "& mouse movements.\n\n"
  "IMPORTANT: UniCam assumes there is an axis that makes sense as a \"up\"\n"
  "vector for the world.  By default, this axis is defined to be the\n"
  "vector <0,0,1>.  You can set it explicitly for the data you are\n"
  "viewing with the 'SetWorldUpVector(..)' method.\n\n"
  "1. ROTATE:\n\n"
  "Position the cursor over the point you wish to rotate around and\n"
  "press and release the left mouse button.  A 'focus dot' appears\n"
  "indicating the point that will be the center of rotation.  To rotate,\n"
  "press and hold the left mouse button and drag the mouse.. release the\n"
  "button to complete the rotation.\n\n"
  "Rotations can be done without placing a focus dot first by moving the\n"
  "mouse cursor to within 10% of the window border & pressing and\n"
  "holding the left button followed by dragging the mouse.  The last\n"
  "focus dot position will be re-used.\n\n"
  "2. PAN:\n\n"
  "Click and hold the left mouse button, and initially move the mouse\n"
  "left or right.  The point under the initial pick will pick correlate\n"
  "w/ the mouse tip-- (i.e., direct manipulation).\n\n"
  "3. DOLLY (+ PAN):\n\n"
  "Click and hold the left mouse button, and initially move the mouse up\n"
  "or down.  Moving the mouse down will dolly towards the picked point,\n"
  "and moving the mouse up will dolly away from it.  Dollying occurs\n"
  "relative to the picked point which simplifies the task of dollying\n"
  "towards a region of interest. Left and right mouse movements will pan\n"
  "the camera left and right.\n\n"
  "@warning\n"
  "(NOTE: This implementation of Unicam assumes a perspective camera. \n"
  "It could be modified relatively easily to also support an\n"
  "orthographic projection.)\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkInteractorStyleUnicam_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInteractionStyle.vtkInteractorStyleUnicam", // tp_name
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
  PyvtkInteractorStyleUnicam_Doc, // tp_doc
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

static vtkObjectBase *PyvtkInteractorStyleUnicam_StaticNew()
{
  return vtkInteractorStyleUnicam::New();
}

PyObject *PyvtkInteractorStyleUnicam_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkInteractorStyleUnicam_Type, PyvtkInteractorStyleUnicam_Methods,
    "vtkInteractorStyleUnicam",
 &PyvtkInteractorStyleUnicam_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkInteractorStyle");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 8; c++)
  {
    static const struct { const char *name; int value; }
      constants[8] = {
        { "NONE", vtkInteractorStyleUnicam::NONE },
        { "BUTTON_LEFT", vtkInteractorStyleUnicam::BUTTON_LEFT },
        { "BUTTON_MIDDLE", vtkInteractorStyleUnicam::BUTTON_MIDDLE },
        { "BUTTON_RIGHT", vtkInteractorStyleUnicam::BUTTON_RIGHT },
        { "CAM_INT_ROT", vtkInteractorStyleUnicam::CAM_INT_ROT },
        { "CAM_INT_CHOOSE", vtkInteractorStyleUnicam::CAM_INT_CHOOSE },
        { "CAM_INT_PAN", vtkInteractorStyleUnicam::CAM_INT_PAN },
        { "CAM_INT_DOLLY", vtkInteractorStyleUnicam::CAM_INT_DOLLY },
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

void PyVTKAddFile_vtkInteractorStyleUnicam(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkInteractorStyleUnicam_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkInteractorStyleUnicam", o) != 0)
  {
    Py_DECREF(o);
  }

}

