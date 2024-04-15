// python wrapper for vtkOpenGLInstanceCulling
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkOpenGLInstanceCulling.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkOpenGLInstanceCulling(PyObject *dict); }
extern "C" { PyObject *PyvtkOpenGLInstanceCulling_ClassNew(); }


static PyObject *
PyvtkOpenGLInstanceCulling_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkOpenGLInstanceCulling::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkOpenGLInstanceCulling::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkOpenGLInstanceCulling *tempr = vtkOpenGLInstanceCulling::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLInstanceCulling *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkOpenGLInstanceCulling::NewInstance());

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
PyvtkOpenGLInstanceCulling_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkOpenGLInstanceCulling::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkOpenGLInstanceCulling::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_InitLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "InitLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  vtkPolyData *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyData"))
  {
    if (ap.IsBound())
    {
      op->InitLOD(temp0);
    }
    else
    {
      op->vtkOpenGLInstanceCulling::InitLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_AddLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  float temp0;
  float temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->AddLOD(temp0, temp1);
    }
    else
    {
      op->vtkOpenGLInstanceCulling::AddLOD(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_BuildCullingShaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "BuildCullingShaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  vtkOpenGLShaderCache *temp0 = nullptr;
  long long temp1;
  bool temp2 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(3) &&
      ap.GetVTKObject(temp0, "vtkOpenGLShaderCache") &&
      ap.GetValue(temp1) &&
      ap.GetValue(temp2))
  {
    if (ap.IsBound())
    {
      op->BuildCullingShaders(temp0, temp1, temp2);
    }
    else
    {
      op->vtkOpenGLInstanceCulling::BuildCullingShaders(temp0, temp1, temp2);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_GetHelper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetHelper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkOpenGLHelper *tempr = (ap.IsBound() ?
      &op->GetHelper() :
      &op->vtkOpenGLInstanceCulling::GetHelper());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(tempr, "vtkOpenGLHelper");
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_GetNumberOfLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfLOD() :
      op->vtkOpenGLInstanceCulling::GetNumberOfLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_GetLODBuffer(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODBuffer");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  long long temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkOpenGLBufferObject *tempr = (ap.IsBound() ?
      op->GetLODBuffer(temp0) :
      op->vtkOpenGLInstanceCulling::GetLODBuffer(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_RunCullingShaders(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RunCullingShaders");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  long long temp0;
  vtkOpenGLBufferObject *temp1 = nullptr;
  vtkOpenGLBufferObject *temp2 = nullptr;
  vtkOpenGLBufferObject *temp3 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(4) &&
      ap.GetValue(temp0) &&
      ap.GetVTKObject(temp1, "vtkOpenGLBufferObject") &&
      ap.GetVTKObject(temp2, "vtkOpenGLBufferObject") &&
      ap.GetVTKObject(temp3, "vtkOpenGLBufferObject"))
  {
    if (ap.IsBound())
    {
      op->RunCullingShaders(temp0, temp1, temp2, temp3);
    }
    else
    {
      op->vtkOpenGLInstanceCulling::RunCullingShaders(temp0, temp1, temp2, temp3);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_SetColorLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetColorLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  bool temp0 = false;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetColorLOD(temp0);
    }
    else
    {
      op->vtkOpenGLInstanceCulling::SetColorLOD(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkOpenGLInstanceCulling_GetColorLOD(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetColorLOD");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkOpenGLInstanceCulling *op = static_cast<vtkOpenGLInstanceCulling *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    bool tempr = (ap.IsBound() ?
      op->GetColorLOD() :
      op->vtkOpenGLInstanceCulling::GetColorLOD());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkOpenGLInstanceCulling_Methods[] = {
  {"IsTypeOf", PyvtkOpenGLInstanceCulling_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkOpenGLInstanceCulling_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkOpenGLInstanceCulling_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkOpenGLInstanceCulling\nC++: static vtkOpenGLInstanceCulling *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkOpenGLInstanceCulling_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkOpenGLInstanceCulling\nC++: vtkOpenGLInstanceCulling *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkOpenGLInstanceCulling_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkOpenGLInstanceCulling_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"InitLOD", PyvtkOpenGLInstanceCulling_InitLOD, METH_VARARGS,
   "InitLOD(self, pd:vtkPolyData) -> None\nC++: void InitLOD(vtkPolyData *pd)\n\nInitialize LOD with a polydata\n"},
  {"AddLOD", PyvtkOpenGLInstanceCulling_AddLOD, METH_VARARGS,
   "AddLOD(self, distance:float, targetReduction:float) -> None\nC++: void AddLOD(float distance, float targetReduction)\n\nAdd a level of detail. distance is the distance after which LOD\nis enabled targetReduction is the reduction factor applied on\npolydata (vtkDecimatePro is used)\n\n@sa vtkDecimatePro::SetTargetReduction\n"},
  {"BuildCullingShaders", PyvtkOpenGLInstanceCulling_BuildCullingShaders, METH_VARARGS,
   "BuildCullingShaders(self, cache:vtkOpenGLShaderCache,\n    numInstances:int, withNormals:bool) -> None\nC++: void BuildCullingShaders(vtkOpenGLShaderCache *cache,\n    vtkIdType numInstances, bool withNormals)\n\nBuild culling shader program (if not created yet) and binds it.\n"},
  {"GetHelper", PyvtkOpenGLInstanceCulling_GetHelper, METH_VARARGS,
   "GetHelper(self) -> vtkOpenGLHelper\nC++: vtkOpenGLHelper &GetHelper()\n\nGet helper structure.\n"},
  {"GetNumberOfLOD", PyvtkOpenGLInstanceCulling_GetNumberOfLOD, METH_VARARGS,
   "GetNumberOfLOD(self) -> int\nC++: vtkIdType GetNumberOfLOD()\n\nGet number of LOD currently declared.\n"},
  {"GetLODBuffer", PyvtkOpenGLInstanceCulling_GetLODBuffer, METH_VARARGS,
   "GetLODBuffer(self, index:int) -> vtkOpenGLBufferObject\nC++: vtkOpenGLBufferObject *GetLODBuffer(vtkIdType index)\n\nGet the transform feedback buffer generated by the culling\nprogram.\n"},
  {"RunCullingShaders", PyvtkOpenGLInstanceCulling_RunCullingShaders, METH_VARARGS,
   "RunCullingShaders(self, numInstances:int,\n    matrixBuffer:vtkOpenGLBufferObject,\n    colorBuffer:vtkOpenGLBufferObject,\n    normalBuffer:vtkOpenGLBufferObject) -> None\nC++: void RunCullingShaders(vtkIdType numInstances,\n    vtkOpenGLBufferObject *matrixBuffer,\n    vtkOpenGLBufferObject *colorBuffer,\n    vtkOpenGLBufferObject *normalBuffer)\n\nRun the culling program and generate LOD buffers.\n"},
  {"SetColorLOD", PyvtkOpenGLInstanceCulling_SetColorLOD, METH_VARARGS,
   "SetColorLOD(self, _arg:bool) -> None\nC++: virtual void SetColorLOD(bool _arg)\n\nOverload color with unique color per LOD.\n"},
  {"GetColorLOD", PyvtkOpenGLInstanceCulling_GetColorLOD, METH_VARARGS,
   "GetColorLOD(self) -> bool\nC++: virtual bool GetColorLOD()\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkOpenGLInstanceCulling_Doc =
  "vtkOpenGLInstanceCulling - Frustum culling and LOD management.\n\n"
  "Superclass: vtkObject\n\n"
  "This class is used to cull instances based on their transformation\n"
  "matrix. It was designed to improve performances when there is large\n"
  "number of instances in vtkOpenGLGlyph3DMapper.\n\n"
  "Each instance is tested on the GPU through vertex shader to know if\n"
  "it is inside of the frustum view. If it is, the distance to the\n"
  "camera is computed to select and send to the geometry shader the\n"
  "corresponding LOD index. The geometry shader register the instance to\n"
  "the corresponding vertex stream and therefore the corresponding\n"
  "transform feedback buffer in video memory.\n\n"
  "@warning   GL_ARB_gpu_shader5 extension is required.\n\n"
  "{.cpp}\n\n"
  "vtkNewculling; vtkIdType nbInstances = 1000000;\n\n"
  "// buffer of size 16*nbInstances containing transform matrices.\n"
  "vtkOpenGLBufferObject* bufferMatrix = ...;\n\n"
  "// buffer of size 4*nbInstances containing color buffer to pass\n"
  "through. vtkOpenGLBufferObject* bufferColor = ...;\n\n"
  "// Initialize LODs culling->InitLOD(polydata); // LOD0 : full\n"
  "geometry culling->AddLOD(2.0, 0.5); // LOD1 : after 2.0, 50%\n"
  "triangles culling->AddLOD(5.0, 0.99); // LOD2 : after 5.0, 1%\n"
  "triangles\n\n"
  "// Build shader and binds culling->BuildCullingShaders(ren, actor,\n"
  "nbInstances); culling->RunCullingShaders(nbInstances, bufferMatrix,\n"
  "bufferColor);\n\n"
  "// Get number of instances in LOD 0 int nbInstInLOD0 =\n"
  "culling->GetLOD(0).NumberOfInstances;\n\n"
  "// Get VBO and IBO of LOD 1 vtkOpenGLBufferObject* VBO1 =\n"
  "culling->GetLOD(1).PositionVBO; vtkOpenGLBufferObject* IBO1 =\n"
  "culling->GetLOD(1).IBO;\n\n"
  "// Get instances buffer of LOD 2 // buffer is interleaved [\n"
  "transformMatrix0 color0 transformMatrix1 color1 ... ]\n"
  "vtkOpenGLBufferObject* buffer2 = culling->GetLODBuffer(2);\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkOpenGLInstanceCulling_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingOpenGL2.vtkOpenGLInstanceCulling", // tp_name
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
  PyvtkOpenGLInstanceCulling_Doc, // tp_doc
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

static vtkObjectBase *PyvtkOpenGLInstanceCulling_StaticNew()
{
  return vtkOpenGLInstanceCulling::New();
}

PyObject *PyvtkOpenGLInstanceCulling_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkOpenGLInstanceCulling_Type, PyvtkOpenGLInstanceCulling_Methods,
    "vtkOpenGLInstanceCulling",
 &PyvtkOpenGLInstanceCulling_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkOpenGLInstanceCulling(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkOpenGLInstanceCulling_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkOpenGLInstanceCulling", o) != 0)
  {
    Py_DECREF(o);
  }

}

