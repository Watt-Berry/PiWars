// python wrapper for vtkHigherOrderInterpolation
//
#define VTK_WRAPPING_CXX
#define VTK_STREAMS_FWD_ONLY
#include "vtkPythonArgs.h"
#include "vtkPythonOverload.h"
#include <cstddef>
#include <sstream>
#include "vtkVariant.h"
#include "vtkIndent.h"
#include "vtkVector.h"
#include "vtkHigherOrderInterpolation.h"

#if defined(PYTHON_PACKAGE)
#define PYTHON_PACKAGE_SCOPE PYTHON_PACKAGE "."
#else
#define PYTHON_PACKAGE_SCOPE
#endif

extern "C" { VTK_ABI_EXPORT void PyVTKAddFile_vtkHigherOrderInterpolation(PyObject *dict); }
extern "C" { PyObject *PyvtkHigherOrderInterpolation_ClassNew(); }


static PyObject *
PyvtkHigherOrderInterpolation_IsTypeOf(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "IsTypeOf");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHigherOrderInterpolation::IsTypeOf(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_IsA(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "IsA");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderInterpolation *op = static_cast<vtkHigherOrderInterpolation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = (ap.IsBound() ?
      op->IsA(temp0) :
      op->vtkHigherOrderInterpolation::IsA(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_SafeDownCast(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "SafeDownCast");

  vtkObjectBase *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetVTKObject(temp0, "vtkObjectBase"))
  {
    vtkHigherOrderInterpolation *tempr = vtkHigherOrderInterpolation::SafeDownCast(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildVTKObject(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_NewInstance(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "NewInstance");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderInterpolation *op = static_cast<vtkHigherOrderInterpolation *>(vp);

  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(0))
  {
    vtkHigherOrderInterpolation *tempr = (ap.IsBound() ?
      op->NewInstance() :
      op->vtkHigherOrderInterpolation::NewInstance());

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
PyvtkHigherOrderInterpolation_GetNumberOfGenerationsFromBaseType(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetNumberOfGenerationsFromBaseType");

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = vtkHigherOrderInterpolation::GetNumberOfGenerationsFromBaseType(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetNumberOfGenerationsFromBase(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "GetNumberOfGenerationsFromBase");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderInterpolation *op = static_cast<vtkHigherOrderInterpolation *>(vp);

  const char *temp0 = nullptr;
  PyObject *result = nullptr;

  if (op && ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    long long tempr = (ap.IsBound() ?
      op->GetNumberOfGenerationsFromBase(temp0) :
      op->vtkHigherOrderInterpolation::GetNumberOfGenerationsFromBase(temp0));

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_Tensor3EvaluateDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "Tensor3EvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderInterpolation *op = static_cast<vtkHigherOrderInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  vtkPoints *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    op->Tensor3EvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_WedgeEvaluate(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeEvaluate");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderInterpolation *op = static_cast<vtkHigherOrderInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  long long temp1;
  size_t size2 = ap.GetArgSize(2);
  vtkPythonArgs::Array<double> store2(size2);
  double *temp2 = store2.Data();
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(2*size3);
  double *temp3 = store3.Data();
  double *save3 = (size3 == 0 ? nullptr : temp3 + size3);
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetValue(temp1) &&
      ap.GetArray(temp2, size2) &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp3, save3, size3);
    vtkPythonArgs::Save(temp5, save5, size5);

    op->WedgeEvaluate(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp3, save3, size3) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(3, temp3, size3);
    }

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_WedgeEvaluateDerivative(PyObject *self, PyObject *args)
{
  vtkPythonArgs ap(self, args, "WedgeEvaluateDerivative");
  vtkObjectBase *vp = ap.GetSelfPointer(self, args);
  vtkHigherOrderInterpolation *op = static_cast<vtkHigherOrderInterpolation *>(vp);

  const size_t size0 = 3;
  int temp0[3];
  size_t size1 = ap.GetArgSize(1);
  vtkPythonArgs::Array<double> store1(size1);
  double *temp1 = store1.Data();
  vtkPoints *temp2 = nullptr;
  size_t size3 = ap.GetArgSize(3);
  vtkPythonArgs::Array<double> store3(size3);
  double *temp3 = store3.Data();
  int temp4;
  size_t size5 = ap.GetArgSize(5);
  vtkPythonArgs::Array<double> store5(2*size5);
  double *temp5 = store5.Data();
  double *save5 = (size5 == 0 ? nullptr : temp5 + size5);
  PyObject *result = nullptr;

  if (op && !ap.IsPureVirtual() && ap.CheckArgCount(6) &&
      ap.GetArray(temp0, size0) &&
      ap.GetArray(temp1, size1) &&
      ap.GetVTKObject(temp2, "vtkPoints") &&
      ap.GetArray(temp3, size3) &&
      ap.GetValue(temp4) &&
      ap.GetArray(temp5, size5))
  {
    vtkPythonArgs::Save(temp5, save5, size5);

    op->WedgeEvaluateDerivative(temp0, temp1, temp2, temp3, temp4, temp5);

    if (vtkPythonArgs::HasChanged(temp5, save5, size5) &&
        !ap.ErrorOccurred())
    {
      ap.SetArray(5, temp5, size5);
    }

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetParametricHexCoordinates(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParametricHexCoordinates");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = vtkHigherOrderInterpolation::GetParametricHexCoordinates(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetPointIndicesBoundingHexEdge(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingHexEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkHigherOrderInterpolation::GetPointIndicesBoundingHexEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetVaryingParameterOfHexEdge(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParameterOfHexEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHigherOrderInterpolation::GetVaryingParameterOfHexEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetFixedParametersOfHexEdge(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParametersOfHexEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkHigherOrderInterpolation::GetFixedParametersOfHexEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetPointIndicesBoundingHexFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingHexFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkHigherOrderInterpolation::GetPointIndicesBoundingHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetEdgeIndicesBoundingHexFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeIndicesBoundingHexFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkHigherOrderInterpolation::GetEdgeIndicesBoundingHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetVaryingParametersOfHexFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParametersOfHexFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkHigherOrderInterpolation::GetVaryingParametersOfHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetFixedParameterOfHexFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParameterOfHexFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHigherOrderInterpolation::GetFixedParameterOfHexFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetParametricWedgeCoordinates(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetParametricWedgeCoordinates");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector3d tempr = vtkHigherOrderInterpolation::GetParametricWedgeCoordinates(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector3d");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetPointIndicesBoundingWedgeEdge(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingWedgeEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkHigherOrderInterpolation::GetPointIndicesBoundingWedgeEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetVaryingParameterOfWedgeEdge(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParameterOfWedgeEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHigherOrderInterpolation::GetVaryingParameterOfWedgeEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetFixedParametersOfWedgeEdge(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParametersOfWedgeEdge");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkHigherOrderInterpolation::GetFixedParametersOfWedgeEdge(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetPointIndicesBoundingWedgeFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetPointIndicesBoundingWedgeFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkHigherOrderInterpolation::GetPointIndicesBoundingWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetEdgeIndicesBoundingWedgeFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetEdgeIndicesBoundingWedgeFace");

  int temp0;
  size_t sizer = 4;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    const int *tempr = vtkHigherOrderInterpolation::GetEdgeIndicesBoundingWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = vtkPythonArgs::BuildTuple(tempr, sizer);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetVaryingParametersOfWedgeFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetVaryingParametersOfWedgeFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    vtkVector2i tempr = vtkHigherOrderInterpolation::GetVaryingParametersOfWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildSpecialObject(&tempr, "vtkVector2i");
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_GetFixedParameterOfWedgeFace(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "GetFixedParameterOfWedgeFace");

  int temp0;
  PyObject *result = nullptr;

  if (ap.CheckArgCount(1) &&
      ap.GetValue(temp0))
  {
    int tempr = vtkHigherOrderInterpolation::GetFixedParameterOfWedgeFace(temp0);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildValue(tempr);
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_AppendCurveCollocationPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendCurveCollocationPoints");

  vtkSmartPointer<vtkPoints> temp0;
  const size_t size1 = 1;
  int temp1[1];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    vtkHigherOrderInterpolation::AppendCurveCollocationPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_AppendQuadrilateralCollocationPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendQuadrilateralCollocationPoints");

  vtkSmartPointer<vtkPoints> temp0;
  const size_t size1 = 2;
  int temp1[2];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    vtkHigherOrderInterpolation::AppendQuadrilateralCollocationPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_AppendHexahedronCollocationPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendHexahedronCollocationPoints");

  vtkSmartPointer<vtkPoints> temp0;
  const size_t size1 = 3;
  int temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    vtkHigherOrderInterpolation::AppendHexahedronCollocationPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}


static PyObject *
PyvtkHigherOrderInterpolation_AppendWedgeCollocationPoints(PyObject * /*unused*/, PyObject *args)
{
  vtkPythonArgs ap(args, "AppendWedgeCollocationPoints");

  vtkSmartPointer<vtkPoints> temp0;
  const size_t size1 = 3;
  int temp1[3];
  PyObject *result = nullptr;

  if (ap.CheckArgCount(2) &&
      ap.GetVTKObject(temp0, "vtkPoints") &&
      ap.GetArray(temp1, size1))
  {
    vtkHigherOrderInterpolation::AppendWedgeCollocationPoints(temp0, temp1);

    if (!ap.ErrorOccurred())
    {
      result = ap.BuildNone();
    }
  }

  return result;
}

static PyMethodDef PyvtkHigherOrderInterpolation_Methods[] = {
  {"IsTypeOf", PyvtkHigherOrderInterpolation_IsTypeOf, METH_VARARGS,
   "IsTypeOf(type:str) -> int\nC++: static vtkTypeBool IsTypeOf(const char *type)\n\nReturn 1 if this class type is the same type of (or a subclass\nof) the named class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"IsA", PyvtkHigherOrderInterpolation_IsA, METH_VARARGS,
   "IsA(self, type:str) -> int\nC++: vtkTypeBool IsA(const char *type) override;\n\nReturn 1 if this class is the same type of (or a subclass of) the\nnamed class. Returns 0 otherwise. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"SafeDownCast", PyvtkHigherOrderInterpolation_SafeDownCast, METH_VARARGS,
   "SafeDownCast(o:vtkObjectBase) -> vtkHigherOrderInterpolation\nC++: static vtkHigherOrderInterpolation *SafeDownCast(\n    vtkObjectBase *o)\n\n"},
  {"NewInstance", PyvtkHigherOrderInterpolation_NewInstance, METH_VARARGS,
   "NewInstance(self) -> vtkHigherOrderInterpolation\nC++: vtkHigherOrderInterpolation *NewInstance()\n\n"},
  {"GetNumberOfGenerationsFromBaseType", PyvtkHigherOrderInterpolation_GetNumberOfGenerationsFromBaseType, METH_VARARGS,
   "GetNumberOfGenerationsFromBaseType(type:str) -> int\nC++: static vtkIdType GetNumberOfGenerationsFromBaseType(\n    const char *type)\n\nGiven a the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"GetNumberOfGenerationsFromBase", PyvtkHigherOrderInterpolation_GetNumberOfGenerationsFromBase, METH_VARARGS,
   "GetNumberOfGenerationsFromBase(self, type:str) -> int\nC++: vtkIdType GetNumberOfGenerationsFromBase(const char *type)\n    override;\n\nGiven the name of a base class of this class type, return the\ndistance of inheritance between this class type and the named\nclass (how many generations of inheritance are there between this\nclass and the named class). If the named class is not in this\nclass's inheritance tree, return a negative value. Valid\nresponses will always be nonnegative. This method works in\ncombination with vtkTypeMacro found in vtkSetGet.h.\n"},
  {"Tensor3EvaluateDerivative", PyvtkHigherOrderInterpolation_Tensor3EvaluateDerivative, METH_VARARGS,
   "Tensor3EvaluateDerivative(self, order:(int, int, int), pcoords:(\n    float, ...), points:vtkPoints, fieldVals:(float, ...),\n    fieldDim:int, fieldDerivs:[float, ...]) -> None\nC++: virtual void Tensor3EvaluateDerivative(const int order[3],\n    const double *pcoords, vtkPoints *points,\n    const double *fieldVals, int fieldDim, double *fieldDerivs)\n\n"},
  {"WedgeEvaluate", PyvtkHigherOrderInterpolation_WedgeEvaluate, METH_VARARGS,
   "WedgeEvaluate(self, order:(int, int, int), numberOfPoints:int,\n    pcoords:(float, ...), fieldVals:[float, ...], fieldDim:int,\n    fieldAtPCoords:[float, ...]) -> None\nC++: virtual void WedgeEvaluate(const int order[3],\n    vtkIdType numberOfPoints, const double *pcoords,\n    double *fieldVals, int fieldDim, double *fieldAtPCoords)\n\n"},
  {"WedgeEvaluateDerivative", PyvtkHigherOrderInterpolation_WedgeEvaluateDerivative, METH_VARARGS,
   "WedgeEvaluateDerivative(self, order:(int, int, int), pcoords:(\n    float, ...), points:vtkPoints, fieldVals:(float, ...),\n    fieldDim:int, fieldDerivs:[float, ...]) -> None\nC++: virtual void WedgeEvaluateDerivative(const int order[3],\n    const double *pcoords, vtkPoints *points,\n    const double *fieldVals, int fieldDim, double *fieldDerivs)\n\n"},
  {"GetParametricHexCoordinates", PyvtkHigherOrderInterpolation_GetParametricHexCoordinates, METH_VARARGS,
   "GetParametricHexCoordinates(vertexId:int) -> vtkVector3d\nC++: static vtkVector3d GetParametricHexCoordinates(int vertexId)\n\n"},
  {"GetPointIndicesBoundingHexEdge", PyvtkHigherOrderInterpolation_GetPointIndicesBoundingHexEdge, METH_VARARGS,
   "GetPointIndicesBoundingHexEdge(edgeId:int) -> vtkVector2i\nC++: static vtkVector2i GetPointIndicesBoundingHexEdge(int edgeId)\n\n"},
  {"GetVaryingParameterOfHexEdge", PyvtkHigherOrderInterpolation_GetVaryingParameterOfHexEdge, METH_VARARGS,
   "GetVaryingParameterOfHexEdge(edgeId:int) -> int\nC++: static int GetVaryingParameterOfHexEdge(int edgeId)\n\n"},
  {"GetFixedParametersOfHexEdge", PyvtkHigherOrderInterpolation_GetFixedParametersOfHexEdge, METH_VARARGS,
   "GetFixedParametersOfHexEdge(edgeId:int) -> vtkVector2i\nC++: static vtkVector2i GetFixedParametersOfHexEdge(int edgeId)\n\n"},
  {"GetPointIndicesBoundingHexFace", PyvtkHigherOrderInterpolation_GetPointIndicesBoundingHexFace, METH_VARARGS,
   "GetPointIndicesBoundingHexFace(faceId:int) -> (int, int, int, int)\nC++: static const int *GetPointIndicesBoundingHexFace(int faceId)\n\n"},
  {"GetEdgeIndicesBoundingHexFace", PyvtkHigherOrderInterpolation_GetEdgeIndicesBoundingHexFace, METH_VARARGS,
   "GetEdgeIndicesBoundingHexFace(faceId:int) -> (int, int, int, int)\nC++: static const int *GetEdgeIndicesBoundingHexFace(int faceId)\n\n"},
  {"GetVaryingParametersOfHexFace", PyvtkHigherOrderInterpolation_GetVaryingParametersOfHexFace, METH_VARARGS,
   "GetVaryingParametersOfHexFace(faceId:int) -> vtkVector2i\nC++: static vtkVector2i GetVaryingParametersOfHexFace(int faceId)\n\n"},
  {"GetFixedParameterOfHexFace", PyvtkHigherOrderInterpolation_GetFixedParameterOfHexFace, METH_VARARGS,
   "GetFixedParameterOfHexFace(faceId:int) -> int\nC++: static int GetFixedParameterOfHexFace(int faceId)\n\n"},
  {"GetParametricWedgeCoordinates", PyvtkHigherOrderInterpolation_GetParametricWedgeCoordinates, METH_VARARGS,
   "GetParametricWedgeCoordinates(vertexId:int) -> vtkVector3d\nC++: static vtkVector3d GetParametricWedgeCoordinates(\n    int vertexId)\n\n"},
  {"GetPointIndicesBoundingWedgeEdge", PyvtkHigherOrderInterpolation_GetPointIndicesBoundingWedgeEdge, METH_VARARGS,
   "GetPointIndicesBoundingWedgeEdge(edgeId:int) -> vtkVector2i\nC++: static vtkVector2i GetPointIndicesBoundingWedgeEdge(\n    int edgeId)\n\n"},
  {"GetVaryingParameterOfWedgeEdge", PyvtkHigherOrderInterpolation_GetVaryingParameterOfWedgeEdge, METH_VARARGS,
   "GetVaryingParameterOfWedgeEdge(edgeId:int) -> int\nC++: static int GetVaryingParameterOfWedgeEdge(int edgeId)\n\n"},
  {"GetFixedParametersOfWedgeEdge", PyvtkHigherOrderInterpolation_GetFixedParametersOfWedgeEdge, METH_VARARGS,
   "GetFixedParametersOfWedgeEdge(edgeId:int) -> vtkVector2i\nC++: static vtkVector2i GetFixedParametersOfWedgeEdge(int edgeId)\n\n"},
  {"GetPointIndicesBoundingWedgeFace", PyvtkHigherOrderInterpolation_GetPointIndicesBoundingWedgeFace, METH_VARARGS,
   "GetPointIndicesBoundingWedgeFace(faceId:int) -> (int, int, int,\n    int)\nC++: static const int *GetPointIndicesBoundingWedgeFace(\n    int faceId)\n\n"},
  {"GetEdgeIndicesBoundingWedgeFace", PyvtkHigherOrderInterpolation_GetEdgeIndicesBoundingWedgeFace, METH_VARARGS,
   "GetEdgeIndicesBoundingWedgeFace(faceId:int) -> (int, int, int,\n    int)\nC++: static const int *GetEdgeIndicesBoundingWedgeFace(int faceId)\n\n"},
  {"GetVaryingParametersOfWedgeFace", PyvtkHigherOrderInterpolation_GetVaryingParametersOfWedgeFace, METH_VARARGS,
   "GetVaryingParametersOfWedgeFace(faceId:int) -> vtkVector2i\nC++: static vtkVector2i GetVaryingParametersOfWedgeFace(\n    int faceId)\n\n"},
  {"GetFixedParameterOfWedgeFace", PyvtkHigherOrderInterpolation_GetFixedParameterOfWedgeFace, METH_VARARGS,
   "GetFixedParameterOfWedgeFace(faceId:int) -> int\nC++: static int GetFixedParameterOfWedgeFace(int faceId)\n\n"},
  {"AppendCurveCollocationPoints", PyvtkHigherOrderInterpolation_AppendCurveCollocationPoints, METH_VARARGS,
   "AppendCurveCollocationPoints(pts:vtkPoints, order:(int)) -> None\nC++: static void AppendCurveCollocationPoints(\n    vtkSmartPointer<vtkPoints> &pts, const int order[1])\n\n"},
  {"AppendQuadrilateralCollocationPoints", PyvtkHigherOrderInterpolation_AppendQuadrilateralCollocationPoints, METH_VARARGS,
   "AppendQuadrilateralCollocationPoints(pts:vtkPoints, order:(int,\n    int)) -> None\nC++: static void AppendQuadrilateralCollocationPoints(\n    vtkSmartPointer<vtkPoints> &pts, const int order[2])\n\n"},
  {"AppendHexahedronCollocationPoints", PyvtkHigherOrderInterpolation_AppendHexahedronCollocationPoints, METH_VARARGS,
   "AppendHexahedronCollocationPoints(pts:vtkPoints, order:(int, int,\n    int)) -> None\nC++: static void AppendHexahedronCollocationPoints(\n    vtkSmartPointer<vtkPoints> &pts, const int order[3])\n\n"},
  {"AppendWedgeCollocationPoints", PyvtkHigherOrderInterpolation_AppendWedgeCollocationPoints, METH_VARARGS,
   "AppendWedgeCollocationPoints(pts:vtkPoints, order:(int, int, int))\n     -> None\nC++: static void AppendWedgeCollocationPoints(\n    vtkSmartPointer<vtkPoints> &pts, const int order[3])\n\n"},
  {nullptr, nullptr, 0, nullptr}
};

static const char *PyvtkHigherOrderInterpolation_Doc =
  "vtkHigherOrderInterpolation\n\n"
  "Superclass: vtkObject\n\n"
  "See Also:\n\n";

#ifdef VTK_PYTHON_NEEDS_DEPRECATION_WARNING_SUPPRESSION
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#endif

static PyTypeObject PyvtkHigherOrderInterpolation_Type = {
  PyVarObject_HEAD_INIT(&PyType_Type, 0)
  PYTHON_PACKAGE_SCOPE "vtkCommonDataModel.vtkHigherOrderInterpolation", // tp_name
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
  PyvtkHigherOrderInterpolation_Doc, // tp_doc
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

PyObject *PyvtkHigherOrderInterpolation_ClassNew()
{
  PyTypeObject *pytype = PyVTKClass_Add(
    &PyvtkHigherOrderInterpolation_Type, PyvtkHigherOrderInterpolation_Methods,
    "vtkHigherOrderInterpolation",
 nullptr);

  if ((PyType_GetFlags(pytype) & Py_TPFLAGS_READY) != 0)
  {
    return (PyObject *)pytype;
  }

  pytype->tp_base = vtkPythonUtil::FindBaseTypeObject("vtkObject");

  PyType_Ready(pytype);
  return (PyObject *)pytype;
}

void PyVTKAddFile_vtkHigherOrderInterpolation(
  PyObject *dict)
{
  PyObject *o;
  o = PyvtkHigherOrderInterpolation_ClassNew();

  if (o && PyDict_SetItemString(dict, "vtkHigherOrderInterpolation", o) != 0)
  {
    Py_DECREF(o);
  }

  o = PyBool_FromLong((long)(true));
  if (o)
  {
    PyDict_SetItemString(dict, "VTK_21_POINT_WEDGE", o);
    Py_DECREF(o);
  }
}

