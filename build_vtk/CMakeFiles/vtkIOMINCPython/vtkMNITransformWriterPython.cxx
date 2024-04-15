// python wrapper for vtkMNITransformWriter
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkMNITransformWriter.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkMNITransformWriter(PyObject *dict); }
extern "C" { PyObject *PyvtkMNITransformWriter_ClassNew(); }


static PyObject *
PyvtkMNITransformWriter_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkMNITransformWriter::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkMNITransformWriter::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkMNITransformWriter *tempr = vtkMNITransformWriter::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMNITransformWriter *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkMNITransformWriter::NewInstance());

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
PyvtkMNITransformWriter_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkMNITransformWriter::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkMNITransformWriter::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_SetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

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
      op->vtkMNITransformWriter::SetFileName(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetFileName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetFileName() :
      op->vtkMNITransformWriter::GetFileName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetFileExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetFileExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetFileExtensions() :
      op->vtkMNITransformWriter::GetFileExtensions());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetDescriptiveName(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDescriptiveName");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const char *tempr = (ap.IsBound() ?
      op->GetDescriptiveName() :
      op->vtkMNITransformWriter::GetDescriptiveName());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_SetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->SetTransform(temp0);
    }
    else
    {
      op->vtkMNITransformWriter::SetTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkAbstractTransform *tempr = (ap.IsBound() ?
      op->GetTransform() :
      op->vtkMNITransformWriter::GetTransform());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_AddTransform(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddTransform");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  vtkAbstractTransform *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractTransform"))
  {
    if (ap.IsBound())
    {
      op->AddTransform(temp0);
    }
    else
    {
      op->vtkMNITransformWriter::AddTransform(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetNumberOfTransforms(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfTransforms() :
      op->vtkMNITransformWriter::GetNumberOfTransforms());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_SetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetComments(temp0);
    }
    else
    {
      op->vtkMNITransformWriter::SetComments(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_GetComments(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetComments");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    char *tempr = (ap.IsBound() ?
      op->GetComments() :
      op->vtkMNITransformWriter::GetComments());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkMNITransformWriter_Write(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Write");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkMNITransformWriter *op = static_cast<vtkMNITransformWriter *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Write();
    }
    else
    {
      op->vtkMNITransformWriter::Write();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkMNITransformWriter_Methods[] = {
  {"IsTypeOf", PyvtkMNITransformWriter_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkMNITransformWriter_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkMNITransformWriter_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkMNITransformWriter\nC++: static vtkMNITransformWriter *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkMNITransformWriter_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkMNITransformWriter\nC++: vtkMNITransformWriter *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkMNITransformWriter_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkMNITransformWriter_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SetFileName", PyvtkMNITransformWriter_SetFileName, METH_VARARGS,
   "SetFileName(self, _arg:str) -> None\nC++: virtual void SetFileName(const char *_arg)\n\nSet the file name.\n"},
  {"GetFileName", PyvtkMNITransformWriter_GetFileName, METH_VARARGS,
   "GetFileName(self) -> str\nC++: virtual char *GetFileName()\n\n"},
  {"GetFileExtensions", PyvtkMNITransformWriter_GetFileExtensions, METH_VARARGS,
   "GetFileExtensions(self) -> str\nC++: virtual const char *GetFileExtensions()\n\nGet the extension for this file format.\n"},
  {"GetDescriptiveName", PyvtkMNITransformWriter_GetDescriptiveName, METH_VARARGS,
   "GetDescriptiveName(self) -> str\nC++: virtual const char *GetDescriptiveName()\n\nGet the name of this file format.\n"},
  {"SetTransform", PyvtkMNITransformWriter_SetTransform, METH_VARARGS,
   "SetTransform(self, transform:vtkAbstractTransform) -> None\nC++: virtual void SetTransform(vtkAbstractTransform *transform)\n\nSet the transform.\n"},
  {"GetTransform", PyvtkMNITransformWriter_GetTransform, METH_VARARGS,
   "GetTransform(self) -> vtkAbstractTransform\nC++: virtual vtkAbstractTransform *GetTransform()\n\n"},
  {"AddTransform", PyvtkMNITransformWriter_AddTransform, METH_VARARGS,
   "AddTransform(self, transform:vtkAbstractTransform) -> None\nC++: virtual void AddTransform(vtkAbstractTransform *transform)\n\nAdd another transform to the file.  The next time that\nSetTransform is called, all added transforms will be removed.\n"},
  {"GetNumberOfTransforms", PyvtkMNITransformWriter_GetNumberOfTransforms, METH_VARARGS,
   "GetNumberOfTransforms(self) -> int\nC++: virtual int GetNumberOfTransforms()\n\nGet the number of transforms that will be written.\n"},
  {"SetComments", PyvtkMNITransformWriter_SetComments, METH_VARARGS,
   "SetComments(self, _arg:str) -> None\nC++: virtual void SetComments(const char *_arg)\n\nSet comments to be added to the file.\n"},
  {"GetComments", PyvtkMNITransformWriter_GetComments, METH_VARARGS,
   "GetComments(self) -> str\nC++: virtual char *GetComments()\n\n"},
  {"Write", PyvtkMNITransformWriter_Write, METH_VARARGS,
   "Write(self) -> None\nC++: virtual void Write()\n\nWrite the file.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkMNITransformWriter_Doc =
  "vtkMNITransformWriter - A writer for MNI transformation files.\n\n"
  "Superclass: vtkAlgorithm\n\n"
  "The MNI .xfm file format is used to store geometrical\n"
  "transformations.  Three kinds of transformations are supported by the\n"
  "file format: affine, thin-plate spline, and grid transformations.\n"
  "This file format was developed at the McConnell Brain Imaging Centre\n"
  "at the Montreal Neurological Institute and is used by their software.\n"
  "@sa\n"
  "vtkMINCImageWriter vtkMNITransformReader@par Thanks: Thanks to David\n"
  "Gobbi for writing this class and Atamai Inc. for contributing it to\n"
  "VTK.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkMNITransformWriter_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOMINC.vtkMNITransformWriter", // tp_name
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
  PyvtkMNITransformWriter_Doc, // tp_doc
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

static vtkObjectBase *PyvtkMNITransformWriter_StaticNew()
{
  return vtkMNITransformWriter::New();
}

PyObject *PyvtkMNITransformWriter_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkMNITransformWriter_Type, PyvtkMNITransformWriter_Methods,
    "vtkMNITransformWriter",
 &PyvtkMNITransformWriter_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkMNITransformWriter(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkMNITransformWriter_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkMNITransformWriter", o) != 0)
  {
    Py_DECREF(o);
  }

}

