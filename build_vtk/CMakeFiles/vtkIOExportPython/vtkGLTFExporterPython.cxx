// python wrapper for vtkGLTFExporter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkGLTFExporter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGLTFExporter(PyObject *dict); }
extern "C" { PyObject *PyvtkGLTFExporter_ClassNew(); }

#ifndef DECLARED_PyvtkExporter_ClassNew
extern "C" { PyObject *PyvtkExporter_ClassNew(); }
#define DECLARED_PyvtkExporter_ClassNew
#endif

static PyObject *
PyvtkGLTFExporter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGLTFExporter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLTFExporter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGLTFExporter *tempr = vtkGLTFExporter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGLTFExporter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLTFExporter::NewInstance());

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
PyvtkGLTFExporter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGLTFExporter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGLTFExporter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    if (ap.IsBound())
    {
      op->SetFileName(temp0);
    }
    else
    {
      op->vtkGLTFExporter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkGLTFExporter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_GetInlineData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetInlineData() :
      op->vtkGLTFExporter::GetInlineData());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SetInlineData(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetInlineData");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetInlineData(temp0);
    }
    else
    {
      op->vtkGLTFExporter::SetInlineData(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_InlineDataOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InlineDataOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InlineDataOn();
    }
    else
    {
      op->vtkGLTFExporter::InlineDataOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_InlineDataOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InlineDataOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->InlineDataOff();
    }
    else
    {
      op->vtkGLTFExporter::InlineDataOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_GetSaveNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveNormal() :
      op->vtkGLTFExporter::GetSaveNormal());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SetSaveNormal(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveNormal");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveNormal(temp0);
    }
    else
    {
      op->vtkGLTFExporter::SetSaveNormal(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SaveNormalOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveNormalOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveNormalOn();
    }
    else
    {
      op->vtkGLTFExporter::SaveNormalOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SaveNormalOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveNormalOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveNormalOff();
    }
    else
    {
      op->vtkGLTFExporter::SaveNormalOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_GetSaveBatchId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSaveBatchId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetSaveBatchId() :
      op->vtkGLTFExporter::GetSaveBatchId());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SetSaveBatchId(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetSaveBatchId");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetSaveBatchId(temp0);
    }
    else
    {
      op->vtkGLTFExporter::SetSaveBatchId(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SaveBatchIdOn(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveBatchIdOn");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveBatchIdOn();
    }
    else
    {
      op->vtkGLTFExporter::SaveBatchIdOn();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_SaveBatchIdOff(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SaveBatchIdOff");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->SaveBatchIdOff();
    }
    else
    {
      op->vtkGLTFExporter::SaveBatchIdOff();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFExporter_WriteToString(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WriteToString");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFExporter *op = static_cast<vtkGLTFExporter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    std::string tempr = (ap.IsBound() ?
      op->WriteToString() :
      op->vtkGLTFExporter::WriteToString());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkGLTFExporter_Methods[] = {
  {"IsTypeOf", PyvtkGLTFExporter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGLTFExporter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGLTFExporter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGLTFExporter\nC++: static vtkGLTFExporter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGLTFExporter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGLTFExporter\nC++: vtkGLTFExporter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGLTFExporter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGLTFExporter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkGLTFExporter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSpecify the name of the GLTF file to write.\n"},
  {"GetFileName", PyvtkGLTFExporter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetInlineData", PyvtkGLTFExporter_GetInlineData, METH_VARARGS,
   "GetInlineData(self) -> bool\nC++: virtual bool GetInlineData()\n\nShould the binary data be included in the json file as a base64\nstring.\n"},
  {"SetInlineData", PyvtkGLTFExporter_SetInlineData, METH_VARARGS,
   "SetInlineData(self, _arg:bool) -> None\nC++: virtual void SetInlineData(bool _arg)\n\n"},
  {"InlineDataOn", PyvtkGLTFExporter_InlineDataOn, METH_VARARGS,
   "InlineDataOn(self) -> None\nC++: virtual void InlineDataOn()\n\n"},
  {"InlineDataOff", PyvtkGLTFExporter_InlineDataOff, METH_VARARGS,
   "InlineDataOff(self) -> None\nC++: virtual void InlineDataOff()\n\n"},
  {"GetSaveNormal", PyvtkGLTFExporter_GetSaveNormal, METH_VARARGS,
   "GetSaveNormal(self) -> bool\nC++: virtual bool GetSaveNormal()\n\nIt looks for a point array called NORMAL in the data and it saves\nit in the GLTF file if found. NORMAL is the vertex normal. Cesium\nneeds this to render buildings correctly if there is no texture.\n"},
  {"SetSaveNormal", PyvtkGLTFExporter_SetSaveNormal, METH_VARARGS,
   "SetSaveNormal(self, _arg:bool) -> None\nC++: virtual void SetSaveNormal(bool _arg)\n\n"},
  {"SaveNormalOn", PyvtkGLTFExporter_SaveNormalOn, METH_VARARGS,
   "SaveNormalOn(self) -> None\nC++: virtual void SaveNormalOn()\n\n"},
  {"SaveNormalOff", PyvtkGLTFExporter_SaveNormalOff, METH_VARARGS,
   "SaveNormalOff(self) -> None\nC++: virtual void SaveNormalOff()\n\n"},
  {"GetSaveBatchId", PyvtkGLTFExporter_GetSaveBatchId, METH_VARARGS,
   "GetSaveBatchId(self) -> bool\nC++: virtual bool GetSaveBatchId()\n\nIt looks for point arrays called _BATCHID in the data and it\nsaves it in the GLTF file if found. _BATCHID is an index used in\n3D Tiles b3dm format. This format stores a binary gltf with a\nmesh that has several objects (buildings). Objects are indexed\nfrom 0 to number of objects - 1, all points of an objects have\nthe same index. These index values are stored in _BATCHID\n"},
  {"SetSaveBatchId", PyvtkGLTFExporter_SetSaveBatchId, METH_VARARGS,
   "SetSaveBatchId(self, _arg:bool) -> None\nC++: virtual void SetSaveBatchId(bool _arg)\n\n"},
  {"SaveBatchIdOn", PyvtkGLTFExporter_SaveBatchIdOn, METH_VARARGS,
   "SaveBatchIdOn(self) -> None\nC++: virtual void SaveBatchIdOn()\n\n"},
  {"SaveBatchIdOff", PyvtkGLTFExporter_SaveBatchIdOff, METH_VARARGS,
   "SaveBatchIdOff(self) -> None\nC++: virtual void SaveBatchIdOff()\n\n"},
  {"WriteToString", PyvtkGLTFExporter_WriteToString, METH_VARARGS,
   "WriteToString(self) -> str\nC++: std::string WriteToString()\n\nWrite the result to a string instead of a file\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGLTFExporter_Doc =
  "vtkGLTFExporter - export a scene into GLTF 2.0 format.\n\n"
  "Superclass: vtkExporter\n\n"
  "vtkGLTFExporter is a concrete subclass of vtkExporter that writes\n"
  "GLTF 2.0 files. It currently only supports a very small subset of\n"
  "what VTK can do including polygonal meshes with optional vertex\n"
  "colors. Over time the class can be expanded to support more and more\n"
  "of what VTK renders.\n\n"
  "It should be noted that gltf is a format for rendering data. As such\n"
  "it stores what the VTK scene renders as, not the underlying data. For\n"
  "example it currently does not support quads or higher sided polygons\n"
  "although VTK does. As such taking an exported gltf file and then\n"
  "selecting wireframe in a viewer will give all triangles where VTK's\n"
  "rendering would correctly draw the original polygons. etc.\n\n"
  "@sa\n"
  "vtkExporter\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFExporter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOExport.vtkGLTFExporter", // tp_name
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
  PyvtkGLTFExporter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGLTFExporter_StaticNew()
{
  return vtkGLTFExporter::New();
}

PyObject *PyvtkGLTFExporter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGLTFExporter_Type, PyvtkGLTFExporter_Methods,
    "vtkGLTFExporter",
 &PyvtkGLTFExporter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = (PyTypeObject *)PyvtkExporter_ClassNew();

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLTFExporter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLTFExporter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGLTFExporter", o) != 0)
  {
    Py_DECREF(o);
  }

}

