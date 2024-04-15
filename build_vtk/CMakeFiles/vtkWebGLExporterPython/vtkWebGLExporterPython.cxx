// python wrapper for vtkWebGLExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkWebGLExporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkWebGLExporter(PyObject *dict); }
extern "C" { PyObject *PyvtkWebGLExporter_ClassNew(); }


static PyObject *
PyvtkWebGLExporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkWebGLExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkWebGLExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkWebGLExporter *tempr = vtkWebGLExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkWebGLExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkWebGLExporter::NewInstance());

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
PyvtkWebGLExporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkWebGLExporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkWebGLExporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_parseScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "parseScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  vtkRendererCollection *temp0 = nullptr;
  const char *temp1 = nullptr;
  int temp2;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkRendererCollection") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->parseScene(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLExporter::parseScene(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_exportStaticScene(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "exportStaticScene");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  vtkRendererCollection *temp0 = nullptr;
  int temp1;
  int temp2;
  std::string temp3;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetVTKObject(temp0, "vtkRendererCollection") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2) &&
      ap.GetValue(temp3))
  {
    if (ap.IsBound())
    {
      op->exportStaticScene(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkWebGLExporter::exportStaticScene(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GenerateMetadata(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GenerateMetadata");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GenerateMetadata() :
      op->vtkWebGLExporter::GenerateMetadata());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetId() :
      op->vtkWebGLExporter::GetId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetWebGLObject(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetWebGLObject");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkWebGLObject *tempr = (ap.IsBound() ?
      op->GetWebGLObject(temp0) :
      op->vtkWebGLExporter::GetWebGLObject(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_GetNumberOfObjects(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfObjects");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfObjects() :
      op->vtkWebGLExporter::GetNumberOfObjects());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_hasChanged(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "hasChanged");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->hasChanged() :
      op->vtkWebGLExporter::hasChanged());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SetCenterOfRotation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetCenterOfRotation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  float temp0;
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
      op->SetCenterOfRotation(temp0, temp1, temp2);
    }
    else
    {
      op->vtkWebGLExporter::SetCenterOfRotation(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxAllowedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  int temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetMaxAllowedSize(temp0, temp1);
    }
    else
    {
      op->vtkWebGLExporter::SetMaxAllowedSize(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMaxAllowedSize");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkWebGLExporter *op = static_cast<vtkWebGLExporter *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetMaxAllowedSize(temp0);
    }
    else
    {
      op->vtkWebGLExporter::SetMaxAllowedSize(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkWebGLExporter_SetMaxAllowedSize(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkWebGLExporter_SetMaxAllowedSize_s1(self, args);
    case 1:
      return PyvtkWebGLExporter_SetMaxAllowedSize_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "SetMaxAllowedSize");
  return nullptr;
}


static PyObject *
PyvtkWebGLExporter_ComputeMD5(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "ComputeMD5");

  size_t size0 = ap.GetArgSize(0);
  vtkPythonArgs::Array<unsigned char> store0(size0);
  unsigned char *temp0 = store0.Data();
  int temp1;
  std::string temp2;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(3) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    vtkWebGLExporter::ComputeMD5(temp0, temp1, temp2);

    if (!ap.ErrorOccurred())
    {
      ap.SetArgValue(2, temp2);
    }
    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkWebGLExporter_Methods[] = {
  {"IsTypeOf", PyvtkWebGLExporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkWebGLExporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkWebGLExporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkWebGLExporter\nC++: static vtkWebGLExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkWebGLExporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkWebGLExporter\nC++: vtkWebGLExporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkWebGLExporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkWebGLExporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"parseScene", PyvtkWebGLExporter_parseScene, METH_VARARGS,
   "parseScene(self, renderers:vtkRendererCollection, viewId:str,\n    parseType:int) -> None\nC++: void parseScene(vtkRendererCollection *renderers,\n    const char *viewId, int parseType)\n\nGet all the needed information from the vtkRenderer\n"},
  {"exportStaticScene", PyvtkWebGLExporter_exportStaticScene, METH_VARARGS,
   "exportStaticScene(self, renderers:vtkRendererCollection,\n    width:int, height:int, path:str) -> None\nC++: void exportStaticScene(vtkRendererCollection *renderers,\n    int width, int height, std::string path)\n\n"},
  {"GenerateMetadata", PyvtkWebGLExporter_GenerateMetadata, METH_VARARGS,
   "GenerateMetadata(self) -> str\nC++: const char *GenerateMetadata()\n\n"},
  {"GetId", PyvtkWebGLExporter_GetId, METH_VARARGS,
   "GetId(self) -> str\nC++: const char *GetId()\n\n"},
  {"GetWebGLObject", PyvtkWebGLExporter_GetWebGLObject, METH_VARARGS,
   "GetWebGLObject(self, index:int) -> vtkWebGLObject\nC++: vtkWebGLObject *GetWebGLObject(int index)\n\n"},
  {"GetNumberOfObjects", PyvtkWebGLExporter_GetNumberOfObjects, METH_VARARGS,
   "GetNumberOfObjects(self) -> int\nC++: int GetNumberOfObjects()\n\n"},
  {"hasChanged", PyvtkWebGLExporter_hasChanged, METH_VARARGS,
   "hasChanged(self) -> bool\nC++: bool hasChanged()\n\n"},
  {"SetCenterOfRotation", PyvtkWebGLExporter_SetCenterOfRotation, METH_VARARGS,
   "SetCenterOfRotation(self, a1:float, a2:float, a3:float) -> None\nC++: void SetCenterOfRotation(float a1, float a2, float a3)\n\n"},
  {"SetMaxAllowedSize", PyvtkWebGLExporter_SetMaxAllowedSize, METH_VARARGS,
   "SetMaxAllowedSize(self, mesh:int, lines:int) -> None\nC++: void SetMaxAllowedSize(int mesh, int lines)\nSetMaxAllowedSize(self, size:int) -> None\nC++: void SetMaxAllowedSize(int size)\n\n"},
  {"ComputeMD5", PyvtkWebGLExporter_ComputeMD5, METH_VARARGS,
   "ComputeMD5(content:(int, ...), size:int, hash:str) -> None\nC++: static void ComputeMD5(const unsigned char *content,\n    int size, std::string &hash)\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkWebGLExporter_Doc =
  "vtkWebGLExporter - vtkWebGLExporter export the data of the scene to\nbe used in the WebGL.\n\n"
  "Superclass: vtkObject\n\n"
;

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkWebGLExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkWebGLExporter.vtkWebGLExporter", // tp_name
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
  PyvtkWebGLExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkWebGLExporter_StaticNew()
{
  return vtkWebGLExporter::New();
}

PyObject *PyvtkWebGLExporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkWebGLExporter_Type, PyvtkWebGLExporter_Methods,
    "vtkWebGLExporter",
 &PyvtkWebGLExporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkWebGLExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkWebGLExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkWebGLExporter", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 3; c++)
  {
    static const struct { const char *name; int value; }
      constants[3] = {
        { "VTK_ONLYCAMERA", VTK_ONLYCAMERA },
        { "VTK_ONLYWIDGET", VTK_ONLYWIDGET },
        { "VTK_PARSEALL", VTK_PARSEALL },
      };

    o = PyLong_FromLong(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(dict, constants[c].name, o);
      Py_DECREF(o);
    }
  }

}

