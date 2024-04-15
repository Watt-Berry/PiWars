// python wrapper for vtkContinuousScatterplot
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkContinuousScatterplot.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkContinuousScatterplot(PyObject *dict); }
extern "C" { PyObject *PyvtkContinuousScatterplot_ClassNew(); }


static PyObject *
PyvtkContinuousScatterplot_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkContinuousScatterplot::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousScatterplot *op = static_cast<vtkContinuousScatterplot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkContinuousScatterplot::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkContinuousScatterplot *tempr = vtkContinuousScatterplot::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousScatterplot *op = static_cast<vtkContinuousScatterplot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkContinuousScatterplot *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkContinuousScatterplot::NewInstance());

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
PyvtkContinuousScatterplot_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkContinuousScatterplot::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousScatterplot *op = static_cast<vtkContinuousScatterplot *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkContinuousScatterplot::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_GetEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousScatterplot *op = static_cast<vtkContinuousScatterplot *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    double tempr = (ap.IsBound() ?
      op->GetEpsilon() :
      op->vtkContinuousScatterplot::GetEpsilon());

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_SetEpsilon(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetEpsilon");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousScatterplot *op = static_cast<vtkContinuousScatterplot *>(vp);

  double temp0;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    if (ap.IsBound())
    {
      op->SetEpsilon(temp0);
    }
    else
    {
      op->vtkContinuousScatterplot::SetEpsilon(temp0);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_SetField1(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField1");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousScatterplot *op = static_cast<vtkContinuousScatterplot *>(vp);

  const char *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetField1(temp0, temp1);
    }
    else
    {
      op->vtkContinuousScatterplot::SetField1(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkContinuousScatterplot_SetField2(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "SetField2");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkContinuousScatterplot *op = static_cast<vtkContinuousScatterplot *>(vp);

  const char *temp0 = nullptr;
  long long temp1;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(2) &&
      ap.GetValue(temp0) &&
      ap.GetValue(temp1))
  {
    if (ap.IsBound())
    {
      op->SetField2(temp0, temp1);
    }
    else
    {
      op->vtkContinuousScatterplot::SetField2(temp0, temp1);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkContinuousScatterplot_Methods[] = {
  {"IsTypeOf", PyvtkContinuousScatterplot_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkContinuousScatterplot_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkContinuousScatterplot_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkContinuousScatterplot\nC++: static vtkContinuousScatterplot *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkContinuousScatterplot_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkContinuousScatterplot\nC++: vtkContinuousScatterplot *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkContinuousScatterplot_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkContinuousScatterplot_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetEpsilon", PyvtkContinuousScatterplot_GetEpsilon, METH_VARARGS,
   "GetEpsilon(self) -> float\nC++: virtual double GetEpsilon()\n\nGet the tolerance used when comparing floating point numbers for\nequality.\n"},
  {"SetEpsilon", PyvtkContinuousScatterplot_SetEpsilon, METH_VARARGS,
   "SetEpsilon(self, _arg:float) -> None\nC++: virtual void SetEpsilon(double _arg)\n\nSet the tolerance used when comparing floating point numbers for\nequality.\n"},
  {"SetField1", PyvtkContinuousScatterplot_SetField1, METH_VARARGS,
   "SetField1(self, fieldName:str, ResX:int) -> None\nC++: void SetField1(const char *fieldName, vtkIdType ResX)\n\nSpecify the name of the first field to be used in subdividing the\ndataset. Specify the resolution along x axis of the output image.\n"},
  {"SetField2", PyvtkContinuousScatterplot_SetField2, METH_VARARGS,
   "SetField2(self, fieldName:str, ResY:int) -> None\nC++: void SetField2(const char *fieldName, vtkIdType ResY)\n\nSpecify the name of the second field to be used in subdividing\nthe dataset. Specify the resolution along y axis of the output\nimage.\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkContinuousScatterplot_Doc =
  "vtkContinuousScatterplot - Given a 3D domain space represented by an\nunstructured grid composed of tetrahedral cells with bivariate\nfields, this filter tessellates each cell in the domain to polyhedral\nfragments by intersecting the projection of\n\n"
  "Superclass: vtkImageAlgorithm\n\n"
  "the cell into 2-D range space against two sets of cutting planes, one\n"
  "set is defined along the first field, the second set is defined along\n"
  "the second field. The volume of these subdivided polyhedral fragments\n"
  "can be computed and aggregated over cells to depict the density\n"
  "distribution of the data projection in the bivariate range space.\n\n"
  "@section vtkContinuousScatterplot-introduction Introduction Given a\n"
  "bivariate field (f1,f2) defined on an unstructured grid which is\n"
  "composed of tetrahedral cells, we can initially subdivide each cell\n"
  "based on its projection in the range into a number of fragments along\n"
  "the first field f1, we refer to these polyhedral fragments as\n"
  "Frag(f1) = {frag(f1)_1, frag(f1)_2, ... , frag(f1)_n}, where\n"
  "frag(f1)_n refers to the nth fragment along the first field\n"
  "subdivision. Each fragment has a range value and the value difference\n"
  "between the neighbouring fragments is represented as fragment width\n"
  "fw_f1, which is uniformly distributed across the range. Based on the\n"
  "structure of Frag(f1), for each of its cell \"frag(f1)_n\", we can\n"
  "further subdivide this cell based on the second field f2 using\n"
  "fragment width fw_f2. The tessellation along the second field results\n"
  "in an even finer fragment collection which we refer to as Frag(f1,f2)\n"
  "= {frag(f1,f2)_1, frag(f1,f2)_2, ... , frag(f1,f2)_m}. We can observe\n"
  "that Frag(f1,f2) is a finer tessellation of the domain than Frag(f1)\n"
  "and will be used to compute the density distribution in the bivariate\n"
  "range space. The algorithm for fragment computation is similar to the\n"
  "first stage of the work in [0]. Each fragment \"s\" in Frag(f1,f2) has\n"
  "range values (f1(s), f2(s)) in the bivariate fields. These values can\n"
  "be further mapped to a 2-D bin with a resolution rexX * resY. The\n"
  "mapped bin index (binIndexX, binIndexY) of the fragment can be\n"
  "computed by linear interpolation on its range values :\n"
  "          binIndexX = (int) resX * (f1(s) - f1_min) / (f1_max -\n"
  "f1_min)\n"
  "          binIndexY = (int) resY * (f2(s) - f2_min) / (f2_max -\n"
  "f2_min),\n"
  "       where (f1_min, f1_max) is the range in first field. Once we\n"
  "know which bin a fragment coincides, the density value in each bin\n"
  "equals to the total geometric volume of the fragments in this bin.\n"
  "This volume distribution over the bins will be exported as a point\n"
  "data array in the output data structure. If we map this 2-D bin to a\n"
  "2-D image with each bin corresponding to a pixel and bin density to\n"
  "pixel transparency, then the image can be displayed as a continuous\n"
  "scatterplot.\n\n"
  "* @section vtkContinuousScatterplot-algorithm Algorithm\n"
  "* The algorithm of this filter can be described as:\n"
  "*   Require: R.1 The domain space is an unstructured grid data set\n"
  "  composed of\n"
  "*                tetrahedral cells;\n"
  "*            R.2 The range space contains two scalar fields, say f1\n"
  "  and f2.\n"
  "*\n"
  "*   The most important step is to compute the fragments. The\n"
  "  implementation processes\n"
  "*   the input grid one cell at a time, explicitly computing the\n"
  "  intersection of the cell\n"
  "*   with the cutting planes defined by the fragment boundaries in\n"
  "  each scalar field.\n"
  "*   In order to subdivide the cell, we need to define a list of\n"
  "  cutting planes in each\n"
  "*   field. The interval between neighbouring cutting planes is\n"
  "  related to the output 2-D\n"
  "*   bin resolution (resX, resY) and can be computed as :\n"
  "*                     fw_f1 = (f1_max - f1_min) / resX\n"
  "*                     fw_f2 = (f2_max - f2_min) / resY,\n"
  "*                 where (f1_max,f1_min) is the scalar range of first\n"
  "  field.\n"
  "*\n"
  "*      1. For each tetrahedron T in the input grid:\n"
  "*\n"
  "*        1.1 Subdivide the cell T based on the first field f1, we\n"
  "  will obtain a list\n"
  "*            of fragments: Frag(f1) = {frag(f1)_1, frag(f1)_2, ... ,\n"
  "  frag(f1)_n}. The\n"
  "*            steps for subdivision can be described as:\n"
  "*\n"
  "*            1.1.1 For each cutting plane s with respect to the first\n"
  "field f1,\n"
  "*                  its field value f1(s) = f1_min + n * fw_f1, where\n"
  "  n refers to the n-th\n"
  "*                  cutting plane:\n"
  "*\n"
  "*              1.1.2. Traverse each edge e starting from point a to b\n"
  "in the cell, we\n"
  "*                     will maintain three data classes, namely\n"
  "  fragmentFace,\n"
  "*                     residualFace and cutSet:\n"
  "*                     A. fragmentFace contains vertices in the\n"
  "  current fragment.\n"
  "*                     B. cutSet contains vertices whose range values\n"
  "  equal to f1(s).\n"
  "*                        This set contains the current cutting plane.\n"
  "*                     C. residualFace contains the rest of the\n"
  "  vertices in the cell.\n"
  "*                     In order to classify edge vertices into these\n"
  "  classes, the\n"
  "*                     following case table is used for each vertex\n"
  "  \"a\" :\n"
  "*                       case 0 :          f1(a)------ f1(s)\n"
  "  ------f1(b)\n"
  "*                              condition: f1(a) < f1(s) , f1(b) >\n"
  "  f1(s)\n"
  "*                              class:     p(s,e), a -> fragmentFace\n"
  "*                                         p(s,e) -> cutSet\n"
  "*                                         p(s,e) -> residualFace\n"
  "*\n"
  "*                       case 1 :          f1(b)------ f1(s)\n"
  "  ------f1(a)\n"
  "*                              condition: f1(a) > f1(s) , f1(b) <\n"
  "  f1(s)\n"
  "*                              class:     p(s,e) -> fragmentFace\n"
  "*                                         p(s,e) -> cutSet\n"
  "*                                         a -> residualFace\n"
  "*\n"
  "*                       case 2 :   \n"
  "  f1(s),f1(a)-------------------f1(b)\n"
  "*                              condition: f1(s) == f1(a), f1(s) <=\n"
  "  f1(b)\n"
  "*                              class:     a -> fragmentFace\n"
  "*                                         a -> residualFace\n"
  "*                                         a -> cutSet\n"
  "*\n"
  "*                       case 3 :         \n"
  "  f1(a)-------------------f1(b), f1(s)\n"
  "*                              condition: f1(s) > f1(a), f1(s) ==\n"
  "  f1(b)\n"
  "*                              class:     a -> fragmentFace\n"
  "*\n"
  "*                       case 4 :   \n"
  "  f1(s),f1(b)-------------------f1(a)\n"
  "*                              condition: f1(s) < f1(a), f1(s) ==\n"
  "  f1(b)\n"
  "*                              class:     a -> residualFace\n"
  "*                       Remark: 1. we use \"->\" to indicate \"belongs\n"
  "  to\" relation.\n"
  "*                               2. p(s,e) refers to the interpolated\n"
  "  point of range value\n"
  "*                                  f1(s) on the edge e.\n"
  "*\n"
  "*             1.1.3. After we have traversed every edge in a cell for\n"
  "the cutting plane\n"
  "*                    s, three classes for storing fragment, cutting\n"
  "  plane and residual\n"
  "*                    faces are updated. The faces of the current\n"
  "  fragment frag(f1)\n"
  "*                    are the union of all elements in fragmentFace\n"
  "  and cutSet.\n"
  "*\n"
  "*    1.2 Take the output of step 1.1, traverse each fragment in\n"
  "  Frag(f1), define a list\n"
  "*        of cutting planes with respect to field f2, further\n"
  "  subdivide the fragments in\n"
  "*        Frag(f1) following steps from 1.1.2 to 1.1.3. The output of\n"
  "  this step will be\n"
  "*        the fragment collection Frag(f1,f2). Each fragment in\n"
  "  Frag(f1,f2) can be further\n"
  "*        mapped to a 2-D bin based on its range values. The density\n"
  "  value in each bin\n"
  "*        equals to the total geometric volume of the fragments in\n"
  "  this bin. This volume\n"
  "*        distribution over the bins will be exported as a point data\n"
  "  array in the output\n"
  "*        data structure.\n"
  "*\n"
  "* @section vtkContinuousScatterplot-filter-design VTK Filter Design\n"
  "* The input and output ports of the filter:\n"
  "*      Input port : the input data set should be a\n"
  "  vtkUnstructuredGrid, with each of its\n"
  "*                   cell defined as a tetrahedron. At least two\n"
  "  scalar fields are\n"
  "*                   associated with the data. The user needs to\n"
  "  specify the name of the\n"
  "*                   two scalar arrays beforehand.\n"
  "*      Output port: the output data set is a 2D image stored as a\n"
  "  vtkImageData.\n"
  "*                   The resolution of the output image can be set by\n"
  "  the user.\n"
  "*                   The volume distribution of fragments in each\n"
  "  pixel or bin\n"
  "*                   is stored in an point data array named \"volume\"\n"
  "  in the output\n"
  "*                   vtkImageData.\n"
  "*\n"
  "* @section vtkContinuousScatterplot-how-to-use How To Use This Filter\n"
  "* Suppose we have a tetrahedral mesh stored in a vtkUnstructuredGrid,\n"
  "we call this\n"
  "* data set \"inputData\". This data set has two scalar arrays whose\n"
  "  names are \"f1\"\n"
  "* and \"f2\" respectively. We would like the resolution of output image\n"
  "set to (resX,resY).\n"
  "* Given these input, this filter can be called as follows in c++\n"
  "  sample code:\n"
  "*\n"
  "*     vtkSmartPointercsp =\n"
  "*                            vtkSmartPointer::New();\n"
  "*     csp->SetInputData(inputData);\n"
  "*     csp->SetField1(\"f1\",resX);\n"
  "*     csp->SetField2(\"f2\",resY);\n"
  "*     csp->Update();\n"
  "*\n"
  "* Then the output, \"csp->GetOutput()\", will be a vtkImageData\n"
  "  containing a scalar\n"
  "* array whose name is \"volume\". This array contains the volume\n"
  "  distribution of the\n"
  "* fragments.\n"
  "*\n"
  "* [0] H.Carr and D.Duke, Joint contour nets: Topological analysis of\n"
  "  multivariate data.\n"
  "*     IEEE Transactions on Visualization and Computer Graphics,\n"
  "  volume 20,\n"
  "*     issue 08, pages 1100-1113, 2014\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkContinuousScatterplot_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkInfovisCore.vtkContinuousScatterplot", // tp_name
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
  PyvtkContinuousScatterplot_Doc, // tp_doc
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

static vtkObjectBase *PyvtkContinuousScatterplot_StaticNew()
{
  return vtkContinuousScatterplot::New();
}

PyObject *PyvtkContinuousScatterplot_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkContinuousScatterplot_Type, PyvtkContinuousScatterplot_Methods,
    "vtkContinuousScatterplot",
 &PyvtkContinuousScatterplot_StaticNew);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkImageAlgorithm");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkContinuousScatterplot(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkContinuousScatterplot_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkContinuousScatterplot", o) != 0)
  {
    Py_DECREF(o);
  }

}

