// python wrapper for vtkDGCell
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkStringToken.h"
#include "vtkDGCell.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkDGCell(PyObject *dict); }
extern "C" { PyObject *PyvtkDGCell_ClassNew(); }

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGCell_Shape_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGCell.Shape", // tp_name
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
PyObject *PyvtkDGCell_Shape_FromEnum(T val)
{
  return PyVTKEnum_New(&PyvtkDGCell_Shape_Type, static_cast<int>(val));
}


static PyObject *
PyvtkDGCell_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkDGCell::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkDGCell::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkDGCell *tempr = vtkDGCell::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkDGCell *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkDGCell::NewInstance());

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
PyvtkDGCell_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkDGCell::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkDGCell::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetShapeCornerCount(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeCornerCount");

  typedef vtkDGCell::Shape temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGCell.Shape"))
  {
    int tempr = vtkDGCell::GetShapeCornerCount(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetShapeDimension(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeDimension");

  typedef vtkDGCell::Shape temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGCell.Shape"))
  {
    int tempr = vtkDGCell::GetShapeDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetShapeName(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetShapeName");

  typedef vtkDGCell::Shape temp0_type;
  temp0_type temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetEnumValue(temp0, "vtkDGCell.Shape"))
  {
    vtkStringToken tempr = vtkDGCell::GetShapeName(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkStringToken");
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    typedef vtkDGCell::Shape tempr_type;
  tempr_type tempr = op->GetShape();

    if (!ap.ErrorOccurred())
    {
      result = PyvtkDGCell_Shape_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetDimension() :
      op->vtkDGCell::GetDimension());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfCorners(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfCorners");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    int tempr = (ap.IsBound() ?
      op->GetNumberOfCorners() :
      op->vtkDGCell::GetNumberOfCorners());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfSideTypes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSideTypes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    int tempr = op->GetNumberOfSideTypes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetNumberOfSidesOfDimension(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfSidesOfDimension");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = op->GetNumberOfSidesOfDimension(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideShape(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideShape");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    typedef vtkDGCell::Shape tempr_type;
  tempr_type tempr = op->GetSideShape(temp0);

    if (!ap.ErrorOccurred())
    {
      result = PyvtkDGCell_Shape_FromEnum(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideConnectivity_s1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  int temp0;
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const std::vector<long long> *tempr = &op->GetSideConnectivity(temp0);

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
PyvtkDGCell_GetSideConnectivity_s2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = op->GetSideConnectivity();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}

static PyObject *
PyvtkDGCell_GetSideConnectivity(PyObject *self, PyObject *args)
{
  int nargs = vtkPythonArgs::GetArgCount(self, args);

  switch(nargs)
  {
    case 1:
      return PyvtkDGCell_GetSideConnectivity_s1(self, args);
    case 0:
      return PyvtkDGCell_GetSideConnectivity_s2(self, args);
  }

  vtkPythonArgs::ArgCountError(nargs, "GetSideConnectivity");
  return nullptr;
}


static PyObject *
PyvtkDGCell_GetReferencePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetReferencePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkTypeFloat32Array *tempr = op->GetReferencePoints();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_GetSideOffsetsAndShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetSideOffsetsAndShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(0))
  {
    vtkTypeInt32Array *tempr = op->GetSideOffsetsAndShapes();

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_FillReferencePoints(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillReferencePoints");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkTypeFloat32Array *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTypeFloat32Array"))
  {
    if (ap.IsBound())
    {
      op->FillReferencePoints(temp0);
    }
    else
    {
      op->vtkDGCell::FillReferencePoints(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_FillSideConnectivity(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillSideConnectivity");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkTypeInt32Array *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTypeInt32Array"))
  {
    if (ap.IsBound())
    {
      op->FillSideConnectivity(temp0);
    }
    else
    {
      op->vtkDGCell::FillSideConnectivity(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkDGCell_FillSideOffsetsAndShapes(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "FillSideOffsetsAndShapes");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkDGCell *op = static_cast<vtkDGCell *>(vp);

  vtkTypeInt32Array *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkTypeInt32Array"))
  {
    if (ap.IsBound())
    {
      op->FillSideOffsetsAndShapes(temp0);
    }
    else
    {
      op->vtkDGCell::FillSideOffsetsAndShapes(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkDGCell_Methods[] = {
  {"IsTypeOf", PyvtkDGCell_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkDGCell_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkDGCell_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkDGCell\nC++: static vtkDGCell *SafeDownCast(vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkDGCell_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkDGCell\nC++: vtkDGCell *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkDGCell_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkDGCell_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetShapeCornerCount", PyvtkDGCell_GetShapeCornerCount, METH_VARARGS,
   "GetShapeCornerCount(shape:Shape) -> int\nC++: static int GetShapeCornerCount(Shape shape)\n\n"},
  {"GetShapeDimension", PyvtkDGCell_GetShapeDimension, METH_VARARGS,
   "GetShapeDimension(shape:Shape) -> int\nC++: static int GetShapeDimension(Shape shape)\n\n"},
  {"GetShapeName", PyvtkDGCell_GetShapeName, METH_VARARGS,
   "GetShapeName(shape:Shape) -> vtkStringToken\nC++: static vtkStringToken GetShapeName(Shape shape)\n\n"},
  {"GetShape", PyvtkDGCell_GetShape, METH_VARARGS,
   "GetShape(self) -> Shape\nC++: virtual Shape GetShape()\n\nReturn the topological shape of this cell type.\n"},
  {"GetDimension", PyvtkDGCell_GetDimension, METH_VARARGS,
   "GetDimension(self) -> int\nC++: virtual int GetDimension()\n\nReturn the parametric dimension of this cell type (0, 1, 2, or\n3).\n"},
  {"GetNumberOfCorners", PyvtkDGCell_GetNumberOfCorners, METH_VARARGS,
   "GetNumberOfCorners(self) -> int\nC++: virtual int GetNumberOfCorners()\n\nReturn the number of corner points for this cell type.\n"},
  {"GetNumberOfSideTypes", PyvtkDGCell_GetNumberOfSideTypes, METH_VARARGS,
   "GetNumberOfSideTypes(self) -> int\nC++: virtual int GetNumberOfSideTypes()\n\nReturn the number of different side shapes of this cell type.\n\nExample: a wedge has 4 side shapes: Quadrilateral, Triangle,\nEdge, and Vertex.\n"},
  {"GetNumberOfSidesOfDimension", PyvtkDGCell_GetNumberOfSidesOfDimension, METH_VARARGS,
   "GetNumberOfSidesOfDimension(self, dimension:int) -> int\nC++: virtual int GetNumberOfSidesOfDimension(int dimension)\n\nReturn the number of boundaries this type of cell has of a given\ndimension.\n\nDG cells can be thought of as CW-complex cells; they are tuples\nof corner points which represent an open point set plus its\nclosure decomposed into a union of open sets of lower dimension.\nFor example, a hexahedron is an 8-tuple of corner points\nrepresenting an underlying space shaped as an open, rectangular\nprism plus six 4-tuples representing its quadrilateral faces,\nplus twelve 2-tuples representing its edges, plus 8 1-tuples\nrepresenting its corners. Thus, a hexahedron has 6 + 12 + 8 = 26\nsides (plus its interior).\n"},
  {"GetSideShape", PyvtkDGCell_GetSideShape, METH_VARARGS,
   "GetSideShape(self, side:int) -> Shape\nC++: virtual Shape GetSideShape(int side)\n\nFor a given side, return its cell shape.\n\nThe sides of a vtkDGCell are always ordered from highest\ndimension to lowest. For example, a hexahedron's quadrilateral\nsides are numbered 0\342\200\2235, its line sides are numbered 6\342\200\22317, and\nits corner point sides are numbered 18\342\200\22325. Sometimes, the\ninterior of the element is considered a side labeled -1.\n"},
  {"GetSideConnectivity", PyvtkDGCell_GetSideConnectivity, METH_VARARGS,
   "GetSideConnectivity(self, side:int) -> (int, ...)\nC++: virtual const std::vector<vtkIdType> &GetSideConnectivity(\n    int side)\nGetSideConnectivity(self) -> vtkTypeInt32Array\nC++: virtual vtkTypeInt32Array *GetSideConnectivity()\n\nReturn the connectivity of the given side.\n\nThe side connectivity is a vector holding the indexes of\ncorner-points of the side into the connectivity vector of this\ncell.\n\nPassing a side of -1 should return the connectivity of the cell's\ninterior (a vector of the counting numbers from 0 to\nthis->GetNumberOfCorners()). This feature is used when rendering\ncells of dimension 2 or lower.\n"},
  {"GetReferencePoints", PyvtkDGCell_GetReferencePoints, METH_VARARGS,
   "GetReferencePoints(self) -> vtkTypeFloat32Array\nC++: virtual vtkTypeFloat32Array *GetReferencePoints()\n\nReturn a singleton array initialized with the reference-cell's\ncorner point coordinates.\n\nWhen implementing a subclass, call FillReferencePoints() in your\noverride. This should always return the same vtkTypeFloat32Array\neach time so that the array is only uploaded to the GPU once.\n"},
  {"GetSideOffsetsAndShapes", PyvtkDGCell_GetSideOffsetsAndShapes, METH_VARARGS,
   "GetSideOffsetsAndShapes(self) -> vtkTypeInt32Array\nC++: virtual vtkTypeInt32Array *GetSideOffsetsAndShapes()\n\nReturn a singleton array initialized with 2-tuples of (offset,\nshape) values.\n\nWhen implementing a subclass, call FillSideOffsetsAndShapes() in\nyour override. This should always return the same\nvtkTypeInt32Array each time so that the array is only uploaded to\nthe GPU once.\n"},
  {"FillReferencePoints", PyvtkDGCell_FillReferencePoints, METH_VARARGS,
   "FillReferencePoints(self, arr:vtkTypeFloat32Array) -> None\nC++: void FillReferencePoints(vtkTypeFloat32Array *arr)\n\nFill the passed array with the parametric coordinates of all the\nelement's corners.\n"},
  {"FillSideConnectivity", PyvtkDGCell_FillSideConnectivity, METH_VARARGS,
   "FillSideConnectivity(self, arr:vtkTypeInt32Array) -> None\nC++: void FillSideConnectivity(vtkTypeInt32Array *arr)\n\nFill the passed array with the connectivity (point IDs) of all\nthe element's sides.\n"},
  {"FillSideOffsetsAndShapes", PyvtkDGCell_FillSideOffsetsAndShapes, METH_VARARGS,
   "FillSideOffsetsAndShapes(self, arr:vtkTypeInt32Array) -> None\nC++: void FillSideOffsetsAndShapes(vtkTypeInt32Array *arr)\n\nFill the passed array with tuples of (1) offsets into the\nside-connectivity and (2) shapes for each type of side. Note that\nthe final tuple contains the total size of the offset array and a\nshape corresponding to the element itself.\n\nEach element's vertex side-connectivity (the penultimate offset)\ncan also be used as the connectivity for the element's\nconnectivity.\n\nSimple example: a vtkDGTri has 3 tuples: + (0, Shape::Edge), +\n(3, Shape::Vertex), + (6, Shape::Triangle).\n\nComplex example: a vtkDGWedge has 5 tuples: + (0,\nShape::Quadrilateral), + (3, Shape::Triangle), + (5,\nShape::Edge), + (14, Shape::Vertex), + (20, Shape::Wedge).\n\nNote that the wedge has multiple 2-d sides (both quadilaterals\nand triangles).\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkDGCell_Doc =
  "vtkDGCell - Base class for a discontinuous Galerkin cells of all\nshapes.\n\n"
  "Superclass: vtkCellMetadata\n\n"
  "This class exists to offer each shape's parameterization via a\n"
  "uniform API.\n\n"
  "All DG cells have shapes that can be described by corner points in a\n"
  "reference (parametric) coordinate system. Sides (boundaries) of the\n"
  "element of any dimension can be fetched as offsets into the list of\n"
  "corners. You can also obtain a list of the coordinates in parametric\n"
  "space of all the corner points.\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkDGCell_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkFiltersCellGrid.vtkDGCell", // tp_name
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
  PyvtkDGCell_Doc, // tp_doc
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

PyObject *PyvtkDGCell_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkDGCell_Type, PyvtkDGCell_Methods,
    "vtkDGCell",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkCellMetadata");

  PyObject *d = pytype->tp_dict;
  PyObject *o;

  PyType_Ready(&PyvtkDGCell_Shape_Type);
  PyVTKEnum_Add(&PyvtkDGCell_Shape_Type, "vtkDGCell.Shape");

  o = (PyObject *)&PyvtkDGCell_Shape_Type;
  if (PyDict_SetItemString(d, "Shape", o) != 0)
  {
    Py_DECREF(o);
  }

  for (int c = 0; c < 8; c++)
  {
    typedef vtkDGCell::Shape cxx_enum_type;

    static const struct { const char *name; cxx_enum_type value; }
      constants[8] = {
        { "Vertex", vtkDGCell::Vertex },
        { "Edge", vtkDGCell::Edge },
        { "Triangle", vtkDGCell::Triangle },
        { "Quadrilateral", vtkDGCell::Quadrilateral },
        { "Tetrahedron", vtkDGCell::Tetrahedron },
        { "Hexahedron", vtkDGCell::Hexahedron },
        { "Wedge", vtkDGCell::Wedge },
        { "Pyramid", vtkDGCell::Pyramid },
      };

    o = PyvtkDGCell_Shape_FromEnum(constants[c].value);
    if (o)
    {
      PyDict_SetItemString(d, constants[c].name, o);
      Py_DECREF(o);
    }
  }

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkDGCell(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkDGCell_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkDGCell", o) != 0)
  {
    Py_DECREF(o);
  }

}

