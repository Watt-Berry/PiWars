// python wrapper for vtkOpenGLGlyph3DMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLGlyph3DMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLGlyph3DMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLGlyph3DMapper_ClassNew(); }


static PyObject *
PyvtkOpenGLGlyph3DMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLGlyph3DMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLGlyph3DMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLGlyph3DMapper *tempr = vtkOpenGLGlyph3DMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLGlyph3DMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLGlyph3DMapper::NewInstance());

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
PyvtkOpenGLGlyph3DMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLGlyph3DMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLGlyph3DMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLGlyph3DMapper::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

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
      op->vtkOpenGLGlyph3DMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_GetMaxNumberOfLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMaxNumberOfLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetMaxNumberOfLOD() :
      op->vtkOpenGLGlyph3DMapper::GetMaxNumberOfLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_SetNumberOfLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfLOD(temp0);
    }
    else
    {
      op->vtkOpenGLGlyph3DMapper::SetNumberOfLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLGlyph3DMapper_SetLODDistanceAndTargetReduction(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLODDistanceAndTargetReduction");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLGlyph3DMapper *op = static_cast<vtkOpenGLGlyph3DMapper *>(vp);

  long long temp0;
  float temp1;
  float temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->SetLODDistanceAndTargetReduction(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLGlyph3DMapper::SetLODDistanceAndTargetReduction(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLGlyph3DMapper_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLGlyph3DMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLGlyph3DMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLGlyph3DMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLGlyph3DMapper\nC++: static vtkOpenGLGlyph3DMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLGlyph3DMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLGlyph3DMapper\nC++: vtkOpenGLGlyph3DMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLGlyph3DMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLGlyph3DMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkOpenGLGlyph3DMapper_Render, METH_VARARGS,
   "Render(self, ren:vtkRenderer, a:vtkActor) -> None\nC++: void Render(vtkRenderer *ren, vtkActor *a) override;\n\nMethod initiates the mapping process. Generally sent by the actor\nas each frame is rendered.\n"},
  {"ReleaseGraphicsResources", PyvtkOpenGLGlyph3DMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, window:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *window) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"GetMaxNumberOfLOD", PyvtkOpenGLGlyph3DMapper_GetMaxNumberOfLOD, METH_VARARGS,
   "GetMaxNumberOfLOD(self) -> int\nC++: vtkIdType GetMaxNumberOfLOD() override;\n\nGet the maximum number of LOD. OpenGL context must be bound. The\nmaximum number of LOD depends on GPU capabilities.\n"},
  {"SetNumberOfLOD", PyvtkOpenGLGlyph3DMapper_SetNumberOfLOD, METH_VARARGS,
   "SetNumberOfLOD(self, nb:int) -> None\nC++: void SetNumberOfLOD(vtkIdType nb) override;\n\nSet the number of LOD.\n"},
  {"SetLODDistanceAndTargetReduction", PyvtkOpenGLGlyph3DMapper_SetLODDistanceAndTargetReduction, METH_VARARGS,
   "SetLODDistanceAndTargetReduction(self, index:int, distance:float,\n    targetReduction:float) -> None\nC++: void SetLODDistanceAndTargetReduction(vtkIdType index,\n    float distance, float targetReduction) override;\n\nConfigure LODs. Culling must be enabled. distance have to be a\npositive value, it is the distance to the camera scaled by the\ninstanced geometry bounding box. targetReduction have to be\nbetween 0 and 1, 0 disable decimation, 1 draw a point.\n\n@sa vtkDecimatePro::SetTargetReduction\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLGlyph3DMapper_Doc =
  "vtkOpenGLGlyph3DMapper - vtkOpenGLGlyph3D on the GPU.\n\n"
  "Superclass: vtkGlyph3DMapper\n\n"
  "Do the same job than vtkGlyph3D but on the GPU. For this reason, it\n"
  "is a mapper not a vtkPolyDataAlgorithm. Also, some methods of\n"
  "vtkOpenGLGlyph3D don't make sense in vtkOpenGLGlyph3DMapper:\n"
  "GeneratePointIds, old-style SetSource, PointIdsName, IsPointVisible.\n\n"
  "@sa\n"
  "vtkOpenGLGlyph3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLGlyph3DMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLGlyph3DMapper", // tp_name
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
  PyvtkOpenGLGlyph3DMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLGlyph3DMapper_StaticNew()
{
  return vtkOpenGLGlyph3DMapper::New();
}

PyObject *PyvtkOpenGLGlyph3DMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLGlyph3DMapper_Type, PyvtkOpenGLGlyph3DMapper_Methods,
    "vtkOpenGLGlyph3DMapper",
 &PyvtkOpenGLGlyph3DMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkGlyph3DMapper");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLGlyph3DMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLGlyph3DMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLGlyph3DMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

