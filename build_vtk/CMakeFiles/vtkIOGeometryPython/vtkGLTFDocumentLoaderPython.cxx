// python wrapper for vtkGLTFDocumentLoader
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSmartPointer.h"
#include "vtkGLTFDocumentLoader.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkGLTFDocumentLoader(PyObject *dict); }
extern "C" { PyObject *PyvtkGLTFDocumentLoader_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFDocumentLoader_Target_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkGLTFDocumentLoader.Target", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkGLTFDocumentLoader_Target_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGLTFDocumentLoader_Target_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFDocumentLoader_AccessorType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkGLTFDocumentLoader.AccessorType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkGLTFDocumentLoader_AccessorType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGLTFDocumentLoader_AccessorType_Type, static_cast<int>(val));
}

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFDocumentLoader_ComponentType_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkGLTFDocumentLoader.ComponentType", // tp_name
  sizeof(PyLongObject), // tp_basicsize
  0, // tp_itemsize
  nullptr, // tp_dealloc
#if PY_VERSION_HEX >= 0x03080000
  0, // tp_vectorcall_offset
#else
  nullptr, // tp_print
#endif
  nullptr, // tp_getattr
  nullptr, // tp_setattr
  nullptr, // tp_compare
  nullptr, // tp_repr
  nullptr, // tp_as_number
  nullptr, // tp_as_sequence
  nullptr, // tp_as_mapping
  nullptr, // tp_hash
  nullptr, // tp_call
  nullptr, // tp_str
  nullptr, // tp_getattro
  nullptr, // tp_setattro
  nullptr, // tp_as_buffer
  Py_TPFLAGS_DEFAULT
#if PY_VERSION_HEX >= 0x030A0000
    | Py_TPFLAGS_DISALLOW_INSTANTIATION
#endif
  , // tp_flags
  nullptr, // tp_doc
  nullptr, // tp_traverse
  nullptr, // tp_clear
  nullptr, // tp_richcompare
  0, // tp_weaklistoffset
  nullptr, // tp_iter
  nullptr, // tp_iternext
  nullptr, // tp_methods
  nullptr, // tp_members
  nullptr, // tp_getset
  &PyLong_Type, // tp_base
  nullptr, // tp_dict
  nullptr, // tp_descr_get
  nullptr, // tp_descr_set
  0, // tp_dictoffset
  nullptr, // tp_init
  nullptr, // tp_alloc
  nullptr, // tp_new
  PyObject_Del, // tp_free
  nullptr, // tp_is_gc
  nullptr, // tp_bases
  nullptr, // tp_mro
  nullptr, // tp_cache
  nullptr, // tp_subclasses
  nullptr, // tp_weaklist
  VTK_WRAP_PYTHON_SUPPRESS_UNINITIALIZED
};

template<class T>
PyObject *PyvtkGLTFDocumentLoader_ComponentType_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkGLTFDocumentLoader_ComponentType_Type, static_cast<int>(val));
}


static PyObject *
PyvtkGLTFDocumentLoader_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkGLTFDocumentLoader::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkGLTFDocumentLoader::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkGLTFDocumentLoader *tempr = vtkGLTFDocumentLoader::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkGLTFDocumentLoader *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkGLTFDocumentLoader::NewInstance());

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
PyvtkGLTFDocumentLoader_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkGLTFDocumentLoader::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkGLTFDocumentLoader::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_ApplyAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ApplyAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  float temp0;
  int temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2, 3) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1) &&
      (ap.NoArgsLeft() || ap.GetValue(temp2)))
  {
    bool tempr = (ap.IsBound() ?
      op->ApplyAnimation(temp0, temp1, temp2) :
      op->vtkGLTFDocumentLoader::ApplyAnimation(temp0, temp1, temp2));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_ResetAnimation(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ResetAnimation");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->ResetAnimation(temp0);
    }
    else
    {
      op->vtkGLTFDocumentLoader::ResetAnimation(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_LoadModelMetaDataFromFile(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadModelMetaDataFromFile");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  std::string temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetFilePath(temp0))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadModelMetaDataFromFile(temp0) :
      op->vtkGLTFDocumentLoader::LoadModelMetaDataFromFile(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_LoadModelMetaDataFromStream(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "LoadModelMetaDataFromStream");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  vtkResourceStream *temp0 = nullptr;
  vtkURILoader *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1, 2) &&
      ap.GetVTKObject(temp0, "vtkResourceStream") &&
      (ap.NoArgsLeft() || ap.GetVTKObject(temp1, "vtkURILoader")))
  {
    bool tempr = (ap.IsBound() ?
      op->LoadModelMetaDataFromStream(temp0, temp1) :
      op->vtkGLTFDocumentLoader::LoadModelMetaDataFromStream(temp0, temp1));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_BuildModelVTKGeometry(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildModelVTKGeometry");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->BuildModelVTKGeometry() :
      op->vtkGLTFDocumentLoader::BuildModelVTKGeometry());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_GetNumberOfComponentsForType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfComponentsForType");

  vtkGLTFDocumentLoader::AccessorType temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkGLTFDocumentLoader.AccessorType"))
  {
    unsigned int tempr = vtkGLTFDocumentLoader::GetNumberOfComponentsForType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_GetSupportedExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSupportedExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetSupportedExtensions() :
      &op->vtkGLTFDocumentLoader::GetSupportedExtensions());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_GetUsedExtensions(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetUsedExtensions");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    const std::vector<std::string> *tempr = (ap.IsBound() ?
      &op->GetUsedExtensions() :
      &op->vtkGLTFDocumentLoader::GetUsedExtensions());

    if (!ap.ErrorOccurred())
    {
      if (tempr->empty())
      {
        result = PyTuple_New(0);
      }
      else
      {
        result = vtkPythonArgs::BuildTuple(tempr->data(), tempr->size());
      }
    }
  }

  return result;
}


static PyObject *
PyvtkGLTFDocumentLoader_BuildGlobalTransforms_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildGlobalTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  unsigned int temp0;
  vtkSmartPointer<vtkMatrix4x4> temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkMatrix4x4"))
  {
    if (ap.IsBound())
    {
      op->BuildGlobalTransforms(temp0, temp1);
    }
    else
    {
      op->vtkGLTFDocumentLoader::BuildGlobalTransforms(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGLTFDocumentLoader_BuildGlobalTransforms_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildGlobalTransforms");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkGLTFDocumentLoader *op = static_cast<vtkGLTFDocumentLoader *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->BuildGlobalTransforms();
    }
    else
    {
      op->vtkGLTFDocumentLoader::BuildGlobalTransforms();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyObject *
PyvtkGLTFDocumentLoader_BuildGlobalTransforms(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 2:
      return PyvtkGLTFDocumentLoader_BuildGlobalTransforms_s1(self, args);
    case 0:
      return PyvtkGLTFDocumentLoader_BuildGlobalTransforms_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "BuildGlobalTransforms");
  return nullptr;
}

static PyMethodDef PyvtkGLTFDocumentLoader_Methods[] = {
  {"IsTypeOf", PyvtkGLTFDocumentLoader_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkGLTFDocumentLoader_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkGLTFDocumentLoader_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkGLTFDocumentLoader\nC++: static vtkGLTFDocumentLoader *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkGLTFDocumentLoader_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkGLTFDocumentLoader\nC++: vtkGLTFDocumentLoader *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkGLTFDocumentLoader_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkGLTFDocumentLoader_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ApplyAnimation", PyvtkGLTFDocumentLoader_ApplyAnimation, METH_VARARGS,
   "ApplyAnimation(self, t:float, animationId:int,\n    forceStep:bool=False) -> bool\nC++: bool ApplyAnimation(float t, int animationId,\n    bool forceStep=false)\n\nApply the specified animation, at the specified time value t, to\nthe internal Model. Changes node transforms and morphing weights.\n"},
  {"ResetAnimation", PyvtkGLTFDocumentLoader_ResetAnimation, METH_VARARGS,
   "ResetAnimation(self, animationId:int) -> None\nC++: void ResetAnimation(int animationId)\n\nRestore the transforms that were modified by an animation to\ntheir initial state\n"},
  {"LoadModelMetaDataFromFile", PyvtkGLTFDocumentLoader_LoadModelMetaDataFromFile, METH_VARARGS,
   "LoadModelMetaDataFromFile(self, FileName:str) -> bool\nC++: bool LoadModelMetaDataFromFile(const std::string &FileName)\n\nReset internal Model struct, and serialize glTF metadata (all\n    json information) into it.\n\nTo load buffers, use LoadModelData. Input can either be a file\n(LoadModelMetaDataFromFile) or a stream + optional URI loader.\n\n@return `true` if internal model is correctly filled, `false`\n    otherwise.\n"},
  {"LoadModelMetaDataFromStream", PyvtkGLTFDocumentLoader_LoadModelMetaDataFromStream, METH_VARARGS,
   "LoadModelMetaDataFromStream(self, stream:vtkResourceStream,\n    loader:vtkURILoader=...) -> bool\nC++: bool LoadModelMetaDataFromStream(vtkResourceStream *stream,\n    vtkURILoader *loader=nullptr)\n\n"},
  {"BuildModelVTKGeometry", PyvtkGLTFDocumentLoader_BuildModelVTKGeometry, METH_VARARGS,
   "BuildModelVTKGeometry(self) -> bool\nC++: bool BuildModelVTKGeometry()\n\nConverts the internal Model's loaded data into more convenient\nvtk objects.\n"},
  {"GetNumberOfComponentsForType", PyvtkGLTFDocumentLoader_GetNumberOfComponentsForType, METH_VARARGS,
   "GetNumberOfComponentsForType(\n    type:vtkGLTFDocumentLoader.AccessorType) -> int\nC++: static unsigned int GetNumberOfComponentsForType(\n    vtkGLTFDocumentLoader::AccessorType type)\n\nReturns the number of components for a given accessor type.\n"},
  {"GetSupportedExtensions", PyvtkGLTFDocumentLoader_GetSupportedExtensions, METH_VARARGS,
   "GetSupportedExtensions(self) -> (str, ...)\nC++: const std::vector<std::string> &GetSupportedExtensions()\n\nGet the list of extensions that are supported by this loader\n"},
  {"GetUsedExtensions", PyvtkGLTFDocumentLoader_GetUsedExtensions, METH_VARARGS,
   "GetUsedExtensions(self) -> (str, ...)\nC++: const std::vector<std::string> &GetUsedExtensions()\n\nGet the list of extensions that are used by the current model\n"},
  {"BuildGlobalTransforms", PyvtkGLTFDocumentLoader_BuildGlobalTransforms, METH_VARARGS,
   "BuildGlobalTransforms(self, nodeIndex:int,\n    parentTransform:vtkMatrix4x4) -> None\nC++: void BuildGlobalTransforms(unsigned int nodeIndex,\n    vtkSmartPointer<vtkMatrix4x4> parentTransform)\nBuildGlobalTransforms(self) -> None\nC++: void BuildGlobalTransforms()\n\nConcatenate the current node's local transform to its parent's\nglobal transform, storing the resulting transform in the node's\nglobalTransform field. Then does the same for the current node's\nchildren. Recursive.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkGLTFDocumentLoader_Doc =
  "vtkGLTFDocumentLoader - Deserialize a GLTF model file.\n\n"
  "Superclass: vtkObject\n\n"
  "vtkGLTFDocument loader is an internal utility class which defines\n"
  "data structures and functions with the purpose of deserializing a\n"
  "glTF model from a glTF file, loading its data from binary buffers and\n"
  "creating vtk objects with the extracted geometry. It contains an\n"
  "internal Model structure into which all loading is performed.\n\n"
  "The GL Transmission Format (glTF) is an API-neutral runtime asset\n"
  "delivery format. A glTF asset is represented by:\n"
  "- A JSON-formatted file (.gltf) containing a full scene description:\n"
  "  node hierarchy, materials, cameras, as well as descriptor\n"
  "  information for meshes, animations, and other constructs\n"
  "- Binary files (.bin) containing geometry and animation data, and\n"
  "  other buffer-based data\n"
  "- Image files (.jpg, .png) for textures\n\n"
  "For the full specification, see:\n"
  "https://github.com/KhronosGroup/glTF/tree/master/specification/2.0\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkGLTFDocumentLoader_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkIOGeometry.vtkGLTFDocumentLoader", // tp_name
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
  PyvtkGLTFDocumentLoader_Doc, // tp_doc
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

static vtkObjectBase *PyvtkGLTFDocumentLoader_StaticNew()
{
  return vtkGLTFDocumentLoader::New();
}

PyObject *PyvtkGLTFDocumentLoader_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkGLTFDocumentLoader_Type, PyvtkGLTFDocumentLoader_Methods,
    "vtkGLTFDocumentLoader",
 &PyvtkGLTFDocumentLoader_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkGLTFDocumentLoader_Target_Type);
  // members of vtkGLTFDocumentLoader::Target
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkGLTFDocumentLoader_Target_Type.tp_dict = enumdict;

    typedef vtkGLTFDocumentLoader::Target cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[2] = {
      { "ARRAY_BUFFER", cxx_enum_type::ARRAY_BUFFER },
      { "ELEMENT_ARRAY_BUFFER", cxx_enum_type::ELEMENT_ARRAY_BUFFER },
    };

    for (int c = 0; c < 2; c++)
    {
      enumval = PyvtkGLTFDocumentLoader_Target_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkGLTFDocumentLoader_Target_Type, "vtkGLTFDocumentLoader.Target");

  o = (PyObject *)&PyvtkGLTFDocumentLoader_Target_Type;
  if (PyDict_SetItemString(d, "Target", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGLTFDocumentLoader_AccessorType_Type);
  // members of vtkGLTFDocumentLoader::AccessorType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkGLTFDocumentLoader_AccessorType_Type.tp_dict = enumdict;

    typedef vtkGLTFDocumentLoader::AccessorType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[8] = {
      { "SCALAR", cxx_enum_type::SCALAR },
      { "VEC2", cxx_enum_type::VEC2 },
      { "VEC3", cxx_enum_type::VEC3 },
      { "VEC4", cxx_enum_type::VEC4 },
      { "MAT2", cxx_enum_type::MAT2 },
      { "MAT3", cxx_enum_type::MAT3 },
      { "MAT4", cxx_enum_type::MAT4 },
      { "INVALID", cxx_enum_type::INVALID },
    };

    for (int c = 0; c < 8; c++)
    {
      enumval = PyvtkGLTFDocumentLoader_AccessorType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkGLTFDocumentLoader_AccessorType_Type, "vtkGLTFDocumentLoader.AccessorType");

  o = (PyObject *)&PyvtkGLTFDocumentLoader_AccessorType_Type;
  if (PyDict_SetItemString(d, "AccessorType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(&PyvtkGLTFDocumentLoader_ComponentType_Type);
  // members of vtkGLTFDocumentLoader::ComponentType
  {
    PyObject *enumval;
    PyObject *enumdict = PyDict_New();
    PyvtkGLTFDocumentLoader_ComponentType_Type.tp_dict = enumdict;

    typedef vtkGLTFDocumentLoader::ComponentType cxx_enum_type;
    static const struct {
      const char *name; cxx_enum_type value;
    } constants[6] = {
      { "BYTE", cxx_enum_type::BYTE },
      { "UNSIGNED_BYTE", cxx_enum_type::UNSIGNED_BYTE },
      { "SHORT", cxx_enum_type::SHORT },
      { "UNSIGNED_SHORT", cxx_enum_type::UNSIGNED_SHORT },
      { "UNSIGNED_INT", cxx_enum_type::UNSIGNED_INT },
      { "FLOAT", cxx_enum_type::FLOAT },
    };

    for (int c = 0; c < 6; c++)
    {
      enumval = PyvtkGLTFDocumentLoader_ComponentType_FromEnum(constants[c].value);
      if (enumval)
      {
        PyDict_SetItemString(enumdict, constants[c].name, enumval);
        Py_DECREF(enumval);
      }
    }
  }

  PyVTKEnum_Add(&PyvtkGLTFDocumentLoader_ComponentType_Type, "vtkGLTFDocumentLoader.ComponentType");

  o = (PyObject *)&PyvtkGLTFDocumentLoader_ComponentType_Type;
  if (PyDict_SetItemString(d, "ComponentType", o) != 0)
  {
    Py_DECREF(o);
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkGLTFDocumentLoader(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkGLTFDocumentLoader_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkGLTFDocumentLoader", o) != 0)
  {
    Py_DECREF(o);
  }

}

