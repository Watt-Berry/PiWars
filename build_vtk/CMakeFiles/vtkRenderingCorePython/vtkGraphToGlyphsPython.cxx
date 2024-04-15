// python wrapper for vtkGraphToGlyphs
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGraphToGlyphs.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGraphToGlyphs(PyObject *dict); }
extern "C" { PyObject *PyvtkGraphToGlyphs_ClassNew(); }


static PyObject *
PyvtkGraphToGlyphs_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGraphToGlyphs::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGraphToGlyphs::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGraphToGlyphs *tempr = vtkGraphToGlyphs::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGraphToGlyphs *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGraphToGlyphs::NewInstance());

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
PyvtkGraphToGlyphs_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGraphToGlyphs::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGraphToGlyphs::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetGlyphType(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetGlyphType(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetGlyphType(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetGlyphType");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetGlyphType() :
      op->vtkGraphToGlyphs::GetGlyphType());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFilled(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetFilled(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetFilled(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFilled");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetFilled() :
      op->vtkGraphToGlyphs::GetFilled());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_FilledOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOn();
    }
    else
    {
      op->vtkGraphToGlyphs::FilledOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_FilledOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FilledOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->FilledOff();
    }
    else
    {
      op->vtkGraphToGlyphs::FilledOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScreenSize(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetScreenSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetScreenSize(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScreenSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetScreenSize() :
      op->vtkGraphToGlyphs::GetScreenSize());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  vtkRenderer *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkRenderer"))
  {
    if (ap.IsBound())
    {
      op->SetRenderer(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetRenderer(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetRenderer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetRenderer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkRenderer *tempr = (ap.IsBound() ?
      op->GetRenderer() :
      op->vtkGraphToGlyphs::GetRenderer());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_SetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetScaling(temp0);
    }
    else
    {
      op->vtkGraphToGlyphs::SetScaling(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetScaling(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetScaling");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetScaling() :
      op->vtkGraphToGlyphs::GetScaling());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGraphToGlyphs_GetMTime(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMTime");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGraphToGlyphs *op = static_cast<vtkGraphToGlyphs *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    unsigned long tempr = (ap.IsBound() ?
      op->GetMTime() :
      op->vtkGraphToGlyphs::GetMTime());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGraphToGlyphs_Methods[] = {
  {"IsTypeOf", PyvtkGraphToGlyphs_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGraphToGlyphs_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGraphToGlyphs_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGraphToGlyphs\nC++: static vtkGraphToGlyphs *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGraphToGlyphs_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGraphToGlyphs\nC++: vtkGraphToGlyphs *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGraphToGlyphs_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGraphToGlyphs_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetGlyphType", PyvtkGraphToGlyphs_SetGlyphType, METH_VARARGS,
   "SetGlyphType(self, _arg:int) -> None\nC++: virtual void SetGlyphType(int _arg)\n\nThe glyph type, specified as one of the enumerated values in this\nclass. VERTEX is a special glyph that cannot be scaled, but\ninstead is rendered as an OpenGL vertex primitive. This may\nappear as a box or circle depending on the hardware.\n"},
  {"GetGlyphType", PyvtkGraphToGlyphs_GetGlyphType, METH_VARARGS,
   "GetGlyphType(self) -> int\nC++: virtual int GetGlyphType()\n\n"},
  {"SetFilled", PyvtkGraphToGlyphs_SetFilled, METH_VARARGS,
   "SetFilled(self, _arg:bool) -> None\nC++: virtual void SetFilled(bool _arg)\n\nWhether to fill the glyph, or to just render the outline.\n"},
  {"GetFilled", PyvtkGraphToGlyphs_GetFilled, METH_VARARGS,
   "GetFilled(self) -> bool\nC++: virtual bool GetFilled()\n\n"},
  {"FilledOn", PyvtkGraphToGlyphs_FilledOn, METH_VARARGS,
   "FilledOn(self) -> None\nC++: virtual void FilledOn()\n\n"},
  {"FilledOff", PyvtkGraphToGlyphs_FilledOff, METH_VARARGS,
   "FilledOff(self) -> None\nC++: virtual void FilledOff()\n\n"},
  {"SetScreenSize", PyvtkGraphToGlyphs_SetScreenSize, METH_VARARGS,
   "SetScreenSize(self, _arg:float) -> None\nC++: virtual void SetScreenSize(double _arg)\n\nSet the desired screen size of each glyph. If you are using\nscaling, this will be the size of the glyph when rendering an\nobject with scaling value 1.0.\n"},
  {"GetScreenSize", PyvtkGraphToGlyphs_GetScreenSize, METH_VARARGS,
   "GetScreenSize(self) -> float\nC++: virtual double GetScreenSize()\n\n"},
  {"SetRenderer", PyvtkGraphToGlyphs_SetRenderer, METH_VARARGS,
   "SetRenderer(self, ren:vtkRenderer) -> None\nC++: virtual void SetRenderer(vtkRenderer *ren)\n\nThe renderer in which the glyphs will be placed.\n"},
  {"GetRenderer", PyvtkGraphToGlyphs_GetRenderer, METH_VARARGS,
   "GetRenderer(self) -> vtkRenderer\nC++: virtual vtkRenderer *GetRenderer()\n\n"},
  {"SetScaling", PyvtkGraphToGlyphs_SetScaling, METH_VARARGS,
   "SetScaling(self, b:bool) -> None\nC++: virtual void SetScaling(bool b)\n\nWhether to use the input array to process in order to scale the\nvertices.\n"},
  {"GetScaling", PyvtkGraphToGlyphs_GetScaling, METH_VARARGS,
   "GetScaling(self) -> bool\nC++: virtual bool GetScaling()\n\n"},
  {"GetMTime", PyvtkGraphToGlyphs_GetMTime, METH_VARARGS,
   "GetMTime(self) -> int\nC++: vtkMTimeType GetMTime() override;\n\nThe modified time of this filter.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGraphToGlyphs_Doc =
  "vtkGraphToGlyphs - create glyphs for graph vertices\n\n"
  "Superclass: vtkPolyDataAlgorithm\n\n"
  "Converts a vtkGraph to a vtkPolyData containing a glyph for each\n"
  "vertex. This assumes that the points of the graph have already been\n"
  "filled (perhaps by vtkGraphLayout). The glyphs will automatically be\n"
  "scaled to be the same size in screen coordinates. To do this the\n"
  "filter requires a pointer to the renderer into which the glyphs will\n"
  "be rendered.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGraphToGlyphs_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingCore.vtkGraphToGlyphs", // tp_name
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
  PyvtkGraphToGlyphs_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGraphToGlyphs_StaticNew()
{
  return vtkGraphToGlyphs::New();
}

PyObject *PyvtkGraphToGlyphs_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGraphToGlyphs_Type, PyvtkGraphToGlyphs_Methods,
    "vtkGraphToGlyphs",
 &PyvtkGraphToGlyphs_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkPolyDataAlgorithm");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  for (int c = 0; c < 9; c++)
  {
    static const struct { const char *name; int value; }
      constants[9] = {
        { "VERTEX", vtkGraphToGlyphs::VERTEX },
        { "DASH", vtkGraphToGlyphs::DASH },
        { "CROSS", vtkGraphToGlyphs::CROSS },
        { "THICKCROSS", vtkGraphToGlyphs::THICKCROSS },
        { "TRIANGLE", vtkGraphToGlyphs::TRIANGLE },
        { "SQUARE", vtkGraphToGlyphs::SQUARE },
        { "CIRCLE", vtkGraphToGlyphs::CIRCLE },
        { "DIAMOND", vtkGraphToGlyphs::DIAMOND },
        { "SPHERE", vtkGraphToGlyphs::SPHERE },
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

void PyVTKAddFile_vtkGraphToGlyphs(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGraphToGlyphs_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGraphToGlyphs", o) != 0)
  {
    Py_DECREF(o);
  }

}

