// python wrapper for vtkLODActor
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkLODActor.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkLODActor(PyObject *dict); }
extern "C" { PyObject *PyvtkLODActor_ClassNew(); }


static PyObject *
PyvtkLODActor_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkLODActor::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkLODActor::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkLODActor *tempr = vtkLODActor::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkLODActor *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkLODActor::NewInstance());

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
PyvtkLODActor_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkLODActor::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkLODActor::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_Render(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Render");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkRenderer *temp0 = nullptr;
  vtkMapper *temp1 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkRenderer") &&
      ap.GetVTKObject(temp1, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->Render(temp0, temp1);
    }
    else
    {
      op->vtkLODActor::Render(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_ReleaseGraphicsResources(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ReleaseGraphicsResources");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

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
      op->vtkLODActor::ReleaseGraphicsResources(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_AddLODMapper(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "AddLODMapper");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkMapper *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkMapper"))
  {
    if (ap.IsBound())
    {
      op->AddLODMapper(temp0);
    }
    else
    {
      op->vtkLODActor::AddLODMapper(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_SetLowResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetLowResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkPolyDataAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetLowResFilter(temp0);
    }
    else
    {
      op->vtkLODActor::SetLowResFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_SetMediumResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetMediumResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkPolyDataAlgorithm *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkPolyDataAlgorithm"))
  {
    if (ap.IsBound())
    {
      op->SetMediumResFilter(temp0);
    }
    else
    {
      op->vtkLODActor::SetMediumResFilter(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_GetLowResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLowResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetLowResFilter() :
      op->vtkLODActor::GetLowResFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_GetMediumResFilter(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetMediumResFilter");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkPolyDataAlgorithm *tempr = (ap.IsBound() ?
      op->GetMediumResFilter() :
      op->vtkLODActor::GetMediumResFilter());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_GetNumberOfCloudPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCloudPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCloudPoints() :
      op->vtkLODActor::GetNumberOfCloudPoints());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_SetNumberOfCloudPoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetNumberOfCloudPoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetNumberOfCloudPoints(temp0);
    }
    else
    {
      op->vtkLODActor::SetNumberOfCloudPoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_GetLODMappers(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetLODMappers");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkMapperCollection *tempr = (ap.IsBound() ?
      op->GetLODMappers() :
      op->vtkLODActor::GetLODMappers());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_Modified(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Modified");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    if (ap.IsBound())
    {
      op->Modified();
    }
    else
    {
      op->vtkLODActor::Modified();
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkLODActor_ShallowCopy(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "ShallowCopy");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkLODActor *op = static_cast<vtkLODActor *>(vp);

  vtkProp *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkProp"))
  {
    if (ap.IsBound())
    {
      op->ShallowCopy(temp0);
    }
    else
    {
      op->vtkLODActor::ShallowCopy(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkLODActor_Methods[] = {
  {"IsTypeOf", PyvtkLODActor_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkLODActor_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkLODActor_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkLODActor\nC++: static vtkLODActor *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkLODActor_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkLODActor\nC++: vtkLODActor *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkLODActor_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkLODActor_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Render", PyvtkLODActor_Render, METH_VARARGS,
   "Render(self, __a:vtkRenderer, __b:vtkMapper) -> None\nC++: void Render(vtkRenderer *, vtkMapper *) override;\n\nThis causes the actor to be rendered. It, in turn, will render\nthe actor's property and then mapper.\n"},
  {"ReleaseGraphicsResources", PyvtkLODActor_ReleaseGraphicsResources, METH_VARARGS,
   "ReleaseGraphicsResources(self, __a:vtkWindow) -> None\nC++: void ReleaseGraphicsResources(vtkWindow *) override;\n\nRelease any graphics resources that are being consumed by this\nactor. The parameter window could be used to determine which\ngraphic resources to release.\n"},
  {"AddLODMapper", PyvtkLODActor_AddLODMapper, METH_VARARGS,
   "AddLODMapper(self, mapper:vtkMapper) -> None\nC++: void AddLODMapper(vtkMapper *mapper)\n\nAdd another level of detail. They do not have to be in any order\nof complexity.\n"},
  {"SetLowResFilter", PyvtkLODActor_SetLowResFilter, METH_VARARGS,
   "SetLowResFilter(self, __a:vtkPolyDataAlgorithm) -> None\nC++: virtual void SetLowResFilter(vtkPolyDataAlgorithm *)\n\nYou may plug in your own filters to decimate/subsample the input.\nThe default is to use a vtkOutlineFilter (low-res) and\nvtkMaskPoints (medium-res).\n"},
  {"SetMediumResFilter", PyvtkLODActor_SetMediumResFilter, METH_VARARGS,
   "SetMediumResFilter(self, __a:vtkPolyDataAlgorithm) -> None\nC++: virtual void SetMediumResFilter(vtkPolyDataAlgorithm *)\n\n"},
  {"GetLowResFilter", PyvtkLODActor_GetLowResFilter, METH_VARARGS,
   "GetLowResFilter(self) -> vtkPolyDataAlgorithm\nC++: virtual vtkPolyDataAlgorithm *GetLowResFilter()\n\n"},
  {"GetMediumResFilter", PyvtkLODActor_GetMediumResFilter, METH_VARARGS,
   "GetMediumResFilter(self) -> vtkPolyDataAlgorithm\nC++: virtual vtkPolyDataAlgorithm *GetMediumResFilter()\n\n"},
  {"GetNumberOfCloudPoints", PyvtkLODActor_GetNumberOfCloudPoints, METH_VARARGS,
   "GetNumberOfCloudPoints(self) -> int\nC++: virtual int GetNumberOfCloudPoints()\n\nSet/Get the number of random points for the point cloud.\n"},
  {"SetNumberOfCloudPoints", PyvtkLODActor_SetNumberOfCloudPoints, METH_VARARGS,
   "SetNumberOfCloudPoints(self, _arg:int) -> None\nC++: virtual void SetNumberOfCloudPoints(int _arg)\n\n"},
  {"GetLODMappers", PyvtkLODActor_GetLODMappers, METH_VARARGS,
   "GetLODMappers(self) -> vtkMapperCollection\nC++: virtual vtkMapperCollection *GetLODMappers()\n\nAll the mappers for different LODs are stored here. The order is\nnot important.\n"},
  {"Modified", PyvtkLODActor_Modified, METH_VARARGS,
   "Modified(self) -> None\nC++: void Modified() override;\n\nWhen this objects gets modified, this method also modifies the\nobject.\n"},
  {"ShallowCopy", PyvtkLODActor_ShallowCopy, METH_VARARGS,
   "ShallowCopy(self, prop:vtkProp) -> None\nC++: void ShallowCopy(vtkProp *prop) override;\n\nShallow copy of an LOD actor. Overloads the virtual vtkProp\nmethod.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkLODActor_Doc =
  "vtkLODActor - an actor that supports multiple levels of detail\n\n"
  "Superclass: vtkActor\n\n"
  "vtkLODActor is an actor that stores multiple levels of detail (LOD)\n"
  "and can automatically switch between them. It selects which level of\n"
  "detail to use based on how much time it has been allocated to render.\n"
  "Currently a very simple method of TotalTime/NumberOfActors is used.\n"
  "(In the future this should be modified to dynamically allocate the\n"
  "rendering time between different actors based on their needs.)\n\n"
  "There are three levels of detail by default. The top level is just\n"
  "the normal data. The lowest level of detail is a simple bounding box\n"
  "outline of the actor. The middle level of detail is a point cloud of\n"
  "a fixed number of points that have been randomly sampled from the\n"
  "mapper's input data. Point attributes are copied over to the point\n"
  "cloud. These two lower levels of detail are accomplished by creating\n"
  "instances of a vtkOutlineFilter (low-res) and vtkMaskPoints\n"
  "(medium-res). Additional levels of detail can be add using the\n"
  "AddLODMapper() method.\n\n"
  "To control the frame rate, you typically set the\n"
  "vtkRenderWindowInteractor DesiredUpdateRate and StillUpdateRate. This\n"
  "then will cause vtkLODActor to adjust its LOD to fulfill the\n"
  "requested update rate.\n\n"
  "For greater control on levels of detail, see also vtkLODProp3D. That\n"
  "class allows arbitrary definition of each LOD.\n\n"
  "@warning\n"
  "If you provide your own mappers, you are responsible for setting its\n"
  "ivars correctly, such as ScalarRange, LookupTable, and so on.\n\n"
  "@warning\n"
  "On some systems the point cloud rendering (the default, medium level\n"
  "of detail) can result in points so small that they can hardly be\n"
  "seen. In this case, use the GetProperty()->SetPointSize() method to\n"
  "increase the rendered size of the points.\n\n"
  "@sa\n"
  "vtkActor vtkRenderer vtkLODProp3D\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkLODActor_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkRenderingLOD.vtkLODActor", // tp_name
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
  PyvtkLODActor_Doc, // tp_doc
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

static vtkObjectBase *PyvtkLODActor_StaticNew()
{
  return vtkLODActor::New();
}

PyObject *PyvtkLODActor_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkLODActor_Type, PyvtkLODActor_Methods,
    "vtkLODActor",
 &PyvtkLODActor_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkActor");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkLODActor(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkLODActor_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkLODActor", o) != 0)
  {
    Py_DECREF(o);
  }

}

