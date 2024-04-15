// python wrapper for vtkSurfaceLICMapper
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkSurfaceLICMapper.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkSurfaceLICMapper(PyObject *dict); }
extern "C" { PyObject *PyvtkSurfaceLICMapper_ClassNew(); }


static PyObject *
PyvtkSurfaceLICMapper_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkSurfaceLICMapper::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICMapper *op = static_cast<vtkSurfaceLICMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkSurfaceLICMapper::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkSurfaceLICMapper *tempr = vtkSurfaceLICMapper::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICMapper *op = static_cast<vtkSurfaceLICMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceLICMapper *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkSurfaceLICMapper::NewInstance());

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
PyvtkSurfaceLICMapper_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkSurfaceLICMapper::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICMapper *op = static_cast<vtkSurfaceLICMapper *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkSurfaceLICMapper::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICMapper *op = static_cast<vtkSurfaceLICMapper *>(vp);

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
      op->vtkSurfaceLICMapper::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_RenderPiece(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "RenderPiece");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICMapper *op = static_cast<vtkSurfaceLICMapper *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkActor *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkActor"))
  {
    if (ap.IsBound())
    {
      op->RenderPiece(temp0, temp1);
    }
    else
    {
      op->vtkSurfaceLICMapper::RenderPiece(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICMapper *op = static_cast<vtkSurfaceLICMapper *>(vp);

  vtkAbstractMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkAbstractMapper"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkSurfaceLICMapper::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkSurfaceLICMapper_GetLICInterface(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLICInterface");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkSurfaceLICMapper *op = static_cast<vtkSurfaceLICMapper *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkSurfaceLICInterface *tempr = (ap.IsBound() ?
      op->GetLICInterface() :
      op->vtkSurfaceLICMapper::GetLICInterface());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyMethodDef PyvtkSurfaceLICMapper_Methods[] = {
  {"IsTypeOf", PyvtkSurfaceLICMapper_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkSurfaceLICMapper_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkSurfaceLICMapper_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkSurfaceLICMapper\nC++: static vtkSurfaceLICMapper *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkSurfaceLICMapper_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkSurfaceLICMapper\nC++: vtkSurfaceLICMapper *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkSurfaceLICMapper_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkSurfaceLICMapper_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"ReleaseGraphicsResources", PyvtkSurfaceLICMapper_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, win:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *win) override;\n\nRelease any graphics resources that are being consumed by this\nmapper. The parameter window could be used to determine which\ngraphic resources to release. In this case, releases the display\nlists.\n"},
  {"RenderPiece", PyvtkSurfaceLICMapper_RenderPiece, METH_VARARGS,
   "RenderPiece(self, ren:vtkRenderer, act:vtkActor) -> None\nC++: void RenderPiece(vtkRenderer *ren, vtkActor *act) override;\n\nImplemented by sub classes. Actual rendering is done here.\n"},
  {"ShallowCopy", PyvtkSurfaceLICMapper_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, __a:vtkAbstractMapper) -> None\nC++: void ShallowCopy(vtkAbstractMapper *) override;\n\nShallow copy of an actor.\n"},
  {"GetLICInterface", PyvtkSurfaceLICMapper_GetLICInterface, METH_VARARGS,
   "GetLICInterface(self) -> vtkSurfaceLICInterface\nC++: virtual vtkSurfaceLICInterface *GetLICInterface()\n\nGet the vtkSurfaceLICInterface used by this mapper\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkSurfaceLICMapper_Doc =
  "vtkSurfaceLICMapper - mapper that performs LIC on the surface of\n arbitrary geometry.\n\n"
  "Superclass: vtkOpenGLPolyDataMapper\n\n"
  "vtkSurfaceLICMapper performs LIC on the surface of arbitrary\n"
  " geometry. Point vectors are used as the vector field for generating\n"
  "the LIC.\n"
  " The implementation was originallu  based on \"Image Space Based\n"
  "Visualization\n"
  " on Unsteady Flow on Surfaces\" by Laramee, Jobard and Hauser appeared\n"
  "in\n"
  " proceedings of IEEE Visualization '03, pages 131-138.\n\n\n"
  " Internal pipeline:\n\n"
  "noise\n"
  "    |\n"
  "    [ PROJ (GAT) (COMP) LIC2D (SCAT) SHADE (CCE) DEP]\n"
  "    |                                               | vectors        \n"
  "                                surface LIC  PROj  - project vectors\n"
  "onto surface GAT   - gather data for compositing and guard pixel\n"
  "generation  (parallel only) COMP  - composite gathered data LIC2D -\n"
  "line intengral convolution, see vtkLineIntegralConvolution2D. SCAT  -\n"
  "scatter result (parallel only, not all compositors use it) SHADE -\n"
  "combine LIC and scalar colors CCE   - color contrast enhancement\n"
  "(optional) DEP   - depth test and copy to back buffer\n\n"
  "The result of each stage is cached in a texture so that during\n"
  "interaction a stage may be skipped if the user has not modified its\n"
  "parameters or input data.\n\n"
  "The parallel parts of algorithm are implemented in\n"
  "vtkPSurfaceLICMapper. Note that for MPI enabled builds this class\n"
  "will be automatically created by the object factory.\n\n"
  "@sa\n"
  "vtkLineIntegralConvolution2D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkSurfaceLICMapper_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLICOpenGL2.vtkSurfaceLICMapper", // tp_name
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
  PyvtkSurfaceLICMapper_Doc, // tp_doc
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

static vtkObjectBase *PyvtkSurfaceLICMapper_StaticNew()
{
  return vtkSurfaceLICMapper::New();
}

PyObject *PyvtkSurfaceLICMapper_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkSurfaceLICMapper_Type, PyvtkSurfaceLICMapper_Methods,
    "vtkSurfaceLICMapper",
 &PyvtkSurfaceLICMapper_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkOpenGLPolyDataMapper");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkSurfaceLICMapper(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkSurfaceLICMapper_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkSurfaceLICMapper", o) != 0)
  {
    Py_DECREF(o);
  }

}

