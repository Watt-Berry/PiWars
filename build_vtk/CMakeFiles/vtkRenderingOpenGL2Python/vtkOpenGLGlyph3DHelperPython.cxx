// python wrapper for vtkOpenGLGlyph3DHelper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLGlyph3DHelper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLGlyph3DHelper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLGlyph3DHelper_ClassNew(); }

#ifndef DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
extern "C" { PyObject *PyvtkOpenGLPolyDataMapper_ClassNew(); }
#define DECLARED_PyvtkOpenGLPolyDataMapper_ClassNew
#endif

static PyObject *
PyvtkOpenGLGlyph3DHelper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLGlyph3DHelper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DHelper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DHelper *op = static_cast<vtkOpenGLGlyph3DHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGlyph3DHelper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DHelper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLGlyph3DHelper *tempr = vtkOpenGLGlyph3DHelper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DHelper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DHelper *op = static_cast<vtkOpenGLGlyph3DHelper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLGlyph3DHelper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGlyph3DHelper::NewInstance());

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
PyvtkOpenGLGlyph3DHelper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLGlyph3DHelper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DHelper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DHelper *op = static_cast<vtkOpenGLGlyph3DHelper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLGlyph3DHelper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DHelper_GlyphRender(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GlyphRender");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DHelper *op = static_cast<vtkOpenGLGlyph3DHelper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  long long temp2;
  std::vector<unsigned char> temp3(ap.GetArgSize(3));
  std::vector<float> temp4(ap.GetArgSize(4));
  std::vector<float> temp5(ap.GetArgSize(5));
  std::vector<long long> temp6(ap.GetArgSize(6));
  unsigned long temp7;
  bool temp8 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(9) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor") &&
      ap.GetValue(temp2) &&
      ap.GetArray(temp3.data(), temp3.size()) &&
      ap.GetArray(temp4.data(), temp4.size()) &&
      ap.GetArray(temp5.data(), temp5.size()) &&
      ap.GetArray(temp6.data(), temp6.size()) &&
      ap.GetValue(temp7) &&
      ap.GetValue(temp8))
  {
    if (ap.IsBound())
    {
      op->GlyphRender(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }
    else
    {
      op->vtkOpenGLGlyph3DHelper::GlyphRender(temp0, temp1, temp2, temp3, temp4, temp5, temp6, temp7, temp8);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp3.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp3.data(), temp3.size()));
      ap.SetContents(3, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp4.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp4.data(), temp4.size()));
      ap.SetContents(4, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp5.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp5.data(), temp5.size()));
      ap.SetContents(5, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      PyObject *vec = (temp6.empty() ?
        PyTuple_New(0) :
        vtkPythonArgs::BuildTuple(temp6.data(), temp6.size()));
      ap.SetContents(6, vec);
      Py_DECREF(vec);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DHelper_SetLODColoring(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODColoring");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DHelper *op = static_cast<vtkOpenGLGlyph3DHelper *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetLODColoring(temp0);
    }
    else
    {
      op->vtkOpenGLGlyph3DHelper::SetLODColoring(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DHelper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DHelper *op = static_cast<vtkOpenGLGlyph3DHelper *>(vp);

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
      op->vtkOpenGLGlyph3DHelper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLGlyph3DHelper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLGlyph3DHelper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLGlyph3DHelper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLGlyph3DHelper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLGlyph3DHelper\nC++: static vtkOpenGLGlyph3DHelper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLGlyph3DHelper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLGlyph3DHelper\nC++: vtkOpenGLGlyph3DHelper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLGlyph3DHelper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLGlyph3DHelper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GlyphRender", PyvtkOpenGLGlyph3DHelper_GlyphRender, METH_VARARGS,
   "GlyphRender(self, ren:vtkRenderer, actor:vtkActor, numPts:int,\n    colors:[int, ...], matrices:[float, ...],\n    normalMatrices:[float, ...], pickIds:[int, ...],\n    pointMTime:int, culling:bool) -> None\nC++: void GlyphRender(vtkRenderer *ren, vtkActor *actor,\n    vtkIdType numPts, std::vector<unsigned char> &colors,\n    std::vector<float> &matrices,\n    std::vector<float> &normalMatrices,\n    std::vector<vtkIdType> &pickIds, vtkMTimeType pointMTime,\n    bool culling)\n\nFast path for rendering glyphs comprised of only one type of\nprimitive Must set this->CurrentInput explicitly before calling.\n"},
  {"SetLODColoring", PyvtkOpenGLGlyph3DHelper_SetLODColoring, METH_VARARGS,
   "SetLODColoring(self, val:bool) -> None\nC++: void SetLODColoring(bool val)\n\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLGlyph3DHelper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLGlyph3DHelper_Doc =
  "vtkOpenGLGlyph3DHelper - PolyDataMapper using OpenGL to render.\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "PolyDataMapper that uses a OpenGL to do the actual rendering.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLGlyph3DHelper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLGlyph3DHelper", // tp_name
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
  PyvtkOpenGLGlyph3DHelper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLGlyph3DHelper_StaticNew()
{
  return vtkOpenGLGlyph3DHelper::New();
}

PyObject *PyvtkOpenGLGlyph3DHelper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLGlyph3DHelper_Type, PyvtkOpenGLGlyph3DHelper_Methods,
    "vtkOpenGLGlyph3DHelper",
 &PyvtkOpenGLGlyph3DHelper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkOpenGLPolyDataMapper_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLGlyph3DHelper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLGlyph3DHelper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLGlyph3DHelper", o) != 0)
  {
    Py_DECREF(o);
  }

}

