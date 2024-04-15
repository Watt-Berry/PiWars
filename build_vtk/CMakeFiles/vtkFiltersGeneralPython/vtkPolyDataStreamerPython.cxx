// python wrapper for vtkPolyDataStreamer
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkPolyDataStreamer.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkPolyDataStreamer(PyObject *dict); }
extern "C" { PyObject *PyvtkPolyDataStreamer_ClassNew(); }


static PyObject *
PyvtkPolyDataStreamer_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkPolyDataStreamer::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkPolyDataStreamer::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkPolyDataStreamer *tempr = vtkPolyDataStreamer::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataStreamer *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkPolyDataStreamer::NewInstance());

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
PyvtkPolyDataStreamer_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkPolyDataStreamer::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkPolyDataStreamer::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_SetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfStreamDivisions(temp0);
    }
    else
    {
      op->vtkPolyDataStreamer::SetNumberOfStreamDivisions(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_GetNumberOfStreamDivisions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfStreamDivisions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfStreamDivisions() :
      op->vtkPolyDataStreamer::GetNumberOfStreamDivisions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_SetColorByPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorByPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorByPiece(temp0);
    }
    else
    {
      op->vtkPolyDataStreamer::SetColorByPiece(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_GetColorByPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorByPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetColorByPiece() :
      op->vtkPolyDataStreamer::GetColorByPiece());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_ColorByPieceOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByPieceOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorByPieceOn();
    }
    else
    {
      op->vtkPolyDataStreamer::ColorByPieceOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkPolyDataStreamer_ColorByPieceOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ColorByPieceOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkPolyDataStreamer *op = static_cast<vtkPolyDataStreamer *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->ColorByPieceOff();
    }
    else
    {
      op->vtkPolyDataStreamer::ColorByPieceOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkPolyDataStreamer_Methods[] = {
  {"IsTypeOf", PyvtkPolyDataStreamer_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkPolyDataStreamer_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkPolyDataStreamer_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkPolyDataStreamer\nC++: static vtkPolyDataStreamer *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkPolyDataStreamer_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkPolyDataStreamer\nC++: vtkPolyDataStreamer *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkPolyDataStreamer_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkPolyDataStreamer_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetNumberOfStreamDivisions", PyvtkPolyDataStreamer_SetNumberOfStreamDivisions, METH_VARARGS,
   "SetNumberOfStreamDivisions(self, num:int) -> None\nC++: void SetNumberOfStreamDivisions(int num)\n\nSet the number of pieces to divide the problem into.\n"},
  {"GetNumberOfStreamDivisions", PyvtkPolyDataStreamer_GetNumberOfStreamDivisions, METH_VARARGS,
   "GetNumberOfStreamDivisions(self) -> int\nC++: int GetNumberOfStreamDivisions()\n\n"},
  {"SetColorByPiece", PyvtkPolyDataStreamer_SetColorByPiece, METH_VARARGS,
   "SetColorByPiece(self, _arg:int) -> None\nC++: virtual void SetColorByPiece(vtkTypeBool _arg)\n\nBy default, this option is off.  When it is on, cell scalars are\ngenerated based on which piece they are in.\n"},
  {"GetColorByPiece", PyvtkPolyDataStreamer_GetColorByPiece, METH_VARARGS,
   "GetColorByPiece(self) -> int\nC++: virtual vtkTypeBool GetColorByPiece()\n\n"},
  {"ColorByPieceOn", PyvtkPolyDataStreamer_ColorByPieceOn, METH_VARARGS,
   "ColorByPieceOn(self) -> None\nC++: virtual void ColorByPieceOn()\n\n"},
  {"ColorByPieceOff", PyvtkPolyDataStreamer_ColorByPieceOff, METH_VARARGS,
   "ColorByPieceOff(self) -> None\nC++: virtual void ColorByPieceOff()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkPolyDataStreamer_Doc =
  "vtkPolyDataStreamer - Streamer appends input pieces to the output.\n\n"
  "Superclass: vtkStreamerBase\n\n"
  "vtkPolyDataStreamer initiates streaming by requesting pieces from its\n"
  "single input it appends these pieces to the requested output. Note\n"
  "that since vtkPolyDataStreamer uses an append filter, all the\n"
  "polygons generated have to be kept in memory before rendering. If\n"
  "these do not fit in the memory, it is possible to make the\n"
  "vtkPolyDataMapper stream. Since the mapper will render each piece\n"
  "separately, all the polygons do not have to stored in\n"
  "memory.@attention The output may be slightly different if the\n"
  "pipeline does not handle ghost cells properly (i.e. you might see\n"
  "seames between the pieces).\n"
  "@sa\n"
  "vtkAppendFilter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkPolyDataStreamer_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersGeneral.vtkPolyDataStreamer", // tp_name
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
  PyvtkPolyDataStreamer_Doc, // tp_doc
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

static vtkObjectBase *PyvtkPolyDataStreamer_StaticNew()
{
  return vtkPolyDataStreamer::New();
}

PyObject *PyvtkPolyDataStreamer_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkPolyDataStreamer_Type, PyvtkPolyDataStreamer_Methods,
    "vtkPolyDataStreamer",
 &PyvtkPolyDataStreamer_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkStreamerBase");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkPolyDataStreamer(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkPolyDataStreamer_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkPolyDataStreamer", o) != 0)
  {
    Py_DECREF(o);
  }

}

