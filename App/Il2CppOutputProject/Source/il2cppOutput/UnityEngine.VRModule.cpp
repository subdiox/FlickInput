﻿#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct VirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct VirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericVirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericVirtActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericVirtActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct GenericInterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct GenericInterfaceActionInvoker4
{
	typedef void (*Action)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Action`1<System.Object>
struct Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0;
// System.Action`1<System.String>
struct Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0;
// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0;
// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7;
// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E;
// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E;
// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7;
// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E;
// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12;
// System.ArgumentException
struct ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1;
// System.ArgumentNullException
struct ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD;
// System.AsyncCallback
struct AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5;
// System.Collections.IDictionary
struct IDictionary_t1BD5C1546718A374EA8122FBD6C6EE45331E8CE7;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE;
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196;
// System.IAsyncResult
struct IAsyncResult_t8E194308510B375B42432981AE5E7488C458D598;
// System.Int32[]
struct Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83;
// System.IntPtr[]
struct IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770;
// System.String
struct String_t;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// UnityEngine.GameObject
struct GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F;
// UnityEngine.MeshCollider
struct MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE;
// UnityEngine.MeshFilter
struct MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28;
// UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE;
// UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate
struct GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate
struct HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate
struct HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate
struct HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate
struct ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate
struct ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate
struct ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0;
// UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate
struct ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate
struct NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate
struct NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate
struct NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF;
// UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate
struct NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate
struct RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B;
// UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate
struct RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214;
// UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate
struct TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F;
// UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler
struct SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75;
// UnityEngine.XR.WSA.Input.InteractionSourceState[]
struct InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;
// UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate
struct GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate
struct DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate
struct SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB;
// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate
struct SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7;
// UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate
struct SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1;
// UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate
struct SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092;
// UnityEngine.XR.WSA.WorldAnchor
struct WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE;
// UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate
struct OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253;
// UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate
struct OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1B7E24A34E3C718C6E030105031D2E93711662C5;
IL2CPP_EXTERN_C String_t* _stringLiteral28C5FB757402CF2F69498F95C00B41713A73EE31;
IL2CPP_EXTERN_C String_t* _stringLiteral2E763654A4843C914AD2EFF973F7278CCDF78F9B;
IL2CPP_EXTERN_C String_t* _stringLiteral589875DC4FFF7DFB0B1533B09C9B338A9ED0909A;
IL2CPP_EXTERN_C String_t* _stringLiteral7A28117916490821638320A59586D6D23372F1C5;
IL2CPP_EXTERN_C String_t* _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547;
IL2CPP_EXTERN_C String_t* _stringLiteral88E6995E626DB3204B27CE44EE5E11B194653566;
IL2CPP_EXTERN_C String_t* _stringLiteralB782D9835143821E697B67407CCFB082FE6322A9;
IL2CPP_EXTERN_C String_t* _stringLiteralE56BDFDA02CDB1AF069D764166DBFD5EF4DC1A56;
IL2CPP_EXTERN_C String_t* _stringLiteralED0A81780A3ACBDFBB61618D731769D527A0C1DE;
IL2CPP_EXTERN_C String_t* _stringLiteralF06DF609AED50661247CC6EC96C1599C193C3EC4;
IL2CPP_EXTERN_C String_t* _stringLiteralFAE3F30C59F14099E2D347848D5A1F32E789BBC0;
IL2CPP_EXTERN_C String_t* _stringLiteralFF63FAC4076C9D27B0D6EA9F35D626E26F89DE05;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m8E7A9E8CF891528845C4B071CB8166DDB1A384B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorldAnchorStore_Delete_mB519C56F58E9312FBBD868A2D6D8560FCADC1063_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DeserializationCompleteDelegate_BeginInvoke_m9910723A46FB34B3B07F0DC4A36338761DBC789C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureErrorDelegate_BeginInvoke_m74CC1A18B8CACCA1FA512F2173BD31AC7AAAB441_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_Finalize_m276601D68E2EF58C2286101AD6BBD369EB33F1F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeErrorEvent_m59368BCBE12B89289E8BFF2309A58002268DE43A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldCanceled_mC34AE7488EB2F23E0484F55EC5B06A2195E28788_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldCompleted_mD4B85266C373031A6560CD9F8E0ABD106BD275D4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeHoldStarted_m6E5AF40A3DB2A8DDD12726E2A5220280835D7853_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationCanceled_m1BF8273F58D455F4F509EA1C819FC63109762922_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationCompleted_m6553513E4776E6D01BA438497E82387B219DDB7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationStarted_m24AB97B545BEBCC96200E52F8648903D27CB6EFF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeManipulationUpdated_mFFFD261C7F13C3D7A890C6A7F2D9B8EEDDB2974B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationCanceled_m39FE74B1B69937DFE5F775D4B15F11BDF5A23B8E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationCompleted_m6A60E54BD33834390D15D7CF163B6C0DDDCFE776_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationStarted_m2079422473B03AE0A036518C2BE0D5C13D6A89CF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeNavigationUpdated_m94F6C1A11FC117B2B5346840247780C79ACAEB5D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeRecognitionEnded_mDFBDE51B56D682C1636521441816533C81CC753A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeRecognitionStarted_m1E8873104D35064A51A0BAAC7774CDFFEED61924_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_InvokeTapped_mD670AC122C9088630460544749701C246B1B2A49_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_HoldCanceled_m5A87948716C042D2BB2F9A44B08375917778837F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_HoldCompleted_mA5291F27BFBB960389A3EECB87E2B3872D6D739C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_HoldStarted_m63AE621FB2C0A905E85FA0C360D56D13DF38DC2D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_ManipulationCanceled_mDC5F6FBDEBE51806558745786C7E92A3F2130613_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_ManipulationCompleted_m48AF8AC88D59119C6DB8D8020A836FDD904BD206_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_ManipulationStarted_m7CA028E7917CCA101EFF363042839CAED337600F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_ManipulationUpdated_m90FA808402EA799AD23A3A82EC8C2CB9F087907D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_NavigationCanceled_m457599DCA92748E915C75C3D858C757D21C5FD4B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_NavigationCompleted_mD39CFD50E1AD8B673AB866EA8EAB7E22F2DBDCB3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_NavigationStarted_mB4E1B0FCB384F37BD9A9309C7C5B0AFADFA3EB1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_add_NavigationUpdated_mA509F2737D18188204C6E04154B1A1070F8E711C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_HoldCanceled_m276406624CF43814FBD0B59FC280721F9894A15E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_HoldCompleted_mAF760AB2059BE3437C0B7325162997ED050C3826_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_HoldStarted_m959F935D157277CFFD2CC9EE6135EFD8F9819CB4_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_ManipulationCanceled_m04F450DB730372FD72DFD1A00C41ADBBBA61C84A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_ManipulationCompleted_m2B6906DB3B85815143D01DFEB39F773FFE37F4BE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_ManipulationStarted_m66091D9AE58412D14BEC69511E5DD91B5BAEED47_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_ManipulationUpdated_mB8C6A79B4B42228B1FAEB41B590E59784F15AC14_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_NavigationCanceled_m7F24255B9515ACE9F80A55864A9923D085ED5E32_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_NavigationCompleted_m549BC4069ABD075D8077660FB94C32235306AA03_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_NavigationStarted_m2456D056E789D6F4FC6BB8477658352C1550E8FF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_remove_NavigationUpdated_m279E228CE0E46516F24A472998BC0F5B854EF4E8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldCanceledEventDelegate_BeginInvoke_mB7C6B86BCBD192C46E0DB0CC76536B659DE914B7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldCompletedEventDelegate_BeginInvoke_m6990F58B8B07706460F6D685EAB6F8B6A27E3025_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HoldStartedEventDelegate_BeginInvoke_mEB69CDD03CA2F7E2AC53F90C1F983A9681F102A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_GetCurrentReading_m0AA708A68E3A9FFD8455504D9837C1445468D8DC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_GetCurrentReading_m780B09E7126623F95C571790E67604919191502A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_add_InteractionSourceDetected_mFBF90BF264DEE53A082DA411447B2EC5C8F4F1A5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_add_InteractionSourceLost_m17A91C3642DAAAFF7377106B0A173D82E0FE523F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_add_InteractionSourcePressed_m8E03197012CEDAE3031171D5C7868FEEF2DAA908_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_add_InteractionSourceReleased_m2A436B0DB7A03C4F2159118428887D331C754A7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_add_InteractionSourceUpdated_m8E31E57228293F29129E655262D5A75EF692DB4E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_remove_InteractionSourceDetected_m28CA6D72D1CF9AD87E32D79D64631AD2299C102A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_remove_InteractionSourceLost_m01B7AE434EC61AA457C121C65BAC85D8D17D8569_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_remove_InteractionSourcePressed_mC04B7F9CCC1C1D4633877D00FCEB701D2B011903_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_remove_InteractionSourceReleased_mC73ABF93C15CA37C34CABA493AC13FB29644FF59_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionManager_remove_InteractionSourceUpdated_m8A7EA915C5ABDB41973EE976C3CFF96F29A02F94_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationCanceledEventDelegate_BeginInvoke_m2F42D255FB64C543111584E2B183D66809A72FE0_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationCompletedEventDelegate_BeginInvoke_m27EECB11BB8511FF754685CB629E072A6FED723B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationStartedEventDelegate_BeginInvoke_mE4118447769181F38B295DDCD5484F0974CE7CAB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ManipulationUpdatedEventDelegate_BeginInvoke_m109B92F35D22F6CB8BDDB76F65947BB3E36343AF_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationCanceledEventDelegate_BeginInvoke_mD9BCA54B098777B5EF4A96DBB14CD92AF3919306_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationCompletedEventDelegate_BeginInvoke_m3B0EF279ADD1EA29A764D156DA3C248E519408F2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationStartedEventDelegate_BeginInvoke_m7F938167F8941BA728FC429CC9D7587E4DF5E5EB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t NavigationUpdatedEventDelegate_BeginInvoke_m529EFAB702CC51B45F2B16FA2FC8144DECF32F20_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnPositionalLocatorStateChangedDelegate_BeginInvoke_m208B6244989F55ADDD858B706520C56982F3C95F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionEndedEventDelegate_BeginInvoke_mF3478908780F05C95ABBED5BFA17151A74981F8D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t RecognitionStartedEventDelegate_BeginInvoke_m51C50FCE97EB51769763374DD3DFB4FD38EA8F54_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SerializationCompleteDelegate_BeginInvoke_m92A655FC6A647A2B89EBEB1113FB5AD2376B18A2_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SourceEventHandler_BeginInvoke_m3A04E1F637F48F7B18E726173549DD5B9D60295E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceChangedDelegate_BeginInvoke_m8664937875D27851467C76EE2CF20695D0C15D6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceDataReadyDelegate_BeginInvoke_m8F2C8D36EBF68F4AAA4991E184A14096488CE484_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceObserver_Finalize_m8BE3CB8B933C93F9C499BC0BF1ABBCE5202CA9C5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceObserver_InvokeSurfaceChangedEvent_m94D6A260AC13754E63918998AF05126858438174_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TappedEventDelegate_BeginInvoke_m1523B624800012E92D400C62904EB0E3F45D8715_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_Delete_mB519C56F58E9312FBBD868A2D6D8560FCADC1063_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_Dispose_m76B91FE5ABE8A03C0CED688FB45806705AFD5BCA_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_GetAsync_mF912B2556FDDAC9FADB4BE2A335FCCB92DBDA8D6_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_InvokeGetAsyncDelegate_mBD8BD1DD969BB11783B8C527BAAA1B74CF05F959_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorStore__cctor_m7155DF59AE57F44A1A52432A5C2F84DF71DCB91B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_Dispose_mC7A39E9FC64D891BA34488B82C47A520C6679CC8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_Finalize_mC4CDDD4515215AD9722D0B3E0DCD61227543E026_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_mD56BA5D47BF5FF904852057207DE97159CBC473A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchor_add_OnTrackingChanged_m0810CA0788E01F8421C38A372993FB94B2E59D7D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldAnchor_remove_OnTrackingChanged_m3F6B4A3000D652E29ADFA585D779C6DA73930E60_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t WorldManager_Internal_TriggerPositionalLocatorStateChanged_mE66D0FFF1E4FD4406161D7EC482B45C33B0E0FC9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225;;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke;
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke;;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96;;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke;
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke;;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86;
struct InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tB054F17A779AC945E3659AF119A96DB806541AF9 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____items_1)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_tB9EC3346CC4A0EA5447D968E84A9AC1F6F372C28* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// UnityEngine.Experimental.XR.Boundary
struct  Boundary_t28B358633557CC38BADD75593D50D596DEE085E9  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WSA.HolographicRemoting
struct  HolographicRemoting_t2238CD95A4580960F86B7008E10DA9EED7205E84  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WSA.HolographicSettings
struct  HolographicSettings_t8F9D4FDA249684479F44CFC2772417DF360707BF  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionManager
struct  InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4  : public RuntimeObject
{
public:

public:
};

struct InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields
{
public:
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetected
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * ___InteractionSourceDetected_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLost
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * ___InteractionSourceLost_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressed
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * ___InteractionSourcePressed_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleased
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * ___InteractionSourceReleased_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs> UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdated
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * ___InteractionSourceUpdated_4;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceDetectedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceDetectedLegacy_5;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceLostLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceLostLegacy_6;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourcePressedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourcePressedLegacy_7;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceReleasedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceReleasedLegacy_8;
	// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler UnityEngine.XR.WSA.Input.InteractionManager::InteractionSourceUpdatedLegacy
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * ___InteractionSourceUpdatedLegacy_9;

public:
	inline static int32_t get_offset_of_InteractionSourceDetected_0() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceDetected_0)); }
	inline Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * get_InteractionSourceDetected_0() const { return ___InteractionSourceDetected_0; }
	inline Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 ** get_address_of_InteractionSourceDetected_0() { return &___InteractionSourceDetected_0; }
	inline void set_InteractionSourceDetected_0(Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * value)
	{
		___InteractionSourceDetected_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceDetected_0), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceLost_1() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceLost_1)); }
	inline Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * get_InteractionSourceLost_1() const { return ___InteractionSourceLost_1; }
	inline Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA ** get_address_of_InteractionSourceLost_1() { return &___InteractionSourceLost_1; }
	inline void set_InteractionSourceLost_1(Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * value)
	{
		___InteractionSourceLost_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceLost_1), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressed_2() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourcePressed_2)); }
	inline Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * get_InteractionSourcePressed_2() const { return ___InteractionSourcePressed_2; }
	inline Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 ** get_address_of_InteractionSourcePressed_2() { return &___InteractionSourcePressed_2; }
	inline void set_InteractionSourcePressed_2(Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * value)
	{
		___InteractionSourcePressed_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourcePressed_2), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleased_3() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceReleased_3)); }
	inline Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * get_InteractionSourceReleased_3() const { return ___InteractionSourceReleased_3; }
	inline Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 ** get_address_of_InteractionSourceReleased_3() { return &___InteractionSourceReleased_3; }
	inline void set_InteractionSourceReleased_3(Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * value)
	{
		___InteractionSourceReleased_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceReleased_3), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdated_4() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceUpdated_4)); }
	inline Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * get_InteractionSourceUpdated_4() const { return ___InteractionSourceUpdated_4; }
	inline Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 ** get_address_of_InteractionSourceUpdated_4() { return &___InteractionSourceUpdated_4; }
	inline void set_InteractionSourceUpdated_4(Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * value)
	{
		___InteractionSourceUpdated_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceUpdated_4), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceDetectedLegacy_5() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceDetectedLegacy_5)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceDetectedLegacy_5() const { return ___InteractionSourceDetectedLegacy_5; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceDetectedLegacy_5() { return &___InteractionSourceDetectedLegacy_5; }
	inline void set_InteractionSourceDetectedLegacy_5(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceDetectedLegacy_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceDetectedLegacy_5), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceLostLegacy_6() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceLostLegacy_6)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceLostLegacy_6() const { return ___InteractionSourceLostLegacy_6; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceLostLegacy_6() { return &___InteractionSourceLostLegacy_6; }
	inline void set_InteractionSourceLostLegacy_6(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceLostLegacy_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceLostLegacy_6), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourcePressedLegacy_7() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourcePressedLegacy_7)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourcePressedLegacy_7() const { return ___InteractionSourcePressedLegacy_7; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourcePressedLegacy_7() { return &___InteractionSourcePressedLegacy_7; }
	inline void set_InteractionSourcePressedLegacy_7(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourcePressedLegacy_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourcePressedLegacy_7), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceReleasedLegacy_8() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceReleasedLegacy_8)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceReleasedLegacy_8() const { return ___InteractionSourceReleasedLegacy_8; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceReleasedLegacy_8() { return &___InteractionSourceReleasedLegacy_8; }
	inline void set_InteractionSourceReleasedLegacy_8(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceReleasedLegacy_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceReleasedLegacy_8), (void*)value);
	}

	inline static int32_t get_offset_of_InteractionSourceUpdatedLegacy_9() { return static_cast<int32_t>(offsetof(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields, ___InteractionSourceUpdatedLegacy_9)); }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * get_InteractionSourceUpdatedLegacy_9() const { return ___InteractionSourceUpdatedLegacy_9; }
	inline SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 ** get_address_of_InteractionSourceUpdatedLegacy_9() { return &___InteractionSourceUpdatedLegacy_9; }
	inline void set_InteractionSourceUpdatedLegacy_9(SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * value)
	{
		___InteractionSourceUpdatedLegacy_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___InteractionSourceUpdatedLegacy_9), (void*)value);
	}
};


// UnityEngine.XR.WSA.PerceptionRemoting
struct  PerceptionRemoting_t865C1190104B3E2C008AEF07E74C8AEF9345AD6C  : public RuntimeObject
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver
struct  SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceObserver::m_Observer
	int32_t ___m_Observer_0;

public:
	inline static int32_t get_offset_of_m_Observer_0() { return static_cast<int32_t>(offsetof(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864, ___m_Observer_0)); }
	inline int32_t get_m_Observer_0() const { return ___m_Observer_0; }
	inline int32_t* get_address_of_m_Observer_0() { return &___m_Observer_0; }
	inline void set_m_Observer_0(int32_t value)
	{
		___m_Observer_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke
{
	int32_t ___m_Observer_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceObserver
struct SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com
{
	int32_t ___m_Observer_0;
};

// UnityEngine.XR.WSA.WorldManager
struct  WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863  : public RuntimeObject
{
public:

public:
};

struct WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields
{
public:
	// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate UnityEngine.XR.WSA.WorldManager::OnPositionalLocatorStateChanged
	OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * ___OnPositionalLocatorStateChanged_0;

public:
	inline static int32_t get_offset_of_OnPositionalLocatorStateChanged_0() { return static_cast<int32_t>(offsetof(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields, ___OnPositionalLocatorStateChanged_0)); }
	inline OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * get_OnPositionalLocatorStateChanged_0() const { return ___OnPositionalLocatorStateChanged_0; }
	inline OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B ** get_address_of_OnPositionalLocatorStateChanged_0() { return &___OnPositionalLocatorStateChanged_0; }
	inline void set_OnPositionalLocatorStateChanged_0(OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * value)
	{
		___OnPositionalLocatorStateChanged_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPositionalLocatorStateChanged_0), (void*)value);
	}
};


// UnityEngine.XR.XRDevice
struct  XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A  : public RuntimeObject
{
public:

public:
};

struct XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields
{
public:
	// System.Action`1<System.String> UnityEngine.XR.XRDevice::deviceLoaded
	Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * ___deviceLoaded_0;

public:
	inline static int32_t get_offset_of_deviceLoaded_0() { return static_cast<int32_t>(offsetof(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields, ___deviceLoaded_0)); }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * get_deviceLoaded_0() const { return ___deviceLoaded_0; }
	inline Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 ** get_address_of_deviceLoaded_0() { return &___deviceLoaded_0; }
	inline void set_deviceLoaded_0(Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * value)
	{
		___deviceLoaded_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___deviceLoaded_0), (void*)value);
	}
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.DateTime
struct  DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t2B9E4FDDDB9F0A00EC0AC631BA2DA915EB1ECF83* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MinValue_31)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_StaticFields, ___MaxValue_32)); }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  value)
	{
		___MaxValue_32 = value;
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct  Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t7A386C2FF7B0280A0F516992401DDFCF0FF7B436, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt32
struct  UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t4980FA09003AFAAB5A6E361BA2748EA9A005709B, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// UnityEngine.Quaternion
struct  Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___identityQuaternion_4 = value;
	}
};


// UnityEngine.Vector2
struct  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___zeroVector_2)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___oneVector_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___upVector_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___downVector_5)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___leftVector_6)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___rightVector_7)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___zeroVector_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___oneVector_6)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___upVector_7)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___downVector_8)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___leftVector_9)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___rightVector_10)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___forwardVector_11)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___backVector_12)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct  GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C 
{
public:
	// System.String UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<error>k__BackingField
	String_t* ___U3CerrorU3Ek__BackingField_0;
	// System.Int32 UnityEngine.XR.WSA.Input.GestureErrorEventArgs::<hresult>k__BackingField
	int32_t ___U3ChresultU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CerrorU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C, ___U3CerrorU3Ek__BackingField_0)); }
	inline String_t* get_U3CerrorU3Ek__BackingField_0() const { return ___U3CerrorU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CerrorU3Ek__BackingField_0() { return &___U3CerrorU3Ek__BackingField_0; }
	inline void set_U3CerrorU3Ek__BackingField_0(String_t* value)
	{
		___U3CerrorU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CerrorU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3ChresultU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C, ___U3ChresultU3Ek__BackingField_1)); }
	inline int32_t get_U3ChresultU3Ek__BackingField_1() const { return ___U3ChresultU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3ChresultU3Ek__BackingField_1() { return &___U3ChresultU3Ek__BackingField_1; }
	inline void set_U3ChresultU3Ek__BackingField_1(int32_t value)
	{
		___U3ChresultU3Ek__BackingField_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke
{
	char* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureErrorEventArgs
struct GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com
{
	Il2CppChar* ___U3CerrorU3Ek__BackingField_0;
	int32_t ___U3ChresultU3Ek__BackingField_1;
};

// UnityEngine.XR.WSA.SurfaceId
struct  SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceId::handle
	int32_t ___handle_0;

public:
	inline static int32_t get_offset_of_handle_0() { return static_cast<int32_t>(offsetof(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF, ___handle_0)); }
	inline int32_t get_handle_0() const { return ___handle_0; }
	inline int32_t* get_address_of_handle_0() { return &___handle_0; }
	inline void set_handle_0(int32_t value)
	{
		___handle_0 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * get_data_9() const { return ___data_9; }
	inline DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1BF9F691B56DAE5F8C28C5E084FDE94F15F27BBE * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4DC01DCB9A6DF6C9792A6513595D7A11E637DCDD* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_t4A754D86B0F784B18CBC36C073BA564BED109770 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t855F09649EA34DEE7C1B6F088E0538E3CCC3F196* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Bounds
struct  Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Center_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890, ___m_Extents_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.Experimental.XR.Boundary_Type
struct  Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288 
{
public:
	// System.Int32 UnityEngine.Experimental.XR.Boundary_Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t94CEB95ABED1654F7AF6B2CACCA1769C4061A288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Pose
struct  Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 
{
public:
	// UnityEngine.Vector3 UnityEngine.Pose::position
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position_0;
	// UnityEngine.Quaternion UnityEngine.Pose::rotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___position_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_position_0() const { return ___position_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_rotation_1() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29, ___rotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_rotation_1() const { return ___rotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_rotation_1() { return &___rotation_1; }
	inline void set_rotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___rotation_1 = value;
	}
};

struct Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields
{
public:
	// UnityEngine.Pose UnityEngine.Pose::k_Identity
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___k_Identity_2;

public:
	inline static int32_t get_offset_of_k_Identity_2() { return static_cast<int32_t>(offsetof(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29_StaticFields, ___k_Identity_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_k_Identity_2() const { return ___k_Identity_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_k_Identity_2() { return &___k_Identity_2; }
	inline void set_k_Identity_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___k_Identity_2 = value;
	}
};


// UnityEngine.Ray
struct  Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Origin_0)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2, ___m_Direction_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Direction_1 = value;
	}
};


// UnityEngine.XR.TrackingSpaceType
struct  TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B 
{
public:
	// System.Int32 UnityEngine.XR.TrackingSpaceType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TrackingSpaceType_tDFAE75A41ADEB2EC330998CCC63202F4A4889C2B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.HolographicStreamerConnectionState
struct  HolographicStreamerConnectionState_tADD12D175614A561FD73AB8CD0967DDB3B4D47D6 
{
public:
	// System.Int32 UnityEngine.XR.WSA.HolographicStreamerConnectionState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HolographicStreamerConnectionState_tADD12D175614A561FD73AB8CD0967DDB3B4D47D6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.GestureRecognizer
struct  GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::m_Recognizer
	intptr_t ___m_Recognizer_0;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceled
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * ___HoldCanceled_1;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompleted
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * ___HoldCompleted_2;
	// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStarted
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * ___HoldStarted_3;
	// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::Tapped
	Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * ___Tapped_4;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceled
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * ___ManipulationCanceled_5;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompleted
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * ___ManipulationCompleted_6;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStarted
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * ___ManipulationStarted_7;
	// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdated
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * ___ManipulationUpdated_8;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceled
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___NavigationCanceled_9;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompleted
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___NavigationCompleted_10;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStarted
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___NavigationStarted_11;
	// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdated
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___NavigationUpdated_12;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEnded
	Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * ___RecognitionEnded_13;
	// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStarted
	Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * ___RecognitionStarted_14;
	// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs> UnityEngine.XR.WSA.Input.GestureRecognizer::GestureError
	Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * ___GestureError_15;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCanceledEvent
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * ___HoldCanceledEvent_16;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldCompletedEvent
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * ___HoldCompletedEvent_17;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::HoldStartedEvent
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * ___HoldStartedEvent_18;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::TappedEvent
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * ___TappedEvent_19;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCanceledEvent
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * ___ManipulationCanceledEvent_20;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationCompletedEvent
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * ___ManipulationCompletedEvent_21;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationStartedEvent
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * ___ManipulationStartedEvent_22;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::ManipulationUpdatedEvent
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * ___ManipulationUpdatedEvent_23;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCanceledEvent
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * ___NavigationCanceledEvent_24;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationCompletedEvent
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * ___NavigationCompletedEvent_25;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationStartedEvent
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * ___NavigationStartedEvent_26;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::NavigationUpdatedEvent
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * ___NavigationUpdatedEvent_27;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionEndedEvent
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * ___RecognitionEndedEvent_28;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::RecognitionStartedEvent
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * ___RecognitionStartedEvent_29;
	// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate UnityEngine.XR.WSA.Input.GestureRecognizer::GestureErrorEvent
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * ___GestureErrorEvent_30;

public:
	inline static int32_t get_offset_of_m_Recognizer_0() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___m_Recognizer_0)); }
	inline intptr_t get_m_Recognizer_0() const { return ___m_Recognizer_0; }
	inline intptr_t* get_address_of_m_Recognizer_0() { return &___m_Recognizer_0; }
	inline void set_m_Recognizer_0(intptr_t value)
	{
		___m_Recognizer_0 = value;
	}

	inline static int32_t get_offset_of_HoldCanceled_1() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceled_1)); }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * get_HoldCanceled_1() const { return ___HoldCanceled_1; }
	inline Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B ** get_address_of_HoldCanceled_1() { return &___HoldCanceled_1; }
	inline void set_HoldCanceled_1(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * value)
	{
		___HoldCanceled_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceled_1), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompleted_2() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompleted_2)); }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * get_HoldCompleted_2() const { return ___HoldCompleted_2; }
	inline Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 ** get_address_of_HoldCompleted_2() { return &___HoldCompleted_2; }
	inline void set_HoldCompleted_2(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * value)
	{
		___HoldCompleted_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompleted_2), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStarted_3() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStarted_3)); }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * get_HoldStarted_3() const { return ___HoldStarted_3; }
	inline Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E ** get_address_of_HoldStarted_3() { return &___HoldStarted_3; }
	inline void set_HoldStarted_3(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * value)
	{
		___HoldStarted_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStarted_3), (void*)value);
	}

	inline static int32_t get_offset_of_Tapped_4() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___Tapped_4)); }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * get_Tapped_4() const { return ___Tapped_4; }
	inline Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 ** get_address_of_Tapped_4() { return &___Tapped_4; }
	inline void set_Tapped_4(Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * value)
	{
		___Tapped_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tapped_4), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceled_5() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceled_5)); }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * get_ManipulationCanceled_5() const { return ___ManipulationCanceled_5; }
	inline Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E ** get_address_of_ManipulationCanceled_5() { return &___ManipulationCanceled_5; }
	inline void set_ManipulationCanceled_5(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * value)
	{
		___ManipulationCanceled_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceled_5), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompleted_6() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompleted_6)); }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * get_ManipulationCompleted_6() const { return ___ManipulationCompleted_6; }
	inline Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F ** get_address_of_ManipulationCompleted_6() { return &___ManipulationCompleted_6; }
	inline void set_ManipulationCompleted_6(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * value)
	{
		___ManipulationCompleted_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompleted_6), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStarted_7() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStarted_7)); }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * get_ManipulationStarted_7() const { return ___ManipulationStarted_7; }
	inline Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E ** get_address_of_ManipulationStarted_7() { return &___ManipulationStarted_7; }
	inline void set_ManipulationStarted_7(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * value)
	{
		___ManipulationStarted_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStarted_7), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdated_8() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdated_8)); }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * get_ManipulationUpdated_8() const { return ___ManipulationUpdated_8; }
	inline Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC ** get_address_of_ManipulationUpdated_8() { return &___ManipulationUpdated_8; }
	inline void set_ManipulationUpdated_8(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * value)
	{
		___ManipulationUpdated_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdated_8), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceled_9() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceled_9)); }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * get_NavigationCanceled_9() const { return ___NavigationCanceled_9; }
	inline Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B ** get_address_of_NavigationCanceled_9() { return &___NavigationCanceled_9; }
	inline void set_NavigationCanceled_9(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * value)
	{
		___NavigationCanceled_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceled_9), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompleted_10() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompleted_10)); }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * get_NavigationCompleted_10() const { return ___NavigationCompleted_10; }
	inline Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 ** get_address_of_NavigationCompleted_10() { return &___NavigationCompleted_10; }
	inline void set_NavigationCompleted_10(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * value)
	{
		___NavigationCompleted_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompleted_10), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStarted_11() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStarted_11)); }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * get_NavigationStarted_11() const { return ___NavigationStarted_11; }
	inline Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E ** get_address_of_NavigationStarted_11() { return &___NavigationStarted_11; }
	inline void set_NavigationStarted_11(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * value)
	{
		___NavigationStarted_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStarted_11), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdated_12() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdated_12)); }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * get_NavigationUpdated_12() const { return ___NavigationUpdated_12; }
	inline Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C ** get_address_of_NavigationUpdated_12() { return &___NavigationUpdated_12; }
	inline void set_NavigationUpdated_12(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * value)
	{
		___NavigationUpdated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdated_12), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEnded_13() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEnded_13)); }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * get_RecognitionEnded_13() const { return ___RecognitionEnded_13; }
	inline Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 ** get_address_of_RecognitionEnded_13() { return &___RecognitionEnded_13; }
	inline void set_RecognitionEnded_13(Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * value)
	{
		___RecognitionEnded_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEnded_13), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStarted_14() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStarted_14)); }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * get_RecognitionStarted_14() const { return ___RecognitionStarted_14; }
	inline Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E ** get_address_of_RecognitionStarted_14() { return &___RecognitionStarted_14; }
	inline void set_RecognitionStarted_14(Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * value)
	{
		___RecognitionStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStarted_14), (void*)value);
	}

	inline static int32_t get_offset_of_GestureError_15() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureError_15)); }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * get_GestureError_15() const { return ___GestureError_15; }
	inline Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B ** get_address_of_GestureError_15() { return &___GestureError_15; }
	inline void set_GestureError_15(Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * value)
	{
		___GestureError_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureError_15), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCanceledEvent_16() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCanceledEvent_16)); }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * get_HoldCanceledEvent_16() const { return ___HoldCanceledEvent_16; }
	inline HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 ** get_address_of_HoldCanceledEvent_16() { return &___HoldCanceledEvent_16; }
	inline void set_HoldCanceledEvent_16(HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * value)
	{
		___HoldCanceledEvent_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCanceledEvent_16), (void*)value);
	}

	inline static int32_t get_offset_of_HoldCompletedEvent_17() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldCompletedEvent_17)); }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * get_HoldCompletedEvent_17() const { return ___HoldCompletedEvent_17; }
	inline HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A ** get_address_of_HoldCompletedEvent_17() { return &___HoldCompletedEvent_17; }
	inline void set_HoldCompletedEvent_17(HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * value)
	{
		___HoldCompletedEvent_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldCompletedEvent_17), (void*)value);
	}

	inline static int32_t get_offset_of_HoldStartedEvent_18() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___HoldStartedEvent_18)); }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * get_HoldStartedEvent_18() const { return ___HoldStartedEvent_18; }
	inline HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 ** get_address_of_HoldStartedEvent_18() { return &___HoldStartedEvent_18; }
	inline void set_HoldStartedEvent_18(HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * value)
	{
		___HoldStartedEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HoldStartedEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_TappedEvent_19() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___TappedEvent_19)); }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * get_TappedEvent_19() const { return ___TappedEvent_19; }
	inline TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F ** get_address_of_TappedEvent_19() { return &___TappedEvent_19; }
	inline void set_TappedEvent_19(TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * value)
	{
		___TappedEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TappedEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCanceledEvent_20() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCanceledEvent_20)); }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * get_ManipulationCanceledEvent_20() const { return ___ManipulationCanceledEvent_20; }
	inline ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 ** get_address_of_ManipulationCanceledEvent_20() { return &___ManipulationCanceledEvent_20; }
	inline void set_ManipulationCanceledEvent_20(ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * value)
	{
		___ManipulationCanceledEvent_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCanceledEvent_20), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationCompletedEvent_21() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationCompletedEvent_21)); }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * get_ManipulationCompletedEvent_21() const { return ___ManipulationCompletedEvent_21; }
	inline ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 ** get_address_of_ManipulationCompletedEvent_21() { return &___ManipulationCompletedEvent_21; }
	inline void set_ManipulationCompletedEvent_21(ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * value)
	{
		___ManipulationCompletedEvent_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationCompletedEvent_21), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationStartedEvent_22() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationStartedEvent_22)); }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * get_ManipulationStartedEvent_22() const { return ___ManipulationStartedEvent_22; }
	inline ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 ** get_address_of_ManipulationStartedEvent_22() { return &___ManipulationStartedEvent_22; }
	inline void set_ManipulationStartedEvent_22(ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * value)
	{
		___ManipulationStartedEvent_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationStartedEvent_22), (void*)value);
	}

	inline static int32_t get_offset_of_ManipulationUpdatedEvent_23() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___ManipulationUpdatedEvent_23)); }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * get_ManipulationUpdatedEvent_23() const { return ___ManipulationUpdatedEvent_23; }
	inline ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 ** get_address_of_ManipulationUpdatedEvent_23() { return &___ManipulationUpdatedEvent_23; }
	inline void set_ManipulationUpdatedEvent_23(ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * value)
	{
		___ManipulationUpdatedEvent_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ManipulationUpdatedEvent_23), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCanceledEvent_24() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCanceledEvent_24)); }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * get_NavigationCanceledEvent_24() const { return ___NavigationCanceledEvent_24; }
	inline NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 ** get_address_of_NavigationCanceledEvent_24() { return &___NavigationCanceledEvent_24; }
	inline void set_NavigationCanceledEvent_24(NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * value)
	{
		___NavigationCanceledEvent_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCanceledEvent_24), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationCompletedEvent_25() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationCompletedEvent_25)); }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * get_NavigationCompletedEvent_25() const { return ___NavigationCompletedEvent_25; }
	inline NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 ** get_address_of_NavigationCompletedEvent_25() { return &___NavigationCompletedEvent_25; }
	inline void set_NavigationCompletedEvent_25(NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * value)
	{
		___NavigationCompletedEvent_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationCompletedEvent_25), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationStartedEvent_26() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationStartedEvent_26)); }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * get_NavigationStartedEvent_26() const { return ___NavigationStartedEvent_26; }
	inline NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF ** get_address_of_NavigationStartedEvent_26() { return &___NavigationStartedEvent_26; }
	inline void set_NavigationStartedEvent_26(NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * value)
	{
		___NavigationStartedEvent_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationStartedEvent_26), (void*)value);
	}

	inline static int32_t get_offset_of_NavigationUpdatedEvent_27() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___NavigationUpdatedEvent_27)); }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * get_NavigationUpdatedEvent_27() const { return ___NavigationUpdatedEvent_27; }
	inline NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A ** get_address_of_NavigationUpdatedEvent_27() { return &___NavigationUpdatedEvent_27; }
	inline void set_NavigationUpdatedEvent_27(NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * value)
	{
		___NavigationUpdatedEvent_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NavigationUpdatedEvent_27), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionEndedEvent_28() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionEndedEvent_28)); }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * get_RecognitionEndedEvent_28() const { return ___RecognitionEndedEvent_28; }
	inline RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B ** get_address_of_RecognitionEndedEvent_28() { return &___RecognitionEndedEvent_28; }
	inline void set_RecognitionEndedEvent_28(RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * value)
	{
		___RecognitionEndedEvent_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionEndedEvent_28), (void*)value);
	}

	inline static int32_t get_offset_of_RecognitionStartedEvent_29() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___RecognitionStartedEvent_29)); }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * get_RecognitionStartedEvent_29() const { return ___RecognitionStartedEvent_29; }
	inline RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 ** get_address_of_RecognitionStartedEvent_29() { return &___RecognitionStartedEvent_29; }
	inline void set_RecognitionStartedEvent_29(RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * value)
	{
		___RecognitionStartedEvent_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecognitionStartedEvent_29), (void*)value);
	}

	inline static int32_t get_offset_of_GestureErrorEvent_30() { return static_cast<int32_t>(offsetof(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE, ___GestureErrorEvent_30)); }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * get_GestureErrorEvent_30() const { return ___GestureErrorEvent_30; }
	inline GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 ** get_address_of_GestureErrorEvent_30() { return &___GestureErrorEvent_30; }
	inline void set_GestureErrorEvent_30(GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * value)
	{
		___GestureErrorEvent_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GestureErrorEvent_30), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Input.GestureRecognizer
struct GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com
{
	intptr_t ___m_Recognizer_0;
	Il2CppMethodPointer ___HoldCanceled_1;
	Il2CppMethodPointer ___HoldCompleted_2;
	Il2CppMethodPointer ___HoldStarted_3;
	Il2CppMethodPointer ___Tapped_4;
	Il2CppMethodPointer ___ManipulationCanceled_5;
	Il2CppMethodPointer ___ManipulationCompleted_6;
	Il2CppMethodPointer ___ManipulationStarted_7;
	Il2CppMethodPointer ___ManipulationUpdated_8;
	Il2CppMethodPointer ___NavigationCanceled_9;
	Il2CppMethodPointer ___NavigationCompleted_10;
	Il2CppMethodPointer ___NavigationStarted_11;
	Il2CppMethodPointer ___NavigationUpdated_12;
	Il2CppMethodPointer ___RecognitionEnded_13;
	Il2CppMethodPointer ___RecognitionStarted_14;
	Il2CppMethodPointer ___GestureError_15;
	Il2CppMethodPointer ___HoldCanceledEvent_16;
	Il2CppMethodPointer ___HoldCompletedEvent_17;
	Il2CppMethodPointer ___HoldStartedEvent_18;
	Il2CppMethodPointer ___TappedEvent_19;
	Il2CppMethodPointer ___ManipulationCanceledEvent_20;
	Il2CppMethodPointer ___ManipulationCompletedEvent_21;
	Il2CppMethodPointer ___ManipulationStartedEvent_22;
	Il2CppMethodPointer ___ManipulationUpdatedEvent_23;
	Il2CppMethodPointer ___NavigationCanceledEvent_24;
	Il2CppMethodPointer ___NavigationCompletedEvent_25;
	Il2CppMethodPointer ___NavigationStartedEvent_26;
	Il2CppMethodPointer ___NavigationUpdatedEvent_27;
	Il2CppMethodPointer ___RecognitionEndedEvent_28;
	Il2CppMethodPointer ___RecognitionStartedEvent_29;
	Il2CppMethodPointer ___GestureErrorEvent_30;
};

// UnityEngine.XR.WSA.Input.GestureSettings
struct  GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.GestureSettings::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GestureSettings_t75803D4EC100BFFD3E80E60E6228FE13BC816F4A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionManager_EventType
struct  EventType_t9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager_EventType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(EventType_t9BDE5A5CA4F2A5DF83013032DAA8CAFB401AD80C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceFlags
struct  InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceFlags_tFEED23CE62EF1B04EEBB6C7DD1CA6921D73E9BBE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceHandedness
struct  InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceHandedness::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceHandedness_t10FDFBFAABBC3E04468D3AE77CE3614E7DD9308E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceKind
struct  InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceNode
struct  InteractionSourceNode_tDFA7A84A17C0FD283C5F95B52593026A7B436D18 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceNode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceNode_tDFA7A84A17C0FD283C5F95B52593026A7B436D18, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags
struct  InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePoseFlags_t46E1164F226BCDCDEAD84C338483E7A401794BA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy
struct  InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePositionAccuracy_t53AC6BBABBE0182903C6CA4529BD2FA3479276AD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePressType
struct  InteractionSourcePressType_tC4234E53B3E760D31EC9D35FF56FE667D33A182D 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourcePressType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourcePressType_tC4234E53B3E760D31EC9D35FF56FE667D33A182D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags
struct  InteractionSourceStateFlags_t44E9FA88305A647259525473BD922773CACB5905 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Input.InteractionSourceStateFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InteractionSourceStateFlags_t44E9FA88305A647259525473BD922773CACB5905, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct  WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Persistence.WorldAnchorStore::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields
{
public:
	// UnityEngine.XR.WSA.Persistence.WorldAnchorStore UnityEngine.XR.WSA.Persistence.WorldAnchorStore::s_Instance
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___s_Instance_1;

public:
	inline static int32_t get_offset_of_s_Instance_1() { return static_cast<int32_t>(offsetof(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields, ___s_Instance_1)); }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * get_s_Instance_1() const { return ___s_Instance_1; }
	inline WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 ** get_address_of_s_Instance_1() { return &___s_Instance_1; }
	inline void set_s_Instance_1(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * value)
	{
		___s_Instance_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Instance_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Persistence.WorldAnchorStore
struct WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.XR.WSA.PositionalLocatorState
struct  PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598 
{
public:
	// System.Int32 UnityEngine.XR.WSA.PositionalLocatorState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Sharing.SerializationCompletionReason
struct  SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987 
{
public:
	// System.Int32 UnityEngine.XR.WSA.Sharing.SerializationCompletionReason::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct  WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::m_NativePtr
	intptr_t ___m_NativePtr_0;

public:
	inline static int32_t get_offset_of_m_NativePtr_0() { return static_cast<int32_t>(offsetof(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96, ___m_NativePtr_0)); }
	inline intptr_t get_m_NativePtr_0() const { return ___m_NativePtr_0; }
	inline intptr_t* get_address_of_m_NativePtr_0() { return &___m_NativePtr_0; }
	inline void set_m_NativePtr_0(intptr_t value)
	{
		___m_NativePtr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke
{
	intptr_t ___m_NativePtr_0;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
struct WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com
{
	intptr_t ___m_NativePtr_0;
};

// UnityEngine.XR.WSA.SurfaceChange
struct  SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747 
{
public:
	// System.Int32 UnityEngine.XR.WSA.SurfaceChange::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.XR.WSA.SurfaceData
struct  SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 
{
public:
	// UnityEngine.XR.WSA.SurfaceId UnityEngine.XR.WSA.SurfaceData::id
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	// UnityEngine.MeshFilter UnityEngine.XR.WSA.SurfaceData::outputMesh
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.SurfaceData::outputAnchor
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	// UnityEngine.MeshCollider UnityEngine.XR.WSA.SurfaceData::outputCollider
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	// System.Single UnityEngine.XR.WSA.SurfaceData::trianglesPerCubicMeter
	float ___trianglesPerCubicMeter_4;
	// System.Boolean UnityEngine.XR.WSA.SurfaceData::bakeCollider
	bool ___bakeCollider_5;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___id_0)); }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  get_id_0() const { return ___id_0; }
	inline SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_outputMesh_1() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputMesh_1)); }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * get_outputMesh_1() const { return ___outputMesh_1; }
	inline MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 ** get_address_of_outputMesh_1() { return &___outputMesh_1; }
	inline void set_outputMesh_1(MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * value)
	{
		___outputMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_outputAnchor_2() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputAnchor_2)); }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * get_outputAnchor_2() const { return ___outputAnchor_2; }
	inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE ** get_address_of_outputAnchor_2() { return &___outputAnchor_2; }
	inline void set_outputAnchor_2(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * value)
	{
		___outputAnchor_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputAnchor_2), (void*)value);
	}

	inline static int32_t get_offset_of_outputCollider_3() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___outputCollider_3)); }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * get_outputCollider_3() const { return ___outputCollider_3; }
	inline MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE ** get_address_of_outputCollider_3() { return &___outputCollider_3; }
	inline void set_outputCollider_3(MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * value)
	{
		___outputCollider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___outputCollider_3), (void*)value);
	}

	inline static int32_t get_offset_of_trianglesPerCubicMeter_4() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___trianglesPerCubicMeter_4)); }
	inline float get_trianglesPerCubicMeter_4() const { return ___trianglesPerCubicMeter_4; }
	inline float* get_address_of_trianglesPerCubicMeter_4() { return &___trianglesPerCubicMeter_4; }
	inline void set_trianglesPerCubicMeter_4(float value)
	{
		___trianglesPerCubicMeter_4 = value;
	}

	inline static int32_t get_offset_of_bakeCollider_5() { return static_cast<int32_t>(offsetof(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66, ___bakeCollider_5)); }
	inline bool get_bakeCollider_5() const { return ___bakeCollider_5; }
	inline bool* get_address_of_bakeCollider_5() { return &___bakeCollider_5; }
	inline void set_bakeCollider_5(bool value)
	{
		___bakeCollider_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};
// Native definition for COM marshalling of UnityEngine.XR.WSA.SurfaceData
struct SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com
{
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___id_0;
	MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh_1;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor_2;
	MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider_3;
	float ___trianglesPerCubicMeter_4;
	int32_t ___bakeCollider_5;
};

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782  : public Exception_t
{
public:

public:
};


// UnityEngine.Component
struct  Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSource
struct  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 
{
public:
	// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::m_Id
	uint32_t ___m_Id_0;
	// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::m_SourceKind
	int32_t ___m_SourceKind_1;
	// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::m_Handedness
	int32_t ___m_Handedness_2;
	// UnityEngine.XR.WSA.Input.InteractionSourceFlags UnityEngine.XR.WSA.Input.InteractionSource::m_Flags
	int32_t ___m_Flags_3;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_VendorId
	uint16_t ___m_VendorId_4;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductId
	uint16_t ___m_ProductId_5;
	// System.UInt16 UnityEngine.XR.WSA.Input.InteractionSource::m_ProductVersion
	uint16_t ___m_ProductVersion_6;

public:
	inline static int32_t get_offset_of_m_Id_0() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Id_0)); }
	inline uint32_t get_m_Id_0() const { return ___m_Id_0; }
	inline uint32_t* get_address_of_m_Id_0() { return &___m_Id_0; }
	inline void set_m_Id_0(uint32_t value)
	{
		___m_Id_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceKind_1() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_SourceKind_1)); }
	inline int32_t get_m_SourceKind_1() const { return ___m_SourceKind_1; }
	inline int32_t* get_address_of_m_SourceKind_1() { return &___m_SourceKind_1; }
	inline void set_m_SourceKind_1(int32_t value)
	{
		___m_SourceKind_1 = value;
	}

	inline static int32_t get_offset_of_m_Handedness_2() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Handedness_2)); }
	inline int32_t get_m_Handedness_2() const { return ___m_Handedness_2; }
	inline int32_t* get_address_of_m_Handedness_2() { return &___m_Handedness_2; }
	inline void set_m_Handedness_2(int32_t value)
	{
		___m_Handedness_2 = value;
	}

	inline static int32_t get_offset_of_m_Flags_3() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_Flags_3)); }
	inline int32_t get_m_Flags_3() const { return ___m_Flags_3; }
	inline int32_t* get_address_of_m_Flags_3() { return &___m_Flags_3; }
	inline void set_m_Flags_3(int32_t value)
	{
		___m_Flags_3 = value;
	}

	inline static int32_t get_offset_of_m_VendorId_4() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_VendorId_4)); }
	inline uint16_t get_m_VendorId_4() const { return ___m_VendorId_4; }
	inline uint16_t* get_address_of_m_VendorId_4() { return &___m_VendorId_4; }
	inline void set_m_VendorId_4(uint16_t value)
	{
		___m_VendorId_4 = value;
	}

	inline static int32_t get_offset_of_m_ProductId_5() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductId_5)); }
	inline uint16_t get_m_ProductId_5() const { return ___m_ProductId_5; }
	inline uint16_t* get_address_of_m_ProductId_5() { return &___m_ProductId_5; }
	inline void set_m_ProductId_5(uint16_t value)
	{
		___m_ProductId_5 = value;
	}

	inline static int32_t get_offset_of_m_ProductVersion_6() { return static_cast<int32_t>(offsetof(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6, ___m_ProductVersion_6)); }
	inline uint16_t get_m_ProductVersion_6() const { return ___m_ProductVersion_6; }
	inline uint16_t* get_address_of_m_ProductVersion_6() { return &___m_ProductVersion_6; }
	inline void set_m_ProductVersion_6(uint16_t value)
	{
		___m_ProductVersion_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePose
struct  InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 
{
public:
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_GripRotation_0;
	// UnityEngine.Quaternion UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerRotation
	Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___m_PointerRotation_1;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_GripPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_GripPosition_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PointerPosition
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_PointerPosition_3;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Velocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_Velocity_4;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourcePose::m_AngularVelocity
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_AngularVelocity_5;
	// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::m_PositionAccuracy
	int32_t ___m_PositionAccuracy_6;
	// UnityEngine.XR.WSA.Input.InteractionSourcePoseFlags UnityEngine.XR.WSA.Input.InteractionSourcePose::m_Flags
	int32_t ___m_Flags_7;

public:
	inline static int32_t get_offset_of_m_GripRotation_0() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripRotation_0)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_GripRotation_0() const { return ___m_GripRotation_0; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_GripRotation_0() { return &___m_GripRotation_0; }
	inline void set_m_GripRotation_0(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_GripRotation_0 = value;
	}

	inline static int32_t get_offset_of_m_PointerRotation_1() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerRotation_1)); }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  get_m_PointerRotation_1() const { return ___m_PointerRotation_1; }
	inline Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * get_address_of_m_PointerRotation_1() { return &___m_PointerRotation_1; }
	inline void set_m_PointerRotation_1(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  value)
	{
		___m_PointerRotation_1 = value;
	}

	inline static int32_t get_offset_of_m_GripPosition_2() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_GripPosition_2)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_GripPosition_2() const { return ___m_GripPosition_2; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_GripPosition_2() { return &___m_GripPosition_2; }
	inline void set_m_GripPosition_2(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_GripPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PointerPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PointerPosition_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_PointerPosition_3() const { return ___m_PointerPosition_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_PointerPosition_3() { return &___m_PointerPosition_3; }
	inline void set_m_PointerPosition_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_PointerPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_4() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Velocity_4)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_Velocity_4() const { return ___m_Velocity_4; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_Velocity_4() { return &___m_Velocity_4; }
	inline void set_m_Velocity_4(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_Velocity_4 = value;
	}

	inline static int32_t get_offset_of_m_AngularVelocity_5() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_AngularVelocity_5)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_AngularVelocity_5() const { return ___m_AngularVelocity_5; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_AngularVelocity_5() { return &___m_AngularVelocity_5; }
	inline void set_m_AngularVelocity_5(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_AngularVelocity_5 = value;
	}

	inline static int32_t get_offset_of_m_PositionAccuracy_6() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_PositionAccuracy_6)); }
	inline int32_t get_m_PositionAccuracy_6() const { return ___m_PositionAccuracy_6; }
	inline int32_t* get_address_of_m_PositionAccuracy_6() { return &___m_PositionAccuracy_6; }
	inline void set_m_PositionAccuracy_6(int32_t value)
	{
		___m_PositionAccuracy_6 = value;
	}

	inline static int32_t get_offset_of_m_Flags_7() { return static_cast<int32_t>(offsetof(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73, ___m_Flags_7)); }
	inline int32_t get_m_Flags_7() const { return ___m_Flags_7; }
	inline int32_t* get_address_of_m_Flags_7() { return &___m_Flags_7; }
	inline void set_m_Flags_7(int32_t value)
	{
		___m_Flags_7 = value;
	}
};


// System.Action`1<System.String>
struct  Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>
struct  Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1  : public SystemException_t5380468142AA850BE4A341D7AF3EAB9C78746782
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.AsyncCallback
struct  AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>
struct  Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE 
{
public:
	// T System.Nullable`1::value
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE, ___value_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_value_0() const { return ___value_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Collider
struct  Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.MeshFilter
struct  MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate
struct  GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate
struct  HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate
struct  HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate
struct  HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate
struct  ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate
struct  ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate
struct  ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate
struct  ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate
struct  NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate
struct  NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate
struct  NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate
struct  NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate
struct  RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate
struct  RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate
struct  TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.HoldCanceledEventArgs
struct  HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.HoldCompletedEventArgs
struct  HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.HoldStartedEventArgs
struct  HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.HoldStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceProperties
struct  InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A 
{
public:
	// System.Double UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossRisk
	double ___m_SourceLossRisk_0;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourceLossMitigationDirection
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_SourceLossMitigationDirection_1;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.InteractionSourceProperties::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_2;

public:
	inline static int32_t get_offset_of_m_SourceLossRisk_0() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourceLossRisk_0)); }
	inline double get_m_SourceLossRisk_0() const { return ___m_SourceLossRisk_0; }
	inline double* get_address_of_m_SourceLossRisk_0() { return &___m_SourceLossRisk_0; }
	inline void set_m_SourceLossRisk_0(double value)
	{
		___m_SourceLossRisk_0 = value;
	}

	inline static int32_t get_offset_of_m_SourceLossMitigationDirection_1() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourceLossMitigationDirection_1)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_SourceLossMitigationDirection_1() const { return ___m_SourceLossMitigationDirection_1; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_SourceLossMitigationDirection_1() { return &___m_SourceLossMitigationDirection_1; }
	inline void set_m_SourceLossMitigationDirection_1(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_SourceLossMitigationDirection_1 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_2() { return static_cast<int32_t>(offsetof(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A, ___m_SourcePose_2)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_2() const { return ___m_SourcePose_2; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_2() { return &___m_SourcePose_2; }
	inline void set_m_SourcePose_2(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs
struct  ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs
struct  ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::m_CumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0, ___m_CumulativeDelta_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs
struct  ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs
struct  ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::m_CumulativeDelta
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_CumulativeDelta_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_CumulativeDelta_3() { return static_cast<int32_t>(offsetof(ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E, ___m_CumulativeDelta_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_CumulativeDelta_3() const { return ___m_CumulativeDelta_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_CumulativeDelta_3() { return &___m_CumulativeDelta_3; }
	inline void set_m_CumulativeDelta_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_CumulativeDelta_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs
struct  NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs
struct  NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationStartedEventArgs
struct  NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs
struct  NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::m_NormalizedOffset
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___m_NormalizedOffset_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_NormalizedOffset_3() { return static_cast<int32_t>(offsetof(NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA, ___m_NormalizedOffset_3)); }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  get_m_NormalizedOffset_3() const { return ___m_NormalizedOffset_3; }
	inline Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * get_address_of_m_NormalizedOffset_3() { return &___m_NormalizedOffset_3; }
	inline void set_m_NormalizedOffset_3(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  value)
	{
		___m_NormalizedOffset_3 = value;
	}
};


// UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs
struct  RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs
struct  RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}
};


// UnityEngine.XR.WSA.Input.TappedEventArgs
struct  TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.TappedEventArgs::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.TappedEventArgs::m_SourcePose
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___m_SourcePose_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.TappedEventArgs::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// System.Int32 UnityEngine.XR.WSA.Input.TappedEventArgs::m_TapCount
	int32_t ___m_TapCount_3;

public:
	inline static int32_t get_offset_of_m_Source_0() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_Source_0)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_0() const { return ___m_Source_0; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_0() { return &___m_Source_0; }
	inline void set_m_Source_0(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_0 = value;
	}

	inline static int32_t get_offset_of_m_SourcePose_1() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_SourcePose_1)); }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  get_m_SourcePose_1() const { return ___m_SourcePose_1; }
	inline InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * get_address_of_m_SourcePose_1() { return &___m_SourcePose_1; }
	inline void set_m_SourcePose_1(InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  value)
	{
		___m_SourcePose_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_3() { return static_cast<int32_t>(offsetof(TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6, ___m_TapCount_3)); }
	inline int32_t get_m_TapCount_3() const { return ___m_TapCount_3; }
	inline int32_t* get_address_of_m_TapCount_3() { return &___m_TapCount_3; }
	inline void set_m_TapCount_3(int32_t value)
	{
		___m_TapCount_3 = value;
	}
};


// UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate
struct  GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate
struct  DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate
struct  SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate
struct  SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate
struct  SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate
struct  SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldAnchor
struct  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE  : public Component_t05064EF382ABCAF4B8C94F8A350EA85184C26621
{
public:
	// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate UnityEngine.XR.WSA.WorldAnchor::OnTrackingChanged
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___OnTrackingChanged_4;

public:
	inline static int32_t get_offset_of_OnTrackingChanged_4() { return static_cast<int32_t>(offsetof(WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE, ___OnTrackingChanged_4)); }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * get_OnTrackingChanged_4() const { return ___OnTrackingChanged_4; }
	inline OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** get_address_of_OnTrackingChanged_4() { return &___OnTrackingChanged_4; }
	inline void set_OnTrackingChanged_4(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * value)
	{
		___OnTrackingChanged_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackingChanged_4), (void*)value);
	}
};


// UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate
struct  OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate
struct  OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>
struct  Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>
struct  Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>
struct  Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>
struct  Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>
struct  Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>
struct  Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>
struct  Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>
struct  Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>
struct  Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>
struct  Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>
struct  Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>
struct  Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>
struct  Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>
struct  Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD  : public ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1
{
public:

public:
};


// UnityEngine.MeshCollider
struct  MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE  : public Collider_t0FEEB36760860AD21B3B1F0509C365B393EC4BDF
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSourceState
struct  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceProperties UnityEngine.XR.WSA.Input.InteractionSourceState::m_Properties
	InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  ___m_Properties_0;
	// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.InteractionSourceState::m_Source
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___m_Source_1;
	// UnityEngine.Pose UnityEngine.XR.WSA.Input.InteractionSourceState::m_HeadPose
	Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___m_HeadPose_2;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_ThumbstickPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_ThumbstickPosition_3;
	// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::m_TouchpadPosition
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  ___m_TouchpadPosition_4;
	// System.Single UnityEngine.XR.WSA.Input.InteractionSourceState::m_SelectPressedAmount
	float ___m_SelectPressedAmount_5;
	// UnityEngine.XR.WSA.Input.InteractionSourceStateFlags UnityEngine.XR.WSA.Input.InteractionSourceState::m_Flags
	int32_t ___m_Flags_6;

public:
	inline static int32_t get_offset_of_m_Properties_0() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Properties_0)); }
	inline InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  get_m_Properties_0() const { return ___m_Properties_0; }
	inline InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A * get_address_of_m_Properties_0() { return &___m_Properties_0; }
	inline void set_m_Properties_0(InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A  value)
	{
		___m_Properties_0 = value;
	}

	inline static int32_t get_offset_of_m_Source_1() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Source_1)); }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  get_m_Source_1() const { return ___m_Source_1; }
	inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * get_address_of_m_Source_1() { return &___m_Source_1; }
	inline void set_m_Source_1(InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  value)
	{
		___m_Source_1 = value;
	}

	inline static int32_t get_offset_of_m_HeadPose_2() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_HeadPose_2)); }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  get_m_HeadPose_2() const { return ___m_HeadPose_2; }
	inline Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29 * get_address_of_m_HeadPose_2() { return &___m_HeadPose_2; }
	inline void set_m_HeadPose_2(Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  value)
	{
		___m_HeadPose_2 = value;
	}

	inline static int32_t get_offset_of_m_ThumbstickPosition_3() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_ThumbstickPosition_3)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_ThumbstickPosition_3() const { return ___m_ThumbstickPosition_3; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_ThumbstickPosition_3() { return &___m_ThumbstickPosition_3; }
	inline void set_m_ThumbstickPosition_3(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_ThumbstickPosition_3 = value;
	}

	inline static int32_t get_offset_of_m_TouchpadPosition_4() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_TouchpadPosition_4)); }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  get_m_TouchpadPosition_4() const { return ___m_TouchpadPosition_4; }
	inline Vector2_tA85D2DD88578276CA8A8796756458277E72D073D * get_address_of_m_TouchpadPosition_4() { return &___m_TouchpadPosition_4; }
	inline void set_m_TouchpadPosition_4(Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  value)
	{
		___m_TouchpadPosition_4 = value;
	}

	inline static int32_t get_offset_of_m_SelectPressedAmount_5() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_SelectPressedAmount_5)); }
	inline float get_m_SelectPressedAmount_5() const { return ___m_SelectPressedAmount_5; }
	inline float* get_address_of_m_SelectPressedAmount_5() { return &___m_SelectPressedAmount_5; }
	inline void set_m_SelectPressedAmount_5(float value)
	{
		___m_SelectPressedAmount_5 = value;
	}

	inline static int32_t get_offset_of_m_Flags_6() { return static_cast<int32_t>(offsetof(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250, ___m_Flags_6)); }
	inline int32_t get_m_Flags_6() const { return ___m_Flags_6; }
	inline int32_t* get_address_of_m_Flags_6() { return &___m_Flags_6; }
	inline void set_m_Flags_6(int32_t value)
	{
		___m_Flags_6 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler
struct  SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs
struct  InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs
struct  InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs
struct  InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs
struct  InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;
	// UnityEngine.XR.WSA.Input.InteractionSourcePressType UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::<pressType>k__BackingField
	int32_t ___U3CpressTypeU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CpressTypeU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943, ___U3CpressTypeU3Ek__BackingField_1)); }
	inline int32_t get_U3CpressTypeU3Ek__BackingField_1() const { return ___U3CpressTypeU3Ek__BackingField_1; }
	inline int32_t* get_address_of_U3CpressTypeU3Ek__BackingField_1() { return &___U3CpressTypeU3Ek__BackingField_1; }
	inline void set_U3CpressTypeU3Ek__BackingField_1(int32_t value)
	{
		___U3CpressTypeU3Ek__BackingField_1 = value;
	}
};


// UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs
struct  InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 
{
public:
	// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::<state>k__BackingField
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___U3CstateU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CstateU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5, ___U3CstateU3Ek__BackingField_0)); }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  get_U3CstateU3Ek__BackingField_0() const { return ___U3CstateU3Ek__BackingField_0; }
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * get_address_of_U3CstateU3Ek__BackingField_0() { return &___U3CstateU3Ek__BackingField_0; }
	inline void set_U3CstateU3Ek__BackingField_0(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		___U3CstateU3Ek__BackingField_0 = value;
	}
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>
struct  Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>
struct  Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>
struct  Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>
struct  Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7  : public MulticastDelegate_t
{
public:

public:
};


// System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>
struct  Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t * m_Items[1];

public:
	inline Delegate_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.XR.WSA.Input.InteractionSourceState[]
struct InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  m_Items[1];

public:
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};

IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled);
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled);
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled);

// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m8E7A9E8CF891528845C4B071CB8166DDB1A384B8_gshared (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_gshared (Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * __this, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_gshared (Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * __this, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_gshared (Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * __this, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_gshared (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_gshared (Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * __this, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_gshared (Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * __this, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_gshared (Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * __this, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_gshared (Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * __this, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_gshared (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * __this, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_gshared (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * __this, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_gshared (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * __this, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_gshared (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * __this, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_gshared (Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * __this, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_gshared (Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * __this, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_gshared (Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * __this, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_gshared (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * __this, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_gshared (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * __this, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_gshared (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * __this, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_gshared (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * __this, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  ___obj0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_gshared (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * __this, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  ___obj0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_gshared_inline (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method);
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_gshared (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared (Action_1_t551A279CEADCF6EEAE8FA2B1E1E757D0D15290D0 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.Vector3>::Clear()
inline void List_1_Clear_m8E7A9E8CF891528845C4B071CB8166DDB1A384B8 (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, const RuntimeMethod*))List_1_Clear_m8E7A9E8CF891528845C4B071CB8166DDB1A384B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Experimental.XR.Boundary::TryGetGeometryScriptingInternal(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Experimental.XR.Boundary/Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_TryGetGeometryScriptingInternal_m2434276A80D010D9F8635C808FBFEFB3E8B16A9F (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___geometry0, int32_t ___boundaryType1, const RuntimeMethod* method);
// UnityEngine.XR.WSA.HolographicStreamerConnectionState UnityEngine.XR.WSA.PerceptionRemoting::GetConnectionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerceptionRemoting_GetConnectionState_mFFF8B4E6DC4B520C4732C6002C28B5D31A5C3AC0 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFramePNV(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFramePNV_mEF1F40C81EDCB7FA993AECDC92EDF6380B296238 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFramePNV_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFramePNV_Injected_mB8C963F73B2382C6F822505B07FAD71E4D3DAF13 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___normal1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocity2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::Internal_Create(UnityEngine.XR.WSA.Input.GestureRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GestureRecognizer_Internal_Create_m9129CAF44B2E13C242676BAE5411E34C87071DB6 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * ___gestureRecognizer0, const RuntimeMethod* method);
// System.Delegate System.Delegate::Combine(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1 (Delegate_t * ___a0, Delegate_t * ___b1, const RuntimeMethod* method);
// System.Delegate System.Delegate::Remove(System.Delegate,System.Delegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t * Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D (Delegate_t * ___source0, Delegate_t * ___value1, const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Inequality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Void System.GC::SuppressFinalize(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425 (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Void System.Object::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_SetRecognizableGestures_Internal_mCC4360215E114FC39D35DE9104BE8BE9F74471D0 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, int32_t ___newMaskValue0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___rotation0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___point1, const RuntimeMethod* method);
// System.Void UnityEngine.Ray::.ctor(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B (Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___direction1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m1544130A1A2D9112BAE59903EFD5605AD96D5002 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4 (Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * __this, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *, HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 , const RuntimeMethod*))Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m6FA6CDA845F589846063D014356C1E0445320798 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8 (Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * __this, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *, HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 , const RuntimeMethod*))Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m504D569012750F2C63512FDB35614DF5ECDAF7FA (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4 (Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * __this, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *, HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 , const RuntimeMethod*))Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m02055A4BCAD7BCFD64AAB05FDFDCC6BD8E6F189B (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.TappedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * __this, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 *, TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6 , const RuntimeMethod*))Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_gshared)(__this, ___obj0, method);
}
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2 (const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m97FD70C68AE74FE5EB03D3B461F969F6E3E2C231 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802 (Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * __this, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *, ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 , const RuntimeMethod*))Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m93DD17C1359B1F4B931D2C4467D85716AD92A0F2 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3 (Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * __this, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *, ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 , const RuntimeMethod*))Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_mDA7BE6F4F51E1B0933EAD00C5555CDE8F4931450 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C (Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * __this, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *, ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 , const RuntimeMethod*))Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m39222E61BA5CE3B8EA1E3C892C4E399C641CED20 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694 (Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * __this, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *, ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E , const RuntimeMethod*))Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mE1BC888BB04B0915D6CFF1A94144D993CEF0FDB5 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * __this, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *, NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 , const RuntimeMethod*))Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_mE2C0283BE82345A791C543C8696BA5C2B462E1FD (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193 (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * __this, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *, NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 , const RuntimeMethod*))Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_mFD08DF0FF1C8B9E87D59C9BC0F03EBB998360EB9 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7 (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * __this, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *, NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 , const RuntimeMethod*))Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_mE6FB25850173B4E42B65D60F587A101CAA62C1C2 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * __this, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *, NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA , const RuntimeMethod*))Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_mCE7877BDB4BA9DDB85C2C2908FF33DFA38426063 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionEndedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567 (Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * __this, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 *, RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB , const RuntimeMethod*))Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_mAB4BFDD255D2CA76718D285598A6832631AA9BB4 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.RecognitionStartedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90 (Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * __this, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E *, RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65 , const RuntimeMethod*))Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer/GestureErrorDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m7474F967FEDDFC0FFEE7089771F3A4BC589FC0FF (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.GestureErrorEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676 (Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * __this, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B *, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C , const RuntimeMethod*))Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_gshared)(__this, ___obj0, method);
}
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldCanceledEventArgs_get_source_mF3BF722320B940DED8E7C5AFDDB3E41ECB6CE0AB (HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldCompletedEventArgs_get_source_m35EBCAA5098CAE91B570925FDDFE0945E3ADE06B (HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldStartedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldStartedEventArgs_get_source_m3EB096EBABF60A68C481565E0B7584EFCCDC1FA9 (HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager::GetCurrentReading_Internal(UnityEngine.XR.WSA.Input.InteractionSourceState[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_GetCurrentReading_Internal_m48B784A597B956AF326A4DCB9C00F2AACF4C62A7 (InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* ___sourceStates0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager::get_numSourceStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_get_numSourceStates_m32642E2341918DC9E426852639460D5D1BE66F53 (const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027 (intptr_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionManager/SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66 (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * __this, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *, InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 , const RuntimeMethod*))Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * __this, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *, InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC , const RuntimeMethod*))Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1 (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * __this, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *, InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 , const RuntimeMethod*))Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * __this, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *, InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B , const RuntimeMethod*))Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_gshared)(__this, ___obj0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>::Invoke(!0)
inline void Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93 (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * __this, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *, InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 , const RuntimeMethod*))Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_gshared)(__this, ___obj0, method);
}
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_HasValue()
inline bool Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_inline (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *, const RuntimeMethod*))Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_gshared_inline)(__this, method);
}
// !0 System.Nullable`1<UnityEngine.XR.WSA.Input.InteractionSource>::get_Value()
inline InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method)
{
	return ((  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  (*) (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *, const RuntimeMethod*))Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::get_kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::get_handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsPointing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240_inline (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceDetectedEventArgs_get_state_mECB260AB99B307205FE6ED0EFADD869AF464F083 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23_inline (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceLostEventArgs_get_state_m166EE2D5F8E5740573061893A34567D3B1CCFABC (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetPosition(UnityEngine.Vector3&,UnityEngine.XR.WSA.Input.InteractionSourceNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetPosition_m8097C4F7E532CFEF16C1209ECBD726CD2383A2E1 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, int32_t ___node1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetPosition_m3A15D0CA3302B8AFD9980AD7FBECB00331E7EA95 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetRotation(UnityEngine.Quaternion&,UnityEngine.XR.WSA.Input.InteractionSourceNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetRotation_m7FBD558BBB19BFC922164C573B69FFCE2B0B2502 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, int32_t ___node1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetVelocity_mCEF561CD9C3E56E6DCCF6199848F4CB2880A55F3 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocity0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetAngularVelocity_m7BD7D3F6AC10A4BC566795C77AAC5E1231CDCC5C (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocity0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::get_positionAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSourcePose_get_positionAccuracy_m70A8D959928335C46F41618032428DB6E2F4DAFB (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourcePressedEventArgs_get_state_m463C814A2D363BA0C18A946482EDF97C5AAE55C8 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceReleasedEventArgs_get_state_m43E770D02896B8DC6E969AE0AB890EBF93D466A8 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_anyPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_anyPressed_m5CFC063DB2914C3AD0120C76452CB5C249476743 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.InteractionSourceState::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  InteractionSourceState_get_source_m0EDD957DF0E8396F223E23778032A7FC4139D350 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.InteractionSourceState::get_sourcePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  InteractionSourceState_get_sourcePose_m653B59162C3830240CBE1C2234E0FBD3EA2AD463 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.XR.WSA.Input.InteractionSourceState::get_selectPressedAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InteractionSourceState_get_selectPressedAmount_m5CD838F1A2B21CD1442B9F985D58017817375BF8 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_selectPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_selectPressed_m0AF7BAA481FD0A7F9E2A7F73CAC2E40168C99509 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_menuPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_menuPressed_mD1CB5B712D260BFD669E9A4AF1F4D7AD37C79483 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_grasped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_grasped_mE161F22D75F179855AA1CD0C5C86414DAE9DCE89 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_touchpadTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_touchpadTouched_mA621B36F9AB0A6E81F43FD49512E0856F852A7F2 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_touchpadPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_touchpadPressed_mBB31FB102FFEECB1006F7EFF572EA9A2ADA0E64E (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::get_touchpadPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InteractionSourceState_get_touchpadPosition_m28CD116270C462C7EFA9E7D9B66F824FB1280333 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::get_thumbstickPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InteractionSourceState_get_thumbstickPosition_mEC9C7A8379FA3DDE6D5B49EE9F928809895EE1F0 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_thumbstickPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_thumbstickPressed_m1728B9C6F1366D119F8704B05CBF065C1E90A729 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6_inline (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceUpdatedEventArgs_get_state_mA57E2786569D9E072BC5F4CFEE412FF5447C1FED (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationCanceledEventArgs_get_source_m6ACFFD28C36AF95DA8A57CF61EC9958C55EB1CF8 (ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationCompletedEventArgs_get_source_m5208494DB5146AA1B33B9A30FDCED4FEB9339C9A (ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::get_cumulativeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManipulationCompletedEventArgs_get_cumulativeDelta_m1607E642803A456ACC1A6EE924621DB7FB1C304F (ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationStartedEventArgs_get_source_mD4C70DBE61A0FD2C6F33FDFEA7B38D1C57C67CBE (ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationUpdatedEventArgs_get_source_mDEB43B119C0FE505A8888A6FE6197EE30D96E84D (ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::get_cumulativeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManipulationUpdatedEventArgs_get_cumulativeDelta_mA5AEB40040097B0BD134705DC04E0590AB669A1D (ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationCanceledEventArgs_get_source_m3ADA49133856959A797AA1C469372066C487AA77 (NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationCompletedEventArgs_get_source_mCC32DB094E5EAFCB3B3BDF483149B80E530EBE86 (NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::get_normalizedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavigationCompletedEventArgs_get_normalizedOffset_m30141A58DAFF5B187E679D3012210B489067D555 (NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationStartedEventArgs_get_source_mD608B310133B71E49F7F2BEF116B37B109EB3FEA (NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 * __this, const RuntimeMethod* method);
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationUpdatedEventArgs_get_source_mD7ED4880FF2CFC565EC5C7DE47DE5A5975BB5312 (NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::get_normalizedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavigationUpdatedEventArgs_get_normalizedOffset_m63EFB136CBEC39D4BC004FC814B93FBA69760C02 (NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m4DF685AABA65DC8D46F48F81BFEAEB50B2652EB8 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::GetAsync_Internal(UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_GetAsync_Internal_m11A3B0D2405C406330613A3070E24861D4D461C7 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * ___onCompleted0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m1EE05390756C0AE0F0100507693CE33C8A940E99 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229 (String_t* ___value0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8 (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Save_Interal(System.String,UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Save_Interal_mD1E6C9086BBA8CEBC602159899DB7754699633FF (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___anchor1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971 (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mE03C66715289D7957CA068A675826B7EE0887BE3_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.XR.WSA.WorldAnchor>()
inline WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * __this, const RuntimeMethod* method)
{
	return ((  WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * (*) (GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mE053F7A95F30AFF07D69F0DED3DA13AE2EC25E03_gshared)(__this, method);
}
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Load_Internal(System.String,UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Load_Internal_mC35FEA0AE303C1A1AD2CDB7ACF829195E6FAFA66 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___anchor1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Delete_Internal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Delete_Internal_mF6168B72EED5094D0A06010DE06957C6DA244BE2 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationDataAvailableDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m0250571900E492139B5293224D54EF8998AE72E8 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m9E8772EC4D698829FB563E7F98627921203146C3 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch/DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_m4F01EB16C52D539B2A87C14D802F01325FC580A2 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceData::.ctor(UnityEngine.XR.WSA.SurfaceId,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceData__ctor_m24E7791EAA183D5E759CE6FC52F75BB5942D96E5 (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ____id0, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ____outputMesh1, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ____outputAnchor2, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ____outputCollider3, float ____trianglesPerCubicMeter4, bool ____bakeCollider5, const RuntimeMethod* method);
// System.Int32 UnityEngine.XR.WSA.SurfaceObserver::Internal_Create(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceObserver_Internal_Create_mB0E5B8A9F7755986FF30A0B65F8EFD4B09A7359E (RuntimeObject * ___surfaceObserver0, const RuntimeMethod* method);
// System.DateTime System.DateTime::FromFileTime(System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676 (int64_t ___fileTime0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_mB275AE4804E6939E7B55AF0F3932913ED3A5D4B6 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m4DFF327EC78483BEA7B886E4F923A375D28A4CC4 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_Destroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_Destroy_m2BE7440990C62850652E1879161A97520E444167 (int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsAxisAlignedBox(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_m0639F6C302B36414566BE2B5292D9864BCB3673A (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_DestroyThreaded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_DestroyThreaded_m189694A74E59D94F7144534E20715525892F9C40 (int32_t ___id0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsAxisAlignedBox_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_Injected_m7832A440E460633A2422F75F9879E283A8586F8E (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___extents2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsSphere(System.Int32,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsSphere_mFEDC531C9CB6E1A7A0653B113C737EC9B54FE9CF (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin1, float ___radiusMeters2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsSphere_Injected(System.Int32,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsSphere_Injected_mDACCD6023666C1ABF0947C50838721DA845AD00E (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin1, float ___radiusMeters2, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsOrientedBox(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsOrientedBox_m18374E7899FFDA9208048C4A9585E29111BB3CB2 (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsOrientedBox_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsOrientedBox_Injected_mE9A469FCB802B10E720F03D2CAC316ED19E32334 (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___extents2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___orientation3, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_Update(System.Int32,UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_Update_m089AA2B7B74D2AD823A3667954444B5EA2D1FF8C (int32_t ___id0, SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged1, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.WSA.SurfaceObserver::Internal_AddToWorkQueue(System.Int32,UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceObserver_Internal_AddToWorkQueue_mA53AA2E479B092B14AE8B26B05D2E18197CE445D (int32_t ___observer0, SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady1, int32_t ___surfaceId2, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___filter3, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___wa4, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___mc5, float ___trisPerCubicMeter6, bool ___createColliderData7, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldAnchor/OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.WSA.WorldManager/OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_mCA5DBD7DB392BB9F22AF98FB50EB570B6A26AA1F (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method);
// System.Void System.Action`1<System.String>::Invoke(!0)
inline void Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * __this, String_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *, String_t*, const RuntimeMethod*))Action_1_Invoke_mB86FC1B303E77C41ED0E94FC3592A9CF8DA571D5_gshared)(__this, ___obj0, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.Experimental.XR.Boundary::set_visible(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50 (bool ___value0, const RuntimeMethod* method)
{
	typedef void (*Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50_ftn) (bool);
	static Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Boundary_set_visible_m02D4A783411F0DC2C2794B45EB8015CA0A447D50_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.Boundary::set_visible(System.Boolean)");
	_il2cpp_icall_func(___value0);
}
// System.Boolean UnityEngine.Experimental.XR.Boundary::TryGetGeometry(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Experimental.XR.Boundary_Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___geometry0, int32_t ___boundaryType1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_0 = ___geometry0;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralFF63FAC4076C9D27B0D6EA9F35D626E26F89DE05, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, Boundary_TryGetGeometry_mE516ABC521F94493B6D911938A953FBF44CC8B0F_RuntimeMethod_var);
	}

IL_0013:
	{
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_2 = ___geometry0;
		NullCheck(L_2);
		List_1_Clear_m8E7A9E8CF891528845C4B071CB8166DDB1A384B8(L_2, /*hidden argument*/List_1_Clear_m8E7A9E8CF891528845C4B071CB8166DDB1A384B8_RuntimeMethod_var);
		List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * L_3 = ___geometry0;
		int32_t L_4 = ___boundaryType1;
		bool L_5 = Boundary_TryGetGeometryScriptingInternal_m2434276A80D010D9F8635C808FBFEFB3E8B16A9F(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		goto IL_0026;
	}

IL_0026:
	{
		bool L_6 = V_0;
		return L_6;
	}
}
// System.Boolean UnityEngine.Experimental.XR.Boundary::TryGetGeometryScriptingInternal(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Experimental.XR.Boundary_Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Boundary_TryGetGeometryScriptingInternal_m2434276A80D010D9F8635C808FBFEFB3E8B16A9F (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 * ___geometry0, int32_t ___boundaryType1, const RuntimeMethod* method)
{
	typedef bool (*Boundary_TryGetGeometryScriptingInternal_m2434276A80D010D9F8635C808FBFEFB3E8B16A9F_ftn) (List_1_tFCCBEDAA56D8F7598520FB136A9F8D713033D6B5 *, int32_t);
	static Boundary_TryGetGeometryScriptingInternal_m2434276A80D010D9F8635C808FBFEFB3E8B16A9F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (Boundary_TryGetGeometryScriptingInternal_m2434276A80D010D9F8635C808FBFEFB3E8B16A9F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.Experimental.XR.Boundary::TryGetGeometryScriptingInternal(System.Collections.Generic.List`1<UnityEngine.Vector3>,UnityEngine.Experimental.XR.Boundary/Type)");
	bool retVal = _il2cpp_icall_func(___geometry0, ___boundaryType1);
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.HolographicStreamerConnectionState UnityEngine.XR.WSA.HolographicRemoting::get_ConnectionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HolographicRemoting_get_ConnectionState_m158D2E77D96333E01E62C7658420646504FDCB90 (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = PerceptionRemoting_GetConnectionState_mFFF8B4E6DC4B520C4732C6002C28B5D31A5C3AC0(/*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_1 = V_0;
		return L_1;
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
// System.Void UnityEngine.XR.WSA.HolographicSettings::SetFocusPointForFrame(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_SetFocusPointForFrame_m13F3EFC8D2993A8266960511A4F869F91C0CC0A4 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity2, const RuntimeMethod* method)
{
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = ___position0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = ___normal1;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___velocity2;
		HolographicSettings_InternalSetFocusPointForFramePNV_mEF1F40C81EDCB7FA993AECDC92EDF6380B296238(L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFramePNV(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFramePNV_mEF1F40C81EDCB7FA993AECDC92EDF6380B296238 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normal1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___velocity2, const RuntimeMethod* method)
{
	{
		HolographicSettings_InternalSetFocusPointForFramePNV_Injected_mB8C963F73B2382C6F822505B07FAD71E4D3DAF13((Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___position0), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___normal1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___velocity2), /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.HolographicSettings::get_IsDisplayOpaque()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418 (const RuntimeMethod* method)
{
	typedef bool (*HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418_ftn) ();
	static HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HolographicSettings_get_IsDisplayOpaque_m1195AD8CB69591E29DEE780894136EEEA7D7A418_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.HolographicSettings::get_IsDisplayOpaque()");
	bool retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFramePNV_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HolographicSettings_InternalSetFocusPointForFramePNV_Injected_mB8C963F73B2382C6F822505B07FAD71E4D3DAF13 (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___normal1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocity2, const RuntimeMethod* method)
{
	typedef void (*HolographicSettings_InternalSetFocusPointForFramePNV_Injected_mB8C963F73B2382C6F822505B07FAD71E4D3DAF13_ftn) (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static HolographicSettings_InternalSetFocusPointForFramePNV_Injected_mB8C963F73B2382C6F822505B07FAD71E4D3DAF13_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (HolographicSettings_InternalSetFocusPointForFramePNV_Injected_mB8C963F73B2382C6F822505B07FAD71E4D3DAF13_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.HolographicSettings::InternalSetFocusPointForFramePNV_Injected(UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___position0, ___normal1, ___velocity2);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_string(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke_back(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_string_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_pinvoke_cleanup(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled)
{
	marshaled.___U3CerrorU3Ek__BackingField_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_U3CerrorU3Ek__BackingField_0());
	marshaled.___U3ChresultU3Ek__BackingField_1 = unmarshaled.get_U3ChresultU3Ek__BackingField_1();
}
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com_back(const GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled, GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C& unmarshaled)
{
	unmarshaled.set_U3CerrorU3Ek__BackingField_0(il2cpp_codegen_marshal_bstring_result(marshaled.___U3CerrorU3Ek__BackingField_0));
	int32_t unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = 0;
	unmarshaled_U3ChresultU3Ek__BackingField_temp_1 = marshaled.___U3ChresultU3Ek__BackingField_1;
	unmarshaled.set_U3ChresultU3Ek__BackingField_1(unmarshaled_U3ChresultU3Ek__BackingField_temp_1);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureErrorEventArgs
IL2CPP_EXTERN_C void GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshal_com_cleanup(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___U3CerrorU3Ek__BackingField_0);
	marshaled.___U3CerrorU3Ek__BackingField_0 = NULL;
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C ));
		String_t* L_0 = ___error0;
		GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32_inline((GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___hresult1;
		GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF_inline((GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9_AdjustorThunk (RuntimeObject * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + 1);
	GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9(_thisAdjusted, ___error0, ___hresult1, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_error(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32 (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32_AdjustorThunk (RuntimeObject * __this, String_t* ___value0, const RuntimeMethod* method)
{
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + 1);
	GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.GestureErrorEventArgs::set_hresult(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * _thisAdjusted = reinterpret_cast<GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C *>(__this + 1);
	GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke_back(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset((&unmarshaled_m_Recognizer_temp_0), 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B>(marshaled.___HoldCanceled_1, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0>(marshaled.___HoldCompleted_2, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E>(marshaled.___HoldStarted_3, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12>(marshaled.___Tapped_4, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E>(marshaled.___ManipulationCanceled_5, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F>(marshaled.___ManipulationCompleted_6, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E>(marshaled.___ManipulationStarted_7, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC>(marshaled.___ManipulationUpdated_8, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B>(marshaled.___NavigationCanceled_9, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1>(marshaled.___NavigationCompleted_10, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E>(marshaled.___NavigationStarted_11, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C>(marshaled.___NavigationUpdated_12, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7>(marshaled.___RecognitionEnded_13, Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E>(marshaled.___RecognitionStarted_14, Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B>(marshaled.___GestureError_15, Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F>(marshaled.___TappedEvent_19, TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_pinvoke_cleanup(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled)
{
	marshaled.___m_Recognizer_0 = unmarshaled.get_m_Recognizer_0();
	marshaled.___HoldCanceled_1 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceled_1()));
	marshaled.___HoldCompleted_2 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompleted_2()));
	marshaled.___HoldStarted_3 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStarted_3()));
	marshaled.___Tapped_4 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_Tapped_4()));
	marshaled.___ManipulationCanceled_5 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceled_5()));
	marshaled.___ManipulationCompleted_6 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompleted_6()));
	marshaled.___ManipulationStarted_7 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStarted_7()));
	marshaled.___ManipulationUpdated_8 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdated_8()));
	marshaled.___NavigationCanceled_9 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceled_9()));
	marshaled.___NavigationCompleted_10 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompleted_10()));
	marshaled.___NavigationStarted_11 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStarted_11()));
	marshaled.___NavigationUpdated_12 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdated_12()));
	marshaled.___RecognitionEnded_13 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEnded_13()));
	marshaled.___RecognitionStarted_14 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStarted_14()));
	marshaled.___GestureError_15 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureError_15()));
	marshaled.___HoldCanceledEvent_16 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCanceledEvent_16()));
	marshaled.___HoldCompletedEvent_17 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldCompletedEvent_17()));
	marshaled.___HoldStartedEvent_18 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_HoldStartedEvent_18()));
	marshaled.___TappedEvent_19 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_TappedEvent_19()));
	marshaled.___ManipulationCanceledEvent_20 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCanceledEvent_20()));
	marshaled.___ManipulationCompletedEvent_21 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationCompletedEvent_21()));
	marshaled.___ManipulationStartedEvent_22 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationStartedEvent_22()));
	marshaled.___ManipulationUpdatedEvent_23 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_ManipulationUpdatedEvent_23()));
	marshaled.___NavigationCanceledEvent_24 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCanceledEvent_24()));
	marshaled.___NavigationCompletedEvent_25 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationCompletedEvent_25()));
	marshaled.___NavigationStartedEvent_26 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationStartedEvent_26()));
	marshaled.___NavigationUpdatedEvent_27 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_NavigationUpdatedEvent_27()));
	marshaled.___RecognitionEndedEvent_28 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionEndedEvent_28()));
	marshaled.___RecognitionStartedEvent_29 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_RecognitionStartedEvent_29()));
	marshaled.___GestureErrorEvent_30 = il2cpp_codegen_marshal_delegate(reinterpret_cast<MulticastDelegate_t*>(unmarshaled.get_GestureErrorEvent_30()));
}
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com_back(const GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled, GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t unmarshaled_m_Recognizer_temp_0;
	memset((&unmarshaled_m_Recognizer_temp_0), 0, sizeof(unmarshaled_m_Recognizer_temp_0));
	unmarshaled_m_Recognizer_temp_0 = marshaled.___m_Recognizer_0;
	unmarshaled.set_m_Recognizer_0(unmarshaled_m_Recognizer_temp_0);
	unmarshaled.set_HoldCanceled_1(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B>(marshaled.___HoldCanceled_1, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompleted_2(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0>(marshaled.___HoldCompleted_2, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStarted_3(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E>(marshaled.___HoldStarted_3, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var));
	unmarshaled.set_Tapped_4(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12>(marshaled.___Tapped_4, Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceled_5(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E>(marshaled.___ManipulationCanceled_5, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompleted_6(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F>(marshaled.___ManipulationCompleted_6, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStarted_7(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E>(marshaled.___ManipulationStarted_7, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdated_8(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC>(marshaled.___ManipulationUpdated_8, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceled_9(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B>(marshaled.___NavigationCanceled_9, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompleted_10(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1>(marshaled.___NavigationCompleted_10, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStarted_11(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E>(marshaled.___NavigationStarted_11, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdated_12(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C>(marshaled.___NavigationUpdated_12, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEnded_13(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7>(marshaled.___RecognitionEnded_13, Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStarted_14(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E>(marshaled.___RecognitionStarted_14, Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureError_15(il2cpp_codegen_marshal_function_ptr_to_delegate<Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B>(marshaled.___GestureError_15, Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCanceledEvent_16(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2>(marshaled.___HoldCanceledEvent_16, HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldCompletedEvent_17(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A>(marshaled.___HoldCompletedEvent_17, HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A_il2cpp_TypeInfo_var));
	unmarshaled.set_HoldStartedEvent_18(il2cpp_codegen_marshal_function_ptr_to_delegate<HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2>(marshaled.___HoldStartedEvent_18, HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2_il2cpp_TypeInfo_var));
	unmarshaled.set_TappedEvent_19(il2cpp_codegen_marshal_function_ptr_to_delegate<TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F>(marshaled.___TappedEvent_19, TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCanceledEvent_20(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917>(marshaled.___ManipulationCanceledEvent_20, ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationCompletedEvent_21(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4>(marshaled.___ManipulationCompletedEvent_21, ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationStartedEvent_22(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0>(marshaled.___ManipulationStartedEvent_22, ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0_il2cpp_TypeInfo_var));
	unmarshaled.set_ManipulationUpdatedEvent_23(il2cpp_codegen_marshal_function_ptr_to_delegate<ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406>(marshaled.___ManipulationUpdatedEvent_23, ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCanceledEvent_24(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954>(marshaled.___NavigationCanceledEvent_24, NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationCompletedEvent_25(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3>(marshaled.___NavigationCompletedEvent_25, NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationStartedEvent_26(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF>(marshaled.___NavigationStartedEvent_26, NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF_il2cpp_TypeInfo_var));
	unmarshaled.set_NavigationUpdatedEvent_27(il2cpp_codegen_marshal_function_ptr_to_delegate<NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A>(marshaled.___NavigationUpdatedEvent_27, NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionEndedEvent_28(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B>(marshaled.___RecognitionEndedEvent_28, RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B_il2cpp_TypeInfo_var));
	unmarshaled.set_RecognitionStartedEvent_29(il2cpp_codegen_marshal_function_ptr_to_delegate<RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214>(marshaled.___RecognitionStartedEvent_29, RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214_il2cpp_TypeInfo_var));
	unmarshaled.set_GestureErrorEvent_30(il2cpp_codegen_marshal_function_ptr_to_delegate<GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084>(marshaled.___GestureErrorEvent_30, GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084_il2cpp_TypeInfo_var));
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Input.GestureRecognizer
IL2CPP_EXTERN_C void GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshal_com_cleanup(GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer__ctor_m4EC0013B225C0189D0ACB2DC77092C809764F1D5 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = GestureRecognizer_Internal_Create_m9129CAF44B2E13C242676BAE5411E34C87071DB6(__this, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_HoldCanceled(System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_HoldCanceled_m5A87948716C042D2BB2F9A44B08375917778837F (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_HoldCanceled_m5A87948716C042D2BB2F9A44B08375917778837F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * V_0 = NULL;
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * V_1 = NULL;
	{
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_0 = __this->get_HoldCanceled_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B ** L_2 = __this->get_address_of_HoldCanceled_1();
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_3 = V_1;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_6 = V_0;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_7 = InterlockedCompareExchangeImpl<Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *>((Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B **)L_2, ((Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *)CastclassSealed((RuntimeObject*)L_5, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_8 = V_0;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *)L_8) == ((RuntimeObject*)(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_HoldCanceled(System.Action`1<UnityEngine.XR.WSA.Input.HoldCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_HoldCanceled_m276406624CF43814FBD0B59FC280721F9894A15E (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_HoldCanceled_m276406624CF43814FBD0B59FC280721F9894A15E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * V_0 = NULL;
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * V_1 = NULL;
	{
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_0 = __this->get_HoldCanceled_1();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B ** L_2 = __this->get_address_of_HoldCanceled_1();
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_3 = V_1;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_6 = V_0;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_7 = InterlockedCompareExchangeImpl<Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *>((Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B **)L_2, ((Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *)CastclassSealed((RuntimeObject*)L_5, Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_8 = V_0;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *)L_8) == ((RuntimeObject*)(Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_HoldCompleted(System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_HoldCompleted_mA5291F27BFBB960389A3EECB87E2B3872D6D739C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_HoldCompleted_mA5291F27BFBB960389A3EECB87E2B3872D6D739C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * V_0 = NULL;
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * V_1 = NULL;
	{
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_0 = __this->get_HoldCompleted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 ** L_2 = __this->get_address_of_HoldCompleted_2();
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_3 = V_1;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_6 = V_0;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_7 = InterlockedCompareExchangeImpl<Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *>((Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 **)L_2, ((Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *)CastclassSealed((RuntimeObject*)L_5, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_8 = V_0;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *)L_8) == ((RuntimeObject*)(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_HoldCompleted(System.Action`1<UnityEngine.XR.WSA.Input.HoldCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_HoldCompleted_mAF760AB2059BE3437C0B7325162997ED050C3826 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_HoldCompleted_mAF760AB2059BE3437C0B7325162997ED050C3826_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * V_0 = NULL;
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * V_1 = NULL;
	{
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_0 = __this->get_HoldCompleted_2();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_1 = V_0;
		V_1 = L_1;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 ** L_2 = __this->get_address_of_HoldCompleted_2();
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_3 = V_1;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_6 = V_0;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_7 = InterlockedCompareExchangeImpl<Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *>((Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 **)L_2, ((Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *)CastclassSealed((RuntimeObject*)L_5, Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_8 = V_0;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *)L_8) == ((RuntimeObject*)(Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_HoldStarted(System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_HoldStarted_m63AE621FB2C0A905E85FA0C360D56D13DF38DC2D (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_HoldStarted_m63AE621FB2C0A905E85FA0C360D56D13DF38DC2D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * V_0 = NULL;
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * V_1 = NULL;
	{
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_0 = __this->get_HoldStarted_3();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E ** L_2 = __this->get_address_of_HoldStarted_3();
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_3 = V_1;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_6 = V_0;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_7 = InterlockedCompareExchangeImpl<Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *>((Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E **)L_2, ((Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *)CastclassSealed((RuntimeObject*)L_5, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_8 = V_0;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *)L_8) == ((RuntimeObject*)(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_HoldStarted(System.Action`1<UnityEngine.XR.WSA.Input.HoldStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_HoldStarted_m959F935D157277CFFD2CC9EE6135EFD8F9819CB4 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_HoldStarted_m959F935D157277CFFD2CC9EE6135EFD8F9819CB4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * V_0 = NULL;
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * V_1 = NULL;
	{
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_0 = __this->get_HoldStarted_3();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E ** L_2 = __this->get_address_of_HoldStarted_3();
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_3 = V_1;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_6 = V_0;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_7 = InterlockedCompareExchangeImpl<Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *>((Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E **)L_2, ((Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *)CastclassSealed((RuntimeObject*)L_5, Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_8 = V_0;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *)L_8) == ((RuntimeObject*)(Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_ManipulationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_ManipulationCanceled_mDC5F6FBDEBE51806558745786C7E92A3F2130613 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_ManipulationCanceled_mDC5F6FBDEBE51806558745786C7E92A3F2130613_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * V_0 = NULL;
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * V_1 = NULL;
	{
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_0 = __this->get_ManipulationCanceled_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_1 = V_0;
		V_1 = L_1;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E ** L_2 = __this->get_address_of_ManipulationCanceled_5();
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_3 = V_1;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_6 = V_0;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_7 = InterlockedCompareExchangeImpl<Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *>((Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E **)L_2, ((Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *)CastclassSealed((RuntimeObject*)L_5, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_8 = V_0;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *)L_8) == ((RuntimeObject*)(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_ManipulationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_ManipulationCanceled_m04F450DB730372FD72DFD1A00C41ADBBBA61C84A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_ManipulationCanceled_m04F450DB730372FD72DFD1A00C41ADBBBA61C84A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * V_0 = NULL;
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * V_1 = NULL;
	{
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_0 = __this->get_ManipulationCanceled_5();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_1 = V_0;
		V_1 = L_1;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E ** L_2 = __this->get_address_of_ManipulationCanceled_5();
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_3 = V_1;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_6 = V_0;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_7 = InterlockedCompareExchangeImpl<Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *>((Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E **)L_2, ((Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *)CastclassSealed((RuntimeObject*)L_5, Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_8 = V_0;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *)L_8) == ((RuntimeObject*)(Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_ManipulationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_ManipulationCompleted_m48AF8AC88D59119C6DB8D8020A836FDD904BD206 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_ManipulationCompleted_m48AF8AC88D59119C6DB8D8020A836FDD904BD206_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * V_0 = NULL;
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * V_1 = NULL;
	{
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_0 = __this->get_ManipulationCompleted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_1 = V_0;
		V_1 = L_1;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F ** L_2 = __this->get_address_of_ManipulationCompleted_6();
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_3 = V_1;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_6 = V_0;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_7 = InterlockedCompareExchangeImpl<Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *>((Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F **)L_2, ((Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *)CastclassSealed((RuntimeObject*)L_5, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_8 = V_0;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *)L_8) == ((RuntimeObject*)(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_ManipulationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_ManipulationCompleted_m2B6906DB3B85815143D01DFEB39F773FFE37F4BE (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_ManipulationCompleted_m2B6906DB3B85815143D01DFEB39F773FFE37F4BE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * V_0 = NULL;
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * V_1 = NULL;
	{
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_0 = __this->get_ManipulationCompleted_6();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_1 = V_0;
		V_1 = L_1;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F ** L_2 = __this->get_address_of_ManipulationCompleted_6();
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_3 = V_1;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_6 = V_0;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_7 = InterlockedCompareExchangeImpl<Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *>((Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F **)L_2, ((Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *)CastclassSealed((RuntimeObject*)L_5, Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_8 = V_0;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *)L_8) == ((RuntimeObject*)(Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_ManipulationStarted(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_ManipulationStarted_m7CA028E7917CCA101EFF363042839CAED337600F (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_ManipulationStarted_m7CA028E7917CCA101EFF363042839CAED337600F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * V_0 = NULL;
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * V_1 = NULL;
	{
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_0 = __this->get_ManipulationStarted_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E ** L_2 = __this->get_address_of_ManipulationStarted_7();
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_3 = V_1;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_6 = V_0;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_7 = InterlockedCompareExchangeImpl<Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *>((Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E **)L_2, ((Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *)CastclassSealed((RuntimeObject*)L_5, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_8 = V_0;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *)L_8) == ((RuntimeObject*)(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_ManipulationStarted(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_ManipulationStarted_m66091D9AE58412D14BEC69511E5DD91B5BAEED47 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_ManipulationStarted_m66091D9AE58412D14BEC69511E5DD91B5BAEED47_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * V_0 = NULL;
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * V_1 = NULL;
	{
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_0 = __this->get_ManipulationStarted_7();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E ** L_2 = __this->get_address_of_ManipulationStarted_7();
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_3 = V_1;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_6 = V_0;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_7 = InterlockedCompareExchangeImpl<Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *>((Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E **)L_2, ((Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *)CastclassSealed((RuntimeObject*)L_5, Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_8 = V_0;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *)L_8) == ((RuntimeObject*)(Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_ManipulationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_ManipulationUpdated_m90FA808402EA799AD23A3A82EC8C2CB9F087907D (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_ManipulationUpdated_m90FA808402EA799AD23A3A82EC8C2CB9F087907D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * V_0 = NULL;
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * V_1 = NULL;
	{
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_0 = __this->get_ManipulationUpdated_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC ** L_2 = __this->get_address_of_ManipulationUpdated_8();
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_3 = V_1;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_6 = V_0;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_7 = InterlockedCompareExchangeImpl<Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *>((Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC **)L_2, ((Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *)CastclassSealed((RuntimeObject*)L_5, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_8 = V_0;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *)L_8) == ((RuntimeObject*)(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_ManipulationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_ManipulationUpdated_mB8C6A79B4B42228B1FAEB41B590E59784F15AC14 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_ManipulationUpdated_mB8C6A79B4B42228B1FAEB41B590E59784F15AC14_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * V_0 = NULL;
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * V_1 = NULL;
	{
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_0 = __this->get_ManipulationUpdated_8();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_1 = V_0;
		V_1 = L_1;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC ** L_2 = __this->get_address_of_ManipulationUpdated_8();
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_3 = V_1;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_6 = V_0;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_7 = InterlockedCompareExchangeImpl<Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *>((Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC **)L_2, ((Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *)CastclassSealed((RuntimeObject*)L_5, Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_8 = V_0;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *)L_8) == ((RuntimeObject*)(Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationCanceled_m457599DCA92748E915C75C3D858C757D21C5FD4B (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_NavigationCanceled_m457599DCA92748E915C75C3D858C757D21C5FD4B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * V_0 = NULL;
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * V_1 = NULL;
	{
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_0 = __this->get_NavigationCanceled_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B ** L_2 = __this->get_address_of_NavigationCanceled_9();
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_3 = V_1;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_6 = V_0;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_7 = InterlockedCompareExchangeImpl<Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *>((Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B **)L_2, ((Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)CastclassSealed((RuntimeObject*)L_5, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_8 = V_0;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)L_8) == ((RuntimeObject*)(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationCanceled(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationCanceled_m7F24255B9515ACE9F80A55864A9923D085ED5E32 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_NavigationCanceled_m7F24255B9515ACE9F80A55864A9923D085ED5E32_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * V_0 = NULL;
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * V_1 = NULL;
	{
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_0 = __this->get_NavigationCanceled_9();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_1 = V_0;
		V_1 = L_1;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B ** L_2 = __this->get_address_of_NavigationCanceled_9();
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_3 = V_1;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_6 = V_0;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_7 = InterlockedCompareExchangeImpl<Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *>((Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B **)L_2, ((Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)CastclassSealed((RuntimeObject*)L_5, Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_8 = V_0;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)L_8) == ((RuntimeObject*)(Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationCompleted_mD39CFD50E1AD8B673AB866EA8EAB7E22F2DBDCB3 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_NavigationCompleted_mD39CFD50E1AD8B673AB866EA8EAB7E22F2DBDCB3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * V_0 = NULL;
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * V_1 = NULL;
	{
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_0 = __this->get_NavigationCompleted_10();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 ** L_2 = __this->get_address_of_NavigationCompleted_10();
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_3 = V_1;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_6 = V_0;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_7 = InterlockedCompareExchangeImpl<Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *>((Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 **)L_2, ((Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)CastclassSealed((RuntimeObject*)L_5, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_8 = V_0;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)L_8) == ((RuntimeObject*)(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationCompleted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationCompleted_m549BC4069ABD075D8077660FB94C32235306AA03 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_NavigationCompleted_m549BC4069ABD075D8077660FB94C32235306AA03_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * V_0 = NULL;
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * V_1 = NULL;
	{
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_0 = __this->get_NavigationCompleted_10();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_1 = V_0;
		V_1 = L_1;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 ** L_2 = __this->get_address_of_NavigationCompleted_10();
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_3 = V_1;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_6 = V_0;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_7 = InterlockedCompareExchangeImpl<Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *>((Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 **)L_2, ((Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)CastclassSealed((RuntimeObject*)L_5, Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_8 = V_0;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)L_8) == ((RuntimeObject*)(Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationStarted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationStarted_mB4E1B0FCB384F37BD9A9309C7C5B0AFADFA3EB1C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_NavigationStarted_mB4E1B0FCB384F37BD9A9309C7C5B0AFADFA3EB1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * V_0 = NULL;
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * V_1 = NULL;
	{
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_0 = __this->get_NavigationStarted_11();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E ** L_2 = __this->get_address_of_NavigationStarted_11();
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_3 = V_1;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_6 = V_0;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_7 = InterlockedCompareExchangeImpl<Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *>((Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E **)L_2, ((Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)CastclassSealed((RuntimeObject*)L_5, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_8 = V_0;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)L_8) == ((RuntimeObject*)(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationStarted(System.Action`1<UnityEngine.XR.WSA.Input.NavigationStartedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationStarted_m2456D056E789D6F4FC6BB8477658352C1550E8FF (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_NavigationStarted_m2456D056E789D6F4FC6BB8477658352C1550E8FF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * V_0 = NULL;
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * V_1 = NULL;
	{
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_0 = __this->get_NavigationStarted_11();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_1 = V_0;
		V_1 = L_1;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E ** L_2 = __this->get_address_of_NavigationStarted_11();
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_3 = V_1;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_6 = V_0;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_7 = InterlockedCompareExchangeImpl<Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *>((Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E **)L_2, ((Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)CastclassSealed((RuntimeObject*)L_5, Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_8 = V_0;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)L_8) == ((RuntimeObject*)(Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::add_NavigationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_add_NavigationUpdated_mA509F2737D18188204C6E04154B1A1070F8E711C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_add_NavigationUpdated_mA509F2737D18188204C6E04154B1A1070F8E711C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * V_0 = NULL;
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * V_1 = NULL;
	{
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_0 = __this->get_NavigationUpdated_12();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_1 = V_0;
		V_1 = L_1;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C ** L_2 = __this->get_address_of_NavigationUpdated_12();
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_3 = V_1;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_6 = V_0;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_7 = InterlockedCompareExchangeImpl<Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *>((Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C **)L_2, ((Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)CastclassSealed((RuntimeObject*)L_5, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_8 = V_0;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)L_8) == ((RuntimeObject*)(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::remove_NavigationUpdated(System.Action`1<UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_remove_NavigationUpdated_m279E228CE0E46516F24A472998BC0F5B854EF4E8 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_remove_NavigationUpdated_m279E228CE0E46516F24A472998BC0F5B854EF4E8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * V_0 = NULL;
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * V_1 = NULL;
	{
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_0 = __this->get_NavigationUpdated_12();
		V_0 = L_0;
	}

IL_0007:
	{
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_1 = V_0;
		V_1 = L_1;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C ** L_2 = __this->get_address_of_NavigationUpdated_12();
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_3 = V_1;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_6 = V_0;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_7 = InterlockedCompareExchangeImpl<Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *>((Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C **)L_2, ((Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)CastclassSealed((RuntimeObject*)L_5, Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_8 = V_0;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_9 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)L_8) == ((RuntimeObject*)(Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.IntPtr UnityEngine.XR.WSA.Input.GestureRecognizer::Internal_Create(UnityEngine.XR.WSA.Input.GestureRecognizer)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GestureRecognizer_Internal_Create_m9129CAF44B2E13C242676BAE5411E34C87071DB6 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * ___gestureRecognizer0, const RuntimeMethod* method)
{
	typedef intptr_t (*GestureRecognizer_Internal_Create_m9129CAF44B2E13C242676BAE5411E34C87071DB6_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_Internal_Create_m9129CAF44B2E13C242676BAE5411E34C87071DB6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_Internal_Create_m9129CAF44B2E13C242676BAE5411E34C87071DB6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::Internal_Create(UnityEngine.XR.WSA.Input.GestureRecognizer)");
	intptr_t retVal = _il2cpp_icall_func(___gestureRecognizer0);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_Finalize_m276601D68E2EF58C2286101AD6BBD369EB33F1F3 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_Finalize_m276601D68E2EF58C2286101AD6BBD369EB33F1F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_Recognizer_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_002f;
			}
		}

IL_0016:
		{
			GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB(__this, /*hidden argument*/NULL);
			__this->set_m_Recognizer_0((intptr_t)(0));
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_002f:
		{
			IL2CPP_LEAVE(0x3B, FINALLY_0034);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0034;
	}

FINALLY_0034:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(52)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(52)
	{
		IL2CPP_JUMP_TBL(0x3B, IL_003b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_003b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_DestroyThreaded_m1C5095AA124113EB403DB4CC55EF8231F48F47DB_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::DestroyThreaded()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_Dispose_mCDB9196736129DA85372020E13A8768175E9A97C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_Recognizer_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81(__this, /*hidden argument*/NULL);
		__this->set_m_Recognizer_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_Destroy_mB698484AD27F6B324450134F777B4CF411941C81_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::Destroy()");
	_il2cpp_icall_func(__this);
}
// UnityEngine.XR.WSA.Input.GestureSettings UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures(UnityEngine.XR.WSA.Input.GestureSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_SetRecognizableGestures_mF459BAE914B9B2E01E7B1652ACF23C5C2722DA68 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, int32_t ___newMaskValue0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___newMaskValue0;
		int32_t L_1 = GestureRecognizer_SetRecognizableGestures_Internal_mCC4360215E114FC39D35DE9104BE8BE9F74471D0(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Int32 UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures_Internal(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GestureRecognizer_SetRecognizableGestures_Internal_mCC4360215E114FC39D35DE9104BE8BE9F74471D0 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, int32_t ___newMaskValue0, const RuntimeMethod* method)
{
	typedef int32_t (*GestureRecognizer_SetRecognizableGestures_Internal_mCC4360215E114FC39D35DE9104BE8BE9F74471D0_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *, int32_t);
	static GestureRecognizer_SetRecognizableGestures_Internal_mCC4360215E114FC39D35DE9104BE8BE9F74471D0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_SetRecognizableGestures_Internal_mCC4360215E114FC39D35DE9104BE8BE9F74471D0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::SetRecognizableGestures_Internal(System.Int32)");
	int32_t retVal = _il2cpp_icall_func(__this, ___newMaskValue0);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::StartCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_StartCapturingGestures_mD02F289C8263C8EACB47B4593E55C8B767C524FA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::StartCapturingGestures()");
	_il2cpp_icall_func(__this);
}
// System.Boolean UnityEngine.XR.WSA.Input.GestureRecognizer::IsCapturingGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GestureRecognizer_IsCapturingGestures_m6AE24CD2F0D1A93D4F153B1946753FD8B30FEE02 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	typedef bool (*GestureRecognizer_IsCapturingGestures_m6AE24CD2F0D1A93D4F153B1946753FD8B30FEE02_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_IsCapturingGestures_m6AE24CD2F0D1A93D4F153B1946753FD8B30FEE02_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_IsCapturingGestures_m6AE24CD2F0D1A93D4F153B1946753FD8B30FEE02_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::IsCapturingGestures()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::CancelGestures()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_CancelGestures_m43576C8B4B595283A7A9958B84789DFACB213D0F (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, const RuntimeMethod* method)
{
	typedef void (*GestureRecognizer_CancelGestures_m43576C8B4B595283A7A9958B84789DFACB213D0F_ftn) (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE *);
	static GestureRecognizer_CancelGestures_m43576C8B4B595283A7A9958B84789DFACB213D0F_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (GestureRecognizer_CancelGestures_m43576C8B4B595283A7A9958B84789DFACB213D0F_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.GestureRecognizer::CancelGestures()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCanceled_mC34AE7488EB2F23E0484F55EC5B06A2195E28788 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCanceled_mC34AE7488EB2F23E0484F55EC5B06A2195E28788_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * V_0 = NULL;
	Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * V_1 = NULL;
	HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_0 = __this->get_HoldCanceledEvent_16();
		V_0 = L_0;
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldCanceledEventDelegate_Invoke_m1544130A1A2D9112BAE59903EFD5605AD96D5002(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_9 = __this->get_HoldCanceled_1();
		V_1 = L_9;
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t5DB3D8F91CD6BEB6D429ED4A29CC61B44CDD8A4B * L_14 = V_1;
		HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4(L_14, L_15, /*hidden argument*/Action_1_Invoke_m5795ACB95FE9CCD6F5A924378FA9DE8E9CA3A6C4_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldCompleted_mD4B85266C373031A6560CD9F8E0ABD106BD275D4 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldCompleted_mD4B85266C373031A6560CD9F8E0ABD106BD275D4_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * V_0 = NULL;
	Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * V_1 = NULL;
	HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_0 = __this->get_HoldCompletedEvent_17();
		V_0 = L_0;
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldCompletedEventDelegate_Invoke_m6FA6CDA845F589846063D014356C1E0445320798(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_9 = __this->get_HoldCompleted_2();
		V_1 = L_9;
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t37D466E712A7A553C87729F5DD58DC77C8A89FF0 * L_14 = V_1;
		HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8(L_14, L_15, /*hidden argument*/Action_1_Invoke_mA97E44F00BEFB34149435C4BE656AF816A0E9DF8_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeHoldStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeHoldStarted_m6E5AF40A3DB2A8DDD12726E2A5220280835D7853 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeHoldStarted_m6E5AF40A3DB2A8DDD12726E2A5220280835D7853_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * V_0 = NULL;
	Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * V_1 = NULL;
	HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_0 = __this->get_HoldStartedEvent_18();
		V_0 = L_0;
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		HoldStartedEventDelegate_Invoke_m504D569012750F2C63512FDB35614DF5ECDAF7FA(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_9 = __this->get_HoldStarted_3();
		V_1 = L_9;
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_t9A7EBE66F02FBEEDDB83D150DBABC2F2728C7F8E * L_14 = V_1;
		HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4(L_14, L_15, /*hidden argument*/Action_1_Invoke_mBB5D2CBD59DE968F3B42B022A9DABD9E5C69B1B4_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeTapped(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeTapped_mD670AC122C9088630460544749701C246B1B2A49 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, int32_t ___tapCount3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeTapped_mD670AC122C9088630460544749701C246B1B2A49_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * V_0 = NULL;
	Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * V_1 = NULL;
	TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_0 = __this->get_TappedEvent_19();
		V_0 = L_0;
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		int32_t L_4 = ___tapCount3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		TappedEventDelegate_Invoke_m02055A4BCAD7BCFD64AAB05FDFDCC6BD8E6F189B(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_10 = __this->get_Tapped_4();
		V_1 = L_10;
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		int32_t L_15 = ___tapCount3;
		(&V_2)->set_m_TapCount_3(L_15);
		Action_1_tF26E81D6C525086A6BF0264D4CCFF4F9D3C86D12 * L_16 = V_1;
		TappedEventArgs_t1E2125DB3E5E3F28EF3018C15F6A7786EDE8E9D6  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D(L_16, L_17, /*hidden argument*/Action_1_Invoke_m7B37293237BA07CC6B50638B6DBD109BB4DC004D_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCanceled_m1BF8273F58D455F4F509EA1C819FC63109762922 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCanceled_m1BF8273F58D455F4F509EA1C819FC63109762922_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * V_0 = NULL;
	Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * V_1 = NULL;
	ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_0 = __this->get_ManipulationCanceledEvent_20();
		V_0 = L_0;
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationCanceledEventDelegate_Invoke_m97FD70C68AE74FE5EB03D3B461F969F6E3E2C231(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_10 = __this->get_ManipulationCanceled_5();
		V_1 = L_10;
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_tB13B2372B219E1C2C06EFDBCE8BD7EE041A2EB5E * L_15 = V_1;
		ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802(L_15, L_16, /*hidden argument*/Action_1_Invoke_mF9EDDB9E3BC7AACDBA69EA5356BC2496FA296802_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationCompleted_m6553513E4776E6D01BA438497E82387B219DDB7A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationCompleted_m6553513E4776E6D01BA438497E82387B219DDB7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * V_0 = NULL;
	Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * V_1 = NULL;
	ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_0 = __this->get_ManipulationCompletedEvent_21();
		V_0 = L_0;
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___cumulativeDelta3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationCompletedEventDelegate_Invoke_m93DD17C1359B1F4B931D2C4467D85716AD92A0F2(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_10 = __this->get_ManipulationCompleted_6();
		V_1 = L_10;
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___cumulativeDelta3;
		(&V_2)->set_m_CumulativeDelta_3(L_15);
		Action_1_t3D75FAEDED813354B2965399C726ABFD1A5EBC3F * L_16 = V_1;
		ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3(L_16, L_17, /*hidden argument*/Action_1_Invoke_mAAA2C311608C583870A692A74FF519C2164D1EC3_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationStarted_m24AB97B545BEBCC96200E52F8648903D27CB6EFF (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationStarted_m24AB97B545BEBCC96200E52F8648903D27CB6EFF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * V_0 = NULL;
	Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * V_1 = NULL;
	ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_0 = __this->get_ManipulationStartedEvent_22();
		V_0 = L_0;
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationStartedEventDelegate_Invoke_mDA7BE6F4F51E1B0933EAD00C5555CDE8F4931450(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_10 = __this->get_ManipulationStarted_7();
		V_1 = L_10;
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t6DC7BD1E28CAAD24387D527C634AB60FA116325E * L_15 = V_1;
		ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C(L_15, L_16, /*hidden argument*/Action_1_Invoke_m0A7693DAB618A5AD064357DEE18C65EE17EC4F3C_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeManipulationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeManipulationUpdated_mFFFD261C7F13C3D7A890C6A7F2D9B8EEDDB2974B (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeManipulationUpdated_mFFFD261C7F13C3D7A890C6A7F2D9B8EEDDB2974B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * V_0 = NULL;
	Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * V_1 = NULL;
	ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_0 = __this->get_ManipulationUpdatedEvent_23();
		V_0 = L_0;
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___cumulativeDelta3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		ManipulationUpdatedEventDelegate_Invoke_m39222E61BA5CE3B8EA1E3C892C4E399C641CED20(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_10 = __this->get_ManipulationUpdated_8();
		V_1 = L_10;
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___cumulativeDelta3;
		(&V_2)->set_m_CumulativeDelta_3(L_15);
		Action_1_t6F72821471F95D09FC84BC9F98573CD2139C23DC * L_16 = V_1;
		ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694(L_16, L_17, /*hidden argument*/Action_1_Invoke_m5B7D08B1B0AC1D184B93F9CE5DAE32B5DC1EA694_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCanceled(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCanceled_m39FE74B1B69937DFE5F775D4B15F11BDF5A23B8E (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCanceled_m39FE74B1B69937DFE5F775D4B15F11BDF5A23B8E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * V_0 = NULL;
	Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * V_1 = NULL;
	NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_0 = __this->get_NavigationCanceledEvent_24();
		V_0 = L_0;
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationCanceledEventDelegate_Invoke_mE1BC888BB04B0915D6CFF1A94144D993CEF0FDB5(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_10 = __this->get_NavigationCanceled_9();
		V_1 = L_10;
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t725D93DE550342B16861C2DF8B459B4657B0B40B * L_15 = V_1;
		NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E(L_15, L_16, /*hidden argument*/Action_1_Invoke_m1B04A9EFA672A32E86BFE93CCCBDF4C4504D9C1E_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationCompleted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationCompleted_m6A60E54BD33834390D15D7CF163B6C0DDDCFE776 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationCompleted_m6A60E54BD33834390D15D7CF163B6C0DDDCFE776_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * V_0 = NULL;
	Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * V_1 = NULL;
	NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_0 = __this->get_NavigationCompletedEvent_25();
		V_0 = L_0;
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___normalizedOffset3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationCompletedEventDelegate_Invoke_mE2C0283BE82345A791C543C8696BA5C2B462E1FD(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_10 = __this->get_NavigationCompleted_10();
		V_1 = L_10;
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___normalizedOffset3;
		(&V_2)->set_m_NormalizedOffset_3(L_15);
		Action_1_tE20909ED14E1CC129893FCAD2C19BA898C77D7B1 * L_16 = V_1;
		NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193(L_16, L_17, /*hidden argument*/Action_1_Invoke_m34F24EFCBA6CB015D4A48C3CD5C7E61C227D5193_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationStarted_m2079422473B03AE0A036518C2BE0D5C13D6A89CF (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationStarted_m2079422473B03AE0A036518C2BE0D5C13D6A89CF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * V_0 = NULL;
	Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * V_1 = NULL;
	NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_0 = __this->get_NavigationStartedEvent_26();
		V_0 = L_0;
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003d;
		}
	}
	{
		NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = Vector3_get_zero_m3CDDCAE94581DF3BB16C4B40A100E28E9C6649C2(/*hidden argument*/NULL);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationStartedEventDelegate_Invoke_mFD08DF0FF1C8B9E87D59C9BC0F03EBB998360EB9(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003d:
	{
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_10 = __this->get_NavigationStarted_11();
		V_1 = L_10;
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_11 = V_1;
		if (!L_11)
		{
			goto IL_006b;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Action_1_t12403A5DFD6ED9F6D2D66FBBBF9B65D8CF00538E * L_15 = V_1;
		NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339  L_16 = V_2;
		NullCheck(L_15);
		Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7(L_15, L_16, /*hidden argument*/Action_1_Invoke_m648E0A8232CCAE8D9527EEAEF4363D611E41C6B7_RuntimeMethod_var);
	}

IL_006b:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeNavigationUpdated(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeNavigationUpdated_m94F6C1A11FC117B2B5346840247780C79ACAEB5D (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeNavigationUpdated_m94F6C1A11FC117B2B5346840247780C79ACAEB5D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * V_0 = NULL;
	Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * V_1 = NULL;
	NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_0 = __this->get_NavigationUpdatedEvent_27();
		V_0 = L_0;
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003a;
		}
	}
	{
		NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = ___normalizedOffset3;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_6 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_8 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_6, L_7, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_9), L_5, L_8, /*hidden argument*/NULL);
		NullCheck(L_2);
		NavigationUpdatedEventDelegate_Invoke_mE6FB25850173B4E42B65D60F587A101CAA62C1C2(L_2, L_3, L_4, L_9, /*hidden argument*/NULL);
	}

IL_003a:
	{
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_10 = __this->get_NavigationUpdated_12();
		V_1 = L_10;
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_11 = V_1;
		if (!L_11)
		{
			goto IL_0071;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_12 = ___source0;
		(&V_2)->set_m_Source_0(L_12);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_13 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_13);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_14 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_14);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_15 = ___normalizedOffset3;
		(&V_2)->set_m_NormalizedOffset_3(L_15);
		Action_1_tEAD62A4E2B757ADC9D11D8A3CCB8E2CF8792F64C * L_16 = V_1;
		NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA  L_17 = V_2;
		NullCheck(L_16);
		Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B(L_16, L_17, /*hidden argument*/Action_1_Invoke_m2A815481C588BDC936FCCF8DFCF0368061AED64B_RuntimeMethod_var);
	}

IL_0071:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionEnded(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionEnded_mDFBDE51B56D682C1636521441816533C81CC753A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionEnded_mDFBDE51B56D682C1636521441816533C81CC753A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * V_0 = NULL;
	Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * V_1 = NULL;
	RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_0 = __this->get_RecognitionEndedEvent_28();
		V_0 = L_0;
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		RecognitionEndedEventDelegate_Invoke_mCE7877BDB4BA9DDB85C2C2908FF33DFA38426063(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * L_9 = __this->get_RecognitionEnded_13();
		V_1 = L_9;
		Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_tE903BE1931BE14124CF0EFF594B91436F631E6E7 * L_14 = V_1;
		RecognitionEndedEventArgs_t41420CD5725610A560C4316BD5DBE7F96504B8BB  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567(L_14, L_15, /*hidden argument*/Action_1_Invoke_m125E522A0C41AC0FC6C0D40A229D597471B45567_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeRecognitionStarted(UnityEngine.XR.WSA.Input.InteractionSource,UnityEngine.XR.WSA.Input.InteractionSourcePose,UnityEngine.Pose)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeRecognitionStarted_m1E8873104D35064A51A0BAAC7774CDFFEED61924 (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___source0, InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  ___sourcePose1, Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  ___headPose2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeRecognitionStarted_m1E8873104D35064A51A0BAAC7774CDFFEED61924_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * V_0 = NULL;
	Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * V_1 = NULL;
	RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_0 = __this->get_RecognitionStartedEvent_29();
		V_0 = L_0;
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0038;
		}
	}
	{
		RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * L_2 = V_0;
		int32_t L_3 = (&___source0)->get_m_SourceKind_1();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_4 = (&___headPose2)->get_position_0();
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = (&___headPose2)->get_rotation_1();
		IL2CPP_RUNTIME_CLASS_INIT(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_6 = Vector3_get_forward_m3E2E192B3302130098738C308FA1EE1439449D0D(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357_il2cpp_TypeInfo_var);
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_7 = Quaternion_op_Multiply_mD5999DE317D808808B72E58E7A978C4C0995879C(L_5, L_6, /*hidden argument*/NULL);
		Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Ray__ctor_m695D219349B8AA4C82F96C55A27D384C07736F6B((&L_8), L_4, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		RecognitionStartedEventDelegate_Invoke_mAB4BFDD255D2CA76718D285598A6832631AA9BB4(L_2, L_3, L_8, /*hidden argument*/NULL);
	}

IL_0038:
	{
		Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * L_9 = __this->get_RecognitionStarted_14();
		V_1 = L_9;
		Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * L_10 = V_1;
		if (!L_10)
		{
			goto IL_0066;
		}
	}
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_11 = ___source0;
		(&V_2)->set_m_Source_0(L_11);
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_12 = ___sourcePose1;
		(&V_2)->set_m_SourcePose_1(L_12);
		Pose_t2997DE3CB3863E4D78FCF42B46FC481818823F29  L_13 = ___headPose2;
		(&V_2)->set_m_HeadPose_2(L_13);
		Action_1_tCDC01C5032C70E5DD6217277758BBB3991DC7A8E * L_14 = V_1;
		RecognitionStartedEventArgs_t10FC01D91F3A18B7B03065C6C857473DCFD17E65  L_15 = V_2;
		NullCheck(L_14);
		Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90(L_14, L_15, /*hidden argument*/Action_1_Invoke_mF57F2088FC61BB31C2D92DA0291CDC0EFE739C90_RuntimeMethod_var);
	}

IL_0066:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer::InvokeErrorEvent(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureRecognizer_InvokeErrorEvent_m59368BCBE12B89289E8BFF2309A58002268DE43A (GestureRecognizer_tE4A3B36C495289B1DF1011E12394116A91E361DE * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureRecognizer_InvokeErrorEvent_m59368BCBE12B89289E8BFF2309A58002268DE43A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * V_0 = NULL;
	Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * V_1 = NULL;
	{
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_0 = __this->get_GestureErrorEvent_30();
		V_0 = L_0;
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * L_2 = V_0;
		String_t* L_3 = ___error0;
		int32_t L_4 = ___hresult1;
		NullCheck(L_2);
		GestureErrorDelegate_Invoke_m7474F967FEDDFC0FFEE7089771F3A4BC589FC0FF(L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_0016:
	{
		Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * L_5 = __this->get_GestureError_15();
		V_1 = L_5;
		Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * L_6 = V_1;
		if (!L_6)
		{
			goto IL_0030;
		}
	}
	{
		Action_1_t86FE98C3236EF6A6C38460C0B9FE2D8262E44B6B * L_7 = V_1;
		String_t* L_8 = ___error0;
		int32_t L_9 = ___hresult1;
		GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C  L_10;
		memset((&L_10), 0, sizeof(L_10));
		GestureErrorEventArgs__ctor_mBC7728EEE85A73791A6D91B06935BA38D285EDA9((&L_10), L_8, L_9, /*hidden argument*/NULL);
		NullCheck(L_7);
		Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676(L_7, L_10, /*hidden argument*/Action_1_Invoke_m971A7F94ACA669C07644DDEE7406533FA3502676_RuntimeMethod_var);
	}

IL_0030:
	{
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(char*, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___error0' to native representation
	char* ____error0_marshaled = NULL;
	____error0_marshaled = il2cpp_codegen_marshal_string(___error0);

	// Native function invocation
	il2cppPInvokeFunc(____error0_marshaled, ___hresult1);

	// Marshaling cleanup of parameter '___error0' native representation
	il2cpp_codegen_marshal_free(____error0_marshaled);
	____error0_marshaled = NULL;

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate__ctor_mD4C38B3820145B0F317EAD4A0B19EB139F27820B (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::Invoke(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_Invoke_m7474F967FEDDFC0FFEE7089771F3A4BC589FC0FF (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___error0, ___hresult1);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___error0, ___hresult1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (String_t*, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___error0, ___hresult1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
					else
						GenericVirtActionInvoker2< String_t*, int32_t >::Invoke(targetMethod, targetThis, ___error0, ___hresult1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___error0, ___hresult1);
					else
						VirtActionInvoker2< String_t*, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___error0, ___hresult1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, String_t*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___error0, ___hresult1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::BeginInvoke(System.String,System.Int32,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GestureErrorDelegate_BeginInvoke_m74CC1A18B8CACCA1FA512F2173BD31AC7AAAB441 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, String_t* ___error0, int32_t ___hresult1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (GestureErrorDelegate_BeginInvoke_m74CC1A18B8CACCA1FA512F2173BD31AC7AAAB441_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___error0;
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___hresult1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_GestureErrorDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GestureErrorDelegate_EndInvoke_m68CAF56B044377516E3AE39C8D9BF5D937B62005 (GestureErrorDelegate_tFA3E7E6A9E25ADFB4D2FF30E7CD521937F795084 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate__ctor_m415846F1351B43B163D8ED9BB9978DFA5555767C (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_Invoke_m1544130A1A2D9112BAE59903EFD5605AD96D5002 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldCanceledEventDelegate_BeginInvoke_mB7C6B86BCBD192C46E0DB0CC76536B659DE914B7 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCanceledEventDelegate_BeginInvoke_mB7C6B86BCBD192C46E0DB0CC76536B659DE914B7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCanceledEventDelegate_EndInvoke_mF3F211617D95995D5E91C9634FBDEAA562428723 (HoldCanceledEventDelegate_t5073A875A657B659A55D9111BF52AFA5E8FA22C2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate__ctor_m8FCF57072F5D1D8D4BEC8663B49D960BDDF2DD1F (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_Invoke_m6FA6CDA845F589846063D014356C1E0445320798 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldCompletedEventDelegate_BeginInvoke_m6990F58B8B07706460F6D685EAB6F8B6A27E3025 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldCompletedEventDelegate_BeginInvoke_m6990F58B8B07706460F6D685EAB6F8B6A27E3025_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldCompletedEventDelegate_EndInvoke_mF79F6340B3988CED18D33E83C5809C52463676E2 (HoldCompletedEventDelegate_tE1C05DE1BDD2AF5B15D561CE9EEB23259CAD0A7A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate__ctor_m5C557DA90E407F179E6EBB911BEB6B4EA808A4B2 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_Invoke_m504D569012750F2C63512FDB35614DF5ECDAF7FA (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HoldStartedEventDelegate_BeginInvoke_mEB69CDD03CA2F7E2AC53F90C1F983A9681F102A5 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HoldStartedEventDelegate_BeginInvoke_mEB69CDD03CA2F7E2AC53F90C1F983A9681F102A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_HoldStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HoldStartedEventDelegate_EndInvoke_m9F7E4EF554B40FF1A978BD36CAA76FAC5F70E9C6 (HoldStartedEventDelegate_t79DBAFBD8DB4A33E282665E171EF7F7903DA57B2 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate__ctor_m79AFE305BCE0BC58EEDEA921B4DBE5F6558AA065 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_Invoke_m97FD70C68AE74FE5EB03D3B461F969F6E3E2C231 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCanceledEventDelegate_BeginInvoke_m2F42D255FB64C543111584E2B183D66809A72FE0 (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCanceledEventDelegate_BeginInvoke_m2F42D255FB64C543111584E2B183D66809A72FE0_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCanceledEventDelegate_EndInvoke_m5B012B4C44F179D710A2B0E68505A393A413771C (ManipulationCanceledEventDelegate_t5D62D76C35A55841145479B9708F35A667B42917 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate__ctor_m1F78398A94D42CB17CF57D19994E0535091B4F1A (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_Invoke_m93DD17C1359B1F4B931D2C4467D85716AD92A0F2 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationCompletedEventDelegate_BeginInvoke_m27EECB11BB8511FF754685CB629E072A6FED723B (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationCompletedEventDelegate_BeginInvoke_m27EECB11BB8511FF754685CB629E072A6FED723B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationCompletedEventDelegate_EndInvoke_mBDA5687CCFE095F96371447677BECE5159E44506 (ManipulationCompletedEventDelegate_tFBC536B9D0EED5699871DB3855AA02653F35B6A4 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate__ctor_m30296A34DCF31477F0704637E8CBA79BB79F50A7 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_Invoke_mDA7BE6F4F51E1B0933EAD00C5555CDE8F4931450 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationStartedEventDelegate_BeginInvoke_mE4118447769181F38B295DDCD5484F0974CE7CAB (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationStartedEventDelegate_BeginInvoke_mE4118447769181F38B295DDCD5484F0974CE7CAB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationStartedEventDelegate_EndInvoke_m81CE2B949D06C3276755D1F17BE5572AF311EDB7 (ManipulationStartedEventDelegate_tECC88952F89E480F898CF5710A0A47D1BA85C9F0 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___cumulativeDelta1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate__ctor_m33281C9A682C131115621B74915C5BCC6323C47E (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_Invoke_m39222E61BA5CE3B8EA1E3C892C4E399C641CED20 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___cumulativeDelta1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___cumulativeDelta1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ManipulationUpdatedEventDelegate_BeginInvoke_m109B92F35D22F6CB8BDDB76F65947BB3E36343AF (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___cumulativeDelta1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ManipulationUpdatedEventDelegate_BeginInvoke_m109B92F35D22F6CB8BDDB76F65947BB3E36343AF_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___cumulativeDelta1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_ManipulationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ManipulationUpdatedEventDelegate_EndInvoke_mA85AE986C163140321876052A72C2A1BDDFF9D90 (ManipulationUpdatedEventDelegate_t521F96EEF0CE5D99D54AA2AB2D075CBD66D46406 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate__ctor_mB3FDA9309D2B4FFEAF12612CC32CA17ABB5DED2B (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_Invoke_mE1BC888BB04B0915D6CFF1A94144D993CEF0FDB5 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationCanceledEventDelegate_BeginInvoke_mD9BCA54B098777B5EF4A96DBB14CD92AF3919306 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCanceledEventDelegate_BeginInvoke_mD9BCA54B098777B5EF4A96DBB14CD92AF3919306_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCanceledEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCanceledEventDelegate_EndInvoke_m223D7722D0C4534DE5AC1D7E390DC3CC12602285 (NavigationCanceledEventDelegate_tA82EB6DFFB53212C7FADC09362EA424CEEF2A954 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate__ctor_m33D586D83B9C75F8F6BBE0B3630BF4C99615B737 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_Invoke_mE2C0283BE82345A791C543C8696BA5C2B462E1FD (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationCompletedEventDelegate_BeginInvoke_m3B0EF279ADD1EA29A764D156DA3C248E519408F2 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationCompletedEventDelegate_BeginInvoke_m3B0EF279ADD1EA29A764D156DA3C248E519408F2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationCompletedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationCompletedEventDelegate_EndInvoke_m849C460A2902310E230EE05658D9473F3CF350E0 (NavigationCompletedEventDelegate_tF2B1D25EF7819624117F3C6E25E70F80B238F5D3 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate__ctor_mE86F12962AC8D07F0334FA5A588F4B00FBC170E6 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_Invoke_mFD08DF0FF1C8B9E87D59C9BC0F03EBB998360EB9 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationStartedEventDelegate_BeginInvoke_m7F938167F8941BA728FC429CC9D7587E4DF5E5EB (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationStartedEventDelegate_BeginInvoke_m7F938167F8941BA728FC429CC9D7587E4DF5E5EB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationStartedEventDelegate_EndInvoke_m9B84A1E024D2E32DB1002F78C0C396E7AA499539 (NavigationStartedEventDelegate_tC56D514B35B7270BBE8D21E15C435EDBA84F1AEF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___normalizedOffset1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate__ctor_m2A31CA914B39EA13ED572FC8594C30B9AF1805CF (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_Invoke_mE6FB25850173B4E42B65D60F587A101CAA62C1C2 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___normalizedOffset1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___normalizedOffset1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 , Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___normalizedOffset1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Vector3,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NavigationUpdatedEventDelegate_BeginInvoke_m529EFAB702CC51B45F2B16FA2FC8144DECF32F20 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, int32_t ___source0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___normalizedOffset1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (NavigationUpdatedEventDelegate_BeginInvoke_m529EFAB702CC51B45F2B16FA2FC8144DECF32F20_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720_il2cpp_TypeInfo_var, &___normalizedOffset1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_NavigationUpdatedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NavigationUpdatedEventDelegate_EndInvoke_mAEA1AB925D417E6C3267C0046B0EFCEF29A75D59 (NavigationUpdatedEventDelegate_t5802B4B5608A4D915714D70A5A51C82C6E34C69A * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate__ctor_mFEEB685DBC9813C403AB761F95D6D63909E362CE (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_Invoke_mCE7877BDB4BA9DDB85C2C2908FF33DFA38426063 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionEndedEventDelegate_BeginInvoke_mF3478908780F05C95ABBED5BFA17151A74981F8D (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionEndedEventDelegate_BeginInvoke_mF3478908780F05C95ABBED5BFA17151A74981F8D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionEndedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionEndedEventDelegate_EndInvoke_mDDEEE066AA475CD967BF04BCE09FC3122DDE6BC2 (RecognitionEndedEventDelegate_t00AB7FD9F0C0070CA19697B832E58151348F700B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___headRay1);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate__ctor_m98B9C00469A86B9D0AC39CDCA69189D6CEB9E6AC (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_Invoke_mAB4BFDD255D2CA76718D285598A6832631AA9BB4 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___headRay1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
					else
						GenericVirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___headRay1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___headRay1);
					else
						VirtActionInvoker2< int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___headRay1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___headRay1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RecognitionStartedEventDelegate_BeginInvoke_m51C50FCE97EB51769763374DD3DFB4FD38EA8F54 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, int32_t ___source0, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (RecognitionStartedEventDelegate_BeginInvoke_m51C50FCE97EB51769763374DD3DFB4FD38EA8F54_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_RecognitionStartedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RecognitionStartedEventDelegate_EndInvoke_mA6F74502C69A300D09B01E38FF79BF7FFAEA5770 (RecognitionStartedEventDelegate_t8C076BC7E24C0326F46F8EBB3B3CB7495027B214 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___source0, ___tapCount1, ___headRay2);

}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate__ctor_mBA7F688B363C5440A47B2EF02A690C7B7832BBEC (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_Invoke_m02055A4BCAD7BCFD64AAB05FDFDCC6BD8E6F189B (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___source0, ___tapCount1, ___headRay2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
					else
						GenericVirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(targetMethod, targetThis, ___source0, ___tapCount1, ___headRay2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
					else
						VirtActionInvoker3< int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___source0, ___tapCount1, ___headRay2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___source0, ___tapCount1, ___headRay2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceKind,System.Int32,UnityEngine.Ray,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TappedEventDelegate_BeginInvoke_m1523B624800012E92D400C62904EB0E3F45D8715 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, int32_t ___source0, int32_t ___tapCount1, Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2  ___headRay2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TappedEventDelegate_BeginInvoke_m1523B624800012E92D400C62904EB0E3F45D8715_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(InteractionSourceKind_t5405F2951F4D1FC7D041FBAC720950BDA3CD3819_il2cpp_TypeInfo_var, &___source0);
	__d_args[1] = Box(Int32_t585191389E07734F19F3156FF88FB3EF4800D102_il2cpp_TypeInfo_var, &___tapCount1);
	__d_args[2] = Box(Ray_tE2163D4CB3E6B267E29F8ABE41684490E4A614B2_il2cpp_TypeInfo_var, &___headRay2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.Input.GestureRecognizer_TappedEventDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TappedEventDelegate_EndInvoke_mA14E66DC254C3EB3DA3E1B7D1ABC4A56DA9587D3 (TappedEventDelegate_tC33CDAA9CA071369B711FA5FDE947E122072D34F * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCanceledEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldCanceledEventArgs_get_source_mF3BF722320B940DED8E7C5AFDDB3E41ECB6CE0AB (HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldCanceledEventArgs_get_source_mF3BF722320B940DED8E7C5AFDDB3E41ECB6CE0AB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 * _thisAdjusted = reinterpret_cast<HoldCanceledEventArgs_t1149229A845756F9A586E3DD91C3EFEEA1029244 *>(__this + 1);
	return HoldCanceledEventArgs_get_source_mF3BF722320B940DED8E7C5AFDDB3E41ECB6CE0AB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldCompletedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldCompletedEventArgs_get_source_m35EBCAA5098CAE91B570925FDDFE0945E3ADE06B (HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldCompletedEventArgs_get_source_m35EBCAA5098CAE91B570925FDDFE0945E3ADE06B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 * _thisAdjusted = reinterpret_cast<HoldCompletedEventArgs_t13AD11A9EDEE4F627639E98E09910A72E82242B3 *>(__this + 1);
	return HoldCompletedEventArgs_get_source_m35EBCAA5098CAE91B570925FDDFE0945E3ADE06B(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.HoldStartedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldStartedEventArgs_get_source_m3EB096EBABF60A68C481565E0B7584EFCCDC1FA9 (HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  HoldStartedEventArgs_get_source_m3EB096EBABF60A68C481565E0B7584EFCCDC1FA9_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 * _thisAdjusted = reinterpret_cast<HoldStartedEventArgs_tF309FAD5ADD192662D046995D7A71B5F92CFA874 *>(__this + 1);
	return HoldStartedEventArgs_get_source_m3EB096EBABF60A68C481565E0B7584EFCCDC1FA9(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager__cctor_m0DE800BAFE143A6D365E33EB68ECB1375F7446C5 (const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::add_InteractionSourceDetected(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_add_InteractionSourceDetected_mFBF90BF264DEE53A082DA411447B2EC5C8F4F1A5 (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_add_InteractionSourceDetected_mFBF90BF264DEE53A082DA411447B2EC5C8F4F1A5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * V_0 = NULL;
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetected_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_2 = V_1;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_5 = V_0;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_6 = InterlockedCompareExchangeImpl<Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *>((Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceDetected_0()), ((Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_7 = V_0;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *)L_7) == ((RuntimeObject*)(Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::remove_InteractionSourceDetected(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_remove_InteractionSourceDetected_m28CA6D72D1CF9AD87E32D79D64631AD2299C102A (Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_remove_InteractionSourceDetected_m28CA6D72D1CF9AD87E32D79D64631AD2299C102A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * V_0 = NULL;
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetected_0();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_2 = V_1;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_5 = V_0;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_6 = InterlockedCompareExchangeImpl<Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *>((Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceDetected_0()), ((Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_7 = V_0;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *)L_7) == ((RuntimeObject*)(Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::add_InteractionSourceLost(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_add_InteractionSourceLost_m17A91C3642DAAAFF7377106B0A173D82E0FE523F (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_add_InteractionSourceLost_m17A91C3642DAAAFF7377106B0A173D82E0FE523F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * V_0 = NULL;
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_2 = V_1;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_5 = V_0;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_6 = InterlockedCompareExchangeImpl<Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *>((Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceLost_1()), ((Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *)CastclassSealed((RuntimeObject*)L_4, Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_7 = V_0;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *)L_7) == ((RuntimeObject*)(Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::remove_InteractionSourceLost(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_remove_InteractionSourceLost_m01B7AE434EC61AA457C121C65BAC85D8D17D8569 (Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_remove_InteractionSourceLost_m01B7AE434EC61AA457C121C65BAC85D8D17D8569_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * V_0 = NULL;
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLost_1();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_2 = V_1;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_5 = V_0;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_6 = InterlockedCompareExchangeImpl<Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *>((Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceLost_1()), ((Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *)CastclassSealed((RuntimeObject*)L_4, Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_7 = V_0;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *)L_7) == ((RuntimeObject*)(Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::add_InteractionSourcePressed(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_add_InteractionSourcePressed_m8E03197012CEDAE3031171D5C7868FEEF2DAA908 (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_add_InteractionSourcePressed_m8E03197012CEDAE3031171D5C7868FEEF2DAA908_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * V_0 = NULL;
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressed_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_2 = V_1;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_5 = V_0;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_6 = InterlockedCompareExchangeImpl<Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *>((Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourcePressed_2()), ((Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_7 = V_0;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *)L_7) == ((RuntimeObject*)(Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::remove_InteractionSourcePressed(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_remove_InteractionSourcePressed_mC04B7F9CCC1C1D4633877D00FCEB701D2B011903 (Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_remove_InteractionSourcePressed_mC04B7F9CCC1C1D4633877D00FCEB701D2B011903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * V_0 = NULL;
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressed_2();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_2 = V_1;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_5 = V_0;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_6 = InterlockedCompareExchangeImpl<Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *>((Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourcePressed_2()), ((Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *)CastclassSealed((RuntimeObject*)L_4, Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_7 = V_0;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *)L_7) == ((RuntimeObject*)(Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::add_InteractionSourceReleased(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_add_InteractionSourceReleased_m2A436B0DB7A03C4F2159118428887D331C754A7D (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_add_InteractionSourceReleased_m2A436B0DB7A03C4F2159118428887D331C754A7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * V_0 = NULL;
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleased_3();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_2 = V_1;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_5 = V_0;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_6 = InterlockedCompareExchangeImpl<Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *>((Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceReleased_3()), ((Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_7 = V_0;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *)L_7) == ((RuntimeObject*)(Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::remove_InteractionSourceReleased(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_remove_InteractionSourceReleased_mC73ABF93C15CA37C34CABA493AC13FB29644FF59 (Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_remove_InteractionSourceReleased_mC73ABF93C15CA37C34CABA493AC13FB29644FF59_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * V_0 = NULL;
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleased_3();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_2 = V_1;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_5 = V_0;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_6 = InterlockedCompareExchangeImpl<Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *>((Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceReleased_3()), ((Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_7 = V_0;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *)L_7) == ((RuntimeObject*)(Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::add_InteractionSourceUpdated(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_add_InteractionSourceUpdated_m8E31E57228293F29129E655262D5A75EF692DB4E (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_add_InteractionSourceUpdated_m8E31E57228293F29129E655262D5A75EF692DB4E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * V_0 = NULL;
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdated_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_2 = V_1;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_2, L_3, /*hidden argument*/NULL);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_5 = V_0;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_6 = InterlockedCompareExchangeImpl<Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *>((Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceUpdated_4()), ((Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_7 = V_0;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *)L_7) == ((RuntimeObject*)(Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::remove_InteractionSourceUpdated(System.Action`1<UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_remove_InteractionSourceUpdated_m8A7EA915C5ABDB41973EE976C3CFF96F29A02F94 (Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_remove_InteractionSourceUpdated_m8A7EA915C5ABDB41973EE976C3CFF96F29A02F94_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * V_0 = NULL;
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_0 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdated_4();
		V_0 = L_0;
	}

IL_0006:
	{
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_1 = V_0;
		V_1 = L_1;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_2 = V_1;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_3 = ___value0;
		Delegate_t * L_4 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_2, L_3, /*hidden argument*/NULL);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_5 = V_0;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_6 = InterlockedCompareExchangeImpl<Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *>((Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 **)(((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_address_of_InteractionSourceUpdated_4()), ((Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *)CastclassSealed((RuntimeObject*)L_4, Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91_il2cpp_TypeInfo_var)), L_5);
		V_0 = L_6;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_7 = V_0;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_8 = V_1;
		if ((!(((RuntimeObject*)(Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *)L_7) == ((RuntimeObject*)(Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 *)L_8))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager::GetCurrentReading(UnityEngine.XR.WSA.Input.InteractionSourceState[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_GetCurrentReading_m780B09E7126623F95C571790E67604919191502A (InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* ___sourceStates0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_GetCurrentReading_m780B09E7126623F95C571790E67604919191502A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* L_0 = ___sourceStates0;
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		int32_t L_1 = InteractionManager_GetCurrentReading_Internal_m48B784A597B956AF326A4DCB9C00F2AACF4C62A7(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
// UnityEngine.XR.WSA.Input.InteractionSourceState[] UnityEngine.XR.WSA.Input.InteractionManager::GetCurrentReading()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* InteractionManager_GetCurrentReading_m0AA708A68E3A9FFD8455504D9837C1445468D8DC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_GetCurrentReading_m0AA708A68E3A9FFD8455504D9837C1445468D8DC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* V_0 = NULL;
	InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* V_1 = NULL;
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		int32_t L_0 = InteractionManager_get_numSourceStates_m32642E2341918DC9E426852639460D5D1BE66F53(/*hidden argument*/NULL);
		InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* L_1 = (InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA*)(InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA*)SZArrayNew(InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA_il2cpp_TypeInfo_var, (uint32_t)L_0);
		V_0 = L_1;
		InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* L_2 = V_0;
		InteractionManager_GetCurrentReading_Internal_m48B784A597B956AF326A4DCB9C00F2AACF4C62A7(L_2, /*hidden argument*/NULL);
		InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* L_3 = V_0;
		V_1 = L_3;
		goto IL_001a;
	}

IL_001a:
	{
		InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* L_4 = V_1;
		return L_4;
	}
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager::GetCurrentReading_Internal(UnityEngine.XR.WSA.Input.InteractionSourceState[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_GetCurrentReading_Internal_m48B784A597B956AF326A4DCB9C00F2AACF4C62A7 (InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA* ___sourceStates0, const RuntimeMethod* method)
{
	typedef int32_t (*InteractionManager_GetCurrentReading_Internal_m48B784A597B956AF326A4DCB9C00F2AACF4C62A7_ftn) (InteractionSourceStateU5BU5D_tB8FF9D808295324B506769A009A5BD2C5CD671EA*);
	static InteractionManager_GetCurrentReading_Internal_m48B784A597B956AF326A4DCB9C00F2AACF4C62A7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InteractionManager_GetCurrentReading_Internal_m48B784A597B956AF326A4DCB9C00F2AACF4C62A7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.InteractionManager::GetCurrentReading_Internal(UnityEngine.XR.WSA.Input.InteractionSourceState[])");
	int32_t retVal = _il2cpp_icall_func(___sourceStates0);
	return retVal;
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionManager::get_numSourceStates()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionManager_get_numSourceStates_m32642E2341918DC9E426852639460D5D1BE66F53 (const RuntimeMethod* method)
{
	typedef int32_t (*InteractionManager_get_numSourceStates_m32642E2341918DC9E426852639460D5D1BE66F53_ftn) ();
	static InteractionManager_get_numSourceStates_m32642E2341918DC9E426852639460D5D1BE66F53_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (InteractionManager_get_numSourceStates_m32642E2341918DC9E426852639460D5D1BE66F53_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Input.InteractionManager::get_numSourceStates()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager::OnSourceEvent(UnityEngine.XR.WSA.Input.InteractionManager_EventType,System.IntPtr,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB (int32_t ___eventType0, intptr_t ___statePtr1, int32_t ___pressType2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_1 = NULL;
	Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * V_2 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_3 = NULL;
	Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * V_4 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_5 = NULL;
	Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * V_6 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_7 = NULL;
	Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * V_8 = NULL;
	SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * V_9 = NULL;
	Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * V_10 = NULL;
	{
		intptr_t L_0 = ___statePtr1;
		void* L_1 = IntPtr_op_Explicit_mB8A512095BCE1A23B2840310C8A27C928ADAD027((intptr_t)L_0, /*hidden argument*/NULL);
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_2 = (*(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *)L_1);
		V_0 = L_2;
		int32_t L_3 = ___eventType0;
		switch (L_3)
		{
			case 0:
			{
				goto IL_002c;
			}
			case 1:
			{
				goto IL_005e;
			}
			case 2:
			{
				goto IL_0093;
			}
			case 3:
			{
				goto IL_00cb;
			}
			case 4:
			{
				goto IL_0104;
			}
		}
	}
	{
		goto IL_013d;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_4 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetectedLegacy_5();
		V_1 = L_4;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_5 = V_1;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_6 = V_1;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_7 = V_0;
		NullCheck(L_6);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_6, L_7, /*hidden argument*/NULL);
	}

IL_0040:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_8 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceDetected_0();
		V_2 = L_8;
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_9 = V_2;
		if (!L_9)
		{
			goto IL_0058;
		}
	}
	{
		Action_1_t5FBB0CAB4D84AD4BEC640760EBC9B9D18AFDDEA0 * L_10 = V_2;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_11 = V_0;
		InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755  L_12;
		memset((&L_12), 0, sizeof(L_12));
		InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580((&L_12), L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66(L_10, L_12, /*hidden argument*/Action_1_Invoke_m4F3930EF30194EC44F419B3E94774BE548E5BC66_RuntimeMethod_var);
	}

IL_0058:
	{
		goto IL_0148;
	}

IL_005e:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_13 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLostLegacy_6();
		V_3 = L_13;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_14 = V_3;
		if (!L_14)
		{
			goto IL_0072;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_15 = V_3;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_16 = V_0;
		NullCheck(L_15);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_15, L_16, /*hidden argument*/NULL);
	}

IL_0072:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_17 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceLost_1();
		V_4 = L_17;
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_18 = V_4;
		if (!L_18)
		{
			goto IL_008d;
		}
	}
	{
		Action_1_t0880AB893CE69E2212857481DAEDA70E8C3AA7DA * L_19 = V_4;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_20 = V_0;
		InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC  L_21;
		memset((&L_21), 0, sizeof(L_21));
		InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF((&L_21), L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF(L_19, L_21, /*hidden argument*/Action_1_Invoke_m40CAE8C6B97EA521838F7AC64D9FFFD267AF3FAF_RuntimeMethod_var);
	}

IL_008d:
	{
		goto IL_0148;
	}

IL_0093:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_22 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdatedLegacy_9();
		V_5 = L_22;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_23 = V_5;
		if (!L_23)
		{
			goto IL_00aa;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_24 = V_5;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_25 = V_0;
		NullCheck(L_24);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_24, L_25, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_26 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceUpdated_4();
		V_6 = L_26;
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_27 = V_6;
		if (!L_27)
		{
			goto IL_00c5;
		}
	}
	{
		Action_1_tDF471E8C2FE20585DF9E74E046AA2D3A84629C91 * L_28 = V_6;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_29 = V_0;
		InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5  L_30;
		memset((&L_30), 0, sizeof(L_30));
		InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76((&L_30), L_29, /*hidden argument*/NULL);
		NullCheck(L_28);
		Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1(L_28, L_30, /*hidden argument*/Action_1_Invoke_mC6B23C0EDFD5C27A34D6DD6AE326D59CA7005CF1_RuntimeMethod_var);
	}

IL_00c5:
	{
		goto IL_0148;
	}

IL_00cb:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_31 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressedLegacy_7();
		V_7 = L_31;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_32 = V_7;
		if (!L_32)
		{
			goto IL_00e2;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_33 = V_7;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_34 = V_0;
		NullCheck(L_33);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_33, L_34, /*hidden argument*/NULL);
	}

IL_00e2:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_35 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourcePressed_2();
		V_8 = L_35;
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_36 = V_8;
		if (!L_36)
		{
			goto IL_00fe;
		}
	}
	{
		Action_1_t5925C354A9C769D7F04E130EF166F2EDD1B8EE93 * L_37 = V_8;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_38 = V_0;
		int32_t L_39 = ___pressType2;
		InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B  L_40;
		memset((&L_40), 0, sizeof(L_40));
		InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E((&L_40), L_38, L_39, /*hidden argument*/NULL);
		NullCheck(L_37);
		Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B(L_37, L_40, /*hidden argument*/Action_1_Invoke_m38339FC12F03EEF8FB28FBA0DFEF104F891A5A8B_RuntimeMethod_var);
	}

IL_00fe:
	{
		goto IL_0148;
	}

IL_0104:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_41 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleasedLegacy_8();
		V_9 = L_41;
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_42 = V_9;
		if (!L_42)
		{
			goto IL_011b;
		}
	}
	{
		SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * L_43 = V_9;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_44 = V_0;
		NullCheck(L_43);
		SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30(L_43, L_44, /*hidden argument*/NULL);
	}

IL_011b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var);
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_45 = ((InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_StaticFields*)il2cpp_codegen_static_fields_for(InteractionManager_tD3DEC7E7B6FD949771B56036CCB26F6C0A4914E4_il2cpp_TypeInfo_var))->get_InteractionSourceReleased_3();
		V_10 = L_45;
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_46 = V_10;
		if (!L_46)
		{
			goto IL_0137;
		}
	}
	{
		Action_1_tB303DD7A7900C391F27676319D72609C5B9BDFF7 * L_47 = V_10;
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_48 = V_0;
		int32_t L_49 = ___pressType2;
		InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943  L_50;
		memset((&L_50), 0, sizeof(L_50));
		InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939((&L_50), L_48, L_49, /*hidden argument*/NULL);
		NullCheck(L_47);
		Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93(L_47, L_50, /*hidden argument*/Action_1_Invoke_m4732464FB4773D55E9DBB35D18FB58DB8CE78B93_RuntimeMethod_var);
	}

IL_0137:
	{
		goto IL_0148;
	}

IL_013d:
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_51 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m9A85EF7FEFEC21DDD525A67E831D77278E5165B7(L_51, _stringLiteralE56BDFDA02CDB1AF069D764166DBFD5EF4DC1A56, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_51, NULL, InteractionManager_OnSourceEvent_mC853244D8689197F06A503F65D1F4195C57ED8FB_RuntimeMethod_var);
	}

IL_0148:
	{
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 );
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___state0);

}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler__ctor_m1EAC8086B0A86E60C97EF19963CB3D978609A40A (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::Invoke(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_Invoke_mC13C60B714BB48292BC11625A124A685F07B9E30 (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___state0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
					else
						GenericVirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(targetMethod, targetThis, ___state0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___state0);
					else
						VirtActionInvoker1< InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___state0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___state0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::BeginInvoke(UnityEngine.XR.WSA.Input.InteractionSourceState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SourceEventHandler_BeginInvoke_m3A04E1F637F48F7B18E726173549DD5B9D60295E (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SourceEventHandler_BeginInvoke_m3A04E1F637F48F7B18E726173549DD5B9D60295E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250_il2cpp_TypeInfo_var, &___state0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionManager_SourceEventHandler::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SourceEventHandler_EndInvoke_mE6623F946EBAAE16F855336DB4E92352BCABD83F (SourceEventHandler_tD9AB6A197C9FA91D255ACEC9EB413ED769ED0F75 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		RuntimeObject * L_0 = ___obj0;
		void* L_1 = alloca(sizeof(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE ));
		UnBoxNullable(((RuntimeObject *)IsInst((RuntimeObject*)L_0, Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE_il2cpp_TypeInfo_var)), InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6_il2cpp_TypeInfo_var, L_1);
		V_0 = ((*(Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)((Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)L_1)));
		bool L_2 = Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_inline((Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)(&V_0), /*hidden argument*/Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_RuntimeMethod_var);
		if (!((((int32_t)L_2) == ((int32_t)0))? 1 : 0))
		{
			goto IL_0023;
		}
	}
	{
		V_1 = (bool)0;
		goto IL_0036;
	}

IL_0023:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_3 = Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B((Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE *)(&V_0), /*hidden argument*/Nullable_1_get_Value_m2164B0E14FD6D71E914E108D3046E1F3D048890B_RuntimeMethod_var);
		bool L_4 = InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645((InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *)__this, L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		goto IL_0036;
	}

IL_0036:
	{
		bool L_5 = V_1;
		return L_5;
	}
}
IL2CPP_EXTERN_C  bool InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C_AdjustorThunk (RuntimeObject * __this, RuntimeObject * ___obj0, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_Equals_m826241F239D49E68D24D6CADEC50FF3E60D6928C(_thisAdjusted, ___obj0, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::Equals(UnityEngine.XR.WSA.Input.InteractionSource)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		uint32_t L_0 = (&___other0)->get_m_Id_0();
		uint32_t L_1 = __this->get_m_Id_0();
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645_AdjustorThunk (RuntimeObject * __this, InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ___other0, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_Equals_mEAC22BC627922A90171992CC8DA4BA43953AC645(_thisAdjusted, ___other0, method);
}
// System.Int32 UnityEngine.XR.WSA.Input.InteractionSource::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_GetHashCode_m86EC32248092C3E1CE990C74D52E35E0E3CFF515(_thisAdjusted, method);
}
// System.UInt32 UnityEngine.XR.WSA.Input.InteractionSource::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	uint32_t V_0 = 0;
	{
		uint32_t L_0 = __this->get_m_Id_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		uint32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  uint32_t InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_id_m2F247B3024CB643ECF1307F4FA7F4908FB640011(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceKind UnityEngine.XR.WSA.Input.InteractionSource::get_kind()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_SourceKind_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_kind_m5BBAF17ED0C432BABF1623E8DE389DEF5A901CC7(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceHandedness UnityEngine.XR.WSA.Input.InteractionSource::get_handedness()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_Handedness_2();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_handedness_mDD38ECFC1064B9688796ADEB52B167918204829C(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSource::get_supportsPointing()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84 (InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_3();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 * _thisAdjusted = reinterpret_cast<InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6 *>(__this + 1);
	return InteractionSource_get_supportsPointing_mD9DE6FE230FE2633107C50A062DE4ED65975FB84(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240_inline((InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *>(__this + 1);
	InteractionSourceDetectedEventArgs__ctor_m2FBA271484B0D35C53DB7BE9C4251236737E4580(_thisAdjusted, ___state0, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceDetectedEventArgs_get_state_mECB260AB99B307205FE6ED0EFADD869AF464F083 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = __this->get_U3CstateU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceDetectedEventArgs_get_state_mECB260AB99B307205FE6ED0EFADD869AF464F083_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *>(__this + 1);
	return InteractionSourceDetectedEventArgs_get_state_mECB260AB99B307205FE6ED0EFADD869AF464F083(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceDetectedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240 (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * _thisAdjusted = reinterpret_cast<InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 *>(__this + 1);
	InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23_inline((InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *>(__this + 1);
	InteractionSourceLostEventArgs__ctor_mE13D688DF29978E37FC86E1EEC3469D46532D7BF(_thisAdjusted, ___state0, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceLostEventArgs_get_state_m166EE2D5F8E5740573061893A34567D3B1CCFABC (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = __this->get_U3CstateU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceLostEventArgs_get_state_m166EE2D5F8E5740573061893A34567D3B1CCFABC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *>(__this + 1);
	return InteractionSourceLostEventArgs_get_state_m166EE2D5F8E5740573061893A34567D3B1CCFABC(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceLostEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23 (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * _thisAdjusted = reinterpret_cast<InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC *>(__this + 1);
	InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetPosition(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetPosition_m3A15D0CA3302B8AFD9980AD7FBECB00331E7EA95 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___position0;
		bool L_1 = InteractionSourcePose_TryGetPosition_m8097C4F7E532CFEF16C1209ECBD726CD2383A2E1((InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 *)__this, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		bool L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourcePose_TryGetPosition_m3A15D0CA3302B8AFD9980AD7FBECB00331E7EA95_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, const RuntimeMethod* method)
{
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * _thisAdjusted = reinterpret_cast<InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 *>(__this + 1);
	return InteractionSourcePose_TryGetPosition_m3A15D0CA3302B8AFD9980AD7FBECB00331E7EA95(_thisAdjusted, ___position0, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetPosition(UnityEngine.Vector3&,UnityEngine.XR.WSA.Input.InteractionSourceNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetPosition_m8097C4F7E532CFEF16C1209ECBD726CD2383A2E1 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, int32_t ___node1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___node1;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_1 = ___position0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = __this->get_m_GripPosition_2();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_1 = L_2;
		int32_t L_3 = __this->get_m_Flags_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0028:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_4 = ___position0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_5 = __this->get_m_PointerPosition_3();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_4 = L_5;
		int32_t L_6 = __this->get_m_Flags_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_6&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0049:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourcePose_TryGetPosition_m8097C4F7E532CFEF16C1209ECBD726CD2383A2E1_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___position0, int32_t ___node1, const RuntimeMethod* method)
{
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * _thisAdjusted = reinterpret_cast<InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 *>(__this + 1);
	return InteractionSourcePose_TryGetPosition_m8097C4F7E532CFEF16C1209ECBD726CD2383A2E1(_thisAdjusted, ___position0, ___node1, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetRotation(UnityEngine.Quaternion&,UnityEngine.XR.WSA.Input.InteractionSourceNode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetRotation_m7FBD558BBB19BFC922164C573B69FFCE2B0B2502 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, int32_t ___node1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = ___node1;
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_1 = ___rotation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_2 = __this->get_m_GripRotation_0();
		*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_1 = L_2;
		int32_t L_3 = __this->get_m_Flags_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_3&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0028:
	{
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * L_4 = ___rotation0;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_5 = __this->get_m_PointerRotation_1();
		*(Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)L_4 = L_5;
		int32_t L_6 = __this->get_m_Flags_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_6&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0049;
	}

IL_0049:
	{
		bool L_7 = V_0;
		return L_7;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourcePose_TryGetRotation_m7FBD558BBB19BFC922164C573B69FFCE2B0B2502_AdjustorThunk (RuntimeObject * __this, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___rotation0, int32_t ___node1, const RuntimeMethod* method)
{
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * _thisAdjusted = reinterpret_cast<InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 *>(__this + 1);
	return InteractionSourcePose_TryGetRotation_m7FBD558BBB19BFC922164C573B69FFCE2B0B2502(_thisAdjusted, ___rotation0, ___node1, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetVelocity_mCEF561CD9C3E56E6DCCF6199848F4CB2880A55F3 (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___velocity0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_m_Velocity_4();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0 = L_1;
		int32_t L_2 = __this->get_m_Flags_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0022:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourcePose_TryGetVelocity_mCEF561CD9C3E56E6DCCF6199848F4CB2880A55F3_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___velocity0, const RuntimeMethod* method)
{
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * _thisAdjusted = reinterpret_cast<InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 *>(__this + 1);
	return InteractionSourcePose_TryGetVelocity_mCEF561CD9C3E56E6DCCF6199848F4CB2880A55F3(_thisAdjusted, ___velocity0, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourcePose::TryGetAngularVelocity(UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourcePose_TryGetAngularVelocity_m7BD7D3F6AC10A4BC566795C77AAC5E1231CDCC5C (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocity0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * L_0 = ___angularVelocity0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = __this->get_m_AngularVelocity_5();
		*(Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)L_0 = L_1;
		int32_t L_2 = __this->get_m_Flags_7();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_2&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0022;
	}

IL_0022:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourcePose_TryGetAngularVelocity_m7BD7D3F6AC10A4BC566795C77AAC5E1231CDCC5C_AdjustorThunk (RuntimeObject * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___angularVelocity0, const RuntimeMethod* method)
{
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * _thisAdjusted = reinterpret_cast<InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 *>(__this + 1);
	return InteractionSourcePose_TryGetAngularVelocity_m7BD7D3F6AC10A4BC566795C77AAC5E1231CDCC5C(_thisAdjusted, ___angularVelocity0, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourcePositionAccuracy UnityEngine.XR.WSA.Input.InteractionSourcePose::get_positionAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InteractionSourcePose_get_positionAccuracy_m70A8D959928335C46F41618032428DB6E2F4DAFB (InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->get_m_PositionAccuracy_6();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  int32_t InteractionSourcePose_get_positionAccuracy_m70A8D959928335C46F41618032428DB6E2F4DAFB_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 * _thisAdjusted = reinterpret_cast<InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73 *>(__this + 1);
	return InteractionSourcePose_get_positionAccuracy_m70A8D959928335C46F41618032428DB6E2F4DAFB(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08_inline((InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855_inline((InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + 1);
	InteractionSourcePressedEventArgs__ctor_m82FD8AD6FF6F74715630EA2A6B620A0B6B953B5E(_thisAdjusted, ___state0, ___pressType1, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourcePressedEventArgs_get_state_m463C814A2D363BA0C18A946482EDF97C5AAE55C8 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = __this->get_U3CstateU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourcePressedEventArgs_get_state_m463C814A2D363BA0C18A946482EDF97C5AAE55C8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + 1);
	return InteractionSourcePressedEventArgs_get_state_m463C814A2D363BA0C18A946482EDF97C5AAE55C8(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + 1);
	InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourcePressedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855 (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * _thisAdjusted = reinterpret_cast<InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B *>(__this + 1);
	InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState,UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F_inline((InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *)__this, L_0, /*hidden argument*/NULL);
		int32_t L_1 = ___pressType1;
		InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF_inline((InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *)__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, int32_t ___pressType1, const RuntimeMethod* method)
{
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + 1);
	InteractionSourceReleasedEventArgs__ctor_m3874456214E10087996D31930D5FDE577E2D4939(_thisAdjusted, ___state0, ___pressType1, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceReleasedEventArgs_get_state_m43E770D02896B8DC6E969AE0AB890EBF93D466A8 (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = __this->get_U3CstateU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceReleasedEventArgs_get_state_m43E770D02896B8DC6E969AE0AB890EBF93D466A8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + 1);
	return InteractionSourceReleasedEventArgs_get_state_m43E770D02896B8DC6E969AE0AB890EBF93D466A8(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + 1);
	InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F_inline(_thisAdjusted, ___value0, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceReleasedEventArgs::set_pressType(UnityEngine.XR.WSA.Input.InteractionSourcePressType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF_AdjustorThunk (RuntimeObject * __this, int32_t ___value0, const RuntimeMethod* method)
{
	InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * _thisAdjusted = reinterpret_cast<InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 *>(__this + 1);
	InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_anyPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_anyPressed_m5CFC063DB2914C3AD0120C76452CB5C249476743 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_6();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)2))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourceState_get_anyPressed_m5CFC063DB2914C3AD0120C76452CB5C249476743_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_anyPressed_m5CFC063DB2914C3AD0120C76452CB5C249476743(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.InteractionSourceState::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  InteractionSourceState_get_source_m0EDD957DF0E8396F223E23778032A7FC4139D350 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_1();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  InteractionSourceState_get_source_m0EDD957DF0E8396F223E23778032A7FC4139D350_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_source_m0EDD957DF0E8396F223E23778032A7FC4139D350(_thisAdjusted, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourcePose UnityEngine.XR.WSA.Input.InteractionSourceState::get_sourcePose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  InteractionSourceState_get_sourcePose_m653B59162C3830240CBE1C2234E0FBD3EA2AD463 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSourceProperties_t4F09AE5472B080CF0CA6D8DB68B8D48E90FA455A * L_0 = __this->get_address_of_m_Properties_0();
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_1 = L_0->get_m_SourcePose_2();
		V_0 = L_1;
		goto IL_0012;
	}

IL_0012:
	{
		InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C  InteractionSourcePose_t249CD43F634426269571F0E4689428ACC8C54F73  InteractionSourceState_get_sourcePose_m653B59162C3830240CBE1C2234E0FBD3EA2AD463_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_sourcePose_m653B59162C3830240CBE1C2234E0FBD3EA2AD463(_thisAdjusted, method);
}
// System.Single UnityEngine.XR.WSA.Input.InteractionSourceState::get_selectPressedAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float InteractionSourceState_get_selectPressedAmount_m5CD838F1A2B21CD1442B9F985D58017817375BF8 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		float L_0 = __this->get_m_SelectPressedAmount_5();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		float L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  float InteractionSourceState_get_selectPressedAmount_m5CD838F1A2B21CD1442B9F985D58017817375BF8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_selectPressedAmount_m5CD838F1A2B21CD1442B9F985D58017817375BF8(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_selectPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_selectPressed_m0AF7BAA481FD0A7F9E2A7F73CAC2E40168C99509 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_6();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)16)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourceState_get_selectPressed_m0AF7BAA481FD0A7F9E2A7F73CAC2E40168C99509_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_selectPressed_m0AF7BAA481FD0A7F9E2A7F73CAC2E40168C99509(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_menuPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_menuPressed_mD1CB5B712D260BFD669E9A4AF1F4D7AD37C79483 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_6();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)32)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourceState_get_menuPressed_mD1CB5B712D260BFD669E9A4AF1F4D7AD37C79483_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_menuPressed_mD1CB5B712D260BFD669E9A4AF1F4D7AD37C79483(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_grasped()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_grasped_mE161F22D75F179855AA1CD0C5C86414DAE9DCE89 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_6();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)1))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourceState_get_grasped_mE161F22D75F179855AA1CD0C5C86414DAE9DCE89_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_grasped_mE161F22D75F179855AA1CD0C5C86414DAE9DCE89(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_touchpadTouched()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_touchpadTouched_mA621B36F9AB0A6E81F43FD49512E0856F852A7F2 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_6();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)((int32_t)64)))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourceState_get_touchpadTouched_mA621B36F9AB0A6E81F43FD49512E0856F852A7F2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_touchpadTouched_mA621B36F9AB0A6E81F43FD49512E0856F852A7F2(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_touchpadPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_touchpadPressed_mBB31FB102FFEECB1006F7EFF572EA9A2ADA0E64E (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_6();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)4))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourceState_get_touchpadPressed_mBB31FB102FFEECB1006F7EFF572EA9A2ADA0E64E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_touchpadPressed_mBB31FB102FFEECB1006F7EFF572EA9A2ADA0E64E(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::get_touchpadPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InteractionSourceState_get_touchpadPosition_m28CD116270C462C7EFA9E7D9B66F824FB1280333 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_TouchpadPosition_4();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InteractionSourceState_get_touchpadPosition_m28CD116270C462C7EFA9E7D9B66F824FB1280333_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_touchpadPosition_m28CD116270C462C7EFA9E7D9B66F824FB1280333(_thisAdjusted, method);
}
// UnityEngine.Vector2 UnityEngine.XR.WSA.Input.InteractionSourceState::get_thumbstickPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InteractionSourceState_get_thumbstickPosition_mEC9C7A8379FA3DDE6D5B49EE9F928809895EE1F0 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_0 = __this->get_m_ThumbstickPosition_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector2_tA85D2DD88578276CA8A8796756458277E72D073D  InteractionSourceState_get_thumbstickPosition_mEC9C7A8379FA3DDE6D5B49EE9F928809895EE1F0_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_thumbstickPosition_mEC9C7A8379FA3DDE6D5B49EE9F928809895EE1F0(_thisAdjusted, method);
}
// System.Boolean UnityEngine.XR.WSA.Input.InteractionSourceState::get_thumbstickPressed()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InteractionSourceState_get_thumbstickPressed_m1728B9C6F1366D119F8704B05CBF065C1E90A729 (InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		int32_t L_0 = __this->get_m_Flags_6();
		V_0 = (bool)((((int32_t)((((int32_t)((int32_t)((int32_t)L_0&(int32_t)8))) == ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0015;
	}

IL_0015:
	{
		bool L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool InteractionSourceState_get_thumbstickPressed_m1728B9C6F1366D119F8704B05CBF065C1E90A729_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 * _thisAdjusted = reinterpret_cast<InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250 *>(__this + 1);
	return InteractionSourceState_get_thumbstickPressed_m1728B9C6F1366D119F8704B05CBF065C1E90A729(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::.ctor(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	{
		il2cpp_codegen_initobj(__this, sizeof(InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 ));
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___state0;
		InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6_inline((InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *)__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___state0, const RuntimeMethod* method)
{
	InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *>(__this + 1);
	InteractionSourceUpdatedEventArgs__ctor_m78938DD82C92670ECEF9C43CA844F6448F22FA76(_thisAdjusted, ___state0, method);
}
// UnityEngine.XR.WSA.Input.InteractionSourceState UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::get_state()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceUpdatedEventArgs_get_state_mA57E2786569D9E072BC5F4CFEE412FF5447C1FED (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, const RuntimeMethod* method)
{
	InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = __this->get_U3CstateU3Ek__BackingField_0();
		V_0 = L_0;
		goto IL_000c;
	}

IL_000c:
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  InteractionSourceUpdatedEventArgs_get_state_mA57E2786569D9E072BC5F4CFEE412FF5447C1FED_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *>(__this + 1);
	return InteractionSourceUpdatedEventArgs_get_state_mA57E2786569D9E072BC5F4CFEE412FF5447C1FED(_thisAdjusted, method);
}
// System.Void UnityEngine.XR.WSA.Input.InteractionSourceUpdatedEventArgs::set_state(UnityEngine.XR.WSA.Input.InteractionSourceState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6 (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C  void InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6_AdjustorThunk (RuntimeObject * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * _thisAdjusted = reinterpret_cast<InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 *>(__this + 1);
	InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6_inline(_thisAdjusted, ___value0, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCanceledEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationCanceledEventArgs_get_source_m6ACFFD28C36AF95DA8A57CF61EC9958C55EB1CF8 (ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationCanceledEventArgs_get_source_m6ACFFD28C36AF95DA8A57CF61EC9958C55EB1CF8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 * _thisAdjusted = reinterpret_cast<ManipulationCanceledEventArgs_t6CD33D88A2B9B5FF30BAE21E2FE253EF9FA98417 *>(__this + 1);
	return ManipulationCanceledEventArgs_get_source_m6ACFFD28C36AF95DA8A57CF61EC9958C55EB1CF8(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationCompletedEventArgs_get_source_m5208494DB5146AA1B33B9A30FDCED4FEB9339C9A (ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationCompletedEventArgs_get_source_m5208494DB5146AA1B33B9A30FDCED4FEB9339C9A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 * _thisAdjusted = reinterpret_cast<ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 *>(__this + 1);
	return ManipulationCompletedEventArgs_get_source_m5208494DB5146AA1B33B9A30FDCED4FEB9339C9A(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationCompletedEventArgs::get_cumulativeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManipulationCompletedEventArgs_get_cumulativeDelta_m1607E642803A456ACC1A6EE924621DB7FB1C304F (ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_CumulativeDelta_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManipulationCompletedEventArgs_get_cumulativeDelta_m1607E642803A456ACC1A6EE924621DB7FB1C304F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 * _thisAdjusted = reinterpret_cast<ManipulationCompletedEventArgs_t68FA66838267BEDC02E178D76EFC5E03D1958BA0 *>(__this + 1);
	return ManipulationCompletedEventArgs_get_cumulativeDelta_m1607E642803A456ACC1A6EE924621DB7FB1C304F(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationStartedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationStartedEventArgs_get_source_mD4C70DBE61A0FD2C6F33FDFEA7B38D1C57C67CBE (ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationStartedEventArgs_get_source_mD4C70DBE61A0FD2C6F33FDFEA7B38D1C57C67CBE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 * _thisAdjusted = reinterpret_cast<ManipulationStartedEventArgs_t15AFA1D2E17F9D5E2DFA7B7384FA5A79481AEAB2 *>(__this + 1);
	return ManipulationStartedEventArgs_get_source_mD4C70DBE61A0FD2C6F33FDFEA7B38D1C57C67CBE(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationUpdatedEventArgs_get_source_mDEB43B119C0FE505A8888A6FE6197EE30D96E84D (ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  ManipulationUpdatedEventArgs_get_source_mDEB43B119C0FE505A8888A6FE6197EE30D96E84D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E * _thisAdjusted = reinterpret_cast<ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E *>(__this + 1);
	return ManipulationUpdatedEventArgs_get_source_mDEB43B119C0FE505A8888A6FE6197EE30D96E84D(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.ManipulationUpdatedEventArgs::get_cumulativeDelta()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManipulationUpdatedEventArgs_get_cumulativeDelta_mA5AEB40040097B0BD134705DC04E0590AB669A1D (ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_CumulativeDelta_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ManipulationUpdatedEventArgs_get_cumulativeDelta_mA5AEB40040097B0BD134705DC04E0590AB669A1D_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E * _thisAdjusted = reinterpret_cast<ManipulationUpdatedEventArgs_t6B06C74A87C5FC65D6B45AAE8DC1BB59C147089E *>(__this + 1);
	return ManipulationUpdatedEventArgs_get_cumulativeDelta_mA5AEB40040097B0BD134705DC04E0590AB669A1D(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCanceledEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationCanceledEventArgs_get_source_m3ADA49133856959A797AA1C469372066C487AA77 (NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationCanceledEventArgs_get_source_m3ADA49133856959A797AA1C469372066C487AA77_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 * _thisAdjusted = reinterpret_cast<NavigationCanceledEventArgs_tC2B533AD31373B31AF9FDC354D3A07C749FC9760 *>(__this + 1);
	return NavigationCanceledEventArgs_get_source_m3ADA49133856959A797AA1C469372066C487AA77(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationCompletedEventArgs_get_source_mCC32DB094E5EAFCB3B3BDF483149B80E530EBE86 (NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationCompletedEventArgs_get_source_mCC32DB094E5EAFCB3B3BDF483149B80E530EBE86_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 * _thisAdjusted = reinterpret_cast<NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 *>(__this + 1);
	return NavigationCompletedEventArgs_get_source_mCC32DB094E5EAFCB3B3BDF483149B80E530EBE86(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationCompletedEventArgs::get_normalizedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavigationCompletedEventArgs_get_normalizedOffset_m30141A58DAFF5B187E679D3012210B489067D555 (NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_NormalizedOffset_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavigationCompletedEventArgs_get_normalizedOffset_m30141A58DAFF5B187E679D3012210B489067D555_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 * _thisAdjusted = reinterpret_cast<NavigationCompletedEventArgs_tA0A6DD23233401CBAE4848F6B6D0BA03DE647E39 *>(__this + 1);
	return NavigationCompletedEventArgs_get_normalizedOffset_m30141A58DAFF5B187E679D3012210B489067D555(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationStartedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationStartedEventArgs_get_source_mD608B310133B71E49F7F2BEF116B37B109EB3FEA (NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationStartedEventArgs_get_source_mD608B310133B71E49F7F2BEF116B37B109EB3FEA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 * _thisAdjusted = reinterpret_cast<NavigationStartedEventArgs_t834E02E24343414BB48A9099C7CF0C331C859339 *>(__this + 1);
	return NavigationStartedEventArgs_get_source_mD608B310133B71E49F7F2BEF116B37B109EB3FEA(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.Input.InteractionSource UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::get_source()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationUpdatedEventArgs_get_source_mD7ED4880FF2CFC565EC5C7DE47DE5A5975BB5312 (NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA * __this, const RuntimeMethod* method)
{
	InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_0 = __this->get_m_Source_0();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  InteractionSource_t21335CC7BE7B9164D14283EEA3EC775AB2720DF6  NavigationUpdatedEventArgs_get_source_mD7ED4880FF2CFC565EC5C7DE47DE5A5975BB5312_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA * _thisAdjusted = reinterpret_cast<NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA *>(__this + 1);
	return NavigationUpdatedEventArgs_get_source_mD7ED4880FF2CFC565EC5C7DE47DE5A5975BB5312(_thisAdjusted, method);
}
// UnityEngine.Vector3 UnityEngine.XR.WSA.Input.NavigationUpdatedEventArgs::get_normalizedOffset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavigationUpdatedEventArgs_get_normalizedOffset_m63EFB136CBEC39D4BC004FC814B93FBA69760C02 (NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA * __this, const RuntimeMethod* method)
{
	Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_0 = __this->get_m_NormalizedOffset_3();
		V_0 = L_0;
		goto IL_000d;
	}

IL_000d:
	{
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_1 = V_0;
		return L_1;
	}
}
IL2CPP_EXTERN_C  Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  NavigationUpdatedEventArgs_get_normalizedOffset_m63EFB136CBEC39D4BC004FC814B93FBA69760C02_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA * _thisAdjusted = reinterpret_cast<NavigationUpdatedEventArgs_tC41595BC70171E7D2E16538C62923395B285F3BA *>(__this + 1);
	return NavigationUpdatedEventArgs_get_normalizedOffset_m63EFB136CBEC39D4BC004FC814B93FBA69760C02(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// UnityEngine.XR.WSA.HolographicStreamerConnectionState UnityEngine.XR.WSA.PerceptionRemoting::GetConnectionState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PerceptionRemoting_GetConnectionState_mFFF8B4E6DC4B520C4732C6002C28B5D31A5C3AC0 (const RuntimeMethod* method)
{
	typedef int32_t (*PerceptionRemoting_GetConnectionState_mFFF8B4E6DC4B520C4732C6002C28B5D31A5C3AC0_ftn) ();
	static PerceptionRemoting_GetConnectionState_mFFF8B4E6DC4B520C4732C6002C28B5D31A5C3AC0_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (PerceptionRemoting_GetConnectionState_mFFF8B4E6DC4B520C4732C6002C28B5D31A5C3AC0_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.PerceptionRemoting::GetConnectionState()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com_back(const WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Persistence.WorldAnchorStore
IL2CPP_EXTERN_C void WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_com_cleanup(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__ctor_m1EE05390756C0AE0F0100507693CE33C8A940E99 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::GetAsync(UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_GetAsync_mF912B2556FDDAC9FADB4BE2A335FCCB92DBDA8D6 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * ___onCompleted0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_GetAsync_mF912B2556FDDAC9FADB4BE2A335FCCB92DBDA8D6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_0 = ((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->get_s_Instance_1();
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * L_1 = ___onCompleted0;
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_2 = ((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->get_s_Instance_1();
		NullCheck(L_1);
		GetAsyncDelegate_Invoke_m4DF685AABA65DC8D46F48F81BFEAEB50B2652EB8(L_1, L_2, /*hidden argument*/NULL);
		goto IL_0025;
	}

IL_001d:
	{
		GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * L_3 = ___onCompleted0;
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		WorldAnchorStore_GetAsync_Internal_m11A3B0D2405C406330613A3070E24861D4D461C7(L_3, /*hidden argument*/NULL);
	}

IL_0025:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::GetAsync_Internal(UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_GetAsync_Internal_m11A3B0D2405C406330613A3070E24861D4D461C7 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * ___onCompleted0, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorStore_GetAsync_Internal_m11A3B0D2405C406330613A3070E24861D4D461C7_ftn) (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF *);
	static WorldAnchorStore_GetAsync_Internal_m11A3B0D2405C406330613A3070E24861D4D461C7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_GetAsync_Internal_m11A3B0D2405C406330613A3070E24861D4D461C7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::GetAsync_Internal(UnityEngine.XR.WSA.Persistence.WorldAnchorStore/GetAsyncDelegate)");
	_il2cpp_icall_func(___onCompleted0);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::InvokeGetAsyncDelegate(UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_InvokeGetAsyncDelegate_mBD8BD1DD969BB11783B8C527BAAA1B74CF05F959 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * ___handler0, intptr_t ___nativePtr1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_InvokeGetAsyncDelegate_mBD8BD1DD969BB11783B8C527BAAA1B74CF05F959_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = ___nativePtr1;
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_1 = (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *)il2cpp_codegen_object_new(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		WorldAnchorStore__ctor_m1EE05390756C0AE0F0100507693CE33C8A940E99(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var);
		((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->set_s_Instance_1(L_1);
		GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * L_2 = ___handler0;
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * L_3 = ((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->get_s_Instance_1();
		NullCheck(L_2);
		GetAsyncDelegate_Invoke_m4DF685AABA65DC8D46F48F81BFEAEB50B2652EB8(L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Save(System.String,UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___anchor1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___id0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_2, _stringLiteralFAE3F30C59F14099E2D347848D5A1F32E789BBC0, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B_RuntimeMethod_var);
	}

IL_001d:
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_3 = ___anchor1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteralF06DF609AED50661247CC6EC96C1599C193C3EC4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WorldAnchorStore_Save_m1A82C4156B8870A40AC80E0D9027638C2307729B_RuntimeMethod_var);
	}

IL_0035:
	{
		String_t* L_6 = ___id0;
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_7 = ___anchor1;
		bool L_8 = WorldAnchorStore_Save_Interal_mD1E6C9086BBA8CEBC602159899DB7754699633FF(__this, L_6, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0043;
	}

IL_0043:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Save_Interal(System.String,UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Save_Interal_mD1E6C9086BBA8CEBC602159899DB7754699633FF (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___anchor1, const RuntimeMethod* method)
{
	typedef bool (*WorldAnchorStore_Save_Interal_mD1E6C9086BBA8CEBC602159899DB7754699633FF_ftn) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, String_t*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *);
	static WorldAnchorStore_Save_Interal_mD1E6C9086BBA8CEBC602159899DB7754699633FF_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Save_Interal_mD1E6C9086BBA8CEBC602159899DB7754699633FF_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Save_Interal(System.String,UnityEngine.XR.WSA.WorldAnchor)");
	bool retVal = _il2cpp_icall_func(__this, ___id0, ___anchor1);
	return retVal;
}
// UnityEngine.XR.WSA.WorldAnchor UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Load(System.String,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * ___go1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * V_0 = NULL;
	bool V_1 = false;
	WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * V_2 = NULL;
	{
		String_t* L_0 = ___id0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_2, _stringLiteralFAE3F30C59F14099E2D347848D5A1F32E789BBC0, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E_RuntimeMethod_var);
	}

IL_001d:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_3 = ___go1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_4 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_3, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0035;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_5 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_5, _stringLiteralF06DF609AED50661247CC6EC96C1599C193C3EC4, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, NULL, WorldAnchorStore_Load_m229510D067D4607C59BF752A21211B82609ADE7E_RuntimeMethod_var);
	}

IL_0035:
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_6 = ___go1;
		NullCheck(L_6);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_7 = GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971(L_6, /*hidden argument*/GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var);
		V_0 = L_7;
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_8 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		V_1 = L_9;
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_10 = V_0;
		bool L_11 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_10, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_12 = ___go1;
		NullCheck(L_12);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_13 = GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF(L_12, /*hidden argument*/GameObject_AddComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_m41101CD1505A6B6B9717C15FACAEE0DD4D1E9CEF_RuntimeMethod_var);
		V_0 = L_13;
	}

IL_0059:
	{
		String_t* L_14 = ___id0;
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_15 = V_0;
		bool L_16 = WorldAnchorStore_Load_Internal_mC35FEA0AE303C1A1AD2CDB7ACF829195E6FAFA66(__this, L_14, L_15, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		GameObject_tBD1244AD56B4E59AAD76E5E7C9282EC5CE434F0F * L_17 = ___go1;
		NullCheck(L_17);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_18 = GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971(L_17, /*hidden argument*/GameObject_GetComponent_TisWorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE_mEC8104A64D5255720AC2B56454CD4B573B4B2971_RuntimeMethod_var);
		V_2 = L_18;
		goto IL_0088;
	}

IL_0073:
	{
		bool L_19 = V_1;
		if (L_19)
		{
			goto IL_0081;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_20 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mF6F4415EF22249D6E650FAA40E403283F19B7446(L_20, /*hidden argument*/NULL);
	}

IL_0081:
	{
		V_2 = (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *)NULL;
		goto IL_0088;
	}

IL_0088:
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_21 = V_2;
		return L_21;
	}
}
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Load_Internal(System.String,UnityEngine.XR.WSA.WorldAnchor)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Load_Internal_mC35FEA0AE303C1A1AD2CDB7ACF829195E6FAFA66 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___anchor1, const RuntimeMethod* method)
{
	typedef bool (*WorldAnchorStore_Load_Internal_mC35FEA0AE303C1A1AD2CDB7ACF829195E6FAFA66_ftn) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, String_t*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *);
	static WorldAnchorStore_Load_Internal_mC35FEA0AE303C1A1AD2CDB7ACF829195E6FAFA66_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Load_Internal_mC35FEA0AE303C1A1AD2CDB7ACF829195E6FAFA66_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Load_Internal(System.String,UnityEngine.XR.WSA.WorldAnchor)");
	bool retVal = _il2cpp_icall_func(__this, ___id0, ___anchor1);
	return retVal;
}
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Delete(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Delete_mB519C56F58E9312FBBD868A2D6D8560FCADC1063 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Delete_mB519C56F58E9312FBBD868A2D6D8560FCADC1063_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		String_t* L_0 = ___id0;
		bool L_1 = String_IsNullOrEmpty_m06A85A206AC2106D1982826C5665B9BD35324229(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_2 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_2, _stringLiteralFAE3F30C59F14099E2D347848D5A1F32E789BBC0, _stringLiteral87EA5DFC8B8E384D848979496E706390B497E547, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, NULL, WorldAnchorStore_Delete_mB519C56F58E9312FBBD868A2D6D8560FCADC1063_RuntimeMethod_var);
	}

IL_001d:
	{
		String_t* L_3 = ___id0;
		bool L_4 = WorldAnchorStore_Delete_Internal_mF6168B72EED5094D0A06010DE06957C6DA244BE2(__this, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_002a;
	}

IL_002a:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
// System.Boolean UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Delete_Internal(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchorStore_Delete_Internal_mF6168B72EED5094D0A06010DE06957C6DA244BE2 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, String_t* ___id0, const RuntimeMethod* method)
{
	typedef bool (*WorldAnchorStore_Delete_Internal_mF6168B72EED5094D0A06010DE06957C6DA244BE2_ftn) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, String_t*);
	static WorldAnchorStore_Delete_Internal_mF6168B72EED5094D0A06010DE06957C6DA244BE2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Delete_Internal_mF6168B72EED5094D0A06010DE06957C6DA244BE2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Delete_Internal(System.String)");
	bool retVal = _il2cpp_icall_func(__this, ___id0);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Clear_m989749B15A49EF60CDD0BB9AE59861833F8BD1DA (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorStore_Clear_m989749B15A49EF60CDD0BB9AE59861833F8BD1DA_ftn) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *);
	static WorldAnchorStore_Clear_m989749B15A49EF60CDD0BB9AE59861833F8BD1DA_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Clear_m989749B15A49EF60CDD0BB9AE59861833F8BD1DA_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Clear()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Dispose_m76B91FE5ABE8A03C0CED688FB45806705AFD5BCA (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore_Dispose_m76B91FE5ABE8A03C0CED688FB45806705AFD5BCA_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001c;
		}
	}
	{
		WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2(__this, /*hidden argument*/NULL);
	}

IL_001c:
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2 (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2_ftn) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *);
	static WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorStore_Internal_Destroy_m696A46F879CAB6B70C0E0F35642784D695E8D6C2_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Persistence.WorldAnchorStore::Internal_Destroy()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorStore__cctor_m7155DF59AE57F44A1A52432A5C2F84DF71DCB91B (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorStore__cctor_m7155DF59AE57F44A1A52432A5C2F84DF71DCB91B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_StaticFields*)il2cpp_codegen_static_fields_for(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_il2cpp_TypeInfo_var))->set_s_Instance_1((WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *)NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___store0' to native representation
	WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshaled_pinvoke ____store0_marshaled = {};
	if (___store0 != NULL)
	{
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke(*___store0, ____store0_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___store0 != NULL ? (&____store0_marshaled) : NULL);

	// Marshaling cleanup of parameter '___store0' native representation
	if ((&____store0_marshaled) != NULL)
	{
		WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225_marshal_pinvoke_cleanup(____store0_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate__ctor_m718A627539796C39CA29D6854A1A39A50965358F (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::Invoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_Invoke_m4DF685AABA65DC8D46F48F81BFEAEB50B2652EB8 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___store0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___store0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___store0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___store0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___store0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
					else
						GenericVirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(targetMethod, targetThis, ___store0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___store0);
					else
						VirtActionInvoker1< WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___store0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___store0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::BeginInvoke(UnityEngine.XR.WSA.Persistence.WorldAnchorStore,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GetAsyncDelegate_BeginInvoke_mA94E50F5B80EDB296DB09C9A70D47E12B56F1640 (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, WorldAnchorStore_tD361F689FE6F087AD3F38BA8724398992434E225 * ___store0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___store0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Persistence.WorldAnchorStore_GetAsyncDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GetAsyncDelegate_EndInvoke_mD5E52C44C9A850192B3B3825F3C5DD658134F8BC (GetAsyncDelegate_t243E451DDFA40F30023A031E71AA0BDC9D9865EF * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled)
{
	marshaled.___m_NativePtr_0 = unmarshaled.get_m_NativePtr_0();
}
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com_back(const WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96& unmarshaled)
{
	intptr_t unmarshaled_m_NativePtr_temp_0;
	memset((&unmarshaled_m_NativePtr_temp_0), 0, sizeof(unmarshaled_m_NativePtr_temp_0));
	unmarshaled_m_NativePtr_temp_0 = marshaled.___m_NativePtr_0;
	unmarshaled.set_m_NativePtr_0(unmarshaled_m_NativePtr_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch
IL2CPP_EXTERN_C void WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_com_cleanup(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, intptr_t ___nativePtr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_m_NativePtr_0((intptr_t)(0));
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		intptr_t L_0 = ___nativePtr0;
		__this->set_m_NativePtr_0((intptr_t)L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Finalize_mC4CDDD4515215AD9722D0B3E0DCD61227543E026 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Finalize_mC4CDDD4515215AD9722D0B3E0DCD61227543E026_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			intptr_t L_0 = __this->get_m_NativePtr_0();
			bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_0029;
			}
		}

IL_0016:
		{
			WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E(__this, /*hidden argument*/NULL);
			__this->set_m_NativePtr_0((intptr_t)(0));
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0035:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E_ftn) (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *);
	static WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_DisposeThreaded_Internal_m574176C40D00FE375207F69FC1FA41A076BA9F4E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::DisposeThreaded_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_mC7A39E9FC64D891BA34488B82C47A520C6679CC8 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_Dispose_mC7A39E9FC64D891BA34488B82C47A520C6679CC8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		intptr_t L_0 = __this->get_m_NativePtr_0();
		bool L_1 = IntPtr_op_Inequality_mB4886A806009EA825EFCC60CD2A7F6EB8E273A61((intptr_t)L_0, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7(__this, /*hidden argument*/NULL);
		__this->set_m_NativePtr_0((intptr_t)(0));
	}

IL_0029:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7 (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * __this, const RuntimeMethod* method)
{
	typedef void (*WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7_ftn) (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *);
	static WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchorTransferBatch_Dispose_Internal_m323AD2F9861BF64FC6F3B56191A61BFC8DC196B7_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::Dispose_Internal()");
	_il2cpp_icall_func(__this);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationDataAvailableDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate,System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationDataAvailableDelegate_mA1FECB163E9496AE0666436CE0B2929C086F2AF9 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * ___onSerializationDataAvailable0, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data1, const RuntimeMethod* method)
{
	{
		SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * L_0 = ___onSerializationDataAvailable0;
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = ___data1;
		NullCheck(L_0);
		SerializationDataAvailableDelegate_Invoke_m0250571900E492139B5293224D54EF8998AE72E8(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorSerializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorSerializationCompleteDelegate_mA54A2895A55377CFF34B8B80D30B96D88111267A (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * ___onSerializationComplete0, int32_t ___completionReason1, const RuntimeMethod* method)
{
	{
		SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * L_0 = ___onSerializationComplete0;
		int32_t L_1 = ___completionReason1;
		NullCheck(L_0);
		SerializationCompleteDelegate_Invoke_m9E8772EC4D698829FB563E7F98627921203146C3(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch::InvokeWorldAnchorDeserializationCompleteDelegate(UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate,UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_mD56BA5D47BF5FF904852057207DE97159CBC473A (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * ___onDeserializationComplete0, int32_t ___completionReason1, intptr_t ___nativePtr2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchorTransferBatch_InvokeWorldAnchorDeserializationCompleteDelegate_mD56BA5D47BF5FF904852057207DE97159CBC473A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * V_0 = NULL;
	{
		intptr_t L_0 = ___nativePtr2;
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * L_1 = (WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *)il2cpp_codegen_object_new(WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_il2cpp_TypeInfo_var);
		WorldAnchorTransferBatch__ctor_m9745D72088F3E565D1A4855DE025FE7288871C35(L_1, (intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * L_2 = ___onDeserializationComplete0;
		int32_t L_3 = ___completionReason1;
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * L_4 = V_0;
		NullCheck(L_2);
		DeserializationCompleteDelegate_Invoke_m4F01EB16C52D539B2A87C14D802F01325FC580A2(L_2, L_3, L_4, /*hidden argument*/NULL);
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
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{


	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___deserializedTransferBatch1' to native representation
	WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshaled_pinvoke ____deserializedTransferBatch1_marshaled = {};
	if (___deserializedTransferBatch1 != NULL)
	{
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke(*___deserializedTransferBatch1, ____deserializedTransferBatch1_marshaled);
	}

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0, ___deserializedTransferBatch1 != NULL ? (&____deserializedTransferBatch1_marshaled) : NULL);

	// Marshaling cleanup of parameter '___deserializedTransferBatch1' native representation
	if ((&____deserializedTransferBatch1_marshaled) != NULL)
	{
		WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96_marshal_pinvoke_cleanup(____deserializedTransferBatch1_marshaled);
	}

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate__ctor_m97585ED7C8399CDB2C0D3F7982C1F648BCEFA1A1 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_Invoke_m4F01EB16C52D539B2A87C14D802F01325FC580A2 (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, ___deserializedTransferBatch1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
					else
						GenericVirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(targetMethod, targetThis, ___completionReason0, ___deserializedTransferBatch1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
					else
						VirtActionInvoker2< int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0, ___deserializedTransferBatch1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 *, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, ___deserializedTransferBatch1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DeserializationCompleteDelegate_BeginInvoke_m9910723A46FB34B3B07F0DC4A36338761DBC789C (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, int32_t ___completionReason0, WorldAnchorTransferBatch_t7BF25F7D67684AD6C02C3162A81797BC9045BF96 * ___deserializedTransferBatch1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DeserializationCompleteDelegate_BeginInvoke_m9910723A46FB34B3B07F0DC4A36338761DBC789C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var, &___completionReason0);
	__d_args[1] = ___deserializedTransferBatch1;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_DeserializationCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DeserializationCompleteDelegate_EndInvoke_m08BF14AF510F5BB7712944A73FFA9389C085EF9E (DeserializationCompleteDelegate_tEE42E6197884BFC9946F07F02F2E3B437B4C2648 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___completionReason0);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate__ctor_mF7B88DF5A4519B47F8048FF7DFFD1E024C28A9C8 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::Invoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_Invoke_m9E8772EC4D698829FB563E7F98627921203146C3 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___completionReason0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
					else
						GenericVirtActionInvoker1< int32_t >::Invoke(targetMethod, targetThis, ___completionReason0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___completionReason0);
					else
						VirtActionInvoker1< int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___completionReason0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___completionReason0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::BeginInvoke(UnityEngine.XR.WSA.Sharing.SerializationCompletionReason,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationCompleteDelegate_BeginInvoke_m92A655FC6A647A2B89EBEB1113FB5AD2376B18A2 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, int32_t ___completionReason0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SerializationCompleteDelegate_BeginInvoke_m92A655FC6A647A2B89EBEB1113FB5AD2376B18A2_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[2] = {0};
	__d_args[0] = Box(SerializationCompletionReason_t36D4884AF265179731484C44E5A95235EB6F3987_il2cpp_TypeInfo_var, &___completionReason0);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationCompleteDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationCompleteDelegate_EndInvoke_mA9978B90E876FF6CFD6D759749C0A350D23F4337 (SerializationCompleteDelegate_tD53067D4C22E4C7372CFB92B4287EFE9188DA7EB * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(uint8_t*);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Marshaling of parameter '___data0' to native representation
	uint8_t* ____data0_marshaled = NULL;
	if (___data0 != NULL)
	{
		____data0_marshaled = reinterpret_cast<uint8_t*>((___data0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	il2cppPInvokeFunc(____data0_marshaled);

}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate__ctor_m5BD2F4BDE57C5602AA6F8AB2A0ADC96DDDB6FA4F (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::Invoke(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_Invoke_m0250571900E492139B5293224D54EF8998AE72E8 (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 1)
			{
				// open
				typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
		else if (___parameterCount != 1)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker0::Invoke(targetMethod, ___data0);
					else
						GenericVirtActionInvoker0::Invoke(targetMethod, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___data0);
					else
						VirtActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___data0, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
					else
						GenericVirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(targetMethod, targetThis, ___data0);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___data0);
					else
						VirtActionInvoker1< ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___data0);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___data0, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::BeginInvoke(System.Byte[],System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SerializationDataAvailableDelegate_BeginInvoke_m4A57348992D824F472F2ADE8007092796CB7156E (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___data0, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback1, RuntimeObject * ___object2, const RuntimeMethod* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___data0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);
}
// System.Void UnityEngine.XR.WSA.Sharing.WorldAnchorTransferBatch_SerializationDataAvailableDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerializationDataAvailableDelegate_EndInvoke_mE7BBFA22198584DD9711CDDBD32AB2D647E8B17F (SerializationDataAvailableDelegate_tEE1027E18A229BC1CF155CE15AFB47FD044654C7 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_pinvoke_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_back(const SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66& unmarshaled)
{
	Exception_t* ___outputMesh_1Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'outputMesh' of type 'SurfaceData': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___outputMesh_1Exception, NULL, NULL);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceData
IL2CPP_EXTERN_C void SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshal_com_cleanup(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SurfaceData::.ctor(UnityEngine.XR.WSA.SurfaceId,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceData__ctor_m24E7791EAA183D5E759CE6FC52F75BB5942D96E5 (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ____id0, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ____outputMesh1, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ____outputAnchor2, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ____outputCollider3, float ____trianglesPerCubicMeter4, bool ____bakeCollider5, const RuntimeMethod* method)
{
	{
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_0 = ____id0;
		__this->set_id_0(L_0);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_1 = ____outputMesh1;
		__this->set_outputMesh_1(L_1);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_2 = ____outputAnchor2;
		__this->set_outputAnchor_2(L_2);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_3 = ____outputCollider3;
		__this->set_outputCollider_3(L_3);
		float L_4 = ____trianglesPerCubicMeter4;
		__this->set_trianglesPerCubicMeter_4(L_4);
		bool L_5 = ____bakeCollider5;
		__this->set_bakeCollider_5(L_5);
		return;
	}
}
IL2CPP_EXTERN_C  void SurfaceData__ctor_m24E7791EAA183D5E759CE6FC52F75BB5942D96E5_AdjustorThunk (RuntimeObject * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ____id0, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ____outputMesh1, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ____outputAnchor2, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ____outputCollider3, float ____trianglesPerCubicMeter4, bool ____bakeCollider5, const RuntimeMethod* method)
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 * _thisAdjusted = reinterpret_cast<SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 *>(__this + 1);
	SurfaceData__ctor_m24E7791EAA183D5E759CE6FC52F75BB5942D96E5(_thisAdjusted, ____id0, ____outputMesh1, ____outputAnchor2, ____outputCollider3, ____trianglesPerCubicMeter4, ____bakeCollider5, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled)
{
	int32_t unmarshaled_m_Observer_temp_0 = 0;
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_pinvoke_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled)
{
	marshaled.___m_Observer_0 = unmarshaled.get_m_Observer_0();
}
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_back(const SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled, SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864& unmarshaled)
{
	int32_t unmarshaled_m_Observer_temp_0 = 0;
	unmarshaled_m_Observer_temp_0 = marshaled.___m_Observer_0;
	unmarshaled.set_m_Observer_0(unmarshaled_m_Observer_temp_0);
}
// Conversion method for clean up from marshalling of: UnityEngine.XR.WSA.SurfaceObserver
IL2CPP_EXTERN_C void SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshal_com_cleanup(SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864_marshaled_com& marshaled)
{
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver__ctor_mBDC4FE3EC359DB3F2481186A400EB613B9C63E90 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		int32_t L_0 = SurfaceObserver_Internal_Create_mB0E5B8A9F7755986FF30A0B65F8EFD4B09A7359E(__this, /*hidden argument*/NULL);
		__this->set_m_Observer_0(L_0);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceChangedEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate,System.Int32,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.Int64)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceChangedEvent_m94D6A260AC13754E63918998AF05126858438174 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged0, int32_t ___surfaceId1, int32_t ___changeType2, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds3, int64_t ___updateTime4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_InvokeSurfaceChangedEvent_m94D6A260AC13754E63918998AF05126858438174_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_0 = ___onSurfaceChanged0;
		if (!L_0)
		{
			goto IL_0021;
		}
	}
	{
		int32_t L_1 = ___surfaceId1;
		(&V_0)->set_handle_0(L_1);
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_2 = ___onSurfaceChanged0;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  L_3 = V_0;
		int32_t L_4 = ___changeType2;
		Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  L_5 = ___bounds3;
		int64_t L_6 = ___updateTime4;
		IL2CPP_RUNTIME_CLASS_INIT(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var);
		DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  L_7 = DateTime_FromFileTime_m48DCF83C7472940505DE71F244BC072E98FA5676(L_6, /*hidden argument*/NULL);
		NullCheck(L_2);
		SurfaceChangedDelegate_Invoke_mB275AE4804E6939E7B55AF0F3932913ED3A5D4B6(L_2, L_3, L_4, L_5, L_7, /*hidden argument*/NULL);
	}

IL_0021:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::InvokeSurfaceDataReadyEvent(UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_InvokeSurfaceDataReadyEvent_m3355AFDED498D73B71188F53221E5DEAB42C1A21 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady0, int32_t ___surfaceId1, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___outputMesh2, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___outputAnchor3, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___outputCollider4, float ___trisPerCubicMeter5, bool ___bakeCollider6, bool ___outputWritten7, float ___elapsedBakeTimeSeconds8, const RuntimeMethod* method)
{
	SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_0 = ___onDataReady0;
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_1 = (&V_0)->get_address_of_id_0();
		int32_t L_2 = ___surfaceId1;
		L_1->set_handle_0(L_2);
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_3 = ___outputMesh2;
		(&V_0)->set_outputMesh_1(L_3);
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_4 = ___outputAnchor3;
		(&V_0)->set_outputAnchor_2(L_4);
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_5 = ___outputCollider4;
		(&V_0)->set_outputCollider_3(L_5);
		float L_6 = ___trisPerCubicMeter5;
		(&V_0)->set_trianglesPerCubicMeter_4(L_6);
		bool L_7 = ___bakeCollider6;
		(&V_0)->set_bakeCollider_5(L_7);
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_8 = ___onDataReady0;
		SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  L_9 = V_0;
		bool L_10 = ___outputWritten7;
		float L_11 = ___elapsedBakeTimeSeconds8;
		NullCheck(L_8);
		SurfaceDataReadyDelegate_Invoke_m4DFF327EC78483BEA7B886E4F923A375D28A4CC4(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
	}

IL_004c:
	{
		return;
	}
}
// System.Int32 UnityEngine.XR.WSA.SurfaceObserver::Internal_Create(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SurfaceObserver_Internal_Create_mB0E5B8A9F7755986FF30A0B65F8EFD4B09A7359E (RuntimeObject * ___surfaceObserver0, const RuntimeMethod* method)
{
	typedef int32_t (*SurfaceObserver_Internal_Create_mB0E5B8A9F7755986FF30A0B65F8EFD4B09A7359E_ftn) (RuntimeObject *);
	static SurfaceObserver_Internal_Create_mB0E5B8A9F7755986FF30A0B65F8EFD4B09A7359E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_Create_mB0E5B8A9F7755986FF30A0B65F8EFD4B09A7359E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_Create(System.Object)");
	int32_t retVal = _il2cpp_icall_func(___surfaceObserver0);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Finalize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Finalize_m8BE3CB8B933C93F9C499BC0BF1ABBCE5202CA9C5 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_Finalize_m8BE3CB8B933C93F9C499BC0BF1ABBCE5202CA9C5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
	}

IL_0001:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = __this->get_m_Observer_0();
			if (!L_0)
			{
				goto IL_0021;
			}
		}

IL_000c:
		{
			SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676(__this, /*hidden argument*/NULL);
			__this->set_m_Observer_0(0);
			IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
			GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		}

IL_0021:
		{
			IL2CPP_LEAVE(0x2D, FINALLY_0026);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0026;
	}

FINALLY_0026:
	{ // begin finally (depth: 1)
		Object_Finalize_m4015B7D3A44DE125C5FE34D7276CD4697C06F380(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(38)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(38)
	{
		IL2CPP_JUMP_TBL(0x2D, IL_002d)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_002d:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_Dispose_mA842C19181453E384E1BCE368468F8762CBB9B1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_m_Observer_0();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF(__this, /*hidden argument*/NULL);
		__this->set_m_Observer_0(0);
	}

IL_001b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(GC_tC1D7BD74E8F44ECCEF5CD2B5D84BFF9AAE02D01D_il2cpp_TypeInfo_var);
		GC_SuppressFinalize_m037319A9B95A5BA437E806DE592802225EE5B425(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Destroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Destroy_m66E010E36EF342C74BA5278C4990D66AA6F34DAF (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Observer_0();
		SurfaceObserver_Internal_Destroy_m2BE7440990C62850652E1879161A97520E444167(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_Destroy(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_Destroy_m2BE7440990C62850652E1879161A97520E444167 (int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Internal_Destroy_m2BE7440990C62850652E1879161A97520E444167_ftn) (int32_t);
	static SurfaceObserver_Internal_Destroy_m2BE7440990C62850652E1879161A97520E444167_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_Destroy_m2BE7440990C62850652E1879161A97520E444167_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_Destroy(System.Int32)");
	_il2cpp_icall_func(___id0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsAxisAlignedBox(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsAxisAlignedBox_m26D27F3DBEC734594B04C75A37CE28017CB47340 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Observer_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_m_Observer_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___extents1;
		SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_m0639F6C302B36414566BE2B5292D9864BCB3673A(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::DestroyThreaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_DestroyThreaded_m42429D92096ACFF4689B675FC69DC27142F14676 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Observer_0();
		SurfaceObserver_Internal_DestroyThreaded_m189694A74E59D94F7144534E20715525892F9C40(L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_DestroyThreaded(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_DestroyThreaded_m189694A74E59D94F7144534E20715525892F9C40 (int32_t ___id0, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Internal_DestroyThreaded_m189694A74E59D94F7144534E20715525892F9C40_ftn) (int32_t);
	static SurfaceObserver_Internal_DestroyThreaded_m189694A74E59D94F7144534E20715525892F9C40_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_DestroyThreaded_m189694A74E59D94F7144534E20715525892F9C40_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_DestroyThreaded(System.Int32)");
	_il2cpp_icall_func(___id0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsAxisAlignedBox(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_m0639F6C302B36414566BE2B5292D9864BCB3673A (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_Injected_m7832A440E460633A2422F75F9879E283A8586F8E(L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___origin1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___extents2), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsSphere(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsSphere_m8CC38FF7980EDDCC4D4B9FDB312DB622325BFD70 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, float ___radiusMeters1, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Observer_0();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_1 = __this->get_m_Observer_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___origin0;
		float L_3 = ___radiusMeters1;
		SurfaceObserver_Internal_SetVolumeAsSphere_mFEDC531C9CB6E1A7A0653B113C737EC9B54FE9CF(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsSphere(System.Int32,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsSphere_mFEDC531C9CB6E1A7A0653B113C737EC9B54FE9CF (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin1, float ___radiusMeters2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		float L_1 = ___radiusMeters2;
		SurfaceObserver_Internal_SetVolumeAsSphere_Injected_mDACCD6023666C1ABF0947C50838721DA845AD00E(L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___origin1), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::SetVolumeAsOrientedBox(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_SetVolumeAsOrientedBox_m24CEE515F498C4A2AFA8DA9DBB00D857EB2811CB (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents1, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation2, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Observer_0();
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		int32_t L_1 = __this->get_m_Observer_0();
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_2 = ___origin0;
		Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  L_3 = ___extents1;
		Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  L_4 = ___orientation2;
		SurfaceObserver_Internal_SetVolumeAsOrientedBox_m18374E7899FFDA9208048C4A9585E29111BB3CB2(L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
	}

IL_001a:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsOrientedBox(System.Int32,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsOrientedBox_m18374E7899FFDA9208048C4A9585E29111BB3CB2 (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720  ___extents2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357  ___orientation3, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___id0;
		SurfaceObserver_Internal_SetVolumeAsOrientedBox_Injected_mE9A469FCB802B10E720F03D2CAC316ED19E32334(L_0, (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___origin1), (Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *)(&___extents2), (Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *)(&___orientation3), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Update(UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Update_m08AD5357474ED266F8242C2CE6B42BCC9C131A29 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_Observer_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		int32_t L_1 = __this->get_m_Observer_0();
		SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * L_2 = ___onSurfaceChanged0;
		SurfaceObserver_Internal_Update_m089AA2B7B74D2AD823A3667954444B5EA2D1FF8C(L_1, L_2, /*hidden argument*/NULL);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_Update(System.Int32,UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_Update_m089AA2B7B74D2AD823A3667954444B5EA2D1FF8C (int32_t ___id0, SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * ___onSurfaceChanged1, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Internal_Update_m089AA2B7B74D2AD823A3667954444B5EA2D1FF8C_ftn) (int32_t, SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 *);
	static SurfaceObserver_Internal_Update_m089AA2B7B74D2AD823A3667954444B5EA2D1FF8C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_Update_m089AA2B7B74D2AD823A3667954444B5EA2D1FF8C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_Update(System.Int32,UnityEngine.XR.WSA.SurfaceObserver/SurfaceChangedDelegate)");
	_il2cpp_icall_func(___id0, ___onSurfaceChanged1);
}
// System.Boolean UnityEngine.XR.WSA.SurfaceObserver::RequestMeshAsync(UnityEngine.XR.WSA.SurfaceData,UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95 (SurfaceObserver_tE97E43137858D5F6A417980ECDABAC2BB4CF1864 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___dataRequest0, SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_0 = ___onDataReady1;
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_1 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_1, _stringLiteralB782D9835143821E697B67407CCFB082FE6322A9, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, NULL, SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_RuntimeMethod_var);
	}

IL_0013:
	{
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_2 = (&___dataRequest0)->get_outputMesh_1();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_3 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_2, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0031;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_4 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_4, _stringLiteral1B7E24A34E3C718C6E030105031D2E93711662C5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_4, NULL, SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_RuntimeMethod_var);
	}

IL_0031:
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_5 = (&___dataRequest0)->get_outputAnchor_2();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_6 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_5, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004f;
		}
	}
	{
		ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD * L_7 = (ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD *)il2cpp_codegen_object_new(ArgumentNullException_t581DF992B1F3E0EC6EFB30CC5DC43519A79B27AD_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_mEE0C0D6FCB2D08CD7967DBB1329A0854BBED49ED(L_7, _stringLiteral2E763654A4843C914AD2EFF973F7278CCDF78F9B, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, NULL, SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_RuntimeMethod_var);
	}

IL_004f:
	{
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_8 = (&___dataRequest0)->get_outputCollider_3();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_9 = Object_op_Equality_mBC2401774F3BE33E8CF6F0A8148E66C95D6CFF1C(L_8, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_007e;
		}
	}
	{
		bool L_10 = (&___dataRequest0)->get_bakeCollider_5();
		if (!L_10)
		{
			goto IL_007e;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_11 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_11, _stringLiteral28C5FB757402CF2F69498F95C00B41713A73EE31, _stringLiteral88E6995E626DB3204B27CE44EE5E11B194653566, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, NULL, SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_RuntimeMethod_var);
	}

IL_007e:
	{
		float L_12 = (&___dataRequest0)->get_trianglesPerCubicMeter_4();
		if ((!(((double)(((double)((double)L_12)))) < ((double)(0.0)))))
		{
			goto IL_00a5;
		}
	}
	{
		ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 * L_13 = (ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1 *)il2cpp_codegen_object_new(ArgumentException_tEDCD16F20A09ECE461C3DA766C16EDA8864057D1_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m26DC3463C6F3C98BF33EA39598DD2B32F0249CA8(L_13, _stringLiteralED0A81780A3ACBDFBB61618D731769D527A0C1DE, _stringLiteral589875DC4FFF7DFB0B1533B09C9B338A9ED0909A, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, NULL, SurfaceObserver_RequestMeshAsync_mF7815161E179CE34FBB9FC52127DAE4B39FEBE95_RuntimeMethod_var);
	}

IL_00a5:
	{
		int32_t L_14 = __this->get_m_Observer_0();
		SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * L_15 = ___onDataReady1;
		SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF * L_16 = (&___dataRequest0)->get_address_of_id_0();
		int32_t L_17 = L_16->get_handle_0();
		MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * L_18 = (&___dataRequest0)->get_outputMesh_1();
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_19 = (&___dataRequest0)->get_outputAnchor_2();
		MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * L_20 = (&___dataRequest0)->get_outputCollider_3();
		float L_21 = (&___dataRequest0)->get_trianglesPerCubicMeter_4();
		bool L_22 = (&___dataRequest0)->get_bakeCollider_5();
		bool L_23 = SurfaceObserver_Internal_AddToWorkQueue_mA53AA2E479B092B14AE8B26B05D2E18197CE445D(L_14, L_15, L_17, L_18, L_19, L_20, L_21, L_22, /*hidden argument*/NULL);
		V_0 = L_23;
		bool L_24 = V_0;
		if (L_24)
		{
			goto IL_00f3;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral7A28117916490821638320A59586D6D23372F1C5, /*hidden argument*/NULL);
	}

IL_00f3:
	{
		bool L_25 = V_0;
		V_1 = L_25;
		goto IL_00fa;
	}

IL_00fa:
	{
		bool L_26 = V_1;
		return L_26;
	}
}
// System.Boolean UnityEngine.XR.WSA.SurfaceObserver::Internal_AddToWorkQueue(System.Int32,UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SurfaceObserver_Internal_AddToWorkQueue_mA53AA2E479B092B14AE8B26B05D2E18197CE445D (int32_t ___observer0, SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * ___onDataReady1, int32_t ___surfaceId2, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 * ___filter3, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___wa4, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE * ___mc5, float ___trisPerCubicMeter6, bool ___createColliderData7, const RuntimeMethod* method)
{
	typedef bool (*SurfaceObserver_Internal_AddToWorkQueue_mA53AA2E479B092B14AE8B26B05D2E18197CE445D_ftn) (int32_t, SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 *, int32_t, MeshFilter_t8D4BA8E8723DE5CFF53B0DA5EE2F6B3A5B0E0FE0 *, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, MeshCollider_t60EB55ADE92499FE8D1AA206D2BD96E65B2766DE *, float, bool);
	static SurfaceObserver_Internal_AddToWorkQueue_mA53AA2E479B092B14AE8B26B05D2E18197CE445D_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_AddToWorkQueue_mA53AA2E479B092B14AE8B26B05D2E18197CE445D_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_AddToWorkQueue(System.Int32,UnityEngine.XR.WSA.SurfaceObserver/SurfaceDataReadyDelegate,System.Int32,UnityEngine.MeshFilter,UnityEngine.XR.WSA.WorldAnchor,UnityEngine.MeshCollider,System.Single,System.Boolean)");
	bool retVal = _il2cpp_icall_func(___observer0, ___onDataReady1, ___surfaceId2, ___filter3, ___wa4, ___mc5, ___trisPerCubicMeter6, ___createColliderData7);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsAxisAlignedBox_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_Injected_m7832A440E460633A2422F75F9879E283A8586F8E (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___extents2, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_Injected_m7832A440E460633A2422F75F9879E283A8586F8E_ftn) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *);
	static SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_Injected_m7832A440E460633A2422F75F9879E283A8586F8E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_SetVolumeAsAxisAlignedBox_Injected_m7832A440E460633A2422F75F9879E283A8586F8E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsAxisAlignedBox_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&)");
	_il2cpp_icall_func(___id0, ___origin1, ___extents2);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsSphere_Injected(System.Int32,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsSphere_Injected_mDACCD6023666C1ABF0947C50838721DA845AD00E (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin1, float ___radiusMeters2, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Internal_SetVolumeAsSphere_Injected_mDACCD6023666C1ABF0947C50838721DA845AD00E_ftn) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, float);
	static SurfaceObserver_Internal_SetVolumeAsSphere_Injected_mDACCD6023666C1ABF0947C50838721DA845AD00E_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_SetVolumeAsSphere_Injected_mDACCD6023666C1ABF0947C50838721DA845AD00E_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsSphere_Injected(System.Int32,UnityEngine.Vector3&,System.Single)");
	_il2cpp_icall_func(___id0, ___origin1, ___radiusMeters2);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsOrientedBox_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceObserver_Internal_SetVolumeAsOrientedBox_Injected_mE9A469FCB802B10E720F03D2CAC316ED19E32334 (int32_t ___id0, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___origin1, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 * ___extents2, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 * ___orientation3, const RuntimeMethod* method)
{
	typedef void (*SurfaceObserver_Internal_SetVolumeAsOrientedBox_Injected_mE9A469FCB802B10E720F03D2CAC316ED19E32334_ftn) (int32_t, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Vector3_tDCF05E21F632FE2BA260C06E0D10CA81513E6720 *, Quaternion_t319F3319A7D43FFA5D819AD6C0A98851F0095357 *);
	static SurfaceObserver_Internal_SetVolumeAsOrientedBox_Injected_mE9A469FCB802B10E720F03D2CAC316ED19E32334_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (SurfaceObserver_Internal_SetVolumeAsOrientedBox_Injected_mE9A469FCB802B10E720F03D2CAC316ED19E32334_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.SurfaceObserver::Internal_SetVolumeAsOrientedBox_Injected(System.Int32,UnityEngine.Vector3&,UnityEngine.Vector3&,UnityEngine.Quaternion&)");
	_il2cpp_icall_func(___id0, ___origin1, ___extents2, ___orientation3);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate__ctor_mC4E2CDAB64B92D5032E1AA39880F73F045D9B714 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::Invoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_Invoke_mB275AE4804E6939E7B55AF0F3932913ED3A5D4B6 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 4)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					else
						GenericVirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(targetMethod, targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
					else
						VirtActionInvoker4< SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF , int32_t, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890 , DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132 , const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___surfaceId0, ___changeType1, ___bounds2, ___updateTime3, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceId,UnityEngine.XR.WSA.SurfaceChange,UnityEngine.Bounds,System.DateTime,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceChangedDelegate_BeginInvoke_m8664937875D27851467C76EE2CF20695D0C15D6D (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF  ___surfaceId0, int32_t ___changeType1, Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890  ___bounds2, DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132  ___updateTime3, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback4, RuntimeObject * ___object5, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceChangedDelegate_BeginInvoke_m8664937875D27851467C76EE2CF20695D0C15D6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[5] = {0};
	__d_args[0] = Box(SurfaceId_t5FCE14311FE5CFC3C4DDFCAC0B7FC2F54123E9BF_il2cpp_TypeInfo_var, &___surfaceId0);
	__d_args[1] = Box(SurfaceChange_t2E92CB8BA67A369A733BBEBD7087706B8E8FA747_il2cpp_TypeInfo_var, &___changeType1);
	__d_args[2] = Box(Bounds_tA2716F5212749C61B0E7B7B77E0CD3D79B742890_il2cpp_TypeInfo_var, &___bounds2);
	__d_args[3] = Box(DateTime_t349B7449FBAAFF4192636E2B7A07694DA9236132_il2cpp_TypeInfo_var, &___updateTime3);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback4, (RuntimeObject*)___object5);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceChangedDelegate_EndInvoke_mF0FDC14056D30DBBA477500602541E915537D378 (SurfaceChangedDelegate_t44685763A08766AF68D59B3C9FE8B5370386B3A1 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate__ctor_mB653644D30A5B829714DDEE56B57C2C01AE263E2 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::Invoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_Invoke_m4DFF327EC78483BEA7B886E4F923A375D28A4CC4 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 3)
			{
				// open
				typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					else
						GenericVirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(targetMethod, targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
					else
						VirtActionInvoker3< SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66 , bool, float, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___bakedData0, ___outputWritten1, ___elapsedBakeTimeSeconds2, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::BeginInvoke(UnityEngine.XR.WSA.SurfaceData,System.Boolean,System.Single,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SurfaceDataReadyDelegate_BeginInvoke_m8F2C8D36EBF68F4AAA4991E184A14096488CE484 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66  ___bakedData0, bool ___outputWritten1, float ___elapsedBakeTimeSeconds2, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback3, RuntimeObject * ___object4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (SurfaceDataReadyDelegate_BeginInvoke_m8F2C8D36EBF68F4AAA4991E184A14096488CE484_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[4] = {0};
	__d_args[0] = Box(SurfaceData_t4C48F847E8643D6640786CC364CDB510C7C60C66_il2cpp_TypeInfo_var, &___bakedData0);
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___outputWritten1);
	__d_args[2] = Box(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1_il2cpp_TypeInfo_var, &___elapsedBakeTimeSeconds2);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback3, (RuntimeObject*)___object4);
}
// System.Void UnityEngine.XR.WSA.SurfaceObserver_SurfaceDataReadyDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SurfaceDataReadyDelegate_EndInvoke_m84CAA2A8F1E19D1612D509236831490E1A86E4E0 (SurfaceDataReadyDelegate_t612948BD68C321AF19136CC76F4F94B778B20092 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldAnchor::add_OnTrackingChanged(UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchor_add_OnTrackingChanged_m0810CA0788E01F8421C38A372993FB94B2E59D7D (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * __this, OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_add_OnTrackingChanged_m0810CA0788E01F8421C38A372993FB94B2E59D7D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * V_0 = NULL;
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * V_1 = NULL;
	{
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_0 = __this->get_OnTrackingChanged_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_1 = V_0;
		V_1 = L_1;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** L_2 = __this->get_address_of_OnTrackingChanged_4();
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_3 = V_1;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Combine_mC25D2F7DECAFBA6D9A2F9EBA8A77063F0658ECF1(L_3, L_4, /*hidden argument*/NULL);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_6 = V_0;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_7 = InterlockedCompareExchangeImpl<OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *>((OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 **)L_2, ((OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)CastclassSealed((RuntimeObject*)L_5, OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_8 = V_0;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)L_8) == ((RuntimeObject*)(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Void UnityEngine.XR.WSA.WorldAnchor::remove_OnTrackingChanged(UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchor_remove_OnTrackingChanged_m3F6B4A3000D652E29ADFA585D779C6DA73930E60 (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * __this, OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_remove_OnTrackingChanged_m3F6B4A3000D652E29ADFA585D779C6DA73930E60_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * V_0 = NULL;
	OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * V_1 = NULL;
	{
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_0 = __this->get_OnTrackingChanged_4();
		V_0 = L_0;
	}

IL_0007:
	{
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_1 = V_0;
		V_1 = L_1;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 ** L_2 = __this->get_address_of_OnTrackingChanged_4();
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_3 = V_1;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_4 = ___value0;
		Delegate_t * L_5 = Delegate_Remove_m0B0DB7D1B3AF96B71AFAA72BA0EFE32FBBC2932D(L_3, L_4, /*hidden argument*/NULL);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_6 = V_0;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_7 = InterlockedCompareExchangeImpl<OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *>((OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 **)L_2, ((OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)CastclassSealed((RuntimeObject*)L_5, OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253_il2cpp_TypeInfo_var)), L_6);
		V_0 = L_7;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_8 = V_0;
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_9 = V_1;
		if ((!(((RuntimeObject*)(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)L_8) == ((RuntimeObject*)(OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 *)L_9))))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// System.Boolean UnityEngine.XR.WSA.WorldAnchor::get_isLocated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool WorldAnchor_get_isLocated_mBD0794267AA2F92CBB835F7DE9CFCB2A04B14EE6 (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * __this, const RuntimeMethod* method)
{
	typedef bool (*WorldAnchor_get_isLocated_mBD0794267AA2F92CBB835F7DE9CFCB2A04B14EE6_ftn) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *);
	static WorldAnchor_get_isLocated_mBD0794267AA2F92CBB835F7DE9CFCB2A04B14EE6_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldAnchor_get_isLocated_mBD0794267AA2F92CBB835F7DE9CFCB2A04B14EE6_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WorldAnchor::get_isLocated()");
	bool retVal = _il2cpp_icall_func(__this);
	return retVal;
}
// System.Void UnityEngine.XR.WSA.WorldAnchor::Internal_TriggerEventOnTrackingLost(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldAnchor_Internal_TriggerEventOnTrackingLost_m30225CE01803079AAA7C81877ABE5A4150960B3A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_0 = ___worldAnchor0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_1 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_0, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0027;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_2 = ___worldAnchor0;
		NullCheck(L_2);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_3 = L_2->get_OnTrackingChanged_4();
		if (!L_3)
		{
			goto IL_0027;
		}
	}
	{
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_4 = ___worldAnchor0;
		NullCheck(L_4);
		OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * L_5 = L_4->get_OnTrackingChanged_4();
		WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * L_6 = ___worldAnchor0;
		bool L_7 = ___located1;
		NullCheck(L_5);
		OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C(L_5, L_6, L_7, /*hidden argument*/NULL);
	}

IL_0027:
	{
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
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate__ctor_m9CAD493361EE71D73CB61E7BFD889E88B5649497 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::Invoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_Invoke_mC3AAC3FBDB589E9DEE9D83664191AED37F03A23C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
			}
		}
		else if (___parameterCount != 2)
		{
			// open
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker1< bool >::Invoke(targetMethod, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___worldAnchor0, ___located1);
					else
						VirtActionInvoker1< bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___worldAnchor0, ___located1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___worldAnchor0, ___located1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
					else
						GenericVirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(targetMethod, targetThis, ___worldAnchor0, ___located1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___worldAnchor0, ___located1);
					else
						VirtActionInvoker2< WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___worldAnchor0, ___located1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE *, bool, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___worldAnchor0, ___located1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.WorldAnchor,System.Boolean,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, WorldAnchor_tD6275232D14415769601A3BD6AE1E7D5622F96EE * ___worldAnchor0, bool ___located1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnTrackingChangedDelegate_BeginInvoke_mF0EFF2F8F200DEEEF063BB19BA44ACFF920D5D8C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___worldAnchor0;
	__d_args[1] = Box(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_il2cpp_TypeInfo_var, &___located1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldAnchor_OnTrackingChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnTrackingChangedDelegate_EndInvoke_m00461C6664BBAAF38549748E6F2BEEBBA5F3EDD7 (OnTrackingChangedDelegate_t213BE1DC543541B52A31539ACEA406782B1DB253 * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UnityEngine.XR.WSA.WorldManager::Internal_TriggerPositionalLocatorStateChanged(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WorldManager_Internal_TriggerPositionalLocatorStateChanged_mE66D0FFF1E4FD4406161D7EC482B45C33B0E0FC9 (int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (WorldManager_Internal_TriggerPositionalLocatorStateChanged_mE66D0FFF1E4FD4406161D7EC482B45C33B0E0FC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_0 = ((WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * L_1 = ((WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_StaticFields*)il2cpp_codegen_static_fields_for(WorldManager_t92F845DF2530AD354D4805170141AFE73AFFA863_il2cpp_TypeInfo_var))->get_OnPositionalLocatorStateChanged_0();
		int32_t L_2 = ___oldState0;
		int32_t L_3 = ___newState1;
		NullCheck(L_1);
		OnPositionalLocatorStateChangedDelegate_Invoke_mCA5DBD7DB392BB9F22AF98FB50EB570B6A26AA1F(L_1, L_2, L_3, /*hidden argument*/NULL);
	}

IL_0017:
	{
		return;
	}
}
// System.IntPtr UnityEngine.XR.WSA.WorldManager::GetNativeISpatialCoordinateSystemPtr()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t WorldManager_GetNativeISpatialCoordinateSystemPtr_m5B00922BB3D525275747790196EB0C639E245953 (const RuntimeMethod* method)
{
	typedef intptr_t (*WorldManager_GetNativeISpatialCoordinateSystemPtr_m5B00922BB3D525275747790196EB0C639E245953_ftn) ();
	static WorldManager_GetNativeISpatialCoordinateSystemPtr_m5B00922BB3D525275747790196EB0C639E245953_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (WorldManager_GetNativeISpatialCoordinateSystemPtr_m5B00922BB3D525275747790196EB0C639E245953_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.WSA.WorldManager::GetNativeISpatialCoordinateSystemPtr()");
	intptr_t retVal = _il2cpp_icall_func();
	return retVal;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
IL2CPP_EXTERN_C  void DelegatePInvokeWrapper_OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc)(int32_t, int32_t);
	PInvokeFunc il2cppPInvokeFunc = reinterpret_cast<PInvokeFunc>(il2cpp_codegen_get_method_pointer(((RuntimeDelegate*)__this)->method));

	// Native function invocation
	il2cppPInvokeFunc(___oldState0, ___newState1);

}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate__ctor_mD1849CEC79E785F210827F85B69D618A1E3822D2 (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::Invoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_Invoke_mCA5DBD7DB392BB9F22AF98FB50EB570B6A26AA1F (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, const RuntimeMethod* method)
{
	DelegateU5BU5D_tDFCDEE2A6322F96C0FE49AF47E9ADB8C4B294E86* delegateArrayToInvoke = __this->get_delegates_11();
	Delegate_t** delegatesToInvoke;
	il2cpp_array_size_t length;
	if (delegateArrayToInvoke != NULL)
	{
		length = delegateArrayToInvoke->max_length;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(delegateArrayToInvoke->GetAddressAtUnchecked(0));
	}
	else
	{
		length = 1;
		delegatesToInvoke = reinterpret_cast<Delegate_t**>(&__this);
	}

	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		Delegate_t* currentDelegate = delegatesToInvoke[i];
		Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
		RuntimeObject* targetThis = currentDelegate->get_m_target_2();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
		if (!il2cpp_codegen_method_is_virtual(targetMethod))
		{
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		}
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		int ___parameterCount = il2cpp_codegen_method_parameter_count(targetMethod);
		if (___methodIsStatic)
		{
			if (___parameterCount == 2)
			{
				// open
				typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
			}
			else
			{
				// closed
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
			}
		}
		else
		{
			// closed
			if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis) && il2cpp_codegen_delegate_has_invoker((Il2CppDelegate*)__this))
			{
				if (targetThis == NULL)
				{
					typedef void (*FunctionPointerType) (int32_t, int32_t, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___oldState0, ___newState1, targetMethod);
				}
				else if (il2cpp_codegen_method_is_generic_instance(targetMethod))
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						GenericInterfaceActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
					else
						GenericVirtActionInvoker2< int32_t, int32_t >::Invoke(targetMethod, targetThis, ___oldState0, ___newState1);
				}
				else
				{
					if (il2cpp_codegen_method_is_interface_method(targetMethod))
						InterfaceActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___oldState0, ___newState1);
					else
						VirtActionInvoker2< int32_t, int32_t >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___oldState0, ___newState1);
				}
			}
			else
			{
				typedef void (*FunctionPointerType) (void*, int32_t, int32_t, const RuntimeMethod*);
				((FunctionPointerType)targetMethodPointer)(targetThis, ___oldState0, ___newState1, targetMethod);
			}
		}
	}
}
// System.IAsyncResult UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::BeginInvoke(UnityEngine.XR.WSA.PositionalLocatorState,UnityEngine.XR.WSA.PositionalLocatorState,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* OnPositionalLocatorStateChangedDelegate_BeginInvoke_m208B6244989F55ADDD858B706520C56982F3C95F (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, int32_t ___oldState0, int32_t ___newState1, AsyncCallback_t3F3DA3BEDAEE81DD1D24125DF8EB30E85EE14DA4 * ___callback2, RuntimeObject * ___object3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OnPositionalLocatorStateChangedDelegate_BeginInvoke_m208B6244989F55ADDD858B706520C56982F3C95F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = Box(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var, &___oldState0);
	__d_args[1] = Box(PositionalLocatorState_tE622489AA7DB67A92489D77CD1EF22EC2C5F0598_il2cpp_TypeInfo_var, &___newState1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);
}
// System.Void UnityEngine.XR.WSA.WorldManager_OnPositionalLocatorStateChangedDelegate::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnPositionalLocatorStateChangedDelegate_EndInvoke_mF5F268C78AC17A6EE43BF87C3905F59F0D029A7B (OnPositionalLocatorStateChangedDelegate_tF20079800BA8015A2DC1FDAE907DF48391A53E0B * __this, RuntimeObject* ___result0, const RuntimeMethod* method)
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single UnityEngine.XR.XRDevice::get_refreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8 (const RuntimeMethod* method)
{
	typedef float (*XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8_ftn) ();
	static XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_get_refreshRate_m8EE18868D630D0ED3AD10A02A0A94821D0C7DEC8_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::get_refreshRate()");
	float retVal = _il2cpp_icall_func();
	return retVal;
}
// UnityEngine.XR.TrackingSpaceType UnityEngine.XR.XRDevice::GetTrackingSpaceType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C (const RuntimeMethod* method)
{
	typedef int32_t (*XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C_ftn) ();
	static XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_GetTrackingSpaceType_m075417BECBBFCE6554D24E91F0E2E0264F18826C_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::GetTrackingSpaceType()");
	int32_t retVal = _il2cpp_icall_func();
	return retVal;
}
// System.Boolean UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88 (int32_t ___trackingSpaceType0, const RuntimeMethod* method)
{
	typedef bool (*XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88_ftn) (int32_t);
	static XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88_ftn _il2cpp_icall_func;
	if (!_il2cpp_icall_func)
	_il2cpp_icall_func = (XRDevice_SetTrackingSpaceType_m76C173A76AD74AF048561FCEC0704F6A2E476B88_ftn)il2cpp_codegen_resolve_icall ("UnityEngine.XR.XRDevice::SetTrackingSpaceType(UnityEngine.XR.TrackingSpaceType)");
	bool retVal = _il2cpp_icall_func(___trackingSpaceType0);
	return retVal;
}
// System.Void UnityEngine.XR.XRDevice::InvokeDeviceLoaded(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11 (String_t* ___loadedDeviceName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice_InvokeDeviceLoaded_mD5D5577A4E03D0474FAFBB2596B698B6A8B5FD11_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_0 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var);
		Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 * L_1 = ((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->get_deviceLoaded_0();
		String_t* L_2 = ___loadedDeviceName0;
		NullCheck(L_1);
		Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F(L_1, L_2, /*hidden argument*/Action_1_Invoke_m6328F763431ED2ACDDB6ED8F0FDEA6194403E79F_RuntimeMethod_var);
	}

IL_0018:
	{
		return;
	}
}
// System.Void UnityEngine.XR.XRDevice::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (XRDevice__cctor_m4FE111291FBDF43A481045CBABECF9AEC70B5EC9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		((XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_StaticFields*)il2cpp_codegen_static_fields_for(XRDevice_t392FCA3D1DCEB95FF500C8F374C88B034C31DF4A_il2cpp_TypeInfo_var))->set_deviceLoaded_0((Action_1_t32A9EECF5D4397CC1B9A7C7079870875411B06D0 *)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_error_m9BC2D2DBF1B4DB34393E38AD35CEB56773CE8E32_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CerrorU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void GestureErrorEventArgs_set_hresult_m8CF0A45B2196E307D16D13BB9D8E0AE0B520DDDF_inline (GestureErrorEventArgs_tE93CF2521799DC9320F0B7A32C4CE279DC24E80C * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3ChresultU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceDetectedEventArgs_set_state_mB81F4E131E023DE37120C37CD281FEDCB2107240_inline (InteractionSourceDetectedEventArgs_tC1F077616F3D6B484D0B12321013A21E072B9755 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceLostEventArgs_set_state_m962283240DCDBB2FB97987B371073238BCF5BC23_inline (InteractionSourceLostEventArgs_t1922B08265BAB2D8980B734D0A89C8705CCC40AC * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_state_mE9F1061B3EB95D4C9C435A9B29B657B0D4F73E08_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourcePressedEventArgs_set_pressType_m4A6D5E8933BA021E93C7586349CD2653B6BFA855_inline (InteractionSourcePressedEventArgs_tA2188AAAB8CB2AA059C55E45F2FD09ED3725EA5B * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_state_mF578C2E57593D54ABEB8C130A49E6B44AE2C080F_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceReleasedEventArgs_set_pressType_m3F75A57B06238ACD617D4C151B977B92AD6460CF_inline (InteractionSourceReleasedEventArgs_tD5E7A07FF6CC463893178DC4F3FD3543F20FB943 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_U3CpressTypeU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR void InteractionSourceUpdatedEventArgs_set_state_mF28D9130B81128B020B1C8D3003A6A9A84D1E8B6_inline (InteractionSourceUpdatedEventArgs_t8386FB5578FE7C069A136CC36C9B6A56FF99CBC5 * __this, InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  ___value0, const RuntimeMethod* method)
{
	{
		InteractionSourceState_t41A6FEEA413909D5D94BF48BC907FE5DBD162250  L_0 = ___value0;
		__this->set_U3CstateU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mF3EA958D645F2DA73A25D6BA98D8CDF83ADD532D_gshared_inline (Nullable_1_t2BAE7F2F24CA3009C8A4626DF50D64CBD4A00FBE * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = (bool)__this->get_has_value_1();
		return L_0;
	}
}
