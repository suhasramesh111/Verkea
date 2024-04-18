#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InvokerActionInvoker0
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj)
	{
		method->invoker_method(methodPtr, method, obj, NULL, NULL);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Collections.Generic.List`1<System.Int32[]>
struct List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C;
// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995;
// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Collections.Generic.Queue`1<Dreamteck.Splines.SplineThreading/EmptyHandler>
struct Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16;
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
// Dreamteck.Splines.SplinePoint[]
struct SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3;
// Dreamteck.Splines.SplineSample[]
struct SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF;
// Dreamteck.Splines.SplineUser[]
struct SplineUserU5BU5D_t2DEE72099A791439AED64381AE7F97F515AD9E2B;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// Dreamteck.Splines.TriggerGroup[]
struct TriggerGroupU5BU5D_tDD9644D34D55E3781E16C0A84A45D08B1AC2FBFB;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD;
// Dreamteck.Splines.SplineComputer/NodeLink[]
struct NodeLinkU5BU5D_tE659E0179FF2ADA844DE0A3E300403C4E7641112;
// Dreamteck.Splines.SplineThreading/EmptyHandler[]
struct EmptyHandlerU5BU5D_t76FF0D3A5EDBFEE607E6D8B9FBB584266AD0EA6D;
// Dreamteck.Splines.SplineThreading/ThreadDef[]
struct ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// Dreamteck.Splines.ColorModifier
struct ColorModifier_tD41275A2C32D892D074F3959B5B202AA46C8A2B5;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// Dreamteck.Splines.EmptySplineHandler
struct EmptySplineHandler_tE478C5FE71C329376B3839120C7312D47A85D9E8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MeshCollider
struct MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455;
// UnityEngine.MeshFilter
struct MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5;
// Dreamteck.Splines.MeshGenerator
struct MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E;
// UnityEngine.MeshRenderer
struct MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// Dreamteck.Splines.OffsetModifier
struct OffsetModifier_t6750449B324B80EB198DAF68209DDC8F041A363C;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9;
// Dreamteck.Splines.RotationModifier
struct RotationModifier_tFF6A3FB575FDBEAA61EF0A57017019986EAC0607;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// Dreamteck.Splines.SampleCollection
struct SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265;
// Dreamteck.Splines.SizeModifier
struct SizeModifier_t3DD6048AE4DEB93810D8325EDB2065AA05671BEE;
// Dreamteck.Splines.Spline
struct Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1;
// Dreamteck.Splines.SplineComputer
struct SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28;
// Dreamteck.Splines.SplineUser
struct SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE;
// System.String
struct String_t;
// Dreamteck.TS_Bounds
struct TS_Bounds_tF3510D73FF1E03D0F1F02945FD8FBB765E751393;
// Dreamteck.TS_Mesh
struct TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969;
// System.Threading.Thread
struct Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// Dreamteck.Splines.TubeGenerator
struct TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Dreamteck.Splines.WaveformGenerator
struct WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1;
// Dreamteck.Splines.SplineThreading/EmptyHandler
struct EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B;
// Dreamteck.Splines.SplineThreading/ThreadDef
struct ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18;
// Dreamteck.Splines.SplineThreading/ThreadDef/Worker
struct Worker_tCA6D23E76852672B61269718E4137F3AD365AD28;

IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MeshUtility_t290F5EC43C76DF1C4B2D3C845F319E4C9E5D82BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ThreadInterruptedException_t5F777BF218B009092789F6DA0013E4DC3A0987CC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Worker_tCA6D23E76852672B61269718E4137F3AD365AD28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral11255B90E43D8883F602E6255AEB3C7D1BD334C5;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFAD832E2A46056E6477B083852CDF7D4E226E3;
IL2CPP_EXTERN_C String_t* _stringLiteral2EB6E2A95D5C3E11CE312FE16B937D8DB184DBE5;
IL2CPP_EXTERN_C String_t* _stringLiteral88EB21CA5454C0DC11F3E2DCF04D902104818319;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralE3FB52A6A499BD50CACB93900D84D32D55B8CD1D;
IL2CPP_EXTERN_C const RuntimeMethod* ArrayUtility_Add_TisThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_m7995BC5C876AF3B38247C66AF1EF1EB001DCFB88_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mB91C5A2A1CF4CB285E980960D30193188078F7BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m304CB04A17D2540065690CAC00E84FC2457127B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SplineThreading_Quitting_m2E8DBD0595278E0E8F54206571B295D6A49B9DD2_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8;
struct SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3;
struct SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF;
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
struct ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<Dreamteck.Splines.SplineThreading/EmptyHandler>
struct Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	EmptyHandlerU5BU5D_t76FF0D3A5EDBFEE607E6D8B9FBB584266AD0EA6D* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// Dreamteck.Splines.SplineThreading
struct SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

// Dreamteck.TS_Mesh
struct TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969  : public RuntimeObject
{
	// UnityEngine.Vector3[] Dreamteck.TS_Mesh::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_0;
	// UnityEngine.Vector3[] Dreamteck.TS_Mesh::normals
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___normals_1;
	// UnityEngine.Vector4[] Dreamteck.TS_Mesh::tangents
	Vector4U5BU5D_tC0F3A7115F85007510F6D173968200CD31BCF7AD* ___tangents_2;
	// UnityEngine.Color[] Dreamteck.TS_Mesh::colors
	ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* ___colors_3;
	// UnityEngine.Vector2[] Dreamteck.TS_Mesh::uv
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv_4;
	// UnityEngine.Vector2[] Dreamteck.TS_Mesh::uv2
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv2_5;
	// UnityEngine.Vector2[] Dreamteck.TS_Mesh::uv3
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv3_6;
	// UnityEngine.Vector2[] Dreamteck.TS_Mesh::uv4
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___uv4_7;
	// System.Int32[] Dreamteck.TS_Mesh::triangles
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___triangles_8;
	// System.Collections.Generic.List`1<System.Int32[]> Dreamteck.TS_Mesh::subMeshes
	List_1_tDEC4119E22EFA9DBE2F6B6C4F3ACD2FD0849215C* ___subMeshes_9;
	// Dreamteck.TS_Bounds Dreamteck.TS_Mesh::bounds
	TS_Bounds_tF3510D73FF1E03D0F1F02945FD8FBB765E751393* ___bounds_10;
	// UnityEngine.Rendering.IndexFormat Dreamteck.TS_Mesh::indexFormat
	int32_t ___indexFormat_11;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Dreamteck.TS_Mesh::hasUpdate
	bool ___hasUpdate_12;
	// System.Int32[] Dreamteck.TS_Mesh::_submeshTrisCount
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____submeshTrisCount_13;
	// System.Int32[] Dreamteck.TS_Mesh::_submeshOffsets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____submeshOffsets_14;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// Dreamteck.Splines.SplineThreading/ThreadDef
struct ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18  : public RuntimeObject
{
	// System.Threading.ParameterizedThreadStart Dreamteck.Splines.SplineThreading/ThreadDef::start
	ParameterizedThreadStart_tAA8FDC4E868056A7CB7CB2C4AB4986039B1D91E9* ___start_0;
	// System.Threading.Thread Dreamteck.Splines.SplineThreading/ThreadDef::thread
	Thread_t0A773B9DE873D2DCAA7D229EAB36757B500E207F* ___thread_1;
	// Dreamteck.Splines.SplineThreading/ThreadDef/Worker Dreamteck.Splines.SplineThreading/ThreadDef::worker
	Worker_tCA6D23E76852672B61269718E4137F3AD365AD28* ___worker_2;
};

// Dreamteck.Splines.SplineThreading/ThreadDef/Worker
struct Worker_tCA6D23E76852672B61269718E4137F3AD365AD28  : public RuntimeObject
{
	// System.Boolean Dreamteck.Splines.SplineThreading/ThreadDef/Worker::computing
	bool ___computing_0;
	// System.Collections.Generic.Queue`1<Dreamteck.Splines.SplineThreading/EmptyHandler> Dreamteck.Splines.SplineThreading/ThreadDef/Worker::instructions
	Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16* ___instructions_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354  : public RuntimeObject
{
	// System.IntPtr UnityEngine.AnimationCurve::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.AnimationCurve
struct AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.RaycastHit
struct RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 
{
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Point
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Point_0;
	// UnityEngine.Vector3 UnityEngine.RaycastHit::m_Normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal_1;
	// System.UInt32 UnityEngine.RaycastHit::m_FaceID
	uint32_t ___m_FaceID_2;
	// System.Single UnityEngine.RaycastHit::m_Distance
	float ___m_Distance_3;
	// UnityEngine.Vector2 UnityEngine.RaycastHit::m_UV
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_UV_4;
	// System.Int32 UnityEngine.RaycastHit::m_Collider
	int32_t ___m_Collider_5;
};

// Dreamteck.Splines.Spline
struct Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1  : public RuntimeObject
{
	// Dreamteck.Splines.SplinePoint[] Dreamteck.Splines.Spline::points
	SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* ___points_0;
	// Dreamteck.Splines.Spline/Type Dreamteck.Splines.Spline::type
	int32_t ___type_1;
	// System.Boolean Dreamteck.Splines.Spline::linearAverageDirection
	bool ___linearAverageDirection_2;
	// UnityEngine.AnimationCurve Dreamteck.Splines.Spline::customValueInterpolation
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___customValueInterpolation_3;
	// UnityEngine.AnimationCurve Dreamteck.Splines.Spline::customNormalInterpolation
	AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* ___customNormalInterpolation_4;
	// System.Int32 Dreamteck.Splines.Spline::sampleRate
	int32_t ___sampleRate_5;
	// System.Boolean Dreamteck.Splines.Spline::closed
	bool ___closed_15;
	// System.Single Dreamteck.Splines.Spline::_knotParametrization
	float ____knotParametrization_16;
};

// Dreamteck.Splines.SplinePoint
struct SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 
{
	// System.Boolean Dreamteck.Splines.SplinePoint::isDirty
	bool ___isDirty_0;
	// Dreamteck.Splines.SplinePoint/Type Dreamteck.Splines.SplinePoint::_type
	int32_t ____type_1;
	// UnityEngine.Vector3 Dreamteck.Splines.SplinePoint::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	// UnityEngine.Color Dreamteck.Splines.SplinePoint::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_3;
	// UnityEngine.Vector3 Dreamteck.Splines.SplinePoint::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_4;
	// System.Single Dreamteck.Splines.SplinePoint::size
	float ___size_5;
	// UnityEngine.Vector3 Dreamteck.Splines.SplinePoint::tangent
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent_6;
	// UnityEngine.Vector3 Dreamteck.Splines.SplinePoint::tangent2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent2_7;
};
// Native definition for P/Invoke marshalling of Dreamteck.Splines.SplinePoint
struct SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_pinvoke
{
	int32_t ___isDirty_0;
	int32_t ____type_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_4;
	float ___size_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent2_7;
};
// Native definition for COM marshalling of Dreamteck.Splines.SplinePoint
struct SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_com
{
	int32_t ___isDirty_0;
	int32_t ____type_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_4;
	float ___size_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___tangent2_7;
};

// Dreamteck.Splines.SplineSample
struct SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 
{
	// UnityEngine.Vector3 Dreamteck.Splines.SplineSample::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 Dreamteck.Splines.SplineSample::up
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___up_1;
	// UnityEngine.Vector3 Dreamteck.Splines.SplineSample::forward
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forward_2;
	// UnityEngine.Color Dreamteck.Splines.SplineSample::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_3;
	// System.Single Dreamteck.Splines.SplineSample::size
	float ___size_4;
	// System.Double Dreamteck.Splines.SplineSample::percent
	double ___percent_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// Dreamteck.Splines.SampleCollection
struct SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265  : public RuntimeObject
{
	// Dreamteck.Splines.SplineSample[] Dreamteck.Splines.SampleCollection::samples
	SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* ___samples_0;
	// System.Int32[] Dreamteck.Splines.SampleCollection::optimizedIndices
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___optimizedIndices_1;
	// Dreamteck.Splines.SplineComputer/SampleMode Dreamteck.Splines.SampleCollection::sampleMode
	int32_t ___sampleMode_2;
	// Dreamteck.Splines.SplineSample Dreamteck.Splines.SampleCollection::_workSample
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 ____workSample_3;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.Threading.ThreadInterruptedException
struct ThreadInterruptedException_t5F777BF218B009092789F6DA0013E4DC3A0987CC  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// Dreamteck.Splines.SplineThreading/EmptyHandler
struct EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B  : public MulticastDelegate_t
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Dreamteck.Splines.SplineComputer
struct SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.Boolean Dreamteck.Splines.SplineComputer::multithreaded
	bool ___multithreaded_4;
	// Dreamteck.Splines.SplineComputer/UpdateMode Dreamteck.Splines.SplineComputer::updateMode
	int32_t ___updateMode_5;
	// Dreamteck.Splines.TriggerGroup[] Dreamteck.Splines.SplineComputer::triggerGroups
	TriggerGroupU5BU5D_tDD9644D34D55E3781E16C0A84A45D08B1AC2FBFB* ___triggerGroups_6;
	// Dreamteck.Splines.Spline Dreamteck.Splines.SplineComputer::_spline
	Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* ____spline_7;
	// Dreamteck.Splines.SampleCollection Dreamteck.Splines.SplineComputer::_sampleCollection
	SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* ____sampleCollection_8;
	// System.Double[] Dreamteck.Splines.SplineComputer::_originalSamplePercents
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____originalSamplePercents_9;
	// System.Boolean Dreamteck.Splines.SplineComputer::_is2D
	bool ____is2D_10;
	// System.Boolean Dreamteck.Splines.SplineComputer::hasSamples
	bool ___hasSamples_11;
	// System.Single Dreamteck.Splines.SplineComputer::_optimizeAngleThreshold
	float ____optimizeAngleThreshold_12;
	// Dreamteck.Splines.SplineComputer/Space Dreamteck.Splines.SplineComputer::_space
	int32_t ____space_13;
	// Dreamteck.Splines.SplineComputer/SampleMode Dreamteck.Splines.SplineComputer::_sampleMode
	int32_t ____sampleMode_14;
	// Dreamteck.Splines.SplineUser[] Dreamteck.Splines.SplineComputer::_subscribers
	SplineUserU5BU5D_t2DEE72099A791439AED64381AE7F97F515AD9E2B* ____subscribers_15;
	// Dreamteck.Splines.SplineSample[] Dreamteck.Splines.SplineComputer::_rawSamples
	SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* ____rawSamples_16;
	// UnityEngine.Matrix4x4 Dreamteck.Splines.SplineComputer::_localToWorldMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____localToWorldMatrix_17;
	// UnityEngine.Matrix4x4 Dreamteck.Splines.SplineComputer::_worldToLocalMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ____worldToLocalMatrix_18;
	// Dreamteck.Splines.SplineComputer/NodeLink[] Dreamteck.Splines.SplineComputer::_nodes
	NodeLinkU5BU5D_tE659E0179FF2ADA844DE0A3E300403C4E7641112* ____nodes_19;
	// System.Boolean Dreamteck.Splines.SplineComputer::_rebuildPending
	bool ____rebuildPending_20;
	// System.Boolean Dreamteck.Splines.SplineComputer::_trsCached
	bool ____trsCached_21;
	// UnityEngine.Transform Dreamteck.Splines.SplineComputer::_trs
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trs_22;
	// System.Boolean Dreamteck.Splines.SplineComputer::_queueResample
	bool ____queueResample_23;
	// System.Boolean Dreamteck.Splines.SplineComputer::_queueRebuild
	bool ____queueRebuild_24;
	// Dreamteck.Splines.EmptySplineHandler Dreamteck.Splines.SplineComputer::onRebuild
	EmptySplineHandler_tE478C5FE71C329376B3839120C7312D47A85D9E8* ___onRebuild_25;
};

// Dreamteck.Splines.SplineUser
struct SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// Dreamteck.Splines.SplineUser/UpdateMethod Dreamteck.Splines.SplineUser::updateMethod
	int32_t ___updateMethod_4;
	// Dreamteck.Splines.SplineComputer Dreamteck.Splines.SplineUser::_spline
	SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* ____spline_5;
	// System.Boolean Dreamteck.Splines.SplineUser::_autoUpdate
	bool ____autoUpdate_6;
	// Dreamteck.Splines.RotationModifier Dreamteck.Splines.SplineUser::_rotationModifier
	RotationModifier_tFF6A3FB575FDBEAA61EF0A57017019986EAC0607* ____rotationModifier_7;
	// Dreamteck.Splines.OffsetModifier Dreamteck.Splines.SplineUser::_offsetModifier
	OffsetModifier_t6750449B324B80EB198DAF68209DDC8F041A363C* ____offsetModifier_8;
	// Dreamteck.Splines.ColorModifier Dreamteck.Splines.SplineUser::_colorModifier
	ColorModifier_tD41275A2C32D892D074F3959B5B202AA46C8A2B5* ____colorModifier_9;
	// Dreamteck.Splines.SizeModifier Dreamteck.Splines.SplineUser::_sizeModifier
	SizeModifier_t3DD6048AE4DEB93810D8325EDB2065AA05671BEE* ____sizeModifier_10;
	// Dreamteck.Splines.SplineSample Dreamteck.Splines.SplineUser::_clipFromSample
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 ____clipFromSample_11;
	// Dreamteck.Splines.SplineSample Dreamteck.Splines.SplineUser::_clipToSample
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 ____clipToSample_12;
	// System.Boolean Dreamteck.Splines.SplineUser::_loopSamples
	bool ____loopSamples_13;
	// System.Double Dreamteck.Splines.SplineUser::_clipFrom
	double ____clipFrom_14;
	// System.Double Dreamteck.Splines.SplineUser::_clipTo
	double ____clipTo_15;
	// System.Single Dreamteck.Splines.SplineUser::animClipFrom
	float ___animClipFrom_16;
	// System.Single Dreamteck.Splines.SplineUser::animClipTo
	float ___animClipTo_17;
	// Dreamteck.Splines.SampleCollection Dreamteck.Splines.SplineUser::_sampleCollection
	SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* ____sampleCollection_18;
	// System.Boolean Dreamteck.Splines.SplineUser::rebuild
	bool ___rebuild_19;
	// System.Boolean Dreamteck.Splines.SplineUser::getSamples
	bool ___getSamples_20;
	// System.Boolean Dreamteck.Splines.SplineUser::postBuild
	bool ___postBuild_21;
	// UnityEngine.Transform Dreamteck.Splines.SplineUser::_trs
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ____trs_22;
	// System.Boolean Dreamteck.Splines.SplineUser::_hasTransform
	bool ____hasTransform_23;
	// Dreamteck.Splines.SplineSample Dreamteck.Splines.SplineUser::_workSample
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 ____workSample_24;
	// System.Int32 Dreamteck.Splines.SplineUser::_sampleCount
	int32_t ____sampleCount_25;
	// System.Int32 Dreamteck.Splines.SplineUser::_startSampleIndex
	int32_t ____startSampleIndex_26;
	// Dreamteck.Splines.SplineSample Dreamteck.Splines.SplineUser::evalResult
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 ___evalResult_27;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) Dreamteck.Splines.SplineUser::multithreaded
	bool ___multithreaded_28;
	// System.Boolean Dreamteck.Splines.SplineUser::buildOnAwake
	bool ___buildOnAwake_29;
	// System.Boolean Dreamteck.Splines.SplineUser::buildOnEnable
	bool ___buildOnEnable_30;
	// Dreamteck.Splines.EmptySplineHandler Dreamteck.Splines.SplineUser::onPostBuild
	EmptySplineHandler_tE478C5FE71C329376B3839120C7312D47A85D9E8* ___onPostBuild_31;
};

// Dreamteck.Splines.MeshGenerator
struct MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E  : public SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE
{
	// System.Boolean Dreamteck.Splines.MeshGenerator::_baked
	bool ____baked_33;
	// System.Boolean Dreamteck.Splines.MeshGenerator::_markDynamic
	bool ____markDynamic_34;
	// System.Single Dreamteck.Splines.MeshGenerator::_size
	float ____size_35;
	// UnityEngine.Color Dreamteck.Splines.MeshGenerator::_color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ____color_36;
	// UnityEngine.Vector3 Dreamteck.Splines.MeshGenerator::_offset
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____offset_37;
	// Dreamteck.Splines.MeshGenerator/NormalMethod Dreamteck.Splines.MeshGenerator::_normalMethod
	int32_t ____normalMethod_38;
	// System.Boolean Dreamteck.Splines.MeshGenerator::_calculateTangents
	bool ____calculateTangents_39;
	// System.Boolean Dreamteck.Splines.MeshGenerator::_useSplineSize
	bool ____useSplineSize_40;
	// System.Boolean Dreamteck.Splines.MeshGenerator::_useSplineColor
	bool ____useSplineColor_41;
	// System.Single Dreamteck.Splines.MeshGenerator::_rotation
	float ____rotation_42;
	// System.Boolean Dreamteck.Splines.MeshGenerator::_flipFaces
	bool ____flipFaces_43;
	// System.Boolean Dreamteck.Splines.MeshGenerator::_doubleSided
	bool ____doubleSided_44;
	// Dreamteck.Splines.MeshGenerator/UVMode Dreamteck.Splines.MeshGenerator::_uvMode
	int32_t ____uvMode_45;
	// UnityEngine.Vector2 Dreamteck.Splines.MeshGenerator::_uvScale
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____uvScale_46;
	// UnityEngine.Vector2 Dreamteck.Splines.MeshGenerator::_uvOffset
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ____uvOffset_47;
	// System.Single Dreamteck.Splines.MeshGenerator::_uvRotation
	float ____uvRotation_48;
	// UnityEngine.Rendering.IndexFormat Dreamteck.Splines.MeshGenerator::_meshIndexFormat
	int32_t ____meshIndexFormat_49;
	// UnityEngine.Mesh Dreamteck.Splines.MeshGenerator::_bakedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____bakedMesh_50;
	// System.Single Dreamteck.Splines.MeshGenerator::colliderUpdateRate
	float ___colliderUpdateRate_51;
	// System.Boolean Dreamteck.Splines.MeshGenerator::_updateCollider
	bool ____updateCollider_52;
	// System.Single Dreamteck.Splines.MeshGenerator::_lastUpdateTime
	float ____lastUpdateTime_53;
	// System.Single Dreamteck.Splines.MeshGenerator::_vDist
	float ____vDist_54;
	// Dreamteck.TS_Mesh Dreamteck.Splines.MeshGenerator::<_tsMesh>k__BackingField
	TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* ___U3C_tsMeshU3Ek__BackingField_56;
	// UnityEngine.Mesh Dreamteck.Splines.MeshGenerator::_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ____mesh_57;
	// UnityEngine.MeshFilter Dreamteck.Splines.MeshGenerator::filter
	MeshFilter_t6D1CE2473A1E45AC73013400585A1163BF66B2F5* ___filter_58;
	// UnityEngine.MeshRenderer Dreamteck.Splines.MeshGenerator::meshRenderer
	MeshRenderer_t4B7747212F0B88244BB7790C61AE124BFC15BAAE* ___meshRenderer_59;
	// UnityEngine.MeshCollider Dreamteck.Splines.MeshGenerator::meshCollider
	MeshCollider_tB525E4DDE383252364ED0BDD32CF2B53914EE455* ___meshCollider_60;
};

// Dreamteck.Splines.TubeGenerator
struct TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE  : public MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E
{
	// System.Int32 Dreamteck.Splines.TubeGenerator::_sides
	int32_t ____sides_61;
	// System.Int32 Dreamteck.Splines.TubeGenerator::_roundCapLatitude
	int32_t ____roundCapLatitude_62;
	// Dreamteck.Splines.TubeGenerator/CapMethod Dreamteck.Splines.TubeGenerator::_capMode
	int32_t ____capMode_63;
	// System.Single Dreamteck.Splines.TubeGenerator::_revolve
	float ____revolve_64;
	// System.Single Dreamteck.Splines.TubeGenerator::_capUVScale
	float ____capUVScale_65;
	// System.Single Dreamteck.Splines.TubeGenerator::_uvTwist
	float ____uvTwist_66;
	// System.Int32 Dreamteck.Splines.TubeGenerator::bodyVertexCount
	int32_t ___bodyVertexCount_67;
	// System.Int32 Dreamteck.Splines.TubeGenerator::bodyTrisCount
	int32_t ___bodyTrisCount_68;
	// System.Int32 Dreamteck.Splines.TubeGenerator::capVertexCount
	int32_t ___capVertexCount_69;
	// System.Int32 Dreamteck.Splines.TubeGenerator::capTrisCount
	int32_t ___capTrisCount_70;
};

// Dreamteck.Splines.WaveformGenerator
struct WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1  : public MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E
{
	// Dreamteck.Splines.WaveformGenerator/Axis Dreamteck.Splines.WaveformGenerator::_axis
	int32_t ____axis_61;
	// System.Boolean Dreamteck.Splines.WaveformGenerator::_symmetry
	bool ____symmetry_62;
	// Dreamteck.Splines.WaveformGenerator/UVWrapMode Dreamteck.Splines.WaveformGenerator::_uvWrapMode
	int32_t ____uvWrapMode_63;
	// System.Int32 Dreamteck.Splines.WaveformGenerator::_slices
	int32_t ____slices_64;
};

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Double>

// System.Collections.Generic.List`1<UnityEngine.RaycastHit>
struct List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.RaycastHit>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<System.Object>

// System.Collections.Generic.Queue`1<Dreamteck.Splines.SplineThreading/EmptyHandler>

// System.Collections.Generic.Queue`1<Dreamteck.Splines.SplineThreading/EmptyHandler>

// Dreamteck.Splines.SplineThreading
struct SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields
{
	// Dreamteck.Splines.SplineThreading/ThreadDef[] Dreamteck.Splines.SplineThreading::threads
	ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* ___threads_0;
	// System.Object Dreamteck.Splines.SplineThreading::locker
	RuntimeObject* ___locker_1;
};

// Dreamteck.Splines.SplineThreading

// System.String
struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.String

// Dreamteck.TS_Mesh

// Dreamteck.TS_Mesh

// System.ValueType

// System.ValueType

// Dreamteck.Splines.SplineThreading/ThreadDef

// Dreamteck.Splines.SplineThreading/ThreadDef

// Dreamteck.Splines.SplineThreading/ThreadDef/Worker

// Dreamteck.Splines.SplineThreading/ThreadDef/Worker

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Boolean

// UnityEngine.Color

// UnityEngine.Color

// System.Double

// System.Double

// System.Int32

// System.Int32

// System.IntPtr
struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.IntPtr

// UnityEngine.LayerMask

// UnityEngine.LayerMask

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// UnityEngine.Matrix4x4

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.Quaternion

// System.Single

// System.Single

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector3

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// UnityEngine.Vector4

// System.Void

// System.Void

// UnityEngine.AnimationCurve

// UnityEngine.AnimationCurve

// System.Delegate

// System.Delegate

// System.Exception
struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};

// System.Exception

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};

// UnityEngine.Object

// UnityEngine.RaycastHit

// UnityEngine.RaycastHit

// Dreamteck.Splines.Spline
struct Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields
{
	// UnityEngine.Vector3[] Dreamteck.Splines.Spline::P
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___P_6;
	// UnityEngine.Vector3 Dreamteck.Splines.Spline::A1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___A1_7;
	// UnityEngine.Vector3 Dreamteck.Splines.Spline::A2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___A2_8;
	// UnityEngine.Vector3 Dreamteck.Splines.Spline::A3
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___A3_9;
	// UnityEngine.Vector3 Dreamteck.Splines.Spline::B1
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___B1_10;
	// UnityEngine.Vector3 Dreamteck.Splines.Spline::B2
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___B2_11;
	// System.Single Dreamteck.Splines.Spline::t1
	float ___t1_12;
	// System.Single Dreamteck.Splines.Spline::t2
	float ___t2_13;
	// System.Single Dreamteck.Splines.Spline::t3
	float ___t3_14;
};

// Dreamteck.Splines.Spline

// Dreamteck.Splines.SplinePoint

// Dreamteck.Splines.SplinePoint

// Dreamteck.Splines.SplineSample

// Dreamteck.Splines.SplineSample

// UnityEngine.Component

// UnityEngine.Component

// System.MulticastDelegate

// System.MulticastDelegate

// Dreamteck.Splines.SampleCollection

// Dreamteck.Splines.SampleCollection

// System.SystemException

// System.SystemException

// System.Action

// System.Action

// System.AsyncCallback

// System.AsyncCallback

// UnityEngine.Behaviour

// UnityEngine.Behaviour

// System.Threading.ThreadInterruptedException

// System.Threading.ThreadInterruptedException

// Dreamteck.Splines.SplineThreading/EmptyHandler

// Dreamteck.Splines.SplineThreading/EmptyHandler

// UnityEngine.MonoBehaviour

// UnityEngine.MonoBehaviour

// Dreamteck.Splines.SplineComputer

// Dreamteck.Splines.SplineComputer

// Dreamteck.Splines.SplineUser

// Dreamteck.Splines.SplineUser

// Dreamteck.Splines.MeshGenerator
struct MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_StaticFields
{
	// UnityEngine.Vector2 Dreamteck.Splines.MeshGenerator::__uvs
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 _____uvs_55;
};

// Dreamteck.Splines.MeshGenerator

// Dreamteck.Splines.TubeGenerator

// Dreamteck.Splines.TubeGenerator

// Dreamteck.Splines.WaveformGenerator

// Dreamteck.Splines.WaveformGenerator
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 m_Items[1];

	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389  : public RuntimeArray
{
	ALIGN_FIELD (8) Color_tD001788D726C3A7F1379BEED0260B9591F440C1F m_Items[1];

	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Dreamteck.Splines.SplineSample[]
struct SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF  : public RuntimeArray
{
	ALIGN_FIELD (8) SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 m_Items[1];

	inline SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 value)
	{
		m_Items[index] = value;
	}
};
// Dreamteck.Splines.SplinePoint[]
struct SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3  : public RuntimeArray
{
	ALIGN_FIELD (8) SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 m_Items[1];

	inline SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.RaycastHit[]
struct RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8  : public RuntimeArray
{
	ALIGN_FIELD (8) RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 m_Items[1];

	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// Dreamteck.Splines.SplineThreading/ThreadDef[]
struct ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E  : public RuntimeArray
{
	ALIGN_FIELD (8) ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* m_Items[1];

	inline ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_gshared (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_gshared_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_item, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<UnityEngine.RaycastHit>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_gshared (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method) ;
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.ArrayUtility::Add<System.Object>(T[]&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArrayUtility_Add_TisRuntimeObject_mBE6F967EDD4F98A034A6E0B83F79D90546061667_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, RuntimeObject* ___1_item, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;

// Dreamteck.Splines.SplineComputer Dreamteck.Splines.SplineUser::get_spline()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15 (SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___0_x, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___1_y, const RuntimeMethod* method) ;
// System.Boolean Dreamteck.Splines.SplineComputer::get_isClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplineComputer_get_isClosed_mE595EC65CA59406A9CC67B3EACB7F3DFA24F3CBF (SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* __this, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.SplineUser::get_span()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SplineUser_get_span_m400497F3FC35398E43FC0200CEDD1CFE3893021E (SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_Reset_m26E544E1F41159BC58620D6246DDA1EC6AB4CA0F (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::BuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_BuildMesh_m8593689F27E5E6B70A36B3E4058C9FA5E933A07A (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// System.Int32 Dreamteck.Splines.SplineUser::get_sampleCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC (SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE* __this, const RuntimeMethod* method) ;
// System.Boolean Dreamteck.Splines.TubeGenerator::get_useCap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TubeGenerator_get_useCap_mC2B357A091859CE074115197AB1AE7DA64E55B1E (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) ;
// System.Int32 Dreamteck.Splines.TubeGenerator::get_sides()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.TubeGenerator::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_Generate_mBE76AB24F9F2DCD24E3233039313A2BF273A95C5 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.TubeGenerator::GenerateFlatCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_GenerateFlatCaps_m0273F58BA20A33ECF4902C06725C4ECFAF2C3423 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.TubeGenerator::GenerateRoundCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_GenerateRoundCaps_mF8B516070A13EF55129B54290A29A993A6581C2B (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::ResetUVDistance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_ResetUVDistance_mBC889B0DF8BA3B6125FE13E4F3336E3508F9993D (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.MeshGenerator::get_offset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineUser::GetSample(System.Int32,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineUser_GetSample_m880DFE2CAAE9E9F4D85F68B13E9DE816186C3D8E (SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE* __this, int32_t ___0_index, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_target, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.SplineSample::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.MeshGenerator::GetBaseSize(Dreamteck.Splines.SplineSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshGenerator_GetBaseSize_m3AA0C08209F5E80A02EDE2F76C32D1249A47E5B1 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 ___0_sample, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(System.Single,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// Dreamteck.Splines.MeshGenerator/UVMode Dreamteck.Splines.MeshGenerator::get_uvMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshGenerator_get_uvMode_m24EA499258A457119CF72093CC2C291E76FA2D53 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::AddUVDistance(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_AddUVDistance_m8B2E03330BE06C40A59CA2ABAA01DC09B47DE0C0 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, int32_t ___0_sampleIndex, const RuntimeMethod* method) ;
// UnityEngine.Color Dreamteck.Splines.MeshGenerator::GetBaseColor(Dreamteck.Splines.SplineSample)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MeshGenerator_GetBaseColor_mA53F6B90FFB54A8BA028FD12E109CB36B83F5723 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 ___0_sample, const RuntimeMethod* method) ;
// UnityEngine.Color Dreamteck.Splines.MeshGenerator::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F MeshGenerator_get_color_m304FC1A34B1FE17F535528AFDCE7A1AC90258A33 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.MeshGenerator::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshGenerator_get_rotation_mF01F123A8637DB897577510B334D675B3B9C55CE (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::AngleAxis(System.Single,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80 (float ___0_angle, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_axis, const RuntimeMethod* method) ;
// Dreamteck.TS_Mesh Dreamteck.Splines.MeshGenerator::get__tsMesh()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_rotation, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.MeshGenerator::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::CalculateUVs(System.Double,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_CalculateUVs_m6EF52B8AA80896038E1731EF4906EC64CC65FC48 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, double ___0_percent, float ___1_u, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.MeshGenerator::get_uvRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float MeshGenerator_get_uvRotation_mC52520BC955782A962951A765CC06A86D89835D9 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Addition(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Subtraction(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) ;
// System.Int32[] Dreamteck.MeshUtility::GeneratePlaneTriangles(System.Int32[]&,System.Int32,System.Int32,System.Boolean,System.Int32,System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* MeshUtility_GeneratePlaneTriangles_m7330D4B70527489798A2A095F6152DBCB8FADC3F (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** ___0_triangles, int32_t ___1_x, int32_t ___2_z, bool ___3_flip, int32_t ___4_startTriangleIndex, int32_t ___5_startVertex, bool ___6_reallocateArray, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.TubeGenerator::get_capUVScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TubeGenerator_get_capUVScale_m70A0E1FC65CCF46007C52FA081BBD2864F0F2866 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_forward, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_upwards, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.SplineComputer::CalculateLength(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SplineComputer_CalculateLength_mC2DDEDCBAFB19E6C72D52A75F08598CD8B42FC59 (SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* __this, double ___0_from, double ___1_to, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.SplineUser::get_clipFrom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SplineUser_get_clipFrom_m2366D6F30DAD8E29DBD02FB70B070B0FEE51909E (SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE* __this, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.SplineUser::get_clipTo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SplineUser_get_clipTo_mE824718C3FB404D8172DCFD93F214F487550E9C2 (SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Dreamteck.Splines.MeshGenerator::get_uvScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) ;
// UnityEngine.Vector2 Dreamteck.Splines.MeshGenerator::get_uvOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator__ctor_m5D5CE5E6D63ED2D3AE7688622270EA42D9363ED6 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.WaveformGenerator::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_Generate_m837886E04F0C2CDC4CDAFEDA756FECED746E652B (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_Build_mC4CAB714A79CC0643DF21E991F4783D56CEAFAC7 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.MeshGenerator::LateRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MeshGenerator_LateRun_m64D45E55DFD5E097CDEB0B5158E431548B486AF7 (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.SplineComputer::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineComputer_get_position_m446882D1914FB13D41458DE237BCF5B685A1F854 (SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.SplineComputer::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineComputer_TransformDirection_m1765BDC618FE42CD60FA7824994CDAE27E85EB2C (SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_direction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.SplineComputer::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineComputer_InverseTransformPoint_mECCF2D72C06C4113F8702CAE2D91A1A1ED8C5A9E (SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Distance(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.SplineComputer::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineComputer_TransformPoint_mA8122BC79A397AE6179382B56C731ED460816171 (SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_point, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Cross(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Lerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Int32 Dreamteck.DMath::FloorInt(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925 (double ___0_a, const RuntimeMethod* method) ;
// System.Int32 Dreamteck.DMath::CeilInt(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DMath_CeilInt_m30A0442D9F9301FF6EE6213F2983A9725A7FDEFC (double ___0_a, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SampleCollection::GetSamplingValues(System.Double,System.Int32&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, int32_t* ___1_sampleIndex, double* ___2_lerp, const RuntimeMethod* method) ;
// System.Double Dreamteck.DMath::Lerp(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9 (double ___0_a, double ___1_b, double ___2_t, const RuntimeMethod* method) ;
// System.Double Dreamteck.DMath::InverseLerp(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DMath_InverseLerp_m7311A58A9A929618111D117E90594D116B356B9D (double ___0_a, double ___1_b, double ___2_t, const RuntimeMethod* method) ;
// System.Boolean Dreamteck.Splines.SampleCollection::get_hasSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SampleCollection::Evaluate(System.Double,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection_Evaluate_mAAC912C0D30624A4CE054FDD16943264D579BD20 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_result, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,Dreamteck.Splines.SplineSample&,System.Double,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_mDC2046D9C41B063337F15327E3B8FF688E8C4352 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_a, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_b, double ___2_t, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___3_target, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineSample::FastCopy(Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_FastCopy_m8DD8D90BE9DD47EED748197D5872BB4A1AA05CEF (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_sample, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::FormatFromTo(System.Double&,System.Double&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_FormatFromTo_m22E4F3E55C75E1ADE65714E8C8B27E3C535F9B04 (double* ___0_from, double* ___1_to, bool ___2_preventInvert, const RuntimeMethod* method) ;
// Dreamteck.Splines.SplineSample Dreamteck.Splines.SampleCollection::Evaluate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 SampleCollection_Evaluate_mBAC7EF0F05390FAAC84F8BA6AAD7C18B59521E82 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.SampleCollection::EvaluatePosition(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SampleCollection_EvaluatePosition_m5F4239473DA1391082355974BCA8D5FE36981595 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, const RuntimeMethod* method) ;
// System.Int32 Dreamteck.Splines.SampleCollection::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SampleCollection_get_length_mB42A3EAF2CB5B8F16CBF5D91048A6DC72A17BD3B (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.SampleCollection::Travel(System.Double,System.Single,Dreamteck.Splines.Spline/Direction,System.Single&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SampleCollection_Travel_mCC4EB579751BC33446AC07ADA47CCBAF858F388D (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_start, float ___1_distance, int32_t ___2_direction, float* ___3_moved, double ___4_clipFrom, double ___5_clipTo, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_sqrMagnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.LinearAlgebraUtility::ProjectOnLine(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LinearAlgebraUtility_ProjectOnLine_m5A6BF6DD69841B252A2A1D18F802453BACAAE278 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_fromPoint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_toPoint, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_project, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,Dreamteck.Splines.SplineSample&,System.Single,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_a, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_b, float ___2_t, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___3_target, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.SampleCollection::GetSamplePercent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, int32_t ___0_sampleIndex, const RuntimeMethod* method) ;
// System.Single Dreamteck.LinearAlgebraUtility::InverseLerp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LinearAlgebraUtility_InverseLerp_m09FCFA5329C5F9B0FBE3E4D2BE69D4C4108F7968 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) ;
// System.Int32 Dreamteck.Splines.Spline::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) ;
// System.Double Dreamteck.DMath::Clamp01(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2 (double ___0_a, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.Splines.Spline::EvaluatePosition(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.Spline::get_moveStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) ;
// System.Double Dreamteck.DMath::Move(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DMath_Move_mFD096234DD99170C682673771D4A375192C5B806 (double ___0_current, double ___1_target, double ___2_amount, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.Spline::GetClosestPoint(System.Int32,UnityEngine.Vector3,System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_GetClosestPoint_m3F708EF3EEBEA09900C7A8E4487DCCCFE02E2D7B (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_iterations, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, double ___2_start, double ___3_end, int32_t ___4_slices, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D (LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___0_mask, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Physics::Linecast(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.RaycastHit&,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Physics_Linecast_m399C6C11AD7ECE11241A37C08BAB4D97CF3CB925 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_start, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_end, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___2_hitInfo, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39 (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::.ctor()
inline void List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, const RuntimeMethod*))List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Double>::.ctor()
inline void List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_gshared)(__this, method);
}
// UnityEngine.RaycastHit[] UnityEngine.Physics::RaycastAll(UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Int32,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* Physics_RaycastAll_m8B7FB8419A65BEE78927D0EE84916E8DBE7ECD34 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_origin, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_direction, float ___2_maxDistance, int32_t ___3_layerMask, int32_t ___4_queryTriggerInteraction, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Double>::Add(T)
inline void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline)(__this, ___0_item, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.RaycastHit>::Add(T)
inline void List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_item, const RuntimeMethod* method)
{
	((  void (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, const RuntimeMethod*))List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_gshared_inline)(__this, ___0_item, method);
}
// T[] System.Collections.Generic.List`1<UnityEngine.RaycastHit>::ToArray()
inline RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797 (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, const RuntimeMethod* method)
{
	return ((  RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, const RuntimeMethod*))List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_gshared)(__this, method);
}
// T[] System.Collections.Generic.List`1<System.Double>::ToArray()
inline DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3 (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, const RuntimeMethod* method)
{
	return ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_gshared)(__this, method);
}
// System.Void Dreamteck.Splines.Spline::EvaluatePosition(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::Evaluate(System.Double,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_sample, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.Spline::GetPointPercent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_GetPointPercent_m15F86239227793C30FBB28532BE5DF26522FEA24 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_pointIndex, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AnimationCurve::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81 (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.AnimationCurve::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* __this, float ___0_time, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::Lerp(UnityEngine.Color,UnityEngine.Color,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::EvaluatePositionAndTangent(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluatePositionAndTangent_m69DFFAA5E6661DBFE074BF79A58580A5B6F7C92A (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_tangent, double ___2_percent, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::Normalize()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::Evaluate(System.Int32,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Evaluate_m4CEA39824604481F5526C1EA877198CC0922087E (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_pointIndex, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_result, const RuntimeMethod* method) ;
// System.Double Dreamteck.DMath::Clamp(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double DMath_Clamp_m716297EE37BD982943E1F08F0F92CDD2D642640D (double ___0_a, double ___1_min, double ___2_max, const RuntimeMethod* method) ;
// Dreamteck.Splines.SplineSample Dreamteck.Splines.Spline::Evaluate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 Spline_Evaluate_m3FF28C29D4DEBACB76185D51930705F1489FF144 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.Spline::CalculateLength(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_CalculateLength_m50ED2FB8659B3E8352599296206600C047279894 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_from, double ___1_to, double ___2_resolution, const RuntimeMethod* method) ;
// System.Double Dreamteck.Splines.Spline::Travel(System.Double,System.Single,System.Single&,Dreamteck.Splines.Spline/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_Travel_m05EB8CB4C3E012F0EE2A1B42B058EE1A9458BB13 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_start, float ___1_distance, float* ___2_moved, int32_t ___3_direction, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculatePosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculatePosition_m34FFEEE9116036D6842DD4296FF838F4018A26E7 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_percent, int32_t ___2_pointIndex, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateTangent(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateTangent_m8880C394538B296C20AD0EE843CF14D024F8B427 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_percent, int32_t ___2_pointIndex, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculatePositionAndTangent(System.Double,System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculatePositionAndTangent_mF068B2206D4D931A96744CC069E75A01399CFBD8 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, int32_t ___1_pointIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_tangent, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::Break(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Break_m2D9A42257E9764AB29BA2ED95CBBD665A29F4CA4 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_at, const RuntimeMethod* method) ;
// System.Void System.Array::CopyTo(System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB (RuntimeArray* __this, RuntimeArray* ___0_array, int32_t ___1_index, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::set_type(Dreamteck.Splines.SplinePoint/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, int32_t ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangentPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentPosition_m7DE86139E3FA716AF8A74B99096AACB96BB6C087 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2Position_mA1986532B0F63A77D27041E62DA5B5CCD876CC36 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::EvaluateTangent(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluateTangent_mFBAD9629C6DC50790A474115E47D3C658394D58A (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_tangent, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::ComputeCatPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_i, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomPositionFast(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomPositionFast_m4958BFCC3BDD634321B594A3863C59F9D7D5CEE2 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomComponents(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomComponents_m227F903FE9C56B8DDE9101359F332F9663EABD3D (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_t, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomPosition(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomPosition_mD14AE698CCD634DC788214171D6DA23AAEFDF253 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateBezierPosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateBezierPosition_m4195727C1DD9CCC3A6C010835DF16F03C513D185 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateBSplinePosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateBSplinePosition_m89F986808DAF6CEE5960F4881D24CC04E929D856 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_time, int32_t ___2_i, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateLinearPosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateLinearPosition_mC69E728A970AF7836DE37791C59B934051C7F587 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomTangentFast(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomTangentFast_mB5CAB652CCC6CF09ECDBE3914A5323F315932ECE (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomTangent(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomTangent_m4273903C168F8C006DDF39C40900DC2B0239156D (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_tangent, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateBezierTangent(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateBezierTangent_m350B5122CFB1F8A67AA7BE852CDB8816865A8F42 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.Spline::CalculateLinearTangent(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateLinearTangent_mE2A03F8CD6FE41D74757E4FAB40D7DA7E67F13FB (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) ;
// System.Single Dreamteck.Splines.Spline::<CalculateCatmullRomComponents>g__GetInterval|65_0(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_U3CCalculateCatmullRomComponentsU3Eg__GetIntervalU7C65_0_m34BC5C9BF4891FFB4EE73BA8315A2C970C2FF024 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::LerpUnclamped(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) ;
// Dreamteck.Splines.SplinePoint/Type Dreamteck.Splines.SplinePoint::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SmoothMirrorTangent2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::GetInterpolatedTangents(Dreamteck.Splines.SplinePoint,Dreamteck.Splines.SplinePoint,System.Single,Dreamteck.Splines.SplinePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_GetInterpolatedTangents_mA87C7A07B33FEE476FEF46BF194BCB7BAA443475 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_a, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___1_b, float ___2_t, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* ___3_target, const RuntimeMethod* method) ;
// System.Boolean Dreamteck.Splines.SplinePoint::EqualsFast(Dreamteck.Splines.SplinePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplinePoint_EqualsFast_mD7293575DB074136AB9CEA5024129EEF2B36DB86 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_obj, const RuntimeMethod* method) ;
// System.Boolean Dreamteck.Splines.SplinePoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplinePoint_Equals_m3A83A0EF8D868E3B33B9EE7330D01694E243F924 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPosition_m29B489327E0326CB3C3DA4D8A5AADA1043BC5A58 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SmoothFreeTangent2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothFreeTangent2_m500206A7602BF6DBBEBB22EAF25DBCAED1F20756 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SmoothMirrorTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothMirrorTangent_m2372562E52050B023A2C8D4B89DEB4602F88FF77 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SmoothFreeTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothFreeTangent_mD6607535A6EB75D0453C795ACEE3923BEE46BD2D (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_m8BAA2BC4E1F3AFC7C9840294552E06C09960A4D7 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_m5A5E827117EC342D4981BE939B76B5A06DD64B59 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_t, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_mE727CE7ED797F3A0B158C37EBFBE4922E22AFA0B (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tan, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_nor, float ___3_s, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_col, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_mE8C889C555467FF4AC41EF4F87D3777795714A18 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tan, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_tan2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_nor, float ___4_s, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_col, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::.ctor(Dreamteck.Splines.SplinePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_m72F42037F5A4676840EBA292EB7AF5E8296F5B09 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_source, const RuntimeMethod* method) ;
// UnityEngine.Vector3 Dreamteck.LinearAlgebraUtility::FlattenVector(UnityEngine.Vector3,Dreamteck.LinearAlgebraUtility/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 LinearAlgebraUtility_FlattenVector_mF2742D77C3B0EB5CC2219873528258AEBCA01946 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_input, int32_t ___1_axis, float ___2_flatValue, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::Flatten(Dreamteck.LinearAlgebraUtility/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_Flatten_mEE0695C1BCB1FB736480679C985C9C71B7D3FFC6 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, int32_t ___0_axis, float ___1_flatValue, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetPositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPositionX_mB6DEDE4F694600A86D187A826A400DA6EBEF1DF5 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetPositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPositionY_m7187D5AD77FA0BED66ABE18D1322FD8894148310 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetPositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPositionZ_m148E641208C705BE9B19309C78472425B58C0946 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangentX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentX_mD40CBFA80634F304C330B919DADBAC64D5C37746 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangentY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentY_mB1BF8035373B7DD3ABB196E11E018CFD371364A4 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangentZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentZ_m1E5AEFB87862CE33DD482DEC4CA2626C12F41223 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2X_m46007357FA6487C5E9DCA429B46E93EAF5084788 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2Y_m3C699AACB1F4ED881CE18A09EF3DAF2B65E3DCC7 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2Z_mE9C52BBDD158F92D7BFDA55EE91F82EF7D517112 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetNormalX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetNormalX_mBA4D2FEF98990203A6393123967E04837F0B54E6 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetNormalY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetNormalY_mDDF4AB605F55F419DF8C70B47E9DEE893E7DE4E0 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetNormalZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetNormalZ_m1FA50DE5EDCC2BDC96121C340843AAC8A92298BF (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetColorR(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorR_mE0BA888011C6EFC016E3C3F8EC0DA370A21FA918 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetColorG(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorG_mB80D71E0AC049AA3D3621F73A178BAD33B0503A3 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetColorB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorB_m5F2907EAC56406F2C2981FA3A4F5EF61E3BFAED2 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplinePoint::SetColorA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorA_m6EAAC82063F98C7CF5E924EC3E529A57A6A9EEAF (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Color::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Int32 Dreamteck.Splines.SplinePoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplinePoint_GetHashCode_m3104C6F9FCF82D73F7688599CCF2AD22065BA31F (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_back()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) ;
// UnityEngine.Quaternion Dreamteck.Splines.SplineSample::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SplineSample_get_rotation_m99770800A7D9C757DE6AC3E6A9A94BD67C4CCD60 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.DMath::LerpVector3NonAlloc(UnityEngine.Vector3,UnityEngine.Vector3,System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DMath_LerpVector3NonAlloc_mE259642220356DDD94139E4CF49C3467ADB5DADC (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, double ___2_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_target, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_m7228F929816EF9BCC3553EF58319AAA41C3C68F2 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_b, double ___1_t, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_mC965956609638A980790AE1D9A9001107849F4DA (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_b, float ___1_t, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineSample::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample__ctor_mD446870A15FDEC5F1ADC4FA38650801EE626D932 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_up, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_forward, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, float ___4_size, double ___5_percent, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineThreading/ThreadDef::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadDef__ctor_m370AC50B73EA5B9F3D245F2932C3D95B385100BD (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineThreading/ThreadDef::Restart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadDef_Restart_m63FFDABC7B188D1657352B06EF3F34E24019FD3A (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.ArrayUtility::Add<Dreamteck.Splines.SplineThreading/ThreadDef>(T[]&,T)
inline void ArrayUtility_Add_TisThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_m7995BC5C876AF3B38247C66AF1EF1EB001DCFB88 (ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E** ___0_array, ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* ___1_item, const RuntimeMethod* method)
{
	((  void (*) (ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E**, ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18*, const RuntimeMethod*))ArrayUtility_Add_TisRuntimeObject_mBE6F967EDD4F98A034A6E0B83F79D90546061667_gshared)(___0_array, ___1_item, method);
}
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
// System.Void UnityEngine.Application::add_quitting(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5 (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___0_value, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineThreading::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading_Stop_m2423EF56F9F20E0BA86B3655E77D0A66954BA898 (const RuntimeMethod* method) ;
// System.Void System.Threading.Thread::Sleep(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549 (int32_t ___0_millisecondsTimeout, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<Dreamteck.Splines.SplineThreading/EmptyHandler>::Dequeue()
inline EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* Queue_1_Dequeue_mB91C5A2A1CF4CB285E980960D30193188078F7BF (Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16* __this, const RuntimeMethod* method)
{
	return ((  EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* (*) (Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void Dreamteck.Splines.SplineThreading/EmptyHandler::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_inline (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<Dreamteck.Splines.SplineThreading/EmptyHandler>::get_Count()
inline int32_t Queue_1_get_Count_m304CB04A17D2540065690CAC00E84FC2457127B3_inline (Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___0_str0, String_t* ___1_str1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
// System.Boolean Dreamteck.Splines.SplineThreading/ThreadDef::get_isAlive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadDef_get_isAlive_m72BF17AB4DE7865213D9189570F7FF080BB90E34 (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* __this, const RuntimeMethod* method) ;
// System.Boolean Dreamteck.Splines.SplineThreading/ThreadDef::get_computing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadDef_get_computing_m8C905E7B3F1198242C7B2716E2E14349D1E368A8 (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineThreading/ThreadDef::Queue(Dreamteck.Splines.SplineThreading/EmptyHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadDef_Queue_m269C69D5945299266E49B34FAA0C4C1A73473CAD (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* __this, EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* ___0_handler, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineThreading/ThreadDef::Interrupt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadDef_Interrupt_m8883E869D1C03B1390BABC19019B17A28E5B246C (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* __this, const RuntimeMethod* method) ;
// System.Void Dreamteck.Splines.SplineThreading/ThreadDef::Abort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadDef_Abort_mA2DF8D30A12F2140C37F68A1861D99FADF1218D3 (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) ;
// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector4::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Dreamteck.Splines.TubeGenerator::get_sides()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _sides; }
		int32_t L_0 = __this->____sides_61;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _sides; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::set_sides(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_set_sides_m9FDE5439BD42CF33097DB4D4949CEB36019B9DDA (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value != _sides)
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____sides_61;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (value < 3) value = 3;
		int32_t L_3 = ___0_value;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)3))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// if (value < 3) value = 3;
		___0_value = 3;
	}

IL_001d:
	{
		// _sides = value;
		int32_t L_5 = ___0_value;
		__this->____sides_61 = L_5;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_002c:
	{
		// }
		return;
	}
}
// Dreamteck.Splines.TubeGenerator/CapMethod Dreamteck.Splines.TubeGenerator::get_capMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TubeGenerator_get_capMode_m17A6A45C45878639DA788953F1C721EEABE18492 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _capMode; }
		int32_t L_0 = __this->____capMode_63;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _capMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::set_capMode(Dreamteck.Splines.TubeGenerator/CapMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_set_capMode_m8ACAA95623C2AE424C0F850EB55D010DF5C79B24 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != _capMode)
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____capMode_63;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _capMode = value;
		int32_t L_3 = ___0_value;
		__this->____capMode_63 = L_3;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Int32 Dreamteck.Splines.TubeGenerator::get_roundCapLatitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TubeGenerator_get_roundCapLatitude_m004D7063001495E60D949E6069F4601E3640AB52 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _roundCapLatitude; }
		int32_t L_0 = __this->____roundCapLatitude_62;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _roundCapLatitude; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::set_roundCapLatitude(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_set_roundCapLatitude_mAF7AEB578C3CCEDB0D3C07FE4896C83A33C77C59 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if (value < 1) value = 1;
		int32_t L_0 = ___0_value;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)1))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000c;
		}
	}
	{
		// if (value < 1) value = 1;
		___0_value = 1;
	}

IL_000c:
	{
		// if (value != _roundCapLatitude)
		int32_t L_2 = ___0_value;
		int32_t L_3 = __this->____roundCapLatitude_62;
		V_1 = (bool)((((int32_t)((((int32_t)L_2) == ((int32_t)L_3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// _roundCapLatitude = value;
		int32_t L_5 = ___0_value;
		__this->____roundCapLatitude_62 = L_5;
		// if(_capMode == CapMethod.Round) Rebuild();
		int32_t L_6 = __this->____capMode_63;
		V_2 = (bool)((((int32_t)L_6) == ((int32_t)2))? 1 : 0);
		bool L_7 = V_2;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		// if(_capMode == CapMethod.Round) Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0038:
	{
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Single Dreamteck.Splines.TubeGenerator::get_revolve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TubeGenerator_get_revolve_mF1E1E28A766CFB4248D4C5DF422B9A4397EAB7EE (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return _revolve; }
		float L_0 = __this->____revolve_64;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _revolve; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::set_revolve(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_set_revolve_mB16DD076C1180637A3FA88EBF908DF03DD6BFB62 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != _revolve)
		float L_0 = ___0_value;
		float L_1 = __this->____revolve_64;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _revolve = value;
		float L_3 = ___0_value;
		__this->____revolve_64 = L_3;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Single Dreamteck.Splines.TubeGenerator::get_capUVScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TubeGenerator_get_capUVScale_m70A0E1FC65CCF46007C52FA081BBD2864F0F2866 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return _capUVScale; }
		float L_0 = __this->____capUVScale_65;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _capUVScale; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::set_capUVScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_set_capUVScale_m7389358950C5BEF405055E6EF1BC10A65D9DA125 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != _capUVScale)
		float L_0 = ___0_value;
		float L_1 = __this->____capUVScale_65;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _capUVScale = value;
		float L_3 = ___0_value;
		__this->____capUVScale_65 = L_3;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Single Dreamteck.Splines.TubeGenerator::get_uvTwist()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TubeGenerator_get_uvTwist_mD3A38D7B5F136489D3E5BDBAA6C7E0B9D9687790 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return _uvTwist; }
		float L_0 = __this->____uvTwist_66;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _uvTwist; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::set_uvTwist(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_set_uvTwist_mBBEF178D776C1DD58794FE9EC698E5CD4131E5BD (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != _uvTwist)
		float L_0 = ___0_value;
		float L_1 = __this->____uvTwist_66;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _uvTwist = value;
		float L_3 = ___0_value;
		__this->____uvTwist_66 = L_3;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean Dreamteck.Splines.TubeGenerator::get_useCap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TubeGenerator_get_useCap_mC2B357A091859CE074115197AB1AE7DA64E55B1E (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// bool isCapSet = _capMode != CapMethod.None;
		int32_t L_0 = __this->____capMode_63;
		V_0 = (bool)((!(((uint32_t)L_0) <= ((uint32_t)0)))? 1 : 0);
		// if (spline != null) return isCapSet && (!spline.isClosed || span < 1f);
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_1;
		L_1 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0045;
		}
	}
	{
		// if (spline != null) return isCapSet && (!spline.isClosed || span < 1f);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0041;
		}
	}
	{
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_5;
		L_5 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		NullCheck(L_5);
		bool L_6;
		L_6 = SplineComputer_get_isClosed_mE595EC65CA59406A9CC67B3EACB7F3DFA24F3CBF(L_5, NULL);
		if (!L_6)
		{
			goto IL_003e;
		}
	}
	{
		double L_7;
		L_7 = SplineUser_get_span_m400497F3FC35398E43FC0200CEDD1CFE3893021E(__this, NULL);
		G_B5_0 = ((((double)L_7) < ((double)(1.0)))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 1;
	}

IL_003f:
	{
		G_B7_0 = G_B5_0;
		goto IL_0042;
	}

IL_0041:
	{
		G_B7_0 = 0;
	}

IL_0042:
	{
		V_2 = (bool)G_B7_0;
		goto IL_0049;
	}

IL_0045:
	{
		// return isCapSet;
		bool L_8 = V_0;
		V_2 = L_8;
		goto IL_0049;
	}

IL_0049:
	{
		// }
		bool L_9 = V_2;
		return L_9;
	}
}
// System.String Dreamteck.Splines.TubeGenerator::get_meshName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TubeGenerator_get_meshName_m439148AF22AD465044E23EA4248915950C3B6DCA (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FFAD832E2A46056E6477B083852CDF7D4E226E3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string meshName => "Tube";
		return _stringLiteral1FFAD832E2A46056E6477B083852CDF7D4E226E3;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_Reset_m8BC233568E353B168BEA3BC868DA5B45EAFA42DA (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	{
		// base.Reset();
		MeshGenerator_Reset_m26E544E1F41159BC58620D6246DDA1EC6AB4CA0F(__this, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::BuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_BuildMesh_mC2BEAA2160EAF6FF7D4CA687FD82EEE7E0DA9225 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	{
		// if (_sides <= 2) return;
		int32_t L_0 = __this->____sides_61;
		V_2 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (_sides <= 2) return;
		goto IL_0146;
	}

IL_0016:
	{
		// base.BuildMesh();
		MeshGenerator_BuildMesh_m8593689F27E5E6B70A36B3E4058C9FA5E933A07A(__this, NULL);
		// bodyVertexCount = (_sides + 1) * sampleCount;
		int32_t L_2 = __this->____sides_61;
		int32_t L_3;
		L_3 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		__this->___bodyVertexCount_67 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_add(L_2, 1)), L_3));
		// CapMethod _capModeFinal = _capMode;
		int32_t L_4 = __this->____capMode_63;
		V_0 = L_4;
		// if (!useCap)
		bool L_5;
		L_5 = TubeGenerator_get_useCap_mC2B357A091859CE074115197AB1AE7DA64E55B1E(__this, NULL);
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// _capModeFinal = CapMethod.None;
		V_0 = 0;
	}

IL_004a:
	{
		// switch (_capModeFinal)
		int32_t L_7 = V_0;
		V_5 = L_7;
		int32_t L_8 = V_5;
		V_4 = L_8;
		int32_t L_9 = V_4;
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			goto IL_005f;
		}
	}
	{
		goto IL_0058;
	}

IL_0058:
	{
		int32_t L_10 = V_4;
		if ((((int32_t)L_10) == ((int32_t)2)))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0086;
	}

IL_005f:
	{
		// case CapMethod.Flat: capVertexCount = _sides + 1; break;
		int32_t L_11 = __this->____sides_61;
		__this->___capVertexCount_69 = ((int32_t)il2cpp_codegen_add(L_11, 1));
		// case CapMethod.Flat: capVertexCount = _sides + 1; break;
		goto IL_008f;
	}

IL_006f:
	{
		// case CapMethod.Round: capVertexCount = _roundCapLatitude * (sides + 1); break;
		int32_t L_12 = __this->____roundCapLatitude_62;
		int32_t L_13;
		L_13 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		__this->___capVertexCount_69 = ((int32_t)il2cpp_codegen_multiply(L_12, ((int32_t)il2cpp_codegen_add(L_13, 1))));
		// case CapMethod.Round: capVertexCount = _roundCapLatitude * (sides + 1); break;
		goto IL_008f;
	}

IL_0086:
	{
		// default: capVertexCount = 0; break;
		__this->___capVertexCount_69 = 0;
		// default: capVertexCount = 0; break;
		goto IL_008f;
	}

IL_008f:
	{
		// int vertexCount = bodyVertexCount + capVertexCount * 2;
		int32_t L_14 = __this->___bodyVertexCount_67;
		int32_t L_15 = __this->___capVertexCount_69;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, ((int32_t)il2cpp_codegen_multiply(L_15, 2))));
		// bodyTrisCount = _sides * (sampleCount - 1) * 2 * 3;
		int32_t L_16 = __this->____sides_61;
		int32_t L_17;
		L_17 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		__this->___bodyTrisCount_68 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)il2cpp_codegen_subtract(L_17, 1)))), 2)), 3));
		// switch (_capModeFinal)
		int32_t L_18 = V_0;
		V_7 = L_18;
		int32_t L_19 = V_7;
		V_6 = L_19;
		int32_t L_20 = V_6;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_00cd;
		}
	}
	{
		goto IL_00c6;
	}

IL_00c6:
	{
		int32_t L_21 = V_6;
		if ((((int32_t)L_21) == ((int32_t)2)))
		{
			goto IL_00e1;
		}
	}
	{
		goto IL_00f8;
	}

IL_00cd:
	{
		// case CapMethod.Flat: capTrisCount = (_sides - 1) * 3 * 2; break;
		int32_t L_22 = __this->____sides_61;
		__this->___capTrisCount_70 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_22, 1)), 3)), 2));
		// case CapMethod.Flat: capTrisCount = (_sides - 1) * 3 * 2; break;
		goto IL_0101;
	}

IL_00e1:
	{
		// case CapMethod.Round: capTrisCount = _sides * _roundCapLatitude * 6; break;
		int32_t L_23 = __this->____sides_61;
		int32_t L_24 = __this->____roundCapLatitude_62;
		__this->___capTrisCount_70 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_23, L_24)), 6));
		// case CapMethod.Round: capTrisCount = _sides * _roundCapLatitude * 6; break;
		goto IL_0101;
	}

IL_00f8:
	{
		// default: capTrisCount = 0; break;
		__this->___capTrisCount_70 = 0;
		// default: capTrisCount = 0; break;
		goto IL_0101;
	}

IL_0101:
	{
		// AllocateMesh(vertexCount, bodyTrisCount + capTrisCount * 2);
		int32_t L_25 = V_1;
		int32_t L_26 = __this->___bodyTrisCount_68;
		int32_t L_27 = __this->___capTrisCount_70;
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(26 /* System.Void Dreamteck.Splines.MeshGenerator::AllocateMesh(System.Int32,System.Int32) */, __this, L_25, ((int32_t)il2cpp_codegen_add(L_26, ((int32_t)il2cpp_codegen_multiply(L_27, 2)))));
		// Generate();
		TubeGenerator_Generate_mBE76AB24F9F2DCD24E3233039313A2BF273A95C5(__this, NULL);
		// switch (_capModeFinal)
		int32_t L_28 = V_0;
		V_9 = L_28;
		int32_t L_29 = V_9;
		V_8 = L_29;
		int32_t L_30 = V_8;
		if ((((int32_t)L_30) == ((int32_t)1)))
		{
			goto IL_0134;
		}
	}
	{
		goto IL_012d;
	}

IL_012d:
	{
		int32_t L_31 = V_8;
		if ((((int32_t)L_31) == ((int32_t)2)))
		{
			goto IL_013d;
		}
	}
	{
		goto IL_0146;
	}

IL_0134:
	{
		// case CapMethod.Flat: GenerateFlatCaps(); break;
		TubeGenerator_GenerateFlatCaps_m0273F58BA20A33ECF4902C06725C4ECFAF2C3423(__this, NULL);
		// case CapMethod.Flat: GenerateFlatCaps(); break;
		goto IL_0146;
	}

IL_013d:
	{
		// case CapMethod.Round: GenerateRoundCaps(); break;
		TubeGenerator_GenerateRoundCaps_mF8B516070A13EF55129B54290A29A993A6581C2B(__this, NULL);
		// case CapMethod.Round: GenerateRoundCaps(); break;
		goto IL_0146;
	}

IL_0146:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_Generate_mBE76AB24F9F2DCD24E3233039313A2BF273A95C5 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshUtility_t290F5EC43C76DF1C4B2D3C845F319E4C9E5D82BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	float V_5 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	int32_t G_B6_0 = 0;
	{
		// int vertexIndex = 0;
		V_0 = 0;
		// ResetUVDistance();
		MeshGenerator_ResetUVDistance_mBC889B0DF8BA3B6125FE13E4F3336E3508F9993D(__this, NULL);
		// bool hasOffset = offset != Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_2;
		L_2 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_0, L_1, NULL);
		V_1 = L_2;
		// for (int i = 0; i < sampleCount; i++)
		V_2 = 0;
		goto IL_0271;
	}

IL_0022:
	{
		// GetSample(i, ref evalResult);
		int32_t L_3 = V_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_4 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		SplineUser_GetSample_m880DFE2CAAE9E9F4D85F68B13E9DE816186C3D8E(__this, L_3, L_4, NULL);
		// Vector3 center = evalResult.position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_5 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5->___position_0;
		V_3 = L_6;
		// Vector3 right = evalResult.right;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_7 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(L_7, NULL);
		V_4 = L_8;
		// float resultSize = GetBaseSize(evalResult);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_9 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		float L_10;
		L_10 = MeshGenerator_GetBaseSize_m3AA0C08209F5E80A02EDE2F76C32D1249A47E5B1(__this, L_9, NULL);
		V_5 = L_10;
		// if (hasOffset)
		bool L_11 = V_1;
		V_7 = L_11;
		bool L_12 = V_7;
		if (!L_12)
		{
			goto IL_00c3;
		}
	}
	{
		// center += (offset.x * resultSize) * right + (offset.y * resultSize) * evalResult.up + (offset.z * resultSize) * evalResult.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_15 = L_14.___x_2;
		float L_16 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_15, L_16)), L_17, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_20 = L_19.___y_3;
		float L_21 = V_5;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_22 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_20, L_21)), L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_27 = L_26.___z_4;
		float L_28 = V_5;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_29 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = L_29->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_27, L_28)), L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_25, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_32, NULL);
		V_3 = L_33;
	}

IL_00c3:
	{
		// if (uvMode == UVMode.UniformClamp || uvMode == UVMode.UniformClip)
		int32_t L_34;
		L_34 = MeshGenerator_get_uvMode_m24EA499258A457119CF72093CC2C291E76FA2D53(__this, NULL);
		if ((((int32_t)L_34) == ((int32_t)3)))
		{
			goto IL_00d7;
		}
	}
	{
		int32_t L_35;
		L_35 = MeshGenerator_get_uvMode_m24EA499258A457119CF72093CC2C291E76FA2D53(__this, NULL);
		G_B6_0 = ((((int32_t)L_35) == ((int32_t)1))? 1 : 0);
		goto IL_00d8;
	}

IL_00d7:
	{
		G_B6_0 = 1;
	}

IL_00d8:
	{
		V_8 = (bool)G_B6_0;
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_00e8;
		}
	}
	{
		// AddUVDistance(i);
		int32_t L_37 = V_2;
		MeshGenerator_AddUVDistance_m8B2E03330BE06C40A59CA2ABAA01DC09B47DE0C0(__this, L_37, NULL);
	}

IL_00e8:
	{
		// Color vertexColor = GetBaseColor(evalResult) * color;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_38 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_39;
		L_39 = MeshGenerator_GetBaseColor_mA53F6B90FFB54A8BA028FD12E109CB36B83F5723(__this, L_38, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_40;
		L_40 = MeshGenerator_get_color_m304FC1A34B1FE17F535528AFDCE7A1AC90258A33(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		L_41 = Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline(L_39, L_40, NULL);
		V_6 = L_41;
		// for (int n = 0; n < _sides + 1; n++)
		V_9 = 0;
		goto IL_0257;
	}

IL_0109:
	{
		// float anglePercent = (float)(n) / _sides;
		int32_t L_42 = V_9;
		int32_t L_43 = __this->____sides_61;
		V_10 = ((float)(((float)L_42)/((float)L_43)));
		// Quaternion rot = Quaternion.AngleAxis(_revolve * anglePercent + rotation + 180f, evalResult.forward);
		float L_44 = __this->____revolve_64;
		float L_45 = V_10;
		float L_46;
		L_46 = MeshGenerator_get_rotation_mF01F123A8637DB897577510B334D675B3B9C55CE(__this, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_47 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = L_47->___forward_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_49;
		L_49 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_44, L_45)), L_46)), (180.0f))), L_48, NULL);
		V_11 = L_49;
		// _tsMesh.vertices[vertexIndex] = center + rot * right * (size * resultSize * 0.5f);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_50;
		L_50 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_50);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_51 = L_50->___vertices_0;
		int32_t L_52 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_54, L_55, NULL);
		float L_57;
		L_57 = MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2(__this, NULL);
		float L_58 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_56, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_57, L_58)), (0.5f))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_53, L_59, NULL);
		NullCheck(L_51);
		(L_51)->SetAt(static_cast<il2cpp_array_size_t>(L_52), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_60);
		// CalculateUVs(evalResult.percent, anglePercent);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_61 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_62 = L_61->___percent_5;
		float L_63 = V_10;
		MeshGenerator_CalculateUVs_m6EF52B8AA80896038E1731EF4906EC64CC65FC48(__this, L_62, L_63, NULL);
		// _tsMesh.uv[vertexIndex] = Vector2.one * 0.5f + (Vector2)(Quaternion.AngleAxis(uvRotation + 180f, Vector3.forward) * (Vector2.one * 0.5f - (__uvs + Vector2.right * ((float)evalResult.percent * _uvTwist))));
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_64;
		L_64 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_64);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_65 = L_64->___uv_4;
		int32_t L_66 = V_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_67;
		L_67 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_68;
		L_68 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_67, (0.5f), NULL);
		float L_69;
		L_69 = MeshGenerator_get_uvRotation_mC52520BC955782A962951A765CC06A86D89835D9(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_71;
		L_71 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(L_69, (180.0f))), L_70, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_72;
		L_72 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_72, (0.5f), NULL);
		il2cpp_codegen_runtime_class_init_inline(MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_74 = ((MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_StaticFields*)il2cpp_codegen_static_fields_for(MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var))->_____uvs_55;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75;
		L_75 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_76 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_77 = L_76->___percent_5;
		float L_78 = __this->____uvTwist_66;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_79;
		L_79 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_75, ((float)il2cpp_codegen_multiply(((float)L_77), L_78)), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_80;
		L_80 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_74, L_79, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_81;
		L_81 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_73, L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_81, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_71, L_82, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_84;
		L_84 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_83, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_85;
		L_85 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_68, L_84, NULL);
		NullCheck(L_65);
		(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_66), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_85);
		// _tsMesh.normals[vertexIndex] = Vector3.Normalize(_tsMesh.vertices[vertexIndex] - center);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_86;
		L_86 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_86);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_87 = L_86->___normals_1;
		int32_t L_88 = V_0;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_89;
		L_89 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_89);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_90 = L_89->___vertices_0;
		int32_t L_91 = V_0;
		NullCheck(L_90);
		int32_t L_92 = L_91;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = (L_90)->GetAt(static_cast<il2cpp_array_size_t>(L_92));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_93, L_94, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_95, NULL);
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(L_88), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_96);
		// _tsMesh.colors[vertexIndex] = vertexColor;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_97;
		L_97 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_97);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_98 = L_97->___colors_3;
		int32_t L_99 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_100 = V_6;
		NullCheck(L_98);
		(L_98)->SetAt(static_cast<il2cpp_array_size_t>(L_99), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_100);
		// vertexIndex++;
		int32_t L_101 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_101, 1));
		// for (int n = 0; n < _sides + 1; n++)
		int32_t L_102 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_102, 1));
	}

IL_0257:
	{
		// for (int n = 0; n < _sides + 1; n++)
		int32_t L_103 = V_9;
		int32_t L_104 = __this->____sides_61;
		V_12 = (bool)((((int32_t)L_103) < ((int32_t)((int32_t)il2cpp_codegen_add(L_104, 1))))? 1 : 0);
		bool L_105 = V_12;
		if (L_105)
		{
			goto IL_0109;
		}
	}
	{
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_106 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_106, 1));
	}

IL_0271:
	{
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_107 = V_2;
		int32_t L_108;
		L_108 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		V_13 = (bool)((((int32_t)L_107) < ((int32_t)L_108))? 1 : 0);
		bool L_109 = V_13;
		if (L_109)
		{
			goto IL_0022;
		}
	}
	{
		// MeshUtility.GeneratePlaneTriangles(ref _tsMesh.triangles, _sides, sampleCount, false);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_110;
		L_110 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_110);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_111 = (&L_110->___triangles_8);
		int32_t L_112 = __this->____sides_61;
		int32_t L_113;
		L_113 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(MeshUtility_t290F5EC43C76DF1C4B2D3C845F319E4C9E5D82BA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114;
		L_114 = MeshUtility_GeneratePlaneTriangles_m7330D4B70527489798A2A095F6152DBCB8FADC3F(L_111, L_112, L_113, (bool)0, 0, 0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::GenerateFlatCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_GenerateFlatCaps_m0273F58BA20A33ECF4902C06725C4ECFAF2C3423 (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t V_12 = 0;
	bool V_13 = false;
	int32_t G_B9_0 = 0;
	{
		// GetSample(0, ref evalResult);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		SplineUser_GetSample_m880DFE2CAAE9E9F4D85F68B13E9DE816186C3D8E(__this, 0, L_0, NULL);
		// for (int i = 0; i < _sides+1; i++)
		V_3 = 0;
		goto IL_010a;
	}

IL_0016:
	{
		// int index = bodyVertexCount + i;
		int32_t L_1 = __this->___bodyVertexCount_67;
		int32_t L_2 = V_3;
		V_4 = ((int32_t)il2cpp_codegen_add(L_1, L_2));
		// _tsMesh.vertices[index] = _tsMesh.vertices[i];
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_3;
		L_3 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_3);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = L_3->___vertices_0;
		int32_t L_5 = V_4;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_6;
		L_6 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_6);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = L_6->___vertices_0;
		int32_t L_8 = V_3;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_10);
		// _tsMesh.normals[index] = -evalResult.forward;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_11;
		L_11 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_11);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = L_11->___normals_1;
		int32_t L_13 = V_4;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_14 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_15, NULL);
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_16);
		// _tsMesh.colors[index] = _tsMesh.colors[i];
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_17;
		L_17 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_17);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_18 = L_17->___colors_3;
		int32_t L_19 = V_4;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_20;
		L_20 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_20);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_21 = L_20->___colors_3;
		int32_t L_22 = V_3;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		NullCheck(L_18);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_24);
		// _tsMesh.uv[index] = Quaternion.AngleAxis(_revolve * (((float)i) / (_sides - 1)), Vector3.forward) * Vector2.right * (0.5f * capUVScale) + Vector3.right * 0.5f + Vector3.up * 0.5f;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_25;
		L_25 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_25);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_26 = L_25->___uv_4;
		int32_t L_27 = V_4;
		float L_28 = __this->____revolve_64;
		int32_t L_29 = V_3;
		int32_t L_30 = __this->____sides_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32;
		L_32 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(L_28, ((float)(((float)L_29)/((float)((int32_t)il2cpp_codegen_subtract(L_30, 1))))))), L_31, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_33;
		L_33 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_32, L_34, NULL);
		float L_36;
		L_36 = TubeGenerator_get_capUVScale_m70A0E1FC65CCF46007C52FA081BBD2864F0F2866(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_35, ((float)il2cpp_codegen_multiply((0.5f), L_36)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_38, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_41, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_42, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_44;
		L_44 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_43, NULL);
		NullCheck(L_26);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(L_27), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_44);
		// for (int i = 0; i < _sides+1; i++)
		int32_t L_45 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_45, 1));
	}

IL_010a:
	{
		// for (int i = 0; i < _sides+1; i++)
		int32_t L_46 = V_3;
		int32_t L_47 = __this->____sides_61;
		V_5 = (bool)((((int32_t)L_46) < ((int32_t)((int32_t)il2cpp_codegen_add(L_47, 1))))? 1 : 0);
		bool L_48 = V_5;
		if (L_48)
		{
			goto IL_0016;
		}
	}
	{
		// GetSample(sampleCount - 1, ref evalResult);
		int32_t L_49;
		L_49 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_50 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		SplineUser_GetSample_m880DFE2CAAE9E9F4D85F68B13E9DE816186C3D8E(__this, ((int32_t)il2cpp_codegen_subtract(L_49, 1)), L_50, NULL);
		// for (int i = 0; i < _sides + 1; i++)
		V_6 = 0;
		goto IL_024d;
	}

IL_013b:
	{
		// int index = bodyVertexCount + (_sides + 1) + i;
		int32_t L_51 = __this->___bodyVertexCount_67;
		int32_t L_52 = __this->____sides_61;
		int32_t L_53 = V_6;
		V_7 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_51, ((int32_t)il2cpp_codegen_add(L_52, 1)))), L_53));
		// int bodyIndex = bodyVertexCount - (_sides + 1) + i;
		int32_t L_54 = __this->___bodyVertexCount_67;
		int32_t L_55 = __this->____sides_61;
		int32_t L_56 = V_6;
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_54, ((int32_t)il2cpp_codegen_add(L_55, 1)))), L_56));
		// _tsMesh.vertices[index] = _tsMesh.vertices[bodyIndex];
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_57;
		L_57 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_57);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_58 = L_57->___vertices_0;
		int32_t L_59 = V_7;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_60;
		L_60 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_60);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_61 = L_60->___vertices_0;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		int32_t L_63 = L_62;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		NullCheck(L_58);
		(L_58)->SetAt(static_cast<il2cpp_array_size_t>(L_59), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_64);
		// _tsMesh.normals[index] = evalResult.forward;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_65;
		L_65 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_65);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_66 = L_65->___normals_1;
		int32_t L_67 = V_7;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_68 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = L_68->___forward_2;
		NullCheck(L_66);
		(L_66)->SetAt(static_cast<il2cpp_array_size_t>(L_67), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_69);
		// _tsMesh.colors[index] = _tsMesh.colors[bodyIndex];
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_70;
		L_70 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_70);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_71 = L_70->___colors_3;
		int32_t L_72 = V_7;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_73;
		L_73 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_73);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_74 = L_73->___colors_3;
		int32_t L_75 = V_8;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77 = (L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		NullCheck(L_71);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_77);
		// _tsMesh.uv[index] = Quaternion.AngleAxis(_revolve * ((float)(bodyIndex) / (_sides - 1)), Vector3.forward) * Vector2.right * (0.5f * capUVScale) + Vector3.right * 0.5f + Vector3.up * 0.5f;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_78;
		L_78 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_78);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_79 = L_78->___uv_4;
		int32_t L_80 = V_7;
		float L_81 = __this->____revolve_64;
		int32_t L_82 = V_8;
		int32_t L_83 = __this->____sides_61;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_85;
		L_85 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_multiply(L_81, ((float)(((float)L_82)/((float)((int32_t)il2cpp_codegen_subtract(L_83, 1))))))), L_84, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_86;
		L_86 = Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_85, L_87, NULL);
		float L_89;
		L_89 = TubeGenerator_get_capUVScale_m70A0E1FC65CCF46007C52FA081BBD2864F0F2866(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_88, ((float)il2cpp_codegen_multiply((0.5f), L_89)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_91, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_90, L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_94, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_93, L_95, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_97;
		L_97 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_96, NULL);
		NullCheck(L_79);
		(L_79)->SetAt(static_cast<il2cpp_array_size_t>(L_80), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_97);
		// for (int i = 0; i < _sides + 1; i++)
		int32_t L_98 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_98, 1));
	}

IL_024d:
	{
		// for (int i = 0; i < _sides + 1; i++)
		int32_t L_99 = V_6;
		int32_t L_100 = __this->____sides_61;
		V_9 = (bool)((((int32_t)L_99) < ((int32_t)((int32_t)il2cpp_codegen_add(L_100, 1))))? 1 : 0);
		bool L_101 = V_9;
		if (L_101)
		{
			goto IL_013b;
		}
	}
	{
		// int t = bodyTrisCount;
		int32_t L_102 = __this->___bodyTrisCount_68;
		V_0 = L_102;
		// bool fullIntegrity = _revolve == 360f;
		float L_103 = __this->____revolve_64;
		V_1 = (bool)((((float)L_103) == ((float)(360.0f)))? 1 : 0);
		// int finalSides = fullIntegrity ? _sides - 1 : _sides;
		bool L_104 = V_1;
		if (L_104)
		{
			goto IL_0282;
		}
	}
	{
		int32_t L_105 = __this->____sides_61;
		G_B9_0 = L_105;
		goto IL_028a;
	}

IL_0282:
	{
		int32_t L_106 = __this->____sides_61;
		G_B9_0 = ((int32_t)il2cpp_codegen_subtract(L_106, 1));
	}

IL_028a:
	{
		V_2 = G_B9_0;
		// for (int i = 0; i < finalSides - 1; i++)
		V_10 = 0;
		goto IL_02e7;
	}

IL_0290:
	{
		// _tsMesh.triangles[t++] = i + bodyVertexCount + 2;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_107;
		L_107 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_107);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_108 = L_107->___triangles_8;
		int32_t L_109 = V_0;
		int32_t L_110 = L_109;
		V_0 = ((int32_t)il2cpp_codegen_add(L_110, 1));
		int32_t L_111 = V_10;
		int32_t L_112 = __this->___bodyVertexCount_67;
		NullCheck(L_108);
		(L_108)->SetAt(static_cast<il2cpp_array_size_t>(L_110), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_111, L_112)), 2)));
		// _tsMesh.triangles[t++] = i + +bodyVertexCount + 1;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_113;
		L_113 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_113);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_114 = L_113->___triangles_8;
		int32_t L_115 = V_0;
		int32_t L_116 = L_115;
		V_0 = ((int32_t)il2cpp_codegen_add(L_116, 1));
		int32_t L_117 = V_10;
		int32_t L_118 = __this->___bodyVertexCount_67;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(L_116), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_117, L_118)), 1)));
		// _tsMesh.triangles[t++] = bodyVertexCount;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_119;
		L_119 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_119);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_120 = L_119->___triangles_8;
		int32_t L_121 = V_0;
		int32_t L_122 = L_121;
		V_0 = ((int32_t)il2cpp_codegen_add(L_122, 1));
		int32_t L_123 = __this->___bodyVertexCount_67;
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(L_122), (int32_t)L_123);
		// for (int i = 0; i < finalSides - 1; i++)
		int32_t L_124 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_124, 1));
	}

IL_02e7:
	{
		// for (int i = 0; i < finalSides - 1; i++)
		int32_t L_125 = V_10;
		int32_t L_126 = V_2;
		V_11 = (bool)((((int32_t)L_125) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_126, 1))))? 1 : 0);
		bool L_127 = V_11;
		if (L_127)
		{
			goto IL_0290;
		}
	}
	{
		// for (int i = 0; i < finalSides - 1; i++)
		V_12 = 0;
		goto IL_036b;
	}

IL_02f9:
	{
		// _tsMesh.triangles[t++] = bodyVertexCount + (_sides + 1);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_128;
		L_128 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_128);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_129 = L_128->___triangles_8;
		int32_t L_130 = V_0;
		int32_t L_131 = L_130;
		V_0 = ((int32_t)il2cpp_codegen_add(L_131, 1));
		int32_t L_132 = __this->___bodyVertexCount_67;
		int32_t L_133 = __this->____sides_61;
		NullCheck(L_129);
		(L_129)->SetAt(static_cast<il2cpp_array_size_t>(L_131), (int32_t)((int32_t)il2cpp_codegen_add(L_132, ((int32_t)il2cpp_codegen_add(L_133, 1)))));
		// _tsMesh.triangles[t++] = i + 1 + bodyVertexCount + (_sides + 1);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_134;
		L_134 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_134);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_135 = L_134->___triangles_8;
		int32_t L_136 = V_0;
		int32_t L_137 = L_136;
		V_0 = ((int32_t)il2cpp_codegen_add(L_137, 1));
		int32_t L_138 = V_12;
		int32_t L_139 = __this->___bodyVertexCount_67;
		int32_t L_140 = __this->____sides_61;
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_137), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_138, 1)), L_139)), ((int32_t)il2cpp_codegen_add(L_140, 1)))));
		// _tsMesh.triangles[t++] = i + 2 + bodyVertexCount + (_sides + 1);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_141;
		L_141 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_141);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_142 = L_141->___triangles_8;
		int32_t L_143 = V_0;
		int32_t L_144 = L_143;
		V_0 = ((int32_t)il2cpp_codegen_add(L_144, 1));
		int32_t L_145 = V_12;
		int32_t L_146 = __this->___bodyVertexCount_67;
		int32_t L_147 = __this->____sides_61;
		NullCheck(L_142);
		(L_142)->SetAt(static_cast<il2cpp_array_size_t>(L_144), (int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_145, 2)), L_146)), ((int32_t)il2cpp_codegen_add(L_147, 1)))));
		// for (int i = 0; i < finalSides - 1; i++)
		int32_t L_148 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_148, 1));
	}

IL_036b:
	{
		// for (int i = 0; i < finalSides - 1; i++)
		int32_t L_149 = V_12;
		int32_t L_150 = V_2;
		V_13 = (bool)((((int32_t)L_149) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_150, 1))))? 1 : 0);
		bool L_151 = V_13;
		if (L_151)
		{
			goto IL_02f9;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::GenerateRoundCaps()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator_GenerateRoundCaps_mF8B516070A13EF55129B54290A29A993A6581C2B (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	int32_t V_14 = 0;
	float V_15 = 0.0f;
	int32_t V_16 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_17;
	memset((&V_17), 0, sizeof(V_17));
	float V_18 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_19;
	memset((&V_19), 0, sizeof(V_19));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	bool V_22 = false;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	int32_t V_25 = 0;
	int32_t V_26 = 0;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t V_31 = 0;
	int32_t V_32 = 0;
	int32_t V_33 = 0;
	float V_34 = 0.0f;
	float V_35 = 0.0f;
	int32_t V_36 = 0;
	float V_37 = 0.0f;
	int32_t V_38 = 0;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_39;
	memset((&V_39), 0, sizeof(V_39));
	float V_40 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_41;
	memset((&V_41), 0, sizeof(V_41));
	bool V_42 = false;
	bool V_43 = false;
	int32_t V_44 = 0;
	int32_t V_45 = 0;
	int32_t V_46 = 0;
	int32_t V_47 = 0;
	bool V_48 = false;
	bool V_49 = false;
	bool V_50 = false;
	{
		// GetSample(0, ref evalResult);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		SplineUser_GetSample_m880DFE2CAAE9E9F4D85F68B13E9DE816186C3D8E(__this, 0, L_0, NULL);
		// Vector3 center = evalResult.position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_1 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		V_0 = L_2;
		// bool hasOffset = offset != Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		bool L_5;
		L_5 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_3, L_4, NULL);
		V_1 = L_5;
		// float resultSize = GetBaseSize(evalResult);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_6 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		float L_7;
		L_7 = MeshGenerator_GetBaseSize_m3AA0C08209F5E80A02EDE2F76C32D1249A47E5B1(__this, L_6, NULL);
		V_2 = L_7;
		// if (hasOffset)
		bool L_8 = V_1;
		V_8 = L_8;
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_00aa;
		}
	}
	{
		// center += (offset.x * resultSize) * evalResult.right + (offset.y * resultSize) * evalResult.up + (offset.z * resultSize) * evalResult.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_12 = L_11.___x_2;
		float L_13 = V_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_14 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_12, L_13)), L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_18 = L_17.___y_3;
		float L_19 = V_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_20 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = L_20->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_18, L_19)), L_21, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_16, L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_25 = L_24.___z_4;
		float L_26 = V_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_27 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = L_27->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_25, L_26)), L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_30, NULL);
		V_0 = L_31;
	}

IL_00aa:
	{
		// Quaternion lookRot = Quaternion.LookRotation(-evalResult.forward, evalResult.up);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_32 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = L_32->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_33, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_35 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = L_35->___up_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_37;
		L_37 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_34, L_36, NULL);
		V_3 = L_37;
		// float startV = 0f;
		V_4 = (0.0f);
		// float capLengthPercent = 0f;
		V_5 = (0.0f);
		// switch (uvMode)
		int32_t L_38;
		L_38 = MeshGenerator_get_uvMode_m24EA499258A457119CF72093CC2C291E76FA2D53(__this, NULL);
		V_10 = L_38;
		int32_t L_39 = V_10;
		V_9 = L_39;
		int32_t L_40 = V_9;
		switch (L_40)
		{
			case 0:
			{
				goto IL_0101;
			}
			case 1:
			{
				goto IL_013d;
			}
			case 2:
			{
				goto IL_018d;
			}
			case 3:
			{
				goto IL_016e;
			}
		}
	}
	{
		goto IL_01b5;
	}

IL_0101:
	{
		// case UVMode.Clip: startV = (float)evalResult.percent;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_41 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_42 = L_41->___percent_5;
		V_4 = ((float)L_42);
		// capLengthPercent = (size * 0.5f) / spline.CalculateLength(); break;
		float L_43;
		L_43 = MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2(__this, NULL);
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_44;
		L_44 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		NullCheck(L_44);
		float L_45;
		L_45 = SplineComputer_CalculateLength_mC2DDEDCBAFB19E6C72D52A75F08598CD8B42FC59(L_44, (0.0), (1.0), NULL);
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_43, (0.5f)))/L_45));
		// capLengthPercent = (size * 0.5f) / spline.CalculateLength(); break;
		goto IL_01b5;
	}

IL_013d:
	{
		// startV = spline.CalculateLength(0.0, evalResult.percent);
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_46;
		L_46 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_47 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_48 = L_47->___percent_5;
		NullCheck(L_46);
		float L_49;
		L_49 = SplineComputer_CalculateLength_mC2DDEDCBAFB19E6C72D52A75F08598CD8B42FC59(L_46, (0.0), L_48, NULL);
		V_4 = L_49;
		// capLengthPercent = size * 0.5f; break;
		float L_50;
		L_50 = MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2(__this, NULL);
		V_5 = ((float)il2cpp_codegen_multiply(L_50, (0.5f)));
		// capLengthPercent = size * 0.5f; break;
		goto IL_01b5;
	}

IL_016e:
	{
		// startV = 0f;
		V_4 = (0.0f);
		// capLengthPercent = size * 0.5f / (float)span;
		float L_51;
		L_51 = MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2(__this, NULL);
		double L_52;
		L_52 = SplineUser_get_span_m400497F3FC35398E43FC0200CEDD1CFE3893021E(__this, NULL);
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_51, (0.5f)))/((float)L_52)));
		// break;
		goto IL_01b5;
	}

IL_018d:
	{
		// case UVMode.Clamp: capLengthPercent = (size * 0.5f) / spline.CalculateLength(clipFrom, clipTo); break;
		float L_53;
		L_53 = MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2(__this, NULL);
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_54;
		L_54 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		double L_55;
		L_55 = SplineUser_get_clipFrom_m2366D6F30DAD8E29DBD02FB70B070B0FEE51909E(__this, NULL);
		double L_56;
		L_56 = SplineUser_get_clipTo_mE824718C3FB404D8172DCFD93F214F487550E9C2(__this, NULL);
		NullCheck(L_54);
		float L_57;
		L_57 = SplineComputer_CalculateLength_mC2DDEDCBAFB19E6C72D52A75F08598CD8B42FC59(L_54, L_55, L_56, NULL);
		V_5 = ((float)(((float)il2cpp_codegen_multiply(L_53, (0.5f)))/L_57));
		// case UVMode.Clamp: capLengthPercent = (size * 0.5f) / spline.CalculateLength(clipFrom, clipTo); break;
		goto IL_01b5;
	}

IL_01b5:
	{
		// Color vertexColor = GetBaseColor(evalResult) * color;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_58 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_59;
		L_59 = MeshGenerator_GetBaseColor_mA53F6B90FFB54A8BA028FD12E109CB36B83F5723(__this, L_58, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_60;
		L_60 = MeshGenerator_get_color_m304FC1A34B1FE17F535528AFDCE7A1AC90258A33(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_61;
		L_61 = Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline(L_59, L_60, NULL);
		V_6 = L_61;
		// for (int lat = 1; lat < _roundCapLatitude+1; lat++)
		V_11 = 1;
		goto IL_03af;
	}

IL_01d6:
	{
		// float latitudePercent = ((float)lat / _roundCapLatitude);
		int32_t L_62 = V_11;
		int32_t L_63 = __this->____roundCapLatitude_62;
		V_12 = ((float)(((float)L_62)/((float)L_63)));
		// float latAngle = 90f * latitudePercent;
		float L_64 = V_12;
		V_13 = ((float)il2cpp_codegen_multiply((90.0f), L_64));
		// for (int lon = 0; lon <= sides; lon++)
		V_14 = 0;
		goto IL_0392;
	}

IL_01f6:
	{
		// float anglePercent = (float)lon / sides;
		int32_t L_65 = V_14;
		int32_t L_66;
		L_66 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_15 = ((float)(((float)L_65)/((float)L_66)));
		// int index = bodyVertexCount + lon + (lat-1) * (sides + 1);
		int32_t L_67 = __this->___bodyVertexCount_67;
		int32_t L_68 = V_14;
		int32_t L_69 = V_11;
		int32_t L_70;
		L_70 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_16 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_67, L_68)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_69, 1)), ((int32_t)il2cpp_codegen_add(L_70, 1))))));
		// Quaternion rot = Quaternion.AngleAxis(_revolve * anglePercent + rotation + 180f, -Vector3.forward) * Quaternion.AngleAxis(latAngle, Vector3.up);
		float L_71 = __this->____revolve_64;
		float L_72 = V_15;
		float L_73;
		L_73 = MeshGenerator_get_rotation_mF01F123A8637DB897577510B334D675B3B9C55CE(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_74, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_76;
		L_76 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_71, L_72)), L_73)), (180.0f))), L_75, NULL);
		float L_77 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78;
		L_78 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_79;
		L_79 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_77, L_78, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_80;
		L_80 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_76, L_79, NULL);
		V_17 = L_80;
		// _tsMesh.vertices[index] = center + lookRot * rot * -Vector3.right * (size * 0.5f * evalResult.size);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_81;
		L_81 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_81);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_82 = L_81->___vertices_0;
		int32_t L_83 = V_16;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_85 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_86 = V_17;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_87;
		L_87 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_85, L_86, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_88, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_87, L_89, NULL);
		float L_91;
		L_91 = MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2(__this, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_92 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		float L_93 = L_92->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_90, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_91, (0.5f))), L_93)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95;
		L_95 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_84, L_94, NULL);
		NullCheck(L_82);
		(L_82)->SetAt(static_cast<il2cpp_array_size_t>(L_83), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_95);
		// _tsMesh.colors[index] = vertexColor;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_96;
		L_96 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_96);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_97 = L_96->___colors_3;
		int32_t L_98 = V_16;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_99 = V_6;
		NullCheck(L_97);
		(L_97)->SetAt(static_cast<il2cpp_array_size_t>(L_98), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_99);
		// _tsMesh.normals[index] = (_tsMesh.vertices[index] - center).normalized;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_100;
		L_100 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_100);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_101 = L_100->___normals_1;
		int32_t L_102 = V_16;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_103;
		L_103 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_103);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_104 = L_103->___vertices_0;
		int32_t L_105 = V_16;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_107, L_108, NULL);
		V_20 = L_109;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_20), NULL);
		NullCheck(L_101);
		(L_101)->SetAt(static_cast<il2cpp_array_size_t>(L_102), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_110);
		// float baseV = startV + capLengthPercent * latitudePercent;
		float L_111 = V_4;
		float L_112 = V_5;
		float L_113 = V_12;
		V_18 = ((float)il2cpp_codegen_add(L_111, ((float)il2cpp_codegen_multiply(L_112, L_113))));
		// Vector2 baseUV = new Vector2(anglePercent * uvScale.x - baseV * _uvTwist, baseV * uvScale.y) - uvOffset;
		float L_114 = V_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_115;
		L_115 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_116 = L_115.___x_0;
		float L_117 = V_18;
		float L_118 = __this->____uvTwist_66;
		float L_119 = V_18;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_120;
		L_120 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_121 = L_120.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_122;
		memset((&L_122), 0, sizeof(L_122));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_122), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_114, L_116)), ((float)il2cpp_codegen_multiply(L_117, L_118)))), ((float)il2cpp_codegen_multiply(L_119, L_121)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_123;
		L_123 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124;
		L_124 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_122, L_123, NULL);
		V_19 = L_124;
		// _tsMesh.uv[index] = Vector2.one * 0.5f + (Vector2)(Quaternion.AngleAxis(uvRotation + 180f, Vector3.forward) * (Vector2.one * 0.5f - baseUV));
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_125;
		L_125 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_125);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_126 = L_125->___uv_4;
		int32_t L_127 = V_16;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_128;
		L_128 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129;
		L_129 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_128, (0.5f), NULL);
		float L_130;
		L_130 = MeshGenerator_get_uvRotation_mC52520BC955782A962951A765CC06A86D89835D9(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_131;
		L_131 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_132;
		L_132 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(L_130, (180.0f))), L_131, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133;
		L_133 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_134;
		L_134 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_133, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_135 = V_19;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_136;
		L_136 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_134, L_135, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_136, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_132, L_137, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_139;
		L_139 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_138, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_140;
		L_140 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_129, L_139, NULL);
		NullCheck(L_126);
		(L_126)->SetAt(static_cast<il2cpp_array_size_t>(L_127), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_140);
		// for (int lon = 0; lon <= sides; lon++)
		int32_t L_141 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_141, 1));
	}

IL_0392:
	{
		// for (int lon = 0; lon <= sides; lon++)
		int32_t L_142 = V_14;
		int32_t L_143;
		L_143 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_21 = (bool)((((int32_t)((((int32_t)L_142) > ((int32_t)L_143))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_144 = V_21;
		if (L_144)
		{
			goto IL_01f6;
		}
	}
	{
		// for (int lat = 1; lat < _roundCapLatitude+1; lat++)
		int32_t L_145 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_145, 1));
	}

IL_03af:
	{
		// for (int lat = 1; lat < _roundCapLatitude+1; lat++)
		int32_t L_146 = V_11;
		int32_t L_147 = __this->____roundCapLatitude_62;
		V_22 = (bool)((((int32_t)L_146) < ((int32_t)((int32_t)il2cpp_codegen_add(L_147, 1))))? 1 : 0);
		bool L_148 = V_22;
		if (L_148)
		{
			goto IL_01d6;
		}
	}
	{
		// int t = bodyTrisCount;
		int32_t L_149 = __this->___bodyTrisCount_68;
		V_7 = L_149;
		// for (int z = -1; z < _roundCapLatitude - 1; z++)
		V_23 = (-1);
		goto IL_04c3;
	}

IL_03d4:
	{
		// for (int x = 0; x < sides; x++)
		V_24 = 0;
		goto IL_04a9;
	}

IL_03dd:
	{
		// int current = bodyVertexCount + x + z * (sides + 1);
		int32_t L_150 = __this->___bodyVertexCount_67;
		int32_t L_151 = V_24;
		int32_t L_152 = V_23;
		int32_t L_153;
		L_153 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_25 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_150, L_151)), ((int32_t)il2cpp_codegen_multiply(L_152, ((int32_t)il2cpp_codegen_add(L_153, 1))))));
		// int next = current + (sides + 1);
		int32_t L_154 = V_25;
		int32_t L_155;
		L_155 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_26 = ((int32_t)il2cpp_codegen_add(L_154, ((int32_t)il2cpp_codegen_add(L_155, 1))));
		// if (z == -1)
		int32_t L_156 = V_23;
		V_27 = (bool)((((int32_t)L_156) == ((int32_t)(-1)))? 1 : 0);
		bool L_157 = V_27;
		if (!L_157)
		{
			goto IL_041e;
		}
	}
	{
		// current = x;
		int32_t L_158 = V_24;
		V_25 = L_158;
		// next = bodyVertexCount + x;
		int32_t L_159 = __this->___bodyVertexCount_67;
		int32_t L_160 = V_24;
		V_26 = ((int32_t)il2cpp_codegen_add(L_159, L_160));
	}

IL_041e:
	{
		// _tsMesh.triangles[t++] = next + 1;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_161;
		L_161 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_161);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_162 = L_161->___triangles_8;
		int32_t L_163 = V_7;
		int32_t L_164 = L_163;
		V_7 = ((int32_t)il2cpp_codegen_add(L_164, 1));
		int32_t L_165 = V_26;
		NullCheck(L_162);
		(L_162)->SetAt(static_cast<il2cpp_array_size_t>(L_164), (int32_t)((int32_t)il2cpp_codegen_add(L_165, 1)));
		// _tsMesh.triangles[t++] = current + 1;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_166;
		L_166 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_166);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_167 = L_166->___triangles_8;
		int32_t L_168 = V_7;
		int32_t L_169 = L_168;
		V_7 = ((int32_t)il2cpp_codegen_add(L_169, 1));
		int32_t L_170 = V_25;
		NullCheck(L_167);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(L_169), (int32_t)((int32_t)il2cpp_codegen_add(L_170, 1)));
		// _tsMesh.triangles[t++] = current;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_171;
		L_171 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_171);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_172 = L_171->___triangles_8;
		int32_t L_173 = V_7;
		int32_t L_174 = L_173;
		V_7 = ((int32_t)il2cpp_codegen_add(L_174, 1));
		int32_t L_175 = V_25;
		NullCheck(L_172);
		(L_172)->SetAt(static_cast<il2cpp_array_size_t>(L_174), (int32_t)L_175);
		// _tsMesh.triangles[t++] = next;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_176;
		L_176 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_176);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_177 = L_176->___triangles_8;
		int32_t L_178 = V_7;
		int32_t L_179 = L_178;
		V_7 = ((int32_t)il2cpp_codegen_add(L_179, 1));
		int32_t L_180 = V_26;
		NullCheck(L_177);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(L_179), (int32_t)L_180);
		// _tsMesh.triangles[t++] = next + 1;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_181;
		L_181 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_181);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_182 = L_181->___triangles_8;
		int32_t L_183 = V_7;
		int32_t L_184 = L_183;
		V_7 = ((int32_t)il2cpp_codegen_add(L_184, 1));
		int32_t L_185 = V_26;
		NullCheck(L_182);
		(L_182)->SetAt(static_cast<il2cpp_array_size_t>(L_184), (int32_t)((int32_t)il2cpp_codegen_add(L_185, 1)));
		// _tsMesh.triangles[t++] = current;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_186;
		L_186 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_186);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_187 = L_186->___triangles_8;
		int32_t L_188 = V_7;
		int32_t L_189 = L_188;
		V_7 = ((int32_t)il2cpp_codegen_add(L_189, 1));
		int32_t L_190 = V_25;
		NullCheck(L_187);
		(L_187)->SetAt(static_cast<il2cpp_array_size_t>(L_189), (int32_t)L_190);
		// for (int x = 0; x < sides; x++)
		int32_t L_191 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_191, 1));
	}

IL_04a9:
	{
		// for (int x = 0; x < sides; x++)
		int32_t L_192 = V_24;
		int32_t L_193;
		L_193 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_28 = (bool)((((int32_t)L_192) < ((int32_t)L_193))? 1 : 0);
		bool L_194 = V_28;
		if (L_194)
		{
			goto IL_03dd;
		}
	}
	{
		// for (int z = -1; z < _roundCapLatitude - 1; z++)
		int32_t L_195 = V_23;
		V_23 = ((int32_t)il2cpp_codegen_add(L_195, 1));
	}

IL_04c3:
	{
		// for (int z = -1; z < _roundCapLatitude - 1; z++)
		int32_t L_196 = V_23;
		int32_t L_197 = __this->____roundCapLatitude_62;
		V_29 = (bool)((((int32_t)L_196) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_197, 1))))? 1 : 0);
		bool L_198 = V_29;
		if (L_198)
		{
			goto IL_03d4;
		}
	}
	{
		// GetSample(sampleCount - 1, ref evalResult);
		int32_t L_199;
		L_199 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_200 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		SplineUser_GetSample_m880DFE2CAAE9E9F4D85F68B13E9DE816186C3D8E(__this, ((int32_t)il2cpp_codegen_subtract(L_199, 1)), L_200, NULL);
		// center = evalResult.position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_201 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_202 = L_201->___position_0;
		V_0 = L_202;
		// resultSize = GetBaseSize(evalResult);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_203 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		float L_204;
		L_204 = MeshGenerator_GetBaseSize_m3AA0C08209F5E80A02EDE2F76C32D1249A47E5B1(__this, L_203, NULL);
		V_2 = L_204;
		// if (hasOffset)
		bool L_205 = V_1;
		V_30 = L_205;
		bool L_206 = V_30;
		if (!L_206)
		{
			goto IL_0577;
		}
	}
	{
		// center += (offset.x * resultSize) * evalResult.right + (offset.y * resultSize) * evalResult.up + (offset.z * resultSize) * evalResult.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_207 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_208;
		L_208 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_209 = L_208.___x_2;
		float L_210 = V_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_211 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_212;
		L_212 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(L_211, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_213;
		L_213 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_209, L_210)), L_212, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_214;
		L_214 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_215 = L_214.___y_3;
		float L_216 = V_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_217 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_218 = L_217->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_219;
		L_219 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_215, L_216)), L_218, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_220;
		L_220 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_213, L_219, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_221;
		L_221 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_222 = L_221.___z_4;
		float L_223 = V_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_224 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_225 = L_224->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_226;
		L_226 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(L_222, L_223)), L_225, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_227;
		L_227 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_220, L_226, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_228;
		L_228 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_207, L_227, NULL);
		V_0 = L_228;
	}

IL_0577:
	{
		// lookRot = Quaternion.LookRotation(evalResult.forward, evalResult.up);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_229 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_230 = L_229->___forward_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_231 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_232 = L_231->___up_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_233;
		L_233 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_230, L_232, NULL);
		V_3 = L_233;
		// switch (uvMode)
		int32_t L_234;
		L_234 = MeshGenerator_get_uvMode_m24EA499258A457119CF72093CC2C291E76FA2D53(__this, NULL);
		V_32 = L_234;
		int32_t L_235 = V_32;
		V_31 = L_235;
		int32_t L_236 = V_31;
		switch (L_236)
		{
			case 0:
			{
				goto IL_05b8;
			}
			case 1:
			{
				goto IL_05c8;
			}
			case 2:
			{
				goto IL_05eb;
			}
			case 3:
			{
				goto IL_05f4;
			}
		}
	}
	{
		goto IL_0615;
	}

IL_05b8:
	{
		// case UVMode.Clip: startV = (float)evalResult.percent; break;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_237 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_238 = L_237->___percent_5;
		V_4 = ((float)L_238);
		// case UVMode.Clip: startV = (float)evalResult.percent; break;
		goto IL_0615;
	}

IL_05c8:
	{
		// case UVMode.UniformClip: startV = spline.CalculateLength(0.0, evalResult.percent); break;
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_239;
		L_239 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_240 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_241 = L_240->___percent_5;
		NullCheck(L_239);
		float L_242;
		L_242 = SplineComputer_CalculateLength_mC2DDEDCBAFB19E6C72D52A75F08598CD8B42FC59(L_239, (0.0), L_241, NULL);
		V_4 = L_242;
		// case UVMode.UniformClip: startV = spline.CalculateLength(0.0, evalResult.percent); break;
		goto IL_0615;
	}

IL_05eb:
	{
		// case UVMode.Clamp: startV = 1f; break;
		V_4 = (1.0f);
		// case UVMode.Clamp: startV = 1f; break;
		goto IL_0615;
	}

IL_05f4:
	{
		// case UVMode.UniformClamp: startV = spline.CalculateLength(); break;
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_243;
		L_243 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		NullCheck(L_243);
		float L_244;
		L_244 = SplineComputer_CalculateLength_mC2DDEDCBAFB19E6C72D52A75F08598CD8B42FC59(L_243, (0.0), (1.0), NULL);
		V_4 = L_244;
		// case UVMode.UniformClamp: startV = spline.CalculateLength(); break;
		goto IL_0615;
	}

IL_0615:
	{
		// vertexColor = GetBaseColor(evalResult) * color;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_245 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_246;
		L_246 = MeshGenerator_GetBaseColor_mA53F6B90FFB54A8BA028FD12E109CB36B83F5723(__this, L_245, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_247;
		L_247 = MeshGenerator_get_color_m304FC1A34B1FE17F535528AFDCE7A1AC90258A33(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_248;
		L_248 = Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline(L_246, L_247, NULL);
		V_6 = L_248;
		// for (int lat = 1; lat < _roundCapLatitude+1; lat++)
		V_33 = 1;
		goto IL_0819;
	}

IL_0636:
	{
		// float latitudePercent = ((float)lat / _roundCapLatitude);
		int32_t L_249 = V_33;
		int32_t L_250 = __this->____roundCapLatitude_62;
		V_34 = ((float)(((float)L_249)/((float)L_250)));
		// float latAngle = 90f * latitudePercent;
		float L_251 = V_34;
		V_35 = ((float)il2cpp_codegen_multiply((90.0f), L_251));
		// for (int lon = 0; lon <= sides; lon++)
		V_36 = 0;
		goto IL_07fc;
	}

IL_0656:
	{
		// float anglePercent = (float)lon / sides;
		int32_t L_252 = V_36;
		int32_t L_253;
		L_253 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_37 = ((float)(((float)L_252)/((float)L_253)));
		// int index = bodyVertexCount + capVertexCount + lon + (lat - 1) * (sides + 1);
		int32_t L_254 = __this->___bodyVertexCount_67;
		int32_t L_255 = __this->___capVertexCount_69;
		int32_t L_256 = V_36;
		int32_t L_257 = V_33;
		int32_t L_258;
		L_258 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_38 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_254, L_255)), L_256)), ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_257, 1)), ((int32_t)il2cpp_codegen_add(L_258, 1))))));
		// Quaternion rot = Quaternion.AngleAxis(_revolve * anglePercent + rotation + 180f, Vector3.forward) * Quaternion.AngleAxis(latAngle, -Vector3.up);
		float L_259 = __this->____revolve_64;
		float L_260 = V_37;
		float L_261;
		L_261 = MeshGenerator_get_rotation_mF01F123A8637DB897577510B334D675B3B9C55CE(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_262;
		L_262 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_263;
		L_263 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_259, L_260)), L_261)), (180.0f))), L_262, NULL);
		float L_264 = V_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_265;
		L_265 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_266;
		L_266 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_265, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_267;
		L_267 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(L_264, L_266, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_268;
		L_268 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_263, L_267, NULL);
		V_39 = L_268;
		// _tsMesh.vertices[index] = center + lookRot * rot * Vector3.right * size * 0.5f * evalResult.size;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_269;
		L_269 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_269);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_270 = L_269->___vertices_0;
		int32_t L_271 = V_38;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_272 = V_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_273 = V_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_274 = V_39;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_275;
		L_275 = Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline(L_273, L_274, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_276;
		L_276 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_277;
		L_277 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_275, L_276, NULL);
		float L_278;
		L_278 = MeshGenerator_get_size_mC28EA87F5850994F45B8E6CF2301BB12E4A881C2(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_279;
		L_279 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_277, L_278, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_280;
		L_280 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_279, (0.5f), NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_281 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		float L_282 = L_281->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_283;
		L_283 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_280, L_282, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_284;
		L_284 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_272, L_283, NULL);
		NullCheck(L_270);
		(L_270)->SetAt(static_cast<il2cpp_array_size_t>(L_271), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_284);
		// _tsMesh.normals[index] = (_tsMesh.vertices[index] - center).normalized;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_285;
		L_285 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_285);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_286 = L_285->___normals_1;
		int32_t L_287 = V_38;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_288;
		L_288 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_288);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_289 = L_288->___vertices_0;
		int32_t L_290 = V_38;
		NullCheck(L_289);
		int32_t L_291 = L_290;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_292 = (L_289)->GetAt(static_cast<il2cpp_array_size_t>(L_291));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_293 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_294;
		L_294 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_292, L_293, NULL);
		V_20 = L_294;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_295;
		L_295 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_20), NULL);
		NullCheck(L_286);
		(L_286)->SetAt(static_cast<il2cpp_array_size_t>(L_287), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_295);
		// _tsMesh.colors[index] = vertexColor;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_296;
		L_296 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_296);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_297 = L_296->___colors_3;
		int32_t L_298 = V_38;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_299 = V_6;
		NullCheck(L_297);
		(L_297)->SetAt(static_cast<il2cpp_array_size_t>(L_298), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_299);
		// float baseV = startV + capLengthPercent * latitudePercent;
		float L_300 = V_4;
		float L_301 = V_5;
		float L_302 = V_34;
		V_40 = ((float)il2cpp_codegen_add(L_300, ((float)il2cpp_codegen_multiply(L_301, L_302))));
		// Vector2 baseUV = new Vector2(anglePercent * uvScale.x + baseV * _uvTwist, baseV * uvScale.y) - uvOffset;
		float L_303 = V_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_304;
		L_304 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_305 = L_304.___x_0;
		float L_306 = V_40;
		float L_307 = __this->____uvTwist_66;
		float L_308 = V_40;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_309;
		L_309 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_310 = L_309.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_311;
		memset((&L_311), 0, sizeof(L_311));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_311), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_303, L_305)), ((float)il2cpp_codegen_multiply(L_306, L_307)))), ((float)il2cpp_codegen_multiply(L_308, L_310)), /*hidden argument*/NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_312;
		L_312 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_313;
		L_313 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_311, L_312, NULL);
		V_41 = L_313;
		// _tsMesh.uv[index] = Vector2.one * 0.5f + (Vector2)(Quaternion.AngleAxis(uvRotation + 180f, Vector3.forward) * (Vector2.one * 0.5f - baseUV));
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_314;
		L_314 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_314);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_315 = L_314->___uv_4;
		int32_t L_316 = V_38;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_317;
		L_317 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_318;
		L_318 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_317, (0.5f), NULL);
		float L_319;
		L_319 = MeshGenerator_get_uvRotation_mC52520BC955782A962951A765CC06A86D89835D9(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_320;
		L_320 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_321;
		L_321 = Quaternion_AngleAxis_mF37022977B297E63AA70D69EA1C4C922FF22CC80(((float)il2cpp_codegen_add(L_319, (180.0f))), L_320, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_322;
		L_322 = Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline(NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_323;
		L_323 = Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline(L_322, (0.5f), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_324 = V_41;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_325;
		L_325 = Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline(L_323, L_324, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_326;
		L_326 = Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline(L_325, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_327;
		L_327 = Quaternion_op_Multiply_mE1EBA73F9173432B50F8F17CE8190C5A7986FB8C(L_321, L_326, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_328;
		L_328 = Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline(L_327, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_329;
		L_329 = Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline(L_318, L_328, NULL);
		NullCheck(L_315);
		(L_315)->SetAt(static_cast<il2cpp_array_size_t>(L_316), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_329);
		// for (int lon = 0; lon <= sides; lon++)
		int32_t L_330 = V_36;
		V_36 = ((int32_t)il2cpp_codegen_add(L_330, 1));
	}

IL_07fc:
	{
		// for (int lon = 0; lon <= sides; lon++)
		int32_t L_331 = V_36;
		int32_t L_332;
		L_332 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_42 = (bool)((((int32_t)((((int32_t)L_331) > ((int32_t)L_332))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_333 = V_42;
		if (L_333)
		{
			goto IL_0656;
		}
	}
	{
		// for (int lat = 1; lat < _roundCapLatitude+1; lat++)
		int32_t L_334 = V_33;
		V_33 = ((int32_t)il2cpp_codegen_add(L_334, 1));
	}

IL_0819:
	{
		// for (int lat = 1; lat < _roundCapLatitude+1; lat++)
		int32_t L_335 = V_33;
		int32_t L_336 = __this->____roundCapLatitude_62;
		V_43 = (bool)((((int32_t)L_335) < ((int32_t)((int32_t)il2cpp_codegen_add(L_336, 1))))? 1 : 0);
		bool L_337 = V_43;
		if (L_337)
		{
			goto IL_0636;
		}
	}
	{
		// for (int z = -1; z < _roundCapLatitude - 1; z++)
		V_44 = (-1);
		goto IL_0943;
	}

IL_0836:
	{
		// for (int x = 0; x < sides; x++)
		V_45 = 0;
		goto IL_0929;
	}

IL_083f:
	{
		// int current = bodyVertexCount + capVertexCount + x + z * (sides + 1);
		int32_t L_338 = __this->___bodyVertexCount_67;
		int32_t L_339 = __this->___capVertexCount_69;
		int32_t L_340 = V_45;
		int32_t L_341 = V_44;
		int32_t L_342;
		L_342 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_46 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_338, L_339)), L_340)), ((int32_t)il2cpp_codegen_multiply(L_341, ((int32_t)il2cpp_codegen_add(L_342, 1))))));
		// int next = current + (sides + 1);
		int32_t L_343 = V_46;
		int32_t L_344;
		L_344 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_47 = ((int32_t)il2cpp_codegen_add(L_343, ((int32_t)il2cpp_codegen_add(L_344, 1))));
		// if (z == -1)
		int32_t L_345 = V_44;
		V_48 = (bool)((((int32_t)L_345) == ((int32_t)(-1)))? 1 : 0);
		bool L_346 = V_48;
		if (!L_346)
		{
			goto IL_089e;
		}
	}
	{
		// current = bodyVertexCount - (_sides+1) + x;
		int32_t L_347 = __this->___bodyVertexCount_67;
		int32_t L_348 = __this->____sides_61;
		int32_t L_349 = V_45;
		V_46 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_347, ((int32_t)il2cpp_codegen_add(L_348, 1)))), L_349));
		// next = bodyVertexCount + capVertexCount + x;
		int32_t L_350 = __this->___bodyVertexCount_67;
		int32_t L_351 = __this->___capVertexCount_69;
		int32_t L_352 = V_45;
		V_47 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_350, L_351)), L_352));
	}

IL_089e:
	{
		// _tsMesh.triangles[t++] = current+1;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_353;
		L_353 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_353);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_354 = L_353->___triangles_8;
		int32_t L_355 = V_7;
		int32_t L_356 = L_355;
		V_7 = ((int32_t)il2cpp_codegen_add(L_356, 1));
		int32_t L_357 = V_46;
		NullCheck(L_354);
		(L_354)->SetAt(static_cast<il2cpp_array_size_t>(L_356), (int32_t)((int32_t)il2cpp_codegen_add(L_357, 1)));
		// _tsMesh.triangles[t++] = next + 1;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_358;
		L_358 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_358);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_359 = L_358->___triangles_8;
		int32_t L_360 = V_7;
		int32_t L_361 = L_360;
		V_7 = ((int32_t)il2cpp_codegen_add(L_361, 1));
		int32_t L_362 = V_47;
		NullCheck(L_359);
		(L_359)->SetAt(static_cast<il2cpp_array_size_t>(L_361), (int32_t)((int32_t)il2cpp_codegen_add(L_362, 1)));
		// _tsMesh.triangles[t++] = next;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_363;
		L_363 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_363);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_364 = L_363->___triangles_8;
		int32_t L_365 = V_7;
		int32_t L_366 = L_365;
		V_7 = ((int32_t)il2cpp_codegen_add(L_366, 1));
		int32_t L_367 = V_47;
		NullCheck(L_364);
		(L_364)->SetAt(static_cast<il2cpp_array_size_t>(L_366), (int32_t)L_367);
		// _tsMesh.triangles[t++] = next;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_368;
		L_368 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_368);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_369 = L_368->___triangles_8;
		int32_t L_370 = V_7;
		int32_t L_371 = L_370;
		V_7 = ((int32_t)il2cpp_codegen_add(L_371, 1));
		int32_t L_372 = V_47;
		NullCheck(L_369);
		(L_369)->SetAt(static_cast<il2cpp_array_size_t>(L_371), (int32_t)L_372);
		// _tsMesh.triangles[t++] = current;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_373;
		L_373 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_373);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_374 = L_373->___triangles_8;
		int32_t L_375 = V_7;
		int32_t L_376 = L_375;
		V_7 = ((int32_t)il2cpp_codegen_add(L_376, 1));
		int32_t L_377 = V_46;
		NullCheck(L_374);
		(L_374)->SetAt(static_cast<il2cpp_array_size_t>(L_376), (int32_t)L_377);
		// _tsMesh.triangles[t++] = current + 1;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_378;
		L_378 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_378);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_379 = L_378->___triangles_8;
		int32_t L_380 = V_7;
		int32_t L_381 = L_380;
		V_7 = ((int32_t)il2cpp_codegen_add(L_381, 1));
		int32_t L_382 = V_46;
		NullCheck(L_379);
		(L_379)->SetAt(static_cast<il2cpp_array_size_t>(L_381), (int32_t)((int32_t)il2cpp_codegen_add(L_382, 1)));
		// for (int x = 0; x < sides; x++)
		int32_t L_383 = V_45;
		V_45 = ((int32_t)il2cpp_codegen_add(L_383, 1));
	}

IL_0929:
	{
		// for (int x = 0; x < sides; x++)
		int32_t L_384 = V_45;
		int32_t L_385;
		L_385 = TubeGenerator_get_sides_m2A23B7B82AB71570B35044BDA1A4125046DDD277(__this, NULL);
		V_49 = (bool)((((int32_t)L_384) < ((int32_t)L_385))? 1 : 0);
		bool L_386 = V_49;
		if (L_386)
		{
			goto IL_083f;
		}
	}
	{
		// for (int z = -1; z < _roundCapLatitude - 1; z++)
		int32_t L_387 = V_44;
		V_44 = ((int32_t)il2cpp_codegen_add(L_387, 1));
	}

IL_0943:
	{
		// for (int z = -1; z < _roundCapLatitude - 1; z++)
		int32_t L_388 = V_44;
		int32_t L_389 = __this->____roundCapLatitude_62;
		V_50 = (bool)((((int32_t)L_388) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_389, 1))))? 1 : 0);
		bool L_390 = V_50;
		if (L_390)
		{
			goto IL_0836;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.TubeGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TubeGenerator__ctor_m47166C30428386E34414B7938D6B473CB58E18FD (TubeGenerator_t4E485B46B06DA51CFB07F5C1E751CC1010BCD2DE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int _sides = 12;
		__this->____sides_61 = ((int32_t)12);
		// private int _roundCapLatitude = 6;
		__this->____roundCapLatitude_62 = 6;
		// private CapMethod _capMode = CapMethod.None;
		__this->____capMode_63 = 0;
		// private float _revolve = 360f;
		__this->____revolve_64 = (360.0f);
		// private float _capUVScale = 1f;
		__this->____capUVScale_65 = (1.0f);
		// private float _uvTwist = 0f;
		__this->____uvTwist_66 = (0.0f);
		// private int bodyVertexCount = 0;
		__this->___bodyVertexCount_67 = 0;
		// private int bodyTrisCount = 0;
		__this->___bodyTrisCount_68 = 0;
		// private int capVertexCount = 0;
		__this->___capVertexCount_69 = 0;
		// private int capTrisCount = 0;
		__this->___capTrisCount_70 = 0;
		il2cpp_codegen_runtime_class_init_inline(MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var);
		MeshGenerator__ctor_m5D5CE5E6D63ED2D3AE7688622270EA42D9363ED6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Dreamteck.Splines.WaveformGenerator/Axis Dreamteck.Splines.WaveformGenerator::get_axis()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveformGenerator_get_axis_m99992B7759FFC7A4F7EB6846A6B5EC56710BC153 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _axis; }
		int32_t L_0 = __this->____axis_61;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _axis; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::set_axis(Dreamteck.Splines.WaveformGenerator/Axis)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_set_axis_m1E12E0C2F8B01295A7E30062509A911C233BFD8F (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != _axis)
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____axis_61;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _axis = value;
		int32_t L_3 = ___0_value;
		__this->____axis_61 = L_3;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Boolean Dreamteck.Splines.WaveformGenerator::get_symmetry()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WaveformGenerator_get_symmetry_m495D27590413A7FAA09555B0848965A15629F314 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _symmetry; }
		bool L_0 = __this->____symmetry_62;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _symmetry; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::set_symmetry(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_set_symmetry_m877092DB6988DED29BDC6625842E091A2C6546CD (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, bool ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != _symmetry)
		bool L_0 = ___0_value;
		bool L_1 = __this->____symmetry_62;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _symmetry = value;
		bool L_3 = ___0_value;
		__this->____symmetry_62 = L_3;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// Dreamteck.Splines.WaveformGenerator/UVWrapMode Dreamteck.Splines.WaveformGenerator::get_uvWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveformGenerator_get_uvWrapMode_m6D1B85EE5291080B34A5690BA98BBED9827402B2 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _uvWrapMode; }
		int32_t L_0 = __this->____uvWrapMode_63;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _uvWrapMode; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::set_uvWrapMode(Dreamteck.Splines.WaveformGenerator/UVWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_set_uvWrapMode_m18541532BFF3C4B8CBC7BBABFCF05ACA1CEFC759 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (value != _uvWrapMode)
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____uvWrapMode_63;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _uvWrapMode = value;
		int32_t L_3 = ___0_value;
		__this->____uvWrapMode_63 = L_3;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Int32 Dreamteck.Splines.WaveformGenerator::get_slices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t WaveformGenerator_get_slices_m0ABE4E2C14287E675CE8AA142004E66C7BF7279C (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _slices; }
		int32_t L_0 = __this->____slices_64;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _slices; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::set_slices(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_set_slices_mC1F91D6D075AC1F38A88FF825A49A965A33439E1 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (value != _slices)
		int32_t L_0 = ___0_value;
		int32_t L_1 = __this->____slices_64;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (value < 1) value = 1;
		int32_t L_3 = ___0_value;
		V_1 = (bool)((((int32_t)L_3) < ((int32_t)1))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		// if (value < 1) value = 1;
		___0_value = 1;
	}

IL_001d:
	{
		// _slices = value;
		int32_t L_5 = ___0_value;
		__this->____slices_64 = L_5;
		// Rebuild();
		VirtualActionInvoker0::Invoke(12 /* System.Void Dreamteck.Splines.SplineUser::Rebuild() */, __this);
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.String Dreamteck.Splines.WaveformGenerator::get_meshName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* WaveformGenerator_get_meshName_m6DDE767F908734EFC8A51BB7B6C2C8826488EDD3 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3FB52A6A499BD50CACB93900D84D32D55B8CD1D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string meshName => "Waveform";
		return _stringLiteralE3FB52A6A499BD50CACB93900D84D32D55B8CD1D;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::BuildMesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_BuildMesh_m6C2EF4B2ED71E02FC6AE3C994E061B50648B6066 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	{
		// base.BuildMesh();
		MeshGenerator_BuildMesh_m8593689F27E5E6B70A36B3E4058C9FA5E933A07A(__this, NULL);
		// Generate();
		WaveformGenerator_Generate_m837886E04F0C2CDC4CDAFEDA756FECED746E652B(__this, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::Build()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_Build_m4E7A800135A0575BBFA65198D92A9D3D5B332969 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	{
		// base.Build();
		MeshGenerator_Build_mC4CAB714A79CC0643DF21E991F4783D56CEAFAC7(__this, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::LateRun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_LateRun_m7049785F6CCFF10DE5F05A0D09A4FF9C4AFCD9C7 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	{
		// base.LateRun();
		MeshGenerator_LateRun_m64D45E55DFD5E097CDEB0B5158E431548B486AF7(__this, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::Generate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator_Generate_m837886E04F0C2CDC4CDAFEDA756FECED746E652B (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshUtility_t290F5EC43C76DF1C4B2D3C845F319E4C9E5D82BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	float V_10 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_13;
	memset((&V_13), 0, sizeof(V_13));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_15;
	memset((&V_15), 0, sizeof(V_15));
	float V_16 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_17;
	memset((&V_17), 0, sizeof(V_17));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_23;
	memset((&V_23), 0, sizeof(V_23));
	int32_t V_24 = 0;
	float V_25 = 0.0f;
	int32_t V_26 = 0;
	int32_t V_27 = 0;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t G_B10_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B18_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B17_0 = NULL;
	float G_B19_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B19_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B22_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B21_0 = NULL;
	float G_B23_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B23_1 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B26_0 = NULL;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B25_0 = NULL;
	float G_B27_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* G_B27_1 = NULL;
	{
		// int vertexCount = sampleCount * (_slices + 1);
		int32_t L_0;
		L_0 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		int32_t L_1 = __this->____slices_64;
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_add(L_1, 1))));
		// AllocateMesh(vertexCount, _slices * (sampleCount - 1) * 6);
		int32_t L_2 = V_0;
		int32_t L_3 = __this->____slices_64;
		int32_t L_4;
		L_4 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		VirtualActionInvoker2< int32_t, int32_t >::Invoke(26 /* System.Void Dreamteck.Splines.MeshGenerator::AllocateMesh(System.Int32,System.Int32) */, __this, L_2, ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_multiply(L_3, ((int32_t)il2cpp_codegen_subtract(L_4, 1)))), 6)));
		// int vertIndex = 0;
		V_1 = 0;
		// float avgTop = 0f;
		V_2 = (0.0f);
		// float totalLength = 0f;
		V_3 = (0.0f);
		// Vector3 computerPosition = spline.position;
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_5;
		L_5 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		NullCheck(L_5);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = SplineComputer_get_position_m446882D1914FB13D41458DE237BCF5B685A1F854(L_5, NULL);
		V_4 = L_6;
		// Vector3 normal = spline.TransformDirection(Vector3.right);
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_7;
		L_7 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = SplineComputer_TransformDirection_m1765BDC618FE42CD60FA7824994CDAE27E85EB2C(L_7, L_8, NULL);
		V_5 = L_9;
		// switch (_axis)
		int32_t L_10 = __this->____axis_61;
		V_8 = L_10;
		int32_t L_11 = V_8;
		V_7 = L_11;
		int32_t L_12 = V_7;
		if ((((int32_t)L_12) == ((int32_t)1)))
		{
			goto IL_0071;
		}
	}
	{
		goto IL_006a;
	}

IL_006a:
	{
		int32_t L_13 = V_7;
		if ((((int32_t)L_13) == ((int32_t)2)))
		{
			goto IL_0085;
		}
	}
	{
		goto IL_0099;
	}

IL_0071:
	{
		// case Axis.Y: normal = spline.TransformDirection(Vector3.up); break;
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_14;
		L_14 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = SplineComputer_TransformDirection_m1765BDC618FE42CD60FA7824994CDAE27E85EB2C(L_14, L_15, NULL);
		V_5 = L_16;
		// case Axis.Y: normal = spline.TransformDirection(Vector3.up); break;
		goto IL_0099;
	}

IL_0085:
	{
		// case Axis.Z: normal = spline.TransformDirection(Vector3.forward); break;
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_17;
		L_17 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		NullCheck(L_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = SplineComputer_TransformDirection_m1765BDC618FE42CD60FA7824994CDAE27E85EB2C(L_17, L_18, NULL);
		V_5 = L_19;
		// case Axis.Z: normal = spline.TransformDirection(Vector3.forward); break;
		goto IL_0099;
	}

IL_0099:
	{
		// Vector3 lastPosition = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_6 = L_20;
		// for (int i = 0; i < sampleCount; i++)
		V_9 = 0;
		goto IL_04b2;
	}

IL_00a8:
	{
		// GetSample(i, ref evalResult);
		int32_t L_21 = V_9;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_22 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		SplineUser_GetSample_m880DFE2CAAE9E9F4D85F68B13E9DE816186C3D8E(__this, L_21, L_22, NULL);
		// float resultSize = GetBaseSize(evalResult);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_23 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		float L_24;
		L_24 = MeshGenerator_GetBaseSize_m3AA0C08209F5E80A02EDE2F76C32D1249A47E5B1(__this, L_23, NULL);
		V_10 = L_24;
		// Vector3 samplePosition = evalResult.position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_25 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = L_25->___position_0;
		V_11 = L_26;
		// Vector3 localSamplePosition = spline.InverseTransformPoint(samplePosition);
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_27;
		L_27 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_11;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = SplineComputer_InverseTransformPoint_mECCF2D72C06C4113F8702CAE2D91A1A1ED8C5A9E(L_27, L_28, NULL);
		V_12 = L_29;
		// Vector3 bottomPosition = localSamplePosition;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_12;
		V_13 = L_30;
		// Vector3 sampleDirection = evalResult.forward;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_31 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = L_31->___forward_2;
		V_14 = L_32;
		// Vector3 sampleNormal = evalResult.up;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_33 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = L_33->___up_1;
		V_15 = L_34;
		// float heightPercent = 1f;
		V_16 = (1.0f);
		// if (_uvWrapMode == UVWrapMode.UniformX || _uvWrapMode == UVWrapMode.Uniform)
		int32_t L_35 = __this->____uvWrapMode_63;
		if ((((int32_t)L_35) == ((int32_t)1)))
		{
			goto IL_011b;
		}
	}
	{
		int32_t L_36 = __this->____uvWrapMode_63;
		G_B10_0 = ((((int32_t)L_36) == ((int32_t)3))? 1 : 0);
		goto IL_011c;
	}

IL_011b:
	{
		G_B10_0 = 1;
	}

IL_011c:
	{
		V_19 = (bool)G_B10_0;
		bool L_37 = V_19;
		if (!L_37)
		{
			goto IL_0146;
		}
	}
	{
		// if (i > 0)
		int32_t L_38 = V_9;
		V_20 = (bool)((((int32_t)L_38) > ((int32_t)0))? 1 : 0);
		bool L_39 = V_20;
		if (!L_39)
		{
			goto IL_0145;
		}
	}
	{
		// totalLength += Vector3.Distance(evalResult.position, lastPosition);
		float L_40 = V_3;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_41 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = L_41->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_6;
		float L_44;
		L_44 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_42, L_43, NULL);
		V_3 = ((float)il2cpp_codegen_add(L_40, L_44));
	}

IL_0145:
	{
	}

IL_0146:
	{
		// switch (_axis)
		int32_t L_45 = __this->____axis_61;
		V_22 = L_45;
		int32_t L_46 = V_22;
		V_21 = L_46;
		int32_t L_47 = V_21;
		switch (L_47)
		{
			case 0:
			{
				goto IL_016a;
			}
			case 1:
			{
				goto IL_01b1;
			}
			case 2:
			{
				goto IL_01f5;
			}
		}
	}
	{
		goto IL_0239;
	}

IL_016a:
	{
		// case Axis.X: bottomPosition.x = _symmetry ? -localSamplePosition.x : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.x); avgTop += localSamplePosition.x; break;
		bool L_48 = __this->____symmetry_62;
		G_B17_0 = (&V_13);
		if (L_48)
		{
			G_B18_0 = (&V_13);
			goto IL_017b;
		}
	}
	{
		G_B19_0 = (0.0f);
		G_B19_1 = G_B17_0;
		goto IL_0183;
	}

IL_017b:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_12;
		float L_50 = L_49.___x_2;
		G_B19_0 = ((-L_50));
		G_B19_1 = G_B18_0;
	}

IL_0183:
	{
		G_B19_1->___x_2 = G_B19_0;
		// case Axis.X: bottomPosition.x = _symmetry ? -localSamplePosition.x : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.x); avgTop += localSamplePosition.x; break;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51;
		L_51 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_52 = L_51.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = V_12;
		float L_54 = L_53.___x_2;
		float L_55;
		L_55 = fabsf(L_54);
		V_16 = ((float)il2cpp_codegen_multiply(L_52, L_55));
		// case Axis.X: bottomPosition.x = _symmetry ? -localSamplePosition.x : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.x); avgTop += localSamplePosition.x; break;
		float L_56 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_12;
		float L_58 = L_57.___x_2;
		V_2 = ((float)il2cpp_codegen_add(L_56, L_58));
		// case Axis.X: bottomPosition.x = _symmetry ? -localSamplePosition.x : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.x); avgTop += localSamplePosition.x; break;
		goto IL_0239;
	}

IL_01b1:
	{
		// case Axis.Y: bottomPosition.y = _symmetry ? -localSamplePosition.y : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.y); avgTop += localSamplePosition.y; break;
		bool L_59 = __this->____symmetry_62;
		G_B21_0 = (&V_13);
		if (L_59)
		{
			G_B22_0 = (&V_13);
			goto IL_01c2;
		}
	}
	{
		G_B23_0 = (0.0f);
		G_B23_1 = G_B21_0;
		goto IL_01ca;
	}

IL_01c2:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_12;
		float L_61 = L_60.___y_3;
		G_B23_0 = ((-L_61));
		G_B23_1 = G_B22_0;
	}

IL_01ca:
	{
		G_B23_1->___y_3 = G_B23_0;
		// case Axis.Y: bottomPosition.y = _symmetry ? -localSamplePosition.y : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.y); avgTop += localSamplePosition.y; break;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62;
		L_62 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_63 = L_62.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = V_12;
		float L_65 = L_64.___y_3;
		float L_66;
		L_66 = fabsf(L_65);
		V_16 = ((float)il2cpp_codegen_multiply(L_63, L_66));
		// case Axis.Y: bottomPosition.y = _symmetry ? -localSamplePosition.y : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.y); avgTop += localSamplePosition.y; break;
		float L_67 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = V_12;
		float L_69 = L_68.___y_3;
		V_2 = ((float)il2cpp_codegen_add(L_67, L_69));
		// case Axis.Y: bottomPosition.y = _symmetry ? -localSamplePosition.y : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.y); avgTop += localSamplePosition.y; break;
		goto IL_0239;
	}

IL_01f5:
	{
		// case Axis.Z: bottomPosition.z = _symmetry ? -localSamplePosition.z : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.z); avgTop += localSamplePosition.z; break;
		bool L_70 = __this->____symmetry_62;
		G_B25_0 = (&V_13);
		if (L_70)
		{
			G_B26_0 = (&V_13);
			goto IL_0206;
		}
	}
	{
		G_B27_0 = (0.0f);
		G_B27_1 = G_B25_0;
		goto IL_020e;
	}

IL_0206:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = V_12;
		float L_72 = L_71.___z_4;
		G_B27_0 = ((-L_72));
		G_B27_1 = G_B26_0;
	}

IL_020e:
	{
		G_B27_1->___z_4 = G_B27_0;
		// case Axis.Z: bottomPosition.z = _symmetry ? -localSamplePosition.z : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.z); avgTop += localSamplePosition.z; break;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_73;
		L_73 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_74 = L_73.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_12;
		float L_76 = L_75.___z_4;
		float L_77;
		L_77 = fabsf(L_76);
		V_16 = ((float)il2cpp_codegen_multiply(L_74, L_77));
		// case Axis.Z: bottomPosition.z = _symmetry ? -localSamplePosition.z : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.z); avgTop += localSamplePosition.z; break;
		float L_78 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = V_12;
		float L_80 = L_79.___z_4;
		V_2 = ((float)il2cpp_codegen_add(L_78, L_80));
		// case Axis.Z: bottomPosition.z = _symmetry ? -localSamplePosition.z : 0f;  heightPercent = uvScale.y * Mathf.Abs(localSamplePosition.z); avgTop += localSamplePosition.z; break;
		goto IL_0239;
	}

IL_0239:
	{
		// bottomPosition = spline.TransformPoint(bottomPosition);
		SplineComputer_tD91FD662973937372715D22E05E6CD8F7D90CC28* L_81;
		L_81 = SplineUser_get_spline_mFCDA5843B398053A190E9A6B6971331A19033E15(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_13;
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = SplineComputer_TransformPoint_mA8122BC79A397AE6179382B56C731ED460816171(L_81, L_82, NULL);
		V_13 = L_83;
		// Vector3 right = Vector3.Cross(normal, sampleDirection).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_86;
		L_86 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_84, L_85, NULL);
		V_23 = L_86;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87;
		L_87 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_23), NULL);
		V_17 = L_87;
		// Vector3 offsetRight = Vector3.Cross(sampleNormal, sampleDirection);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = V_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = V_14;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_88, L_89, NULL);
		V_18 = L_90;
		// for (int n = 0; n < _slices + 1; n++)
		V_24 = 0;
		goto IL_0489;
	}

IL_026f:
	{
		// float slicePercent = ((float)n / _slices);
		int32_t L_91 = V_24;
		int32_t L_92 = __this->____slices_64;
		V_25 = ((float)(((float)L_91)/((float)L_92)));
		// _tsMesh.vertices[vertIndex] = Vector3.Lerp(bottomPosition, samplePosition, slicePercent) + normal * (offset.y * resultSize) + offsetRight * (offset.x * resultSize);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_93;
		L_93 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_93);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_94 = L_93->___vertices_0;
		int32_t L_95 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96 = V_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97 = V_11;
		float L_98 = V_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_96, L_97, L_98, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_101;
		L_101 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_102 = L_101.___y_3;
		float L_103 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_104;
		L_104 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_100, ((float)il2cpp_codegen_multiply(L_102, L_103)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105;
		L_105 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_99, L_104, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = MeshGenerator_get_offset_m05B30B6A00C843F0C0D2D97FE5C13544BE501436(__this, NULL);
		float L_108 = L_107.___x_2;
		float L_109 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110;
		L_110 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_106, ((float)il2cpp_codegen_multiply(L_108, L_109)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111;
		L_111 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_105, L_110, NULL);
		NullCheck(L_94);
		(L_94)->SetAt(static_cast<il2cpp_array_size_t>(L_95), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_111);
		// _tsMesh.normals[vertIndex] = right;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_112;
		L_112 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_112);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_113 = L_112->___normals_1;
		int32_t L_114 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115 = V_17;
		NullCheck(L_113);
		(L_113)->SetAt(static_cast<il2cpp_array_size_t>(L_114), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_115);
		// switch (_uvWrapMode)
		int32_t L_116 = __this->____uvWrapMode_63;
		V_27 = L_116;
		int32_t L_117 = V_27;
		V_26 = L_117;
		int32_t L_118 = V_26;
		switch (L_118)
		{
			case 0:
			{
				goto IL_0308;
			}
			case 1:
			{
				goto IL_0361;
			}
			case 2:
			{
				goto IL_03af;
			}
			case 3:
			{
				goto IL_0408;
			}
		}
	}
	{
		goto IL_0456;
	}

IL_0308:
	{
		// case UVWrapMode.Clamp: _tsMesh.uv[vertIndex] = new Vector2((float)evalResult.percent * uvScale.x + uvOffset.x, slicePercent * uvScale.y + uvOffset.y); break;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_119;
		L_119 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_119);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_120 = L_119->___uv_4;
		int32_t L_121 = V_1;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_122 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_123 = L_122->___percent_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_124;
		L_124 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_125 = L_124.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_126;
		L_126 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_127 = L_126.___x_0;
		float L_128 = V_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_129;
		L_129 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_130 = L_129.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_131;
		L_131 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_132 = L_131.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_133;
		memset((&L_133), 0, sizeof(L_133));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_133), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_123), L_125)), L_127)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_128, L_130)), L_132)), /*hidden argument*/NULL);
		NullCheck(L_120);
		(L_120)->SetAt(static_cast<il2cpp_array_size_t>(L_121), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_133);
		// case UVWrapMode.Clamp: _tsMesh.uv[vertIndex] = new Vector2((float)evalResult.percent * uvScale.x + uvOffset.x, slicePercent * uvScale.y + uvOffset.y); break;
		goto IL_0456;
	}

IL_0361:
	{
		// case UVWrapMode.UniformX: _tsMesh.uv[vertIndex] = new Vector2(totalLength * uvScale.x + uvOffset.x, slicePercent * uvScale.y + uvOffset.y); break;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_134;
		L_134 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_134);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_135 = L_134->___uv_4;
		int32_t L_136 = V_1;
		float L_137 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_138;
		L_138 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_139 = L_138.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_140;
		L_140 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_141 = L_140.___x_0;
		float L_142 = V_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_143;
		L_143 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_144 = L_143.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_145;
		L_145 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_146 = L_145.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_147), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_137, L_139)), L_141)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_142, L_144)), L_146)), /*hidden argument*/NULL);
		NullCheck(L_135);
		(L_135)->SetAt(static_cast<il2cpp_array_size_t>(L_136), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_147);
		// case UVWrapMode.UniformX: _tsMesh.uv[vertIndex] = new Vector2(totalLength * uvScale.x + uvOffset.x, slicePercent * uvScale.y + uvOffset.y); break;
		goto IL_0456;
	}

IL_03af:
	{
		// case UVWrapMode.UniformY: _tsMesh.uv[vertIndex] = new Vector2((float)evalResult.percent * uvScale.x + uvOffset.x, heightPercent * slicePercent * uvScale.y + uvOffset.y); break;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_148;
		L_148 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_148);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_149 = L_148->___uv_4;
		int32_t L_150 = V_1;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_151 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		double L_152 = L_151->___percent_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_153;
		L_153 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_154 = L_153.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_155;
		L_155 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_156 = L_155.___x_0;
		float L_157 = V_16;
		float L_158 = V_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_159;
		L_159 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_160 = L_159.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_161;
		L_161 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_162 = L_161.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_163;
		memset((&L_163), 0, sizeof(L_163));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_163), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_152), L_154)), L_156)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_157, L_158)), L_160)), L_162)), /*hidden argument*/NULL);
		NullCheck(L_149);
		(L_149)->SetAt(static_cast<il2cpp_array_size_t>(L_150), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_163);
		// case UVWrapMode.UniformY: _tsMesh.uv[vertIndex] = new Vector2((float)evalResult.percent * uvScale.x + uvOffset.x, heightPercent * slicePercent * uvScale.y + uvOffset.y); break;
		goto IL_0456;
	}

IL_0408:
	{
		// case UVWrapMode.Uniform: _tsMesh.uv[vertIndex] = new Vector2(totalLength * uvScale.x + uvOffset.x, heightPercent * slicePercent * uvScale.y + uvOffset.y); break;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_164;
		L_164 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_164);
		Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* L_165 = L_164->___uv_4;
		int32_t L_166 = V_1;
		float L_167 = V_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_168;
		L_168 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_169 = L_168.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_170;
		L_170 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_171 = L_170.___x_0;
		float L_172 = V_16;
		float L_173 = V_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_174;
		L_174 = MeshGenerator_get_uvScale_m096A30E796CA2F89EADB0DA7A9DA085674DF5B48(__this, NULL);
		float L_175 = L_174.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_176;
		L_176 = MeshGenerator_get_uvOffset_m97DFF76D2B0A2F4B426D5E2AB9CF8630D315154D(__this, NULL);
		float L_177 = L_176.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_178;
		memset((&L_178), 0, sizeof(L_178));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_178), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_167, L_169)), L_171)), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_172, L_173)), L_175)), L_177)), /*hidden argument*/NULL);
		NullCheck(L_165);
		(L_165)->SetAt(static_cast<il2cpp_array_size_t>(L_166), (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7)L_178);
		// case UVWrapMode.Uniform: _tsMesh.uv[vertIndex] = new Vector2(totalLength * uvScale.x + uvOffset.x, heightPercent * slicePercent * uvScale.y + uvOffset.y); break;
		goto IL_0456;
	}

IL_0456:
	{
		// _tsMesh.colors[vertIndex] = GetBaseColor(evalResult) * color;
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_179;
		L_179 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_179);
		ColorU5BU5D_t612261CF293F6FFC3D80AB52259FF0DC2B2CC389* L_180 = L_179->___colors_3;
		int32_t L_181 = V_1;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_182 = ((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_183;
		L_183 = MeshGenerator_GetBaseColor_mA53F6B90FFB54A8BA028FD12E109CB36B83F5723(__this, L_182, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_184;
		L_184 = MeshGenerator_get_color_m304FC1A34B1FE17F535528AFDCE7A1AC90258A33(__this, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_185;
		L_185 = Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline(L_183, L_184, NULL);
		NullCheck(L_180);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(L_181), (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F)L_185);
		// vertIndex++;
		int32_t L_186 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_186, 1));
		// for (int n = 0; n < _slices + 1; n++)
		int32_t L_187 = V_24;
		V_24 = ((int32_t)il2cpp_codegen_add(L_187, 1));
	}

IL_0489:
	{
		// for (int n = 0; n < _slices + 1; n++)
		int32_t L_188 = V_24;
		int32_t L_189 = __this->____slices_64;
		V_28 = (bool)((((int32_t)L_188) < ((int32_t)((int32_t)il2cpp_codegen_add(L_189, 1))))? 1 : 0);
		bool L_190 = V_28;
		if (L_190)
		{
			goto IL_026f;
		}
	}
	{
		// lastPosition = evalResult.position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_191 = (&((SplineUser_tEDB25CC79FE113D73D8649FABA2908AAEEB6C3DE*)__this)->___evalResult_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_192 = L_191->___position_0;
		V_6 = L_192;
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_193 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_193, 1));
	}

IL_04b2:
	{
		// for (int i = 0; i < sampleCount; i++)
		int32_t L_194 = V_9;
		int32_t L_195;
		L_195 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		V_29 = (bool)((((int32_t)L_194) < ((int32_t)L_195))? 1 : 0);
		bool L_196 = V_29;
		if (L_196)
		{
			goto IL_00a8;
		}
	}
	{
		// if (sampleCount > 0) avgTop /= sampleCount;
		int32_t L_197;
		L_197 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		V_30 = (bool)((((int32_t)L_197) > ((int32_t)0))? 1 : 0);
		bool L_198 = V_30;
		if (!L_198)
		{
			goto IL_04de;
		}
	}
	{
		// if (sampleCount > 0) avgTop /= sampleCount;
		float L_199 = V_2;
		int32_t L_200;
		L_200 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		V_2 = ((float)(L_199/((float)L_200)));
	}

IL_04de:
	{
		// MeshUtility.GeneratePlaneTriangles(ref _tsMesh.triangles, _slices, sampleCount, avgTop < 0f);
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_201;
		L_201 = MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline(__this, NULL);
		NullCheck(L_201);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C** L_202 = (&L_201->___triangles_8);
		int32_t L_203 = __this->____slices_64;
		int32_t L_204;
		L_204 = SplineUser_get_sampleCount_m72EB98E357EB6A53B94626C14D2F0CAF87997AFC(__this, NULL);
		float L_205 = V_2;
		il2cpp_codegen_runtime_class_init_inline(MeshUtility_t290F5EC43C76DF1C4B2D3C845F319E4C9E5D82BA_il2cpp_TypeInfo_var);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_206;
		L_206 = MeshUtility_GeneratePlaneTriangles_m7330D4B70527489798A2A095F6152DBCB8FADC3F(L_202, L_203, L_204, (bool)((((float)L_205) < ((float)(0.0f)))? 1 : 0), 0, 0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.WaveformGenerator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaveformGenerator__ctor_mCD8D89EE95D36219000131E13A341D13CD3A9857 (WaveformGenerator_t88067D558E128EBDBE4C561A4F312243DBE055B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private Axis _axis = Axis.Y;
		__this->____axis_61 = 1;
		// private bool _symmetry = false;
		__this->____symmetry_62 = (bool)0;
		// private UVWrapMode _uvWrapMode = UVWrapMode.Clamp;
		__this->____uvWrapMode_63 = 0;
		// private int _slices = 1;
		__this->____slices_64 = 1;
		il2cpp_codegen_runtime_class_init_inline(MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E_il2cpp_TypeInfo_var);
		MeshGenerator__ctor_m5D5CE5E6D63ED2D3AE7688622270EA42D9363ED6(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Dreamteck.Splines.SampleCollection::get_length()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SampleCollection_get_length_mB42A3EAF2CB5B8F16CBF5D91048A6DC72A17BD3B (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return samples.Length; }
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_0 = __this->___samples_0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000c;
	}

IL_000c:
	{
		// get { return samples.Length; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Dreamteck.Splines.SampleCollection::get_hasSamples()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return samples.Length > 0; }
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_0 = __this->___samples_0;
		NullCheck(L_0);
		V_0 = (bool)((!(((uint32_t)(((RuntimeArray*)L_0)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// get { return samples.Length > 0; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.SampleCollection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection__ctor_m2B54EDA6616B6E2BE005422C239068BAC475EAC3 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SplineSample[] samples = new SplineSample[0];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_0 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___samples_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___samples_0), (void*)L_0);
		// public int[] optimizedIndices = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___optimizedIndices_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___optimizedIndices_1), (void*)L_1);
		// public SplineComputer.SampleMode sampleMode = SplineComputer.SampleMode.Default;
		__this->___sampleMode_2 = 0;
		// private SplineSample _workSample = new SplineSample();
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_2 = (&__this->____workSample_3);
		il2cpp_codegen_initobj(L_2, sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// public SampleCollection()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SampleCollection::.ctor(Dreamteck.Splines.SampleCollection)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection__ctor_mD9FB437915A124115B17756B04FF2C3378D88DC1 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* ___0_input, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SplineSample[] samples = new SplineSample[0];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_0 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___samples_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___samples_0), (void*)L_0);
		// public int[] optimizedIndices = new int[0];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_1 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___optimizedIndices_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___optimizedIndices_1), (void*)L_1);
		// public SplineComputer.SampleMode sampleMode = SplineComputer.SampleMode.Default;
		__this->___sampleMode_2 = 0;
		// private SplineSample _workSample = new SplineSample();
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_2 = (&__this->____workSample_3);
		il2cpp_codegen_initobj(L_2, sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// public SampleCollection(SampleCollection input)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// samples = input.samples;
		SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* L_3 = ___0_input;
		NullCheck(L_3);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_4 = L_3->___samples_0;
		__this->___samples_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___samples_0), (void*)L_4);
		// optimizedIndices = input.optimizedIndices;
		SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* L_5 = ___0_input;
		NullCheck(L_5);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_6 = L_5->___optimizedIndices_1;
		__this->___optimizedIndices_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___optimizedIndices_1), (void*)L_6);
		// sampleMode = input.sampleMode;
		SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* L_7 = ___0_input;
		NullCheck(L_7);
		int32_t L_8 = L_7->___sampleMode_2;
		__this->___sampleMode_2 = L_8;
		// }
		return;
	}
}
// System.Int32 Dreamteck.Splines.SampleCollection::GetClippedSampleCount(System.Double,System.Double,System.Int32&,System.Int32&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SampleCollection_GetClippedSampleCount_m2D15178087169063141251347714E028A86EC990 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_clipFrom, double ___1_clipTo, int32_t* ___2_startIndex, int32_t* ___3_endIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	double V_2 = 0.0;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t G_B5_0 = 0;
	{
		// startIndex = endIndex = 0;
		int32_t* L_0 = ___2_startIndex;
		int32_t* L_1 = ___3_endIndex;
		int32_t L_2 = 0;
		V_0 = L_2;
		*((int32_t*)L_1) = (int32_t)L_2;
		int32_t L_3 = V_0;
		*((int32_t*)L_0) = (int32_t)L_3;
		// if (sampleMode == SplineComputer.SampleMode.Default)
		int32_t L_4 = __this->___sampleMode_2;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0044;
		}
	}
	{
		// startIndex = DMath.FloorInt((samples.Length - 1) * clipFrom);
		int32_t* L_6 = ___2_startIndex;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_7 = __this->___samples_0;
		NullCheck(L_7);
		double L_8 = ___0_clipFrom;
		int32_t L_9;
		L_9 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_7)->max_length)), 1))), L_8)), NULL);
		*((int32_t*)L_6) = (int32_t)L_9;
		// endIndex = DMath.CeilInt((samples.Length - 1) * clipTo);
		int32_t* L_10 = ___3_endIndex;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_11 = __this->___samples_0;
		NullCheck(L_11);
		double L_12 = ___1_clipTo;
		int32_t L_13;
		L_13 = DMath_CeilInt_m30A0442D9F9301FF6EE6213F2983A9725A7FDEFC(((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), 1))), L_12)), NULL);
		*((int32_t*)L_10) = (int32_t)L_13;
		goto IL_009d;
	}

IL_0044:
	{
		// double clipFromLerp = 0.0, clipToLerp = 0.0;
		V_2 = (0.0);
		// double clipFromLerp = 0.0, clipToLerp = 0.0;
		V_3 = (0.0);
		// GetSamplingValues(clipFrom, out startIndex, out clipFromLerp);
		double L_14 = ___0_clipFrom;
		int32_t* L_15 = ___2_startIndex;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_14, L_15, (&V_2), NULL);
		// GetSamplingValues(clipTo, out endIndex, out clipToLerp);
		double L_16 = ___1_clipTo;
		int32_t* L_17 = ___3_endIndex;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_16, L_17, (&V_3), NULL);
		// if (clipToLerp > 0.0 && endIndex < samples.Length - 1) endIndex++;
		double L_18 = V_3;
		if ((!(((double)L_18) > ((double)(0.0)))))
		{
			goto IL_008d;
		}
	}
	{
		int32_t* L_19 = ___3_endIndex;
		int32_t L_20 = *((int32_t*)L_19);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_21 = __this->___samples_0;
		NullCheck(L_21);
		G_B5_0 = ((((int32_t)L_20) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_21)->max_length)), 1))))? 1 : 0);
		goto IL_008e;
	}

IL_008d:
	{
		G_B5_0 = 0;
	}

IL_008e:
	{
		V_4 = (bool)G_B5_0;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_009c;
		}
	}
	{
		// if (clipToLerp > 0.0 && endIndex < samples.Length - 1) endIndex++;
		int32_t* L_23 = ___3_endIndex;
		int32_t* L_24 = ___3_endIndex;
		int32_t L_25 = *((int32_t*)L_24);
		*((int32_t*)L_23) = (int32_t)((int32_t)il2cpp_codegen_add(L_25, 1));
	}

IL_009c:
	{
	}

IL_009d:
	{
		// if (clipTo < clipFrom) //Handle looping segments
		double L_26 = ___1_clipTo;
		double L_27 = ___0_clipFrom;
		V_5 = (bool)((((double)L_26) < ((double)L_27))? 1 : 0);
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_00c5;
		}
	}
	{
		// int toSamples = endIndex + 1;
		int32_t* L_29 = ___3_endIndex;
		int32_t L_30 = *((int32_t*)L_29);
		V_6 = ((int32_t)il2cpp_codegen_add(L_30, 1));
		// int fromSamples = samples.Length - startIndex;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_31 = __this->___samples_0;
		NullCheck(L_31);
		int32_t* L_32 = ___2_startIndex;
		int32_t L_33 = *((int32_t*)L_32);
		V_7 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_31)->max_length)), L_33));
		// return toSamples + fromSamples;
		int32_t L_34 = V_6;
		int32_t L_35 = V_7;
		V_8 = ((int32_t)il2cpp_codegen_add(L_34, L_35));
		goto IL_00d1;
	}

IL_00c5:
	{
		// return endIndex - startIndex + 1;
		int32_t* L_36 = ___3_endIndex;
		int32_t L_37 = *((int32_t*)L_36);
		int32_t* L_38 = ___2_startIndex;
		int32_t L_39 = *((int32_t*)L_38);
		V_8 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_37, L_39)), 1));
		goto IL_00d1;
	}

IL_00d1:
	{
		// }
		int32_t L_40 = V_8;
		return L_40;
	}
}
// System.Void Dreamteck.Splines.SampleCollection::GetSamplingValues(System.Double,System.Int32&,System.Double&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, int32_t* ___1_sampleIndex, double* ___2_lerp, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	bool V_4 = false;
	double V_5 = 0.0;
	double V_6 = 0.0;
	double V_7 = 0.0;
	bool V_8 = false;
	{
		// lerp = 0.0;
		double* L_0 = ___2_lerp;
		*((double*)L_0) = (double)(0.0);
		// if (sampleMode == SplineComputer.SampleMode.Optimized)
		int32_t L_1 = __this->___sampleMode_2;
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)2))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00d5;
		}
	}
	{
		// double indexValue = percent * (optimizedIndices.Length - 1);
		double L_3 = ___0_percent;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = __this->___optimizedIndices_1;
		NullCheck(L_4);
		V_1 = ((double)il2cpp_codegen_multiply(L_3, ((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1)))));
		// int index = DMath.FloorInt(indexValue);
		double L_5 = V_1;
		int32_t L_6;
		L_6 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_5, NULL);
		V_2 = L_6;
		// sampleIndex = optimizedIndices[index];
		int32_t* L_7 = ___1_sampleIndex;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_8 = __this->___optimizedIndices_1;
		int32_t L_9 = V_2;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		int32_t L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		*((int32_t*)L_7) = (int32_t)L_11;
		// double lerpPercent = 0.0;
		V_3 = (0.0);
		// if (index < optimizedIndices.Length - 1)
		int32_t L_12 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_13 = __this->___optimizedIndices_1;
		NullCheck(L_13);
		V_4 = (bool)((((int32_t)L_12) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_13)->max_length)), 1))))? 1 : 0);
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_008f;
		}
	}
	{
		// double indexLerp = indexValue - index;
		double L_15 = V_1;
		int32_t L_16 = V_2;
		V_5 = ((double)il2cpp_codegen_subtract(L_15, ((double)L_16)));
		// double sampleIndexPercent = (double)index / (optimizedIndices.Length - 1);
		int32_t L_17 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___optimizedIndices_1;
		NullCheck(L_18);
		V_6 = ((double)(((double)L_17)/((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_18)->max_length)), 1)))));
		// double nextSampleIndexPercent = (double)(index + 1) / (optimizedIndices.Length - 1);
		int32_t L_19 = V_2;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_20 = __this->___optimizedIndices_1;
		NullCheck(L_20);
		V_7 = ((double)(((double)((int32_t)il2cpp_codegen_add(L_19, 1)))/((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_20)->max_length)), 1)))));
		// lerpPercent = DMath.Lerp(sampleIndexPercent, nextSampleIndexPercent, indexLerp);
		double L_21 = V_6;
		double L_22 = V_7;
		double L_23 = V_5;
		double L_24;
		L_24 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_21, L_22, L_23, NULL);
		V_3 = L_24;
	}

IL_008f:
	{
		// if (sampleIndex < samples.Length - 1)
		int32_t* L_25 = ___1_sampleIndex;
		int32_t L_26 = *((int32_t*)L_25);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_27 = __this->___samples_0;
		NullCheck(L_27);
		V_8 = (bool)((((int32_t)L_26) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_27)->max_length)), 1))))? 1 : 0);
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00d3;
		}
	}
	{
		// lerp = DMath.InverseLerp(samples[sampleIndex].percent, samples[sampleIndex + 1].percent, lerpPercent);
		double* L_29 = ___2_lerp;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_30 = __this->___samples_0;
		int32_t* L_31 = ___1_sampleIndex;
		int32_t L_32 = *((int32_t*)L_31);
		NullCheck(L_30);
		double L_33 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_32)))->___percent_5;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_34 = __this->___samples_0;
		int32_t* L_35 = ___1_sampleIndex;
		int32_t L_36 = *((int32_t*)L_35);
		NullCheck(L_34);
		double L_37 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_36, 1)))))->___percent_5;
		double L_38 = V_3;
		double L_39;
		L_39 = DMath_InverseLerp_m7311A58A9A929618111D117E90594D116B356B9D(L_33, L_37, L_38, NULL);
		*((double*)L_29) = (double)L_39;
	}

IL_00d3:
	{
		// return;
		goto IL_00fc;
	}

IL_00d5:
	{
		// sampleIndex = DMath.FloorInt(percent * (samples.Length - 1));
		int32_t* L_40 = ___1_sampleIndex;
		double L_41 = ___0_percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_42 = __this->___samples_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(((double)il2cpp_codegen_multiply(L_41, ((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_42)->max_length)), 1))))), NULL);
		*((int32_t*)L_40) = (int32_t)L_43;
		// lerp = (samples.Length - 1) * percent - sampleIndex;
		double* L_44 = ___2_lerp;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_45 = __this->___samples_0;
		NullCheck(L_45);
		double L_46 = ___0_percent;
		int32_t* L_47 = ___1_sampleIndex;
		int32_t L_48 = *((int32_t*)L_47);
		*((double*)L_44) = (double)((double)il2cpp_codegen_subtract(((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_45)->max_length)), 1))), L_46)), ((double)L_48)));
	}

IL_00fc:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 Dreamteck.Splines.SampleCollection::EvaluatePosition(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SampleCollection_EvaluatePosition_m5F4239473DA1391082355974BCA8D5FE36981595 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	bool V_2 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// if (!hasSamples) return Vector3.zero;
		bool L_0;
		L_0 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// if (!hasSamples) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_3 = L_2;
		goto IL_0077;
	}

IL_0016:
	{
		// GetSamplingValues(percent, out index, out lerp);
		double L_3 = ___0_percent;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_3, (&V_0), (&V_1), NULL);
		// if (lerp > 0.0)
		double L_4 = V_1;
		V_4 = (bool)((((double)L_4) > ((double)(0.0)))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0063;
		}
	}
	{
		// return Vector3.Lerp(samples[index].position, samples[index + 1].position, (float)lerp);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_6 = __this->___samples_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_9 = __this->___samples_0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_10, 1)))))->___position_0;
		double L_12 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_11, ((float)L_12), NULL);
		V_3 = L_13;
		goto IL_0077;
	}

IL_0063:
	{
		// return samples[index].position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_14 = __this->___samples_0;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)))->___position_0;
		V_3 = L_16;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_3;
		return L_17;
	}
}
// Dreamteck.Splines.SplineSample Dreamteck.Splines.SampleCollection::Evaluate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 SampleCollection_Evaluate_mBAC7EF0F05390FAAC84F8BA6AAD7C18B59521E82 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, const RuntimeMethod* method) 
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// SplineSample result = new SplineSample();
		il2cpp_codegen_initobj((&V_0), sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// Evaluate(percent, ref result);
		double L_0 = ___0_percent;
		SampleCollection_Evaluate_mAAC912C0D30624A4CE054FDD16943264D579BD20(__this, L_0, (&V_0), NULL);
		// return result;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_1 = V_0;
		V_1 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_2 = V_1;
		return L_2;
	}
}
// System.Void Dreamteck.Splines.SampleCollection::Evaluate(System.Double,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection_Evaluate_mAAC912C0D30624A4CE054FDD16943264D579BD20 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_percent, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_result, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	double V_1 = 0.0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (!hasSamples)
		bool L_0;
		L_0 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_2 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		// result = new SplineSample();
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_2 = ___1_result;
		il2cpp_codegen_initobj(L_2, sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// return;
		goto IL_006f;
	}

IL_0018:
	{
		// GetSamplingValues(percent, out index, out lerp);
		double L_3 = ___0_percent;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_3, (&V_0), (&V_1), NULL);
		// if (lerp > 0.0)
		double L_4 = V_1;
		V_3 = (bool)((((double)L_4) > ((double)(0.0)))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_005a;
		}
	}
	{
		// SplineSample.Lerp(ref samples[index], ref samples[index + 1], lerp, ref result);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_6 = __this->___samples_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_8 = __this->___samples_0;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		double L_10 = V_1;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_11 = ___1_result;
		SplineSample_Lerp_mDC2046D9C41B063337F15327E3B8FF688E8C4352(((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_9, 1))))), L_10, L_11, NULL);
		goto IL_006f;
	}

IL_005a:
	{
		// result.FastCopy(ref samples[index]);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_12 = ___1_result;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_13 = __this->___samples_0;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		SplineSample_FastCopy_m8DD8D90BE9DD47EED748197D5872BB4A1AA05CEF(L_12, ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14))), NULL);
	}

IL_006f:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SampleCollection::Evaluate(Dreamteck.Splines.SplineSample[]&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection_Evaluate_m24254B2BC7A002B010CD6DA2DC13F6AA2B9CB93E (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** ___0_results, double ___1_from, double ___2_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!hasSamples)
		bool L_0;
		L_0 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// results = new SplineSample[0];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_2 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_3 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		// return;
		goto IL_00fe;
	}

IL_001e:
	{
		// Spline.FormatFromTo(ref from, ref to);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Spline_FormatFromTo_m22E4F3E55C75E1ADE65714E8C8B27E3C535F9B04((&___1_from), (&___2_to), (bool)1, NULL);
		// GetSamplingValues(from, out fromIndex, out lerp);
		double L_4 = ___1_from;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_4, (&V_0), (&V_2), NULL);
		// GetSamplingValues(to, out toIndex, out lerp);
		double L_5 = ___2_to;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_5, (&V_1), (&V_2), NULL);
		// if (lerp > 0.0 && toIndex < samples.Length - 1)
		double L_6 = V_2;
		if ((!(((double)L_6) > ((double)(0.0)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = V_1;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_8 = __this->___samples_0;
		NullCheck(L_8);
		G_B5_0 = ((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1))))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		V_5 = (bool)G_B5_0;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// toIndex++;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0069:
	{
		// int clippedIterations = toIndex - fromIndex + 1;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), 1));
		// if (results == null)
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_13 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_14 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_13);
		V_6 = (bool)((((RuntimeObject*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		// results = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_16 = ___0_results;
		int32_t L_17 = V_3;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_18 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)L_17);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_18);
		goto IL_00a0;
	}

IL_0086:
	{
		// else if (results.Length != clippedIterations)
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_19 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_20 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_19);
		NullCheck(L_20);
		int32_t L_21 = V_3;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))) == ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		// results = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_23 = ___0_results;
		int32_t L_24 = V_3;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_25 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)L_24);
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_25);
	}

IL_00a0:
	{
		// results[0] = Evaluate(from);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_26 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_27 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_26);
		double L_28 = ___1_from;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_29;
		L_29 = SampleCollection_Evaluate_mBAC7EF0F05390FAAC84F8BA6AAD7C18B59521E82(__this, L_28, NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143)L_29);
		// results[results.Length - 1] = Evaluate(to);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_30 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_31 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_30);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_32 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_33 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_32);
		NullCheck(L_33);
		double L_34 = ___2_to;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_35;
		L_35 = SampleCollection_Evaluate_mBAC7EF0F05390FAAC84F8BA6AAD7C18B59521E82(__this, L_34, NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), 1))), (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143)L_35);
		// for (int i = 1; i < results.Length - 1; i++)
		V_8 = 1;
		goto IL_00ee;
	}

IL_00c8:
	{
		// results[i].FastCopy(ref samples[i + fromIndex]);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_36 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_37 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_36);
		int32_t L_38 = V_8;
		NullCheck(L_37);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_39 = __this->___samples_0;
		int32_t L_40 = V_8;
		int32_t L_41 = V_0;
		NullCheck(L_39);
		SplineSample_FastCopy_m8DD8D90BE9DD47EED748197D5872BB4A1AA05CEF(((L_37)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_38))), ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, L_41))))), NULL);
		// for (int i = 1; i < results.Length - 1; i++)
		int32_t L_42 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_42, 1));
	}

IL_00ee:
	{
		// for (int i = 1; i < results.Length - 1; i++)
		int32_t L_43 = V_8;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_44 = ___0_results;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_45 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_44);
		NullCheck(L_45);
		V_9 = (bool)((((int32_t)L_43) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_45)->max_length)), 1))))? 1 : 0);
		bool L_46 = V_9;
		if (L_46)
		{
			goto IL_00c8;
		}
	}

IL_00fe:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SampleCollection::EvaluatePositions(UnityEngine.Vector3[]&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection_EvaluatePositions_m0B60ADE8F791B32A2D8DD345BA6E572C1B61AA0E (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___0_positions, double ___1_from, double ___2_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	double V_2 = 0.0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!hasSamples)
		bool L_0;
		L_0 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_4 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// positions = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_2 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		// return;
		goto IL_00fd;
	}

IL_001e:
	{
		// Spline.FormatFromTo(ref from, ref to);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Spline_FormatFromTo_m22E4F3E55C75E1ADE65714E8C8B27E3C535F9B04((&___1_from), (&___2_to), (bool)1, NULL);
		// GetSamplingValues(from, out fromIndex, out lerp);
		double L_4 = ___1_from;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_4, (&V_0), (&V_2), NULL);
		// GetSamplingValues(to, out toIndex, out lerp);
		double L_5 = ___2_to;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_5, (&V_1), (&V_2), NULL);
		// if (lerp > 0.0 && toIndex < samples.Length - 1)
		double L_6 = V_2;
		if ((!(((double)L_6) > ((double)(0.0)))))
		{
			goto IL_005c;
		}
	}
	{
		int32_t L_7 = V_1;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_8 = __this->___samples_0;
		NullCheck(L_8);
		G_B5_0 = ((((int32_t)L_7) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_8)->max_length)), 1))))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		V_5 = (bool)G_B5_0;
		bool L_9 = V_5;
		if (!L_9)
		{
			goto IL_0069;
		}
	}
	{
		// toIndex++;
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_0069:
	{
		// int clippedIterations = toIndex - fromIndex + 1;
		int32_t L_11 = V_1;
		int32_t L_12 = V_0;
		V_3 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_11, L_12)), 1));
		// if (positions == null)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_13 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_13);
		V_6 = (bool)((((RuntimeObject*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)L_14) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_15 = V_6;
		if (!L_15)
		{
			goto IL_0086;
		}
	}
	{
		// positions = new Vector3[clippedIterations];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_16 = ___0_positions;
		int32_t L_17 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_17);
		*((RuntimeObject**)L_16) = (RuntimeObject*)L_18;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_16, (void*)(RuntimeObject*)L_18);
		goto IL_00a0;
	}

IL_0086:
	{
		// else if (positions.Length != clippedIterations)
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_19 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_19);
		NullCheck(L_20);
		int32_t L_21 = V_3;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))) == ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_00a0;
		}
	}
	{
		// positions = new Vector3[clippedIterations];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_23 = ___0_positions;
		int32_t L_24 = V_3;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_24);
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_25);
	}

IL_00a0:
	{
		// positions[0] = EvaluatePosition(from);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_26 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_26);
		double L_28 = ___1_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = SampleCollection_EvaluatePosition_m5F4239473DA1391082355974BCA8D5FE36981595(__this, L_28, NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_29);
		// positions[positions.Length - 1] = EvaluatePosition(to);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_30 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_31 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_30);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_32 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_32);
		NullCheck(L_33);
		double L_34 = ___2_to;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = SampleCollection_EvaluatePosition_m5F4239473DA1391082355974BCA8D5FE36981595(__this, L_34, NULL);
		NullCheck(L_31);
		(L_31)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_33)->max_length)), 1))), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_35);
		// for (int i = 1; i < positions.Length - 1; i++)
		V_8 = 1;
		goto IL_00ed;
	}

IL_00c8:
	{
		// positions[i] = samples[i + fromIndex].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_36 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_36);
		int32_t L_38 = V_8;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_39 = __this->___samples_0;
		int32_t L_40 = V_8;
		int32_t L_41 = V_0;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_40, L_41)))))->___position_0;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(L_38), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_42);
		// for (int i = 1; i < positions.Length - 1; i++)
		int32_t L_43 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_43, 1));
	}

IL_00ed:
	{
		// for (int i = 1; i < positions.Length - 1; i++)
		int32_t L_44 = V_8;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_45 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_45);
		NullCheck(L_46);
		V_9 = (bool)((((int32_t)L_44) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_46)->max_length)), 1))))? 1 : 0);
		bool L_47 = V_9;
		if (L_47)
		{
			goto IL_00c8;
		}
	}

IL_00fd:
	{
		// }
		return;
	}
}
// System.Double Dreamteck.Splines.SampleCollection::Travel(System.Double,System.Single,Dreamteck.Splines.Spline/Direction,System.Single&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SampleCollection_Travel_mCC4EB579751BC33446AC07ADA47CCBAF858F388D (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_start, float ___1_distance, int32_t ___2_direction, float* ___3_moved, double ___4_clipFrom, double ___5_clipTo, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	double V_3 = 0.0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	float V_8 = 0.0f;
	double V_9 = 0.0;
	double V_10 = 0.0;
	bool V_11 = false;
	double V_12 = 0.0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_19;
	memset((&V_19), 0, sizeof(V_19));
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	bool V_26 = false;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B46_0 = 0;
	{
		// moved = 0f;
		float* L_0 = ___3_moved;
		*((float*)L_0) = (float)(0.0f);
		// if (!hasSamples) return 0.0;
		bool L_1;
		L_1 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_11 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_11;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// if (!hasSamples) return 0.0;
		V_12 = (0.0);
		goto IL_02dd;
	}

IL_0028:
	{
		// if (direction == Spline.Direction.Forward && start >= 1.0) return clipTo;
		int32_t L_3 = ___2_direction;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		double L_4 = ___0_start;
		G_B5_0 = ((((int32_t)((!(((double)L_4) >= ((double)(1.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		V_13 = (bool)G_B5_0;
		bool L_5 = V_13;
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		// if (direction == Spline.Direction.Forward && start >= 1.0) return clipTo;
		double L_6 = ___5_clipTo;
		V_12 = L_6;
		goto IL_02dd;
	}

IL_004d:
	{
		// else if (direction == Spline.Direction.Backward && start <= 0.0) return clipFrom;
		int32_t L_7 = ___2_direction;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0062;
		}
	}
	{
		double L_8 = ___0_start;
		G_B10_0 = ((((int32_t)((!(((double)L_8) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B10_0 = 0;
	}

IL_0063:
	{
		V_14 = (bool)G_B10_0;
		bool L_9 = V_14;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// else if (direction == Spline.Direction.Backward && start <= 0.0) return clipFrom;
		double L_10 = ___4_clipFrom;
		V_12 = L_10;
		goto IL_02dd;
	}

IL_0072:
	{
		// double lastPercent = start;
		double L_11 = ___0_start;
		V_0 = L_11;
		// if (distance == 0f) return lastPercent;
		float L_12 = ___1_distance;
		V_15 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_15;
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// if (distance == 0f) return lastPercent;
		double L_14 = V_0;
		V_12 = L_14;
		goto IL_02dd;
	}

IL_008a:
	{
		// Vector3 lastPos = EvaluatePosition(start);
		double L_15 = ___0_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = SampleCollection_EvaluatePosition_m5F4239473DA1391082355974BCA8D5FE36981595(__this, L_15, NULL);
		V_1 = L_16;
		// GetSamplingValues(lastPercent, out sampleIndex, out lerp);
		double L_17 = V_0;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_17, (&V_2), (&V_3), NULL);
		// if (direction == Spline.Direction.Forward && lerp > 0.0) sampleIndex++;
		int32_t L_18 = ___2_direction;
		if ((!(((uint32_t)L_18) == ((uint32_t)1))))
		{
			goto IL_00b0;
		}
	}
	{
		double L_19 = V_3;
		G_B17_0 = ((((double)L_19) > ((double)(0.0)))? 1 : 0);
		goto IL_00b1;
	}

IL_00b0:
	{
		G_B17_0 = 0;
	}

IL_00b1:
	{
		V_16 = (bool)G_B17_0;
		bool L_20 = V_16;
		if (!L_20)
		{
			goto IL_00bb;
		}
	}
	{
		// if (direction == Spline.Direction.Forward && lerp > 0.0) sampleIndex++;
		int32_t L_21 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00bb:
	{
		// float lastDistance = 0f;
		V_4 = (0.0f);
		// int minIndex = 0;
		V_5 = 0;
		// int maxIndex = samples.Length - 1;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_22 = __this->___samples_0;
		NullCheck(L_22);
		V_6 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 1));
		// bool samplesAreLooped = clipTo < clipFrom;
		double L_23 = ___5_clipTo;
		double L_24 = ___4_clipFrom;
		V_7 = (bool)((((double)L_23) < ((double)L_24))? 1 : 0);
		// if (samplesAreLooped)
		bool L_25 = V_7;
		V_17 = L_25;
		bool L_26 = V_17;
		if (!L_26)
		{
			goto IL_0115;
		}
	}
	{
		// GetSamplingValues(clipFrom, out minIndex, out lerp);
		double L_27 = ___4_clipFrom;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_27, (&V_5), (&V_3), NULL);
		// GetSamplingValues(clipTo, out maxIndex, out lerp);
		double L_28 = ___5_clipTo;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_28, (&V_6), (&V_3), NULL);
		// if (lerp > 0.0) maxIndex++;
		double L_29 = V_3;
		V_18 = (bool)((((double)L_29) > ((double)(0.0)))? 1 : 0);
		bool L_30 = V_18;
		if (!L_30)
		{
			goto IL_0114;
		}
	}
	{
		// if (lerp > 0.0) maxIndex++;
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_0114:
	{
	}

IL_0115:
	{
		goto IL_0255;
	}

IL_011a:
	{
		// Vector3 transformedPos = samples[sampleIndex].position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_32 = __this->___samples_0;
		int32_t L_33 = V_2;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___position_0;
		V_19 = L_34;
		// lastDistance = Vector3.Distance(transformedPos, lastPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		float L_37;
		L_37 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_35, L_36, NULL);
		V_4 = L_37;
		// moved += lastDistance;
		float* L_38 = ___3_moved;
		float* L_39 = ___3_moved;
		float L_40 = *((float*)L_39);
		float L_41 = V_4;
		*((float*)L_38) = (float)((float)il2cpp_codegen_add(L_40, L_41));
		// if (moved >= distance) break;
		float* L_42 = ___3_moved;
		float L_43 = *((float*)L_42);
		float L_44 = ___1_distance;
		V_20 = (bool)((((int32_t)((!(((float)L_43) >= ((float)L_44)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_45 = V_20;
		if (!L_45)
		{
			goto IL_0155;
		}
	}
	{
		// if (moved >= distance) break;
		goto IL_0264;
	}

IL_0155:
	{
		// lastPos = transformedPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_19;
		V_1 = L_46;
		// lastPercent = samples[sampleIndex].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_47 = __this->___samples_0;
		int32_t L_48 = V_2;
		NullCheck(L_47);
		double L_49 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_48)))->___percent_5;
		V_0 = L_49;
		// if (direction == Spline.Direction.Forward)
		int32_t L_50 = ___2_direction;
		V_21 = (bool)((((int32_t)L_50) == ((int32_t)1))? 1 : 0);
		bool L_51 = V_21;
		if (!L_51)
		{
			goto IL_01df;
		}
	}
	{
		// if (sampleIndex == samples.Length - 1)
		int32_t L_52 = V_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_53 = __this->___samples_0;
		NullCheck(L_53);
		V_22 = (bool)((((int32_t)L_52) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_53)->max_length)), 1))))? 1 : 0);
		bool L_54 = V_22;
		if (!L_54)
		{
			goto IL_01c1;
		}
	}
	{
		// if (samplesAreLooped)
		bool L_55 = V_7;
		V_23 = L_55;
		bool L_56 = V_23;
		if (!L_56)
		{
			goto IL_01bb;
		}
	}
	{
		// lastPos = samples[0].position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_57 = __this->___samples_0;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		V_1 = L_58;
		// lastPercent = samples[0].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_59 = __this->___samples_0;
		NullCheck(L_59);
		double L_60 = ((L_59)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___percent_5;
		V_0 = L_60;
		// sampleIndex = 1;
		V_2 = 1;
		goto IL_01c0;
	}

IL_01bb:
	{
		// else break;
		goto IL_0264;
	}

IL_01c0:
	{
	}

IL_01c1:
	{
		// if (samplesAreLooped && sampleIndex == maxIndex) break;
		bool L_61 = V_7;
		if (!L_61)
		{
			goto IL_01cc;
		}
	}
	{
		int32_t L_62 = V_2;
		int32_t L_63 = V_6;
		G_B35_0 = ((((int32_t)L_62) == ((int32_t)L_63))? 1 : 0);
		goto IL_01cd;
	}

IL_01cc:
	{
		G_B35_0 = 0;
	}

IL_01cd:
	{
		V_24 = (bool)G_B35_0;
		bool L_64 = V_24;
		if (!L_64)
		{
			goto IL_01d8;
		}
	}
	{
		// if (samplesAreLooped && sampleIndex == maxIndex) break;
		goto IL_0264;
	}

IL_01d8:
	{
		// sampleIndex++;
		int32_t L_65 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_65, 1));
		goto IL_0254;
	}

IL_01df:
	{
		// if (sampleIndex == 0)
		int32_t L_66 = V_2;
		V_25 = (bool)((((int32_t)L_66) == ((int32_t)0))? 1 : 0);
		bool L_67 = V_25;
		if (!L_67)
		{
			goto IL_023b;
		}
	}
	{
		// if (samplesAreLooped)
		bool L_68 = V_7;
		V_26 = L_68;
		bool L_69 = V_26;
		if (!L_69)
		{
			goto IL_0238;
		}
	}
	{
		// lastPos = samples[samples.Length - 1].position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_70 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_71 = __this->___samples_0;
		NullCheck(L_71);
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_71)->max_length)), 1)))))->___position_0;
		V_1 = L_72;
		// lastPercent = samples[samples.Length - 1].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_73 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_74 = __this->___samples_0;
		NullCheck(L_74);
		NullCheck(L_73);
		double L_75 = ((L_73)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_74)->max_length)), 1)))))->___percent_5;
		V_0 = L_75;
		// sampleIndex = samples.Length - 2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_76 = __this->___samples_0;
		NullCheck(L_76);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_76)->max_length)), 2));
		goto IL_023a;
	}

IL_0238:
	{
		// else break;
		goto IL_0264;
	}

IL_023a:
	{
	}

IL_023b:
	{
		// if (samplesAreLooped && sampleIndex == minIndex) break;
		bool L_77 = V_7;
		if (!L_77)
		{
			goto IL_0246;
		}
	}
	{
		int32_t L_78 = V_2;
		int32_t L_79 = V_5;
		G_B46_0 = ((((int32_t)L_78) == ((int32_t)L_79))? 1 : 0);
		goto IL_0247;
	}

IL_0246:
	{
		G_B46_0 = 0;
	}

IL_0247:
	{
		V_27 = (bool)G_B46_0;
		bool L_80 = V_27;
		if (!L_80)
		{
			goto IL_024f;
		}
	}
	{
		// if (samplesAreLooped && sampleIndex == minIndex) break;
		goto IL_0264;
	}

IL_024f:
	{
		// sampleIndex--;
		int32_t L_81 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_81, 1));
	}

IL_0254:
	{
	}

IL_0255:
	{
		// while (moved < distance)
		float* L_82 = ___3_moved;
		float L_83 = *((float*)L_82);
		float L_84 = ___1_distance;
		V_28 = (bool)((((float)L_83) < ((float)L_84))? 1 : 0);
		bool L_85 = V_28;
		if (L_85)
		{
			goto IL_011a;
		}
	}

IL_0264:
	{
		// float moveExcess = 0f;
		V_8 = (0.0f);
		// if (moved > distance)
		float* L_86 = ___3_moved;
		float L_87 = *((float*)L_86);
		float L_88 = ___1_distance;
		V_29 = (bool)((((float)L_87) > ((float)L_88))? 1 : 0);
		bool L_89 = V_29;
		if (!L_89)
		{
			goto IL_0280;
		}
	}
	{
		// moveExcess = moved - distance;
		float* L_90 = ___3_moved;
		float L_91 = *((float*)L_90);
		float L_92 = ___1_distance;
		V_8 = ((float)il2cpp_codegen_subtract(L_91, L_92));
	}

IL_0280:
	{
		// double lerpPercent = 0.0;
		V_9 = (0.0);
		// if(lastDistance > 0.0)
		float L_93 = V_4;
		V_30 = (bool)((((double)((double)L_93)) > ((double)(0.0)))? 1 : 0);
		bool L_94 = V_30;
		if (!L_94)
		{
			goto IL_02a9;
		}
	}
	{
		// lerpPercent = moveExcess / lastDistance;
		float L_95 = V_8;
		float L_96 = V_4;
		V_9 = ((double)((float)(L_95/L_96)));
	}

IL_02a9:
	{
		// double p = DMath.Lerp(lastPercent, samples[sampleIndex].percent, 1f - lerpPercent);
		double L_97 = V_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_98 = __this->___samples_0;
		int32_t L_99 = V_2;
		NullCheck(L_98);
		double L_100 = ((L_98)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_99)))->___percent_5;
		double L_101 = V_9;
		double L_102;
		L_102 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_97, L_100, ((double)il2cpp_codegen_subtract((1.0), L_101)), NULL);
		V_10 = L_102;
		// moved -= moveExcess;
		float* L_103 = ___3_moved;
		float* L_104 = ___3_moved;
		float L_105 = *((float*)L_104);
		float L_106 = V_8;
		*((float*)L_103) = (float)((float)il2cpp_codegen_subtract(L_105, L_106));
		// return p;
		double L_107 = V_10;
		V_12 = L_107;
		goto IL_02dd;
	}

IL_02dd:
	{
		// }
		double L_108 = V_12;
		return L_108;
	}
}
// System.Double Dreamteck.Splines.SampleCollection::TravelWithOffset(System.Double,System.Single,Dreamteck.Splines.Spline/Direction,UnityEngine.Vector3,System.Single&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SampleCollection_TravelWithOffset_mD5E6A0D6E82C4B5A39FBEE2F9AA6C8342A504E22 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_start, float ___1_distance, int32_t ___2_direction, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_offset, float* ___4_moved, double ___5_clipFrom, double ___6_clipTo, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	double V_3 = 0.0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	bool V_7 = false;
	float V_8 = 0.0f;
	double V_9 = 0.0;
	bool V_10 = false;
	double V_11 = 0.0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_18;
	memset((&V_18), 0, sizeof(V_18));
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	int32_t V_26 = 0;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B35_0 = 0;
	int32_t G_B46_0 = 0;
	{
		// moved = 0f;
		float* L_0 = ___4_moved;
		*((float*)L_0) = (float)(0.0f);
		// if (!hasSamples) return 0.0;
		bool L_1;
		L_1 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_10 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_10;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// if (!hasSamples) return 0.0;
		V_11 = (0.0);
		goto IL_0523;
	}

IL_0028:
	{
		// if (direction == Spline.Direction.Forward && start >= 1.0) return clipTo;
		int32_t L_3 = ___2_direction;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_003d;
		}
	}
	{
		double L_4 = ___0_start;
		G_B5_0 = ((((int32_t)((!(((double)L_4) >= ((double)(1.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		V_12 = (bool)G_B5_0;
		bool L_5 = V_12;
		if (!L_5)
		{
			goto IL_004d;
		}
	}
	{
		// if (direction == Spline.Direction.Forward && start >= 1.0) return clipTo;
		double L_6 = ___6_clipTo;
		V_11 = L_6;
		goto IL_0523;
	}

IL_004d:
	{
		// else if (direction == Spline.Direction.Backward && start <= 0.0) return clipFrom;
		int32_t L_7 = ___2_direction;
		if ((!(((uint32_t)L_7) == ((uint32_t)(-1)))))
		{
			goto IL_0062;
		}
	}
	{
		double L_8 = ___0_start;
		G_B10_0 = ((((int32_t)((!(((double)L_8) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0063;
	}

IL_0062:
	{
		G_B10_0 = 0;
	}

IL_0063:
	{
		V_13 = (bool)G_B10_0;
		bool L_9 = V_13;
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// else if (direction == Spline.Direction.Backward && start <= 0.0) return clipFrom;
		double L_10 = ___5_clipFrom;
		V_11 = L_10;
		goto IL_0523;
	}

IL_0072:
	{
		// double lastPercent = start;
		double L_11 = ___0_start;
		V_0 = L_11;
		// if (distance == 0f) return lastPercent;
		float L_12 = ___1_distance;
		V_14 = (bool)((((float)L_12) == ((float)(0.0f)))? 1 : 0);
		bool L_13 = V_14;
		if (!L_13)
		{
			goto IL_008a;
		}
	}
	{
		// if (distance == 0f) return lastPercent;
		double L_14 = V_0;
		V_11 = L_14;
		goto IL_0523;
	}

IL_008a:
	{
		// Evaluate(start, ref _workSample);
		double L_15 = ___0_start;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_16 = (&__this->____workSample_3);
		SampleCollection_Evaluate_mAAC912C0D30624A4CE054FDD16943264D579BD20(__this, L_15, L_16, NULL);
		// Vector3 lastPos = _workSample.position + _workSample.up * (offset.y * _workSample.size) + _workSample.right * (offset.x * _workSample.size) + _workSample.forward * (offset.z * _workSample.size);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_17 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___position_0;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_19 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___3_offset;
		float L_22 = L_21.___y_3;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_23 = (&__this->____workSample_3);
		float L_24 = L_23->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_20, ((float)il2cpp_codegen_multiply(L_22, L_24)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_25, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_27 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ___3_offset;
		float L_30 = L_29.___x_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_31 = (&__this->____workSample_3);
		float L_32 = L_31->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, ((float)il2cpp_codegen_multiply(L_30, L_32)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_26, L_33, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_35 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = L_35->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ___3_offset;
		float L_38 = L_37.___z_4;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_39 = (&__this->____workSample_3);
		float L_40 = L_39->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_36, ((float)il2cpp_codegen_multiply(L_38, L_40)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_41, NULL);
		V_1 = L_42;
		// GetSamplingValues(lastPercent, out sampleIndex, out lerp);
		double L_43 = V_0;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_43, (&V_2), (&V_3), NULL);
		// if (direction == Spline.Direction.Forward && lerp > 0.0) sampleIndex++;
		int32_t L_44 = ___2_direction;
		if ((!(((uint32_t)L_44) == ((uint32_t)1))))
		{
			goto IL_013a;
		}
	}
	{
		double L_45 = V_3;
		G_B17_0 = ((((double)L_45) > ((double)(0.0)))? 1 : 0);
		goto IL_013b;
	}

IL_013a:
	{
		G_B17_0 = 0;
	}

IL_013b:
	{
		V_15 = (bool)G_B17_0;
		bool L_46 = V_15;
		if (!L_46)
		{
			goto IL_0145;
		}
	}
	{
		// if (direction == Spline.Direction.Forward && lerp > 0.0) sampleIndex++;
		int32_t L_47 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0145:
	{
		// float lastDistance = 0f;
		V_4 = (0.0f);
		// int minIndex = 0;
		V_5 = 0;
		// int maxIndex = length - 1;
		int32_t L_48;
		L_48 = SampleCollection_get_length_mB42A3EAF2CB5B8F16CBF5D91048A6DC72A17BD3B(__this, NULL);
		V_6 = ((int32_t)il2cpp_codegen_subtract(L_48, 1));
		// bool samplesAreLooped = clipTo < clipFrom;
		double L_49 = ___6_clipTo;
		double L_50 = ___5_clipFrom;
		V_7 = (bool)((((double)L_49) < ((double)L_50))? 1 : 0);
		// if (samplesAreLooped)
		bool L_51 = V_7;
		V_16 = L_51;
		bool L_52 = V_16;
		if (!L_52)
		{
			goto IL_019d;
		}
	}
	{
		// GetSamplingValues(clipFrom, out minIndex, out lerp);
		double L_53 = ___5_clipFrom;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_53, (&V_5), (&V_3), NULL);
		// GetSamplingValues(clipTo, out maxIndex, out lerp);
		double L_54 = ___6_clipTo;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_54, (&V_6), (&V_3), NULL);
		// if (lerp > 0.0) maxIndex++;
		double L_55 = V_3;
		V_17 = (bool)((((double)L_55) > ((double)(0.0)))? 1 : 0);
		bool L_56 = V_17;
		if (!L_56)
		{
			goto IL_019c;
		}
	}
	{
		// if (lerp > 0.0) maxIndex++;
		int32_t L_57 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_57, 1));
	}

IL_019c:
	{
	}

IL_019d:
	{
		goto IL_04c4;
	}

IL_01a2:
	{
		// Vector3 newPos = samples[sampleIndex].position +
		//     samples[sampleIndex].up * (offset.y * samples[sampleIndex].size) +
		//     samples[sampleIndex].right * (offset.x * samples[sampleIndex].size) +
		//     samples[sampleIndex].forward * (offset.z * samples[sampleIndex].size);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_58 = __this->___samples_0;
		int32_t L_59 = V_2;
		NullCheck(L_58);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_61 = __this->___samples_0;
		int32_t L_62 = V_2;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___3_offset;
		float L_65 = L_64.___y_3;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_66 = __this->___samples_0;
		int32_t L_67 = V_2;
		NullCheck(L_66);
		float L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_63, ((float)il2cpp_codegen_multiply(L_65, L_68)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_60, L_69, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_71 = __this->___samples_0;
		int32_t L_72 = V_2;
		NullCheck(L_71);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74 = ___3_offset;
		float L_75 = L_74.___x_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_76 = __this->___samples_0;
		int32_t L_77 = V_2;
		NullCheck(L_76);
		float L_78 = ((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_73, ((float)il2cpp_codegen_multiply(L_75, L_78)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_70, L_79, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_81 = __this->___samples_0;
		int32_t L_82 = V_2;
		NullCheck(L_81);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83 = ((L_81)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_82)))->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84 = ___3_offset;
		float L_85 = L_84.___z_4;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_86 = __this->___samples_0;
		int32_t L_87 = V_2;
		NullCheck(L_86);
		float L_88 = ((L_86)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_87)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_83, ((float)il2cpp_codegen_multiply(L_85, L_88)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_80, L_89, NULL);
		V_18 = L_90;
		// lastDistance = Vector3.Distance(newPos, lastPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = V_18;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_1;
		float L_93;
		L_93 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_91, L_92, NULL);
		V_4 = L_93;
		// moved += lastDistance;
		float* L_94 = ___4_moved;
		float* L_95 = ___4_moved;
		float L_96 = *((float*)L_95);
		float L_97 = V_4;
		*((float*)L_94) = (float)((float)il2cpp_codegen_add(L_96, L_97));
		// if (moved >= distance)
		float* L_98 = ___4_moved;
		float L_99 = *((float*)L_98);
		float L_100 = ___1_distance;
		V_19 = (bool)((((int32_t)((!(((float)L_99) >= ((float)L_100)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_101 = V_19;
		if (!L_101)
		{
			goto IL_027a;
		}
	}
	{
		// break;
		goto IL_04d3;
	}

IL_027a:
	{
		// lastPos = newPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = V_18;
		V_1 = L_102;
		// lastPercent = samples[sampleIndex].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_103 = __this->___samples_0;
		int32_t L_104 = V_2;
		NullCheck(L_103);
		double L_105 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104)))->___percent_5;
		V_0 = L_105;
		// if (direction == Spline.Direction.Forward)
		int32_t L_106 = ___2_direction;
		V_20 = (bool)((((int32_t)L_106) == ((int32_t)1))? 1 : 0);
		bool L_107 = V_20;
		if (!L_107)
		{
			goto IL_03aa;
		}
	}
	{
		// if (sampleIndex == length - 1)
		int32_t L_108 = V_2;
		int32_t L_109;
		L_109 = SampleCollection_get_length_mB42A3EAF2CB5B8F16CBF5D91048A6DC72A17BD3B(__this, NULL);
		V_21 = (bool)((((int32_t)L_108) == ((int32_t)((int32_t)il2cpp_codegen_subtract(L_109, 1))))? 1 : 0);
		bool L_110 = V_21;
		if (!L_110)
		{
			goto IL_0389;
		}
	}
	{
		// if (samplesAreLooped)
		bool L_111 = V_7;
		V_22 = L_111;
		bool L_112 = V_22;
		if (!L_112)
		{
			goto IL_0383;
		}
	}
	{
		// lastPos = samples[0].position +
		//     samples[0].up * (offset.y * samples[0].size) +
		//     samples[0].right * (offset.x * samples[0].size) +
		//     samples[0].forward * (offset.z * samples[0].size);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_113 = __this->___samples_0;
		NullCheck(L_113);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = ((L_113)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_115 = __this->___samples_0;
		NullCheck(L_115);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = ((L_115)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = ___3_offset;
		float L_118 = L_117.___y_3;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_119 = __this->___samples_0;
		NullCheck(L_119);
		float L_120 = ((L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121;
		L_121 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_116, ((float)il2cpp_codegen_multiply(L_118, L_120)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_114, L_121, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_123 = __this->___samples_0;
		NullCheck(L_123);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_124;
		L_124 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(((L_123)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_125 = ___3_offset;
		float L_126 = L_125.___x_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_127 = __this->___samples_0;
		NullCheck(L_127);
		float L_128 = ((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129;
		L_129 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_124, ((float)il2cpp_codegen_multiply(L_126, L_128)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_122, L_129, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_131 = __this->___samples_0;
		NullCheck(L_131);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = ((L_131)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_133 = ___3_offset;
		float L_134 = L_133.___z_4;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_135 = __this->___samples_0;
		NullCheck(L_135);
		float L_136 = ((L_135)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137;
		L_137 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_132, ((float)il2cpp_codegen_multiply(L_134, L_136)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138;
		L_138 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_130, L_137, NULL);
		V_1 = L_138;
		// lastPercent = samples[0].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_139 = __this->___samples_0;
		NullCheck(L_139);
		double L_140 = ((L_139)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___percent_5;
		V_0 = L_140;
		// sampleIndex = 1;
		V_2 = 1;
		goto IL_0388;
	}

IL_0383:
	{
		// else break;
		goto IL_04d3;
	}

IL_0388:
	{
	}

IL_0389:
	{
		// if (samplesAreLooped && sampleIndex == maxIndex) break;
		bool L_141 = V_7;
		if (!L_141)
		{
			goto IL_0394;
		}
	}
	{
		int32_t L_142 = V_2;
		int32_t L_143 = V_6;
		G_B35_0 = ((((int32_t)L_142) == ((int32_t)L_143))? 1 : 0);
		goto IL_0395;
	}

IL_0394:
	{
		G_B35_0 = 0;
	}

IL_0395:
	{
		V_23 = (bool)G_B35_0;
		bool L_144 = V_23;
		if (!L_144)
		{
			goto IL_03a0;
		}
	}
	{
		// if (samplesAreLooped && sampleIndex == maxIndex) break;
		goto IL_04d3;
	}

IL_03a0:
	{
		// sampleIndex++;
		int32_t L_145 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_145, 1));
		goto IL_04c3;
	}

IL_03aa:
	{
		// if (sampleIndex == 0)
		int32_t L_146 = V_2;
		V_24 = (bool)((((int32_t)L_146) == ((int32_t)0))? 1 : 0);
		bool L_147 = V_24;
		if (!L_147)
		{
			goto IL_04aa;
		}
	}
	{
		// if (samplesAreLooped)
		bool L_148 = V_7;
		V_25 = L_148;
		bool L_149 = V_25;
		if (!L_149)
		{
			goto IL_04a7;
		}
	}
	{
		// int lastIndex = samples.Length - 1;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_150 = __this->___samples_0;
		NullCheck(L_150);
		V_26 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_150)->max_length)), 1));
		// lastPos = samples[lastIndex].position +
		//     samples[lastIndex].up * (offset.y * samples[lastIndex].size) +
		//     samples[lastIndex].right * (offset.x * samples[lastIndex].size) +
		//     samples[lastIndex].forward * (offset.z * samples[lastIndex].size);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_151 = __this->___samples_0;
		int32_t L_152 = V_26;
		NullCheck(L_151);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153 = ((L_151)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_152)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_154 = __this->___samples_0;
		int32_t L_155 = V_26;
		NullCheck(L_154);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_156 = ((L_154)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_155)))->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157 = ___3_offset;
		float L_158 = L_157.___y_3;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_159 = __this->___samples_0;
		int32_t L_160 = V_26;
		NullCheck(L_159);
		float L_161 = ((L_159)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_160)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_162;
		L_162 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_156, ((float)il2cpp_codegen_multiply(L_158, L_161)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_163;
		L_163 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_153, L_162, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_164 = __this->___samples_0;
		int32_t L_165 = V_26;
		NullCheck(L_164);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_166;
		L_166 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(((L_164)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_165))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_167 = ___3_offset;
		float L_168 = L_167.___x_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_169 = __this->___samples_0;
		int32_t L_170 = V_26;
		NullCheck(L_169);
		float L_171 = ((L_169)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_170)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_172;
		L_172 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_166, ((float)il2cpp_codegen_multiply(L_168, L_171)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_173;
		L_173 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_163, L_172, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_174 = __this->___samples_0;
		int32_t L_175 = V_26;
		NullCheck(L_174);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_176 = ((L_174)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_175)))->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_177 = ___3_offset;
		float L_178 = L_177.___z_4;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_179 = __this->___samples_0;
		int32_t L_180 = V_26;
		NullCheck(L_179);
		float L_181 = ((L_179)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_180)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_182;
		L_182 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_176, ((float)il2cpp_codegen_multiply(L_178, L_181)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_183;
		L_183 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_173, L_182, NULL);
		V_1 = L_183;
		// lastPercent = samples[lastIndex].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_184 = __this->___samples_0;
		int32_t L_185 = V_26;
		NullCheck(L_184);
		double L_186 = ((L_184)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_185)))->___percent_5;
		V_0 = L_186;
		// sampleIndex = samples.Length - 2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_187 = __this->___samples_0;
		NullCheck(L_187);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_187)->max_length)), 2));
		goto IL_04a9;
	}

IL_04a7:
	{
		// else break;
		goto IL_04d3;
	}

IL_04a9:
	{
	}

IL_04aa:
	{
		// if (samplesAreLooped && sampleIndex == minIndex) break;
		bool L_188 = V_7;
		if (!L_188)
		{
			goto IL_04b5;
		}
	}
	{
		int32_t L_189 = V_2;
		int32_t L_190 = V_5;
		G_B46_0 = ((((int32_t)L_189) == ((int32_t)L_190))? 1 : 0);
		goto IL_04b6;
	}

IL_04b5:
	{
		G_B46_0 = 0;
	}

IL_04b6:
	{
		V_27 = (bool)G_B46_0;
		bool L_191 = V_27;
		if (!L_191)
		{
			goto IL_04be;
		}
	}
	{
		// if (samplesAreLooped && sampleIndex == minIndex) break;
		goto IL_04d3;
	}

IL_04be:
	{
		// sampleIndex--;
		int32_t L_192 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_192, 1));
	}

IL_04c3:
	{
	}

IL_04c4:
	{
		// while (moved < distance)
		float* L_193 = ___4_moved;
		float L_194 = *((float*)L_193);
		float L_195 = ___1_distance;
		V_28 = (bool)((((float)L_194) < ((float)L_195))? 1 : 0);
		bool L_196 = V_28;
		if (L_196)
		{
			goto IL_01a2;
		}
	}

IL_04d3:
	{
		// float moveExcess = 0f;
		V_8 = (0.0f);
		// if (moved > distance)
		float* L_197 = ___4_moved;
		float L_198 = *((float*)L_197);
		float L_199 = ___1_distance;
		V_29 = (bool)((((float)L_198) > ((float)L_199))? 1 : 0);
		bool L_200 = V_29;
		if (!L_200)
		{
			goto IL_04ef;
		}
	}
	{
		// moveExcess = moved - distance;
		float* L_201 = ___4_moved;
		float L_202 = *((float*)L_201);
		float L_203 = ___1_distance;
		V_8 = ((float)il2cpp_codegen_subtract(L_202, L_203));
	}

IL_04ef:
	{
		// double p = DMath.Lerp(lastPercent, samples[sampleIndex].percent, 1f - moveExcess / lastDistance);
		double L_204 = V_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_205 = __this->___samples_0;
		int32_t L_206 = V_2;
		NullCheck(L_205);
		double L_207 = ((L_205)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_206)))->___percent_5;
		float L_208 = V_8;
		float L_209 = V_4;
		double L_210;
		L_210 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_204, L_207, ((double)((float)il2cpp_codegen_subtract((1.0f), ((float)(L_208/L_209))))), NULL);
		V_9 = L_210;
		// moved -= moveExcess;
		float* L_211 = ___4_moved;
		float* L_212 = ___4_moved;
		float L_213 = *((float*)L_212);
		float L_214 = V_8;
		*((float*)L_211) = (float)((float)il2cpp_codegen_subtract(L_213, L_214));
		// return p;
		double L_215 = V_9;
		V_11 = L_215;
		goto IL_0523;
	}

IL_0523:
	{
		// }
		double L_216 = V_11;
		return L_216;
	}
}
// System.Double Dreamteck.Splines.SampleCollection::Travel(System.Double,System.Single,Dreamteck.Splines.Spline/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SampleCollection_Travel_m03CAC4B8DB60552AC467D1795A2CA507643B2811 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_start, float ___1_distance, int32_t ___2_direction, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// return Travel(start, distance, direction, out moved);
		double L_0 = ___0_start;
		float L_1 = ___1_distance;
		int32_t L_2 = ___2_direction;
		double L_3;
		L_3 = SampleCollection_Travel_mCC4EB579751BC33446AC07ADA47CCBAF858F388D(__this, L_0, L_1, L_2, (&V_0), (0.0), (1.0), NULL);
		V_1 = L_3;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		double L_4 = V_1;
		return L_4;
	}
}
// System.Void Dreamteck.Splines.SampleCollection::Project(UnityEngine.Vector3,System.Int32,Dreamteck.Splines.SplineSample&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCollection_Project_mB4F44CAE815483E587671F56A0C61C5BFF66F6B7 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, int32_t ___1_controlPointCount, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___2_result, double ___3_from, double ___4_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	float V_15 = 0.0f;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_20;
	memset((&V_20), 0, sizeof(V_20));
	bool V_21 = false;
	bool V_22 = false;
	bool V_23 = false;
	int32_t V_24 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_25;
	memset((&V_25), 0, sizeof(V_25));
	float V_26 = 0.0f;
	bool V_27 = false;
	bool V_28 = false;
	bool V_29 = false;
	bool V_30 = false;
	int32_t V_31 = 0;
	float V_32 = 0.0f;
	bool V_33 = false;
	bool V_34 = false;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	bool V_41 = false;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_45;
	memset((&V_45), 0, sizeof(V_45));
	bool V_46 = false;
	double V_47 = 0.0;
	bool V_48 = false;
	int32_t G_B12_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B57_0 = 0;
	{
		// if (!hasSamples) return;
		bool L_0;
		L_0 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_17 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_17;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		// if (!hasSamples) return;
		goto IL_06a9;
	}

IL_0015:
	{
		// if (samples.Length == 1)
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_2 = __this->___samples_0;
		NullCheck(L_2);
		V_18 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))) == ((int32_t)1))? 1 : 0);
		bool L_3 = V_18;
		if (!L_3)
		{
			goto IL_003f;
		}
	}
	{
		// result.FastCopy(ref samples[0]);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_4 = ___2_result;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_5 = __this->___samples_0;
		NullCheck(L_5);
		SplineSample_FastCopy_m8DD8D90BE9DD47EED748197D5872BB4A1AA05CEF(L_4, ((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		// return;
		goto IL_06a9;
	}

IL_003f:
	{
		// Spline.FormatFromTo(ref from, ref to);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Spline_FormatFromTo_m22E4F3E55C75E1ADE65714E8C8B27E3C535F9B04((&___3_from), (&___4_to), (bool)1, NULL);
		// int steps = (controlPointCount - 1) * 4; //Sampling four points per segment is enough to find the closest point range
		int32_t L_6 = ___1_controlPointCount;
		V_0 = ((int32_t)il2cpp_codegen_multiply(((int32_t)il2cpp_codegen_subtract(L_6, 1)), 4));
		// int step = samples.Length / steps;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_7 = __this->___samples_0;
		NullCheck(L_7);
		int32_t L_8 = V_0;
		V_1 = ((int32_t)(((int32_t)(((RuntimeArray*)L_7)->max_length))/L_8));
		// if (step < 1) step = 1;
		int32_t L_9 = V_1;
		V_19 = (bool)((((int32_t)L_9) < ((int32_t)1))? 1 : 0);
		bool L_10 = V_19;
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		// if (step < 1) step = 1;
		V_1 = 1;
	}

IL_0067:
	{
		// float minDist = (position - samples[0].position).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___0_position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_12 = __this->___samples_0;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_11, L_13, NULL);
		V_20 = L_14;
		float L_15;
		L_15 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		V_2 = L_15;
		// int fromIndex = 0;
		V_3 = 0;
		// int toIndex = samples.Length - 1;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_16 = __this->___samples_0;
		NullCheck(L_16);
		V_4 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), 1));
		// if (from != 0.0) GetSamplingValues(from, out fromIndex, out lerp);
		double L_17 = ___3_from;
		V_21 = (bool)((((int32_t)((((double)L_17) == ((double)(0.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_21;
		if (!L_18)
		{
			goto IL_00b9;
		}
	}
	{
		// if (from != 0.0) GetSamplingValues(from, out fromIndex, out lerp);
		double L_19 = ___3_from;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_19, (&V_3), (&V_5), NULL);
	}

IL_00b9:
	{
		// if (to != 1.0)
		double L_20 = ___4_to;
		V_22 = (bool)((((int32_t)((((double)L_20) == ((double)(1.0)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_21 = V_22;
		if (!L_21)
		{
			goto IL_0108;
		}
	}
	{
		// GetSamplingValues(to, out toIndex, out lerp);
		double L_22 = ___4_to;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_22, (&V_4), (&V_5), NULL);
		// if (lerp > 0.0 && toIndex < samples.Length - 1) toIndex++;
		double L_23 = V_5;
		if ((!(((double)L_23) > ((double)(0.0)))))
		{
			goto IL_00fa;
		}
	}
	{
		int32_t L_24 = V_4;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_25 = __this->___samples_0;
		NullCheck(L_25);
		G_B12_0 = ((((int32_t)L_24) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_25)->max_length)), 1))))? 1 : 0);
		goto IL_00fb;
	}

IL_00fa:
	{
		G_B12_0 = 0;
	}

IL_00fb:
	{
		V_23 = (bool)G_B12_0;
		bool L_26 = V_23;
		if (!L_26)
		{
			goto IL_0107;
		}
	}
	{
		// if (lerp > 0.0 && toIndex < samples.Length - 1) toIndex++;
		int32_t L_27 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_27, 1));
	}

IL_0107:
	{
	}

IL_0108:
	{
		// int checkFrom = fromIndex;
		int32_t L_28 = V_3;
		V_6 = L_28;
		// int checkTo = toIndex;
		int32_t L_29 = V_4;
		V_7 = L_29;
		// for (int i = fromIndex; i < toIndex; i += step)
		int32_t L_30 = V_3;
		V_24 = L_30;
		goto IL_01bb;
	}

IL_0117:
	{
		// if (i >= toIndex) i = toIndex-1;
		int32_t L_31 = V_24;
		int32_t L_32 = V_4;
		V_27 = (bool)((((int32_t)((((int32_t)L_31) < ((int32_t)L_32))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_33 = V_27;
		if (!L_33)
		{
			goto IL_012d;
		}
	}
	{
		// if (i >= toIndex) i = toIndex-1;
		int32_t L_34 = V_4;
		V_24 = ((int32_t)il2cpp_codegen_subtract(L_34, 1));
	}

IL_012d:
	{
		// Vector3 projected = LinearAlgebraUtility.ProjectOnLine(samples[i].position, samples[Mathf.Min(i + step, toIndex)].position, position);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_35 = __this->___samples_0;
		int32_t L_36 = V_24;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_38 = __this->___samples_0;
		int32_t L_39 = V_24;
		int32_t L_40 = V_1;
		int32_t L_41 = V_4;
		int32_t L_42;
		L_42 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_39, L_40)), L_41, NULL);
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = LinearAlgebraUtility_ProjectOnLine_m5A6BF6DD69841B252A2A1D18F802453BACAAE278(L_37, L_43, L_44, NULL);
		V_25 = L_45;
		// float dist = (position - projected).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = V_25;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_46, L_47, NULL);
		V_20 = L_48;
		float L_49;
		L_49 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		V_26 = L_49;
		// if (dist < minDist)
		float L_50 = V_26;
		float L_51 = V_2;
		V_28 = (bool)((((float)L_50) < ((float)L_51))? 1 : 0);
		bool L_52 = V_28;
		if (!L_52)
		{
			goto IL_01a6;
		}
	}
	{
		// minDist = dist;
		float L_53 = V_26;
		V_2 = L_53;
		// checkFrom = Mathf.Max(i - step, 0);
		int32_t L_54 = V_24;
		int32_t L_55 = V_1;
		int32_t L_56;
		L_56 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_subtract(L_54, L_55)), 0, NULL);
		V_6 = L_56;
		// checkTo = Mathf.Min(i + step, samples.Length - 1);
		int32_t L_57 = V_24;
		int32_t L_58 = V_1;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_59 = __this->___samples_0;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline(((int32_t)il2cpp_codegen_add(L_57, L_58)), ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_59)->max_length)), 1)), NULL);
		V_7 = L_60;
	}

IL_01a6:
	{
		// if (i == toIndex) break;
		int32_t L_61 = V_24;
		int32_t L_62 = V_4;
		V_29 = (bool)((((int32_t)L_61) == ((int32_t)L_62))? 1 : 0);
		bool L_63 = V_29;
		if (!L_63)
		{
			goto IL_01b4;
		}
	}
	{
		// if (i == toIndex) break;
		goto IL_01ca;
	}

IL_01b4:
	{
		// for (int i = fromIndex; i < toIndex; i += step)
		int32_t L_64 = V_24;
		int32_t L_65 = V_1;
		V_24 = ((int32_t)il2cpp_codegen_add(L_64, L_65));
	}

IL_01bb:
	{
		// for (int i = fromIndex; i < toIndex; i += step)
		int32_t L_66 = V_24;
		int32_t L_67 = V_4;
		V_30 = (bool)((((int32_t)L_66) < ((int32_t)L_67))? 1 : 0);
		bool L_68 = V_30;
		if (L_68)
		{
			goto IL_0117;
		}
	}

IL_01ca:
	{
		// minDist = (position - samples[checkFrom].position).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = ___0_position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_70 = __this->___samples_0;
		int32_t L_71 = V_6;
		NullCheck(L_70);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_71)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_69, L_72, NULL);
		V_20 = L_73;
		float L_74;
		L_74 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		V_2 = L_74;
		// int index = checkFrom;
		int32_t L_75 = V_6;
		V_8 = L_75;
		// for (int i = checkFrom + 1; i <= checkTo; i++)
		int32_t L_76 = V_6;
		V_31 = ((int32_t)il2cpp_codegen_add(L_76, 1));
		goto IL_0237;
	}

IL_01f8:
	{
		// float dist = (position - samples[i].position).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_77 = ___0_position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_78 = __this->___samples_0;
		int32_t L_79 = V_31;
		NullCheck(L_78);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = ((L_78)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_79)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_77, L_80, NULL);
		V_20 = L_81;
		float L_82;
		L_82 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		V_32 = L_82;
		// if (dist < minDist)
		float L_83 = V_32;
		float L_84 = V_2;
		V_33 = (bool)((((float)L_83) < ((float)L_84))? 1 : 0);
		bool L_85 = V_33;
		if (!L_85)
		{
			goto IL_0230;
		}
	}
	{
		// minDist = dist;
		float L_86 = V_32;
		V_2 = L_86;
		// index = i;
		int32_t L_87 = V_31;
		V_8 = L_87;
	}

IL_0230:
	{
		// for (int i = checkFrom + 1; i <= checkTo; i++)
		int32_t L_88 = V_31;
		V_31 = ((int32_t)il2cpp_codegen_add(L_88, 1));
	}

IL_0237:
	{
		// for (int i = checkFrom + 1; i <= checkTo; i++)
		int32_t L_89 = V_31;
		int32_t L_90 = V_7;
		V_34 = (bool)((((int32_t)((((int32_t)L_89) > ((int32_t)L_90))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_91 = V_34;
		if (L_91)
		{
			goto IL_01f8;
		}
	}
	{
		// int backIndex = index - 1;
		int32_t L_92 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_subtract(L_92, 1));
		// if (backIndex < 0) backIndex = 0;
		int32_t L_93 = V_9;
		V_35 = (bool)((((int32_t)L_93) < ((int32_t)0))? 1 : 0);
		bool L_94 = V_35;
		if (!L_94)
		{
			goto IL_025a;
		}
	}
	{
		// if (backIndex < 0) backIndex = 0;
		V_9 = 0;
	}

IL_025a:
	{
		// int frontIndex = index + 1;
		int32_t L_95 = V_8;
		V_10 = ((int32_t)il2cpp_codegen_add(L_95, 1));
		// if (frontIndex > samples.Length - 1) frontIndex = samples.Length - 1;
		int32_t L_96 = V_10;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_97 = __this->___samples_0;
		NullCheck(L_97);
		V_36 = (bool)((((int32_t)L_96) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_97)->max_length)), 1))))? 1 : 0);
		bool L_98 = V_36;
		if (!L_98)
		{
			goto IL_0280;
		}
	}
	{
		// if (frontIndex > samples.Length - 1) frontIndex = samples.Length - 1;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_99 = __this->___samples_0;
		NullCheck(L_99);
		V_10 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_99)->max_length)), 1));
	}

IL_0280:
	{
		// Vector3 back = LinearAlgebraUtility.ProjectOnLine(samples[backIndex].position, samples[index].position, position);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_100 = __this->___samples_0;
		int32_t L_101 = V_9;
		NullCheck(L_100);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = ((L_100)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_101)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_103 = __this->___samples_0;
		int32_t L_104 = V_8;
		NullCheck(L_103);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = ((L_103)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_104)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_106 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = LinearAlgebraUtility_ProjectOnLine_m5A6BF6DD69841B252A2A1D18F802453BACAAE278(L_102, L_105, L_106, NULL);
		V_11 = L_107;
		// Vector3 front = LinearAlgebraUtility.ProjectOnLine(samples[index].position, samples[frontIndex].position, position);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_108 = __this->___samples_0;
		int32_t L_109 = V_8;
		NullCheck(L_108);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_110 = ((L_108)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_109)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_111 = __this->___samples_0;
		int32_t L_112 = V_10;
		NullCheck(L_111);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = ((L_111)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_112)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_114 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_115;
		L_115 = LinearAlgebraUtility_ProjectOnLine_m5A6BF6DD69841B252A2A1D18F802453BACAAE278(L_110, L_113, L_114, NULL);
		V_12 = L_115;
		// float backLength = (samples[index].position - samples[backIndex].position).magnitude;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_116 = __this->___samples_0;
		int32_t L_117 = V_8;
		NullCheck(L_116);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118 = ((L_116)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_117)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_119 = __this->___samples_0;
		int32_t L_120 = V_9;
		NullCheck(L_119);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_121 = ((L_119)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_120)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_122;
		L_122 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_118, L_121, NULL);
		V_20 = L_122;
		float L_123;
		L_123 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_20), NULL);
		V_13 = L_123;
		// float frontLength = (samples[index].position - samples[frontIndex].position).magnitude;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_124 = __this->___samples_0;
		int32_t L_125 = V_8;
		NullCheck(L_124);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_126 = ((L_124)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_125)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_127 = __this->___samples_0;
		int32_t L_128 = V_10;
		NullCheck(L_127);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_129 = ((L_127)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_128)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_130;
		L_130 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_126, L_129, NULL);
		V_20 = L_130;
		float L_131;
		L_131 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_20), NULL);
		V_14 = L_131;
		// float backProjectDist = (back - samples[backIndex].position).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_132 = V_11;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_133 = __this->___samples_0;
		int32_t L_134 = V_9;
		NullCheck(L_133);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_135 = ((L_133)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_134)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_136;
		L_136 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_132, L_135, NULL);
		V_20 = L_136;
		float L_137;
		L_137 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_20), NULL);
		V_15 = L_137;
		// float frontProjectDist = (front - samples[frontIndex].position).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_12;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_139 = __this->___samples_0;
		int32_t L_140 = V_10;
		NullCheck(L_139);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_141 = ((L_139)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_140)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_142;
		L_142 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_138, L_141, NULL);
		V_20 = L_142;
		float L_143;
		L_143 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_20), NULL);
		V_16 = L_143;
		// if (backIndex < index && index < frontIndex)
		int32_t L_144 = V_9;
		int32_t L_145 = V_8;
		if ((((int32_t)L_144) >= ((int32_t)L_145)))
		{
			goto IL_0396;
		}
	}
	{
		int32_t L_146 = V_8;
		int32_t L_147 = V_10;
		G_B36_0 = ((((int32_t)L_146) < ((int32_t)L_147))? 1 : 0);
		goto IL_0397;
	}

IL_0396:
	{
		G_B36_0 = 0;
	}

IL_0397:
	{
		V_37 = (bool)G_B36_0;
		bool L_148 = V_37;
		if (!L_148)
		{
			goto IL_0483;
		}
	}
	{
		// if ((position - back).sqrMagnitude < (position - front).sqrMagnitude)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_149, L_150, NULL);
		V_20 = L_151;
		float L_152;
		L_152 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_155;
		L_155 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_153, L_154, NULL);
		V_20 = L_155;
		float L_156;
		L_156 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		V_38 = (bool)((((float)L_152) < ((float)L_156))? 1 : 0);
		bool L_157 = V_38;
		if (!L_157)
		{
			goto IL_0425;
		}
	}
	{
		// SplineSample.Lerp(ref samples[backIndex], ref samples[index], backProjectDist / backLength, ref result);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_158 = __this->___samples_0;
		int32_t L_159 = V_9;
		NullCheck(L_158);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_160 = __this->___samples_0;
		int32_t L_161 = V_8;
		NullCheck(L_160);
		float L_162 = V_15;
		float L_163 = V_13;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_164 = ___2_result;
		SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C(((L_158)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_159))), ((L_160)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_161))), ((float)(L_162/L_163)), L_164, NULL);
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(backIndex), GetSamplePercent(index), backProjectDist / backLength);
		int32_t L_165 = __this->___sampleMode_2;
		V_39 = (bool)((((int32_t)L_165) == ((int32_t)1))? 1 : 0);
		bool L_166 = V_39;
		if (!L_166)
		{
			goto IL_0422;
		}
	}
	{
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(backIndex), GetSamplePercent(index), backProjectDist / backLength);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_167 = ___2_result;
		int32_t L_168 = V_9;
		double L_169;
		L_169 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_168, NULL);
		int32_t L_170 = V_8;
		double L_171;
		L_171 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_170, NULL);
		float L_172 = V_15;
		float L_173 = V_13;
		double L_174;
		L_174 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_169, L_171, ((double)((float)(L_172/L_173))), NULL);
		L_167->___percent_5 = L_174;
	}

IL_0422:
	{
		goto IL_047d;
	}

IL_0425:
	{
		// SplineSample.Lerp(ref samples[frontIndex], ref samples[index], frontProjectDist / frontLength, ref result);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_175 = __this->___samples_0;
		int32_t L_176 = V_10;
		NullCheck(L_175);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_177 = __this->___samples_0;
		int32_t L_178 = V_8;
		NullCheck(L_177);
		float L_179 = V_16;
		float L_180 = V_14;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_181 = ___2_result;
		SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C(((L_175)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_176))), ((L_177)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_178))), ((float)(L_179/L_180)), L_181, NULL);
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(frontIndex), GetSamplePercent(index), frontProjectDist / frontLength);
		int32_t L_182 = __this->___sampleMode_2;
		V_40 = (bool)((((int32_t)L_182) == ((int32_t)1))? 1 : 0);
		bool L_183 = V_40;
		if (!L_183)
		{
			goto IL_047c;
		}
	}
	{
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(frontIndex), GetSamplePercent(index), frontProjectDist / frontLength);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_184 = ___2_result;
		int32_t L_185 = V_10;
		double L_186;
		L_186 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_185, NULL);
		int32_t L_187 = V_8;
		double L_188;
		L_188 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_187, NULL);
		float L_189 = V_16;
		float L_190 = V_14;
		double L_191;
		L_191 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_186, L_188, ((double)((float)(L_189/L_190))), NULL);
		L_184->___percent_5 = L_191;
	}

IL_047c:
	{
	}

IL_047d:
	{
		goto IL_0541;
	}

IL_0483:
	{
		// else if (backIndex < index)
		int32_t L_192 = V_9;
		int32_t L_193 = V_8;
		V_41 = (bool)((((int32_t)L_192) < ((int32_t)L_193))? 1 : 0);
		bool L_194 = V_41;
		if (!L_194)
		{
			goto IL_04e9;
		}
	}
	{
		// SplineSample.Lerp(ref samples[backIndex], ref samples[index], backProjectDist / backLength, ref result);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_195 = __this->___samples_0;
		int32_t L_196 = V_9;
		NullCheck(L_195);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_197 = __this->___samples_0;
		int32_t L_198 = V_8;
		NullCheck(L_197);
		float L_199 = V_15;
		float L_200 = V_13;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_201 = ___2_result;
		SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C(((L_195)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_196))), ((L_197)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_198))), ((float)(L_199/L_200)), L_201, NULL);
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(backIndex), GetSamplePercent(index), backProjectDist / backLength);
		int32_t L_202 = __this->___sampleMode_2;
		V_42 = (bool)((((int32_t)L_202) == ((int32_t)1))? 1 : 0);
		bool L_203 = V_42;
		if (!L_203)
		{
			goto IL_04e6;
		}
	}
	{
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(backIndex), GetSamplePercent(index), backProjectDist / backLength);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_204 = ___2_result;
		int32_t L_205 = V_9;
		double L_206;
		L_206 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_205, NULL);
		int32_t L_207 = V_8;
		double L_208;
		L_208 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_207, NULL);
		float L_209 = V_15;
		float L_210 = V_13;
		double L_211;
		L_211 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_206, L_208, ((double)((float)(L_209/L_210))), NULL);
		L_204->___percent_5 = L_211;
	}

IL_04e6:
	{
		goto IL_0541;
	}

IL_04e9:
	{
		// SplineSample.Lerp(ref samples[frontIndex], ref samples[index], frontProjectDist / frontLength, ref result);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_212 = __this->___samples_0;
		int32_t L_213 = V_10;
		NullCheck(L_212);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_214 = __this->___samples_0;
		int32_t L_215 = V_8;
		NullCheck(L_214);
		float L_216 = V_16;
		float L_217 = V_14;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_218 = ___2_result;
		SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C(((L_212)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_213))), ((L_214)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_215))), ((float)(L_216/L_217)), L_218, NULL);
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(frontIndex), GetSamplePercent(index), frontProjectDist / frontLength);
		int32_t L_219 = __this->___sampleMode_2;
		V_43 = (bool)((((int32_t)L_219) == ((int32_t)1))? 1 : 0);
		bool L_220 = V_43;
		if (!L_220)
		{
			goto IL_0540;
		}
	}
	{
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(frontIndex), GetSamplePercent(index), frontProjectDist / frontLength);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_221 = ___2_result;
		int32_t L_222 = V_10;
		double L_223;
		L_223 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_222, NULL);
		int32_t L_224 = V_8;
		double L_225;
		L_225 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, L_224, NULL);
		float L_226 = V_16;
		float L_227 = V_14;
		double L_228;
		L_228 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_223, L_225, ((double)((float)(L_226/L_227))), NULL);
		L_221->___percent_5 = L_228;
	}

IL_0540:
	{
	}

IL_0541:
	{
		// if (samples.Length > 1 && from == 0.0 && to == 1.0 && result.percent < samples[1].percent) //Handle looped splines
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_229 = __this->___samples_0;
		NullCheck(L_229);
		if ((((int32_t)((int32_t)(((RuntimeArray*)L_229)->max_length))) <= ((int32_t)1)))
		{
			goto IL_0581;
		}
	}
	{
		double L_230 = ___3_from;
		if ((!(((double)L_230) == ((double)(0.0)))))
		{
			goto IL_0581;
		}
	}
	{
		double L_231 = ___4_to;
		if ((!(((double)L_231) == ((double)(1.0)))))
		{
			goto IL_0581;
		}
	}
	{
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_232 = ___2_result;
		double L_233 = L_232->___percent_5;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_234 = __this->___samples_0;
		NullCheck(L_234);
		double L_235 = ((L_234)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___percent_5;
		G_B57_0 = ((((double)L_233) < ((double)L_235))? 1 : 0);
		goto IL_0582;
	}

IL_0581:
	{
		G_B57_0 = 0;
	}

IL_0582:
	{
		V_44 = (bool)G_B57_0;
		bool L_236 = V_44;
		if (!L_236)
		{
			goto IL_06a9;
		}
	}
	{
		// Vector3 projected = LinearAlgebraUtility.ProjectOnLine(samples[samples.Length - 1].position, samples[samples.Length - 2].position, position);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_237 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_238 = __this->___samples_0;
		NullCheck(L_238);
		NullCheck(L_237);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_239 = ((L_237)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_238)->max_length)), 1)))))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_240 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_241 = __this->___samples_0;
		NullCheck(L_241);
		NullCheck(L_240);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_242 = ((L_240)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_241)->max_length)), 2)))))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_243 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_244;
		L_244 = LinearAlgebraUtility_ProjectOnLine_m5A6BF6DD69841B252A2A1D18F802453BACAAE278(L_239, L_242, L_243, NULL);
		V_45 = L_244;
		// if ((position - projected).sqrMagnitude < (position - result.position).sqrMagnitude)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_245 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_246 = V_45;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_247;
		L_247 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_245, L_246, NULL);
		V_20 = L_247;
		float L_248;
		L_248 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_249 = ___0_position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_250 = ___2_result;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_251 = L_250->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_252;
		L_252 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_249, L_251, NULL);
		V_20 = L_252;
		float L_253;
		L_253 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_20), NULL);
		V_46 = (bool)((((float)L_248) < ((float)L_253))? 1 : 0);
		bool L_254 = V_46;
		if (!L_254)
		{
			goto IL_06a8;
		}
	}
	{
		// double l = LinearAlgebraUtility.InverseLerp(samples[samples.Length - 1].position, samples[samples.Length - 2].position, projected);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_255 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_256 = __this->___samples_0;
		NullCheck(L_256);
		NullCheck(L_255);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_257 = ((L_255)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_256)->max_length)), 1)))))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_258 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_259 = __this->___samples_0;
		NullCheck(L_259);
		NullCheck(L_258);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_260 = ((L_258)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_259)->max_length)), 2)))))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_261 = V_45;
		float L_262;
		L_262 = LinearAlgebraUtility_InverseLerp_m09FCFA5329C5F9B0FBE3E4D2BE69D4C4108F7968(L_257, L_260, L_261, NULL);
		V_47 = ((double)L_262);
		// SplineSample.Lerp(ref samples[samples.Length - 1], ref samples[samples.Length - 2], l, ref result);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_263 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_264 = __this->___samples_0;
		NullCheck(L_264);
		NullCheck(L_263);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_265 = __this->___samples_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_266 = __this->___samples_0;
		NullCheck(L_266);
		NullCheck(L_265);
		double L_267 = V_47;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_268 = ___2_result;
		SplineSample_Lerp_mDC2046D9C41B063337F15327E3B8FF688E8C4352(((L_263)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_264)->max_length)), 1))))), ((L_265)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_266)->max_length)), 2))))), L_267, L_268, NULL);
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(samples.Length - 1), GetSamplePercent(samples.Length - 2), l);
		int32_t L_269 = __this->___sampleMode_2;
		V_48 = (bool)((((int32_t)L_269) == ((int32_t)1))? 1 : 0);
		bool L_270 = V_48;
		if (!L_270)
		{
			goto IL_06a7;
		}
	}
	{
		// if (sampleMode == SplineComputer.SampleMode.Uniform) result.percent = DMath.Lerp(GetSamplePercent(samples.Length - 1), GetSamplePercent(samples.Length - 2), l);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_271 = ___2_result;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_272 = __this->___samples_0;
		NullCheck(L_272);
		double L_273;
		L_273 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_272)->max_length)), 1)), NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_274 = __this->___samples_0;
		NullCheck(L_274);
		double L_275;
		L_275 = SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0(__this, ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_274)->max_length)), 2)), NULL);
		double L_276 = V_47;
		double L_277;
		L_277 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_273, L_275, L_276, NULL);
		L_271->___percent_5 = L_277;
	}

IL_06a7:
	{
	}

IL_06a8:
	{
	}

IL_06a9:
	{
		// }
		return;
	}
}
// System.Double Dreamteck.Splines.SampleCollection::GetSamplePercent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double SampleCollection_GetSamplePercent_m786D6EBE7E0B8497A7A61C7C9383369EBF521DE0 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, int32_t ___0_sampleIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	{
		// if (sampleMode == SplineComputer.SampleMode.Optimized)
		int32_t L_0 = __this->___sampleMode_2;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)2))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_002a;
		}
	}
	{
		// return samples[optimizedIndices[sampleIndex]].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_2 = __this->___samples_0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_3 = __this->___optimizedIndices_1;
		int32_t L_4 = ___0_sampleIndex;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		int32_t L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		double L_7 = ((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)))->___percent_5;
		V_1 = L_7;
		goto IL_003b;
	}

IL_002a:
	{
		// return (double)sampleIndex / (samples.Length - 1);
		int32_t L_8 = ___0_sampleIndex;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_9 = __this->___samples_0;
		NullCheck(L_9);
		V_1 = ((double)(((double)L_8)/((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_9)->max_length)), 1)))));
		goto IL_003b;
	}

IL_003b:
	{
		// }
		double L_10 = V_1;
		return L_10;
	}
}
// System.Single Dreamteck.Splines.SampleCollection::CalculateLength(System.Double,System.Double,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SampleCollection_CalculateLength_m5BCA0BA8E98606E12D5B8FC76ADC6A9FA7EEA825 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, double ___0_from, double ___1_to, bool ___2_preventInvert, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!hasSamples) return 0f;
		bool L_0;
		L_0 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (!hasSamples) return 0f;
		V_6 = (0.0f);
		goto IL_00c5;
	}

IL_001c:
	{
		// Spline.FormatFromTo(ref from, ref to, preventInvert);
		bool L_2 = ___2_preventInvert;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Spline_FormatFromTo_m22E4F3E55C75E1ADE65714E8C8B27E3C535F9B04((&___0_from), (&___1_to), L_2, NULL);
		// float length = 0f;
		V_0 = (0.0f);
		// Vector3 lastPos = EvaluatePosition(from);
		double L_3 = ___0_from;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = SampleCollection_EvaluatePosition_m5F4239473DA1391082355974BCA8D5FE36981595(__this, L_3, NULL);
		V_1 = L_4;
		// GetSamplingValues(from, out fromIndex, out lerp);
		double L_5 = ___0_from;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_5, (&V_2), (&V_4), NULL);
		// GetSamplingValues(to, out toIndex, out lerp);
		double L_6 = ___1_to;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_6, (&V_3), (&V_4), NULL);
		// if (lerp > 0.0 && toIndex < this.length - 1)
		double L_7 = V_4;
		if ((!(((double)L_7) > ((double)(0.0)))))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_8 = V_3;
		int32_t L_9;
		L_9 = SampleCollection_get_length_mB42A3EAF2CB5B8F16CBF5D91048A6DC72A17BD3B(__this, NULL);
		G_B5_0 = ((((int32_t)L_8) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_9, 1))))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B5_0 = 0;
	}

IL_0068:
	{
		V_7 = (bool)G_B5_0;
		bool L_10 = V_7;
		if (!L_10)
		{
			goto IL_0074;
		}
	}
	{
		// toIndex++;
		int32_t L_11 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0074:
	{
		// for (int i = fromIndex + 1; i < toIndex; i++)
		int32_t L_12 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_add(L_12, 1));
		goto IL_00a5;
	}

IL_007b:
	{
		// Vector3 currentPos = samples[i].position;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_13 = __this->___samples_0;
		int32_t L_14 = V_8;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_14)))->___position_0;
		V_9 = L_15;
		// length += Vector3.Distance(currentPos, lastPos);
		float L_16 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_1;
		float L_19;
		L_19 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_17, L_18, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_16, L_19));
		// lastPos = currentPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = V_9;
		V_1 = L_20;
		// for (int i = fromIndex + 1; i < toIndex; i++)
		int32_t L_21 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_21, 1));
	}

IL_00a5:
	{
		// for (int i = fromIndex + 1; i < toIndex; i++)
		int32_t L_22 = V_8;
		int32_t L_23 = V_3;
		V_10 = (bool)((((int32_t)L_22) < ((int32_t)L_23))? 1 : 0);
		bool L_24 = V_10;
		if (L_24)
		{
			goto IL_007b;
		}
	}
	{
		// length += Vector3.Distance(EvaluatePosition(to), lastPos);
		float L_25 = V_0;
		double L_26 = ___1_to;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = SampleCollection_EvaluatePosition_m5F4239473DA1391082355974BCA8D5FE36981595(__this, L_26, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_1;
		float L_29;
		L_29 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_27, L_28, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_25, L_29));
		// return length;
		float L_30 = V_0;
		V_6 = L_30;
		goto IL_00c5;
	}

IL_00c5:
	{
		// }
		float L_31 = V_6;
		return L_31;
	}
}
// System.Single Dreamteck.Splines.SampleCollection::CalculateLengthWithOffset(UnityEngine.Vector3,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float SampleCollection_CalculateLengthWithOffset_mE7DAFD0BD859B149600C18B3E9D185F9D49DD476 (SampleCollection_t3BD25558B6B30C03435AB5EE0C463CB998601265* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_offset, double ___1_from, double ___2_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	double V_4 = 0.0;
	bool V_5 = false;
	float V_6 = 0.0f;
	bool V_7 = false;
	int32_t V_8 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	bool V_10 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!hasSamples) return 0f;
		bool L_0;
		L_0 = SampleCollection_get_hasSamples_mB6A2376A38325B047A3CFB35EFEF4DE64F48070F(__this, NULL);
		V_5 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_5;
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		// if (!hasSamples) return 0f;
		V_6 = (0.0f);
		goto IL_028e;
	}

IL_001c:
	{
		// Spline.FormatFromTo(ref from, ref to);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Spline_FormatFromTo_m22E4F3E55C75E1ADE65714E8C8B27E3C535F9B04((&___1_from), (&___2_to), (bool)1, NULL);
		// float length = 0f;
		V_0 = (0.0f);
		// Evaluate(from, ref _workSample);
		double L_2 = ___1_from;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_3 = (&__this->____workSample_3);
		SampleCollection_Evaluate_mAAC912C0D30624A4CE054FDD16943264D579BD20(__this, L_2, L_3, NULL);
		// Vector3 lastPos = _workSample.position + _workSample.up * (offset.y * _workSample.size) + _workSample.right * (offset.x * _workSample.size) + _workSample.forward * (offset.z * _workSample.size);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_4 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___position_0;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_6 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = L_6->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_offset;
		float L_9 = L_8.___y_3;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_10 = (&__this->____workSample_3);
		float L_11 = L_10->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_7, ((float)il2cpp_codegen_multiply(L_9, L_11)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_5, L_12, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_14 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_offset;
		float L_17 = L_16.___x_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_18 = (&__this->____workSample_3);
		float L_19 = L_18->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_15, ((float)il2cpp_codegen_multiply(L_17, L_19)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_20, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_22 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = L_22->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___0_offset;
		float L_25 = L_24.___z_4;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_26 = (&__this->____workSample_3);
		float L_27 = L_26->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_23, ((float)il2cpp_codegen_multiply(L_25, L_27)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_28, NULL);
		V_1 = L_29;
		// GetSamplingValues(from, out fromIndex, out lerp);
		double L_30 = ___1_from;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_30, (&V_2), (&V_4), NULL);
		// GetSamplingValues(to, out toIndex, out lerp);
		double L_31 = ___2_to;
		SampleCollection_GetSamplingValues_mEFAC249D9870E0F0EE0CFC9637EF39BBC68AE843(__this, L_31, (&V_3), (&V_4), NULL);
		// if (lerp > 0.0 && toIndex < this.length - 1)
		double L_32 = V_4;
		if ((!(((double)L_32) > ((double)(0.0)))))
		{
			goto IL_00ee;
		}
	}
	{
		int32_t L_33 = V_3;
		int32_t L_34;
		L_34 = SampleCollection_get_length_mB42A3EAF2CB5B8F16CBF5D91048A6DC72A17BD3B(__this, NULL);
		G_B5_0 = ((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_subtract(L_34, 1))))? 1 : 0);
		goto IL_00ef;
	}

IL_00ee:
	{
		G_B5_0 = 0;
	}

IL_00ef:
	{
		V_7 = (bool)G_B5_0;
		bool L_35 = V_7;
		if (!L_35)
		{
			goto IL_00fb;
		}
	}
	{
		// toIndex++;
		int32_t L_36 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00fb:
	{
		// for (int i = fromIndex + 1; i < toIndex; i++)
		int32_t L_37 = V_2;
		V_8 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		goto IL_01ce;
	}

IL_0105:
	{
		// Vector3 newPos = samples[i].position + samples[i].up * (offset.y * samples[i].size) + samples[i].right * (offset.x * samples[i].size) + samples[i].forward * (offset.z * samples[i].size);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_38 = __this->___samples_0;
		int32_t L_39 = V_8;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___position_0;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_41 = __this->___samples_0;
		int32_t L_42 = V_8;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_42)))->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ___0_offset;
		float L_45 = L_44.___y_3;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_46 = __this->___samples_0;
		int32_t L_47 = V_8;
		NullCheck(L_46);
		float L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_43, ((float)il2cpp_codegen_multiply(L_45, L_48)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_49, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_51 = __this->___samples_0;
		int32_t L_52 = V_8;
		NullCheck(L_51);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(((L_51)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_52))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54 = ___0_offset;
		float L_55 = L_54.___x_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_56 = __this->___samples_0;
		int32_t L_57 = V_8;
		NullCheck(L_56);
		float L_58 = ((L_56)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_57)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		L_59 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_53, ((float)il2cpp_codegen_multiply(L_55, L_58)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_59, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_61 = __this->___samples_0;
		int32_t L_62 = V_8;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = ___0_offset;
		float L_65 = L_64.___z_4;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_66 = __this->___samples_0;
		int32_t L_67 = V_8;
		NullCheck(L_66);
		float L_68 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67)))->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		L_69 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_63, ((float)il2cpp_codegen_multiply(L_65, L_68)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_60, L_69, NULL);
		V_9 = L_70;
		// length += Vector3.Distance(newPos, lastPos);
		float L_71 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_1;
		float L_74;
		L_74 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_72, L_73, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_71, L_74));
		// lastPos = newPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75 = V_9;
		V_1 = L_75;
		// for (int i = fromIndex + 1; i < toIndex; i++)
		int32_t L_76 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01ce:
	{
		// for (int i = fromIndex + 1; i < toIndex; i++)
		int32_t L_77 = V_8;
		int32_t L_78 = V_3;
		V_10 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_10;
		if (L_79)
		{
			goto IL_0105;
		}
	}
	{
		// Evaluate(to, ref _workSample);
		double L_80 = ___2_to;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_81 = (&__this->____workSample_3);
		SampleCollection_Evaluate_mAAC912C0D30624A4CE054FDD16943264D579BD20(__this, L_80, L_81, NULL);
		// _workSample.position += _workSample.up * (offset.y * _workSample.size) + _workSample.right * (offset.x * _workSample.size) + _workSample.forward * (offset.z * _workSample.size);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_82 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_83 = (&L_82->___position_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_84 = L_83;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_85 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_84);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_86 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = L_86->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = ___0_offset;
		float L_89 = L_88.___y_3;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_90 = (&__this->____workSample_3);
		float L_91 = L_90->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92;
		L_92 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_87, ((float)il2cpp_codegen_multiply(L_89, L_91)), NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_93 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(L_93, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = ___0_offset;
		float L_96 = L_95.___x_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_97 = (&__this->____workSample_3);
		float L_98 = L_97->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_99;
		L_99 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_94, ((float)il2cpp_codegen_multiply(L_96, L_98)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_100;
		L_100 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_92, L_99, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_101 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_102 = L_101->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_103 = ___0_offset;
		float L_104 = L_103.___z_4;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_105 = (&__this->____workSample_3);
		float L_106 = L_105->___size_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_107;
		L_107 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_102, ((float)il2cpp_codegen_multiply(L_104, L_106)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108;
		L_108 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_100, L_107, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_109;
		L_109 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_85, L_108, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_84 = L_109;
		// length += Vector3.Distance(_workSample.position, lastPos);
		float L_110 = V_0;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_111 = (&__this->____workSample_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112 = L_111->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113 = V_1;
		float L_114;
		L_114 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_112, L_113, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_110, L_114));
		// return length;
		float L_115 = V_0;
		V_6 = L_115;
		goto IL_028e;
	}

IL_028e:
	{
		// }
		float L_116 = V_6;
		return L_116;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Dreamteck.Splines.Spline::get_isClosed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Spline_get_isClosed_m34A10FC3D1C8ACF48363370D396B0D959658D793 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return closed && points.Length >= 3;
		bool L_0 = __this->___closed_15;
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_1 = __this->___points_0;
		NullCheck(L_1);
		G_B3_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) < ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 0;
	}

IL_001a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Double Dreamteck.Splines.Spline::get_moveStep()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	{
		// if (type == Type.Linear) return 1f / (points.Length-1);
		int32_t L_0 = __this->___type_1;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0023;
		}
	}
	{
		// if (type == Type.Linear) return 1f / (points.Length-1);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_2 = __this->___points_0;
		NullCheck(L_2);
		V_1 = ((double)((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_2)->max_length)), 1))))));
		goto IL_0036;
	}

IL_0023:
	{
		// return 1f / (iterations-1);
		int32_t L_3;
		L_3 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_1 = ((double)((float)((1.0f)/((float)((int32_t)il2cpp_codegen_subtract(L_3, 1))))));
		goto IL_0036;
	}

IL_0036:
	{
		// }
		double L_4 = V_1;
		return L_4;
	}
}
// System.Void Dreamteck.Splines.Spline::set_moveStep(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_set_moveStep_mC60E7EBB05FE70CEF2872DE8DDE44DDCE32187FE (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_value, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Int32 Dreamteck.Splines.Spline::get_iterations()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t G_B4_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// if (type == Type.Linear) return closed ? points.Length + 1 : points.Length;
		int32_t L_0 = __this->___type_1;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)3))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_002d;
		}
	}
	{
		// if (type == Type.Linear) return closed ? points.Length + 1 : points.Length;
		bool L_2 = __this->___closed_15;
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = __this->___points_0;
		NullCheck(L_3);
		G_B4_0 = ((int32_t)(((RuntimeArray*)L_3)->max_length));
		goto IL_002a;
	}

IL_0020:
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_4 = __this->___points_0;
		NullCheck(L_4);
		G_B4_0 = ((int32_t)il2cpp_codegen_add(((int32_t)(((RuntimeArray*)L_4)->max_length)), 1));
	}

IL_002a:
	{
		V_2 = G_B4_0;
		goto IL_0059;
	}

IL_002d:
	{
		// int segments = closed ? points.Length : points.Length - 1;
		bool L_5 = __this->___closed_15;
		if (L_5)
		{
			goto IL_0041;
		}
	}
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_6 = __this->___points_0;
		NullCheck(L_6);
		G_B8_0 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1));
		goto IL_0049;
	}

IL_0041:
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_7 = __this->___points_0;
		NullCheck(L_7);
		G_B8_0 = ((int32_t)(((RuntimeArray*)L_7)->max_length));
	}

IL_0049:
	{
		V_0 = G_B8_0;
		// return sampleRate * segments - segments + 1;
		int32_t L_8 = __this->___sampleRate_5;
		int32_t L_9 = V_0;
		int32_t L_10 = V_0;
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), L_10)), 1));
		goto IL_0059;
	}

IL_0059:
	{
		// }
		int32_t L_11 = V_2;
		return L_11;
	}
}
// System.Single Dreamteck.Splines.Spline::get_knotParametrization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_get_knotParametrization_mCBDB30E4CD7B4B6F2723DCA9B74ECF86174C8462 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return _knotParametrization; }
		float L_0 = __this->____knotParametrization_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _knotParametrization; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.Spline::set_knotParametrization(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_set_knotParametrization_m0EC87C250F327BF736C26BE29F083DE9F959CBB1 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, float ___0_value, const RuntimeMethod* method) 
{
	{
		// _knotParametrization = Mathf.Clamp01(value);
		float L_0 = ___0_value;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		__this->____knotParametrization_16 = L_1;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::.ctor(Dreamteck.Splines.Spline/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline__ctor_mC210C6AEBD1530D7E93F719374007541367FA448 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_type, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SplinePoint[] points = new SplinePoint[0];
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = (SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)SZArrayNew(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___points_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_0), (void*)L_0);
		// public Type type = Type.Bezier;
		__this->___type_1 = 2;
		// public bool linearAverageDirection = true;
		__this->___linearAverageDirection_2 = (bool)1;
		// public AnimationCurve customValueInterpolation = null;
		__this->___customValueInterpolation_3 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customValueInterpolation_3), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		// public AnimationCurve customNormalInterpolation = null;
		__this->___customNormalInterpolation_4 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customNormalInterpolation_4), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		// public int sampleRate = 10;
		__this->___sampleRate_5 = ((int32_t)10);
		// private bool closed = false;
		__this->___closed_15 = (bool)0;
		// public Spline(Type type){
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		int32_t L_1 = ___0_type;
		__this->___type_1 = L_1;
		// points = new SplinePoint[0];
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_2 = (SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)SZArrayNew(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___points_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_0), (void*)L_2);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::.ctor(Dreamteck.Splines.Spline/Type,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline__ctor_mD932FC50F1804D51178BD36ADF8AE0099D34A9B3 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_type, int32_t ___1_sampleRate, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SplinePoint[] points = new SplinePoint[0];
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = (SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)SZArrayNew(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___points_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_0), (void*)L_0);
		// public Type type = Type.Bezier;
		__this->___type_1 = 2;
		// public bool linearAverageDirection = true;
		__this->___linearAverageDirection_2 = (bool)1;
		// public AnimationCurve customValueInterpolation = null;
		__this->___customValueInterpolation_3 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customValueInterpolation_3), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		// public AnimationCurve customNormalInterpolation = null;
		__this->___customNormalInterpolation_4 = (AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___customNormalInterpolation_4), (void*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)NULL);
		// public int sampleRate = 10;
		__this->___sampleRate_5 = ((int32_t)10);
		// private bool closed = false;
		__this->___closed_15 = (bool)0;
		// public Spline(Type type, int sampleRate)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.type = type;
		int32_t L_1 = ___0_type;
		__this->___type_1 = L_1;
		// this.sampleRate = sampleRate;
		int32_t L_2 = ___1_sampleRate;
		__this->___sampleRate_5 = L_2;
		// points = new SplinePoint[0];
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = (SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)SZArrayNew(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var, (uint32_t)0);
		__this->___points_0 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___points_0), (void*)L_3);
		// }
		return;
	}
}
// System.Single Dreamteck.Splines.Spline::CalculateLength(System.Double,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_CalculateLength_m50ED2FB8659B3E8352599296206600C047279894 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_from, double ___1_to, double ___2_resolution, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	bool V_6 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (points.Length == 0) return 0f;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_3 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// if (points.Length == 0) return 0f;
		V_4 = (0.0f);
		goto IL_00b5;
	}

IL_001b:
	{
		// resolution = DMath.Clamp01(resolution);
		double L_2 = ___2_resolution;
		double L_3;
		L_3 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_2, NULL);
		___2_resolution = L_3;
		// if (resolution == 0.0) return 0f;
		double L_4 = ___2_resolution;
		V_5 = (bool)((((double)L_4) == ((double)(0.0)))? 1 : 0);
		bool L_5 = V_5;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		// if (resolution == 0.0) return 0f;
		V_4 = (0.0f);
		goto IL_00b5;
	}

IL_003e:
	{
		// from = DMath.Clamp01(from);
		double L_6 = ___0_from;
		double L_7;
		L_7 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_6, NULL);
		___0_from = L_7;
		// to = DMath.Clamp01(to);
		double L_8 = ___1_to;
		double L_9;
		L_9 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_8, NULL);
		___1_to = L_9;
		// if (to < from) to = from;
		double L_10 = ___1_to;
		double L_11 = ___0_from;
		V_6 = (bool)((((double)L_10) < ((double)L_11))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// if (to < from) to = from;
		double L_13 = ___0_from;
		___1_to = L_13;
	}

IL_005b:
	{
		// double percent = from;
		double L_14 = ___0_from;
		V_0 = L_14;
		// Vector3 lastPos = EvaluatePosition(percent);
		double L_15 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_15, NULL);
		V_1 = L_16;
		// float sum = 0f;
		V_2 = (0.0f);
		goto IL_00ab;
	}

IL_006d:
	{
		// percent = DMath.Move(percent, to, moveStep / resolution);
		double L_17 = V_0;
		double L_18 = ___1_to;
		double L_19;
		L_19 = Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9(__this, NULL);
		double L_20 = ___2_resolution;
		double L_21;
		L_21 = DMath_Move_mFD096234DD99170C682673771D4A375192C5B806(L_17, L_18, ((double)(L_19/L_20)), NULL);
		V_0 = L_21;
		// Vector3 pos = EvaluatePosition(percent);
		double L_22 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_22, NULL);
		V_7 = L_23;
		// sum += (pos - lastPos).magnitude;
		float L_24 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_26, NULL);
		V_8 = L_27;
		float L_28;
		L_28 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_8), NULL);
		V_2 = ((float)il2cpp_codegen_add(L_24, L_28));
		// lastPos = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_7;
		V_1 = L_29;
		// if (percent == to) break;
		double L_30 = V_0;
		double L_31 = ___1_to;
		V_9 = (bool)((((double)L_30) == ((double)L_31))? 1 : 0);
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00aa;
		}
	}
	{
		// if (percent == to) break;
		goto IL_00b0;
	}

IL_00aa:
	{
	}

IL_00ab:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_006d;
	}

IL_00b0:
	{
		// return sum;
		float L_33 = V_2;
		V_4 = L_33;
		goto IL_00b5;
	}

IL_00b5:
	{
		// }
		float L_34 = V_4;
		return L_34;
	}
}
// System.Double Dreamteck.Splines.Spline::Project(UnityEngine.Vector3,System.Int32,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_Project_m17E27FC518E13A2B4C447E1CB9EAB13980096A15 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, int32_t ___1_subdivide, double ___2_from, double ___3_to, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	double V_5 = 0.0;
	bool V_6 = false;
	int32_t G_B6_0 = 0;
	{
		// if (points.Length == 0) return 0.0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// if (points.Length == 0) return 0.0;
		V_1 = (0.0);
		goto IL_0110;
	}

IL_001e:
	{
		// if (closed && from == 0.0 && to == 1.0) //Handle looped splines
		bool L_2 = __this->___closed_15;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		double L_3 = ___2_from;
		if ((!(((double)L_3) == ((double)(0.0)))))
		{
			goto IL_0041;
		}
	}
	{
		double L_4 = ___3_to;
		G_B6_0 = ((((double)L_4) == ((double)(1.0)))? 1 : 0);
		goto IL_0042;
	}

IL_0041:
	{
		G_B6_0 = 0;
	}

IL_0042:
	{
		V_2 = (bool)G_B6_0;
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_00e4;
		}
	}
	{
		// double closest = GetClosestPoint(subdivide, position, from, to, Mathf.RoundToInt(Mathf.Max(iterations / points.Length, 10)) * 5);
		int32_t L_6 = ___1_subdivide;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_position;
		double L_8 = ___2_from;
		double L_9 = ___3_to;
		int32_t L_10;
		L_10 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_11 = __this->___points_0;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)(L_10/((int32_t)(((RuntimeArray*)L_11)->max_length)))), ((int32_t)10), NULL);
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)L_12), NULL);
		double L_14;
		L_14 = Spline_GetClosestPoint_m3F708EF3EEBEA09900C7A8E4487DCCCFE02E2D7B(__this, L_6, L_7, L_8, L_9, ((int32_t)il2cpp_codegen_multiply(L_13, 5)), NULL);
		V_3 = L_14;
		// if (closest < moveStep)
		double L_15 = V_3;
		double L_16;
		L_16 = Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9(__this, NULL);
		V_4 = (bool)((((double)L_15) < ((double)L_16))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_00e0;
		}
	}
	{
		// double nextClosest = GetClosestPoint(subdivide, position, 0.5, to, Mathf.RoundToInt(Mathf.Max(iterations / points.Length, 10)) * 5);
		int32_t L_18 = ___1_subdivide;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___0_position;
		double L_20 = ___3_to;
		int32_t L_21;
		L_21 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_22 = __this->___points_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)(L_21/((int32_t)(((RuntimeArray*)L_22)->max_length)))), ((int32_t)10), NULL);
		int32_t L_24;
		L_24 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)L_23), NULL);
		double L_25;
		L_25 = Spline_GetClosestPoint_m3F708EF3EEBEA09900C7A8E4487DCCCFE02E2D7B(__this, L_18, L_19, (0.5), L_20, ((int32_t)il2cpp_codegen_multiply(L_24, 5)), NULL);
		V_5 = L_25;
		// if (Vector3.Distance(position, EvaluatePosition(nextClosest)) < Vector3.Distance(position, EvaluatePosition(closest))) return nextClosest;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = ___0_position;
		double L_27 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_27, NULL);
		float L_29;
		L_29 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_26, L_28, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___0_position;
		double L_31 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_31, NULL);
		float L_33;
		L_33 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_30, L_32, NULL);
		V_6 = (bool)((((float)L_29) < ((float)L_33))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_00df;
		}
	}
	{
		// if (Vector3.Distance(position, EvaluatePosition(nextClosest)) < Vector3.Distance(position, EvaluatePosition(closest))) return nextClosest;
		double L_35 = V_5;
		V_1 = L_35;
		goto IL_0110;
	}

IL_00df:
	{
	}

IL_00e0:
	{
		// return closest;
		double L_36 = V_3;
		V_1 = L_36;
		goto IL_0110;
	}

IL_00e4:
	{
		// return GetClosestPoint(subdivide, position, from, to, Mathf.RoundToInt(Mathf.Max(iterations / points.Length, 10)) * 5);
		int32_t L_37 = ___1_subdivide;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = ___0_position;
		double L_39 = ___2_from;
		double L_40 = ___3_to;
		int32_t L_41;
		L_41 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_42 = __this->___points_0;
		NullCheck(L_42);
		int32_t L_43;
		L_43 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)(L_41/((int32_t)(((RuntimeArray*)L_42)->max_length)))), ((int32_t)10), NULL);
		int32_t L_44;
		L_44 = Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline(((float)L_43), NULL);
		double L_45;
		L_45 = Spline_GetClosestPoint_m3F708EF3EEBEA09900C7A8E4487DCCCFE02E2D7B(__this, L_37, L_38, L_39, L_40, ((int32_t)il2cpp_codegen_multiply(L_44, 5)), NULL);
		V_1 = L_45;
		goto IL_0110;
	}

IL_0110:
	{
		// }
		double L_46 = V_1;
		return L_46;
	}
}
// System.Boolean Dreamteck.Splines.Spline::Raycast(UnityEngine.RaycastHit&,System.Double&,UnityEngine.LayerMask,System.Double,System.Double,System.Double,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Spline_Raycast_m750039A46A05C2A561112147D3E600CF75B3DB84 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* ___0_hit, double* ___1_hitPercent, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___2_layerMask, double ___3_resolution, double ___4_from, double ___5_to, int32_t ___6_hitTriggers, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	bool V_3 = false;
	double V_4 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	double V_7 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	bool V_9 = false;
	bool V_10 = false;
	{
		// resolution = DMath.Clamp01(resolution);
		double L_0 = ___3_resolution;
		double L_1;
		L_1 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_0, NULL);
		___3_resolution = L_1;
		// from = DMath.Clamp01(from);
		double L_2 = ___4_from;
		double L_3;
		L_3 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_2, NULL);
		___4_from = L_3;
		// to = DMath.Clamp01(to);
		double L_4 = ___5_to;
		double L_5;
		L_5 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_4, NULL);
		___5_to = L_5;
		// double percent = from;
		double L_6 = ___4_from;
		V_0 = L_6;
		// Vector3 fromPos = EvaluatePosition(percent);
		double L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_7, NULL);
		V_1 = L_8;
		// hitPercent = 0f;
		double* L_9 = ___1_hitPercent;
		*((double*)L_9) = (double)(0.0);
		// if (resolution == 0f)
		double L_10 = ___3_resolution;
		V_2 = (bool)((((double)L_10) == ((double)(0.0)))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_005d;
		}
	}
	{
		// hit = new RaycastHit();
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_12 = ___0_hit;
		il2cpp_codegen_initobj(L_12, sizeof(RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5));
		// hitPercent = 0f;
		double* L_13 = ___1_hitPercent;
		*((double*)L_13) = (double)(0.0);
		// return false;
		V_3 = (bool)0;
		goto IL_00f0;
	}

IL_005d:
	{
		goto IL_00e4;
	}

IL_0062:
	{
		// double prevPercent = percent;
		double L_14 = V_0;
		V_4 = L_14;
		// percent = DMath.Move(percent, to, moveStep / resolution);
		double L_15 = V_0;
		double L_16 = ___5_to;
		double L_17;
		L_17 = Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9(__this, NULL);
		double L_18 = ___3_resolution;
		double L_19;
		L_19 = DMath_Move_mFD096234DD99170C682673771D4A375192C5B806(L_15, L_16, ((double)(L_17/L_18)), NULL);
		V_0 = L_19;
		// Vector3 toPos = EvaluatePosition(percent);
		double L_20 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_20, NULL);
		V_5 = L_21;
		// if (Physics.Linecast(fromPos, toPos, out hit, layerMask, hitTriggers))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = V_5;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_24 = ___0_hit;
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_25 = ___2_layerMask;
		int32_t L_26;
		L_26 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_25, NULL);
		int32_t L_27 = ___6_hitTriggers;
		bool L_28;
		L_28 = Physics_Linecast_m399C6C11AD7ECE11241A37C08BAB4D97CF3CB925(L_22, L_23, L_24, L_26, L_27, NULL);
		V_6 = L_28;
		bool L_29 = V_6;
		if (!L_29)
		{
			goto IL_00d3;
		}
	}
	{
		// double segmentPercent = (hit.point - fromPos).sqrMagnitude / (toPos - fromPos).sqrMagnitude;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5* L_30 = ___0_hit;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_31, L_32, NULL);
		V_8 = L_33;
		float L_34;
		L_34 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_8), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_35, L_36, NULL);
		V_8 = L_37;
		float L_38;
		L_38 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_8), NULL);
		V_7 = ((double)((float)(L_34/L_38)));
		// hitPercent = DMath.Lerp(prevPercent, percent, segmentPercent);
		double* L_39 = ___1_hitPercent;
		double L_40 = V_4;
		double L_41 = V_0;
		double L_42 = V_7;
		double L_43;
		L_43 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_40, L_41, L_42, NULL);
		*((double*)L_39) = (double)L_43;
		// return true;
		V_3 = (bool)1;
		goto IL_00f0;
	}

IL_00d3:
	{
		// fromPos = toPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_5;
		V_1 = L_44;
		// if (percent == to) break;
		double L_45 = V_0;
		double L_46 = ___5_to;
		V_9 = (bool)((((double)L_45) == ((double)L_46))? 1 : 0);
		bool L_47 = V_9;
		if (!L_47)
		{
			goto IL_00e3;
		}
	}
	{
		// if (percent == to) break;
		goto IL_00ec;
	}

IL_00e3:
	{
	}

IL_00e4:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_0062;
	}

IL_00ec:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_00f0;
	}

IL_00f0:
	{
		// }
		bool L_48 = V_3;
		return L_48;
	}
}
// System.Boolean Dreamteck.Splines.Spline::RaycastAll(UnityEngine.RaycastHit[]&,System.Double[]&,UnityEngine.LayerMask,System.Double,System.Double,System.Double,UnityEngine.QueryTriggerInteraction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Spline_RaycastAll_mC69444D7C5B9D56C3939C7F1FAC9EF88C2F920FA (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** ___0_hits, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___1_hitPercents, LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___2_layerMask, double ___3_resolution, double ___4_from, double ___5_to, int32_t ___6_hitTriggers, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* V_2 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	double V_7 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_8;
	memset((&V_8), 0, sizeof(V_8));
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_9 = NULL;
	int32_t V_10 = 0;
	double V_11 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_12;
	memset((&V_12), 0, sizeof(V_12));
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	{
		// resolution = DMath.Clamp01(resolution);
		double L_0 = ___3_resolution;
		double L_1;
		L_1 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_0, NULL);
		___3_resolution = L_1;
		// from = DMath.Clamp01(from);
		double L_2 = ___4_from;
		double L_3;
		L_3 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_2, NULL);
		___4_from = L_3;
		// to = DMath.Clamp01(to);
		double L_4 = ___5_to;
		double L_5;
		L_5 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_4, NULL);
		___5_to = L_5;
		// double percent = from;
		double L_6 = ___4_from;
		V_0 = L_6;
		// Vector3 fromPos = EvaluatePosition(percent);
		double L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_7, NULL);
		V_1 = L_8;
		// List<RaycastHit> hitList = new List<RaycastHit>();
		List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* L_9 = (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*)il2cpp_codegen_object_new(List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC(L_9, List_1__ctor_m7715EBA40C1E9928D580B0D503FA394AB9503EFC_RuntimeMethod_var);
		V_2 = L_9;
		// List<double> percentList = new List<double>();
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_10 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(List_1_t495F03F47D827883530F951D563C0BB7340E5995_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34(L_10, List_1__ctor_m4F495AFEC1141AA7E02729E3105CB569F2CEAD34_RuntimeMethod_var);
		V_3 = L_10;
		// if (resolution == 0f)
		double L_11 = ___3_resolution;
		V_5 = (bool)((((double)L_11) == ((double)(0.0)))? 1 : 0);
		bool L_12 = V_5;
		if (!L_12)
		{
			goto IL_005f;
		}
	}
	{
		// hits = new RaycastHit[0];
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_13 = ___0_hits;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_14 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)SZArrayNew(RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_13) = (RuntimeObject*)L_14;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_13, (void*)(RuntimeObject*)L_14);
		// hitPercents = new double[0];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_15 = ___1_hitPercents;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_16 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_15) = (RuntimeObject*)L_16;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_15, (void*)(RuntimeObject*)L_16);
		// return false;
		V_6 = (bool)0;
		goto IL_0146;
	}

IL_005f:
	{
		// bool hasHit = false;
		V_4 = (bool)0;
		goto IL_0128;
	}

IL_0067:
	{
		// double prevPercent = percent;
		double L_17 = V_0;
		V_7 = L_17;
		// percent = DMath.Move(percent, to, moveStep / resolution);
		double L_18 = V_0;
		double L_19 = ___5_to;
		double L_20;
		L_20 = Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9(__this, NULL);
		double L_21 = ___3_resolution;
		double L_22;
		L_22 = DMath_Move_mFD096234DD99170C682673771D4A375192C5B806(L_18, L_19, ((double)(L_20/L_21)), NULL);
		V_0 = L_22;
		// Vector3 toPos = EvaluatePosition(percent);
		double L_23 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_23, NULL);
		V_8 = L_24;
		// RaycastHit[] h = Physics.RaycastAll(fromPos, toPos - fromPos, Vector3.Distance(fromPos, toPos), layerMask, hitTriggers);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_26, L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_8;
		float L_31;
		L_31 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_29, L_30, NULL);
		LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB L_32 = ___2_layerMask;
		int32_t L_33;
		L_33 = LayerMask_op_Implicit_m7F5A5B9D079281AC445ED39DEE1FCFA9D795810D(L_32, NULL);
		int32_t L_34 = ___6_hitTriggers;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_35;
		L_35 = Physics_RaycastAll_m8B7FB8419A65BEE78927D0EE84916E8DBE7ECD34(L_25, L_28, L_31, L_33, L_34, NULL);
		V_9 = L_35;
		// for (int i = 0; i < h.Length; i++)
		V_10 = 0;
		goto IL_0109;
	}

IL_00ab:
	{
		// hasHit = true;
		V_4 = (bool)1;
		// double segmentPercent = (h[i].point - fromPos).sqrMagnitude / (toPos - fromPos).sqrMagnitude;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_36 = V_9;
		int32_t L_37 = V_10;
		NullCheck(L_36);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = RaycastHit_get_point_m02B764612562AFE0F998CC7CFB2EEDE41BA47F39(((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_37))), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_38, L_39, NULL);
		V_12 = L_40;
		float L_41;
		L_41 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_12), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_43, NULL);
		V_12 = L_44;
		float L_45;
		L_45 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_12), NULL);
		V_11 = ((double)((float)(L_41/L_45)));
		// percentList.Add(DMath.Lerp(prevPercent, percent, segmentPercent));
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_46 = V_3;
		double L_47 = V_7;
		double L_48 = V_0;
		double L_49 = V_11;
		double L_50;
		L_50 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_47, L_48, L_49, NULL);
		NullCheck(L_46);
		List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_inline(L_46, L_50, List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_RuntimeMethod_var);
		// hitList.Add(h[i]);
		List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* L_51 = V_2;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_52 = V_9;
		int32_t L_53 = V_10;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_55 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_51);
		List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_inline(L_51, L_55, List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_RuntimeMethod_var);
		// for (int i = 0; i < h.Length; i++)
		int32_t L_56 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_56, 1));
	}

IL_0109:
	{
		// for (int i = 0; i < h.Length; i++)
		int32_t L_57 = V_10;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_58 = V_9;
		NullCheck(L_58);
		V_13 = (bool)((((int32_t)L_57) < ((int32_t)((int32_t)(((RuntimeArray*)L_58)->max_length))))? 1 : 0);
		bool L_59 = V_13;
		if (L_59)
		{
			goto IL_00ab;
		}
	}
	{
		// fromPos = toPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60 = V_8;
		V_1 = L_60;
		// if (percent == to) break;
		double L_61 = V_0;
		double L_62 = ___5_to;
		V_14 = (bool)((((double)L_61) == ((double)L_62))? 1 : 0);
		bool L_63 = V_14;
		if (!L_63)
		{
			goto IL_0127;
		}
	}
	{
		// if (percent == to) break;
		goto IL_0130;
	}

IL_0127:
	{
	}

IL_0128:
	{
		// while (true)
		V_15 = (bool)1;
		goto IL_0067;
	}

IL_0130:
	{
		// hits = hitList.ToArray();
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8** L_64 = ___0_hits;
		List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* L_65 = V_2;
		NullCheck(L_65);
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_66;
		L_66 = List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797(L_65, List_1_ToArray_mF57EFCD6CC572B292F7FCC3CE18ABDD4CA808797_RuntimeMethod_var);
		*((RuntimeObject**)L_64) = (RuntimeObject*)L_66;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_64, (void*)(RuntimeObject*)L_66);
		// hitPercents = percentList.ToArray();
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_67 = ___1_hitPercents;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_68 = V_3;
		NullCheck(L_68);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_69;
		L_69 = List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3(L_68, List_1_ToArray_m91B6A76F83EF0F01FE14A5BAD9D99BDDFC9499F3_RuntimeMethod_var);
		*((RuntimeObject**)L_67) = (RuntimeObject*)L_69;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_67, (void*)(RuntimeObject*)L_69);
		// return hasHit;
		bool L_70 = V_4;
		V_6 = L_70;
		goto IL_0146;
	}

IL_0146:
	{
		// }
		bool L_71 = V_6;
		return L_71;
	}
}
// System.Double Dreamteck.Splines.Spline::GetPointPercent(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_GetPointPercent_m15F86239227793C30FBB28532BE5DF26522FEA24 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_pointIndex, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	{
		// if (closed)
		bool L_0 = __this->___closed_15;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// return DMath.Clamp01((double)pointIndex / points.Length);
		int32_t L_2 = ___0_pointIndex;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = __this->___points_0;
		NullCheck(L_3);
		double L_4;
		L_4 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(((double)(((double)L_2)/((double)((int32_t)(((RuntimeArray*)L_3)->max_length))))), NULL);
		V_1 = L_4;
		goto IL_0036;
	}

IL_0020:
	{
		// return DMath.Clamp01((double)pointIndex / (points.Length - 1));
		int32_t L_5 = ___0_pointIndex;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_6 = __this->___points_0;
		NullCheck(L_6);
		double L_7;
		L_7 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(((double)(((double)L_5)/((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))))), NULL);
		V_1 = L_7;
		goto IL_0036;
	}

IL_0036:
	{
		// }
		double L_8 = V_1;
		return L_8;
	}
}
// UnityEngine.Vector3 Dreamteck.Splines.Spline::EvaluatePosition(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (points.Length == 0) return Vector3.zero;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_1 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// if (points.Length == 0) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_2;
		goto IL_002d;
	}

IL_0017:
	{
		// Vector3 position = new Vector3();
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2));
		// EvaluatePosition(percent, ref position);
		double L_3 = ___0_percent;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, L_3, (&V_0), NULL);
		// return position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		V_2 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_2;
		return L_5;
	}
}
// Dreamteck.Splines.SplineSample Dreamteck.Splines.Spline::Evaluate(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 Spline_Evaluate_m3FF28C29D4DEBACB76185D51930705F1489FF144 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, const RuntimeMethod* method) 
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// SplineSample result = new SplineSample();
		il2cpp_codegen_initobj((&V_0), sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// Evaluate(percent, ref result);
		double L_0 = ___0_percent;
		Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B(__this, L_0, (&V_0), NULL);
		// return result;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_1 = V_0;
		V_1 = L_1;
		goto IL_0017;
	}

IL_0017:
	{
		// }
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_2 = V_1;
		return L_2;
	}
}
// Dreamteck.Splines.SplineSample Dreamteck.Splines.Spline::Evaluate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 Spline_Evaluate_m8EC7E3F320972B35BC7E4BDF5A5B709A2EE05D45 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_pointIndex, const RuntimeMethod* method) 
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// SplineSample result = new SplineSample();
		il2cpp_codegen_initobj((&V_0), sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// Evaluate(GetPointPercent(pointIndex), ref result);
		int32_t L_0 = ___0_pointIndex;
		double L_1;
		L_1 = Spline_GetPointPercent_m15F86239227793C30FBB28532BE5DF26522FEA24(__this, L_0, NULL);
		Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B(__this, L_1, (&V_0), NULL);
		// return result;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_2 = V_0;
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		// }
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_3 = V_1;
		return L_3;
	}
}
// System.Void Dreamteck.Splines.Spline::Evaluate(System.Int32,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Evaluate_m4CEA39824604481F5526C1EA877198CC0922087E (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_pointIndex, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_result, const RuntimeMethod* method) 
{
	{
		// Evaluate(GetPointPercent(pointIndex), ref result);
		int32_t L_0 = ___0_pointIndex;
		double L_1;
		L_1 = Spline_GetPointPercent_m15F86239227793C30FBB28532BE5DF26522FEA24(__this, L_0, NULL);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_2 = ___1_result;
		Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B(__this, L_1, L_2, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::Evaluate(System.Double,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_sample, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	double V_19 = 0.0;
	bool V_20 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_21;
	memset((&V_21), 0, sizeof(V_21));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	bool V_25 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B32_0 = 0;
	{
		// if (points.Length == 0)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_6 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// sample = new SplineSample();
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_2 = ___1_sample;
		il2cpp_codegen_initobj(L_2, sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// return;
		goto IL_0401;
	}

IL_001e:
	{
		// percent = DMath.Clamp01(percent);
		double L_3 = ___0_percent;
		double L_4;
		L_4 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_3, NULL);
		___0_percent = L_4;
		// if (closed && points.Length <= 2)
		bool L_5 = __this->___closed_15;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_6 = __this->___points_0;
		NullCheck(L_6);
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) > ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003f;
	}

IL_003e:
	{
		G_B5_0 = 0;
	}

IL_003f:
	{
		V_7 = (bool)G_B5_0;
		bool L_7 = V_7;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// closed = false;
		__this->___closed_15 = (bool)0;
	}

IL_004e:
	{
		// if (points.Length == 1)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_8 = __this->___points_0;
		NullCheck(L_8);
		V_8 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))) == ((int32_t)1))? 1 : 0);
		bool L_9 = V_8;
		if (!L_9)
		{
			goto IL_00d3;
		}
	}
	{
		// sample.position = points[0].position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_10 = ___1_sample;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_11 = __this->___points_0;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_2;
		L_10->___position_0 = L_12;
		// sample.up = points[0].normal;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_13 = ___1_sample;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_14 = __this->___points_0;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___normal_4;
		L_13->___up_1 = L_15;
		// sample.forward = Vector3.forward;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_16 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		L_16->___forward_2 = L_17;
		// sample.size = points[0].size;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_18 = ___1_sample;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_19 = __this->___points_0;
		NullCheck(L_19);
		float L_20 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___size_5;
		L_18->___size_4 = L_20;
		// sample.color = points[0].color;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_21 = ___1_sample;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_22 = __this->___points_0;
		NullCheck(L_22);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ((L_22)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___color_3;
		L_21->___color_3 = L_23;
		// sample.percent = percent;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_24 = ___1_sample;
		double L_25 = ___0_percent;
		L_24->___percent_5 = L_25;
		// return;
		goto IL_0401;
	}

IL_00d3:
	{
		// double doubleIndex = (points.Length - 1) * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_26 = __this->___points_0;
		NullCheck(L_26);
		double L_27 = ___0_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), 1))), L_27));
		// if (closed)
		bool L_28 = __this->___closed_15;
		V_9 = L_28;
		bool L_29 = V_9;
		if (!L_29)
		{
			goto IL_00fb;
		}
	}
	{
		// doubleIndex = points.Length * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_30 = __this->___points_0;
		NullCheck(L_30);
		double L_31 = ___0_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_30)->max_length))), L_31));
	}

IL_00fb:
	{
		// int fromIndex = DMath.FloorInt(doubleIndex);
		double L_32 = V_0;
		int32_t L_33;
		L_33 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_32, NULL);
		V_1 = L_33;
		// int toIndex = fromIndex + 1;
		int32_t L_34 = V_1;
		V_2 = ((int32_t)il2cpp_codegen_add(L_34, 1));
		// if (closed)
		bool L_35 = __this->___closed_15;
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_0150;
		}
	}
	{
		// if (fromIndex >= points.Length - 1)
		int32_t L_37 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_38 = __this->___points_0;
		NullCheck(L_38);
		V_11 = (bool)((((int32_t)((((int32_t)L_37) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_38)->max_length)), 1))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_0136;
		}
	}
	{
		// fromIndex = points.Length - 1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_40 = __this->___points_0;
		NullCheck(L_40);
		V_1 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_40)->max_length)), 1));
	}

IL_0136:
	{
		// if(toIndex > points.Length - 1)
		int32_t L_41 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_42 = __this->___points_0;
		NullCheck(L_42);
		V_12 = (bool)((((int32_t)L_41) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_42)->max_length)), 1))))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_014d;
		}
	}
	{
		// toIndex = 0;
		V_2 = 0;
	}

IL_014d:
	{
		goto IL_0172;
	}

IL_0150:
	{
		// if(toIndex > points.Length-1)
		int32_t L_44 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_45 = __this->___points_0;
		NullCheck(L_45);
		V_13 = (bool)((((int32_t)L_44) > ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_45)->max_length)), 1))))? 1 : 0);
		bool L_46 = V_13;
		if (!L_46)
		{
			goto IL_0171;
		}
	}
	{
		// toIndex = points.Length - 1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_47 = __this->___points_0;
		NullCheck(L_47);
		V_2 = ((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_47)->max_length)), 1));
	}

IL_0171:
	{
	}

IL_0172:
	{
		// double getPercent = doubleIndex - fromIndex;
		double L_48 = V_0;
		int32_t L_49 = V_1;
		V_3 = ((double)il2cpp_codegen_subtract(L_48, ((double)L_49)));
		// sample.percent = percent;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_50 = ___1_sample;
		double L_51 = ___0_percent;
		L_50->___percent_5 = L_51;
		// float valueInterpolation = (float)getPercent;
		double L_52 = V_3;
		V_4 = ((float)L_52);
		// if (customValueInterpolation != null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_53 = __this->___customValueInterpolation_3;
		V_14 = (bool)((!(((RuntimeObject*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)L_53) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_54 = V_14;
		if (!L_54)
		{
			goto IL_01b8;
		}
	}
	{
		// if (customValueInterpolation.length > 0)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_55 = __this->___customValueInterpolation_3;
		NullCheck(L_55);
		int32_t L_56;
		L_56 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_55, NULL);
		V_15 = (bool)((((int32_t)L_56) > ((int32_t)0))? 1 : 0);
		bool L_57 = V_15;
		if (!L_57)
		{
			goto IL_01b7;
		}
	}
	{
		// valueInterpolation = customValueInterpolation.Evaluate(valueInterpolation);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_58 = __this->___customValueInterpolation_3;
		float L_59 = V_4;
		NullCheck(L_58);
		float L_60;
		L_60 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_58, L_59, NULL);
		V_4 = L_60;
	}

IL_01b7:
	{
	}

IL_01b8:
	{
		// float normalInterpolation = (float)getPercent;
		double L_61 = V_3;
		V_5 = ((float)L_61);
		// if (customNormalInterpolation != null)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_62 = __this->___customNormalInterpolation_4;
		V_16 = (bool)((!(((RuntimeObject*)(AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354*)L_62) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_63 = V_16;
		if (!L_63)
		{
			goto IL_01f2;
		}
	}
	{
		// if (customNormalInterpolation.length > 0)
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_64 = __this->___customNormalInterpolation_4;
		NullCheck(L_64);
		int32_t L_65;
		L_65 = AnimationCurve_get_length_m259A67BB0870D3A153F6FEDBB06CB0D24089CD81(L_64, NULL);
		V_17 = (bool)((((int32_t)L_65) > ((int32_t)0))? 1 : 0);
		bool L_66 = V_17;
		if (!L_66)
		{
			goto IL_01f1;
		}
	}
	{
		// normalInterpolation = customNormalInterpolation.Evaluate(normalInterpolation);
		AnimationCurve_tCBFFAAD05CEBB35EF8D8631BD99914BE1A6BB354* L_67 = __this->___customNormalInterpolation_4;
		float L_68 = V_5;
		NullCheck(L_67);
		float L_69;
		L_69 = AnimationCurve_Evaluate_m50B857043DE251A186032ADBCBB4CEF817F4EE3C(L_67, L_68, NULL);
		V_5 = L_69;
	}

IL_01f1:
	{
	}

IL_01f2:
	{
		// sample.size = Mathf.Lerp(points[fromIndex].size, points[toIndex].size, valueInterpolation);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_70 = ___1_sample;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_71 = __this->___points_0;
		int32_t L_72 = V_1;
		NullCheck(L_71);
		float L_73 = ((L_71)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_72)))->___size_5;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_74 = __this->___points_0;
		int32_t L_75 = V_2;
		NullCheck(L_74);
		float L_76 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_75)))->___size_5;
		float L_77 = V_4;
		float L_78;
		L_78 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_73, L_76, L_77, NULL);
		L_70->___size_4 = L_78;
		// sample.color = Color.Lerp(points[fromIndex].color, points[toIndex].color, valueInterpolation);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_79 = ___1_sample;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_80 = __this->___points_0;
		int32_t L_81 = V_1;
		NullCheck(L_80);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_81)))->___color_3;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_83 = __this->___points_0;
		int32_t L_84 = V_2;
		NullCheck(L_83);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_85 = ((L_83)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_84)))->___color_3;
		float L_86 = V_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_87;
		L_87 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_82, L_85, L_86, NULL);
		L_79->___color_3 = L_87;
		// sample.up = Vector3.Slerp(points[fromIndex].normal, points[toIndex].normal, normalInterpolation);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_88 = ___1_sample;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_89 = __this->___points_0;
		int32_t L_90 = V_1;
		NullCheck(L_89);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = ((L_89)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_90)))->___normal_4;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_92 = __this->___points_0;
		int32_t L_93 = V_2;
		NullCheck(L_92);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94 = ((L_92)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_93)))->___normal_4;
		float L_95 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_91, L_94, L_95, NULL);
		L_88->___up_1 = L_96;
		// EvaluatePositionAndTangent(ref sample.position, ref sample.forward, percent);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_97 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_98 = (&L_97->___position_0);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_99 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_100 = (&L_99->___forward_2);
		double L_101 = ___0_percent;
		Spline_EvaluatePositionAndTangent_m69DFFAA5E6661DBFE074BF79A58580A5B6F7C92A(__this, L_98, L_100, L_101, NULL);
		// if (type == Type.BSpline)
		int32_t L_102 = __this->___type_1;
		V_18 = (bool)((((int32_t)L_102) == ((int32_t)1))? 1 : 0);
		bool L_103 = V_18;
		if (!L_103)
		{
			goto IL_03f5;
		}
	}
	{
		// double step = 1.0 / (iterations - 1);
		int32_t L_104;
		L_104 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_19 = ((double)((1.0)/((double)((int32_t)il2cpp_codegen_subtract(L_104, 1)))));
		// if (percent <= 1.0 - step && percent >= step)
		double L_105 = ___0_percent;
		double L_106 = V_19;
		if ((!(((double)L_105) <= ((double)((double)il2cpp_codegen_subtract((1.0), L_106))))))
		{
			goto IL_02d4;
		}
	}
	{
		double L_107 = ___0_percent;
		double L_108 = V_19;
		G_B32_0 = ((((int32_t)((!(((double)L_107) >= ((double)L_108)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_02d5;
	}

IL_02d4:
	{
		G_B32_0 = 0;
	}

IL_02d5:
	{
		V_20 = (bool)G_B32_0;
		bool L_109 = V_20;
		if (!L_109)
		{
			goto IL_0301;
		}
	}
	{
		// sample.forward = EvaluatePosition(percent + step) - EvaluatePosition(percent - step);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_110 = ___1_sample;
		double L_111 = ___0_percent;
		double L_112 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, ((double)il2cpp_codegen_add(L_111, L_112)), NULL);
		double L_114 = ___0_percent;
		double L_115 = V_19;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116;
		L_116 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, ((double)il2cpp_codegen_subtract(L_114, L_115)), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117;
		L_117 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_113, L_116, NULL);
		L_110->___forward_2 = L_117;
		goto IL_03f4;
	}

IL_0301:
	{
		// Vector3 back = Vector3.zero, front = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_118;
		L_118 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_21 = L_118;
		// Vector3 back = Vector3.zero, front = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_119;
		L_119 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_22 = L_119;
		// if (closed)
		bool L_120 = __this->___closed_15;
		V_23 = L_120;
		bool L_121 = V_23;
		if (!L_121)
		{
			goto IL_039b;
		}
	}
	{
		// if (percent < step) EvaluatePosition(1.0 - (step - percent), ref back);
		double L_122 = ___0_percent;
		double L_123 = V_19;
		V_24 = (bool)((((double)L_122) < ((double)L_123))? 1 : 0);
		bool L_124 = V_24;
		if (!L_124)
		{
			goto IL_0341;
		}
	}
	{
		// if (percent < step) EvaluatePosition(1.0 - (step - percent), ref back);
		double L_125 = V_19;
		double L_126 = ___0_percent;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, ((double)il2cpp_codegen_subtract((1.0), ((double)il2cpp_codegen_subtract(L_125, L_126)))), (&V_21), NULL);
		goto IL_034e;
	}

IL_0341:
	{
		// else  EvaluatePosition(percent - step, ref back);
		double L_127 = ___0_percent;
		double L_128 = V_19;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, ((double)il2cpp_codegen_subtract(L_127, L_128)), (&V_21), NULL);
	}

IL_034e:
	{
		// if (percent > 1.0 - step) EvaluatePosition(step - (1.0 - percent), ref front);
		double L_129 = ___0_percent;
		double L_130 = V_19;
		V_25 = (bool)((((double)L_129) > ((double)((double)il2cpp_codegen_subtract((1.0), L_130))))? 1 : 0);
		bool L_131 = V_25;
		if (!L_131)
		{
			goto IL_037c;
		}
	}
	{
		// if (percent > 1.0 - step) EvaluatePosition(step - (1.0 - percent), ref front);
		double L_132 = V_19;
		double L_133 = ___0_percent;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, ((double)il2cpp_codegen_subtract(L_132, ((double)il2cpp_codegen_subtract((1.0), L_133)))), (&V_22), NULL);
		goto IL_0389;
	}

IL_037c:
	{
		// else EvaluatePosition(percent + step, ref front);
		double L_134 = ___0_percent;
		double L_135 = V_19;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, ((double)il2cpp_codegen_add(L_134, L_135)), (&V_22), NULL);
	}

IL_0389:
	{
		// sample.forward = front - back;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_136 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_137 = V_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_138 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_139;
		L_139 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_137, L_138, NULL);
		L_136->___forward_2 = L_139;
		goto IL_03f3;
	}

IL_039b:
	{
		// EvaluatePosition(percent - step, ref back);
		double L_140 = ___0_percent;
		double L_141 = V_19;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, ((double)il2cpp_codegen_subtract(L_140, L_141)), (&V_21), NULL);
		// back = sample.position - back;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_142 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_143 = L_142->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_144 = V_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_145;
		L_145 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_143, L_144, NULL);
		V_21 = L_145;
		// EvaluatePosition(percent + step, ref front);
		double L_146 = ___0_percent;
		double L_147 = V_19;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, ((double)il2cpp_codegen_add(L_146, L_147)), (&V_22), NULL);
		// front = front - sample.position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_148 = V_22;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_149 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150 = L_149->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_148, L_150, NULL);
		V_22 = L_151;
		// sample.forward = Vector3.Slerp(front, back, back.magnitude / front.magnitude);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_152 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_153 = V_22;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_154 = V_21;
		float L_155;
		L_155 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_21), NULL);
		float L_156;
		L_156 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_22), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_157;
		L_157 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_153, L_154, ((float)(L_155/L_156)), NULL);
		L_152->___forward_2 = L_157;
	}

IL_03f3:
	{
	}

IL_03f4:
	{
	}

IL_03f5:
	{
		// sample.forward.Normalize();
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_158 = ___1_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_159 = (&L_158->___forward_2);
		Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline(L_159, NULL);
	}

IL_0401:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::Evaluate(Dreamteck.Splines.SplineSample&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Evaluate_m0BFA7DFF31498F7F447890BF11ED22BC58859C65 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_sample, int32_t ___1_pointIndex, const RuntimeMethod* method) 
{
	{
		// Evaluate(pointIndex, ref sample);
		int32_t L_0 = ___1_pointIndex;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_1 = ___0_sample;
		Spline_Evaluate_m4CEA39824604481F5526C1EA877198CC0922087E(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::Evaluate(Dreamteck.Splines.SplineSample&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Evaluate_m0FB70FE81A8C06BF4495C72DA4755C8705899D45 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_sample, double ___1_percent, const RuntimeMethod* method) 
{
	{
		// Evaluate(percent, ref sample);
		double L_0 = ___1_percent;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_1 = ___0_sample;
		Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::Evaluate(Dreamteck.Splines.SplineSample[]&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Evaluate_m1881CE373F36883705C5EB386044E341D1E6F69F (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** ___0_samples, double ___1_from, double ___2_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	{
		// if (points.Length == 0) {
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_6 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// samples = new SplineSample[0];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_2 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_3 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		// return;
		goto IL_00d7;
	}

IL_001f:
	{
		// from = DMath.Clamp01(from);
		double L_4 = ___1_from;
		double L_5;
		L_5 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_4, NULL);
		___1_from = L_5;
		// to = DMath.Clamp(to, from, 1.0);
		double L_6 = ___2_to;
		double L_7 = ___1_from;
		double L_8;
		L_8 = DMath_Clamp_m716297EE37BD982943E1F08F0F92CDD2D642640D(L_6, L_7, (1.0), NULL);
		___2_to = L_8;
		// double fromValue = from * (iterations - 1);
		double L_9 = ___1_from;
		int32_t L_10;
		L_10 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_9, ((double)((int32_t)il2cpp_codegen_subtract(L_10, 1)))));
		// double toValue = to * (iterations - 1);
		double L_11 = ___2_to;
		int32_t L_12;
		L_12 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_1 = ((double)il2cpp_codegen_multiply(L_11, ((double)((int32_t)il2cpp_codegen_subtract(L_12, 1)))));
		// int clippedIterations = DMath.CeilInt(toValue) - DMath.FloorInt(fromValue) + 1;
		double L_13 = V_1;
		int32_t L_14;
		L_14 = DMath_CeilInt_m30A0442D9F9301FF6EE6213F2983A9725A7FDEFC(L_13, NULL);
		double L_15 = V_0;
		int32_t L_16;
		L_16 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_15, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_14, L_16)), 1));
		// if (samples == null) samples = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_17 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_18 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_17);
		V_7 = (bool)((((RuntimeObject*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)L_18) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0076;
		}
	}
	{
		// if (samples == null) samples = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_20 = ___0_samples;
		int32_t L_21 = V_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_22 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)L_21);
		*((RuntimeObject**)L_20) = (RuntimeObject*)L_22;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_20, (void*)(RuntimeObject*)L_22);
		goto IL_008e;
	}

IL_0076:
	{
		// else if (samples.Length != clippedIterations) samples = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_23 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_24 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_23);
		NullCheck(L_24);
		int32_t L_25 = V_2;
		V_8 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length))) == ((int32_t)L_25))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_8;
		if (!L_26)
		{
			goto IL_008e;
		}
	}
	{
		// else if (samples.Length != clippedIterations) samples = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_27 = ___0_samples;
		int32_t L_28 = V_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_29 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)L_28);
		*((RuntimeObject**)L_27) = (RuntimeObject*)L_29;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_27, (void*)(RuntimeObject*)L_29);
	}

IL_008e:
	{
		// double percent = from;
		double L_30 = ___1_from;
		V_3 = L_30;
		// double ms = moveStep;
		double L_31;
		L_31 = Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9(__this, NULL);
		V_4 = L_31;
		// int index = 0;
		V_5 = 0;
		goto IL_00d2;
	}

IL_009d:
	{
		// samples[index] = Evaluate(percent);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_32 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_33 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_32);
		int32_t L_34 = V_5;
		double L_35 = V_3;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_36;
		L_36 = Spline_Evaluate_m3FF28C29D4DEBACB76185D51930705F1489FF144(__this, L_35, NULL);
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143)L_36);
		// index++;
		int32_t L_37 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_37, 1));
		// if (index >= samples.Length) break;
		int32_t L_38 = V_5;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_39 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_40 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_39);
		NullCheck(L_40);
		V_9 = (bool)((((int32_t)((((int32_t)L_38) < ((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_9;
		if (!L_41)
		{
			goto IL_00c7;
		}
	}
	{
		// if (index >= samples.Length) break;
		goto IL_00d7;
	}

IL_00c7:
	{
		// percent = DMath.Move(percent, to, ms);
		double L_42 = V_3;
		double L_43 = ___2_to;
		double L_44 = V_4;
		double L_45;
		L_45 = DMath_Move_mFD096234DD99170C682673771D4A375192C5B806(L_42, L_43, L_44, NULL);
		V_3 = L_45;
	}

IL_00d2:
	{
		// while (true)
		V_10 = (bool)1;
		goto IL_009d;
	}

IL_00d7:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::EvaluateUniform(Dreamteck.Splines.SplineSample[]&,System.Double[]&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluateUniform_mDA73D779FF84D0BF99AB6780432ACAF8621C8AA5 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** ___0_samples, DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** ___1_originalSamplePercents, double ___2_from, double ___3_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	float V_3 = 0.0f;
	double V_4 = 0.0;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	double V_9 = 0.0;
	int32_t V_10 = 0;
	bool V_11 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	{
		// if (points.Length == 0)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_6 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// samples = new SplineSample[0];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_2 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_3 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		// return;
		goto IL_019a;
	}

IL_001f:
	{
		// from = DMath.Clamp01(from);
		double L_4 = ___2_from;
		double L_5;
		L_5 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_4, NULL);
		___2_from = L_5;
		// to = DMath.Clamp(to, from, 1.0);
		double L_6 = ___3_to;
		double L_7 = ___2_from;
		double L_8;
		L_8 = DMath_Clamp_m716297EE37BD982943E1F08F0F92CDD2D642640D(L_6, L_7, (1.0), NULL);
		___3_to = L_8;
		// double fromValue = from * (iterations - 1);
		double L_9 = ___2_from;
		int32_t L_10;
		L_10 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_9, ((double)((int32_t)il2cpp_codegen_subtract(L_10, 1)))));
		// double toValue = to * (iterations - 1);
		double L_11 = ___3_to;
		int32_t L_12;
		L_12 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_1 = ((double)il2cpp_codegen_multiply(L_11, ((double)((int32_t)il2cpp_codegen_subtract(L_12, 1)))));
		// int clippedIterations = DMath.CeilInt(toValue) - DMath.FloorInt(fromValue) + 1;
		double L_13 = V_1;
		int32_t L_14;
		L_14 = DMath_CeilInt_m30A0442D9F9301FF6EE6213F2983A9725A7FDEFC(L_13, NULL);
		double L_15 = V_0;
		int32_t L_16;
		L_16 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_15, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_14, L_16)), 1));
		// if (samples == null || samples.Length != clippedIterations) samples = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_17 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_18 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_17);
		if (!L_18)
		{
			goto IL_0073;
		}
	}
	{
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_19 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_20 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_19);
		NullCheck(L_20);
		int32_t L_21 = V_2;
		G_B5_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))) == ((int32_t)L_21))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0074;
	}

IL_0073:
	{
		G_B5_0 = 1;
	}

IL_0074:
	{
		V_7 = (bool)G_B5_0;
		bool L_22 = V_7;
		if (!L_22)
		{
			goto IL_0082;
		}
	}
	{
		// if (samples == null || samples.Length != clippedIterations) samples = new SplineSample[clippedIterations];
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_23 = ___0_samples;
		int32_t L_24 = V_2;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_25 = (SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF*)SZArrayNew(SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF_il2cpp_TypeInfo_var, (uint32_t)L_24);
		*((RuntimeObject**)L_23) = (RuntimeObject*)L_25;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_23, (void*)(RuntimeObject*)L_25);
	}

IL_0082:
	{
		// if (originalSamplePercents == null || originalSamplePercents.Length != clippedIterations)
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_26 = ___1_originalSamplePercents;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_27 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_26);
		if (!L_27)
		{
			goto IL_0092;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_28 = ___1_originalSamplePercents;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_29 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_28);
		NullCheck(L_29);
		int32_t L_30 = V_2;
		G_B10_0 = ((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_29)->max_length))) == ((int32_t)L_30))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0093;
	}

IL_0092:
	{
		G_B10_0 = 1;
	}

IL_0093:
	{
		V_8 = (bool)G_B10_0;
		bool L_31 = V_8;
		if (!L_31)
		{
			goto IL_00a3;
		}
	}
	{
		// originalSamplePercents = new double[clippedIterations];
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_32 = ___1_originalSamplePercents;
		int32_t L_33 = V_2;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_34 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE_il2cpp_TypeInfo_var, (uint32_t)L_33);
		*((RuntimeObject**)L_32) = (RuntimeObject*)L_34;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_32, (void*)(RuntimeObject*)L_34);
	}

IL_00a3:
	{
		// float lengthStep = CalculateLength(from, to) / (iterations - 1);
		double L_35 = ___2_from;
		double L_36 = ___3_to;
		float L_37;
		L_37 = Spline_CalculateLength_m50ED2FB8659B3E8352599296206600C047279894(__this, L_35, L_36, (1.0), NULL);
		int32_t L_38;
		L_38 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_3 = ((float)(L_37/((float)((int32_t)il2cpp_codegen_subtract(L_38, 1)))));
		// Evaluate(from, ref samples[0]);
		double L_39 = ___2_from;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_40 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_41 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_40);
		NullCheck(L_41);
		Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B(__this, L_39, ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), NULL);
		// samples[0].percent = originalSamplePercents[0] = from;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_42 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_43 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_42);
		NullCheck(L_43);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_44 = ___1_originalSamplePercents;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_45 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_44);
		double L_46 = ___2_from;
		double L_47 = L_46;
		V_9 = L_47;
		NullCheck(L_45);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (double)L_47);
		double L_48 = V_9;
		((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___percent_5 = L_48;
		// double lastPercent = from;
		double L_49 = ___2_from;
		V_4 = L_49;
		// float moved = 0f;
		V_5 = (0.0f);
		// for (int i = 1; i < samples.Length - 1; i++)
		V_10 = 1;
		goto IL_0152;
	}

IL_00f6:
	{
		// Evaluate(Travel(lastPercent, lengthStep, out moved, Direction.Forward), ref samples[i]);
		double L_50 = V_4;
		float L_51 = V_3;
		double L_52;
		L_52 = Spline_Travel_m05EB8CB4C3E012F0EE2A1B42B058EE1A9458BB13(__this, L_50, L_51, (&V_5), 1, NULL);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_53 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_54 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_53);
		int32_t L_55 = V_10;
		NullCheck(L_54);
		Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B(__this, L_52, ((L_54)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_55))), NULL);
		// lastPercent = samples[i].percent;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_56 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_57 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_56);
		int32_t L_58 = V_10;
		NullCheck(L_57);
		double L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___percent_5;
		V_4 = L_59;
		// originalSamplePercents[i] = lastPercent;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_60 = ___1_originalSamplePercents;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_61 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_60);
		int32_t L_62 = V_10;
		double L_63 = V_4;
		NullCheck(L_61);
		(L_61)->SetAt(static_cast<il2cpp_array_size_t>(L_62), (double)L_63);
		// samples[i].percent = DMath.Lerp(from, to, (double)i/ (samples.Length - 1));
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_64 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_65 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_64);
		int32_t L_66 = V_10;
		NullCheck(L_65);
		double L_67 = ___2_from;
		double L_68 = ___3_to;
		int32_t L_69 = V_10;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_70 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_71 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_70);
		NullCheck(L_71);
		double L_72;
		L_72 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_67, L_68, ((double)(((double)L_69)/((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_71)->max_length)), 1))))), NULL);
		((L_65)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_66)))->___percent_5 = L_72;
		// for (int i = 1; i < samples.Length - 1; i++)
		int32_t L_73 = V_10;
		V_10 = ((int32_t)il2cpp_codegen_add(L_73, 1));
	}

IL_0152:
	{
		// for (int i = 1; i < samples.Length - 1; i++)
		int32_t L_74 = V_10;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_75 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_76 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_75);
		NullCheck(L_76);
		V_11 = (bool)((((int32_t)L_74) < ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_76)->max_length)), 1))))? 1 : 0);
		bool L_77 = V_11;
		if (L_77)
		{
			goto IL_00f6;
		}
	}
	{
		// Evaluate(to, ref samples[samples.Length - 1]);
		double L_78 = ___3_to;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_79 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_80 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_79);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_81 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_82 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_81);
		NullCheck(L_82);
		NullCheck(L_80);
		Spline_Evaluate_m4B97AB40D981BCB842BF9E6FD87B621F5571DA2B(__this, L_78, ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_82)->max_length)), 1))))), NULL);
		// samples[samples.Length - 1].percent = originalSamplePercents[originalSamplePercents.Length - 1] = to;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_83 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_84 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_83);
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF** L_85 = ___0_samples;
		SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF* L_86 = *((SplineSampleU5BU5D_tB493CC7910756D46A1100238E91C55D5578FE1CF**)L_85);
		NullCheck(L_86);
		NullCheck(L_84);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_87 = ___1_originalSamplePercents;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_88 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_87);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE** L_89 = ___1_originalSamplePercents;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_90 = *((DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE**)L_89);
		NullCheck(L_90);
		double L_91 = ___3_to;
		double L_92 = L_91;
		V_9 = L_92;
		NullCheck(L_88);
		(L_88)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_90)->max_length)), 1))), (double)L_92);
		double L_93 = V_9;
		((L_84)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_86)->max_length)), 1)))))->___percent_5 = L_93;
	}

IL_019a:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::EvaluatePositions(UnityEngine.Vector3[]&,System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluatePositions_m959F5E9D7A0E619E0CBD7D126074CE4C7B3A66AA (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** ___0_positions, double ___1_from, double ___2_to, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	double V_0 = 0.0;
	double V_1 = 0.0;
	int32_t V_2 = 0;
	double V_3 = 0.0;
	double V_4 = 0.0;
	int32_t V_5 = 0;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	{
		// if (points.Length == 0) {
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_6 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_001f;
		}
	}
	{
		// positions = new Vector3[0];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_2 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)0);
		*((RuntimeObject**)L_2) = (RuntimeObject*)L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_2, (void*)(RuntimeObject*)L_3);
		// return;
		goto IL_00c2;
	}

IL_001f:
	{
		// from = DMath.Clamp01(from);
		double L_4 = ___1_from;
		double L_5;
		L_5 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_4, NULL);
		___1_from = L_5;
		// to = DMath.Clamp(to, from, 1.0);
		double L_6 = ___2_to;
		double L_7 = ___1_from;
		double L_8;
		L_8 = DMath_Clamp_m716297EE37BD982943E1F08F0F92CDD2D642640D(L_6, L_7, (1.0), NULL);
		___2_to = L_8;
		// double fromValue = from * (iterations - 1);
		double L_9 = ___1_from;
		int32_t L_10;
		L_10 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_0 = ((double)il2cpp_codegen_multiply(L_9, ((double)((int32_t)il2cpp_codegen_subtract(L_10, 1)))));
		// double toValue = to * (iterations - 1);
		double L_11 = ___2_to;
		int32_t L_12;
		L_12 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_1 = ((double)il2cpp_codegen_multiply(L_11, ((double)((int32_t)il2cpp_codegen_subtract(L_12, 1)))));
		// int clippedIterations = DMath.CeilInt(toValue) - DMath.FloorInt(fromValue) + 1;
		double L_13 = V_1;
		int32_t L_14;
		L_14 = DMath_CeilInt_m30A0442D9F9301FF6EE6213F2983A9725A7FDEFC(L_13, NULL);
		double L_15 = V_0;
		int32_t L_16;
		L_16 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_15, NULL);
		V_2 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(L_14, L_16)), 1));
		// if (positions.Length != clippedIterations) positions = new Vector3[clippedIterations];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_17 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_17);
		NullCheck(L_18);
		int32_t L_19 = V_2;
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))) == ((int32_t)L_19))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_20 = V_7;
		if (!L_20)
		{
			goto IL_0079;
		}
	}
	{
		// if (positions.Length != clippedIterations) positions = new Vector3[clippedIterations];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_21 = ___0_positions;
		int32_t L_22 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)L_22);
		*((RuntimeObject**)L_21) = (RuntimeObject*)L_23;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_21, (void*)(RuntimeObject*)L_23);
	}

IL_0079:
	{
		// double percent = from;
		double L_24 = ___1_from;
		V_3 = L_24;
		// double ms = moveStep;
		double L_25;
		L_25 = Spline_get_moveStep_mAABFB7F378125253C6A3A28BA431E0A3E410B4C9(__this, NULL);
		V_4 = L_25;
		// int index = 0;
		V_5 = 0;
		goto IL_00bd;
	}

IL_0088:
	{
		// positions[index] = EvaluatePosition(percent);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_26 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_27 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_26);
		int32_t L_28 = V_5;
		double L_29 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_29, NULL);
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_30);
		// index++;
		int32_t L_31 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_31, 1));
		// if (index >= positions.Length) break;
		int32_t L_32 = V_5;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C** L_33 = ___0_positions;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = *((Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C**)L_33);
		NullCheck(L_34);
		V_8 = (bool)((((int32_t)((((int32_t)L_32) < ((int32_t)((int32_t)(((RuntimeArray*)L_34)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_00b2;
		}
	}
	{
		// if (index >= positions.Length) break;
		goto IL_00c2;
	}

IL_00b2:
	{
		// percent = DMath.Move(percent, to, ms);
		double L_36 = V_3;
		double L_37 = ___2_to;
		double L_38 = V_4;
		double L_39;
		L_39 = DMath_Move_mFD096234DD99170C682673771D4A375192C5B806(L_36, L_37, L_38, NULL);
		V_3 = L_39;
	}

IL_00bd:
	{
		// while (true)
		V_9 = (bool)1;
		goto IL_0088;
	}

IL_00c2:
	{
		// }
		return;
	}
}
// System.Double Dreamteck.Splines.Spline::Travel(System.Double,System.Single,System.Single&,Dreamteck.Splines.Spline/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_Travel_m05EB8CB4C3E012F0EE2A1B42B058EE1A9458BB13 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_start, float ___1_distance, float* ___2_moved, int32_t ___3_direction, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	double V_2 = 0.0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	float V_5 = 0.0f;
	double V_6 = 0.0;
	bool V_7 = false;
	double V_8 = 0.0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B10_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// moved = 0f;
		float* L_0 = ___2_moved;
		*((float*)L_0) = (float)(0.0f);
		// if (points.Length <= 1) return 0.0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_1 = __this->___points_0;
		NullCheck(L_1);
		V_7 = (bool)((((int32_t)((((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))) > ((int32_t)1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_7;
		if (!L_2)
		{
			goto IL_002c;
		}
	}
	{
		// if (points.Length <= 1) return 0.0;
		V_8 = (0.0);
		goto IL_0174;
	}

IL_002c:
	{
		// if (direction == Direction.Forward && start >= 1.0) return 1.0;
		int32_t L_3 = ___3_direction;
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0042;
		}
	}
	{
		double L_4 = ___0_start;
		G_B5_0 = ((((int32_t)((!(((double)L_4) >= ((double)(1.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B5_0 = 0;
	}

IL_0043:
	{
		V_9 = (bool)G_B5_0;
		bool L_5 = V_9;
		if (!L_5)
		{
			goto IL_0059;
		}
	}
	{
		// if (direction == Direction.Forward && start >= 1.0) return 1.0;
		V_8 = (1.0);
		goto IL_0174;
	}

IL_0059:
	{
		// else if (direction == Direction.Backward && start <= 0.0) return 0.0; ;
		int32_t L_6 = ___3_direction;
		if ((!(((uint32_t)L_6) == ((uint32_t)(-1)))))
		{
			goto IL_006f;
		}
	}
	{
		double L_7 = ___0_start;
		G_B10_0 = ((((int32_t)((!(((double)L_7) <= ((double)(0.0))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0070;
	}

IL_006f:
	{
		G_B10_0 = 0;
	}

IL_0070:
	{
		V_10 = (bool)G_B10_0;
		bool L_8 = V_10;
		if (!L_8)
		{
			goto IL_0086;
		}
	}
	{
		// else if (direction == Direction.Backward && start <= 0.0) return 0.0; ;
		V_8 = (0.0);
		goto IL_0174;
	}

IL_0086:
	{
		// if (distance == 0f) return DMath.Clamp01(start);
		float L_9 = ___1_distance;
		V_11 = (bool)((((float)L_9) == ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_11;
		if (!L_10)
		{
			goto IL_00a2;
		}
	}
	{
		// if (distance == 0f) return DMath.Clamp01(start);
		double L_11 = ___0_start;
		double L_12;
		L_12 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_11, NULL);
		V_8 = L_12;
		goto IL_0174;
	}

IL_00a2:
	{
		// Vector3 pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_0 = L_13;
		// EvaluatePosition(start, ref pos);
		double L_14 = ___0_start;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, L_14, (&V_0), NULL);
		// Vector3 lastPosition = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = V_0;
		V_1 = L_15;
		// double lastPercent = start;
		double L_16 = ___0_start;
		V_2 = L_16;
		// int i = iterations - 1;
		int32_t L_17;
		L_17 = Spline_get_iterations_mF5A80503BC028507B04AF55891DD995F63903C89(__this, NULL);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_17, 1));
		// int nextSampleIndex = direction == Spline.Direction.Forward ? DMath.CeilInt(start * i) : DMath.FloorInt(start * i);
		int32_t L_18 = ___3_direction;
		if ((((int32_t)L_18) == ((int32_t)1)))
		{
			goto IL_00cf;
		}
	}
	{
		double L_19 = ___0_start;
		int32_t L_20 = V_3;
		int32_t L_21;
		L_21 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(((double)il2cpp_codegen_multiply(L_19, ((double)L_20))), NULL);
		G_B17_0 = L_21;
		goto IL_00d8;
	}

IL_00cf:
	{
		double L_22 = ___0_start;
		int32_t L_23 = V_3;
		int32_t L_24;
		L_24 = DMath_CeilInt_m30A0442D9F9301FF6EE6213F2983A9725A7FDEFC(((double)il2cpp_codegen_multiply(L_22, ((double)L_23))), NULL);
		G_B17_0 = L_24;
	}

IL_00d8:
	{
		V_4 = G_B17_0;
		// float lastDistance = 0f;
		V_5 = (0.0f);
		// double percent = start;
		double L_25 = ___0_start;
		V_6 = L_25;
		goto IL_0155;
	}

IL_00e6:
	{
		// percent = (double)nextSampleIndex / i;
		int32_t L_26 = V_4;
		int32_t L_27 = V_3;
		V_6 = ((double)(((double)L_26)/((double)L_27)));
		// pos = EvaluatePosition(percent);
		double L_28 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_28, NULL);
		V_0 = L_29;
		// lastDistance = Vector3.Distance(pos, lastPosition);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		float L_32;
		L_32 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_30, L_31, NULL);
		V_5 = L_32;
		// lastPosition = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_0;
		V_1 = L_33;
		// moved += lastDistance;
		float* L_34 = ___2_moved;
		float* L_35 = ___2_moved;
		float L_36 = *((float*)L_35);
		float L_37 = V_5;
		*((float*)L_34) = (float)((float)il2cpp_codegen_add(L_36, L_37));
		// if (moved >= distance) break;
		float* L_38 = ___2_moved;
		float L_39 = *((float*)L_38);
		float L_40 = ___1_distance;
		V_12 = (bool)((((int32_t)((!(((float)L_39) >= ((float)L_40)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_41 = V_12;
		if (!L_41)
		{
			goto IL_011a;
		}
	}
	{
		// if (moved >= distance) break;
		goto IL_015a;
	}

IL_011a:
	{
		// lastPercent = percent;
		double L_42 = V_6;
		V_2 = L_42;
		// if (direction == Spline.Direction.Forward)
		int32_t L_43 = ___3_direction;
		V_13 = (bool)((((int32_t)L_43) == ((int32_t)1))? 1 : 0);
		bool L_44 = V_13;
		if (!L_44)
		{
			goto IL_013f;
		}
	}
	{
		// if (nextSampleIndex == i) break;
		int32_t L_45 = V_4;
		int32_t L_46 = V_3;
		V_14 = (bool)((((int32_t)L_45) == ((int32_t)L_46))? 1 : 0);
		bool L_47 = V_14;
		if (!L_47)
		{
			goto IL_0136;
		}
	}
	{
		// if (nextSampleIndex == i) break;
		goto IL_015a;
	}

IL_0136:
	{
		// nextSampleIndex++;
		int32_t L_48 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_48, 1));
		goto IL_0154;
	}

IL_013f:
	{
		// if (nextSampleIndex == 0) break;
		int32_t L_49 = V_4;
		V_15 = (bool)((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_15;
		if (!L_50)
		{
			goto IL_014d;
		}
	}
	{
		// if (nextSampleIndex == 0) break;
		goto IL_015a;
	}

IL_014d:
	{
		// nextSampleIndex--;
		int32_t L_51 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_subtract(L_51, 1));
	}

IL_0154:
	{
	}

IL_0155:
	{
		// while (true)
		V_16 = (bool)1;
		goto IL_00e6;
	}

IL_015a:
	{
		// return DMath.Lerp(lastPercent, percent, 1f - (moved - distance) / lastDistance);
		double L_52 = V_2;
		double L_53 = V_6;
		float* L_54 = ___2_moved;
		float L_55 = *((float*)L_54);
		float L_56 = ___1_distance;
		float L_57 = V_5;
		double L_58;
		L_58 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_52, L_53, ((double)((float)il2cpp_codegen_subtract((1.0f), ((float)(((float)il2cpp_codegen_subtract(L_55, L_56))/L_57))))), NULL);
		V_8 = L_58;
		goto IL_0174;
	}

IL_0174:
	{
		// }
		double L_59 = V_8;
		return L_59;
	}
}
// System.Double Dreamteck.Splines.Spline::Travel(System.Double,System.Single,Dreamteck.Splines.Spline/Direction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_Travel_m6011138B297AD9124DE76587A75318C1A7CF59A1 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_start, float ___1_distance, int32_t ___2_direction, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	double V_1 = 0.0;
	{
		// return Travel(start, distance, out moved, direction);
		double L_0 = ___0_start;
		float L_1 = ___1_distance;
		int32_t L_2 = ___2_direction;
		double L_3;
		L_3 = Spline_Travel_m05EB8CB4C3E012F0EE2A1B42B058EE1A9458BB13(__this, L_0, L_1, (&V_0), L_2, NULL);
		V_1 = L_3;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		double L_4 = V_1;
		return L_4;
	}
}
// System.Void Dreamteck.Splines.Spline::EvaluatePosition(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (points.Length == 0)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_0020;
		}
	}
	{
		// position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// return;
		goto IL_00b6;
	}

IL_0020:
	{
		// if (points.Length == 1)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_4 = __this->___points_0;
		NullCheck(L_4);
		V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// position = points[0].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___1_position;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_7 = __this->___points_0;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_8;
		// return;
		goto IL_00b6;
	}

IL_0049:
	{
		// percent = DMath.Clamp01(percent);
		double L_9 = ___0_percent;
		double L_10;
		L_10 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_9, NULL);
		___0_percent = L_10;
		// double doubleIndex = (points.Length - 1) * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_11 = __this->___points_0;
		NullCheck(L_11);
		double L_12 = ___0_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_11)->max_length)), 1))), L_12));
		// if (closed)
		bool L_13 = __this->___closed_15;
		V_4 = L_13;
		bool L_14 = V_4;
		if (!L_14)
		{
			goto IL_0079;
		}
	}
	{
		// doubleIndex = points.Length * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_15 = __this->___points_0;
		NullCheck(L_15);
		double L_16 = ___0_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_15)->max_length))), L_16));
	}

IL_0079:
	{
		// int pointIndex = DMath.FloorInt(doubleIndex);
		double L_17 = V_0;
		int32_t L_18;
		L_18 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_17, NULL);
		V_1 = L_18;
		// if (type == Type.Bezier)
		int32_t L_19 = __this->___type_1;
		V_5 = (bool)((((int32_t)L_19) == ((int32_t)2))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00a9;
		}
	}
	{
		// pointIndex = Mathf.Clamp(pointIndex, 0, Mathf.Max(points.Length - 1, 0));
		int32_t L_21 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_22 = __this->___points_0;
		NullCheck(L_22);
		int32_t L_23;
		L_23 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_22)->max_length)), 1)), 0, NULL);
		int32_t L_24;
		L_24 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_21, 0, L_23, NULL);
		V_1 = L_24;
	}

IL_00a9:
	{
		// CalculatePosition(ref position, doubleIndex - pointIndex, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_25 = ___1_position;
		double L_26 = V_0;
		int32_t L_27 = V_1;
		int32_t L_28 = V_1;
		Spline_CalculatePosition_m34FFEEE9116036D6842DD4296FF838F4018A26E7(__this, L_25, ((double)il2cpp_codegen_subtract(L_26, ((double)L_27))), L_28, NULL);
	}

IL_00b6:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::EvaluatePosition(UnityEngine.Vector3&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluatePosition_m0D9D3CB979A24CFA53E8C25955FD43467FB38867 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_percent, const RuntimeMethod* method) 
{
	{
		// EvaluatePosition(percent, ref position);
		double L_0 = ___1_percent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_1 = ___0_position;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::EvaluateTangent(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluateTangent_mFBAD9629C6DC50790A474115E47D3C658394D58A (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_tangent, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		// if (points.Length < 2)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)2))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// tangent = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___1_tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// return;
		goto IL_0089;
	}

IL_001e:
	{
		// percent = DMath.Clamp01(percent);
		double L_4 = ___0_percent;
		double L_5;
		L_5 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_4, NULL);
		___0_percent = L_5;
		// double doubleIndex = (points.Length - 1) * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_6 = __this->___points_0;
		NullCheck(L_6);
		double L_7 = ___0_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_6)->max_length)), 1))), L_7));
		// if (closed)
		bool L_8 = __this->___closed_15;
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_004c;
		}
	}
	{
		// doubleIndex = points.Length * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_10 = __this->___points_0;
		NullCheck(L_10);
		double L_11 = ___0_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_10)->max_length))), L_11));
	}

IL_004c:
	{
		// int pointIndex = DMath.FloorInt(doubleIndex);
		double L_12 = V_0;
		int32_t L_13;
		L_13 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_12, NULL);
		V_1 = L_13;
		// if (type == Type.Bezier)
		int32_t L_14 = __this->___type_1;
		V_4 = (bool)((((int32_t)L_14) == ((int32_t)2))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_007c;
		}
	}
	{
		// pointIndex = Mathf.Clamp(pointIndex, 0, Mathf.Max(points.Length - 1, 0));
		int32_t L_16 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_17 = __this->___points_0;
		NullCheck(L_17);
		int32_t L_18;
		L_18 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_17)->max_length)), 1)), 0, NULL);
		int32_t L_19;
		L_19 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_16, 0, L_18, NULL);
		V_1 = L_19;
	}

IL_007c:
	{
		// CalculateTangent(ref tangent, doubleIndex - pointIndex, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___1_tangent;
		double L_21 = V_0;
		int32_t L_22 = V_1;
		int32_t L_23 = V_1;
		Spline_CalculateTangent_m8880C394538B296C20AD0EE843CF14D024F8B427(__this, L_20, ((double)il2cpp_codegen_subtract(L_21, ((double)L_22))), L_23, NULL);
	}

IL_0089:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::EvaluatePositionAndTangent(UnityEngine.Vector3&,UnityEngine.Vector3&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_EvaluatePositionAndTangent_m69DFFAA5E6661DBFE074BF79A58580A5B6F7C92A (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_tangent, double ___2_percent, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// if (points.Length == 0)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_2 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_2;
		if (!L_1)
		{
			goto IL_002b;
		}
	}
	{
		// position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// tangent = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___1_tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_5;
		// return;
		goto IL_00cd;
	}

IL_002b:
	{
		// if (points.Length == 1)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_6 = __this->___points_0;
		NullCheck(L_6);
		V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)1))? 1 : 0);
		bool L_7 = V_3;
		if (!L_7)
		{
			goto IL_005f;
		}
	}
	{
		// position = points[0].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = ___0_position;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_9 = __this->___points_0;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_8 = L_10;
		// tangent = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___1_tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_11 = L_12;
		// return;
		goto IL_00cd;
	}

IL_005f:
	{
		// percent = DMath.Clamp01(percent);
		double L_13 = ___2_percent;
		double L_14;
		L_14 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_13, NULL);
		___2_percent = L_14;
		// double doubleIndex = (points.Length - 1) * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_15 = __this->___points_0;
		NullCheck(L_15);
		double L_16 = ___2_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_15)->max_length)), 1))), L_16));
		// if (closed)
		bool L_17 = __this->___closed_15;
		V_4 = L_17;
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_008f;
		}
	}
	{
		// doubleIndex = points.Length * percent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_19 = __this->___points_0;
		NullCheck(L_19);
		double L_20 = ___2_percent;
		V_0 = ((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_19)->max_length))), L_20));
	}

IL_008f:
	{
		// int pointIndex = DMath.FloorInt(doubleIndex);
		double L_21 = V_0;
		int32_t L_22;
		L_22 = DMath_FloorInt_m53383BF81F27E02DAC2452C667F4953143E1C925(L_21, NULL);
		V_1 = L_22;
		// if (type == Type.Bezier)
		int32_t L_23 = __this->___type_1;
		V_5 = (bool)((((int32_t)L_23) == ((int32_t)2))? 1 : 0);
		bool L_24 = V_5;
		if (!L_24)
		{
			goto IL_00bf;
		}
	}
	{
		// pointIndex = Mathf.Clamp(pointIndex, 0, Mathf.Max(points.Length - 1, 0));
		int32_t L_25 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_26 = __this->___points_0;
		NullCheck(L_26);
		int32_t L_27;
		L_27 = Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_26)->max_length)), 1)), 0, NULL);
		int32_t L_28;
		L_28 = Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline(L_25, 0, L_27, NULL);
		V_1 = L_28;
	}

IL_00bf:
	{
		// CalculatePositionAndTangent(doubleIndex - pointIndex, pointIndex, ref position, ref tangent);
		double L_29 = V_0;
		int32_t L_30 = V_1;
		int32_t L_31 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_32 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_33 = ___1_tangent;
		Spline_CalculatePositionAndTangent_mF068B2206D4D931A96744CC069E75A01399CFBD8(__this, ((double)il2cpp_codegen_subtract(L_29, ((double)L_30))), L_31, L_32, L_33, NULL);
	}

IL_00cd:
	{
		// }
		return;
	}
}
// System.Double Dreamteck.Splines.Spline::GetClosestPoint(System.Int32,UnityEngine.Vector3,System.Double,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double Spline_GetClosestPoint_m3F708EF3EEBEA09900C7A8E4487DCCCFE02E2D7B (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_iterations, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_point, double ___2_start, double ___3_end, int32_t ___4_slices, const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	float V_1 = 0.0f;
	double V_2 = 0.0;
	double V_3 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	double V_5 = 0.0;
	double V_6 = 0.0;
	bool V_7 = false;
	float V_8 = 0.0f;
	float V_9 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	bool V_11 = false;
	double V_12 = 0.0;
	bool V_13 = false;
	float V_14 = 0.0f;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	{
		// if (iterations <= 0)
		int32_t L_0 = ___0_iterations;
		V_7 = (bool)((((int32_t)((((int32_t)L_0) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_7;
		if (!L_1)
		{
			goto IL_007e;
		}
	}
	{
		// float startDist = (point - EvaluatePosition(start)).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_point;
		double L_3 = ___2_start;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_3, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_2, L_4, NULL);
		V_10 = L_5;
		float L_6;
		L_6 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_10), NULL);
		V_8 = L_6;
		// float endDist = (point - EvaluatePosition(end)).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___1_point;
		double L_8 = ___3_end;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Spline_EvaluatePosition_mC528B7281E08D54FC4B0B8A8C70C0A98E26DA4EC(__this, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_7, L_9, NULL);
		V_10 = L_10;
		float L_11;
		L_11 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_10), NULL);
		V_9 = L_11;
		// if (startDist < endDist) return start;
		float L_12 = V_8;
		float L_13 = V_9;
		V_11 = (bool)((((float)L_12) < ((float)L_13))? 1 : 0);
		bool L_14 = V_11;
		if (!L_14)
		{
			goto IL_0054;
		}
	}
	{
		// if (startDist < endDist) return start;
		double L_15 = ___2_start;
		V_12 = L_15;
		goto IL_012e;
	}

IL_0054:
	{
		// else if (endDist < startDist) return end;
		float L_16 = V_9;
		float L_17 = V_8;
		V_13 = (bool)((((float)L_16) < ((float)L_17))? 1 : 0);
		bool L_18 = V_13;
		if (!L_18)
		{
			goto IL_0069;
		}
	}
	{
		// else if (endDist < startDist) return end;
		double L_19 = ___3_end;
		V_12 = L_19;
		goto IL_012e;
	}

IL_0069:
	{
		// else return (start + end) / 2;
		double L_20 = ___2_start;
		double L_21 = ___3_end;
		V_12 = ((double)(((double)il2cpp_codegen_add(L_20, L_21))/(2.0)));
		goto IL_012e;
	}

IL_007e:
	{
		// double closestPercent = 0.0;
		V_0 = (0.0);
		// float closestDistance = Mathf.Infinity;
		V_1 = (std::numeric_limits<float>::infinity());
		// double tick = (end - start) / slices;
		double L_22 = ___3_end;
		double L_23 = ___2_start;
		int32_t L_24 = ___4_slices;
		V_2 = ((double)(((double)il2cpp_codegen_subtract(L_22, L_23))/((double)L_24)));
		// double t = start;
		double L_25 = ___2_start;
		V_3 = L_25;
		// Vector3 pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_4 = L_26;
		goto IL_00ea;
	}

IL_00a2:
	{
		// EvaluatePosition(t, ref pos);
		double L_27 = V_3;
		Spline_EvaluatePosition_m03CFD9B155B1F45965668D3635B807F8C0A01167(__this, L_27, (&V_4), NULL);
		// float dist = (point - pos).sqrMagnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ___1_point;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_28, L_29, NULL);
		V_10 = L_30;
		float L_31;
		L_31 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_10), NULL);
		V_14 = L_31;
		// if (dist < closestDistance)
		float L_32 = V_14;
		float L_33 = V_1;
		V_15 = (bool)((((float)L_32) < ((float)L_33))? 1 : 0);
		bool L_34 = V_15;
		if (!L_34)
		{
			goto IL_00d2;
		}
	}
	{
		// closestDistance = dist;
		float L_35 = V_14;
		V_1 = L_35;
		// closestPercent = t;
		double L_36 = V_3;
		V_0 = L_36;
	}

IL_00d2:
	{
		// if (t == end) break;
		double L_37 = V_3;
		double L_38 = ___3_end;
		V_16 = (bool)((((double)L_37) == ((double)L_38))? 1 : 0);
		bool L_39 = V_16;
		if (!L_39)
		{
			goto IL_00df;
		}
	}
	{
		// if (t == end) break;
		goto IL_00ef;
	}

IL_00df:
	{
		// t = DMath.Move(t, end, tick);
		double L_40 = V_3;
		double L_41 = ___3_end;
		double L_42 = V_2;
		double L_43;
		L_43 = DMath_Move_mFD096234DD99170C682673771D4A375192C5B806(L_40, L_41, L_42, NULL);
		V_3 = L_43;
	}

IL_00ea:
	{
		// while (true)
		V_17 = (bool)1;
		goto IL_00a2;
	}

IL_00ef:
	{
		// double newStart = closestPercent - tick;
		double L_44 = V_0;
		double L_45 = V_2;
		V_5 = ((double)il2cpp_codegen_subtract(L_44, L_45));
		// if (newStart < start) newStart = start;
		double L_46 = V_5;
		double L_47 = ___2_start;
		V_18 = (bool)((((double)L_46) < ((double)L_47))? 1 : 0);
		bool L_48 = V_18;
		if (!L_48)
		{
			goto IL_0102;
		}
	}
	{
		// if (newStart < start) newStart = start;
		double L_49 = ___2_start;
		V_5 = L_49;
	}

IL_0102:
	{
		// double newEnd = closestPercent + tick;
		double L_50 = V_0;
		double L_51 = V_2;
		V_6 = ((double)il2cpp_codegen_add(L_50, L_51));
		// if (newEnd > end) newEnd = end;
		double L_52 = V_6;
		double L_53 = ___3_end;
		V_19 = (bool)((((double)L_52) > ((double)L_53))? 1 : 0);
		bool L_54 = V_19;
		if (!L_54)
		{
			goto IL_0117;
		}
	}
	{
		// if (newEnd > end) newEnd = end;
		double L_55 = ___3_end;
		V_6 = L_55;
	}

IL_0117:
	{
		// return GetClosestPoint(--iterations, point, newStart, newEnd, slices);
		int32_t L_56 = ___0_iterations;
		int32_t L_57 = ((int32_t)il2cpp_codegen_subtract(L_56, 1));
		___0_iterations = L_57;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = ___1_point;
		double L_59 = V_5;
		double L_60 = V_6;
		int32_t L_61 = ___4_slices;
		double L_62;
		L_62 = Spline_GetClosestPoint_m3F708EF3EEBEA09900C7A8E4487DCCCFE02E2D7B(__this, L_57, L_58, L_59, L_60, L_61, NULL);
		V_12 = L_62;
		goto IL_012e;
	}

IL_012e:
	{
		// }
		double L_63 = V_12;
		return L_63;
	}
}
// System.Void Dreamteck.Splines.Spline::Break()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Break_m587449816E9A37104175C284AA6048819A1A6362 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) 
{
	{
		// Break(0);
		Spline_Break_m2D9A42257E9764AB29BA2ED95CBBD665A29F4CA4(__this, 0, NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::Break(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Break_m2D9A42257E9764AB29BA2ED95CBBD665A29F4CA4 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_at, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	{
		// if (!closed) return;
		bool L_0 = __this->___closed_15;
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!closed) return;
		goto IL_00c3;
	}

IL_0013:
	{
		// if (at >= points.Length) return;
		int32_t L_2 = ___0_at;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = __this->___points_0;
		NullCheck(L_3);
		V_2 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// if (at >= points.Length) return;
		goto IL_00c3;
	}

IL_002a:
	{
		// if (at < 0) return;
		int32_t L_5 = ___0_at;
		V_3 = (bool)((((int32_t)L_5) < ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// if (at < 0) return;
		goto IL_00c3;
	}

IL_0037:
	{
		// SplinePoint[] previousPoints = new SplinePoint[points.Length];
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_7 = __this->___points_0;
		NullCheck(L_7);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_8 = (SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3*)SZArrayNew(SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3_il2cpp_TypeInfo_var, (uint32_t)((int32_t)(((RuntimeArray*)L_7)->max_length)));
		V_0 = L_8;
		// points.CopyTo(previousPoints, 0);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_9 = __this->___points_0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_10 = V_0;
		NullCheck((RuntimeArray*)L_9);
		Array_CopyTo_mFD42E3443AB3B850ED6F19359698E242A08E1BAB((RuntimeArray*)L_9, (RuntimeArray*)L_10, 0, NULL);
		// for (int i = at; i < previousPoints.Length; i++)
		int32_t L_11 = ___0_at;
		V_4 = L_11;
		goto IL_0077;
	}

IL_0058:
	{
		// points[i - at] = previousPoints[i];
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_12 = __this->___points_0;
		int32_t L_13 = V_4;
		int32_t L_14 = ___0_at;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_15 = V_0;
		int32_t L_16 = V_4;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_12);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_13, L_14))), (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084)L_18);
		// for (int i = at; i < previousPoints.Length; i++)
		int32_t L_19 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
	}

IL_0077:
	{
		// for (int i = at; i < previousPoints.Length; i++)
		int32_t L_20 = V_4;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_21 = V_0;
		NullCheck(L_21);
		V_5 = (bool)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))? 1 : 0);
		bool L_22 = V_5;
		if (L_22)
		{
			goto IL_0058;
		}
	}
	{
		// for (int i = 0; i < at; i++)
		V_6 = 0;
		goto IL_00b1;
	}

IL_0089:
	{
		// points[(points.Length - at) + i] = previousPoints[i];
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_23 = __this->___points_0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_24 = __this->___points_0;
		NullCheck(L_24);
		int32_t L_25 = ___0_at;
		int32_t L_26 = V_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_27 = V_0;
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_24)->max_length)), L_25)), L_26))), (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084)L_30);
		// for (int i = 0; i < at; i++)
		int32_t L_31 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00b1:
	{
		// for (int i = 0; i < at; i++)
		int32_t L_32 = V_6;
		int32_t L_33 = ___0_at;
		V_7 = (bool)((((int32_t)L_32) < ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_7;
		if (L_34)
		{
			goto IL_0089;
		}
	}
	{
		// closed = false;
		__this->___closed_15 = (bool)0;
	}

IL_00c3:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::Close()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_Close_mF6F9826B8F58D4656A642DD33E112582AA17DF08 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11255B90E43D8883F602E6255AEB3C7D1BD334C5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (points.Length < 3)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_0)->max_length))) < ((int32_t)3))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("Points need to be at least 3 to close the spline");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral11255B90E43D8883F602E6255AEB3C7D1BD334C5, NULL);
		// return;
		goto IL_0025;
	}

IL_001e:
	{
		// closed = true;
		__this->___closed_15 = (bool)1;
	}

IL_0025:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CatToBezierTangents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CatToBezierTangents_m694182901D3AB1BB6BFB433A2A92AE6DD30FD877 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	int32_t V_4 = 0;
	double V_5 = 0.0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	bool V_8 = false;
	{
		// switch (type)
		int32_t L_0 = __this->___type_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_009c;
			}
			case 1:
			{
				goto IL_01a6;
			}
			case 2:
			{
				goto IL_01a8;
			}
			case 3:
			{
				goto IL_0025;
			}
		}
	}
	{
		goto IL_01a8;
	}

IL_0025:
	{
		// for (int i = 0; i < points.Length; i++)
		V_2 = 0;
		goto IL_0088;
	}

IL_0029:
	{
		// points[i].type = SplinePoint.Type.Broken;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = __this->___points_0;
		int32_t L_4 = V_2;
		NullCheck(L_3);
		SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8(((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4))), 1, NULL);
		// points[i].SetTangentPosition(points[i].position);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_5 = __this->___points_0;
		int32_t L_6 = V_2;
		NullCheck(L_5);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_7 = __this->___points_0;
		int32_t L_8 = V_2;
		NullCheck(L_7);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___position_2;
		SplinePoint_SetTangentPosition_m7DE86139E3FA716AF8A74B99096AACB96BB6C087(((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6))), L_9, NULL);
		// points[i].SetTangent2Position(points[i].position);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_10 = __this->___points_0;
		int32_t L_11 = V_2;
		NullCheck(L_10);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_12 = __this->___points_0;
		int32_t L_13 = V_2;
		NullCheck(L_12);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___position_2;
		SplinePoint_SetTangent2Position_mA1986532B0F63A77D27041E62DA5B5CCD876CC36(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), L_14, NULL);
		// for (int i = 0; i < points.Length; i++)
		int32_t L_15 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0088:
	{
		// for (int i = 0; i < points.Length; i++)
		int32_t L_16 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_17 = __this->___points_0;
		NullCheck(L_17);
		V_3 = (bool)((((int32_t)L_16) < ((int32_t)((int32_t)(((RuntimeArray*)L_17)->max_length))))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_0029;
		}
	}
	{
		// break;
		goto IL_01a8;
	}

IL_009c:
	{
		// for (int i = 0; i < points.Length; i++)
		V_4 = 0;
		goto IL_018f;
	}

IL_00a4:
	{
		// points[i].type = SplinePoint.Type.SmoothMirrored;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_19 = __this->___points_0;
		int32_t L_20 = V_4;
		NullCheck(L_19);
		SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8(((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20))), 0, NULL);
		// double percent = GetPointPercent(i);
		int32_t L_21 = V_4;
		double L_22;
		L_22 = Spline_GetPointPercent_m15F86239227793C30FBB28532BE5DF26522FEA24(__this, L_21, NULL);
		V_5 = L_22;
		// Vector3 tangent = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		V_6 = L_23;
		// EvaluateTangent(percent, ref tangent);
		double L_24 = V_5;
		Spline_EvaluateTangent_mFBAD9629C6DC50790A474115E47D3C658394D58A(__this, L_24, (&V_6), NULL);
		// if(_knotParametrization > 0f)
		float L_25 = __this->____knotParametrization_16;
		V_7 = (bool)((((float)L_25) > ((float)(0.0f)))? 1 : 0);
		bool L_26 = V_7;
		if (!L_26)
		{
			goto IL_0150;
		}
	}
	{
		// ComputeCatPoints(i);
		int32_t L_27 = V_4;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_27, NULL);
		// points[i].SetTangent2Position(points[i].position + tangent.normalized * Vector3.Distance(P[0], P[2]) / 6f);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_28 = __this->___points_0;
		int32_t L_29 = V_4;
		NullCheck(L_28);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_30 = __this->___points_0;
		int32_t L_31 = V_4;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_6), NULL);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_34);
		int32_t L_35 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_37);
		int32_t L_38 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		float L_40;
		L_40 = Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline(L_36, L_39, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_33, L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_41, (6.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_42, NULL);
		SplinePoint_SetTangent2Position_mA1986532B0F63A77D27041E62DA5B5CCD876CC36(((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29))), L_43, NULL);
		goto IL_0188;
	}

IL_0150:
	{
		// points[i].SetTangent2Position(points[i].position + tangent / 3f);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_44 = __this->___points_0;
		int32_t L_45 = V_4;
		NullCheck(L_44);
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_46 = __this->___points_0;
		int32_t L_47 = V_4;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = V_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_49, (3.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_48, L_50, NULL);
		SplinePoint_SetTangent2Position_mA1986532B0F63A77D27041E62DA5B5CCD876CC36(((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_45))), L_51, NULL);
	}

IL_0188:
	{
		// for (int i = 0; i < points.Length; i++)
		int32_t L_52 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_52, 1));
	}

IL_018f:
	{
		// for (int i = 0; i < points.Length; i++)
		int32_t L_53 = V_4;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_54 = __this->___points_0;
		NullCheck(L_54);
		V_8 = (bool)((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))? 1 : 0);
		bool L_55 = V_8;
		if (L_55)
		{
			goto IL_00a4;
		}
	}
	{
		// break;
		goto IL_01a8;
	}

IL_01a6:
	{
		// break;
		goto IL_01a8;
	}

IL_01a8:
	{
		// type = Type.Bezier;
		__this->___type_1 = 2;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculatePosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculatePosition_m34FFEEE9116036D6842DD4296FF838F4018A26E7 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_percent, int32_t ___2_pointIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = __this->___type_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_006a;
			}
			case 2:
			{
				goto IL_005e;
			}
			case 3:
			{
				goto IL_007e;
			}
		}
	}
	{
		goto IL_0092;
	}

IL_0022:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_3 = ___2_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_3, NULL);
		// if (_knotParametrization < 0.000001f)
		float L_4 = __this->____knotParametrization_16;
		V_2 = (bool)((((float)L_4) < ((float)(9.99999997E-07f)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// CalculateCatmullRomPositionFast(ref position, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___0_position;
		double L_7 = ___1_percent;
		int32_t L_8 = ___2_pointIndex;
		Spline_CalculateCatmullRomPositionFast_m4958BFCC3BDD634321B594A3863C59F9D7D5CEE2(__this, L_6, L_7, L_8, NULL);
		goto IL_005c;
	}

IL_0049:
	{
		// CalculateCatmullRomComponents(percent);
		double L_9 = ___1_percent;
		Spline_CalculateCatmullRomComponents_m227F903FE9C56B8DDE9101359F332F9663EABD3D(__this, L_9, NULL);
		// CalculateCatmullRomPosition(percent, ref position);
		double L_10 = ___1_percent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___0_position;
		Spline_CalculateCatmullRomPosition_mD14AE698CCD634DC788214171D6DA23AAEFDF253(__this, L_10, L_11, NULL);
	}

IL_005c:
	{
		// break;
		goto IL_0092;
	}

IL_005e:
	{
		// case Type.Bezier: CalculateBezierPosition(ref position, percent, pointIndex); break;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___0_position;
		double L_13 = ___1_percent;
		int32_t L_14 = ___2_pointIndex;
		Spline_CalculateBezierPosition_m4195727C1DD9CCC3A6C010835DF16F03C513D185(__this, L_12, L_13, L_14, NULL);
		// case Type.Bezier: CalculateBezierPosition(ref position, percent, pointIndex); break;
		goto IL_0092;
	}

IL_006a:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_15 = ___2_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_15, NULL);
		// CalculateBSplinePosition(ref position, percent, pointIndex); break;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___0_position;
		double L_17 = ___1_percent;
		int32_t L_18 = ___2_pointIndex;
		Spline_CalculateBSplinePosition_m89F986808DAF6CEE5960F4881D24CC04E929D856(__this, L_16, L_17, L_18, NULL);
		// CalculateBSplinePosition(ref position, percent, pointIndex); break;
		goto IL_0092;
	}

IL_007e:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_19 = ___2_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_19, NULL);
		// CalculateLinearPosition(ref position, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___0_position;
		double L_21 = ___1_percent;
		int32_t L_22 = ___2_pointIndex;
		Spline_CalculateLinearPosition_mC69E728A970AF7836DE37791C59B934051C7F587(__this, L_20, L_21, L_22, NULL);
		// break;
		goto IL_0092;
	}

IL_0092:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateTangent(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateTangent_m8880C394538B296C20AD0EE843CF14D024F8B427 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_percent, int32_t ___2_pointIndex, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = __this->___type_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_007e;
			}
			case 2:
			{
				goto IL_005e;
			}
			case 3:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_007e;
	}

IL_0022:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_3 = ___2_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_3, NULL);
		// if (_knotParametrization < 0.000001f)
		float L_4 = __this->____knotParametrization_16;
		V_2 = (bool)((((float)L_4) < ((float)(9.99999997E-07f)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		// CalculateCatmullRomTangentFast(ref tangent, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___0_tangent;
		double L_7 = ___1_percent;
		int32_t L_8 = ___2_pointIndex;
		Spline_CalculateCatmullRomTangentFast_mB5CAB652CCC6CF09ECDBE3914A5323F315932ECE(__this, L_6, L_7, L_8, NULL);
		goto IL_005c;
	}

IL_0049:
	{
		// CalculateCatmullRomComponents(percent);
		double L_9 = ___1_percent;
		Spline_CalculateCatmullRomComponents_m227F903FE9C56B8DDE9101359F332F9663EABD3D(__this, L_9, NULL);
		// CalculateCatmullRomTangent(percent, ref tangent);
		double L_10 = ___1_percent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = ___0_tangent;
		Spline_CalculateCatmullRomTangent_m4273903C168F8C006DDF39C40900DC2B0239156D(__this, L_10, L_11, NULL);
	}

IL_005c:
	{
		// break;
		goto IL_007e;
	}

IL_005e:
	{
		// CalculateBezierTangent(ref tangent, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_12 = ___0_tangent;
		double L_13 = ___1_percent;
		int32_t L_14 = ___2_pointIndex;
		Spline_CalculateBezierTangent_m350B5122CFB1F8A67AA7BE852CDB8816865A8F42(__this, L_12, L_13, L_14, NULL);
		// break;
		goto IL_007e;
	}

IL_006a:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_15 = ___2_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_15, NULL);
		// CalculateLinearTangent(ref tangent, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___0_tangent;
		double L_17 = ___1_percent;
		int32_t L_18 = ___2_pointIndex;
		Spline_CalculateLinearTangent_mE2A03F8CD6FE41D74757E4FAB40D7DA7E67F13FB(__this, L_16, L_17, L_18, NULL);
		// break;
		goto IL_007e;
	}

IL_007e:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculatePositionAndTangent(System.Double,System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculatePositionAndTangent_mF068B2206D4D931A96744CC069E75A01399CFBD8 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_percent, int32_t ___1_pointIndex, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___2_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___3_tangent, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// switch (type)
		int32_t L_0 = __this->___type_1;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0025;
			}
			case 1:
			{
				goto IL_008d;
			}
			case 2:
			{
				goto IL_0076;
			}
			case 3:
			{
				goto IL_00a1;
			}
		}
	}
	{
		goto IL_00c0;
	}

IL_0025:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_3 = ___1_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_3, NULL);
		// if (_knotParametrization < 0.000001f)
		float L_4 = __this->____knotParametrization_16;
		V_2 = (bool)((((float)L_4) < ((float)(9.99999997E-07f)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		// CalculateCatmullRomPositionFast(ref position, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___2_position;
		double L_7 = ___0_percent;
		int32_t L_8 = ___1_pointIndex;
		Spline_CalculateCatmullRomPositionFast_m4958BFCC3BDD634321B594A3863C59F9D7D5CEE2(__this, L_6, L_7, L_8, NULL);
		// CalculateCatmullRomTangentFast(ref tangent, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___3_tangent;
		double L_10 = ___0_percent;
		int32_t L_11 = ___1_pointIndex;
		Spline_CalculateCatmullRomTangentFast_mB5CAB652CCC6CF09ECDBE3914A5323F315932ECE(__this, L_9, L_10, L_11, NULL);
		goto IL_0074;
	}

IL_0057:
	{
		// CalculateCatmullRomComponents(percent);
		double L_12 = ___0_percent;
		Spline_CalculateCatmullRomComponents_m227F903FE9C56B8DDE9101359F332F9663EABD3D(__this, L_12, NULL);
		// CalculateCatmullRomPosition(percent, ref position);
		double L_13 = ___0_percent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = ___2_position;
		Spline_CalculateCatmullRomPosition_mD14AE698CCD634DC788214171D6DA23AAEFDF253(__this, L_13, L_14, NULL);
		// CalculateCatmullRomTangent(percent, ref tangent);
		double L_15 = ___0_percent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___3_tangent;
		Spline_CalculateCatmullRomTangent_m4273903C168F8C006DDF39C40900DC2B0239156D(__this, L_15, L_16, NULL);
	}

IL_0074:
	{
		// break;
		goto IL_00c0;
	}

IL_0076:
	{
		// CalculateBezierPosition(ref position, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_17 = ___2_position;
		double L_18 = ___0_percent;
		int32_t L_19 = ___1_pointIndex;
		Spline_CalculateBezierPosition_m4195727C1DD9CCC3A6C010835DF16F03C513D185(__this, L_17, L_18, L_19, NULL);
		// CalculateBezierTangent(ref tangent, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_20 = ___3_tangent;
		double L_21 = ___0_percent;
		int32_t L_22 = ___1_pointIndex;
		Spline_CalculateBezierTangent_m350B5122CFB1F8A67AA7BE852CDB8816865A8F42(__this, L_20, L_21, L_22, NULL);
		// break;
		goto IL_00c0;
	}

IL_008d:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_23 = ___1_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_23, NULL);
		// CalculateBSplinePosition(ref position, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_24 = ___2_position;
		double L_25 = ___0_percent;
		int32_t L_26 = ___1_pointIndex;
		Spline_CalculateBSplinePosition_m89F986808DAF6CEE5960F4881D24CC04E929D856(__this, L_24, L_25, L_26, NULL);
		// break;
		goto IL_00c0;
	}

IL_00a1:
	{
		// ComputeCatPoints(pointIndex);
		int32_t L_27 = ___1_pointIndex;
		Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795(__this, L_27, NULL);
		// CalculateLinearPosition(ref position, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_28 = ___2_position;
		double L_29 = ___0_percent;
		int32_t L_30 = ___1_pointIndex;
		Spline_CalculateLinearPosition_mC69E728A970AF7836DE37791C59B934051C7F587(__this, L_28, L_29, L_30, NULL);
		// CalculateLinearTangent(ref tangent, percent, pointIndex);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_31 = ___3_tangent;
		double L_32 = ___0_percent;
		int32_t L_33 = ___1_pointIndex;
		Spline_CalculateLinearTangent_mE2A03F8CD6FE41D74757E4FAB40D7DA7E67F13FB(__this, L_31, L_32, L_33, NULL);
		// break;
		goto IL_00c0;
	}

IL_00c0:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateLinearPosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateLinearPosition_mC69E728A970AF7836DE37791C59B934051C7F587 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (points.Length == 0)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// position = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___0_position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// return;
		goto IL_0040;
	}

IL_001d:
	{
		// position = Vector3.Lerp(P[1], P[2], (float)t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___0_position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_5 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_5);
		int32_t L_6 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_8 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_8);
		int32_t L_9 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		double L_11 = ___1_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_7, L_10, ((float)L_11), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_12;
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateLinearTangent(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateLinearTangent_mE2A03F8CD6FE41D74757E4FAB40D7DA7E67F13FB (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (points.Length == 0)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_0 = (bool)((((int32_t)(((RuntimeArray*)L_0)->max_length)) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		// tangent = Vector3.forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___0_tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_3;
		// return;
		goto IL_0090;
	}

IL_001d:
	{
		// if (linearAverageDirection) tangent = Vector3.Slerp(P[1] - P[0], P[2] - P[1], 0.5f);
		bool L_4 = __this->___linearAverageDirection_2;
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_006f;
		}
	}
	{
		// if (linearAverageDirection) tangent = Vector3.Slerp(P[1] - P[0], P[2] - P[1], 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = ___0_tangent;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_7);
		int32_t L_8 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_9, L_12, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_17);
		int32_t L_18 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_16, L_19, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_13, L_20, (0.5f), NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_6 = L_21;
		goto IL_0090;
	}

IL_006f:
	{
		// else tangent = P[2] - P[1];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_22 = ___0_tangent;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_23);
		int32_t L_24 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_26);
		int32_t L_27 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_28, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_22 = L_29;
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateBSplinePosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateBSplinePosition_m89F986808DAF6CEE5960F4881D24CC04E929D856 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_time, int32_t ___2_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		// if (points.Length > 0) position = points[0].position;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_0 = (bool)((!(((uint32_t)(((RuntimeArray*)L_0)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (points.Length > 0) position = points[0].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___0_position;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = __this->___points_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_4;
	}

IL_0026:
	{
		// if (points.Length > 1)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_5 = __this->___points_0;
		NullCheck(L_5);
		V_1 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_016f;
		}
	}
	{
		// float tf = (float)DMath.Clamp01(time);
		double L_7 = ___1_time;
		double L_8;
		L_8 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_7, NULL);
		V_2 = ((float)L_8);
		// position = ((-P[0] + P[2]) / 2f
		// + tf * ((P[0] - 2f * P[1] + P[2]) / 2f
		// + tf * (-P[0] + 3f * P[1] - 3f * P[2] + P[3]) / 6f)) * tf
		// + (P[0] + 4f * P[1] + P[2]) / 6f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___0_position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_10);
		int32_t L_11 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_12, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_14 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_14);
		int32_t L_15 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_13, L_16, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_17, (2.0f), NULL);
		float L_19 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_20 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_20);
		int32_t L_21 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_23);
		int32_t L_24 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_25, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_22, L_26, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_28 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_28);
		int32_t L_29 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_31, (2.0f), NULL);
		float L_33 = V_2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_34 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_34);
		int32_t L_35 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_36, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_38 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_38);
		int32_t L_39 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_39));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41;
		L_41 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_40, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_41, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_43);
		int32_t L_44 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_42, L_46, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_48 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_48);
		int32_t L_49 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_49));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_47, L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_33, L_51, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53;
		L_53 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_52, (6.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_32, L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_19, L_54, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_18, L_55, NULL);
		float L_57 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58;
		L_58 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_56, L_57, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_59 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_59);
		int32_t L_60 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_60));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_62);
		int32_t L_63 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_65, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_67);
		int32_t L_68 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_66, L_69, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_70, (6.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_58, L_71, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_9 = L_72;
	}

IL_016f:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateBezierPosition(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateBezierPosition_m4195727C1DD9CCC3A6C010835DF16F03C513D185 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	{
		// if (points.Length > 0) position = points[0].position;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_3 = (bool)((!(((uint32_t)(((RuntimeArray*)L_0)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// if (points.Length > 0) position = points[0].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___0_position;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = __this->___points_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_4;
		goto IL_002d;
	}

IL_0028:
	{
		// else return;
		goto IL_010a;
	}

IL_002d:
	{
		// if (!closed && points.Length == 1) return;
		bool L_5 = __this->___closed_15;
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_6 = __this->___points_0;
		NullCheck(L_6);
		G_B6_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)1))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 0;
	}

IL_0043:
	{
		V_4 = (bool)G_B6_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// if (!closed && points.Length == 1) return;
		goto IL_010a;
	}

IL_004e:
	{
		// t = DMath.Clamp01(t);
		double L_8 = ___1_t;
		double L_9;
		L_9 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_8, NULL);
		___1_t = L_9;
		// int it = i + 1;
		int32_t L_10 = ___2_i;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// if (it >= points.Length)
		int32_t L_11 = V_0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_12 = __this->___points_0;
		NullCheck(L_12);
		V_5 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		// it = 0;
		V_0 = 0;
	}

IL_0072:
	{
		// float ft = (float)t;
		double L_14 = ___1_t;
		V_1 = ((float)L_14);
		// float nt = 1f - ft;
		float L_15 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_15));
		// position = nt * nt * nt * points[i].position +
		//     3f * nt * nt * ft * points[i].tangent2 +
		//     3f * nt * ft * ft * points[it].tangent +
		//     ft * ft * ft * points[it].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___0_position;
		float L_17 = V_2;
		float L_18 = V_2;
		float L_19 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_20 = __this->___points_0;
		int32_t L_21 = ___2_i;
		NullCheck(L_20);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_21)))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_17, L_18)), L_19)), L_22, NULL);
		float L_24 = V_2;
		float L_25 = V_2;
		float L_26 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_27 = __this->___points_0;
		int32_t L_28 = ___2_i;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28)))->___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_24)), L_25)), L_26)), L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_23, L_30, NULL);
		float L_32 = V_2;
		float L_33 = V_1;
		float L_34 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_35 = __this->___points_0;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36)))->___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_32)), L_33)), L_34)), L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_38, NULL);
		float L_40 = V_1;
		float L_41 = V_1;
		float L_42 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_43 = __this->___points_0;
		int32_t L_44 = V_0;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44)))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_40, L_41)), L_42)), L_45, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_39, L_46, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_16 = L_47;
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateBezierTangent(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateBezierTangent_m350B5122CFB1F8A67AA7BE852CDB8816865A8F42 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B6_0 = 0;
	{
		// if (points.Length > 0) tangent = points[0].tangent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_0 = __this->___points_0;
		NullCheck(L_0);
		V_3 = (bool)((!(((uint32_t)(((RuntimeArray*)L_0)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_1 = V_3;
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// if (points.Length > 0) tangent = points[0].tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_2 = ___0_tangent;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_3 = __this->___points_0;
		NullCheck(L_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tangent_6;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_2 = L_4;
		goto IL_002d;
	}

IL_0028:
	{
		// else return;
		goto IL_0156;
	}

IL_002d:
	{
		// if (!closed && points.Length == 1) return;
		bool L_5 = __this->___closed_15;
		if (L_5)
		{
			goto IL_0042;
		}
	}
	{
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_6 = __this->___points_0;
		NullCheck(L_6);
		G_B6_0 = ((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)1))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 0;
	}

IL_0043:
	{
		V_4 = (bool)G_B6_0;
		bool L_7 = V_4;
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// if (!closed && points.Length == 1) return;
		goto IL_0156;
	}

IL_004e:
	{
		// t = DMath.Clamp01(t);
		double L_8 = ___1_t;
		double L_9;
		L_9 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_8, NULL);
		___1_t = L_9;
		// int it = i + 1;
		int32_t L_10 = ___2_i;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
		// if (it >= points.Length)
		int32_t L_11 = V_0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_12 = __this->___points_0;
		NullCheck(L_12);
		V_5 = (bool)((((int32_t)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0072;
		}
	}
	{
		// it = 0;
		V_0 = 0;
	}

IL_0072:
	{
		// float ft = (float)t;
		double L_14 = ___1_t;
		V_1 = ((float)L_14);
		// float nt = 1f - ft;
		float L_15 = V_1;
		V_2 = ((float)il2cpp_codegen_subtract((1.0f), L_15));
		// tangent = -3f * nt * nt * points[i].position +
		//     3f * nt * nt * points[i].tangent2 -
		//     6f * ft * nt * points[i].tangent2 -
		//     3f * ft * ft * points[it].tangent +
		//     6f * ft * nt * points[it].tangent +
		//     3f * ft * ft * points[it].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___0_tangent;
		float L_17 = V_2;
		float L_18 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_19 = __this->___points_0;
		int32_t L_20 = ___2_i;
		NullCheck(L_19);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ((L_19)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_20)))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((-3.0f), L_17)), L_18)), L_21, NULL);
		float L_23 = V_2;
		float L_24 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_25 = __this->___points_0;
		int32_t L_26 = ___2_i;
		NullCheck(L_25);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = ((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_26)))->___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_23)), L_24)), L_27, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_22, L_28, NULL);
		float L_30 = V_1;
		float L_31 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_32 = __this->___points_0;
		int32_t L_33 = ___2_i;
		NullCheck(L_32);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ((L_32)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_33)))->___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.0f), L_30)), L_31)), L_34, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_29, L_35, NULL);
		float L_37 = V_1;
		float L_38 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_39 = __this->___points_0;
		int32_t L_40 = V_0;
		NullCheck(L_39);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = ((L_39)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_40)))->___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_37)), L_38)), L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_36, L_42, NULL);
		float L_44 = V_1;
		float L_45 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_46 = __this->___points_0;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_47)))->___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((6.0f), L_44)), L_45)), L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_49, NULL);
		float L_51 = V_1;
		float L_52 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_53 = __this->___points_0;
		int32_t L_54 = V_0;
		NullCheck(L_53);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_54)))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply((3.0f), L_51)), L_52)), L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_50, L_56, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_16 = L_57;
	}

IL_0156:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomComponents(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomComponents_m227F903FE9C56B8DDE9101359F332F9663EABD3D (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_t, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// t1 = GetInterval(P[0], P[1]);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_0);
		int32_t L_1 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_3);
		int32_t L_4 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6;
		L_6 = Spline_U3CCalculateCatmullRomComponentsU3Eg__GetIntervalU7C65_0_m34BC5C9BF4891FFB4EE73BA8315A2C970C2FF024(__this, L_2, L_5, NULL);
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12 = L_6;
		// t2 = GetInterval(P[1], P[2]) + t1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_7);
		int32_t L_8 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_10 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_10);
		int32_t L_11 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13;
		L_13 = Spline_U3CCalculateCatmullRomComponentsU3Eg__GetIntervalU7C65_0_m34BC5C9BF4891FFB4EE73BA8315A2C970C2FF024(__this, L_9, L_12, NULL);
		float L_14 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13 = ((float)il2cpp_codegen_add(L_13, L_14));
		// t3 = GetInterval(P[2], P[3]) + t2;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_15);
		int32_t L_16 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_18);
		int32_t L_19 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		float L_21;
		L_21 = Spline_U3CCalculateCatmullRomComponentsU3Eg__GetIntervalU7C65_0_m34BC5C9BF4891FFB4EE73BA8315A2C970C2FF024(__this, L_17, L_20, NULL);
		float L_22 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14 = ((float)il2cpp_codegen_add(L_21, L_22));
		// float tf = Mathf.LerpUnclamped(t1, t2, (float)t);
		float L_23 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_24 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		double L_25 = ___0_t;
		float L_26;
		L_26 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_23, L_24, ((float)L_25), NULL);
		V_0 = L_26;
		// A1 = (t1 - tf) / (t1 - t0) * P[0] + (tf - t0) / (t1 - t0) * P[1];
		float L_27 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_28 = V_0;
		float L_29 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_30);
		int32_t L_31 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_27, L_28))/((float)il2cpp_codegen_subtract(L_29, (0.0f))))), L_32, NULL);
		float L_34 = V_0;
		float L_35 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_36);
		int32_t L_37 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_34, (0.0f)))/((float)il2cpp_codegen_subtract(L_35, (0.0f))))), L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_33, L_39, NULL);
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A1_7 = L_40;
		// A2 = (t2 - tf) / (t2 - t1) * P[1] + (tf - t1) / (t2 - t1) * P[2];
		float L_41 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_42 = V_0;
		float L_43 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_44 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_45 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_45);
		int32_t L_46 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_41, L_42))/((float)il2cpp_codegen_subtract(L_43, L_44)))), L_47, NULL);
		float L_49 = V_0;
		float L_50 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_51 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_52 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_53);
		int32_t L_54 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_49, L_50))/((float)il2cpp_codegen_subtract(L_51, L_52)))), L_55, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57;
		L_57 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_48, L_56, NULL);
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A2_8 = L_57;
		// A3 = (t3 - tf) / (t3 - t2) * P[2] + (tf - t2) / (t3 - t2) * P[3];
		float L_58 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_59 = V_0;
		float L_60 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_61 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_62);
		int32_t L_63 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_58, L_59))/((float)il2cpp_codegen_subtract(L_60, L_61)))), L_64, NULL);
		float L_66 = V_0;
		float L_67 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_68 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_69 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_70 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_70);
		int32_t L_71 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_66, L_67))/((float)il2cpp_codegen_subtract(L_68, L_69)))), L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_65, L_73, NULL);
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A3_9 = L_74;
		// B1 = (t2 - tf) / (t2 - t0) * A1 + (tf - t0) / (t2 - t0) * A2;
		float L_75 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_76 = V_0;
		float L_77 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A1_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		L_79 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_75, L_76))/((float)il2cpp_codegen_subtract(L_77, (0.0f))))), L_78, NULL);
		float L_80 = V_0;
		float L_81 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A2_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_80, (0.0f)))/((float)il2cpp_codegen_subtract(L_81, (0.0f))))), L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_79, L_83, NULL);
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___B1_10 = L_84;
		// B2 = (t3 - tf) / (t3 - t1) * A2 + (tf - t1) / (t3 - t1) * A3;
		float L_85 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_86 = V_0;
		float L_87 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_88 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A2_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		L_90 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_85, L_86))/((float)il2cpp_codegen_subtract(L_87, L_88)))), L_89, NULL);
		float L_91 = V_0;
		float L_92 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_93 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_94 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_95 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A3_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_96;
		L_96 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_91, L_92))/((float)il2cpp_codegen_subtract(L_93, L_94)))), L_95, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_97;
		L_97 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_90, L_96, NULL);
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___B2_11 = L_97;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomPosition(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomPosition_mD14AE698CCD634DC788214171D6DA23AAEFDF253 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_position, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// float tf = Mathf.LerpUnclamped(t1, t2, (float)t);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		float L_0 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_1 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		double L_2 = ___0_t;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_0, L_1, ((float)L_2), NULL);
		V_0 = L_3;
		// position = (t2 - tf) / (t2 - t1) * B1 + (tf - t1) / (t2 - t1) * B2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = ___1_position;
		float L_5 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_6 = V_0;
		float L_7 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_8 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___B1_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_5, L_6))/((float)il2cpp_codegen_subtract(L_7, L_8)))), L_9, NULL);
		float L_11 = V_0;
		float L_12 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_13 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_14 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___B2_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_11, L_12))/((float)il2cpp_codegen_subtract(L_13, L_14)))), L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_10, L_16, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_4 = L_17;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomTangent(System.Double,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomTangent_m4273903C168F8C006DDF39C40900DC2B0239156D (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, double ___0_t, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___1_tangent, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// float tf = Mathf.LerpUnclamped(t1, t2, (float)t);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		float L_0 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_1 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		double L_2 = ___0_t;
		float L_3;
		L_3 = Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline(L_0, L_1, ((float)L_2), NULL);
		V_0 = L_3;
		// Vector3 A1p = (P[1] - P[0]) / t1;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_4 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_4);
		int32_t L_5 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_7 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_7);
		int32_t L_8 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_9, NULL);
		float L_11 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_10, L_11, NULL);
		V_1 = L_12;
		// Vector3 A2p = (P[2] - P[1]) / (t2 - t1);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_13);
		int32_t L_14 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_16 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_16);
		int32_t L_17 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_15, L_18, NULL);
		float L_20 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_21 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_19, ((float)il2cpp_codegen_subtract(L_20, L_21)), NULL);
		V_2 = L_22;
		// Vector3 A3p = (P[3] - P[2]) / (t3 - t2);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_23 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_23);
		int32_t L_24 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_26 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_26);
		int32_t L_27 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = (L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_25, L_28, NULL);
		float L_30 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_31 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_29, ((float)il2cpp_codegen_subtract(L_30, L_31)), NULL);
		V_3 = L_32;
		// Vector3 B1p = (A2 - A1) / t2  + (t2 - tf) / t2 * A1p + tf / t2  * A2p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A2_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A1_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_33, L_34, NULL);
		float L_36 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_35, L_36, NULL);
		float L_38 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_39 = V_0;
		float L_40 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_38, L_39))/L_40)), L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_37, L_42, NULL);
		float L_44 = V_0;
		float L_45 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_47;
		L_47 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(L_44/L_45)), L_46, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48;
		L_48 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_43, L_47, NULL);
		V_4 = L_48;
		// Vector3 B2p = (A3 - A2) / (t3 - t1) + (t3 - tf) / (t3 - t1) * A2p + (tf - t1) / (t3 - t1) * A3p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A3_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___A2_8;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_49, L_50, NULL);
		float L_52 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_53 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_51, ((float)il2cpp_codegen_subtract(L_52, L_53)), NULL);
		float L_55 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_56 = V_0;
		float L_57 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_58 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_55, L_56))/((float)il2cpp_codegen_subtract(L_57, L_58)))), L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_54, L_60, NULL);
		float L_62 = V_0;
		float L_63 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_64 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t3_14;
		float L_65 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67;
		L_67 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_62, L_63))/((float)il2cpp_codegen_subtract(L_64, L_65)))), L_66, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68;
		L_68 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_61, L_67, NULL);
		V_5 = L_68;
		// tangent = (B2 - B1) / (t2 - t1) + (t2 - tf) / (t2 - t1) * B1p + (tf - t1) / (t2 - t1) * B2p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_69 = ___1_tangent;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___B2_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___B1_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_70, L_71, NULL);
		float L_73 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_74 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_72, ((float)il2cpp_codegen_subtract(L_73, L_74)), NULL);
		float L_76 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_77 = V_0;
		float L_78 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_79 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80 = V_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_81;
		L_81 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_76, L_77))/((float)il2cpp_codegen_subtract(L_78, L_79)))), L_80, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82;
		L_82 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_75, L_81, NULL);
		float L_83 = V_0;
		float L_84 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		float L_85 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t2_13;
		float L_86 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___t1_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_87 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88;
		L_88 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)(((float)il2cpp_codegen_subtract(L_83, L_84))/((float)il2cpp_codegen_subtract(L_85, L_86)))), L_87, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89;
		L_89 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_82, L_88, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_69 = L_89;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomPositionFast(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomPositionFast_m4958BFCC3BDD634321B594A3863C59F9D7D5CEE2 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_position, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t G_B5_0 = 0;
	{
		// float t1 = (float)t;
		double L_0 = ___1_t;
		V_0 = ((float)L_0);
		// float t2 = t1 * t1;
		float L_1 = V_0;
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// float t3 = t2 * t1;
		float L_3 = V_1;
		float L_4 = V_0;
		V_2 = ((float)il2cpp_codegen_multiply(L_3, L_4));
		// if (points.Length > 0)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_5 = __this->___points_0;
		NullCheck(L_5);
		V_3 = (bool)((!(((uint32_t)(((RuntimeArray*)L_5)->max_length)) <= ((uint32_t)0)))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// position = points[0].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = ___0_position;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_8 = __this->___points_0;
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ((L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_2;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_7 = L_9;
	}

IL_0033:
	{
		// if (!closed && i >= points.Length) return;
		bool L_10 = __this->___closed_15;
		if (L_10)
		{
			goto IL_004b;
		}
	}
	{
		int32_t L_11 = ___2_i;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_12 = __this->___points_0;
		NullCheck(L_12);
		G_B5_0 = ((((int32_t)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_004c;
	}

IL_004b:
	{
		G_B5_0 = 0;
	}

IL_004c:
	{
		V_4 = (bool)G_B5_0;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0057;
		}
	}
	{
		// if (!closed && i >= points.Length) return;
		goto IL_0180;
	}

IL_0057:
	{
		// if (points.Length > 1)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_14 = __this->___points_0;
		NullCheck(L_14);
		V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_15 = V_5;
		if (!L_15)
		{
			goto IL_0180;
		}
	}
	{
		// position = 0.5f * ((2f * P[1]) + (-P[0] + P[2]) * t1
		// + (2f * P[0] - 5f * P[1] + 4f * P[2] - P[3]) * t2
		// + (-P[0] + 3f * P[1] - 3f * P[2] + P[3]) * t3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_16 = ___0_position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_17 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_17);
		int32_t L_18 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_19, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_21);
		int32_t L_22 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_23, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_25);
		int32_t L_26 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28;
		L_28 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_24, L_27, NULL);
		float L_29 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_28, L_29, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_20, L_30, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_32 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_32);
		int32_t L_33 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((2.0f), L_34, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_36 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_36);
		int32_t L_37 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_37));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((5.0f), L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_35, L_39, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_41 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_41);
		int32_t L_42 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((4.0f), L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_44, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_46);
		int32_t L_47 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_45, L_48, NULL);
		float L_50 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_49, L_50, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52;
		L_52 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_31, L_51, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_53 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_53);
		int32_t L_54 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56;
		L_56 = Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline(L_55, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_57 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_57);
		int32_t L_58 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_59, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_61;
		L_61 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_56, L_60, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_62 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_62);
		int32_t L_63 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_63));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65;
		L_65 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((3.0f), L_64, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66;
		L_66 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_61, L_65, NULL);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_67);
		int32_t L_68 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = (L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_66, L_69, NULL);
		float L_71 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72;
		L_72 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_70, L_71, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73;
		L_73 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_52, L_72, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline((0.5f), L_73, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_16 = L_74;
	}

IL_0180:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::CalculateCatmullRomTangentFast(UnityEngine.Vector3&,System.Double,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_CalculateCatmullRomTangentFast_mB5CAB652CCC6CF09ECDBE3914A5323F315932ECE (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* ___0_tangent, double ___1_t, int32_t ___2_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B3_0 = 0;
	{
		// float t1 = (float)t;
		double L_0 = ___1_t;
		V_0 = ((float)L_0);
		// float t2 = t1 * t1;
		float L_1 = V_0;
		float L_2 = V_0;
		V_1 = ((float)il2cpp_codegen_multiply(L_1, L_2));
		// if (!closed && i >= points.Length) return;
		bool L_3 = __this->___closed_15;
		if (L_3)
		{
			goto IL_0020;
		}
	}
	{
		int32_t L_4 = ___2_i;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_5 = __this->___points_0;
		NullCheck(L_5);
		G_B3_0 = ((((int32_t)((((int32_t)L_4) < ((int32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0021;
	}

IL_0020:
	{
		G_B3_0 = 0;
	}

IL_0021:
	{
		V_2 = (bool)G_B3_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_002a;
		}
	}
	{
		// if (!closed && i >= points.Length) return;
		goto IL_0109;
	}

IL_002a:
	{
		// if (points.Length > 1)
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_7 = __this->___points_0;
		NullCheck(L_7);
		V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_7)->max_length))) > ((int32_t)1))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0109;
		}
	}
	{
		// tangent = (6 * t2 - 6 * t1) * P[1]
		// + (3 * t2 - 4 * t1 + 1) * (P[2] - P[0]) * 0.5f
		// + (-6 * t2 + 6 * t1) * P[2]
		// + (3 * t2 - 2 * t1) * (P[3] - P[1]) * 0.5f;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_9 = ___0_tangent;
		float L_10 = V_1;
		float L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_12 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_12);
		int32_t L_13 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((6.0f), L_10)), ((float)il2cpp_codegen_multiply((6.0f), L_11)))), L_14, NULL);
		float L_16 = V_1;
		float L_17 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_18 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_18);
		int32_t L_19 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_21 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_21);
		int32_t L_22 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_20, L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((3.0f), L_16)), ((float)il2cpp_codegen_multiply((4.0f), L_17)))), (1.0f))), L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_25, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_15, L_26, NULL);
		float L_28 = V_1;
		float L_29 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_30 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_30);
		int32_t L_31 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply((-6.0f), L_28)), ((float)il2cpp_codegen_multiply((6.0f), L_29)))), L_32, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_27, L_33, NULL);
		float L_35 = V_1;
		float L_36 = V_0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_37);
		int32_t L_38 = 3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = (L_37)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_40 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_40);
		int32_t L_41 = 1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = (L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_39, L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply((3.0f), L_35)), ((float)il2cpp_codegen_multiply((2.0f), L_36)))), L_43, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_44, (0.5f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_34, L_45, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_9 = L_46;
	}

IL_0109:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::ComputeCatPoints(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_ComputeCatPoints_m12D8B1E35A88AF62CA977D96DCD6675D88795795 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, int32_t ___0_i, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	{
		// int p1 = i - 1;
		int32_t L_0 = ___0_i;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		// int p2 = i;
		int32_t L_1 = ___0_i;
		V_1 = L_1;
		// int p3 = i + 1;
		int32_t L_2 = ___0_i;
		V_2 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// int p4 = i + 2;
		int32_t L_3 = ___0_i;
		V_3 = ((int32_t)il2cpp_codegen_add(L_3, 2));
		// if (closed)
		bool L_4 = __this->___closed_15;
		V_4 = L_4;
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_010f;
		}
	}
	{
		// if(p1 < 0)
		int32_t L_6 = V_0;
		V_5 = (bool)((((int32_t)L_6) < ((int32_t)0))? 1 : 0);
		bool L_7 = V_5;
		if (!L_7)
		{
			goto IL_0036;
		}
	}
	{
		// p1 += points.Length;
		int32_t L_8 = V_0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_9 = __this->___points_0;
		NullCheck(L_9);
		V_0 = ((int32_t)il2cpp_codegen_add(L_8, ((int32_t)(((RuntimeArray*)L_9)->max_length))));
	}

IL_0036:
	{
		// if (p2 >= points.Length)
		int32_t L_10 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_11 = __this->___points_0;
		NullCheck(L_11);
		V_6 = (bool)((((int32_t)((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_6;
		if (!L_12)
		{
			goto IL_0057;
		}
	}
	{
		// p2 -= points.Length;
		int32_t L_13 = V_1;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_14 = __this->___points_0;
		NullCheck(L_14);
		V_1 = ((int32_t)il2cpp_codegen_subtract(L_13, ((int32_t)(((RuntimeArray*)L_14)->max_length))));
	}

IL_0057:
	{
		// if (p3 >= points.Length)
		int32_t L_15 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_16 = __this->___points_0;
		NullCheck(L_16);
		V_7 = (bool)((((int32_t)((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_7;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		// p3 -= points.Length;
		int32_t L_18 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_19 = __this->___points_0;
		NullCheck(L_19);
		V_2 = ((int32_t)il2cpp_codegen_subtract(L_18, ((int32_t)(((RuntimeArray*)L_19)->max_length))));
	}

IL_0078:
	{
		// if(p4 >= points.Length)
		int32_t L_20 = V_3;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_21 = __this->___points_0;
		NullCheck(L_21);
		V_8 = (bool)((((int32_t)((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0099;
		}
	}
	{
		// p4 -= points.Length;
		int32_t L_23 = V_3;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_24 = __this->___points_0;
		NullCheck(L_24);
		V_3 = ((int32_t)il2cpp_codegen_subtract(L_23, ((int32_t)(((RuntimeArray*)L_24)->max_length))));
	}

IL_0099:
	{
		// P[0] = points[p1].position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_25 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_26 = __this->___points_0;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_27)))->___position_2;
		NullCheck(L_25);
		(L_25)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_28);
		// P[1] = points[p2].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_29 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_30 = __this->___points_0;
		int32_t L_31 = V_1;
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ((L_30)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_31)))->___position_2;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_32);
		// P[2] = points[p3].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_33 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_34 = __this->___points_0;
		int32_t L_35 = V_2;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)))->___position_2;
		NullCheck(L_33);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_36);
		// P[3] = points[p4].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_37 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_38 = __this->___points_0;
		int32_t L_39 = V_3;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___position_2;
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_40);
		goto IL_0305;
	}

IL_010f:
	{
		// if(p1 < 0)
		int32_t L_41 = V_0;
		V_9 = (bool)((((int32_t)L_41) < ((int32_t)0))? 1 : 0);
		bool L_42 = V_9;
		if (!L_42)
		{
			goto IL_0176;
		}
	}
	{
		// P[0] = points[0].position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_43 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_44 = __this->___points_0;
		NullCheck(L_44);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45 = ((L_44)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_2;
		NullCheck(L_43);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_45);
		// P[0] += (P[0] - points[1].position);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_46 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_46);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_47 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_47);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_49 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_49);
		int32_t L_50 = 0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_52 = __this->___points_0;
		NullCheck(L_52);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = ((L_52)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_54;
		L_54 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_51, L_53, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_55;
		L_55 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_48, L_54, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_47 = L_55;
		goto IL_0194;
	}

IL_0176:
	{
		// P[0] = points[p1].position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_56 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_57 = __this->___points_0;
		int32_t L_58 = V_0;
		NullCheck(L_57);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59 = ((L_57)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_58)))->___position_2;
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_59);
	}

IL_0194:
	{
		// P[1] = points[p2].position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_60 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_61 = __this->___points_0;
		int32_t L_62 = V_1;
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63 = ((L_61)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_62)))->___position_2;
		NullCheck(L_60);
		(L_60)->SetAt(static_cast<il2cpp_array_size_t>(1), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_63);
		// if (p3 >= points.Length)
		int32_t L_64 = V_2;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_65 = __this->___points_0;
		NullCheck(L_65);
		V_10 = (bool)((((int32_t)((((int32_t)L_64) < ((int32_t)((int32_t)(((RuntimeArray*)L_65)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_66 = V_10;
		if (!L_66)
		{
			goto IL_0272;
		}
	}
	{
		// P[2] = points[points.Length - 1].position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_67 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_68 = __this->___points_0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_69 = __this->___points_0;
		NullCheck(L_69);
		NullCheck(L_68);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70 = ((L_68)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_69)->max_length)), 1)))))->___position_2;
		NullCheck(L_67);
		(L_67)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_70);
		// Vector3 pos = P[2];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_71 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_71);
		int32_t L_72 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		V_11 = L_73;
		// P[2] += P[2] - points[points.Length - 2].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_74 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_74);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_75 = ((L_74)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_76 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_75);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_77 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_77);
		int32_t L_78 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79 = (L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_80 = __this->___points_0;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_81 = __this->___points_0;
		NullCheck(L_81);
		NullCheck(L_80);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = ((L_80)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_81)->max_length)), 2)))))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_83;
		L_83 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_79, L_82, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_84;
		L_84 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_76, L_83, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)L_75 = L_84;
		// P[3] = P[2] + (P[2] - pos);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_85 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_86 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_86);
		int32_t L_87 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_88 = (L_86)->GetAt(static_cast<il2cpp_array_size_t>(L_87));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_89 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_89);
		int32_t L_90 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_92 = V_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93;
		L_93 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_91, L_92, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_94;
		L_94 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_88, L_93, NULL);
		NullCheck(L_85);
		(L_85)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_94);
		goto IL_0304;
	}

IL_0272:
	{
		// P[2] = points[p3].position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_95 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_96 = __this->___points_0;
		int32_t L_97 = V_2;
		NullCheck(L_96);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_98 = ((L_96)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_97)))->___position_2;
		NullCheck(L_95);
		(L_95)->SetAt(static_cast<il2cpp_array_size_t>(2), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_98);
		// if(p4 >= points.Length)
		int32_t L_99 = V_3;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_100 = __this->___points_0;
		NullCheck(L_100);
		V_12 = (bool)((((int32_t)((((int32_t)L_99) < ((int32_t)((int32_t)(((RuntimeArray*)L_100)->max_length))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_101 = V_12;
		if (!L_101)
		{
			goto IL_02e5;
		}
	}
	{
		// P[3] = P[2] + (P[2] - points[p3 - 1].position);
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_102 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_103 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_103);
		int32_t L_104 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_105 = (L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_104));
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_106 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		NullCheck(L_106);
		int32_t L_107 = 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = (L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_109 = __this->___points_0;
		int32_t L_110 = V_2;
		NullCheck(L_109);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_111 = ((L_109)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_subtract(L_110, 1)))))->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_112;
		L_112 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_108, L_111, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_113;
		L_113 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_105, L_112, NULL);
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_113);
		goto IL_0303;
	}

IL_02e5:
	{
		// P[3] = points[p4].position;
		il2cpp_codegen_runtime_class_init_inline(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_114 = ((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6;
		SplinePointU5BU5D_t12CABDB19A63EBEEF143CE26C78D27708EC0CBF3* L_115 = __this->___points_0;
		int32_t L_116 = V_3;
		NullCheck(L_115);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_117 = ((L_115)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_116)))->___position_2;
		NullCheck(L_114);
		(L_114)->SetAt(static_cast<il2cpp_array_size_t>(3), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_117);
	}

IL_0303:
	{
	}

IL_0304:
	{
	}

IL_0305:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::FormatFromTo(System.Double&,System.Double&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline_FormatFromTo_m22E4F3E55C75E1ADE65714E8C8B27E3C535F9B04 (double* ___0_from, double* ___1_to, bool ___2_preventInvert, const RuntimeMethod* method) 
{
	bool V_0 = false;
	double V_1 = 0.0;
	int32_t G_B3_0 = 0;
	{
		// from = DMath.Clamp01(from);
		double* L_0 = ___0_from;
		double* L_1 = ___0_from;
		double L_2 = *((double*)L_1);
		double L_3;
		L_3 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_2, NULL);
		*((double*)L_0) = (double)L_3;
		// to = DMath.Clamp01(to);
		double* L_4 = ___1_to;
		double* L_5 = ___1_to;
		double L_6 = *((double*)L_5);
		double L_7;
		L_7 = DMath_Clamp01_mB366A5E5D6963102BBC75A3CE5FA29E5B50F46A2(L_6, NULL);
		*((double*)L_4) = (double)L_7;
		// if (preventInvert && from > to)
		bool L_8 = ___2_preventInvert;
		if (!L_8)
		{
			goto IL_001e;
		}
	}
	{
		double* L_9 = ___0_from;
		double L_10 = *((double*)L_9);
		double* L_11 = ___1_to;
		double L_12 = *((double*)L_11);
		G_B3_0 = ((((double)L_10) > ((double)L_12))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 0;
	}

IL_001f:
	{
		V_0 = (bool)G_B3_0;
		bool L_13 = V_0;
		if (!L_13)
		{
			goto IL_0031;
		}
	}
	{
		// double tmp = from;
		double* L_14 = ___0_from;
		double L_15 = *((double*)L_14);
		V_1 = L_15;
		// from = to;
		double* L_16 = ___0_from;
		double* L_17 = ___1_to;
		double L_18 = *((double*)L_17);
		*((double*)L_16) = (double)L_18;
		// to = tmp;
		double* L_19 = ___1_to;
		double L_20 = V_1;
		*((double*)L_19) = (double)L_20;
		goto IL_004c;
	}

IL_0031:
	{
		// } else  to = DMath.Clamp(to, 0.0, 1.0);
		double* L_21 = ___1_to;
		double* L_22 = ___1_to;
		double L_23 = *((double*)L_22);
		double L_24;
		L_24 = DMath_Clamp_m716297EE37BD982943E1F08F0F92CDD2D642640D(L_23, (0.0), (1.0), NULL);
		*((double*)L_21) = (double)L_24;
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.Spline::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Spline__cctor_m6AA9E38B27D6AF1FF2967AF3068F5DC56ECD44BE (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static Vector3[] P = new Vector3[4];
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_0 = (Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C*)SZArrayNew(Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C_il2cpp_TypeInfo_var, (uint32_t)4);
		((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_StaticFields*)il2cpp_codegen_static_fields_for(Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1_il2cpp_TypeInfo_var))->___P_6), (void*)L_0);
		return;
	}
}
// System.Single Dreamteck.Splines.Spline::<CalculateCatmullRomComponents>g__GetInterval|65_0(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Spline_U3CCalculateCatmullRomComponentsU3Eg__GetIntervalU7C65_0_m34BC5C9BF4891FFB4EE73BA8315A2C970C2FF024 (Spline_t12C5A067E46309006E34F9A5B0AD58FCD51BEAD1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		// return Mathf.Pow((a - b).sqrMagnitude, _knotParametrization * 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_1, NULL);
		V_0 = L_2;
		float L_3;
		L_3 = Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline((&V_0), NULL);
		float L_4 = __this->____knotParametrization_16;
		float L_5;
		L_5 = powf(L_3, ((float)il2cpp_codegen_multiply(L_4, (0.5f))));
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		float L_6 = V_1;
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Dreamteck.Splines.SplinePoint
IL2CPP_EXTERN_C void SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshal_pinvoke(const SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084& unmarshaled, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_pinvoke& marshaled)
{
	marshaled.___isDirty_0 = static_cast<int32_t>(unmarshaled.___isDirty_0);
	marshaled.____type_1 = unmarshaled.____type_1;
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___color_3 = unmarshaled.___color_3;
	marshaled.___normal_4 = unmarshaled.___normal_4;
	marshaled.___size_5 = unmarshaled.___size_5;
	marshaled.___tangent_6 = unmarshaled.___tangent_6;
	marshaled.___tangent2_7 = unmarshaled.___tangent2_7;
}
IL2CPP_EXTERN_C void SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshal_pinvoke_back(const SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_pinvoke& marshaled, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084& unmarshaled)
{
	bool unmarshaledisDirty_temp_0 = false;
	unmarshaledisDirty_temp_0 = static_cast<bool>(marshaled.___isDirty_0);
	unmarshaled.___isDirty_0 = unmarshaledisDirty_temp_0;
	int32_t unmarshaled_type_temp_1 = 0;
	unmarshaled_type_temp_1 = marshaled.____type_1;
	unmarshaled.____type_1 = unmarshaled_type_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledcolor_temp_3;
	memset((&unmarshaledcolor_temp_3), 0, sizeof(unmarshaledcolor_temp_3));
	unmarshaledcolor_temp_3 = marshaled.___color_3;
	unmarshaled.___color_3 = unmarshaledcolor_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshalednormal_temp_4;
	memset((&unmarshalednormal_temp_4), 0, sizeof(unmarshalednormal_temp_4));
	unmarshalednormal_temp_4 = marshaled.___normal_4;
	unmarshaled.___normal_4 = unmarshalednormal_temp_4;
	float unmarshaledsize_temp_5 = 0.0f;
	unmarshaledsize_temp_5 = marshaled.___size_5;
	unmarshaled.___size_5 = unmarshaledsize_temp_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtangent_temp_6;
	memset((&unmarshaledtangent_temp_6), 0, sizeof(unmarshaledtangent_temp_6));
	unmarshaledtangent_temp_6 = marshaled.___tangent_6;
	unmarshaled.___tangent_6 = unmarshaledtangent_temp_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtangent2_temp_7;
	memset((&unmarshaledtangent2_temp_7), 0, sizeof(unmarshaledtangent2_temp_7));
	unmarshaledtangent2_temp_7 = marshaled.___tangent2_7;
	unmarshaled.___tangent2_7 = unmarshaledtangent2_temp_7;
}
// Conversion method for clean up from marshalling of: Dreamteck.Splines.SplinePoint
IL2CPP_EXTERN_C void SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshal_pinvoke_cleanup(SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: Dreamteck.Splines.SplinePoint
IL2CPP_EXTERN_C void SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshal_com(const SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084& unmarshaled, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_com& marshaled)
{
	marshaled.___isDirty_0 = static_cast<int32_t>(unmarshaled.___isDirty_0);
	marshaled.____type_1 = unmarshaled.____type_1;
	marshaled.___position_2 = unmarshaled.___position_2;
	marshaled.___color_3 = unmarshaled.___color_3;
	marshaled.___normal_4 = unmarshaled.___normal_4;
	marshaled.___size_5 = unmarshaled.___size_5;
	marshaled.___tangent_6 = unmarshaled.___tangent_6;
	marshaled.___tangent2_7 = unmarshaled.___tangent2_7;
}
IL2CPP_EXTERN_C void SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshal_com_back(const SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_com& marshaled, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084& unmarshaled)
{
	bool unmarshaledisDirty_temp_0 = false;
	unmarshaledisDirty_temp_0 = static_cast<bool>(marshaled.___isDirty_0);
	unmarshaled.___isDirty_0 = unmarshaledisDirty_temp_0;
	int32_t unmarshaled_type_temp_1 = 0;
	unmarshaled_type_temp_1 = marshaled.____type_1;
	unmarshaled.____type_1 = unmarshaled_type_temp_1;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledposition_temp_2;
	memset((&unmarshaledposition_temp_2), 0, sizeof(unmarshaledposition_temp_2));
	unmarshaledposition_temp_2 = marshaled.___position_2;
	unmarshaled.___position_2 = unmarshaledposition_temp_2;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F unmarshaledcolor_temp_3;
	memset((&unmarshaledcolor_temp_3), 0, sizeof(unmarshaledcolor_temp_3));
	unmarshaledcolor_temp_3 = marshaled.___color_3;
	unmarshaled.___color_3 = unmarshaledcolor_temp_3;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshalednormal_temp_4;
	memset((&unmarshalednormal_temp_4), 0, sizeof(unmarshalednormal_temp_4));
	unmarshalednormal_temp_4 = marshaled.___normal_4;
	unmarshaled.___normal_4 = unmarshalednormal_temp_4;
	float unmarshaledsize_temp_5 = 0.0f;
	unmarshaledsize_temp_5 = marshaled.___size_5;
	unmarshaled.___size_5 = unmarshaledsize_temp_5;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtangent_temp_6;
	memset((&unmarshaledtangent_temp_6), 0, sizeof(unmarshaledtangent_temp_6));
	unmarshaledtangent_temp_6 = marshaled.___tangent_6;
	unmarshaled.___tangent_6 = unmarshaledtangent_temp_6;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 unmarshaledtangent2_temp_7;
	memset((&unmarshaledtangent2_temp_7), 0, sizeof(unmarshaledtangent2_temp_7));
	unmarshaledtangent2_temp_7 = marshaled.___tangent2_7;
	unmarshaled.___tangent2_7 = unmarshaledtangent2_temp_7;
}
// Conversion method for clean up from marshalling of: Dreamteck.Splines.SplinePoint
IL2CPP_EXTERN_C void SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshal_com_cleanup(SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_marshaled_com& marshaled)
{
}
// Dreamteck.Splines.SplinePoint/Type Dreamteck.Splines.SplinePoint::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return _type; }
		int32_t L_0 = __this->____type_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _type; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72(_thisAdjusted, method);
	return _returnValue;
}
// System.Void Dreamteck.Splines.SplinePoint::set_type(Dreamteck.Splines.SplinePoint/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// isDirty = _type != value;
		int32_t L_0 = __this->____type_1;
		int32_t L_1 = ___0_value;
		__this->___isDirty_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// _type = value;
		int32_t L_2 = ___0_value;
		__this->____type_1 = L_2;
		// if (value == Type.SmoothMirrored)
		int32_t L_3 = ___0_value;
		V_0 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		// SmoothMirrorTangent2();
		SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(__this, NULL);
	}

IL_002b:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8_AdjustorThunk (RuntimeObject* __this, int32_t ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8(_thisAdjusted, ___0_value, method);
}
// Dreamteck.Splines.SplinePoint Dreamteck.Splines.SplinePoint::Lerp(Dreamteck.Splines.SplinePoint,Dreamteck.Splines.SplinePoint,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 SplinePoint_Lerp_m8359E5303F296D5EFFD1E4F0FE75C7063237D43F (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_a, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 V_3;
	memset((&V_3), 0, sizeof(V_3));
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	{
		// SplinePoint result = a;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_0 = ___0_a;
		V_0 = L_0;
		// if (a.type == Type.Broken || b.type == Type.Broken) result.type = Type.Broken;
		int32_t L_1;
		L_1 = SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72((&___0_a), NULL);
		if ((((int32_t)L_1) == ((int32_t)1)))
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2;
		L_2 = SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72((&___1_b), NULL);
		G_B3_0 = ((((int32_t)L_2) == ((int32_t)1))? 1 : 0);
		goto IL_001a;
	}

IL_0019:
	{
		G_B3_0 = 1;
	}

IL_001a:
	{
		V_1 = (bool)G_B3_0;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		// if (a.type == Type.Broken || b.type == Type.Broken) result.type = Type.Broken;
		SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8((&V_0), 1, NULL);
		goto IL_0058;
	}

IL_0029:
	{
		// else if (a.type == Type.SmoothFree || b.type == Type.SmoothFree) result.type = Type.SmoothFree;
		int32_t L_4;
		L_4 = SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72((&___0_a), NULL);
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_003f;
		}
	}
	{
		int32_t L_5;
		L_5 = SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72((&___1_b), NULL);
		G_B8_0 = ((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		goto IL_0040;
	}

IL_003f:
	{
		G_B8_0 = 1;
	}

IL_0040:
	{
		V_2 = (bool)G_B8_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		// else if (a.type == Type.SmoothFree || b.type == Type.SmoothFree) result.type = Type.SmoothFree;
		SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8((&V_0), 2, NULL);
		goto IL_0058;
	}

IL_004f:
	{
		// else result.type = Type.SmoothMirrored;
		SplinePoint_set_type_mD3549F7EA7B10F14F1EAF44A29F1296FA4D7FCF8((&V_0), 0, NULL);
	}

IL_0058:
	{
		// result.position = Vector3.Lerp(a.position, b.position, t);
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_7 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___position_2;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_9 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9.___position_2;
		float L_11 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline(L_8, L_10, L_11, NULL);
		(&V_0)->___position_2 = L_12;
		// GetInterpolatedTangents(a, b, t, ref result);
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_13 = ___0_a;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_14 = ___1_b;
		float L_15 = ___2_t;
		SplinePoint_GetInterpolatedTangents_mA87C7A07B33FEE476FEF46BF194BCB7BAA443475(L_13, L_14, L_15, (&V_0), NULL);
		// result.color = Color.Lerp(a.color, b.color, t);
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_16 = ___0_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = L_16.___color_3;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_18 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19 = L_18.___color_3;
		float L_20 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		L_21 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_17, L_19, L_20, NULL);
		(&V_0)->___color_3 = L_21;
		// result.size = Mathf.Lerp(a.size, b.size, t);
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_22 = ___0_a;
		float L_23 = L_22.___size_5;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_24 = ___1_b;
		float L_25 = L_24.___size_5;
		float L_26 = ___2_t;
		float L_27;
		L_27 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_23, L_25, L_26, NULL);
		(&V_0)->___size_5 = L_27;
		// result.normal = Vector3.Slerp(a.normal, b.normal, t);
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_28 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = L_28.___normal_4;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_30 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = L_30.___normal_4;
		float L_32 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_29, L_31, L_32, NULL);
		(&V_0)->___normal_4 = L_33;
		// return result;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_34 = V_0;
		V_3 = L_34;
		goto IL_00cb;
	}

IL_00cb:
	{
		// }
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_35 = V_3;
		return L_35;
	}
}
// System.Void Dreamteck.Splines.SplinePoint::GetInterpolatedTangents(Dreamteck.Splines.SplinePoint,Dreamteck.Splines.SplinePoint,System.Single,Dreamteck.Splines.SplinePoint&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_GetInterpolatedTangents_mA87C7A07B33FEE476FEF46BF194BCB7BAA443475 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_a, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___1_b, float ___2_t, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* ___3_target, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// Vector3 P0_1 = (1f - t) * a.position + t * a.tangent2;
		float L_0 = ___2_t;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_1 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1.___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_0)), L_2, NULL);
		float L_4 = ___2_t;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_5 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = L_5.___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_4, L_6, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_3, L_7, NULL);
		V_0 = L_8;
		// Vector3 P1_2 = (1f - t) * a.tangent2 + t * b.tangent;
		float L_9 = ___2_t;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_10 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10.___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_9)), L_11, NULL);
		float L_13 = ___2_t;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_14 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = L_14.___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_13, L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_16, NULL);
		V_1 = L_17;
		// Vector3 P2_3 = (1f - t) * b.tangent + t * b.position;
		float L_18 = ___2_t;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_19 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = L_19.___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_18)), L_20, NULL);
		float L_22 = ___2_t;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_23 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = L_23.___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_22, L_24, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_26;
		L_26 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_25, NULL);
		V_2 = L_26;
		// Vector3 P01_12 = (1 - t) * P0_1 + t * P1_2;
		float L_27 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		L_29 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_27)), L_28, NULL);
		float L_30 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_30, L_31, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_29, L_32, NULL);
		V_3 = L_33;
		// Vector3 P12_23 = (1 - t) * P1_2 + t * P2_3;
		float L_34 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(((float)il2cpp_codegen_subtract((1.0f), L_34)), L_35, NULL);
		float L_37 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline(L_37, L_38, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40;
		L_40 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_36, L_39, NULL);
		V_4 = L_40;
		// target.tangent = P01_12;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* L_41 = ___3_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = V_3;
		L_41->___tangent_6 = L_42;
		// target.tangent2 = P12_23;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* L_43 = ___3_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_4;
		L_43->___tangent2_7 = L_44;
		// }
		return;
	}
}
// System.Boolean Dreamteck.Splines.SplinePoint::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplinePoint_Equals_m3A83A0EF8D868E3B33B9EE7330D01694E243F924 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if(obj is SplinePoint)
		RuntimeObject* L_0 = ___0_obj;
		V_0 = (bool)((!(((RuntimeObject*)(RuntimeObject*)((RuntimeObject*)IsInstSealed((RuntimeObject*)L_0, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// return EqualsFast((SplinePoint)obj);
		RuntimeObject* L_2 = ___0_obj;
		bool L_3;
		L_3 = SplinePoint_EqualsFast_mD7293575DB074136AB9CEA5024129EEF2B36DB86(__this, ((*(SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*)((SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*)(SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*)UnBox(L_2, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084_il2cpp_TypeInfo_var)))), NULL);
		V_1 = L_3;
		goto IL_0022;
	}

IL_001e:
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		bool L_4 = V_1;
		return L_4;
	}
}
IL2CPP_EXTERN_C  bool SplinePoint_Equals_m3A83A0EF8D868E3B33B9EE7330D01694E243F924_AdjustorThunk (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	bool _returnValue;
	_returnValue = SplinePoint_Equals_m3A83A0EF8D868E3B33B9EE7330D01694E243F924(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean Dreamteck.Splines.SplinePoint::EqualsFast(Dreamteck.Splines.SplinePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplinePoint_EqualsFast_mD7293575DB074136AB9CEA5024129EEF2B36DB86 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_obj, const RuntimeMethod* method) 
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// SplinePoint other = (SplinePoint)obj;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_0 = ___0_obj;
		V_0 = L_0;
		// if (position != other.position) return false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___position_2;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___position_2;
		bool L_4;
		L_4 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_1, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_001f;
		}
	}
	{
		// if (position != other.position) return false;
		V_2 = (bool)0;
		goto IL_00c6;
	}

IL_001f:
	{
		// if (tangent != other.tangent) return false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___tangent_6;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___tangent_6;
		bool L_9;
		L_9 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_6, L_8, NULL);
		V_3 = L_9;
		bool L_10 = V_3;
		if (!L_10)
		{
			goto IL_003b;
		}
	}
	{
		// if (tangent != other.tangent) return false;
		V_2 = (bool)0;
		goto IL_00c6;
	}

IL_003b:
	{
		// if (tangent2 != other.tangent2) return false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___tangent2_7;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_12 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = L_12.___tangent2_7;
		bool L_14;
		L_14 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_11, L_13, NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0056;
		}
	}
	{
		// if (tangent2 != other.tangent2) return false;
		V_2 = (bool)0;
		goto IL_00c6;
	}

IL_0056:
	{
		// if (normal != other.normal) return false;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = __this->___normal_4;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_17 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17.___normal_4;
		bool L_19;
		L_19 = Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline(L_16, L_18, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_0071;
		}
	}
	{
		// if (normal != other.normal) return false;
		V_2 = (bool)0;
		goto IL_00c6;
	}

IL_0071:
	{
		// if (_type != other._type) return false;
		int32_t L_21 = __this->____type_1;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_22 = V_0;
		int32_t L_23 = L_22.____type_1;
		V_6 = (bool)((((int32_t)((((int32_t)L_21) == ((int32_t)L_23))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_008c;
		}
	}
	{
		// if (_type != other._type) return false;
		V_2 = (bool)0;
		goto IL_00c6;
	}

IL_008c:
	{
		// if (size != other.size) return false;
		float L_25 = __this->___size_5;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_26 = V_0;
		float L_27 = L_26.___size_5;
		V_7 = (bool)((((int32_t)((((float)L_25) == ((float)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_00a7;
		}
	}
	{
		// if (size != other.size) return false;
		V_2 = (bool)0;
		goto IL_00c6;
	}

IL_00a7:
	{
		// if (color != other.color) return false;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29 = __this->___color_3;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_30 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = L_30.___color_3;
		bool L_32;
		L_32 = Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline(L_29, L_31, NULL);
		V_8 = L_32;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_00c2;
		}
	}
	{
		// if (color != other.color) return false;
		V_2 = (bool)0;
		goto IL_00c6;
	}

IL_00c2:
	{
		// return true;
		V_2 = (bool)1;
		goto IL_00c6;
	}

IL_00c6:
	{
		// }
		bool L_34 = V_2;
		return L_34;
	}
}
IL2CPP_EXTERN_C  bool SplinePoint_EqualsFast_mD7293575DB074136AB9CEA5024129EEF2B36DB86_AdjustorThunk (RuntimeObject* __this, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_obj, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	bool _returnValue;
	_returnValue = SplinePoint_EqualsFast_mD7293575DB074136AB9CEA5024129EEF2B36DB86(_thisAdjusted, ___0_obj, method);
	return _returnValue;
}
// System.Boolean Dreamteck.Splines.SplinePoint::op_Equality(Dreamteck.Splines.SplinePoint,Dreamteck.Splines.SplinePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplinePoint_op_Equality_m670CE219F5C6D6C8EEE20F6086928F324B7ED4EF (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_p1, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___1_p2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return p1.EqualsFast(p2);
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_0 = ___1_p2;
		bool L_1;
		L_1 = SplinePoint_EqualsFast_mD7293575DB074136AB9CEA5024129EEF2B36DB86((&___0_p1), L_0, NULL);
		V_0 = L_1;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean Dreamteck.Splines.SplinePoint::op_Inequality(Dreamteck.Splines.SplinePoint,Dreamteck.Splines.SplinePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SplinePoint_op_Inequality_m86CD44D728679C2B27C3BB7E73B7AACABF2D6D9A (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_p1, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___1_p2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !p1.EqualsFast(p2);
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_0 = ___1_p2;
		bool L_1;
		L_1 = SplinePoint_EqualsFast_mD7293575DB074136AB9CEA5024129EEF2B36DB86((&___0_p1), L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		goto IL_000f;
	}

IL_000f:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void Dreamteck.Splines.SplinePoint::SetPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPosition_m29B489327E0326CB3C3DA4D8A5AADA1043BC5A58 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	{
		// tangent -= position - pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_0, L_3, NULL);
		__this->___tangent_6 = L_4;
		// tangent2 -= position - pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_6, L_7, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_8, NULL);
		__this->___tangent2_7 = L_9;
		// position = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_pos;
		__this->___position_2 = L_10;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetPosition_m29B489327E0326CB3C3DA4D8A5AADA1043BC5A58_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetPosition_m29B489327E0326CB3C3DA4D8A5AADA1043BC5A58(_thisAdjusted, ___0_pos, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangentPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentPosition_m7DE86139E3FA716AF8A74B99096AACB96BB6C087 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// tangent = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		__this->___tangent_6 = L_0;
		// switch (_type)
		int32_t L_1 = __this->____type_1;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002e;
	}

IL_001c:
	{
		// case Type.SmoothMirrored: SmoothMirrorTangent2(); break;
		SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(__this, NULL);
		// case Type.SmoothMirrored: SmoothMirrorTangent2(); break;
		goto IL_002e;
	}

IL_0025:
	{
		// case Type.SmoothFree: SmoothFreeTangent2(); break;
		SplinePoint_SmoothFreeTangent2_m500206A7602BF6DBBEBB22EAF25DBCAED1F20756(__this, NULL);
		// case Type.SmoothFree: SmoothFreeTangent2(); break;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangentPosition_m7DE86139E3FA716AF8A74B99096AACB96BB6C087_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangentPosition_m7DE86139E3FA716AF8A74B99096AACB96BB6C087(_thisAdjusted, ___0_pos, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2Position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2Position_mA1986532B0F63A77D27041E62DA5B5CCD876CC36 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// tangent2 = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		__this->___tangent2_7 = L_0;
		// switch (_type)
		int32_t L_1 = __this->____type_1;
		V_1 = L_1;
		int32_t L_2 = V_1;
		V_0 = L_2;
		int32_t L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		goto IL_0016;
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)2)))
		{
			goto IL_0025;
		}
	}
	{
		goto IL_002e;
	}

IL_001c:
	{
		// case Type.SmoothMirrored: SmoothMirrorTangent(); break;
		SplinePoint_SmoothMirrorTangent_m2372562E52050B023A2C8D4B89DEB4602F88FF77(__this, NULL);
		// case Type.SmoothMirrored: SmoothMirrorTangent(); break;
		goto IL_002e;
	}

IL_0025:
	{
		// case Type.SmoothFree: SmoothFreeTangent(); break;
		SplinePoint_SmoothFreeTangent_mD6607535A6EB75D0453C795ACEE3923BEE46BD2D(__this, NULL);
		// case Type.SmoothFree: SmoothFreeTangent(); break;
		goto IL_002e;
	}

IL_002e:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangent2Position_mA1986532B0F63A77D27041E62DA5B5CCD876CC36_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangent2Position_mA1986532B0F63A77D27041E62DA5B5CCD876CC36(_thisAdjusted, ___0_pos, method);
}
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_m8BAA2BC4E1F3AFC7C9840294552E06C09960A4D7 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method) 
{
	{
		// position = p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p;
		__this->___position_2 = L_0;
		// tangent = p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___0_p;
		__this->___tangent_6 = L_1;
		// tangent2 = p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_p;
		__this->___tangent2_7 = L_2;
		// color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_3 = L_3;
		// normal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___normal_4 = L_4;
		// size = 1f;
		__this->___size_5 = (1.0f);
		// _type = Type.SmoothMirrored;
		__this->____type_1 = 0;
		// isDirty = false;
		__this->___isDirty_0 = (bool)0;
		// SmoothMirrorTangent2();
		SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint__ctor_m8BAA2BC4E1F3AFC7C9840294552E06C09960A4D7_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint__ctor_m8BAA2BC4E1F3AFC7C9840294552E06C09960A4D7(_thisAdjusted, ___0_p, method);
}
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_m5A5E827117EC342D4981BE939B76B5A06DD64B59 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_t, const RuntimeMethod* method) 
{
	{
		// position = p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_p;
		__this->___position_2 = L_0;
		// tangent = t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_t;
		__this->___tangent_6 = L_1;
		// tangent2 = p + (p - t);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_p;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		__this->___tangent2_7 = L_6;
		// color = Color.white;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline(NULL);
		__this->___color_3 = L_7;
		// normal = Vector3.up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___normal_4 = L_8;
		// size = 1f;
		__this->___size_5 = (1.0f);
		// _type = Type.SmoothMirrored;
		__this->____type_1 = 0;
		// isDirty = false;
		__this->___isDirty_0 = (bool)0;
		// SmoothMirrorTangent2();
		SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint__ctor_m5A5E827117EC342D4981BE939B76B5A06DD64B59_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_p, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_t, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint__ctor_m5A5E827117EC342D4981BE939B76B5A06DD64B59(_thisAdjusted, ___0_p, ___1_t, method);
}
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_mE727CE7ED797F3A0B158C37EBFBE4922E22AFA0B (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tan, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_nor, float ___3_s, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_col, const RuntimeMethod* method) 
{
	{
		// position = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		__this->___position_2 = L_0;
		// tangent = tan;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_tan;
		__this->___tangent_6 = L_1;
		// tangent2 = pos + (pos - tan);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_tan;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_2, L_5, NULL);
		__this->___tangent2_7 = L_6;
		// normal = nor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___2_nor;
		__this->___normal_4 = L_7;
		// size = s;
		float L_8 = ___3_s;
		__this->___size_5 = L_8;
		// color = col;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___4_col;
		__this->___color_3 = L_9;
		// _type = Type.SmoothMirrored;
		__this->____type_1 = 0;
		// isDirty = false;
		__this->___isDirty_0 = (bool)0;
		// SmoothMirrorTangent2();
		SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(__this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint__ctor_mE727CE7ED797F3A0B158C37EBFBE4922E22AFA0B_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tan, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_nor, float ___3_s, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___4_col, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint__ctor_mE727CE7ED797F3A0B158C37EBFBE4922E22AFA0B(_thisAdjusted, ___0_pos, ___1_tan, ___2_nor, ___3_s, ___4_col, method);
}
// System.Void Dreamteck.Splines.SplinePoint::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_mE8C889C555467FF4AC41EF4F87D3777795714A18 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tan, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_tan2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_nor, float ___4_s, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_col, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// position = pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_pos;
		__this->___position_2 = L_0;
		// tangent = tan;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_tan;
		__this->___tangent_6 = L_1;
		// tangent2 = tan2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_tan2;
		__this->___tangent2_7 = L_2;
		// normal = nor;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3_nor;
		__this->___normal_4 = L_3;
		// size = s;
		float L_4 = ___4_s;
		__this->___size_5 = L_4;
		// color = col;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___5_col;
		__this->___color_3 = L_5;
		// _type = Type.Broken;
		__this->____type_1 = 1;
		// isDirty = false;
		__this->___isDirty_0 = (bool)0;
		// switch (_type)
		int32_t L_6 = __this->____type_1;
		V_1 = L_6;
		int32_t L_7 = V_1;
		V_0 = L_7;
		int32_t L_8 = V_0;
		if (!L_8)
		{
			goto IL_0050;
		}
	}
	{
		goto IL_004a;
	}

IL_004a:
	{
		int32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)2)))
		{
			goto IL_0059;
		}
	}
	{
		goto IL_0062;
	}

IL_0050:
	{
		// case Type.SmoothMirrored: SmoothMirrorTangent2(); break;
		SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(__this, NULL);
		// case Type.SmoothMirrored: SmoothMirrorTangent2(); break;
		goto IL_0062;
	}

IL_0059:
	{
		// case Type.SmoothFree: SmoothFreeTangent2(); break;
		SplinePoint_SmoothFreeTangent2_m500206A7602BF6DBBEBB22EAF25DBCAED1F20756(__this, NULL);
		// case Type.SmoothFree: SmoothFreeTangent2(); break;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint__ctor_mE8C889C555467FF4AC41EF4F87D3777795714A18_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_pos, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_tan, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_tan2, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_nor, float ___4_s, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___5_col, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint__ctor_mE8C889C555467FF4AC41EF4F87D3777795714A18(_thisAdjusted, ___0_pos, ___1_tan, ___2_tan2, ___3_nor, ___4_s, ___5_col, method);
}
// System.Void Dreamteck.Splines.SplinePoint::.ctor(Dreamteck.Splines.SplinePoint)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint__ctor_m72F42037F5A4676840EBA292EB7AF5E8296F5B09 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_source, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// position = source.position;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_0 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___position_2;
		__this->___position_2 = L_1;
		// tangent = source.tangent;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_2 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2.___tangent_6;
		__this->___tangent_6 = L_3;
		// tangent2 = source.tangent2;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_4 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4.___tangent2_7;
		__this->___tangent2_7 = L_5;
		// color = source.color;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_6 = ___0_source;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6.___color_3;
		__this->___color_3 = L_7;
		// normal = source.normal;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_8 = ___0_source;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8.___normal_4;
		__this->___normal_4 = L_9;
		// size = source.size;
		SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 L_10 = ___0_source;
		float L_11 = L_10.___size_5;
		__this->___size_5 = L_11;
		// _type = source.type;
		int32_t L_12;
		L_12 = SplinePoint_get_type_mACDC3294543A2B760B6BBFF3DE417A166136DD72((&___0_source), NULL);
		__this->____type_1 = L_12;
		// isDirty = false;
		__this->___isDirty_0 = (bool)0;
		// switch (_type)
		int32_t L_13 = __this->____type_1;
		V_1 = L_13;
		int32_t L_14 = V_1;
		V_0 = L_14;
		int32_t L_15 = V_0;
		if (!L_15)
		{
			goto IL_0071;
		}
	}
	{
		goto IL_006b;
	}

IL_006b:
	{
		int32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			goto IL_007a;
		}
	}
	{
		goto IL_0083;
	}

IL_0071:
	{
		// case Type.SmoothMirrored: SmoothMirrorTangent2(); break;
		SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(__this, NULL);
		// case Type.SmoothMirrored: SmoothMirrorTangent2(); break;
		goto IL_0083;
	}

IL_007a:
	{
		// case Type.SmoothFree: SmoothFreeTangent2(); break;
		SplinePoint_SmoothFreeTangent2_m500206A7602BF6DBBEBB22EAF25DBCAED1F20756(__this, NULL);
		// case Type.SmoothFree: SmoothFreeTangent2(); break;
		goto IL_0083;
	}

IL_0083:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint__ctor_m72F42037F5A4676840EBA292EB7AF5E8296F5B09_AdjustorThunk (RuntimeObject* __this, SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084 ___0_source, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint__ctor_m72F42037F5A4676840EBA292EB7AF5E8296F5B09(_thisAdjusted, ___0_source, method);
}
// System.Void Dreamteck.Splines.SplinePoint::Flatten(Dreamteck.LinearAlgebraUtility/Axis,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_Flatten_mEE0695C1BCB1FB736480679C985C9C71B7D3FFC6 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, int32_t ___0_axis, float ___1_flatValue, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// position = LinearAlgebraUtility.FlattenVector(position, axis, flatValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_2;
		int32_t L_1 = ___0_axis;
		float L_2 = ___1_flatValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = LinearAlgebraUtility_FlattenVector_mF2742D77C3B0EB5CC2219873528258AEBCA01946(L_0, L_1, L_2, NULL);
		__this->___position_2 = L_3;
		// tangent = LinearAlgebraUtility.FlattenVector(tangent, axis, flatValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___tangent_6;
		int32_t L_5 = ___0_axis;
		float L_6 = ___1_flatValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = LinearAlgebraUtility_FlattenVector_mF2742D77C3B0EB5CC2219873528258AEBCA01946(L_4, L_5, L_6, NULL);
		__this->___tangent_6 = L_7;
		// tangent2 = LinearAlgebraUtility.FlattenVector(tangent2, axis, flatValue);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___tangent2_7;
		int32_t L_9 = ___0_axis;
		float L_10 = ___1_flatValue;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = LinearAlgebraUtility_FlattenVector_mF2742D77C3B0EB5CC2219873528258AEBCA01946(L_8, L_9, L_10, NULL);
		__this->___tangent2_7 = L_11;
		// switch (axis)
		int32_t L_12 = ___0_axis;
		V_1 = L_12;
		int32_t L_13 = V_1;
		V_0 = L_13;
		int32_t L_14 = V_0;
		switch (L_14)
		{
			case 0:
			{
				goto IL_0052;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_006c;
			}
		}
	}
	{
		goto IL_0079;
	}

IL_0052:
	{
		// case LinearAlgebraUtility.Axis.X: normal = Vector3.right; break;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		__this->___normal_4 = L_15;
		// case LinearAlgebraUtility.Axis.X: normal = Vector3.right; break;
		goto IL_0079;
	}

IL_005f:
	{
		// case LinearAlgebraUtility.Axis.Y: normal = Vector3.up; break;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		__this->___normal_4 = L_16;
		// case LinearAlgebraUtility.Axis.Y: normal = Vector3.up; break;
		goto IL_0079;
	}

IL_006c:
	{
		// case LinearAlgebraUtility.Axis.Z: normal = Vector3.forward; break;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline(NULL);
		__this->___normal_4 = L_17;
		// case LinearAlgebraUtility.Axis.Z: normal = Vector3.forward; break;
		goto IL_0079;
	}

IL_0079:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_Flatten_mEE0695C1BCB1FB736480679C985C9C71B7D3FFC6_AdjustorThunk (RuntimeObject* __this, int32_t ___0_axis, float ___1_flatValue, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_Flatten_mEE0695C1BCB1FB736480679C985C9C71B7D3FFC6(_thisAdjusted, ___0_axis, ___1_flatValue, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetPositionX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPositionX_mB6DEDE4F694600A86D187A826A400DA6EBEF1DF5 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(position.x != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___position_2);
		float L_1 = L_0->___x_2;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// position.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___position_2);
		float L_5 = ___0_value;
		L_4->___x_2 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetPositionX_mB6DEDE4F694600A86D187A826A400DA6EBEF1DF5_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetPositionX_mB6DEDE4F694600A86D187A826A400DA6EBEF1DF5(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetPositionY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPositionY_m7187D5AD77FA0BED66ABE18D1322FD8894148310 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(position.y != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___position_2);
		float L_1 = L_0->___y_3;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// position.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___position_2);
		float L_5 = ___0_value;
		L_4->___y_3 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetPositionY_m7187D5AD77FA0BED66ABE18D1322FD8894148310_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetPositionY_m7187D5AD77FA0BED66ABE18D1322FD8894148310(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetPositionZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetPositionZ_m148E641208C705BE9B19309C78472425B58C0946 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(position.z != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___position_2);
		float L_1 = L_0->___z_4;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// position.z = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___position_2);
		float L_5 = ___0_value;
		L_4->___z_4 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetPositionZ_m148E641208C705BE9B19309C78472425B58C0946_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetPositionZ_m148E641208C705BE9B19309C78472425B58C0946(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangentX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentX_mD40CBFA80634F304C330B919DADBAC64D5C37746 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(tangent.x != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___tangent_6);
		float L_1 = L_0->___x_2;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// tangent.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___tangent_6);
		float L_5 = ___0_value;
		L_4->___x_2 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangentX_mD40CBFA80634F304C330B919DADBAC64D5C37746_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangentX_mD40CBFA80634F304C330B919DADBAC64D5C37746(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangentY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentY_mB1BF8035373B7DD3ABB196E11E018CFD371364A4 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (tangent.y != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___tangent_6);
		float L_1 = L_0->___y_3;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// tangent.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___tangent_6);
		float L_5 = ___0_value;
		L_4->___y_3 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangentY_mB1BF8035373B7DD3ABB196E11E018CFD371364A4_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangentY_mB1BF8035373B7DD3ABB196E11E018CFD371364A4(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangentZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangentZ_m1E5AEFB87862CE33DD482DEC4CA2626C12F41223 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(tangent.z != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___tangent_6);
		float L_1 = L_0->___z_4;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// tangent.z = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___tangent_6);
		float L_5 = ___0_value;
		L_4->___z_4 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangentZ_m1E5AEFB87862CE33DD482DEC4CA2626C12F41223_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangentZ_m1E5AEFB87862CE33DD482DEC4CA2626C12F41223(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2X(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2X_m46007357FA6487C5E9DCA429B46E93EAF5084788 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (tangent2.x != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___tangent2_7);
		float L_1 = L_0->___x_2;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// tangent2.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___tangent2_7);
		float L_5 = ___0_value;
		L_4->___x_2 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangent2X_m46007357FA6487C5E9DCA429B46E93EAF5084788_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangent2X_m46007357FA6487C5E9DCA429B46E93EAF5084788(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2Y(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2Y_m3C699AACB1F4ED881CE18A09EF3DAF2B65E3DCC7 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (tangent2.y != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___tangent2_7);
		float L_1 = L_0->___y_3;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// tangent2.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___tangent2_7);
		float L_5 = ___0_value;
		L_4->___y_3 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangent2Y_m3C699AACB1F4ED881CE18A09EF3DAF2B65E3DCC7_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangent2Y_m3C699AACB1F4ED881CE18A09EF3DAF2B65E3DCC7(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetTangent2Z(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetTangent2Z_mE9C52BBDD158F92D7BFDA55EE91F82EF7D517112 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (tangent2.z != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___tangent2_7);
		float L_1 = L_0->___z_4;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// tangent2.z = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___tangent2_7);
		float L_5 = ___0_value;
		L_4->___z_4 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetTangent2Z_mE9C52BBDD158F92D7BFDA55EE91F82EF7D517112_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetTangent2Z_mE9C52BBDD158F92D7BFDA55EE91F82EF7D517112(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetNormalX(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetNormalX_mBA4D2FEF98990203A6393123967E04837F0B54E6 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (normal.x != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___normal_4);
		float L_1 = L_0->___x_2;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// normal.x = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___normal_4);
		float L_5 = ___0_value;
		L_4->___x_2 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetNormalX_mBA4D2FEF98990203A6393123967E04837F0B54E6_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetNormalX_mBA4D2FEF98990203A6393123967E04837F0B54E6(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetNormalY(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetNormalY_mDDF4AB605F55F419DF8C70B47E9DEE893E7DE4E0 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (normal.y != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___normal_4);
		float L_1 = L_0->___y_3;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// normal.y = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___normal_4);
		float L_5 = ___0_value;
		L_4->___y_3 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetNormalY_mDDF4AB605F55F419DF8C70B47E9DEE893E7DE4E0_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetNormalY_mDDF4AB605F55F419DF8C70B47E9DEE893E7DE4E0(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetNormalZ(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetNormalZ_m1FA50DE5EDCC2BDC96121C340843AAC8A92298BF (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(normal.z != value)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_0 = (&__this->___normal_4);
		float L_1 = L_0->___z_4;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// normal.z = value;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_4 = (&__this->___normal_4);
		float L_5 = ___0_value;
		L_4->___z_4 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetNormalZ_m1FA50DE5EDCC2BDC96121C340843AAC8A92298BF_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetNormalZ_m1FA50DE5EDCC2BDC96121C340843AAC8A92298BF(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetColorR(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorR_mE0BA888011C6EFC016E3C3F8EC0DA370A21FA918 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (color.r != value)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_3);
		float L_1 = L_0->___r_0;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// color.r = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->___color_3);
		float L_5 = ___0_value;
		L_4->___r_0 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetColorR_mE0BA888011C6EFC016E3C3F8EC0DA370A21FA918_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetColorR_mE0BA888011C6EFC016E3C3F8EC0DA370A21FA918(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetColorG(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorG_mB80D71E0AC049AA3D3621F73A178BAD33B0503A3 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (color.g != value)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_3);
		float L_1 = L_0->___g_1;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// color.g = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->___color_3);
		float L_5 = ___0_value;
		L_4->___g_1 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetColorG_mB80D71E0AC049AA3D3621F73A178BAD33B0503A3_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetColorG_mB80D71E0AC049AA3D3621F73A178BAD33B0503A3(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetColorB(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorB_m5F2907EAC56406F2C2981FA3A4F5EF61E3BFAED2 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if(color.b != value)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_3);
		float L_1 = L_0->___b_2;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// color.b = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->___color_3);
		float L_5 = ___0_value;
		L_4->___b_2 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetColorB_m5F2907EAC56406F2C2981FA3A4F5EF61E3BFAED2_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetColorB_m5F2907EAC56406F2C2981FA3A4F5EF61E3BFAED2(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SetColorA(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SetColorA_m6EAAC82063F98C7CF5E924EC3E529A57A6A9EEAF (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (color.a != value)
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_0 = (&__this->___color_3);
		float L_1 = L_0->___a_3;
		float L_2 = ___0_value;
		V_0 = (bool)((((int32_t)((((float)L_1) == ((float)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
	}

IL_001f:
	{
		// color.a = value;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_4 = (&__this->___color_3);
		float L_5 = ___0_value;
		L_4->___a_3 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SetColorA_m6EAAC82063F98C7CF5E924EC3E529A57A6A9EEAF_AdjustorThunk (RuntimeObject* __this, float ___0_value, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SetColorA_m6EAAC82063F98C7CF5E924EC3E529A57A6A9EEAF(_thisAdjusted, ___0_value, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SmoothMirrorTangent2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) 
{
	{
		// tangent2 = position + (position - tangent);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		__this->___tangent2_7 = L_4;
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SmoothMirrorTangent2_m3BB3AC81D3A3DFA7D7AFE8EB7E3FD7258ECE87AA(_thisAdjusted, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SmoothMirrorTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothMirrorTangent_m2372562E52050B023A2C8D4B89DEB4602F88FF77 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) 
{
	{
		// tangent = position + (position - tangent2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_3, NULL);
		__this->___tangent_6 = L_4;
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SmoothMirrorTangent_m2372562E52050B023A2C8D4B89DEB4602F88FF77_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SmoothMirrorTangent_m2372562E52050B023A2C8D4B89DEB4602F88FF77(_thisAdjusted, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SmoothFreeTangent2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothFreeTangent2_m500206A7602BF6DBBEBB22EAF25DBCAED1F20756 (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// tangent2 = position + (position - tangent).normalized * (tangent2 - position).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_9, NULL);
		__this->___tangent2_7 = L_10;
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SmoothFreeTangent2_m500206A7602BF6DBBEBB22EAF25DBCAED1F20756_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SmoothFreeTangent2_m500206A7602BF6DBBEBB22EAF25DBCAED1F20756(_thisAdjusted, method);
}
// System.Void Dreamteck.Splines.SplinePoint::SmoothFreeTangent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplinePoint_SmoothFreeTangent_mD6607535A6EB75D0453C795ACEE3923BEE46BD2D (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// tangent = position + (position - tangent2).normalized * (tangent - position).magnitude;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___tangent2_7;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_1, L_2, NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = __this->___tangent_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___position_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline(L_5, L_6, NULL);
		V_0 = L_7;
		float L_8;
		L_8 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_4, L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_0, L_9, NULL);
		__this->___tangent_6 = L_10;
		// isDirty = true;
		__this->___isDirty_0 = (bool)1;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplinePoint_SmoothFreeTangent_mD6607535A6EB75D0453C795ACEE3923BEE46BD2D_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	SplinePoint_SmoothFreeTangent_mD6607535A6EB75D0453C795ACEE3923BEE46BD2D(_thisAdjusted, method);
}
// System.Int32 Dreamteck.Splines.SplinePoint::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplinePoint_GetHashCode_m3104C6F9FCF82D73F7688599CCF2AD22065BA31F (SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// int hash = 17;
		V_0 = ((int32_t)17);
		// hash *= hash * 23 + _type.GetHashCode();
		int32_t L_0 = V_0;
		int32_t L_1 = V_0;
		int32_t* L_2 = (&__this->____type_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((int32_t*)L_2, NULL);
		V_0 = ((int32_t)il2cpp_codegen_multiply(L_0, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_1, ((int32_t)23))), L_3))));
		// hash = hash * 23 + position.GetHashCode();
		int32_t L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_5 = (&__this->___position_2);
		int32_t L_6;
		L_6 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_5, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_4, ((int32_t)23))), L_6));
		// hash = hash * 23 + normal.GetHashCode();
		int32_t L_7 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_8 = (&__this->___normal_4);
		int32_t L_9;
		L_9 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_8, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_7, ((int32_t)23))), L_9));
		// hash = hash * 23 + tangent.GetHashCode();
		int32_t L_10 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_11 = (&__this->___tangent_6);
		int32_t L_12;
		L_12 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_11, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_10, ((int32_t)23))), L_12));
		// hash = hash * 23 + tangent2.GetHashCode();
		int32_t L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_14 = (&__this->___tangent2_7);
		int32_t L_15;
		L_15 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline(L_14, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_13, ((int32_t)23))), L_15));
		// hash = hash * 23 + color.GetHashCode();
		int32_t L_16 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* L_17 = (&__this->___color_3);
		int32_t L_18;
		L_18 = Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline(L_17, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_16, ((int32_t)23))), L_18));
		// hash = hash * 23 + size.GetHashCode();
		int32_t L_19 = V_0;
		float* L_20 = (&__this->___size_5);
		int32_t L_21;
		L_21 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_20, NULL);
		V_0 = ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_19, ((int32_t)23))), L_21));
		// return hash;
		int32_t L_22 = V_0;
		V_1 = L_22;
		goto IL_00a6;
	}

IL_00a6:
	{
		// }
		int32_t L_23 = V_1;
		return L_23;
	}
}
IL2CPP_EXTERN_C  int32_t SplinePoint_GetHashCode_m3104C6F9FCF82D73F7688599CCF2AD22065BA31F_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplinePoint_t803756424E55814ED6D69A9F4386106A4334C084*>(__this + _offset);
	int32_t _returnValue;
	_returnValue = SplinePoint_GetHashCode_m3104C6F9FCF82D73F7688599CCF2AD22065BA31F(_thisAdjusted, method);
	return _returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Dreamteck.Splines.SplineSample::FastCopy(Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_FastCopy_m8DD8D90BE9DD47EED748197D5872BB4A1AA05CEF (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_sample, const RuntimeMethod* method) 
{
	{
		// position = sample.position;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = ___0_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		__this->___position_0 = L_1;
		// up = sample.up;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_2 = ___0_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___up_1;
		__this->___up_1 = L_3;
		// forward = sample.forward;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_4 = ___0_sample;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = L_4->___forward_2;
		__this->___forward_2 = L_5;
		// color = sample.color;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_6 = ___0_sample;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7 = L_6->___color_3;
		__this->___color_3 = L_7;
		// size = sample.size;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_8 = ___0_sample;
		float L_9 = L_8->___size_4;
		__this->___size_4 = L_9;
		// percent = sample.percent;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_10 = ___0_sample;
		double L_11 = L_10->___percent_5;
		__this->___percent_5 = L_11;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplineSample_FastCopy_m8DD8D90BE9DD47EED748197D5872BB4A1AA05CEF_AdjustorThunk (RuntimeObject* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_sample, const RuntimeMethod* method)
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143*>(__this + _offset);
	SplineSample_FastCopy_m8DD8D90BE9DD47EED748197D5872BB4A1AA05CEF(_thisAdjusted, ___0_sample, method);
}
// UnityEngine.Quaternion Dreamteck.Splines.SplineSample::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SplineSample_get_rotation_m99770800A7D9C757DE6AC3E6A9A94BD67C4CCD60 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (up == forward)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___forward_2;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// if (up == Vector3.up) return Quaternion.LookRotation(Vector3.up, Vector3.back);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		// if (up == Vector3.up) return Quaternion.LookRotation(Vector3.up, Vector3.back);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10;
		L_10 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_8, L_9, NULL);
		V_2 = L_10;
		goto IL_0064;
	}

IL_003d:
	{
		// else return Quaternion.LookRotation(forward, Vector3.up);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = __this->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13;
		L_13 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_11, L_12, NULL);
		V_2 = L_13;
		goto IL_0064;
	}

IL_0050:
	{
		// return Quaternion.LookRotation(forward, up); }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = __this->___up_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16;
		L_16 = Quaternion_LookRotation_mFB02EDC8F733774DFAC3BEA4B4BB265A228F8307(L_14, L_15, NULL);
		V_2 = L_16;
		goto IL_0064;
	}

IL_0064:
	{
		// return Quaternion.LookRotation(forward, up); }
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_17 = V_2;
		return L_17;
	}
}
IL2CPP_EXTERN_C  Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 SplineSample_get_rotation_m99770800A7D9C757DE6AC3E6A9A94BD67C4CCD60_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143*>(__this + _offset);
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 _returnValue;
	_returnValue = SplineSample_get_rotation_m99770800A7D9C757DE6AC3E6A9A94BD67C4CCD60(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.Vector3 Dreamteck.Splines.SplineSample::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// if(up == forward)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = __this->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___forward_2;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_004e;
		}
	}
	{
		// if (up == Vector3.up) return Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = __this->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		bool L_6;
		L_6 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_4, L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0033;
		}
	}
	{
		// if (up == Vector3.up) return Vector3.right;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline(NULL);
		V_2 = L_8;
		goto IL_006a;
	}

IL_0033:
	{
		// else return Vector3.Cross(Vector3.up, forward).normalized;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline(NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = __this->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_9, L_10, NULL);
		V_3 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_12;
		goto IL_006a;
	}

IL_004e:
	{
		// return Vector3.Cross(up, forward).normalized; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = __this->___up_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = __this->___forward_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline(L_13, L_14, NULL);
		V_3 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_2 = L_16;
		goto IL_006a;
	}

IL_006a:
	{
		// return Vector3.Cross(up, forward).normalized; }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		return L_17;
	}
}
IL2CPP_EXTERN_C  Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143*>(__this + _offset);
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 _returnValue;
	_returnValue = SplineSample_get_right_mEAF1BE463979ED78C482FEADFCCE3E694E3DA491(_thisAdjusted, method);
	return _returnValue;
}
// Dreamteck.Splines.SplineSample Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,Dreamteck.Splines.SplineSample&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 SplineSample_Lerp_m0BC52CE731331730BDF93E22AA300CE851B85A57 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_a, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// SplineSample result = new SplineSample();
		il2cpp_codegen_initobj((&V_0), sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// Lerp(ref a, ref b, t, ref result);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = ___0_a;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_1 = ___1_b;
		float L_2 = ___2_t;
		SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C(L_0, L_1, L_2, (&V_0), NULL);
		// return result;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_4 = V_1;
		return L_4;
	}
}
// Dreamteck.Splines.SplineSample Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,Dreamteck.Splines.SplineSample&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 SplineSample_Lerp_m61F4432731067CD7A2A0A0A995DACFF6604717D9 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_a, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_b, double ___2_t, const RuntimeMethod* method) 
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_0;
	memset((&V_0), 0, sizeof(V_0));
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// SplineSample result = new SplineSample();
		il2cpp_codegen_initobj((&V_0), sizeof(SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143));
		// Lerp(ref a, ref b, t, ref result);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = ___0_a;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_1 = ___1_b;
		double L_2 = ___2_t;
		SplineSample_Lerp_mDC2046D9C41B063337F15327E3B8FF688E8C4352(L_0, L_1, L_2, (&V_0), NULL);
		// return result;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_3 = V_0;
		V_1 = L_3;
		goto IL_0018;
	}

IL_0018:
	{
		// }
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143 L_4 = V_1;
		return L_4;
	}
}
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,Dreamteck.Splines.SplineSample&,System.Double,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_mDC2046D9C41B063337F15327E3B8FF688E8C4352 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_a, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_b, double ___2_t, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___3_target, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// float ft = (float)t;
		double L_0 = ___2_t;
		V_0 = ((float)L_0);
		// DMath.LerpVector3NonAlloc(a.position, b.position, t, ref target.position);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_1 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = L_1->___position_0;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_3 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = L_3->___position_0;
		double L_5 = ___2_t;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_6 = ___3_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_7 = (&L_6->___position_0);
		DMath_LerpVector3NonAlloc_mE259642220356DDD94139E4CF49C3467ADB5DADC(L_2, L_4, L_5, L_7, NULL);
		// target.forward = Vector3.Slerp(a.forward, b.forward, ft);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_8 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_9 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = L_9->___forward_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_11 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = L_11->___forward_2;
		float L_13 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_10, L_12, L_13, NULL);
		L_8->___forward_2 = L_14;
		// target.up = Vector3.Slerp(a.up, b.up, ft);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_15 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_16 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = L_16->___up_1;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_18 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = L_18->___up_1;
		float L_20 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_17, L_19, L_20, NULL);
		L_15->___up_1 = L_21;
		// target.color = Color.Lerp(a.color, b.color, ft);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_22 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_23 = ___0_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24 = L_23->___color_3;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_25 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_26 = L_25->___color_3;
		float L_27 = V_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		L_28 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_24, L_26, L_27, NULL);
		L_22->___color_3 = L_28;
		// target.size = Mathf.Lerp(a.size, b.size, ft);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_29 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_30 = ___0_a;
		float L_31 = L_30->___size_4;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_32 = ___1_b;
		float L_33 = L_32->___size_4;
		float L_34 = V_0;
		float L_35;
		L_35 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_31, L_33, L_34, NULL);
		L_29->___size_4 = L_35;
		// target.percent = DMath.Lerp(a.percent, b.percent, t);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_36 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_37 = ___0_a;
		double L_38 = L_37->___percent_5;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_39 = ___1_b;
		double L_40 = L_39->___percent_5;
		double L_41 = ___2_t;
		double L_42;
		L_42 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_38, L_40, L_41, NULL);
		L_36->___percent_5 = L_42;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,Dreamteck.Splines.SplineSample&,System.Single,Dreamteck.Splines.SplineSample&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_a, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___1_b, float ___2_t, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___3_target, const RuntimeMethod* method) 
{
	{
		// DMath.LerpVector3NonAlloc(a.position, b.position, t, ref target.position);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0->___position_0;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_2 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = L_2->___position_0;
		float L_4 = ___2_t;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_5 = ___3_target;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_6 = (&L_5->___position_0);
		DMath_LerpVector3NonAlloc_mE259642220356DDD94139E4CF49C3467ADB5DADC(L_1, L_3, ((double)L_4), L_6, NULL);
		// target.forward = Vector3.Slerp(a.forward, b.forward, t);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_7 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_8 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = L_8->___forward_2;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_10 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = L_10->___forward_2;
		float L_12 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_9, L_11, L_12, NULL);
		L_7->___forward_2 = L_13;
		// target.up = Vector3.Slerp(a.up, b.up, t);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_14 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_15 = ___0_a;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = L_15->___up_1;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_17 = ___1_b;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17->___up_1;
		float L_19 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = Vector3_Slerp_m6CA14E5B6F6217802BAA0ADD2C9D086C741BA09C(L_16, L_18, L_19, NULL);
		L_14->___up_1 = L_20;
		// target.color = Color.Lerp(a.color, b.color, t);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_21 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_22 = ___0_a;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = L_22->___color_3;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_24 = ___1_b;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = L_24->___color_3;
		float L_26 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27;
		L_27 = Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline(L_23, L_25, L_26, NULL);
		L_21->___color_3 = L_27;
		// target.size = Mathf.Lerp(a.size, b.size, t);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_28 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_29 = ___0_a;
		float L_30 = L_29->___size_4;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_31 = ___1_b;
		float L_32 = L_31->___size_4;
		float L_33 = ___2_t;
		float L_34;
		L_34 = Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline(L_30, L_32, L_33, NULL);
		L_28->___size_4 = L_34;
		// target.percent = DMath.Lerp(a.percent, b.percent, t);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_35 = ___3_target;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_36 = ___0_a;
		double L_37 = L_36->___percent_5;
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_38 = ___1_b;
		double L_39 = L_38->___percent_5;
		float L_40 = ___2_t;
		double L_41;
		L_41 = DMath_Lerp_mCDB4B52E6B47DA3EE2EE07BA18FB351804E38ED9(L_37, L_39, ((double)L_40), NULL);
		L_35->___percent_5 = L_41;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_m7228F929816EF9BCC3553EF58319AAA41C3C68F2 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_b, double ___1_t, const RuntimeMethod* method) 
{
	{
		// Lerp(ref this, ref b, t, ref this);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = ___0_b;
		double L_1 = ___1_t;
		SplineSample_Lerp_mDC2046D9C41B063337F15327E3B8FF688E8C4352(__this, L_0, L_1, __this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplineSample_Lerp_m7228F929816EF9BCC3553EF58319AAA41C3C68F2_AdjustorThunk (RuntimeObject* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_b, double ___1_t, const RuntimeMethod* method)
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143*>(__this + _offset);
	SplineSample_Lerp_m7228F929816EF9BCC3553EF58319AAA41C3C68F2(_thisAdjusted, ___0_b, ___1_t, method);
}
// System.Void Dreamteck.Splines.SplineSample::Lerp(Dreamteck.Splines.SplineSample&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample_Lerp_mC965956609638A980790AE1D9A9001107849F4DA (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_b, float ___1_t, const RuntimeMethod* method) 
{
	{
		// Lerp(ref this, ref b, t, ref this);
		SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* L_0 = ___0_b;
		float L_1 = ___1_t;
		SplineSample_Lerp_m714FB2D7D68C98B87E44014ABB468884D761142C(__this, L_0, L_1, __this, NULL);
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplineSample_Lerp_mC965956609638A980790AE1D9A9001107849F4DA_AdjustorThunk (RuntimeObject* __this, SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* ___0_b, float ___1_t, const RuntimeMethod* method)
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143*>(__this + _offset);
	SplineSample_Lerp_mC965956609638A980790AE1D9A9001107849F4DA(_thisAdjusted, ___0_b, ___1_t, method);
}
// System.Void Dreamteck.Splines.SplineSample::.ctor(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Color,System.Single,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineSample__ctor_mD446870A15FDEC5F1ADC4FA38650801EE626D932 (SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_up, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_forward, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, float ___4_size, double ___5_percent, const RuntimeMethod* method) 
{
	{
		// this.position = position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_position;
		__this->___position_0 = L_0;
		// this.up = up;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_up;
		__this->___up_1 = L_1;
		// this.forward = forward;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___2_forward;
		__this->___forward_2 = L_2;
		// this.color = color;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3 = ___3_color;
		__this->___color_3 = L_3;
		// this.size = size;
		float L_4 = ___4_size;
		__this->___size_4 = L_4;
		// this.percent = percent;
		double L_5 = ___5_percent;
		__this->___percent_5 = L_5;
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void SplineSample__ctor_mD446870A15FDEC5F1ADC4FA38650801EE626D932_AdjustorThunk (RuntimeObject* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_position, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_up, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_forward, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___3_color, float ___4_size, double ___5_percent, const RuntimeMethod* method)
{
	SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<SplineSample_t608441A65388113877A1DA48BBBDCB6CFD3B1143*>(__this + _offset);
	SplineSample__ctor_mD446870A15FDEC5F1ADC4FA38650801EE626D932(_thisAdjusted, ___0_position, ___1_up, ___2_forward, ___3_color, ___4_size, ___5_percent, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 Dreamteck.Splines.SplineThreading::get_threadCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SplineThreading_get_threadCount_mEE454CCDA56D0E2F8B37FF4D7AD6F4831062831C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return threads.Length;
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_0 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_0);
		V_0 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		goto IL_000b;
	}

IL_000b:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void Dreamteck.Splines.SplineThreading::set_threadCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading_set_threadCount_m0DB33A63B9BACC738693EAE1F56967C43E644E15 (int32_t ___0_value, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ArrayUtility_Add_TisThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_m7995BC5C876AF3B38247C66AF1EF1EB001DCFB88_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* V_1 = NULL;
	bool V_2 = false;
	{
		// if(value > threads.Length)
		int32_t L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_1 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_1);
		V_0 = (bool)((((int32_t)L_0) > ((int32_t)((int32_t)(((RuntimeArray*)L_1)->max_length))))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	{
		goto IL_002d;
	}

IL_0012:
	{
		// ThreadDef thread = new ThreadDef();
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_3 = (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18*)il2cpp_codegen_object_new(ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ThreadDef__ctor_m370AC50B73EA5B9F3D245F2932C3D95B385100BD(L_3, NULL);
		V_1 = L_3;
		// thread.Restart();
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_4 = V_1;
		NullCheck(L_4);
		ThreadDef_Restart_m63FFDABC7B188D1657352B06EF3F34E24019FD3A(L_4, NULL);
		// ArrayUtility.Add(ref threads, thread);
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_5 = V_1;
		ArrayUtility_Add_TisThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_m7995BC5C876AF3B38247C66AF1EF1EB001DCFB88((&((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0), L_5, ArrayUtility_Add_TisThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_m7995BC5C876AF3B38247C66AF1EF1EB001DCFB88_RuntimeMethod_var);
	}

IL_002d:
	{
		// while (threads.Length < value)
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_6 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_6);
		int32_t L_7 = ___0_value;
		V_2 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) < ((int32_t)L_7))? 1 : 0);
		bool L_8 = V_2;
		if (L_8)
		{
			goto IL_0012;
		}
	}
	{
	}

IL_003c:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineThreading::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading__cctor_m36CF6601494A19C5E2C092EF4968BF2ABBE8EC6C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_Quitting_m2E8DBD0595278E0E8F54206571B295D6A49B9DD2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// internal static ThreadDef[] threads = new ThreadDef[2];
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_0 = (ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E*)(ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E*)SZArrayNew(ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E_il2cpp_TypeInfo_var, (uint32_t)2);
		((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0), (void*)L_0);
		// internal static readonly object locker = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___locker_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___locker_1), (void*)L_1);
		// Application.quitting += Quitting;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_2, NULL, (intptr_t)((void*)SplineThreading_Quitting_m2E8DBD0595278E0E8F54206571B295D6A49B9DD2_RuntimeMethod_var), NULL);
		Application_add_quitting_m5767AC63F23ABFD5BC3D60710906643BA536CCC5(L_2, NULL);
		// for (int i = 0; i < threads.Length; i++)
		V_0 = 0;
		goto IL_003e;
	}

IL_002c:
	{
		// threads[i] = new ThreadDef();
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_3 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_4 = V_0;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_5 = (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18*)il2cpp_codegen_object_new(ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ThreadDef__ctor_m370AC50B73EA5B9F3D245F2932C3D95B385100BD(L_5, NULL);
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_5);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18*)L_5);
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_6 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_003e:
	{
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_7 = V_0;
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_8 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_8);
		V_1 = (bool)((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))? 1 : 0);
		bool L_9 = V_1;
		if (L_9)
		{
			goto IL_002c;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineThreading::Quitting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading_Quitting_m2E8DBD0595278E0E8F54206571B295D6A49B9DD2 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stop();
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		SplineThreading_Stop_m2423EF56F9F20E0BA86B3655E77D0A66954BA898(NULL);
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineThreading::RunThread(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading_RunThread_mB368BC72A222DF74C8D231580932085ADDFF7979 (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Worker_tCA6D23E76852672B61269718E4137F3AD365AD28_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88EB21CA5454C0DC11F3E2DCF04D902104818319);
		s_Il2CppMethodInitialized = true;
	}
	Worker_tCA6D23E76852672B61269718E4137F3AD365AD28* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// ThreadDef.Worker work = (ThreadDef.Worker)o;
		RuntimeObject* L_0 = ___0_o;
		V_0 = ((Worker_tCA6D23E76852672B61269718E4137F3AD365AD28*)CastclassClass((RuntimeObject*)L_0, Worker_tCA6D23E76852672B61269718E4137F3AD365AD28_il2cpp_TypeInfo_var));
		goto IL_00b8;
	}

IL_000d:
	{
	}
	try
	{// begin try (depth: 1)
		// work.computing = false;
		Worker_tCA6D23E76852672B61269718E4137F3AD365AD28* L_1 = V_0;
		NullCheck(L_1);
		L_1->___computing_0 = (bool)0;
		// Thread.Sleep(Timeout.Infinite);
		Thread_Sleep_m71DE163765BF465EC4A0163F2ED4D43143094549((-1), NULL);
		goto IL_00b7;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ThreadInterruptedException_t5F777BF218B009092789F6DA0013E4DC3A0987CC_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0023;
		}
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0084;
		}
		throw e;
	}

CATCH_0023:
	{// begin catch(System.Threading.ThreadInterruptedException)
		{
			// catch (ThreadInterruptedException)
			// work.computing = true;
			Worker_tCA6D23E76852672B61269718E4137F3AD365AD28* L_2 = V_0;
			NullCheck(L_2);
			L_2->___computing_0 = (bool)1;
			// lock (locker)
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var)));
			RuntimeObject* L_3 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))))->___locker_1;
			V_1 = L_3;
			V_2 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0076:
				{// begin finally (depth: 2)
					{
						bool L_4 = V_2;
						if (!L_4)
						{
							goto IL_0080;
						}
					}
					{
						RuntimeObject* L_5 = V_1;
						Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_5, NULL);
					}

IL_0080:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					RuntimeObject* L_6 = V_1;
					Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_6, (&V_2), NULL);
					goto IL_005f_1;
				}

IL_0040_1:
				{
					// EmptyHandler h = work.instructions.Dequeue();
					Worker_tCA6D23E76852672B61269718E4137F3AD365AD28* L_7 = V_0;
					NullCheck(L_7);
					Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16* L_8 = L_7->___instructions_1;
					NullCheck(L_8);
					EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* L_9;
					L_9 = Queue_1_Dequeue_mB91C5A2A1CF4CB285E980960D30193188078F7BF(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_1_Dequeue_mB91C5A2A1CF4CB285E980960D30193188078F7BF_RuntimeMethod_var)));
					V_3 = L_9;
					// if (h != null) h();
					EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* L_10 = V_3;
					V_4 = (bool)((!(((RuntimeObject*)(EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
					bool L_11 = V_4;
					if (!L_11)
					{
						goto IL_005e_1;
					}
				}
				{
					// if (h != null) h();
					EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* L_12 = V_3;
					NullCheck(L_12);
					EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_inline(L_12, NULL);
				}

IL_005e_1:
				{
				}

IL_005f_1:
				{
					// while (work.instructions.Count > 0)
					Worker_tCA6D23E76852672B61269718E4137F3AD365AD28* L_13 = V_0;
					NullCheck(L_13);
					Queue_1_t9C7C43D61C080BE6952578A87C77DC2A925C7F16* L_14 = L_13->___instructions_1;
					NullCheck(L_14);
					int32_t L_15;
					L_15 = Queue_1_get_Count_m304CB04A17D2540065690CAC00E84FC2457127B3_inline(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_1_get_Count_m304CB04A17D2540065690CAC00E84FC2457127B3_RuntimeMethod_var)));
					V_5 = (bool)((((int32_t)L_15) > ((int32_t)0))? 1 : 0);
					bool L_16 = V_5;
					if (L_16)
					{
						goto IL_0040_1;
					}
				}
				{
					goto IL_0081;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0081:
		{
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00b7;
		}
	}// end catch (depth: 1)

CATCH_0084:
	{// begin catch(System.Exception)
		{
			// catch (System.Exception ex)
			V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// if(ex.Message != "") Debug.LogError("THREAD EXCEPTION " + ex.Message);
			Exception_t* L_17 = V_6;
			NullCheck(L_17);
			String_t* L_18;
			L_18 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_17);
			bool L_19;
			L_19 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_18, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709)), NULL);
			V_7 = L_19;
			bool L_20 = V_7;
			if (!L_20)
			{
				goto IL_00b5;
			}
		}
		{
			// if(ex.Message != "") Debug.LogError("THREAD EXCEPTION " + ex.Message);
			Exception_t* L_21 = V_6;
			NullCheck(L_21);
			String_t* L_22;
			L_22 = VirtualFuncInvoker0< String_t* >::Invoke(5 /* System.String System.Exception::get_Message() */, L_21);
			String_t* L_23;
			L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral2EB6E2A95D5C3E11CE312FE16B937D8DB184DBE5)), L_22, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_23, NULL);
		}

IL_00b5:
		{
			// break;
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_00c0;
		}
	}// end catch (depth: 1)

IL_00b7:
	{
	}

IL_00b8:
	{
		// while (true)
		V_8 = (bool)1;
		goto IL_000d;
	}

IL_00c0:
	{
		// Debug.Log("Thread stopped");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteral88EB21CA5454C0DC11F3E2DCF04D902104818319, NULL);
		// work.computing = false;
		Worker_tCA6D23E76852672B61269718E4137F3AD365AD28* L_24 = V_0;
		NullCheck(L_24);
		L_24->___computing_0 = (bool)0;
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineThreading::Run(Dreamteck.Splines.SplineThreading/EmptyHandler)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading_Run_m8D18C3F0113800FAEA412F1521A7D6C8200DAAEB (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* ___0_handler, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	int32_t G_B6_0 = 0;
	{
		// for (int i = 0; i < threads.Length; i++)
		V_0 = 0;
		goto IL_007d;
	}

IL_0005:
	{
		// if (!threads[i].isAlive) threads[i].Restart();
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_0 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = ThreadDef_get_isAlive_m72BF17AB4DE7865213D9189570F7FF080BB90E34(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// if (!threads[i].isAlive) threads[i].Restart();
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_6 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		ThreadDef_Restart_m63FFDABC7B188D1657352B06EF3F34E24019FD3A(L_9, NULL);
	}

IL_0026:
	{
		// if (!threads[i].computing || i == threads.Length - 1)
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_10 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		bool L_14;
		L_14 = ThreadDef_get_computing_m8C905E7B3F1198242C7B2716E2E14349D1E368A8(L_13, NULL);
		if (!L_14)
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_15 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_16 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_16);
		G_B6_0 = ((((int32_t)L_15) == ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_16)->max_length)), 1))))? 1 : 0);
		goto IL_0043;
	}

IL_0042:
	{
		G_B6_0 = 1;
	}

IL_0043:
	{
		V_2 = (bool)G_B6_0;
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0078;
		}
	}
	{
		// threads[i].Queue(handler);
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_18 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_19 = V_0;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* L_22 = ___0_handler;
		NullCheck(L_21);
		ThreadDef_Queue_m269C69D5945299266E49B34FAA0C4C1A73473CAD(L_21, L_22, NULL);
		// if(!threads[i].computing)threads[i].Interrupt();
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_23 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_24 = V_0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_26 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		bool L_27;
		L_27 = ThreadDef_get_computing_m8C905E7B3F1198242C7B2716E2E14349D1E368A8(L_26, NULL);
		V_3 = (bool)((((int32_t)L_27) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_3;
		if (!L_28)
		{
			goto IL_0076;
		}
	}
	{
		// if(!threads[i].computing)threads[i].Interrupt();
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_29 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		ThreadDef_Interrupt_m8883E869D1C03B1390BABC19019B17A28E5B246C(L_32, NULL);
	}

IL_0076:
	{
		// break;
		goto IL_0090;
	}

IL_0078:
	{
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_33 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_33, 1));
	}

IL_007d:
	{
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_34 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_35 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_35);
		V_4 = (bool)((((int32_t)L_34) < ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))))? 1 : 0);
		bool L_36 = V_4;
		if (L_36)
		{
			goto IL_0005;
		}
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineThreading::PrewarmThreads()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading_PrewarmThreads_m3C7DD66401BE45A6367E84691FCEF8BC36AC759A (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// for (int i = 0; i < threads.Length; i++)
		V_0 = 0;
		goto IL_002d;
	}

IL_0005:
	{
		// if (!threads[i].isAlive)
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_0 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		bool L_4;
		L_4 = ThreadDef_get_isAlive_m72BF17AB4DE7865213D9189570F7FF080BB90E34(L_3, NULL);
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// threads[i].Restart();
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_6 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		ThreadDef_Restart_m63FFDABC7B188D1657352B06EF3F34E24019FD3A(L_9, NULL);
	}

IL_0028:
	{
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_11 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_12 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_12);
		V_2 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Dreamteck.Splines.SplineThreading::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SplineThreading_Stop_m2423EF56F9F20E0BA86B3655E77D0A66954BA898 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for (int i = 0; i < threads.Length; i++)
		V_0 = 0;
		goto IL_0018;
	}

IL_0005:
	{
		// threads[i].Abort();
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_0 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		int32_t L_1 = V_0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		ThreadDef_t2318076C1FCCA2AF48E84E905DDC569F4E51CD18* L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		NullCheck(L_3);
		ThreadDef_Abort_mA2DF8D30A12F2140C37F68A1861D99FADF1218D3(L_3, NULL);
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_4 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_4, 1));
	}

IL_0018:
	{
		// for (int i = 0; i < threads.Length; i++)
		int32_t L_5 = V_0;
		il2cpp_codegen_runtime_class_init_inline(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var);
		ThreadDefU5BU5D_t2E2950A89C5A62D3B9774D72B87A28CEECEF200E* L_6 = ((SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_StaticFields*)il2cpp_codegen_static_fields_for(SplineThreading_tCC2347F01CD63D04E07FB2D534E0C816B4474C67_il2cpp_TypeInfo_var))->___threads_0;
		NullCheck(L_6);
		V_1 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))))? 1 : 0);
		bool L_7 = V_1;
		if (L_7)
		{
			goto IL_0005;
		}
	}
	{
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_Multicast(EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* currentDelegate = reinterpret_cast<EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B*>(delegatesToInvoke[i]);
		typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)((Il2CppObject*)currentDelegate->___method_code_6, reinterpret_cast<RuntimeMethod*>(currentDelegate->___method_3));
	}
}
void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_OpenInst(EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_OpenStatic(EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(method);
}
void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_OpenStaticInvoker(EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker0::Invoke(__this->___method_ptr_0, method, NULL);
}
void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_ClosedStaticInvoker(EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2);
}
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)();
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_reverse_pinvoke_function_ptr(__this));
	// Native function invocation
	il2cppPInvokeFunc();

}
// System.Void Dreamteck.Splines.SplineThreading/EmptyHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyHandler__ctor_m841E9CF5DC2F71982AF7FF407BA723CB06ABD581 (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___1_method);
	__this->___method_3 = ___1_method;
	__this->___m_target_2 = ___0_object;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___0_object);
	int parameterCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___1_method);
	__this->___method_code_6 = (intptr_t)__this;
	if (MethodIsStatic((RuntimeMethod*)___1_method))
	{
		bool isOpen = parameterCount == 0;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___1_method))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_OpenStatic;
			else
				{
					__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
					__this->___method_code_6 = (intptr_t)__this->___m_target_2;
				}
	}
	else
	{
		if (___0_object == NULL)
			il2cpp_codegen_raise_exception(il2cpp_codegen_get_argument_exception(NULL, "Delegate to an instance method cannot have null 'this'."), NULL);
		__this->___invoke_impl_1 = (intptr_t)__this->___method_ptr_0;
		__this->___method_code_6 = (intptr_t)__this->___m_target_2;
	}
	__this->___extra_arg_5 = (intptr_t)&EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_Multicast;
}
// System.Void Dreamteck.Splines.SplineThreading/EmptyHandler::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult Dreamteck.Splines.SplineThreading/EmptyHandler::BeginInvoke(System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* EmptyHandler_BeginInvoke_m29082C5CBE0753F4E6C263A706CEF8314452DAFF (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___0_callback, RuntimeObject* ___1_object, const RuntimeMethod* method) 
{
	void *__d_args[1] = {0};
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___0_callback, (RuntimeObject*)___1_object);
}
// System.Void Dreamteck.Splines.SplineThreading/EmptyHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EmptyHandler_EndInvoke_m3BD2DA805E6F39B0F8C0E3A7A2136E272C54DADA (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___0_result, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m9F170CDFBF1E490E559DA5D06D6547501A402BBF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___1_rhs;
		bool L_2;
		L_2 = Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m7F3B0FA9256CE368D7636558EFEFC4AB0E1A0F41_inline (float ___0_d, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___1_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___1_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___0_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_op_Multiply_mD0296202733CB2D5342FB7C82B48AEDA63036758_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_a;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_b;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_a;
		float L_5 = L_4.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___1_b;
		float L_7 = L_6.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_8 = ___0_a;
		float L_9 = L_8.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_10 = ___1_b;
		float L_11 = L_10.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12 = ___0_a;
		float L_13 = L_12.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14 = ___1_b;
		float L_15 = L_14.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16;
		memset((&L_16), 0, sizeof(L_16));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_16), ((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)), ((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* MeshGenerator_get__tsMesh_m0DCC74C0ABE21DC1F71A558F952607D9F1AF03CC_inline (MeshGenerator_t718A189DF63CD3415551A03D5F28DE13FB113B9E* __this, const RuntimeMethod* method) 
{
	{
		// protected TS_Mesh _tsMesh { get; private set; }
		TS_Mesh_t29220587F68F74F425DD451797DEFD5D9FC7F969* L_0 = __this->___U3C_tsMeshU3Ek__BackingField_56;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_one_m9097EB8DC23C26118A591AF16702796C3EF51DFB_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___oneVector_3;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Multiply_m2D984B613020089BF5165BA4CA10988E2DC771FE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		float L_2 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___0_a;
		float L_4 = L_3.___y_1;
		float L_5 = ___1_d;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_forward_mAA55A7034304DF8B2152EAD49AE779FC4CA2EB4A_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___forwardVector_11;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_right_m99043ED6B3D5AEA5033313FE3DA9571F39D1B280_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___rightVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Addition_m8136742CE6EE33BA4EB81C5F584678455917D2AE_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Subtraction_m44475FCDAD2DA2F98D78A6625EC2DCDFE8803837_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_a, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___1_b, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_a;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___1_b;
		float L_3 = L_2.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___0_a;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___1_b;
		float L_7 = L_6.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_8), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0023;
	}

IL_0023:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector2_op_Implicit_m6D9CABB2C791A192867D7A4559D132BE86DD3EB7_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___0_v, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___0_v;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___0_v;
		float L_3 = L_2.___y_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Implicit_mE8EBEE9291F11BB02F062D6E000F4798968CBD96_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_v, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_v;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_v;
		float L_3 = L_2.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_mE42023FF80067CB44A1D4A27EB7CF2B24CABB828_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_value, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_value;
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_value;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m5450829F333BD2A88AF9A592C4EE331661225915_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_right_mFF573AFBBB2186E7AFA1BA7CA271A78DF67E4EA0_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___rightVector_10;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_m128AF3FDC820BF59D5DE86D973E7DE3F20C3AEBA_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_op_Multiply_mCB375FCCC12A2EC8F9EB824A1BFB4453B58C2012_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___0_lhs, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___1_rhs, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_0 = ___0_lhs;
		float L_1 = L_0.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2 = ___1_rhs;
		float L_3 = L_2.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_4 = ___0_lhs;
		float L_5 = L_4.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6 = ___1_rhs;
		float L_7 = L_6.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_8 = ___0_lhs;
		float L_9 = L_8.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_10 = ___1_rhs;
		float L_11 = L_10.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_12 = ___0_lhs;
		float L_13 = L_12.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_14 = ___1_rhs;
		float L_15 = L_14.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_16 = ___0_lhs;
		float L_17 = L_16.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_18 = ___1_rhs;
		float L_19 = L_18.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_20 = ___0_lhs;
		float L_21 = L_20.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_22 = ___1_rhs;
		float L_23 = L_22.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_24 = ___0_lhs;
		float L_25 = L_24.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_26 = ___1_rhs;
		float L_27 = L_26.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_28 = ___0_lhs;
		float L_29 = L_28.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_30 = ___1_rhs;
		float L_31 = L_30.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_32 = ___0_lhs;
		float L_33 = L_32.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_34 = ___1_rhs;
		float L_35 = L_34.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_36 = ___0_lhs;
		float L_37 = L_36.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_38 = ___1_rhs;
		float L_39 = L_38.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_40 = ___0_lhs;
		float L_41 = L_40.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_42 = ___1_rhs;
		float L_43 = L_42.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_44 = ___0_lhs;
		float L_45 = L_44.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_46 = ___1_rhs;
		float L_47 = L_46.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_48 = ___0_lhs;
		float L_49 = L_48.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_50 = ___1_rhs;
		float L_51 = L_50.___w_3;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_52 = ___0_lhs;
		float L_53 = L_52.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_54 = ___1_rhs;
		float L_55 = L_54.___x_0;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_56 = ___0_lhs;
		float L_57 = L_56.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_58 = ___1_rhs;
		float L_59 = L_58.___y_1;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_60 = ___0_lhs;
		float L_61 = L_60.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_62 = ___1_rhs;
		float L_63 = L_62.___z_2;
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_64;
		memset((&L_64), 0, sizeof(L_64));
		Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline((&L_64), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11)))), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), ((float)il2cpp_codegen_multiply(L_25, L_27)))), ((float)il2cpp_codegen_multiply(L_29, L_31)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_33, L_35)), ((float)il2cpp_codegen_multiply(L_37, L_39)))), ((float)il2cpp_codegen_multiply(L_41, L_43)))), ((float)il2cpp_codegen_multiply(L_45, L_47)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_49, L_51)), ((float)il2cpp_codegen_multiply(L_53, L_55)))), ((float)il2cpp_codegen_multiply(L_57, L_59)))), ((float)il2cpp_codegen_multiply(L_61, L_63)))), /*hidden argument*/NULL);
		V_0 = L_64;
		goto IL_00e5;
	}

IL_00e5:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_65 = V_0;
		return L_65;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_mEF8349CC39674236CFC694189AFD36E31F89AC8F_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___0_x, float ___1_y, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Distance_m2314DB9B8BD01157E013DF87BEA557375C7F9FF9_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_b;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_a;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_b;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_a;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_b;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_18;
		L_18 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))))));
		V_3 = ((float)L_18);
		goto IL_0040;
	}

IL_0040:
	{
		float L_19 = V_3;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Cross_mF93A280558BCE756D13B6CC5DCD7DE8A43148987_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___0_lhs;
		float L_13 = L_12.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = ___1_rhs;
		float L_15 = L_14.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_lhs;
		float L_17 = L_16.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_rhs;
		float L_19 = L_18.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_lhs;
		float L_21 = L_20.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___1_rhs;
		float L_23 = L_22.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_24), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_9, L_11)), ((float)il2cpp_codegen_multiply(L_13, L_15)))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, L_19)), ((float)il2cpp_codegen_multiply(L_21, L_23)))), /*hidden argument*/NULL);
		V_0 = L_24;
		goto IL_005a;
	}

IL_005a:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Lerp_m3A906D0530A94FAABB94F0F905E84D99BE85C3F8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_a;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___1_b;
		float L_5 = L_4.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___x_2;
		float L_8 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___0_a;
		float L_10 = L_9.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___1_b;
		float L_12 = L_11.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___0_a;
		float L_14 = L_13.___y_3;
		float L_15 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___0_a;
		float L_17 = L_16.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = ___1_b;
		float L_19 = L_18.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20 = ___0_a;
		float L_21 = L_20.___z_4;
		float L_22 = ___2_t;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		memset((&L_23), 0, sizeof(L_23));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_23), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), /*hidden argument*/NULL);
		V_0 = L_23;
		goto IL_0053;
	}

IL_0053:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = V_0;
		return L_24;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_sqrMagnitude_m43C27DEC47C4811FB30AB474FF2131A963B66FC8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))));
		goto IL_002d;
	}

IL_002d:
	{
		float L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Min_m888083F74FF5655778F0403BB5E9608BEFDEA8CB_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Max_m7FA442918DE37E3A00106D1F2E789D65829792B8_inline (int32_t ___0_a, int32_t ___1_b, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___0_a;
		int32_t L_1 = ___1_b;
		if ((((int32_t)L_0) > ((int32_t)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		int32_t L_2 = ___1_b;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		int32_t L_3 = ___0_a;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline (float ___0_value, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		float L_0 = ___0_value;
		V_0 = (bool)((((float)L_0) < ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		V_1 = (0.0f);
		goto IL_002d;
	}

IL_0015:
	{
		float L_2 = ___0_value;
		V_2 = (bool)((((float)L_2) > ((float)(1.0f)))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		V_1 = (1.0f);
		goto IL_002d;
	}

IL_0029:
	{
		float L_4 = ___0_value;
		V_1 = L_4;
		goto IL_002d;
	}

IL_002d:
	{
		float L_5 = V_1;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m60F8B66CF27F1FA75AA219342BD184B75771EB4B_inline (float ___0_f, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___0_f;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = bankers_round(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Lerp_m47EF2FFB7647BD0A1FDC26DC03E28B19812139B5_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		float L_4;
		L_4 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_3, NULL);
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_4))));
		goto IL_0010;
	}

IL_0010:
	{
		float L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_Lerp_mE79F87889843ECDC188E4CB5B5E1F1B2256E5EBE_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_a, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		float L_0 = ___2_t;
		float L_1;
		L_1 = Mathf_Clamp01_mA7E048DBDA832D399A581BE4D6DED9FA44CE0F14_inline(L_0, NULL);
		___2_t = L_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_a;
		float L_3 = L_2.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___1_b;
		float L_5 = L_4.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_a;
		float L_7 = L_6.___r_0;
		float L_8 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___0_a;
		float L_10 = L_9.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_11 = ___1_b;
		float L_12 = L_11.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___0_a;
		float L_14 = L_13.___g_1;
		float L_15 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_16 = ___0_a;
		float L_17 = L_16.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = ___1_b;
		float L_19 = L_18.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20 = ___0_a;
		float L_21 = L_20.___b_2;
		float L_22 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_23 = ___0_a;
		float L_24 = L_23.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25 = ___1_b;
		float L_26 = L_25.___a_3;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_27 = ___0_a;
		float L_28 = L_27.___a_3;
		float L_29 = ___2_t;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_30;
		memset((&L_30), 0, sizeof(L_30));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_30), ((float)il2cpp_codegen_add(L_3, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_5, L_7)), L_8)))), ((float)il2cpp_codegen_add(L_10, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_12, L_14)), L_15)))), ((float)il2cpp_codegen_add(L_17, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_19, L_21)), L_22)))), ((float)il2cpp_codegen_add(L_24, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_26, L_28)), L_29)))), /*hidden argument*/NULL);
		V_0 = L_30;
		goto IL_0069;
	}

IL_0069:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31 = V_0;
		return L_31;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3_Normalize_mC749B887A4C74BA0A2E13E6377F17CCAEB0AADA8_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_1;
		L_1 = Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_002d;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline(L_4, L_5, NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_6;
		goto IL_0038;
	}

IL_002d:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this = L_7;
	}

IL_0038:
	{
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_m4DC36EEFDBE5F07C16249DA568023C5ECCFF0E7B_inline (int32_t ___0_value, int32_t ___1_min, int32_t ___2_max, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		int32_t L_0 = ___0_value;
		int32_t L_1 = ___1_min;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		int32_t L_3 = ___1_min;
		___0_value = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		int32_t L_4 = ___0_value;
		int32_t L_5 = ___2_max;
		V_1 = (bool)((((int32_t)L_4) > ((int32_t)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_7 = ___2_max;
		___0_value = L_7;
	}

IL_0019:
	{
		int32_t L_8 = ___0_value;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mCC6BB24E372AB96B8380D1678446EF6A8BAE13BB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_a, float ___1_d, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_a;
		float L_1 = L_0.___x_2;
		float L_2 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___0_a;
		float L_4 = L_3.___y_3;
		float L_5 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_a;
		float L_7 = L_6.___z_4;
		float L_8 = ___1_d;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_LerpUnclamped_mF35042F9D25A221BDD4B3FD6251224610AFC1F35_inline (float ___0_a, float ___1_b, float ___2_t, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		float L_0 = ___0_a;
		float L_1 = ___1_b;
		float L_2 = ___0_a;
		float L_3 = ___2_t;
		V_0 = ((float)il2cpp_codegen_add(L_0, ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract(L_1, L_2)), L_3))));
		goto IL_000b;
	}

IL_000b:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_mF1C733BA10E60B086AB950A71143678AE76C4D92_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___1_rhs;
		bool L_2;
		L_2 = Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Color_get_white_m068F5AF879B0FCA584E3693F762EA41BB65532C6_inline (const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0;
		memset((&L_0), 0, sizeof(L_0));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_0), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001d;
	}

IL_001d:
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Color_GetHashCode_m2981EEA1DEFE55254945D7D03BE64D4F56BA58D0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = (*(Color_tD001788D726C3A7F1379BEED0260B9591F440C1F*)__this);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		V_0 = L_1;
		int32_t L_2;
		L_2 = Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline((&V_0), NULL);
		V_1 = L_2;
		goto IL_001d;
	}

IL_001d:
	{
		int32_t L_3 = V_1;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_mCDCBB8D2EDC3D3BF20F31A25ACB34705D352B479_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_lhs, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_lhs;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___1_rhs;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_lhs;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___1_rhs;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_lhs;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___1_rhs;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_back_mCA5A84170E8DE5CE38C0551B4CCAD647BF215E57_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___backVector_12;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void EmptyHandler_Invoke_mD0D2FD25F6AF6E4916AF1E364A57A2AE78DA77EB_inline (EmptyHandler_t4B14D7C3896E95A95AA6639D9B0496DB8AC6879B* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m5D83C79B12616961D8147BB59AD5E55683361E85_gshared_inline (List_1_t495F03F47D827883530F951D563C0BB7340E5995* __this, double ___0_item, const RuntimeMethod* method) 
{
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_1 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_6 = V_0;
		int32_t L_7 = V_1;
		double L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (double)L_8);
		return;
	}

IL_0034:
	{
		double L_9 = ___0_item;
		((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m20263C594A01149776C2D378AB9C1151F4C597AD_gshared_inline (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9* __this, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 ___0_item, const RuntimeMethod* method) 
{
	RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_1 = (RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		RaycastHitU5BU5D_t008B8309DE422FE7567068D743D68054D5EBF1A8* L_6 = V_0;
		int32_t L_7 = V_1;
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_8 = ___0_item;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5)L_8);
		return;
	}

IL_0034:
	{
		RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5 L_9 = ___0_item;
		((  void (*) (List_1_t616BC508412283D06A62FEEDA7C4D4C3E75D63D9*, RaycastHit_t6F30BD0B38B56401CA833A1B87BD74F2ACD2F2B5, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___0_x, float ___1_y, float ___2_z, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_2 = L_0;
		float L_1 = ___1_y;
		__this->___y_3 = L_1;
		float L_2 = ___2_z;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___0_r, float ___1_g, float ___2_b, float ___3_a, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_r;
		__this->___r_0 = L_0;
		float L_1 = ___1_g;
		__this->___g_1 = L_1;
		float L_2 = ___2_b;
		__this->___b_2 = L_2;
		float L_3 = ___3_a;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m21652D951393A3D7CE92CE40049A0E7F76544D1B_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___0_vector, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___0_vector;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___0_vector;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___0_vector;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___0_vector;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___0_vector;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___0_vector;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Quaternion__ctor_m868FD60AA65DD5A8AC0C5DEB0608381A8D85FCD8_inline (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_0 = L_0;
		float L_1 = ___1_y;
		__this->___y_1 = L_1;
		float L_2 = ___2_z;
		__this->___z_2 = L_2;
		float L_3 = ___3_w;
		__this->___w_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_mB2BDC39B0B367BA15AA8DF22F8CB0D02D20BDC71_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_lhs, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___1_rhs, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_lhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___1_rhs;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m9B3228DAFA8DC57A75DE00CBBF13ED4F1E7B01FF_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___0_c, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___0_c;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___0_c;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___0_c;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___0_c;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector4_GetHashCode_m53F6FCA56A0051C9D1AB41AA3EAA2C86CDAA8B92_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_1);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_2);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_3);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&__this->___w_4);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0039;
	}

IL_0039:
	{
		int32_t L_8 = V_0;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_mCEA0E5F229F4AE8C55152F7A8F84345F24F52DC6_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___0_lhs, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___1_rhs, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___0_lhs;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___1_rhs;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___0_lhs;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___1_rhs;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___0_lhs;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___1_rhs;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___0_lhs;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___1_rhs;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___0_x, float ___1_y, float ___2_z, float ___3_w, const RuntimeMethod* method) 
{
	{
		float L_0 = ___0_x;
		__this->___x_1 = L_0;
		float L_1 = ___1_y;
		__this->___y_2 = L_1;
		float L_2 = ___2_z;
		__this->___z_3 = L_2;
		float L_3 = ___3_w;
		__this->___w_4 = L_3;
		return;
	}
}
