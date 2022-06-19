#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct InterfaceFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4>
struct InterfaceFuncInvoker4
{
	typedef R (*Func)(void*, T1, T2, T3, T4, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3, T4 p4)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, p4, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>
struct Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281;
// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>
struct Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B;
// System.Func`1<TriangleNet.IPredicates>
struct Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<TriangleNet.TrianglePool>
struct Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17;
// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean>
struct Func_2_tB60864E8BFC491CD46CC50AEACFDC630EA473112;
// System.Func`3<TriangleNet.Geometry.ITriangle,System.Single,System.Boolean>
struct Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259;
// System.Collections.Generic.ICollection`1<TriangleNet.Topology.Triangle>
struct ICollection_1_tA1F35A298BD0BFBA657B7E5BF9E5B77CA32C77B2;
// System.Collections.Generic.ICollection`1<TriangleNet.Geometry.Vertex>
struct ICollection_1_t2BFDB9BC7EF8593BA5C76E09D1E546AB80836AA5;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle>
struct IEnumerable_1_tEDCD60608127291B2EDFC1EFA26B3ECB5A057DE8;
// System.Collections.Generic.IEnumerable`1<TriangleNet.Geometry.Vertex>
struct IEnumerable_1_t4E20F2B8BF7762A292318FB266383A825CA0C5AF;
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>
struct IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IList`1<TriangleNet.Geometry.Vertex>
struct IList_1_t65A046DEB5D4CA3905C1278497558884ACF25D7E;
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>
struct ILog_1_tA7D752E61EA9D7A5C1CD3DE35132CFD919A13A06;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,TriangleNet.Topology.SubSegment>
struct KeyCollection_t3B8A4AE87258ADED2449F3D68C894ED9E57E194C;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,TriangleNet.Geometry.Vertex>
struct KeyCollection_t8F2E309857F811F3024A39E067C728696AD1C2BA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE;
// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9;
// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>
struct List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067;
// System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg>
struct Queue_1_t93D3AD4E54C66B999AAA0C65262599BF86E18F2F;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>
struct Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660;
// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>
struct Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriangleNet.Topology.SubSegment>
struct ValueCollection_tBC787C8DACCA108DAEEC23C6384BF387CE9B6E1D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriangleNet.Geometry.Vertex>
struct ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,TriangleNet.Topology.SubSegment>[]
struct EntryU5BU5D_t88B62A8F51F90A98C13C85273819614E1CB105BD;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,TriangleNet.Geometry.Vertex>[]
struct EntryU5BU5D_tBCFFF5BB22FF382F170A8B1F8C894E6AC2DC16DA;
// TriangleNet.Topology.Triangle[][]
struct TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// TriangleNet.Topology.Osub[]
struct OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C;
// TriangleNet.Topology.Otri[]
struct OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25;
// TriangleNet.Geometry.Point[]
struct PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5;
// TriangleNet.Geometry.RegionPointer[]
struct RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// TriangleNet.Topology.Triangle[]
struct TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// TriangleNet.Meshing.Data.BadSubseg
struct BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B;
// TriangleNet.Meshing.Data.BadTriQueue
struct BadTriQueue_t0623150A4EAAC202EA7CF37942EB7F11DFDE3E4D;
// TriangleNet.Behavior
struct Behavior_t2779857273122045638AE8441EA00E4292C7F2C4;
// TriangleNet.Configuration
struct Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// TriangleNet.IPredicates
struct IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5;
// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// TriangleNet.NewLocation
struct NewLocation_t3A279633EA7E8EA677A20F5033126F947938132F;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// TriangleNet.Geometry.Point
struct Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39;
// TriangleNet.Meshing.QualityMesher
struct QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92;
// TriangleNet.Meshing.QualityOptions
struct QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A;
// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118;
// TriangleNet.Geometry.Rectangle
struct Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707;
// TriangleNet.RobustPredicates
struct RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// TriangleNet.Geometry.Segment
struct Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2;
// System.String
struct String_t;
// TriangleNet.Topology.SubSegment
struct SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE;
// TriangleNet.Topology.Triangle
struct Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412;
// TriangleNet.TriangleLocator
struct TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F;
// TriangleNet.TriangleNetMesh
struct TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF;
// TriangleNet.TrianglePool
struct TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50;
// TriangleNet.TriangleSampler
struct TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4;
// TriangleNet.Geometry.Vertex
struct Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8;
// TriangleNet.Tools.VertexSorter
struct VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// TriangleNet.Configuration/<>c
struct U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c
struct U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t906AAD0F0069727736A8049C61CE46D978E212E7;
// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t27EB9821E7E4999215A204A2A496EDB33460477D;
// TriangleNet.TrianglePool/<Sample>d__9
struct U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77;
// TriangleNet.TrianglePool/Enumerator
struct Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365;

IL2CPP_EXTERN_C RuntimeClass* BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Behavior_t2779857273122045638AE8441EA00E4292C7F2C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t2BFDB9BC7EF8593BA5C76E09D1E546AB80836AA5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tA1F35A298BD0BFBA657B7E5BF9E5B77CA32C77B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_t4E20F2B8BF7762A292318FB266383A825CA0C5AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_1_tEDCD60608127291B2EDFC1EFA26B3ECB5A057DE8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_1_tAFE3A527476AFC0C0C59E4603D8AE79E7FC0B18C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t65A046DEB5D4CA3905C1278497558884ACF25D7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ILog_1_tA7D752E61EA9D7A5C1CD3DE35132CFD919A13A06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Log_t3DF77E5CB24B18EDABF105EA029F53265CA76154_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D;
IL2CPP_EXTERN_C String_t* _stringLiteral545555946B54695BF600E149072998C05ECCF2FF;
IL2CPP_EXTERN_C String_t* _stringLiteral950A1778E213AC1D3E8C01967A940E21CDE3CFB0;
IL2CPP_EXTERN_C String_t* _stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisTriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_m0DF6405FF2051446D2F841015C63AF703B2874D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m160C5A2CB96E736A252CC75892BC75CE9E317AFC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6924032DE21DF7BF20445B5F77F87D3E1B39EB73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m66BD6051DF63A145C41F9D8C1A15C79D92516FB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_mDABD45B8ED6589E8E8F6BC8E12E4BA8702F00F84_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m87410FF276D6163571AC471A3FD092374F09B4C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_mFE1F8FC346067751DD43F607D50E77074C3F895B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mA3D1C0A6B47F2756754EFB196566FAE2F9AFE4D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Count_mE619F9A02E8EECF1AAB4B47938B77980539B2D1B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_mAE30ABED984864B036F4B2B843214354093F5F2D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisVertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8_m340EBC8BD529AE566FDD1CDA053B4BDDD6C54D38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m19FE6D911D2FF17FF9756DDE5DA30B4A4004B52D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1_Invoke_m81FCE857CF006D7FB413CA7175AEEB7CD77E105D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_IndexOf_m8193C102AF5CE3B61691A045CDFCE90575A00265_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD438DA6033A5A23B30A450B677C3D75259BF4429_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE4775C5B99ABA61560C85C51D8B318B894BE214C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m7E49788FAD3DCE41BA9A799BC09A9579E3778121_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m1CC67123C61DF000870289CE37BE47F77C4B4355_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Segment_GetVertex_mB4E8DB6C1F7D016E62567FBE47D5C7F31BB5E17D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_m95E54568877C801655BAE2FF81747F08AC66B130_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_mD3C25F051AFADFD95370C2C3432E727728141ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mA2023738F668A9D1D3428B0D610593F1EC550CA7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mC0CB42657A1DEB5EED6F0A6076FBB982B733B4CC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mC0014A9790A831F368DC1C7EA79744EFF1B722C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m04685073CD474456B3EB0E4B588D6701F139B26D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_mDABF9B31C700A5027502D4EF6D1603CB0E22E70F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TriangleNetMesh_TransferNodes_m6E970AA1BEA725EF16F1676A8FF77CC1F45F7F47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrianglePool_Add_mDD1E2DA8081FBF7F9CE403DC0AC12B64574E8ADD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* TrianglePool_Remove_mE8A10A1F680AB3C773D595BA67D6F8A8389BE8E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSampleU3Ed__9_System_Collections_IEnumerator_Reset_mF90AC1796681A8C8C090D73CBCEB94370326AE27_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C;
struct OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25;
struct TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>
struct Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t88B62A8F51F90A98C13C85273819614E1CB105BD* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t3B8A4AE87258ADED2449F3D68C894ED9E57E194C * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBC787C8DACCA108DAEEC23C6384BF387CE9B6E1D * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___entries_1)); }
	inline EntryU5BU5D_t88B62A8F51F90A98C13C85273819614E1CB105BD* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t88B62A8F51F90A98C13C85273819614E1CB105BD** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t88B62A8F51F90A98C13C85273819614E1CB105BD* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___keys_7)); }
	inline KeyCollection_t3B8A4AE87258ADED2449F3D68C894ED9E57E194C * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t3B8A4AE87258ADED2449F3D68C894ED9E57E194C ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t3B8A4AE87258ADED2449F3D68C894ED9E57E194C * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ___values_8)); }
	inline ValueCollection_tBC787C8DACCA108DAEEC23C6384BF387CE9B6E1D * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBC787C8DACCA108DAEEC23C6384BF387CE9B6E1D ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBC787C8DACCA108DAEEC23C6384BF387CE9B6E1D * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>
struct Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tBCFFF5BB22FF382F170A8B1F8C894E6AC2DC16DA* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t8F2E309857F811F3024A39E067C728696AD1C2BA * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___entries_1)); }
	inline EntryU5BU5D_tBCFFF5BB22FF382F170A8B1F8C894E6AC2DC16DA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tBCFFF5BB22FF382F170A8B1F8C894E6AC2DC16DA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tBCFFF5BB22FF382F170A8B1F8C894E6AC2DC16DA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___keys_7)); }
	inline KeyCollection_t8F2E309857F811F3024A39E067C728696AD1C2BA * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t8F2E309857F811F3024A39E067C728696AD1C2BA ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t8F2E309857F811F3024A39E067C728696AD1C2BA * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ___values_8)); }
	inline ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Geometry.Point>
struct List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE, ____items_1)); }
	inline PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5* get__items_1() const { return ____items_1; }
	inline PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE_StaticFields, ____emptyArray_5)); }
	inline PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PointU5BU5D_t511B7E785731E1738A755EE9F5F3763D2178B9C5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>
struct List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9, ____items_1)); }
	inline RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501* get__items_1() const { return ____items_1; }
	inline RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9_StaticFields, ____emptyArray_5)); }
	inline RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RegionPointerU5BU5D_tFF8DBE31D80922EFAB48519BD6D2AD8A6EA6E501* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>
struct List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067, ____items_1)); }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* get__items_1() const { return ____items_1; }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067_StaticFields, ____emptyArray_5)); }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____array_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__array_0() const { return ____array_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>
struct Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660, ____array_0)); }
	inline OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* get__array_0() const { return ____array_0; }
	inline OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>
struct Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF, ____array_0)); }
	inline TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* get__array_0() const { return ____array_0; }
	inline TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,TriangleNet.Geometry.Vertex>
struct ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339, ___dictionary_0)); }
	inline Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// TriangleNet.Behavior
struct Behavior_t2779857273122045638AE8441EA00E4292C7F2C4  : public RuntimeObject
{
public:
	// System.Boolean TriangleNet.Behavior::poly
	bool ___poly_0;
	// System.Boolean TriangleNet.Behavior::quality
	bool ___quality_1;
	// System.Boolean TriangleNet.Behavior::varArea
	bool ___varArea_2;
	// System.Boolean TriangleNet.Behavior::convex
	bool ___convex_3;
	// System.Boolean TriangleNet.Behavior::jettison
	bool ___jettison_4;
	// System.Boolean TriangleNet.Behavior::boundaryMarkers
	bool ___boundaryMarkers_5;
	// System.Boolean TriangleNet.Behavior::noHoles
	bool ___noHoles_6;
	// System.Boolean TriangleNet.Behavior::conformDel
	bool ___conformDel_7;
	// System.Func`3<TriangleNet.Geometry.ITriangle,System.Single,System.Boolean> TriangleNet.Behavior::usertest
	Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 * ___usertest_8;
	// System.Int32 TriangleNet.Behavior::noBisect
	int32_t ___noBisect_9;
	// System.Single TriangleNet.Behavior::minAngle
	float ___minAngle_10;
	// System.Single TriangleNet.Behavior::maxAngle
	float ___maxAngle_11;
	// System.Single TriangleNet.Behavior::maxArea
	float ___maxArea_12;
	// System.Boolean TriangleNet.Behavior::fixedArea
	bool ___fixedArea_13;
	// System.Boolean TriangleNet.Behavior::useSegments
	bool ___useSegments_14;
	// System.Boolean TriangleNet.Behavior::useRegions
	bool ___useRegions_15;
	// System.Single TriangleNet.Behavior::goodAngle
	float ___goodAngle_16;
	// System.Single TriangleNet.Behavior::maxGoodAngle
	float ___maxGoodAngle_17;
	// System.Single TriangleNet.Behavior::offconstant
	float ___offconstant_18;

public:
	inline static int32_t get_offset_of_poly_0() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___poly_0)); }
	inline bool get_poly_0() const { return ___poly_0; }
	inline bool* get_address_of_poly_0() { return &___poly_0; }
	inline void set_poly_0(bool value)
	{
		___poly_0 = value;
	}

	inline static int32_t get_offset_of_quality_1() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___quality_1)); }
	inline bool get_quality_1() const { return ___quality_1; }
	inline bool* get_address_of_quality_1() { return &___quality_1; }
	inline void set_quality_1(bool value)
	{
		___quality_1 = value;
	}

	inline static int32_t get_offset_of_varArea_2() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___varArea_2)); }
	inline bool get_varArea_2() const { return ___varArea_2; }
	inline bool* get_address_of_varArea_2() { return &___varArea_2; }
	inline void set_varArea_2(bool value)
	{
		___varArea_2 = value;
	}

	inline static int32_t get_offset_of_convex_3() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___convex_3)); }
	inline bool get_convex_3() const { return ___convex_3; }
	inline bool* get_address_of_convex_3() { return &___convex_3; }
	inline void set_convex_3(bool value)
	{
		___convex_3 = value;
	}

	inline static int32_t get_offset_of_jettison_4() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___jettison_4)); }
	inline bool get_jettison_4() const { return ___jettison_4; }
	inline bool* get_address_of_jettison_4() { return &___jettison_4; }
	inline void set_jettison_4(bool value)
	{
		___jettison_4 = value;
	}

	inline static int32_t get_offset_of_boundaryMarkers_5() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___boundaryMarkers_5)); }
	inline bool get_boundaryMarkers_5() const { return ___boundaryMarkers_5; }
	inline bool* get_address_of_boundaryMarkers_5() { return &___boundaryMarkers_5; }
	inline void set_boundaryMarkers_5(bool value)
	{
		___boundaryMarkers_5 = value;
	}

	inline static int32_t get_offset_of_noHoles_6() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___noHoles_6)); }
	inline bool get_noHoles_6() const { return ___noHoles_6; }
	inline bool* get_address_of_noHoles_6() { return &___noHoles_6; }
	inline void set_noHoles_6(bool value)
	{
		___noHoles_6 = value;
	}

	inline static int32_t get_offset_of_conformDel_7() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___conformDel_7)); }
	inline bool get_conformDel_7() const { return ___conformDel_7; }
	inline bool* get_address_of_conformDel_7() { return &___conformDel_7; }
	inline void set_conformDel_7(bool value)
	{
		___conformDel_7 = value;
	}

	inline static int32_t get_offset_of_usertest_8() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___usertest_8)); }
	inline Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 * get_usertest_8() const { return ___usertest_8; }
	inline Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 ** get_address_of_usertest_8() { return &___usertest_8; }
	inline void set_usertest_8(Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 * value)
	{
		___usertest_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___usertest_8), (void*)value);
	}

	inline static int32_t get_offset_of_noBisect_9() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___noBisect_9)); }
	inline int32_t get_noBisect_9() const { return ___noBisect_9; }
	inline int32_t* get_address_of_noBisect_9() { return &___noBisect_9; }
	inline void set_noBisect_9(int32_t value)
	{
		___noBisect_9 = value;
	}

	inline static int32_t get_offset_of_minAngle_10() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___minAngle_10)); }
	inline float get_minAngle_10() const { return ___minAngle_10; }
	inline float* get_address_of_minAngle_10() { return &___minAngle_10; }
	inline void set_minAngle_10(float value)
	{
		___minAngle_10 = value;
	}

	inline static int32_t get_offset_of_maxAngle_11() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___maxAngle_11)); }
	inline float get_maxAngle_11() const { return ___maxAngle_11; }
	inline float* get_address_of_maxAngle_11() { return &___maxAngle_11; }
	inline void set_maxAngle_11(float value)
	{
		___maxAngle_11 = value;
	}

	inline static int32_t get_offset_of_maxArea_12() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___maxArea_12)); }
	inline float get_maxArea_12() const { return ___maxArea_12; }
	inline float* get_address_of_maxArea_12() { return &___maxArea_12; }
	inline void set_maxArea_12(float value)
	{
		___maxArea_12 = value;
	}

	inline static int32_t get_offset_of_fixedArea_13() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___fixedArea_13)); }
	inline bool get_fixedArea_13() const { return ___fixedArea_13; }
	inline bool* get_address_of_fixedArea_13() { return &___fixedArea_13; }
	inline void set_fixedArea_13(bool value)
	{
		___fixedArea_13 = value;
	}

	inline static int32_t get_offset_of_useSegments_14() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___useSegments_14)); }
	inline bool get_useSegments_14() const { return ___useSegments_14; }
	inline bool* get_address_of_useSegments_14() { return &___useSegments_14; }
	inline void set_useSegments_14(bool value)
	{
		___useSegments_14 = value;
	}

	inline static int32_t get_offset_of_useRegions_15() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___useRegions_15)); }
	inline bool get_useRegions_15() const { return ___useRegions_15; }
	inline bool* get_address_of_useRegions_15() { return &___useRegions_15; }
	inline void set_useRegions_15(bool value)
	{
		___useRegions_15 = value;
	}

	inline static int32_t get_offset_of_goodAngle_16() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___goodAngle_16)); }
	inline float get_goodAngle_16() const { return ___goodAngle_16; }
	inline float* get_address_of_goodAngle_16() { return &___goodAngle_16; }
	inline void set_goodAngle_16(float value)
	{
		___goodAngle_16 = value;
	}

	inline static int32_t get_offset_of_maxGoodAngle_17() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___maxGoodAngle_17)); }
	inline float get_maxGoodAngle_17() const { return ___maxGoodAngle_17; }
	inline float* get_address_of_maxGoodAngle_17() { return &___maxGoodAngle_17; }
	inline void set_maxGoodAngle_17(float value)
	{
		___maxGoodAngle_17 = value;
	}

	inline static int32_t get_offset_of_offconstant_18() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4, ___offconstant_18)); }
	inline float get_offconstant_18() const { return ___offconstant_18; }
	inline float* get_address_of_offconstant_18() { return &___offconstant_18; }
	inline void set_offconstant_18(float value)
	{
		___offconstant_18 = value;
	}
};

struct Behavior_t2779857273122045638AE8441EA00E4292C7F2C4_StaticFields
{
public:
	// System.Boolean TriangleNet.Behavior::<NoExact>k__BackingField
	bool ___U3CNoExactU3Ek__BackingField_19;

public:
	inline static int32_t get_offset_of_U3CNoExactU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4_StaticFields, ___U3CNoExactU3Ek__BackingField_19)); }
	inline bool get_U3CNoExactU3Ek__BackingField_19() const { return ___U3CNoExactU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CNoExactU3Ek__BackingField_19() { return &___U3CNoExactU3Ek__BackingField_19; }
	inline void set_U3CNoExactU3Ek__BackingField_19(bool value)
	{
		___U3CNoExactU3Ek__BackingField_19 = value;
	}
};


// TriangleNet.Configuration
struct Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121  : public RuntimeObject
{
public:
	// System.Func`1<TriangleNet.IPredicates> TriangleNet.Configuration::<Predicates>k__BackingField
	Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * ___U3CPredicatesU3Ek__BackingField_0;
	// System.Func`1<TriangleNet.TrianglePool> TriangleNet.Configuration::<TrianglePool>k__BackingField
	Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * ___U3CTrianglePoolU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CPredicatesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121, ___U3CPredicatesU3Ek__BackingField_0)); }
	inline Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * get_U3CPredicatesU3Ek__BackingField_0() const { return ___U3CPredicatesU3Ek__BackingField_0; }
	inline Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A ** get_address_of_U3CPredicatesU3Ek__BackingField_0() { return &___U3CPredicatesU3Ek__BackingField_0; }
	inline void set_U3CPredicatesU3Ek__BackingField_0(Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * value)
	{
		___U3CPredicatesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CPredicatesU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CTrianglePoolU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121, ___U3CTrianglePoolU3Ek__BackingField_1)); }
	inline Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * get_U3CTrianglePoolU3Ek__BackingField_1() const { return ___U3CTrianglePoolU3Ek__BackingField_1; }
	inline Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 ** get_address_of_U3CTrianglePoolU3Ek__BackingField_1() { return &___U3CTrianglePoolU3Ek__BackingField_1; }
	inline void set_U3CTrianglePoolU3Ek__BackingField_1(Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * value)
	{
		___U3CTrianglePoolU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTrianglePoolU3Ek__BackingField_1), (void*)value);
	}
};


// TriangleNet.Geometry.Point
struct Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Geometry.Point::id
	int32_t ___id_0;
	// System.Int32 TriangleNet.Geometry.Point::label
	int32_t ___label_1;
	// System.Single TriangleNet.Geometry.Point::x
	float ___x_2;
	// System.Single TriangleNet.Geometry.Point::y
	float ___y_3;

public:
	inline static int32_t get_offset_of_id_0() { return static_cast<int32_t>(offsetof(Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39, ___id_0)); }
	inline int32_t get_id_0() const { return ___id_0; }
	inline int32_t* get_address_of_id_0() { return &___id_0; }
	inline void set_id_0(int32_t value)
	{
		___id_0 = value;
	}

	inline static int32_t get_offset_of_label_1() { return static_cast<int32_t>(offsetof(Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39, ___label_1)); }
	inline int32_t get_label_1() const { return ___label_1; }
	inline int32_t* get_address_of_label_1() { return &___label_1; }
	inline void set_label_1(int32_t value)
	{
		___label_1 = value;
	}

	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}
};


// TriangleNet.Meshing.QualityMesher
struct QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92  : public RuntimeObject
{
public:
	// TriangleNet.IPredicates TriangleNet.Meshing.QualityMesher::predicates
	RuntimeObject* ___predicates_0;
	// System.Collections.Generic.Queue`1<TriangleNet.Meshing.Data.BadSubseg> TriangleNet.Meshing.QualityMesher::badsubsegs
	Queue_1_t93D3AD4E54C66B999AAA0C65262599BF86E18F2F * ___badsubsegs_1;
	// TriangleNet.Meshing.Data.BadTriQueue TriangleNet.Meshing.QualityMesher::queue
	BadTriQueue_t0623150A4EAAC202EA7CF37942EB7F11DFDE3E4D * ___queue_2;
	// TriangleNet.TriangleNetMesh TriangleNet.Meshing.QualityMesher::_TriangleNetMesh
	TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ____TriangleNetMesh_3;
	// TriangleNet.Behavior TriangleNet.Meshing.QualityMesher::behavior
	Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * ___behavior_4;
	// TriangleNet.NewLocation TriangleNet.Meshing.QualityMesher::newLocation
	NewLocation_t3A279633EA7E8EA677A20F5033126F947938132F * ___newLocation_5;
	// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Meshing.QualityMesher::logger
	RuntimeObject* ___logger_6;
	// TriangleNet.Topology.Triangle TriangleNet.Meshing.QualityMesher::newvertex_tri
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___newvertex_tri_7;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ___predicates_0)); }
	inline RuntimeObject* get_predicates_0() const { return ___predicates_0; }
	inline RuntimeObject** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(RuntimeObject* value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicates_0), (void*)value);
	}

	inline static int32_t get_offset_of_badsubsegs_1() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ___badsubsegs_1)); }
	inline Queue_1_t93D3AD4E54C66B999AAA0C65262599BF86E18F2F * get_badsubsegs_1() const { return ___badsubsegs_1; }
	inline Queue_1_t93D3AD4E54C66B999AAA0C65262599BF86E18F2F ** get_address_of_badsubsegs_1() { return &___badsubsegs_1; }
	inline void set_badsubsegs_1(Queue_1_t93D3AD4E54C66B999AAA0C65262599BF86E18F2F * value)
	{
		___badsubsegs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___badsubsegs_1), (void*)value);
	}

	inline static int32_t get_offset_of_queue_2() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ___queue_2)); }
	inline BadTriQueue_t0623150A4EAAC202EA7CF37942EB7F11DFDE3E4D * get_queue_2() const { return ___queue_2; }
	inline BadTriQueue_t0623150A4EAAC202EA7CF37942EB7F11DFDE3E4D ** get_address_of_queue_2() { return &___queue_2; }
	inline void set_queue_2(BadTriQueue_t0623150A4EAAC202EA7CF37942EB7F11DFDE3E4D * value)
	{
		___queue_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___queue_2), (void*)value);
	}

	inline static int32_t get_offset_of__TriangleNetMesh_3() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ____TriangleNetMesh_3)); }
	inline TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * get__TriangleNetMesh_3() const { return ____TriangleNetMesh_3; }
	inline TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF ** get_address_of__TriangleNetMesh_3() { return &____TriangleNetMesh_3; }
	inline void set__TriangleNetMesh_3(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * value)
	{
		____TriangleNetMesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TriangleNetMesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_behavior_4() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ___behavior_4)); }
	inline Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * get_behavior_4() const { return ___behavior_4; }
	inline Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 ** get_address_of_behavior_4() { return &___behavior_4; }
	inline void set_behavior_4(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * value)
	{
		___behavior_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behavior_4), (void*)value);
	}

	inline static int32_t get_offset_of_newLocation_5() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ___newLocation_5)); }
	inline NewLocation_t3A279633EA7E8EA677A20F5033126F947938132F * get_newLocation_5() const { return ___newLocation_5; }
	inline NewLocation_t3A279633EA7E8EA677A20F5033126F947938132F ** get_address_of_newLocation_5() { return &___newLocation_5; }
	inline void set_newLocation_5(NewLocation_t3A279633EA7E8EA677A20F5033126F947938132F * value)
	{
		___newLocation_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newLocation_5), (void*)value);
	}

	inline static int32_t get_offset_of_logger_6() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ___logger_6)); }
	inline RuntimeObject* get_logger_6() const { return ___logger_6; }
	inline RuntimeObject** get_address_of_logger_6() { return &___logger_6; }
	inline void set_logger_6(RuntimeObject* value)
	{
		___logger_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_6), (void*)value);
	}

	inline static int32_t get_offset_of_newvertex_tri_7() { return static_cast<int32_t>(offsetof(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92, ___newvertex_tri_7)); }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * get_newvertex_tri_7() const { return ___newvertex_tri_7; }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** get_address_of_newvertex_tri_7() { return &___newvertex_tri_7; }
	inline void set_newvertex_tri_7(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		___newvertex_tri_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___newvertex_tri_7), (void*)value);
	}
};


// TriangleNet.Meshing.QualityOptions
struct QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A  : public RuntimeObject
{
public:
	// System.Single TriangleNet.Meshing.QualityOptions::<MaximumAngle>k__BackingField
	float ___U3CMaximumAngleU3Ek__BackingField_0;
	// System.Single TriangleNet.Meshing.QualityOptions::<MinimumAngle>k__BackingField
	float ___U3CMinimumAngleU3Ek__BackingField_1;
	// System.Single TriangleNet.Meshing.QualityOptions::<MaximumArea>k__BackingField
	float ___U3CMaximumAreaU3Ek__BackingField_2;
	// System.Func`3<TriangleNet.Geometry.ITriangle,System.Single,System.Boolean> TriangleNet.Meshing.QualityOptions::<UserTest>k__BackingField
	Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 * ___U3CUserTestU3Ek__BackingField_3;
	// System.Boolean TriangleNet.Meshing.QualityOptions::<VariableArea>k__BackingField
	bool ___U3CVariableAreaU3Ek__BackingField_4;
	// System.Int32 TriangleNet.Meshing.QualityOptions::<SteinerPoints>k__BackingField
	int32_t ___U3CSteinerPointsU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_U3CMaximumAngleU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A, ___U3CMaximumAngleU3Ek__BackingField_0)); }
	inline float get_U3CMaximumAngleU3Ek__BackingField_0() const { return ___U3CMaximumAngleU3Ek__BackingField_0; }
	inline float* get_address_of_U3CMaximumAngleU3Ek__BackingField_0() { return &___U3CMaximumAngleU3Ek__BackingField_0; }
	inline void set_U3CMaximumAngleU3Ek__BackingField_0(float value)
	{
		___U3CMaximumAngleU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CMinimumAngleU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A, ___U3CMinimumAngleU3Ek__BackingField_1)); }
	inline float get_U3CMinimumAngleU3Ek__BackingField_1() const { return ___U3CMinimumAngleU3Ek__BackingField_1; }
	inline float* get_address_of_U3CMinimumAngleU3Ek__BackingField_1() { return &___U3CMinimumAngleU3Ek__BackingField_1; }
	inline void set_U3CMinimumAngleU3Ek__BackingField_1(float value)
	{
		___U3CMinimumAngleU3Ek__BackingField_1 = value;
	}

	inline static int32_t get_offset_of_U3CMaximumAreaU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A, ___U3CMaximumAreaU3Ek__BackingField_2)); }
	inline float get_U3CMaximumAreaU3Ek__BackingField_2() const { return ___U3CMaximumAreaU3Ek__BackingField_2; }
	inline float* get_address_of_U3CMaximumAreaU3Ek__BackingField_2() { return &___U3CMaximumAreaU3Ek__BackingField_2; }
	inline void set_U3CMaximumAreaU3Ek__BackingField_2(float value)
	{
		___U3CMaximumAreaU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CUserTestU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A, ___U3CUserTestU3Ek__BackingField_3)); }
	inline Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 * get_U3CUserTestU3Ek__BackingField_3() const { return ___U3CUserTestU3Ek__BackingField_3; }
	inline Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 ** get_address_of_U3CUserTestU3Ek__BackingField_3() { return &___U3CUserTestU3Ek__BackingField_3; }
	inline void set_U3CUserTestU3Ek__BackingField_3(Func_3_t22F569CC03B4941199EBD1C42FA9E7CA3B84E259 * value)
	{
		___U3CUserTestU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserTestU3Ek__BackingField_3), (void*)value);
	}

	inline static int32_t get_offset_of_U3CVariableAreaU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A, ___U3CVariableAreaU3Ek__BackingField_4)); }
	inline bool get_U3CVariableAreaU3Ek__BackingField_4() const { return ___U3CVariableAreaU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CVariableAreaU3Ek__BackingField_4() { return &___U3CVariableAreaU3Ek__BackingField_4; }
	inline void set_U3CVariableAreaU3Ek__BackingField_4(bool value)
	{
		___U3CVariableAreaU3Ek__BackingField_4 = value;
	}

	inline static int32_t get_offset_of_U3CSteinerPointsU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A, ___U3CSteinerPointsU3Ek__BackingField_5)); }
	inline int32_t get_U3CSteinerPointsU3Ek__BackingField_5() const { return ___U3CSteinerPointsU3Ek__BackingField_5; }
	inline int32_t* get_address_of_U3CSteinerPointsU3Ek__BackingField_5() { return &___U3CSteinerPointsU3Ek__BackingField_5; }
	inline void set_U3CSteinerPointsU3Ek__BackingField_5(int32_t value)
	{
		___U3CSteinerPointsU3Ek__BackingField_5 = value;
	}
};


// System.Random
struct Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118  : public RuntimeObject
{
public:
	// System.Int32 System.Random::inext
	int32_t ___inext_3;
	// System.Int32 System.Random::inextp
	int32_t ___inextp_4;
	// System.Int32[] System.Random::SeedArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___SeedArray_5;

public:
	inline static int32_t get_offset_of_inext_3() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inext_3)); }
	inline int32_t get_inext_3() const { return ___inext_3; }
	inline int32_t* get_address_of_inext_3() { return &___inext_3; }
	inline void set_inext_3(int32_t value)
	{
		___inext_3 = value;
	}

	inline static int32_t get_offset_of_inextp_4() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___inextp_4)); }
	inline int32_t get_inextp_4() const { return ___inextp_4; }
	inline int32_t* get_address_of_inextp_4() { return &___inextp_4; }
	inline void set_inextp_4(int32_t value)
	{
		___inextp_4 = value;
	}

	inline static int32_t get_offset_of_SeedArray_5() { return static_cast<int32_t>(offsetof(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118, ___SeedArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_SeedArray_5() const { return ___SeedArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_SeedArray_5() { return &___SeedArray_5; }
	inline void set_SeedArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___SeedArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SeedArray_5), (void*)value);
	}
};


// TriangleNet.Geometry.Rectangle
struct Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707  : public RuntimeObject
{
public:
	// System.Single TriangleNet.Geometry.Rectangle::xmin
	float ___xmin_0;
	// System.Single TriangleNet.Geometry.Rectangle::ymin
	float ___ymin_1;
	// System.Single TriangleNet.Geometry.Rectangle::xmax
	float ___xmax_2;
	// System.Single TriangleNet.Geometry.Rectangle::ymax
	float ___ymax_3;

public:
	inline static int32_t get_offset_of_xmin_0() { return static_cast<int32_t>(offsetof(Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707, ___xmin_0)); }
	inline float get_xmin_0() const { return ___xmin_0; }
	inline float* get_address_of_xmin_0() { return &___xmin_0; }
	inline void set_xmin_0(float value)
	{
		___xmin_0 = value;
	}

	inline static int32_t get_offset_of_ymin_1() { return static_cast<int32_t>(offsetof(Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707, ___ymin_1)); }
	inline float get_ymin_1() const { return ___ymin_1; }
	inline float* get_address_of_ymin_1() { return &___ymin_1; }
	inline void set_ymin_1(float value)
	{
		___ymin_1 = value;
	}

	inline static int32_t get_offset_of_xmax_2() { return static_cast<int32_t>(offsetof(Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707, ___xmax_2)); }
	inline float get_xmax_2() const { return ___xmax_2; }
	inline float* get_address_of_xmax_2() { return &___xmax_2; }
	inline void set_xmax_2(float value)
	{
		___xmax_2 = value;
	}

	inline static int32_t get_offset_of_ymax_3() { return static_cast<int32_t>(offsetof(Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707, ___ymax_3)); }
	inline float get_ymax_3() const { return ___ymax_3; }
	inline float* get_address_of_ymax_3() { return &___ymax_3; }
	inline void set_ymax_3(float value)
	{
		___ymax_3 = value;
	}
};


// TriangleNet.RobustPredicates
struct RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059  : public RuntimeObject
{
public:
	// System.Single[] TriangleNet.RobustPredicates::fin1
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___fin1_11;
	// System.Single[] TriangleNet.RobustPredicates::fin2
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___fin2_12;
	// System.Single[] TriangleNet.RobustPredicates::abdet
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___abdet_13;
	// System.Single[] TriangleNet.RobustPredicates::axbc
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___axbc_14;
	// System.Single[] TriangleNet.RobustPredicates::axxbc
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___axxbc_15;
	// System.Single[] TriangleNet.RobustPredicates::aybc
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___aybc_16;
	// System.Single[] TriangleNet.RobustPredicates::ayybc
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___ayybc_17;
	// System.Single[] TriangleNet.RobustPredicates::adet
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___adet_18;
	// System.Single[] TriangleNet.RobustPredicates::bxca
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___bxca_19;
	// System.Single[] TriangleNet.RobustPredicates::bxxca
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___bxxca_20;
	// System.Single[] TriangleNet.RobustPredicates::byca
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___byca_21;
	// System.Single[] TriangleNet.RobustPredicates::byyca
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___byyca_22;
	// System.Single[] TriangleNet.RobustPredicates::bdet
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___bdet_23;
	// System.Single[] TriangleNet.RobustPredicates::cxab
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cxab_24;
	// System.Single[] TriangleNet.RobustPredicates::cxxab
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cxxab_25;
	// System.Single[] TriangleNet.RobustPredicates::cyab
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cyab_26;
	// System.Single[] TriangleNet.RobustPredicates::cyyab
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cyyab_27;
	// System.Single[] TriangleNet.RobustPredicates::cdet
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___cdet_28;
	// System.Single[] TriangleNet.RobustPredicates::temp8
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp8_29;
	// System.Single[] TriangleNet.RobustPredicates::temp16a
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp16a_30;
	// System.Single[] TriangleNet.RobustPredicates::temp16b
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp16b_31;
	// System.Single[] TriangleNet.RobustPredicates::temp16c
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp16c_32;
	// System.Single[] TriangleNet.RobustPredicates::temp32a
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp32a_33;
	// System.Single[] TriangleNet.RobustPredicates::temp32b
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp32b_34;
	// System.Single[] TriangleNet.RobustPredicates::temp48
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp48_35;
	// System.Single[] TriangleNet.RobustPredicates::temp64
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___temp64_36;

public:
	inline static int32_t get_offset_of_fin1_11() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___fin1_11)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_fin1_11() const { return ___fin1_11; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_fin1_11() { return &___fin1_11; }
	inline void set_fin1_11(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___fin1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fin1_11), (void*)value);
	}

	inline static int32_t get_offset_of_fin2_12() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___fin2_12)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_fin2_12() const { return ___fin2_12; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_fin2_12() { return &___fin2_12; }
	inline void set_fin2_12(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___fin2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___fin2_12), (void*)value);
	}

	inline static int32_t get_offset_of_abdet_13() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___abdet_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_abdet_13() const { return ___abdet_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_abdet_13() { return &___abdet_13; }
	inline void set_abdet_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___abdet_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___abdet_13), (void*)value);
	}

	inline static int32_t get_offset_of_axbc_14() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___axbc_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_axbc_14() const { return ___axbc_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_axbc_14() { return &___axbc_14; }
	inline void set_axbc_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___axbc_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axbc_14), (void*)value);
	}

	inline static int32_t get_offset_of_axxbc_15() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___axxbc_15)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_axxbc_15() const { return ___axxbc_15; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_axxbc_15() { return &___axxbc_15; }
	inline void set_axxbc_15(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___axxbc_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axxbc_15), (void*)value);
	}

	inline static int32_t get_offset_of_aybc_16() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___aybc_16)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_aybc_16() const { return ___aybc_16; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_aybc_16() { return &___aybc_16; }
	inline void set_aybc_16(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___aybc_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___aybc_16), (void*)value);
	}

	inline static int32_t get_offset_of_ayybc_17() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___ayybc_17)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_ayybc_17() const { return ___ayybc_17; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_ayybc_17() { return &___ayybc_17; }
	inline void set_ayybc_17(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___ayybc_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ayybc_17), (void*)value);
	}

	inline static int32_t get_offset_of_adet_18() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___adet_18)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_adet_18() const { return ___adet_18; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_adet_18() { return &___adet_18; }
	inline void set_adet_18(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___adet_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___adet_18), (void*)value);
	}

	inline static int32_t get_offset_of_bxca_19() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___bxca_19)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_bxca_19() const { return ___bxca_19; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_bxca_19() { return &___bxca_19; }
	inline void set_bxca_19(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___bxca_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bxca_19), (void*)value);
	}

	inline static int32_t get_offset_of_bxxca_20() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___bxxca_20)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_bxxca_20() const { return ___bxxca_20; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_bxxca_20() { return &___bxxca_20; }
	inline void set_bxxca_20(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___bxxca_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bxxca_20), (void*)value);
	}

	inline static int32_t get_offset_of_byca_21() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___byca_21)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_byca_21() const { return ___byca_21; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_byca_21() { return &___byca_21; }
	inline void set_byca_21(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___byca_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byca_21), (void*)value);
	}

	inline static int32_t get_offset_of_byyca_22() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___byyca_22)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_byyca_22() const { return ___byyca_22; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_byyca_22() { return &___byyca_22; }
	inline void set_byyca_22(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___byyca_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___byyca_22), (void*)value);
	}

	inline static int32_t get_offset_of_bdet_23() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___bdet_23)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_bdet_23() const { return ___bdet_23; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_bdet_23() { return &___bdet_23; }
	inline void set_bdet_23(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___bdet_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bdet_23), (void*)value);
	}

	inline static int32_t get_offset_of_cxab_24() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___cxab_24)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cxab_24() const { return ___cxab_24; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cxab_24() { return &___cxab_24; }
	inline void set_cxab_24(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cxab_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cxab_24), (void*)value);
	}

	inline static int32_t get_offset_of_cxxab_25() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___cxxab_25)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cxxab_25() const { return ___cxxab_25; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cxxab_25() { return &___cxxab_25; }
	inline void set_cxxab_25(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cxxab_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cxxab_25), (void*)value);
	}

	inline static int32_t get_offset_of_cyab_26() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___cyab_26)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cyab_26() const { return ___cyab_26; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cyab_26() { return &___cyab_26; }
	inline void set_cyab_26(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cyab_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cyab_26), (void*)value);
	}

	inline static int32_t get_offset_of_cyyab_27() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___cyyab_27)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cyyab_27() const { return ___cyyab_27; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cyyab_27() { return &___cyyab_27; }
	inline void set_cyyab_27(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cyyab_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cyyab_27), (void*)value);
	}

	inline static int32_t get_offset_of_cdet_28() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___cdet_28)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_cdet_28() const { return ___cdet_28; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_cdet_28() { return &___cdet_28; }
	inline void set_cdet_28(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___cdet_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cdet_28), (void*)value);
	}

	inline static int32_t get_offset_of_temp8_29() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp8_29)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp8_29() const { return ___temp8_29; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp8_29() { return &___temp8_29; }
	inline void set_temp8_29(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp8_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp8_29), (void*)value);
	}

	inline static int32_t get_offset_of_temp16a_30() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp16a_30)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp16a_30() const { return ___temp16a_30; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp16a_30() { return &___temp16a_30; }
	inline void set_temp16a_30(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp16a_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp16a_30), (void*)value);
	}

	inline static int32_t get_offset_of_temp16b_31() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp16b_31)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp16b_31() const { return ___temp16b_31; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp16b_31() { return &___temp16b_31; }
	inline void set_temp16b_31(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp16b_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp16b_31), (void*)value);
	}

	inline static int32_t get_offset_of_temp16c_32() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp16c_32)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp16c_32() const { return ___temp16c_32; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp16c_32() { return &___temp16c_32; }
	inline void set_temp16c_32(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp16c_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp16c_32), (void*)value);
	}

	inline static int32_t get_offset_of_temp32a_33() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp32a_33)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp32a_33() const { return ___temp32a_33; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp32a_33() { return &___temp32a_33; }
	inline void set_temp32a_33(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp32a_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp32a_33), (void*)value);
	}

	inline static int32_t get_offset_of_temp32b_34() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp32b_34)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp32b_34() const { return ___temp32b_34; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp32b_34() { return &___temp32b_34; }
	inline void set_temp32b_34(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp32b_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp32b_34), (void*)value);
	}

	inline static int32_t get_offset_of_temp48_35() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp48_35)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp48_35() const { return ___temp48_35; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp48_35() { return &___temp48_35; }
	inline void set_temp48_35(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp48_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp48_35), (void*)value);
	}

	inline static int32_t get_offset_of_temp64_36() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059, ___temp64_36)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_temp64_36() const { return ___temp64_36; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_temp64_36() { return &___temp64_36; }
	inline void set_temp64_36(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___temp64_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___temp64_36), (void*)value);
	}
};

struct RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields
{
public:
	// System.Object TriangleNet.RobustPredicates::creationLock
	RuntimeObject * ___creationLock_0;
	// TriangleNet.RobustPredicates TriangleNet.RobustPredicates::_default
	RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059 * ____default_1;
	// System.Single TriangleNet.RobustPredicates::epsilon
	float ___epsilon_2;
	// System.Single TriangleNet.RobustPredicates::splitter
	float ___splitter_3;
	// System.Single TriangleNet.RobustPredicates::resulterrbound
	float ___resulterrbound_4;
	// System.Single TriangleNet.RobustPredicates::ccwerrboundA
	float ___ccwerrboundA_5;
	// System.Single TriangleNet.RobustPredicates::ccwerrboundB
	float ___ccwerrboundB_6;
	// System.Single TriangleNet.RobustPredicates::ccwerrboundC
	float ___ccwerrboundC_7;
	// System.Single TriangleNet.RobustPredicates::iccerrboundA
	float ___iccerrboundA_8;
	// System.Single TriangleNet.RobustPredicates::iccerrboundB
	float ___iccerrboundB_9;
	// System.Single TriangleNet.RobustPredicates::iccerrboundC
	float ___iccerrboundC_10;

public:
	inline static int32_t get_offset_of_creationLock_0() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___creationLock_0)); }
	inline RuntimeObject * get_creationLock_0() const { return ___creationLock_0; }
	inline RuntimeObject ** get_address_of_creationLock_0() { return &___creationLock_0; }
	inline void set_creationLock_0(RuntimeObject * value)
	{
		___creationLock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___creationLock_0), (void*)value);
	}

	inline static int32_t get_offset_of__default_1() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ____default_1)); }
	inline RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059 * get__default_1() const { return ____default_1; }
	inline RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059 ** get_address_of__default_1() { return &____default_1; }
	inline void set__default_1(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059 * value)
	{
		____default_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____default_1), (void*)value);
	}

	inline static int32_t get_offset_of_epsilon_2() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___epsilon_2)); }
	inline float get_epsilon_2() const { return ___epsilon_2; }
	inline float* get_address_of_epsilon_2() { return &___epsilon_2; }
	inline void set_epsilon_2(float value)
	{
		___epsilon_2 = value;
	}

	inline static int32_t get_offset_of_splitter_3() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___splitter_3)); }
	inline float get_splitter_3() const { return ___splitter_3; }
	inline float* get_address_of_splitter_3() { return &___splitter_3; }
	inline void set_splitter_3(float value)
	{
		___splitter_3 = value;
	}

	inline static int32_t get_offset_of_resulterrbound_4() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___resulterrbound_4)); }
	inline float get_resulterrbound_4() const { return ___resulterrbound_4; }
	inline float* get_address_of_resulterrbound_4() { return &___resulterrbound_4; }
	inline void set_resulterrbound_4(float value)
	{
		___resulterrbound_4 = value;
	}

	inline static int32_t get_offset_of_ccwerrboundA_5() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___ccwerrboundA_5)); }
	inline float get_ccwerrboundA_5() const { return ___ccwerrboundA_5; }
	inline float* get_address_of_ccwerrboundA_5() { return &___ccwerrboundA_5; }
	inline void set_ccwerrboundA_5(float value)
	{
		___ccwerrboundA_5 = value;
	}

	inline static int32_t get_offset_of_ccwerrboundB_6() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___ccwerrboundB_6)); }
	inline float get_ccwerrboundB_6() const { return ___ccwerrboundB_6; }
	inline float* get_address_of_ccwerrboundB_6() { return &___ccwerrboundB_6; }
	inline void set_ccwerrboundB_6(float value)
	{
		___ccwerrboundB_6 = value;
	}

	inline static int32_t get_offset_of_ccwerrboundC_7() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___ccwerrboundC_7)); }
	inline float get_ccwerrboundC_7() const { return ___ccwerrboundC_7; }
	inline float* get_address_of_ccwerrboundC_7() { return &___ccwerrboundC_7; }
	inline void set_ccwerrboundC_7(float value)
	{
		___ccwerrboundC_7 = value;
	}

	inline static int32_t get_offset_of_iccerrboundA_8() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___iccerrboundA_8)); }
	inline float get_iccerrboundA_8() const { return ___iccerrboundA_8; }
	inline float* get_address_of_iccerrboundA_8() { return &___iccerrboundA_8; }
	inline void set_iccerrboundA_8(float value)
	{
		___iccerrboundA_8 = value;
	}

	inline static int32_t get_offset_of_iccerrboundB_9() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___iccerrboundB_9)); }
	inline float get_iccerrboundB_9() const { return ___iccerrboundB_9; }
	inline float* get_address_of_iccerrboundB_9() { return &___iccerrboundB_9; }
	inline void set_iccerrboundB_9(float value)
	{
		___iccerrboundB_9 = value;
	}

	inline static int32_t get_offset_of_iccerrboundC_10() { return static_cast<int32_t>(offsetof(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_StaticFields, ___iccerrboundC_10)); }
	inline float get_iccerrboundC_10() const { return ___iccerrboundC_10; }
	inline float* get_address_of_iccerrboundC_10() { return &___iccerrboundC_10; }
	inline void set_iccerrboundC_10(float value)
	{
		___iccerrboundC_10 = value;
	}
};


// TriangleNet.Geometry.Segment
struct Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2  : public RuntimeObject
{
public:
	// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::v0
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___v0_0;
	// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::v1
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___v1_1;
	// System.Int32 TriangleNet.Geometry.Segment::label
	int32_t ___label_2;

public:
	inline static int32_t get_offset_of_v0_0() { return static_cast<int32_t>(offsetof(Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2, ___v0_0)); }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * get_v0_0() const { return ___v0_0; }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** get_address_of_v0_0() { return &___v0_0; }
	inline void set_v0_0(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		___v0_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___v0_0), (void*)value);
	}

	inline static int32_t get_offset_of_v1_1() { return static_cast<int32_t>(offsetof(Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2, ___v1_1)); }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * get_v1_1() const { return ___v1_1; }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** get_address_of_v1_1() { return &___v1_1; }
	inline void set_v1_1(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		___v1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___v1_1), (void*)value);
	}

	inline static int32_t get_offset_of_label_2() { return static_cast<int32_t>(offsetof(Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2, ___label_2)); }
	inline int32_t get_label_2() const { return ___label_2; }
	inline int32_t* get_address_of_label_2() { return &___label_2; }
	inline void set_label_2(int32_t value)
	{
		___label_2 = value;
	}
};


// TriangleNet.Tools.Statistic
struct Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849  : public RuntimeObject
{
public:

public:
};

struct Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields
{
public:
	// System.Int64 TriangleNet.Tools.Statistic::InCircleCount
	int64_t ___InCircleCount_0;
	// System.Int64 TriangleNet.Tools.Statistic::InCircleAdaptCount
	int64_t ___InCircleAdaptCount_1;
	// System.Int64 TriangleNet.Tools.Statistic::CounterClockwiseCount
	int64_t ___CounterClockwiseCount_2;
	// System.Int64 TriangleNet.Tools.Statistic::CounterClockwiseAdaptCount
	int64_t ___CounterClockwiseAdaptCount_3;
	// System.Int64 TriangleNet.Tools.Statistic::Orient3dCount
	int64_t ___Orient3dCount_4;
	// System.Int64 TriangleNet.Tools.Statistic::HyperbolaCount
	int64_t ___HyperbolaCount_5;
	// System.Int64 TriangleNet.Tools.Statistic::CircumcenterCount
	int64_t ___CircumcenterCount_6;
	// System.Int64 TriangleNet.Tools.Statistic::CircleTopCount
	int64_t ___CircleTopCount_7;
	// System.Int64 TriangleNet.Tools.Statistic::RelocationCount
	int64_t ___RelocationCount_8;
	// System.Int32[] TriangleNet.Tools.Statistic::plus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___plus1Mod3_9;
	// System.Int32[] TriangleNet.Tools.Statistic::minus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___minus1Mod3_10;

public:
	inline static int32_t get_offset_of_InCircleCount_0() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___InCircleCount_0)); }
	inline int64_t get_InCircleCount_0() const { return ___InCircleCount_0; }
	inline int64_t* get_address_of_InCircleCount_0() { return &___InCircleCount_0; }
	inline void set_InCircleCount_0(int64_t value)
	{
		___InCircleCount_0 = value;
	}

	inline static int32_t get_offset_of_InCircleAdaptCount_1() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___InCircleAdaptCount_1)); }
	inline int64_t get_InCircleAdaptCount_1() const { return ___InCircleAdaptCount_1; }
	inline int64_t* get_address_of_InCircleAdaptCount_1() { return &___InCircleAdaptCount_1; }
	inline void set_InCircleAdaptCount_1(int64_t value)
	{
		___InCircleAdaptCount_1 = value;
	}

	inline static int32_t get_offset_of_CounterClockwiseCount_2() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___CounterClockwiseCount_2)); }
	inline int64_t get_CounterClockwiseCount_2() const { return ___CounterClockwiseCount_2; }
	inline int64_t* get_address_of_CounterClockwiseCount_2() { return &___CounterClockwiseCount_2; }
	inline void set_CounterClockwiseCount_2(int64_t value)
	{
		___CounterClockwiseCount_2 = value;
	}

	inline static int32_t get_offset_of_CounterClockwiseAdaptCount_3() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___CounterClockwiseAdaptCount_3)); }
	inline int64_t get_CounterClockwiseAdaptCount_3() const { return ___CounterClockwiseAdaptCount_3; }
	inline int64_t* get_address_of_CounterClockwiseAdaptCount_3() { return &___CounterClockwiseAdaptCount_3; }
	inline void set_CounterClockwiseAdaptCount_3(int64_t value)
	{
		___CounterClockwiseAdaptCount_3 = value;
	}

	inline static int32_t get_offset_of_Orient3dCount_4() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___Orient3dCount_4)); }
	inline int64_t get_Orient3dCount_4() const { return ___Orient3dCount_4; }
	inline int64_t* get_address_of_Orient3dCount_4() { return &___Orient3dCount_4; }
	inline void set_Orient3dCount_4(int64_t value)
	{
		___Orient3dCount_4 = value;
	}

	inline static int32_t get_offset_of_HyperbolaCount_5() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___HyperbolaCount_5)); }
	inline int64_t get_HyperbolaCount_5() const { return ___HyperbolaCount_5; }
	inline int64_t* get_address_of_HyperbolaCount_5() { return &___HyperbolaCount_5; }
	inline void set_HyperbolaCount_5(int64_t value)
	{
		___HyperbolaCount_5 = value;
	}

	inline static int32_t get_offset_of_CircumcenterCount_6() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___CircumcenterCount_6)); }
	inline int64_t get_CircumcenterCount_6() const { return ___CircumcenterCount_6; }
	inline int64_t* get_address_of_CircumcenterCount_6() { return &___CircumcenterCount_6; }
	inline void set_CircumcenterCount_6(int64_t value)
	{
		___CircumcenterCount_6 = value;
	}

	inline static int32_t get_offset_of_CircleTopCount_7() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___CircleTopCount_7)); }
	inline int64_t get_CircleTopCount_7() const { return ___CircleTopCount_7; }
	inline int64_t* get_address_of_CircleTopCount_7() { return &___CircleTopCount_7; }
	inline void set_CircleTopCount_7(int64_t value)
	{
		___CircleTopCount_7 = value;
	}

	inline static int32_t get_offset_of_RelocationCount_8() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___RelocationCount_8)); }
	inline int64_t get_RelocationCount_8() const { return ___RelocationCount_8; }
	inline int64_t* get_address_of_RelocationCount_8() { return &___RelocationCount_8; }
	inline void set_RelocationCount_8(int64_t value)
	{
		___RelocationCount_8 = value;
	}

	inline static int32_t get_offset_of_plus1Mod3_9() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___plus1Mod3_9)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_plus1Mod3_9() const { return ___plus1Mod3_9; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_plus1Mod3_9() { return &___plus1Mod3_9; }
	inline void set_plus1Mod3_9(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___plus1Mod3_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plus1Mod3_9), (void*)value);
	}

	inline static int32_t get_offset_of_minus1Mod3_10() { return static_cast<int32_t>(offsetof(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields, ___minus1Mod3_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_minus1Mod3_10() const { return ___minus1Mod3_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_minus1Mod3_10() { return &___minus1Mod3_10; }
	inline void set_minus1Mod3_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___minus1Mod3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minus1Mod3_10), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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


// TriangleNet.Topology.SubSegment
struct SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Topology.SubSegment::hash
	int32_t ___hash_0;
	// TriangleNet.Topology.Osub[] TriangleNet.Topology.SubSegment::subsegs
	OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* ___subsegs_1;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Topology.SubSegment::vertices
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ___vertices_2;
	// TriangleNet.Topology.Otri[] TriangleNet.Topology.SubSegment::triangles
	OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* ___triangles_3;
	// System.Int32 TriangleNet.Topology.SubSegment::boundary
	int32_t ___boundary_4;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE, ___hash_0)); }
	inline int32_t get_hash_0() const { return ___hash_0; }
	inline int32_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(int32_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_subsegs_1() { return static_cast<int32_t>(offsetof(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE, ___subsegs_1)); }
	inline OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* get_subsegs_1() const { return ___subsegs_1; }
	inline OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C** get_address_of_subsegs_1() { return &___subsegs_1; }
	inline void set_subsegs_1(OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* value)
	{
		___subsegs_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsegs_1), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_2() { return static_cast<int32_t>(offsetof(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE, ___vertices_2)); }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* get_vertices_2() const { return ___vertices_2; }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0** get_address_of_vertices_2() { return &___vertices_2; }
	inline void set_vertices_2(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* value)
	{
		___vertices_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_2), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_3() { return static_cast<int32_t>(offsetof(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE, ___triangles_3)); }
	inline OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* get_triangles_3() const { return ___triangles_3; }
	inline OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25** get_address_of_triangles_3() { return &___triangles_3; }
	inline void set_triangles_3(OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* value)
	{
		___triangles_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_3), (void*)value);
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE, ___boundary_4)); }
	inline int32_t get_boundary_4() const { return ___boundary_4; }
	inline int32_t* get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(int32_t value)
	{
		___boundary_4 = value;
	}
};


// TriangleNet.Topology.Triangle
struct Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Topology.Triangle::hash
	int32_t ___hash_0;
	// System.Int32 TriangleNet.Topology.Triangle::id
	int32_t ___id_1;
	// TriangleNet.Topology.Otri[] TriangleNet.Topology.Triangle::neighbors
	OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* ___neighbors_2;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Topology.Triangle::vertices
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ___vertices_3;
	// TriangleNet.Topology.Osub[] TriangleNet.Topology.Triangle::subsegs
	OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* ___subsegs_4;
	// System.Int32 TriangleNet.Topology.Triangle::label
	int32_t ___label_5;
	// System.Single TriangleNet.Topology.Triangle::area
	float ___area_6;
	// System.Boolean TriangleNet.Topology.Triangle::infected
	bool ___infected_7;

public:
	inline static int32_t get_offset_of_hash_0() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___hash_0)); }
	inline int32_t get_hash_0() const { return ___hash_0; }
	inline int32_t* get_address_of_hash_0() { return &___hash_0; }
	inline void set_hash_0(int32_t value)
	{
		___hash_0 = value;
	}

	inline static int32_t get_offset_of_id_1() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___id_1)); }
	inline int32_t get_id_1() const { return ___id_1; }
	inline int32_t* get_address_of_id_1() { return &___id_1; }
	inline void set_id_1(int32_t value)
	{
		___id_1 = value;
	}

	inline static int32_t get_offset_of_neighbors_2() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___neighbors_2)); }
	inline OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* get_neighbors_2() const { return ___neighbors_2; }
	inline OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25** get_address_of_neighbors_2() { return &___neighbors_2; }
	inline void set_neighbors_2(OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* value)
	{
		___neighbors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___neighbors_2), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_3() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___vertices_3)); }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* get_vertices_3() const { return ___vertices_3; }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0** get_address_of_vertices_3() { return &___vertices_3; }
	inline void set_vertices_3(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* value)
	{
		___vertices_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_3), (void*)value);
	}

	inline static int32_t get_offset_of_subsegs_4() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___subsegs_4)); }
	inline OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* get_subsegs_4() const { return ___subsegs_4; }
	inline OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C** get_address_of_subsegs_4() { return &___subsegs_4; }
	inline void set_subsegs_4(OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* value)
	{
		___subsegs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsegs_4), (void*)value);
	}

	inline static int32_t get_offset_of_label_5() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___label_5)); }
	inline int32_t get_label_5() const { return ___label_5; }
	inline int32_t* get_address_of_label_5() { return &___label_5; }
	inline void set_label_5(int32_t value)
	{
		___label_5 = value;
	}

	inline static int32_t get_offset_of_area_6() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___area_6)); }
	inline float get_area_6() const { return ___area_6; }
	inline float* get_address_of_area_6() { return &___area_6; }
	inline void set_area_6(float value)
	{
		___area_6 = value;
	}

	inline static int32_t get_offset_of_infected_7() { return static_cast<int32_t>(offsetof(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412, ___infected_7)); }
	inline bool get_infected_7() const { return ___infected_7; }
	inline bool* get_address_of_infected_7() { return &___infected_7; }
	inline void set_infected_7(bool value)
	{
		___infected_7 = value;
	}
};


// TriangleNet.TrianglePool
struct TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.TrianglePool::size
	int32_t ___size_1;
	// System.Int32 TriangleNet.TrianglePool::count
	int32_t ___count_2;
	// TriangleNet.Topology.Triangle[][] TriangleNet.TrianglePool::pool
	TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* ___pool_3;
	// System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::stack
	Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * ___stack_4;

public:
	inline static int32_t get_offset_of_size_1() { return static_cast<int32_t>(offsetof(TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50, ___size_1)); }
	inline int32_t get_size_1() const { return ___size_1; }
	inline int32_t* get_address_of_size_1() { return &___size_1; }
	inline void set_size_1(int32_t value)
	{
		___size_1 = value;
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_pool_3() { return static_cast<int32_t>(offsetof(TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50, ___pool_3)); }
	inline TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* get_pool_3() const { return ___pool_3; }
	inline TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2** get_address_of_pool_3() { return &___pool_3; }
	inline void set_pool_3(TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* value)
	{
		___pool_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_3), (void*)value);
	}

	inline static int32_t get_offset_of_stack_4() { return static_cast<int32_t>(offsetof(TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50, ___stack_4)); }
	inline Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * get_stack_4() const { return ___stack_4; }
	inline Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF ** get_address_of_stack_4() { return &___stack_4; }
	inline void set_stack_4(Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * value)
	{
		___stack_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___stack_4), (void*)value);
	}
};


// TriangleNet.TriangleSampler
struct TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4  : public RuntimeObject
{
public:
	// System.Random TriangleNet.TriangleSampler::random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random_2;
	// TriangleNet.TriangleNetMesh TriangleNet.TriangleSampler::_TriangleNetMesh
	TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ____TriangleNetMesh_3;
	// System.Int32 TriangleNet.TriangleSampler::samples
	int32_t ___samples_4;
	// System.Int32 TriangleNet.TriangleSampler::triangleCount
	int32_t ___triangleCount_5;

public:
	inline static int32_t get_offset_of_random_2() { return static_cast<int32_t>(offsetof(TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4, ___random_2)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_random_2() const { return ___random_2; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_random_2() { return &___random_2; }
	inline void set_random_2(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___random_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_2), (void*)value);
	}

	inline static int32_t get_offset_of__TriangleNetMesh_3() { return static_cast<int32_t>(offsetof(TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4, ____TriangleNetMesh_3)); }
	inline TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * get__TriangleNetMesh_3() const { return ____TriangleNetMesh_3; }
	inline TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF ** get_address_of__TriangleNetMesh_3() { return &____TriangleNetMesh_3; }
	inline void set__TriangleNetMesh_3(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * value)
	{
		____TriangleNetMesh_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TriangleNetMesh_3), (void*)value);
	}

	inline static int32_t get_offset_of_samples_4() { return static_cast<int32_t>(offsetof(TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4, ___samples_4)); }
	inline int32_t get_samples_4() const { return ___samples_4; }
	inline int32_t* get_address_of_samples_4() { return &___samples_4; }
	inline void set_samples_4(int32_t value)
	{
		___samples_4 = value;
	}

	inline static int32_t get_offset_of_triangleCount_5() { return static_cast<int32_t>(offsetof(TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4, ___triangleCount_5)); }
	inline int32_t get_triangleCount_5() const { return ___triangleCount_5; }
	inline int32_t* get_address_of_triangleCount_5() { return &___triangleCount_5; }
	inline void set_triangleCount_5(int32_t value)
	{
		___triangleCount_5 = value;
	}
};


// TriangleNet.UnityExtentions
struct UnityExtentions_t7643130E96559FE8F4E23C09BAA2AF497AE4C1CB  : public RuntimeObject
{
public:

public:
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// TriangleNet.Tools.VertexSorter
struct VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D  : public RuntimeObject
{
public:
	// System.Random TriangleNet.Tools.VertexSorter::rand
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___rand_0;
	// TriangleNet.Geometry.Vertex[] TriangleNet.Tools.VertexSorter::points
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ___points_1;

public:
	inline static int32_t get_offset_of_rand_0() { return static_cast<int32_t>(offsetof(VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D, ___rand_0)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_rand_0() const { return ___rand_0; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_rand_0() { return &___rand_0; }
	inline void set_rand_0(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___rand_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rand_0), (void*)value);
	}

	inline static int32_t get_offset_of_points_1() { return static_cast<int32_t>(offsetof(VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D, ___points_1)); }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* get_points_1() const { return ___points_1; }
	inline VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0** get_address_of_points_1() { return &___points_1; }
	inline void set_points_1(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* value)
	{
		___points_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___points_1), (void*)value);
	}
};


// TriangleNet.Configuration/<>c
struct U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_StaticFields
{
public:
	// TriangleNet.Configuration/<>c TriangleNet.Configuration/<>c::<>9
	U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * ___U3CU3E9_0;
	// System.Func`1<TriangleNet.IPredicates> TriangleNet.Configuration/<>c::<>9__0_0
	Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * ___U3CU3E9__0_0_1;
	// System.Func`1<TriangleNet.TrianglePool> TriangleNet.Configuration/<>c::<>9__0_1
	Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * ___U3CU3E9__0_1_2;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_StaticFields, ___U3CU3E9__0_0_1)); }
	inline Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * get_U3CU3E9__0_0_1() const { return ___U3CU3E9__0_0_1; }
	inline Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A ** get_address_of_U3CU3E9__0_0_1() { return &___U3CU3E9__0_0_1; }
	inline void set_U3CU3E9__0_0_1(Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * value)
	{
		___U3CU3E9__0_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_0_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__0_1_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_StaticFields, ___U3CU3E9__0_1_2)); }
	inline Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * get_U3CU3E9__0_1_2() const { return ___U3CU3E9__0_1_2; }
	inline Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 ** get_address_of_U3CU3E9__0_1_2() { return &___U3CU3E9__0_1_2; }
	inline void set_U3CU3E9__0_1_2(Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * value)
	{
		___U3CU3E9__0_1_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__0_1_2), (void*)value);
	}
};


// TriangleNet.Meshing.Iterators.RegionIterator/<>c
struct U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_StaticFields
{
public:
	// TriangleNet.Meshing.Iterators.RegionIterator/<>c TriangleNet.Meshing.Iterators.RegionIterator/<>c::<>9
	U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB * ___U3CU3E9_0;
	// System.Func`2<TriangleNet.Topology.SubSegment,System.Boolean> TriangleNet.Meshing.Iterators.RegionIterator/<>c::<>9__3_0
	Func_2_tB60864E8BFC491CD46CC50AEACFDC630EA473112 * ___U3CU3E9__3_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__3_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_StaticFields, ___U3CU3E9__3_0_1)); }
	inline Func_2_tB60864E8BFC491CD46CC50AEACFDC630EA473112 * get_U3CU3E9__3_0_1() const { return ___U3CU3E9__3_0_1; }
	inline Func_2_tB60864E8BFC491CD46CC50AEACFDC630EA473112 ** get_address_of_U3CU3E9__3_0_1() { return &___U3CU3E9__3_0_1; }
	inline void set_U3CU3E9__3_0_1(Func_2_tB60864E8BFC491CD46CC50AEACFDC630EA473112 * value)
	{
		___U3CU3E9__3_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__3_0_1), (void*)value);
	}
};


// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_t906AAD0F0069727736A8049C61CE46D978E212E7  : public RuntimeObject
{
public:
	// TriangleNet.Topology.Triangle TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0::triangle
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___triangle_0;

public:
	inline static int32_t get_offset_of_triangle_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass2_0_t906AAD0F0069727736A8049C61CE46D978E212E7, ___triangle_0)); }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * get_triangle_0() const { return ___triangle_0; }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** get_address_of_triangle_0() { return &___triangle_0; }
	inline void set_triangle_0(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		___triangle_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangle_0), (void*)value);
	}
};


// TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_t27EB9821E7E4999215A204A2A496EDB33460477D  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0::boundary
	int32_t ___boundary_0;

public:
	inline static int32_t get_offset_of_boundary_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass3_0_t27EB9821E7E4999215A204A2A496EDB33460477D, ___boundary_0)); }
	inline int32_t get_boundary_0() const { return ___boundary_0; }
	inline int32_t* get_address_of_boundary_0() { return &___boundary_0; }
	inline void set_boundary_0(int32_t value)
	{
		___boundary_0 = value;
	}
};


// TriangleNet.TrianglePool/<Sample>d__9
struct U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<>1__state
	int32_t ___U3CU3E1__state_0;
	// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/<Sample>d__9::<>2__current
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___U3CU3E2__current_1;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<>l__initialThreadId
	int32_t ___U3CU3El__initialThreadId_2;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::k
	int32_t ___k_3;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<>3__k
	int32_t ___U3CU3E3__k_4;
	// System.Random TriangleNet.TrianglePool/<Sample>d__9::random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random_5;
	// System.Random TriangleNet.TrianglePool/<Sample>d__9::<>3__random
	Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___U3CU3E3__random_6;
	// TriangleNet.TrianglePool TriangleNet.TrianglePool/<Sample>d__9::<>4__this
	TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * ___U3CU3E4__this_7;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<i>5__1
	int32_t ___U3CiU3E5__1_8;
	// System.Int32 TriangleNet.TrianglePool/<Sample>d__9::<count>5__2
	int32_t ___U3CcountU3E5__2_9;
	// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/<Sample>d__9::<t>5__3
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___U3CtU3E5__3_10;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CU3E2__current_1)); }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3El__initialThreadId_2() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CU3El__initialThreadId_2)); }
	inline int32_t get_U3CU3El__initialThreadId_2() const { return ___U3CU3El__initialThreadId_2; }
	inline int32_t* get_address_of_U3CU3El__initialThreadId_2() { return &___U3CU3El__initialThreadId_2; }
	inline void set_U3CU3El__initialThreadId_2(int32_t value)
	{
		___U3CU3El__initialThreadId_2 = value;
	}

	inline static int32_t get_offset_of_k_3() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___k_3)); }
	inline int32_t get_k_3() const { return ___k_3; }
	inline int32_t* get_address_of_k_3() { return &___k_3; }
	inline void set_k_3(int32_t value)
	{
		___k_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E3__k_4() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CU3E3__k_4)); }
	inline int32_t get_U3CU3E3__k_4() const { return ___U3CU3E3__k_4; }
	inline int32_t* get_address_of_U3CU3E3__k_4() { return &___U3CU3E3__k_4; }
	inline void set_U3CU3E3__k_4(int32_t value)
	{
		___U3CU3E3__k_4 = value;
	}

	inline static int32_t get_offset_of_random_5() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___random_5)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_random_5() const { return ___random_5; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_random_5() { return &___random_5; }
	inline void set_random_5(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___random_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___random_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E3__random_6() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CU3E3__random_6)); }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * get_U3CU3E3__random_6() const { return ___U3CU3E3__random_6; }
	inline Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 ** get_address_of_U3CU3E3__random_6() { return &___U3CU3E3__random_6; }
	inline void set_U3CU3E3__random_6(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * value)
	{
		___U3CU3E3__random_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E3__random_6), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_7() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CU3E4__this_7)); }
	inline TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * get_U3CU3E4__this_7() const { return ___U3CU3E4__this_7; }
	inline TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 ** get_address_of_U3CU3E4__this_7() { return &___U3CU3E4__this_7; }
	inline void set_U3CU3E4__this_7(TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * value)
	{
		___U3CU3E4__this_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__1_8() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CiU3E5__1_8)); }
	inline int32_t get_U3CiU3E5__1_8() const { return ___U3CiU3E5__1_8; }
	inline int32_t* get_address_of_U3CiU3E5__1_8() { return &___U3CiU3E5__1_8; }
	inline void set_U3CiU3E5__1_8(int32_t value)
	{
		___U3CiU3E5__1_8 = value;
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_9() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CcountU3E5__2_9)); }
	inline int32_t get_U3CcountU3E5__2_9() const { return ___U3CcountU3E5__2_9; }
	inline int32_t* get_address_of_U3CcountU3E5__2_9() { return &___U3CcountU3E5__2_9; }
	inline void set_U3CcountU3E5__2_9(int32_t value)
	{
		___U3CcountU3E5__2_9 = value;
	}

	inline static int32_t get_offset_of_U3CtU3E5__3_10() { return static_cast<int32_t>(offsetof(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77, ___U3CtU3E5__3_10)); }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * get_U3CtU3E5__3_10() const { return ___U3CtU3E5__3_10; }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** get_address_of_U3CtU3E5__3_10() { return &___U3CtU3E5__3_10; }
	inline void set_U3CtU3E5__3_10(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		___U3CtU3E5__3_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CtU3E5__3_10), (void*)value);
	}
};


// TriangleNet.TrianglePool/Enumerator
struct Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365  : public RuntimeObject
{
public:
	// System.Int32 TriangleNet.TrianglePool/Enumerator::count
	int32_t ___count_0;
	// TriangleNet.Topology.Triangle[][] TriangleNet.TrianglePool/Enumerator::pool
	TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* ___pool_1;
	// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/Enumerator::current
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___current_2;
	// System.Int32 TriangleNet.TrianglePool/Enumerator::index
	int32_t ___index_3;
	// System.Int32 TriangleNet.TrianglePool/Enumerator::offset
	int32_t ___offset_4;

public:
	inline static int32_t get_offset_of_count_0() { return static_cast<int32_t>(offsetof(Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365, ___count_0)); }
	inline int32_t get_count_0() const { return ___count_0; }
	inline int32_t* get_address_of_count_0() { return &___count_0; }
	inline void set_count_0(int32_t value)
	{
		___count_0 = value;
	}

	inline static int32_t get_offset_of_pool_1() { return static_cast<int32_t>(offsetof(Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365, ___pool_1)); }
	inline TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* get_pool_1() const { return ___pool_1; }
	inline TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2** get_address_of_pool_1() { return &___pool_1; }
	inline void set_pool_1(TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* value)
	{
		___pool_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pool_1), (void*)value);
	}

	inline static int32_t get_offset_of_current_2() { return static_cast<int32_t>(offsetof(Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365, ___current_2)); }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * get_current_2() const { return ___current_2; }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** get_address_of_current_2() { return &___current_2; }
	inline void set_current_2(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		___current_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_2), (void*)value);
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365, ___index_3)); }
	inline int32_t get_index_3() const { return ___index_3; }
	inline int32_t* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(int32_t value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_offset_4() { return static_cast<int32_t>(offsetof(Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365, ___offset_4)); }
	inline int32_t get_offset_4() const { return ___offset_4; }
	inline int32_t* get_address_of_offset_4() { return &___offset_4; }
	inline void set_offset_4(int32_t value)
	{
		___offset_4 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// TriangleNet.Topology.Osub
struct Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA 
{
public:
	// TriangleNet.Topology.SubSegment TriangleNet.Topology.Osub::seg
	SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___seg_0;
	// System.Int32 TriangleNet.Topology.Osub::orient
	int32_t ___orient_1;

public:
	inline static int32_t get_offset_of_seg_0() { return static_cast<int32_t>(offsetof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA, ___seg_0)); }
	inline SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * get_seg_0() const { return ___seg_0; }
	inline SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE ** get_address_of_seg_0() { return &___seg_0; }
	inline void set_seg_0(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * value)
	{
		___seg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___seg_0), (void*)value);
	}

	inline static int32_t get_offset_of_orient_1() { return static_cast<int32_t>(offsetof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA, ___orient_1)); }
	inline int32_t get_orient_1() const { return ___orient_1; }
	inline int32_t* get_address_of_orient_1() { return &___orient_1; }
	inline void set_orient_1(int32_t value)
	{
		___orient_1 = value;
	}
};

// Native definition for P/Invoke marshalling of TriangleNet.Topology.Osub
struct Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA_marshaled_pinvoke
{
	SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___seg_0;
	int32_t ___orient_1;
};
// Native definition for COM marshalling of TriangleNet.Topology.Osub
struct Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA_marshaled_com
{
	SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___seg_0;
	int32_t ___orient_1;
};

// TriangleNet.Topology.Otri
struct Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE 
{
public:
	// TriangleNet.Topology.Triangle TriangleNet.Topology.Otri::tri
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___tri_0;
	// System.Int32 TriangleNet.Topology.Otri::orient
	int32_t ___orient_1;

public:
	inline static int32_t get_offset_of_tri_0() { return static_cast<int32_t>(offsetof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE, ___tri_0)); }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * get_tri_0() const { return ___tri_0; }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** get_address_of_tri_0() { return &___tri_0; }
	inline void set_tri_0(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		___tri_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tri_0), (void*)value);
	}

	inline static int32_t get_offset_of_orient_1() { return static_cast<int32_t>(offsetof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE, ___orient_1)); }
	inline int32_t get_orient_1() const { return ___orient_1; }
	inline int32_t* get_address_of_orient_1() { return &___orient_1; }
	inline void set_orient_1(int32_t value)
	{
		___orient_1 = value;
	}
};

struct Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_StaticFields
{
public:
	// System.Int32[] TriangleNet.Topology.Otri::plus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___plus1Mod3_2;
	// System.Int32[] TriangleNet.Topology.Otri::minus1Mod3
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___minus1Mod3_3;

public:
	inline static int32_t get_offset_of_plus1Mod3_2() { return static_cast<int32_t>(offsetof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_StaticFields, ___plus1Mod3_2)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_plus1Mod3_2() const { return ___plus1Mod3_2; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_plus1Mod3_2() { return &___plus1Mod3_2; }
	inline void set_plus1Mod3_2(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___plus1Mod3_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plus1Mod3_2), (void*)value);
	}

	inline static int32_t get_offset_of_minus1Mod3_3() { return static_cast<int32_t>(offsetof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_StaticFields, ___minus1Mod3_3)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_minus1Mod3_3() const { return ___minus1Mod3_3; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_minus1Mod3_3() { return &___minus1Mod3_3; }
	inline void set_minus1Mod3_3(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___minus1Mod3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minus1Mod3_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of TriangleNet.Topology.Otri
struct Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_marshaled_pinvoke
{
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___tri_0;
	int32_t ___orient_1;
};
// Native definition for COM marshalling of TriangleNet.Topology.Otri
struct Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_marshaled_com
{
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___tri_0;
	int32_t ___orient_1;
};

// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// TriangleNet.Meshing.Data.BadSubseg
struct BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B  : public RuntimeObject
{
public:
	// TriangleNet.Topology.Osub TriangleNet.Meshing.Data.BadSubseg::subseg
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  ___subseg_0;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadSubseg::org
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___org_1;
	// TriangleNet.Geometry.Vertex TriangleNet.Meshing.Data.BadSubseg::dest
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___dest_2;

public:
	inline static int32_t get_offset_of_subseg_0() { return static_cast<int32_t>(offsetof(BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B, ___subseg_0)); }
	inline Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  get_subseg_0() const { return ___subseg_0; }
	inline Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * get_address_of_subseg_0() { return &___subseg_0; }
	inline void set_subseg_0(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  value)
	{
		___subseg_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___subseg_0))->___seg_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_org_1() { return static_cast<int32_t>(offsetof(BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B, ___org_1)); }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * get_org_1() const { return ___org_1; }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** get_address_of_org_1() { return &___org_1; }
	inline void set_org_1(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		___org_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___org_1), (void*)value);
	}

	inline static int32_t get_offset_of_dest_2() { return static_cast<int32_t>(offsetof(BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B, ___dest_2)); }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * get_dest_2() const { return ___dest_2; }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** get_address_of_dest_2() { return &___dest_2; }
	inline void set_dest_2(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		___dest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dest_2), (void*)value);
	}
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
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
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// TriangleNet.InsertVertexResult
struct InsertVertexResult_t122673AA596309D10F6B93F13B95FD34CDF96513 
{
public:
	// System.Int32 TriangleNet.InsertVertexResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InsertVertexResult_t122673AA596309D10F6B93F13B95FD34CDF96513, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriangleNet.LocateResult
struct LocateResult_tC3669A3416AB2C0E94CDC4BF0FEE17AF7804AD6C 
{
public:
	// System.Int32 TriangleNet.LocateResult::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LocateResult_tC3669A3416AB2C0E94CDC4BF0FEE17AF7804AD6C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// TriangleNet.NodeNumbering
struct NodeNumbering_tC6129E75D161CBEBC439AA5D4C2696132D63E81F 
{
public:
	// System.Int32 TriangleNet.NodeNumbering::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NodeNumbering_tC6129E75D161CBEBC439AA5D4C2696132D63E81F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TriangleNet.TriangleLocator
struct TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F  : public RuntimeObject
{
public:
	// TriangleNet.TriangleSampler TriangleNet.TriangleLocator::sampler
	TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * ___sampler_0;
	// TriangleNet.TriangleNetMesh TriangleNet.TriangleLocator::_TriangleNetMesh
	TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ____TriangleNetMesh_1;
	// TriangleNet.IPredicates TriangleNet.TriangleLocator::predicates
	RuntimeObject* ___predicates_2;
	// TriangleNet.Topology.Otri TriangleNet.TriangleLocator::recenttri
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___recenttri_3;

public:
	inline static int32_t get_offset_of_sampler_0() { return static_cast<int32_t>(offsetof(TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F, ___sampler_0)); }
	inline TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * get_sampler_0() const { return ___sampler_0; }
	inline TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 ** get_address_of_sampler_0() { return &___sampler_0; }
	inline void set_sampler_0(TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * value)
	{
		___sampler_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sampler_0), (void*)value);
	}

	inline static int32_t get_offset_of__TriangleNetMesh_1() { return static_cast<int32_t>(offsetof(TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F, ____TriangleNetMesh_1)); }
	inline TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * get__TriangleNetMesh_1() const { return ____TriangleNetMesh_1; }
	inline TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF ** get_address_of__TriangleNetMesh_1() { return &____TriangleNetMesh_1; }
	inline void set__TriangleNetMesh_1(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * value)
	{
		____TriangleNetMesh_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TriangleNetMesh_1), (void*)value);
	}

	inline static int32_t get_offset_of_predicates_2() { return static_cast<int32_t>(offsetof(TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F, ___predicates_2)); }
	inline RuntimeObject* get_predicates_2() const { return ___predicates_2; }
	inline RuntimeObject** get_address_of_predicates_2() { return &___predicates_2; }
	inline void set_predicates_2(RuntimeObject* value)
	{
		___predicates_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicates_2), (void*)value);
	}

	inline static int32_t get_offset_of_recenttri_3() { return static_cast<int32_t>(offsetof(TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F, ___recenttri_3)); }
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  get_recenttri_3() const { return ___recenttri_3; }
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * get_address_of_recenttri_3() { return &___recenttri_3; }
	inline void set_recenttri_3(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  value)
	{
		___recenttri_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___recenttri_3))->___tri_0), (void*)NULL);
	}
};


// TriangleNet.VertexType
struct VertexType_t71392A05E3DA50E27A11BE2835347099D89930F6 
{
public:
	// System.Int32 TriangleNet.VertexType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(VertexType_t71392A05E3DA50E27A11BE2835347099D89930F6, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
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
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// TriangleNet.TriangleNetMesh
struct TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF  : public RuntimeObject
{
public:
	// TriangleNet.IPredicates TriangleNet.TriangleNetMesh::predicates
	RuntimeObject* ___predicates_0;
	// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.TriangleNetMesh::logger
	RuntimeObject* ___logger_1;
	// TriangleNet.Meshing.QualityMesher TriangleNet.TriangleNetMesh::qualityMesher
	QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * ___qualityMesher_2;
	// System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri> TriangleNet.TriangleNetMesh::flipstack
	Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * ___flipstack_3;
	// TriangleNet.TrianglePool TriangleNet.TriangleNetMesh::triangles
	TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * ___triangles_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment> TriangleNet.TriangleNetMesh::subsegs
	Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * ___subsegs_5;
	// System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex> TriangleNet.TriangleNetMesh::vertices
	Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * ___vertices_6;
	// System.Int32 TriangleNet.TriangleNetMesh::hash_vtx
	int32_t ___hash_vtx_7;
	// System.Int32 TriangleNet.TriangleNetMesh::hash_seg
	int32_t ___hash_seg_8;
	// System.Int32 TriangleNet.TriangleNetMesh::hash_tri
	int32_t ___hash_tri_9;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.Point> TriangleNet.TriangleNetMesh::holes
	List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE * ___holes_10;
	// System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer> TriangleNet.TriangleNetMesh::regions
	List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 * ___regions_11;
	// TriangleNet.Geometry.Rectangle TriangleNet.TriangleNetMesh::bounds
	Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 * ___bounds_12;
	// System.Int32 TriangleNet.TriangleNetMesh::invertices
	int32_t ___invertices_13;
	// System.Int32 TriangleNet.TriangleNetMesh::insegments
	int32_t ___insegments_14;
	// System.Int32 TriangleNet.TriangleNetMesh::undeads
	int32_t ___undeads_15;
	// System.Int32 TriangleNet.TriangleNetMesh::mesh_dim
	int32_t ___mesh_dim_16;
	// System.Int32 TriangleNet.TriangleNetMesh::nextras
	int32_t ___nextras_17;
	// System.Int32 TriangleNet.TriangleNetMesh::hullsize
	int32_t ___hullsize_18;
	// System.Int32 TriangleNet.TriangleNetMesh::steinerleft
	int32_t ___steinerleft_19;
	// System.Boolean TriangleNet.TriangleNetMesh::checksegments
	bool ___checksegments_20;
	// System.Boolean TriangleNet.TriangleNetMesh::checkquality
	bool ___checkquality_21;
	// TriangleNet.Geometry.Vertex TriangleNet.TriangleNetMesh::infvertex1
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___infvertex1_22;
	// TriangleNet.Geometry.Vertex TriangleNet.TriangleNetMesh::infvertex2
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___infvertex2_23;
	// TriangleNet.Geometry.Vertex TriangleNet.TriangleNetMesh::infvertex3
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___infvertex3_24;
	// TriangleNet.TriangleLocator TriangleNet.TriangleNetMesh::locator
	TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * ___locator_25;
	// TriangleNet.Behavior TriangleNet.TriangleNetMesh::behavior
	Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * ___behavior_26;
	// TriangleNet.NodeNumbering TriangleNet.TriangleNetMesh::numbering
	int32_t ___numbering_27;
	// TriangleNet.Topology.Triangle TriangleNet.TriangleNetMesh::dummytri
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___dummytri_29;
	// TriangleNet.Topology.SubSegment TriangleNet.TriangleNetMesh::dummysub
	SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___dummysub_30;

public:
	inline static int32_t get_offset_of_predicates_0() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___predicates_0)); }
	inline RuntimeObject* get_predicates_0() const { return ___predicates_0; }
	inline RuntimeObject** get_address_of_predicates_0() { return &___predicates_0; }
	inline void set_predicates_0(RuntimeObject* value)
	{
		___predicates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predicates_0), (void*)value);
	}

	inline static int32_t get_offset_of_logger_1() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___logger_1)); }
	inline RuntimeObject* get_logger_1() const { return ___logger_1; }
	inline RuntimeObject** get_address_of_logger_1() { return &___logger_1; }
	inline void set_logger_1(RuntimeObject* value)
	{
		___logger_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___logger_1), (void*)value);
	}

	inline static int32_t get_offset_of_qualityMesher_2() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___qualityMesher_2)); }
	inline QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * get_qualityMesher_2() const { return ___qualityMesher_2; }
	inline QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 ** get_address_of_qualityMesher_2() { return &___qualityMesher_2; }
	inline void set_qualityMesher_2(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * value)
	{
		___qualityMesher_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___qualityMesher_2), (void*)value);
	}

	inline static int32_t get_offset_of_flipstack_3() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___flipstack_3)); }
	inline Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * get_flipstack_3() const { return ___flipstack_3; }
	inline Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 ** get_address_of_flipstack_3() { return &___flipstack_3; }
	inline void set_flipstack_3(Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * value)
	{
		___flipstack_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___flipstack_3), (void*)value);
	}

	inline static int32_t get_offset_of_triangles_4() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___triangles_4)); }
	inline TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * get_triangles_4() const { return ___triangles_4; }
	inline TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 ** get_address_of_triangles_4() { return &___triangles_4; }
	inline void set_triangles_4(TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * value)
	{
		___triangles_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___triangles_4), (void*)value);
	}

	inline static int32_t get_offset_of_subsegs_5() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___subsegs_5)); }
	inline Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * get_subsegs_5() const { return ___subsegs_5; }
	inline Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 ** get_address_of_subsegs_5() { return &___subsegs_5; }
	inline void set_subsegs_5(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * value)
	{
		___subsegs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___subsegs_5), (void*)value);
	}

	inline static int32_t get_offset_of_vertices_6() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___vertices_6)); }
	inline Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * get_vertices_6() const { return ___vertices_6; }
	inline Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B ** get_address_of_vertices_6() { return &___vertices_6; }
	inline void set_vertices_6(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * value)
	{
		___vertices_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vertices_6), (void*)value);
	}

	inline static int32_t get_offset_of_hash_vtx_7() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___hash_vtx_7)); }
	inline int32_t get_hash_vtx_7() const { return ___hash_vtx_7; }
	inline int32_t* get_address_of_hash_vtx_7() { return &___hash_vtx_7; }
	inline void set_hash_vtx_7(int32_t value)
	{
		___hash_vtx_7 = value;
	}

	inline static int32_t get_offset_of_hash_seg_8() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___hash_seg_8)); }
	inline int32_t get_hash_seg_8() const { return ___hash_seg_8; }
	inline int32_t* get_address_of_hash_seg_8() { return &___hash_seg_8; }
	inline void set_hash_seg_8(int32_t value)
	{
		___hash_seg_8 = value;
	}

	inline static int32_t get_offset_of_hash_tri_9() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___hash_tri_9)); }
	inline int32_t get_hash_tri_9() const { return ___hash_tri_9; }
	inline int32_t* get_address_of_hash_tri_9() { return &___hash_tri_9; }
	inline void set_hash_tri_9(int32_t value)
	{
		___hash_tri_9 = value;
	}

	inline static int32_t get_offset_of_holes_10() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___holes_10)); }
	inline List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE * get_holes_10() const { return ___holes_10; }
	inline List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE ** get_address_of_holes_10() { return &___holes_10; }
	inline void set_holes_10(List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE * value)
	{
		___holes_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___holes_10), (void*)value);
	}

	inline static int32_t get_offset_of_regions_11() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___regions_11)); }
	inline List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 * get_regions_11() const { return ___regions_11; }
	inline List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 ** get_address_of_regions_11() { return &___regions_11; }
	inline void set_regions_11(List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 * value)
	{
		___regions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___regions_11), (void*)value);
	}

	inline static int32_t get_offset_of_bounds_12() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___bounds_12)); }
	inline Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 * get_bounds_12() const { return ___bounds_12; }
	inline Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 ** get_address_of_bounds_12() { return &___bounds_12; }
	inline void set_bounds_12(Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 * value)
	{
		___bounds_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bounds_12), (void*)value);
	}

	inline static int32_t get_offset_of_invertices_13() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___invertices_13)); }
	inline int32_t get_invertices_13() const { return ___invertices_13; }
	inline int32_t* get_address_of_invertices_13() { return &___invertices_13; }
	inline void set_invertices_13(int32_t value)
	{
		___invertices_13 = value;
	}

	inline static int32_t get_offset_of_insegments_14() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___insegments_14)); }
	inline int32_t get_insegments_14() const { return ___insegments_14; }
	inline int32_t* get_address_of_insegments_14() { return &___insegments_14; }
	inline void set_insegments_14(int32_t value)
	{
		___insegments_14 = value;
	}

	inline static int32_t get_offset_of_undeads_15() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___undeads_15)); }
	inline int32_t get_undeads_15() const { return ___undeads_15; }
	inline int32_t* get_address_of_undeads_15() { return &___undeads_15; }
	inline void set_undeads_15(int32_t value)
	{
		___undeads_15 = value;
	}

	inline static int32_t get_offset_of_mesh_dim_16() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___mesh_dim_16)); }
	inline int32_t get_mesh_dim_16() const { return ___mesh_dim_16; }
	inline int32_t* get_address_of_mesh_dim_16() { return &___mesh_dim_16; }
	inline void set_mesh_dim_16(int32_t value)
	{
		___mesh_dim_16 = value;
	}

	inline static int32_t get_offset_of_nextras_17() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___nextras_17)); }
	inline int32_t get_nextras_17() const { return ___nextras_17; }
	inline int32_t* get_address_of_nextras_17() { return &___nextras_17; }
	inline void set_nextras_17(int32_t value)
	{
		___nextras_17 = value;
	}

	inline static int32_t get_offset_of_hullsize_18() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___hullsize_18)); }
	inline int32_t get_hullsize_18() const { return ___hullsize_18; }
	inline int32_t* get_address_of_hullsize_18() { return &___hullsize_18; }
	inline void set_hullsize_18(int32_t value)
	{
		___hullsize_18 = value;
	}

	inline static int32_t get_offset_of_steinerleft_19() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___steinerleft_19)); }
	inline int32_t get_steinerleft_19() const { return ___steinerleft_19; }
	inline int32_t* get_address_of_steinerleft_19() { return &___steinerleft_19; }
	inline void set_steinerleft_19(int32_t value)
	{
		___steinerleft_19 = value;
	}

	inline static int32_t get_offset_of_checksegments_20() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___checksegments_20)); }
	inline bool get_checksegments_20() const { return ___checksegments_20; }
	inline bool* get_address_of_checksegments_20() { return &___checksegments_20; }
	inline void set_checksegments_20(bool value)
	{
		___checksegments_20 = value;
	}

	inline static int32_t get_offset_of_checkquality_21() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___checkquality_21)); }
	inline bool get_checkquality_21() const { return ___checkquality_21; }
	inline bool* get_address_of_checkquality_21() { return &___checkquality_21; }
	inline void set_checkquality_21(bool value)
	{
		___checkquality_21 = value;
	}

	inline static int32_t get_offset_of_infvertex1_22() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___infvertex1_22)); }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * get_infvertex1_22() const { return ___infvertex1_22; }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** get_address_of_infvertex1_22() { return &___infvertex1_22; }
	inline void set_infvertex1_22(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		___infvertex1_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infvertex1_22), (void*)value);
	}

	inline static int32_t get_offset_of_infvertex2_23() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___infvertex2_23)); }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * get_infvertex2_23() const { return ___infvertex2_23; }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** get_address_of_infvertex2_23() { return &___infvertex2_23; }
	inline void set_infvertex2_23(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		___infvertex2_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infvertex2_23), (void*)value);
	}

	inline static int32_t get_offset_of_infvertex3_24() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___infvertex3_24)); }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * get_infvertex3_24() const { return ___infvertex3_24; }
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** get_address_of_infvertex3_24() { return &___infvertex3_24; }
	inline void set_infvertex3_24(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		___infvertex3_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___infvertex3_24), (void*)value);
	}

	inline static int32_t get_offset_of_locator_25() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___locator_25)); }
	inline TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * get_locator_25() const { return ___locator_25; }
	inline TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F ** get_address_of_locator_25() { return &___locator_25; }
	inline void set_locator_25(TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * value)
	{
		___locator_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___locator_25), (void*)value);
	}

	inline static int32_t get_offset_of_behavior_26() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___behavior_26)); }
	inline Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * get_behavior_26() const { return ___behavior_26; }
	inline Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 ** get_address_of_behavior_26() { return &___behavior_26; }
	inline void set_behavior_26(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * value)
	{
		___behavior_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___behavior_26), (void*)value);
	}

	inline static int32_t get_offset_of_numbering_27() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___numbering_27)); }
	inline int32_t get_numbering_27() const { return ___numbering_27; }
	inline int32_t* get_address_of_numbering_27() { return &___numbering_27; }
	inline void set_numbering_27(int32_t value)
	{
		___numbering_27 = value;
	}

	inline static int32_t get_offset_of_dummytri_29() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___dummytri_29)); }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * get_dummytri_29() const { return ___dummytri_29; }
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** get_address_of_dummytri_29() { return &___dummytri_29; }
	inline void set_dummytri_29(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		___dummytri_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dummytri_29), (void*)value);
	}

	inline static int32_t get_offset_of_dummysub_30() { return static_cast<int32_t>(offsetof(TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF, ___dummysub_30)); }
	inline SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * get_dummysub_30() const { return ___dummysub_30; }
	inline SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE ** get_address_of_dummysub_30() { return &___dummysub_30; }
	inline void set_dummysub_30(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * value)
	{
		___dummysub_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dummysub_30), (void*)value);
	}
};


// TriangleNet.Geometry.Vertex
struct Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8  : public Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39
{
public:
	// System.Int32 TriangleNet.Geometry.Vertex::hash
	int32_t ___hash_4;
	// TriangleNet.VertexType TriangleNet.Geometry.Vertex::type
	int32_t ___type_5;
	// TriangleNet.Topology.Otri TriangleNet.Geometry.Vertex::tri
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___tri_6;

public:
	inline static int32_t get_offset_of_hash_4() { return static_cast<int32_t>(offsetof(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8, ___hash_4)); }
	inline int32_t get_hash_4() const { return ___hash_4; }
	inline int32_t* get_address_of_hash_4() { return &___hash_4; }
	inline void set_hash_4(int32_t value)
	{
		___hash_4 = value;
	}

	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_tri_6() { return static_cast<int32_t>(offsetof(Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8, ___tri_6)); }
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  get_tri_6() const { return ___tri_6; }
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * get_address_of_tri_6() { return &___tri_6; }
	inline void set_tri_6(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  value)
	{
		___tri_6 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___tri_6))->___tri_0), (void*)NULL);
	}
};


// System.Func`1<TriangleNet.IPredicates>
struct Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<TriangleNet.TrianglePool>
struct Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17  : public MulticastDelegate_t
{
public:

public:
};


// System.IndexOutOfRangeException
struct IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// TriangleNet.Geometry.Vertex[]
struct VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * m_Items[1];

public:
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TriangleNet.Topology.Osub[]
struct OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  m_Items[1];

public:
	inline Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___seg_0), (void*)NULL);
	}
	inline Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___seg_0), (void*)NULL);
	}
};
// TriangleNet.Topology.Otri[]
struct OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  m_Items[1];

public:
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tri_0), (void*)NULL);
	}
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___tri_0), (void*)NULL);
	}
};
// TriangleNet.Topology.Triangle[]
struct TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * m_Items[1];

public:
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TriangleNet.Topology.Triangle[][]
struct TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* m_Items[1];

public:
	inline TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_tBBFF5FCCEA64DACDC4DFAB67787E57F5B92377EF * Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// !0 System.Func`1<System.Object>::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mDABF9B31C700A5027502D4EF6D1603CB0E22E70F_gshared (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_gshared (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_gshared (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  Stack_1_Pop_mC0CB42657A1DEB5EED6F0A6076FBB982B733B4CC_gshared (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_gshared_inline (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  Stack_1_Peek_mD3C25F051AFADFD95370C2C3432E727728141ECC_gshared (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Void System.Array::Resize<System.Object>(!!0[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** ___array0, int32_t ___newSize1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::IndexOf(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.IndexOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523 (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * __this, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17 (String_t* ___format0, RuntimeObject * ___arg01, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.TriangleNetMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mA1B34113378C785B22C594F0C018143DDB0D620B (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Copy(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Org()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Dest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Otri::Apex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lprev()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lnext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Lnext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Sym(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Pivot(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___os0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Topology.Otri::IsDead(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_IsDead_mB0440EED40E6CC5210B85872D0C48C9EB75CB7B6 (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___tria0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleSampler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler_Update_m98412827463F298E67ABC8142F5215F714D1863F (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TriangleSampler::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_GetEnumerator_m22812615C04A78905FE0B84631712221FAECF557 (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Sym()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Sym_m6C2A3236460B31C82D4BB3815014236BCFB7D834 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, const RuntimeMethod* method);
// TriangleNet.LocateResult TriangleNet.TriangleLocator::PreciseLocate(TriangleNet.Geometry.Point,TriangleNet.Topology.Otri&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_PreciseLocate_m6ADB9BA600BECFC71FA31A0894B182E3C40A6865 (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * ___searchpoint0, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___searchtri1, bool ___stopatsubsegment2, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>::get_Values()
inline ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339 * Dictionary_2_get_Values_mAE30ABED984864B036F4B2B843214354093F5F2D (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339 * (*) (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B *, const RuntimeMethod*))Dictionary_2_get_Values_m868DAE374D8442BD5F1CD20B1A6AD5123898B604_gshared)(__this, method);
}
// System.Void TriangleNet.Topology.SubSegment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSegment__ctor_m85665E6615AAEC70A4323F10AE56B4B8DF902AB3 (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Triangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_m265A221606C6F3D725D12693BE1D693703668A41 (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Initialize_m6B711456BAA4681940447FA981B63110D653BA2E (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method);
// TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem> TriangleNet.Log::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Log_get_Instance_mCCF2C49ED7DD3B0CF391374CB6F75142C92A7A33 (const RuntimeMethod* method);
// System.Void TriangleNet.Behavior::.ctor(System.Boolean,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behavior__ctor_mE67534067E26236A634EE69CBD96C628890A396C (Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * __this, bool ___quality0, float ___minAngle1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>::.ctor()
inline void Dictionary_2__ctor_mFE1F8FC346067751DD43F607D50E77074C3F895B (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>::.ctor()
inline void Dictionary_2__ctor_m87410FF276D6163571AC471A3FD092374F09B4C3 (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Func`1<TriangleNet.TrianglePool> TriangleNet.Configuration::get_TrianglePool()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * Configuration_get_TrianglePool_m60FCEF10AD586D47177BC2A9E42B738FC6B242D1_inline (Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * __this, const RuntimeMethod* method);
// !0 System.Func`1<TriangleNet.TrianglePool>::Invoke()
inline TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * Func_1_Invoke_m81FCE857CF006D7FB413CA7175AEEB7CD77E105D (Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * __this, const RuntimeMethod* method)
{
	return ((  TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * (*) (Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::.ctor()
inline void Stack_1__ctor_mDABF9B31C700A5027502D4EF6D1603CB0E22E70F (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 *, const RuntimeMethod*))Stack_1__ctor_mDABF9B31C700A5027502D4EF6D1603CB0E22E70F_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.Point>::.ctor()
inline void List_1__ctor_mE4775C5B99ABA61560C85C51D8B318B894BE214C (List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<TriangleNet.Geometry.RegionPointer>::.ctor()
inline void List_1__ctor_mD438DA6033A5A23B30A450B677C3D75259BF4429 (List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Func`1<TriangleNet.IPredicates> TriangleNet.Configuration::get_Predicates()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * Configuration_get_Predicates_mF9ABF26217AC6995FA09F44C6D636F12436421AA_inline (Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * __this, const RuntimeMethod* method);
// !0 System.Func`1<TriangleNet.IPredicates>::Invoke()
inline RuntimeObject* Func_1_Invoke_m19FE6D911D2FF17FF9756DDE5DA30B4A4004B52D (Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A *, const RuntimeMethod*))Func_1_Invoke_m4DB932CB3E45300394D6087DBF4C3D620606F726_gshared)(__this, method);
}
// System.Void TriangleNet.TriangleLocator::.ctor(TriangleNet.TriangleNetMesh,TriangleNet.IPredicates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator__ctor_m36EC069EEE4FDD0424C2C9B8178F04ED17884FE9 (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, RuntimeObject* ___predicates1, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>::get_Count()
inline int32_t Dictionary_2_get_Count_mA3D1C0A6B47F2756754EFB196566FAE2F9AFE4D7 (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B *, const RuntimeMethod*))Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared)(__this, method);
}
// System.Boolean TriangleNet.Behavior::get_Poly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_Poly_m269DB3C34CE60C41F7CF46D1FD21386DCA0B3A7C (Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>::get_Count()
inline int32_t Dictionary_2_get_Count_mE619F9A02E8EECF1AAB4B47938B77980539B2D1B (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 *, const RuntimeMethod*))Dictionary_2_get_Count_m12374F2F6F3D2DE9CBF98D3BD63CBB0DA19C69C5_gshared)(__this, method);
}
// System.Void TriangleNet.TriangleNetMesh::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Reset_mAF21C8682D9A865E2D1C3DE6FF7E5CFBB38EEAA0 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Configuration::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Configuration__ctor_mF068F551667E26B32C0CCF31EDCCEE0B96E2A8A9 (Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::.ctor(TriangleNet.TriangleNetMesh,TriangleNet.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher__ctor_m9460D93C0AFCCF107D57A74A62E380EB0D1F56ED (QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * __this, TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * ___config1, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::Apply(TriangleNet.Meshing.QualityOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_Apply_mA76DDA9699F25780DFD068176F25F53B72D81A4D (QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * __this, QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A * ___quality0, bool ___delaunay1, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Rectangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle__ctor_m745B6C0B526093613538D8812229CF7556C21E17 (Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 * __this, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>::Add(!0,!1)
inline void Dictionary_2_Add_m6924032DE21DF7BF20445B5F77F87D3E1B39EB73 (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * __this, int32_t ___key0, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B *, int32_t, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void TriangleNet.Geometry.Rectangle::Expand(TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rectangle_Expand_mAECBADBE06E5D9AB6BE7166797C65CEDA6147B1D (Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 * __this, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * ___p0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_GetEnumerator_m2E063796AFE2F0496ACC97898EFE8AE7533D354F (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method);
// TriangleNet.Topology.Triangle TriangleNet.TrianglePool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * TrianglePool_Get_m4DD06D0CA6BA7D91D99E9B4F1B4992E91650AE73 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>::Add(!0,!1)
inline void Dictionary_2_Add_m160C5A2CB96E736A252CC75892BC75CE9E317AFC (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * __this, int32_t ___key0, SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 *, int32_t, SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// TriangleNet.LocateResult TriangleNet.TriangleLocator::Locate(TriangleNet.Geometry.Point,TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_Locate_m5BA48002B9FB57EFE6B6EB7D81E17D8D68442B34 (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * ___searchpoint0, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___searchtri1, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleLocator::Update(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator_Update_m5BE85AAD15465C2702D94635C2E8062C24FF1BDE (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___otri0, const RuntimeMethod* method);
// System.Int32 TriangleNet.Behavior::get_NoBisect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Behavior_get_NoBisect_mCC26A418B7734CBEB4160580CD804CE4B282D8DC (Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.Data.BadSubseg::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BadSubseg__ctor_m1DD1FE3E6388EFF58804F72C2A1BB472DC37CE04 (BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::Org()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Osub_Org_m475631496F60117D479533DA0DEE932B1564E88E (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::Dest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Osub_Dest_m99E32F038F7BFD7E53DBF3BAE6156AE7A053847C (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::AddBadSubseg(TriangleNet.Meshing.Data.BadSubseg)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_AddBadSubseg_m2F8BB6EBF337A3789385A1C03B6DD4D99C78F61B (QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * __this, BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * ___badseg0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::MakeTriangle(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_MakeTriangle_m10BCD309D127593B2174035BA668B117A38E083F (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___newotri0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SetOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___v0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SetDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___v0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SetApex(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___v0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Behavior::get_VarArea()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behavior_get_VarArea_mEB44A72CD3E7F8D4FEE4B84CD33058A2D3AF8C34 (Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SegDissolve(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___dummy0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::SegBond(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___os0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Bond(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetDest_m524A588AF208CE6512BF8EE2BCDBED4442239694 (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___vertex0, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::SegOrg()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Osub_SegOrg_mB5144DB2B28A149B5B27378FD2E98BA2669D1A27 (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Osub::SegDest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Osub_SegDest_mF3C363ECF7020FD74462C6E9D0A61ABD32932D40 (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Sym()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Sym_m15527263465FA17FD4F796A4CACC7EEB02AB7DC0 (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Pivot(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Pivot_m2923FE034310E613B749534CCCF141DDBFBB625C (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___os0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::InsertSubseg(TriangleNet.Topology.Otri&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_InsertSubseg_m73F0BF215A92D4785EFC682D1116AE90369ECDE5 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___tri0, int32_t ___subsegmark1, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetSegOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetSegOrg_m4AB5D70688B4BF79E79EBB97693F6E6DE216D26E (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___vertex0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetSegDest(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetSegDest_m5879B7B966454B00CF10BBC61EEFD6AED2242281 (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___vertex0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::Bond(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Bond_m15266C15DF4D17A6C3126E9538DAE53E4993380D (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___os0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Clear()
inline void Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9 (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 *, const RuntimeMethod*))Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Push(!0)
inline void Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 *, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE , const RuntimeMethod*))Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_gshared)(__this, ___item0, method);
}
// System.Int32 TriangleNet.Meshing.QualityMesher::CheckSeg4Encroach(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualityMesher_CheckSeg4Encroach_mD4EF2B2BB9F7B8CB658AA1FDB157A97883EAA555 (QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * __this, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___testsubseg0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Geometry.Point::op_Equality(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110 (Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * ___a0, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * ___b1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519 (int32_t ___a0, int32_t ___b1, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.QualityMesher::TestTriangle(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QualityMesher_TestTriangle_m156D106ABD726A99AC77724B69C840D5D791C6FC (QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___testtri0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::MakeSegment(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_MakeSegment_mFAE9001C54F330A2B07A1CB6E896E4DC8B50AFEC (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___newsubseg0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Osub::SetOrg(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_SetOrg_mBEB7BC3C89359CE6F09FFFCD67360F1E282F141E (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___vertex0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Onext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Onext_mD2F97F3A131C4CCEAA5B69B607B980142AB1F5F4 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Onext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Onext_m8EF7D2906A859E6AD144CC7F634EAA1E1B74BCFE (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Oprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Oprev_m0758576315B80AF6FD7D1DFDFE1117573B649BA5 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::TriangulatePolygon(TriangleNet.Topology.Otri,TriangleNet.Topology.Otri,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_TriangulatePolygon_mB81172F0AFB98BB37F08A8B467897089CF730B78 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___firstedge0, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___lastedge1, int32_t ___edgecount2, bool ___doflip3, bool ___triflaws4, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::Flip(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Flip_mC6BBF11FEDF5CB5629DF80B93F14232D3EBC7AFD (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___flipedge0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::VertexDealloc(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_VertexDealloc_mBC7983001090B58D5FF73F5537580E83B05527DB (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___dyingvertex0, const RuntimeMethod* method);
// System.Boolean TriangleNet.Topology.Otri::Equals(TriangleNet.Topology.Otri)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Otri_Equals_m50BCA65E34345CEF53079CAF96BBFFC6862E64AA (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Dnext(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dnext_mDEA59F899E0D16E6CE41D55E6E98C0421DF2401A (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::TriangleDealloc(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___dyingtriangle0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Pop()
inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  Stack_1_Pop_mC0CB42657A1DEB5EED6F0A6076FBB982B733B4CC (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method)
{
	return ((  Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  (*) (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 *, const RuntimeMethod*))Stack_1_Pop_mC0CB42657A1DEB5EED6F0A6076FBB982B733B4CC_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::get_Count()
inline int32_t Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_inline (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 *, const RuntimeMethod*))Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_gshared_inline)(__this, method);
}
// System.Void TriangleNet.Topology.Otri::Dprev(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Dprev_m06E43F4F40024360C5DA1BA7C579EDAF36A92243 (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___ot0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<TriangleNet.Topology.Otri>::Peek()
inline Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  Stack_1_Peek_mD3C25F051AFADFD95370C2C3432E727728141ECC (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method)
{
	return ((  Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  (*) (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 *, const RuntimeMethod*))Stack_1_Peek_mD3C25F051AFADFD95370C2C3432E727728141ECC_gshared)(__this, method);
}
// System.Void TriangleNet.TriangleNetMesh::Unflip(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Unflip_m8D6CE694471E6025E97A8101C1C7C9050F7BFDE6 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___flipedge0, const RuntimeMethod* method);
// System.Void TriangleNet.Topology.Otri::Kill(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Otri_Kill_m7C8A56B68679BD804CFFB08317F34BD7940F5FBA (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___tri0, const RuntimeMethod* method);
// System.Void TriangleNet.TrianglePool::Release(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Release_m001908A11B998E42090E07F288791B3844FF9DF6 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___triangle0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Geometry.Vertex>::Remove(!0)
inline bool Dictionary_2_Remove_m66BD6051DF63A145C41F9D8C1A15C79D92516FB2 (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Void TriangleNet.Topology.Osub::Kill(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Osub_Kill_mF538D7A4909E7F272D5C0AEA99B6DB1659429B70 (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___sub0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,TriangleNet.Topology.SubSegment>::Remove(!0)
inline bool Dictionary_2_Remove_mDABD45B8ED6589E8E8F6BC8E12E4BA8702F00F84 (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 *, int32_t, const RuntimeMethod*))Dictionary_2_Remove_mAC77908EC28C242ACC8C3C4CDEA945E73B95CFA4_gshared)(__this, ___key0, method);
}
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::.ctor(System.Int32)
inline void Stack_1__ctor_m04685073CD474456B3EB0E4B588D6701F139B26D (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF *, int32_t, const RuntimeMethod*))Stack_1__ctor_mAE1FB95F74EC6E95E880BF1B3E7CC57000321DA4_gshared)(__this, ___capacity0, method);
}
// System.Int32 System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::get_Count()
inline int32_t Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_inline (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF *, const RuntimeMethod*))Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::Pop()
inline Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * Stack_1_Pop_mA2023738F668A9D1D3428B0D610593F1EC550CA7 (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * __this, const RuntimeMethod* method)
{
	return ((  Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * (*) (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Void TriangleNet.TrianglePool::Cleanup(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Cleanup_m468AAD77C0AFE1350E34CA2E8937E8305B016623 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___triangle0, const RuntimeMethod* method);
// System.Void System.Array::Resize<TriangleNet.Topology.Triangle[]>(!!0[]&,System.Int32)
inline void Array_Resize_TisTriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_m0DF6405FF2051446D2F841015C63AF703B2874D7 (TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_m6F70613DBB973872E27DFD9A42F7653C55337A64_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::Push(!0)
inline void Stack_1_Push_mC0014A9790A831F368DC1C7EA79744EFF1B722C5 (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF *, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Void TriangleNet.TrianglePool/<Sample>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9__ctor_m3E04BBED9F37F681FFDEB83B2F8E994B072068CF (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<TriangleNet.Topology.Triangle>::Clear()
inline void Stack_1_Clear_m95E54568877C801655BAE2FF81747F08AC66B130 (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF *, const RuntimeMethod*))Stack_1_Clear_m108C5704F0CF0E476FED5C71BF7A4AA5804F3A61_gshared)(__this, method);
}
// System.Void TriangleNet.TrianglePool/Enumerator::.ctor(TriangleNet.TrianglePool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mACAD0608F558ED14DB4D88B90C019482AF9E6647 (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * __this, TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * ___pool0, const RuntimeMethod* method);
// System.Void System.Random::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4 (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * __this, int32_t ___Seed0, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.TriangleNetMesh,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mC6312DB8530B26A394501C61E7E6B21597D5C4B6 (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method);
// System.Int32 TriangleNet.TrianglePool::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrianglePool_get_Count_mB38723CAAF548A3A7A9BF5E1A95F1D406C5EFBD5 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::Sample(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_Sample_m312E1ADC86671C6B6FF23561182B9BE4E9F8E74B (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, int32_t ___k0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method);
// System.Void TriangleNet.TriangleNetMesh::Refine(TriangleNet.Meshing.QualityOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Refine_m7B4F05C4DD29CFE09A2207498C4AD1CA3DF6EC29 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A * ___quality0, bool ___delaunay1, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Collections.Generic.ICollection`1<TriangleNet.Geometry.Vertex> TriangleNet.TriangleNetMesh::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleNetMesh_get_Vertices_m722184BC80DEA4EA75466C8D38DBDFBCD4DDC515 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> System.Linq.Enumerable::ToList<TriangleNet.Geometry.Vertex>(System.Collections.Generic.IEnumerable`1<!!0>)
inline List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * Enumerable_ToList_TisVertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8_m340EBC8BD529AE566FDD1CDA053B4BDDD6C54D38 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_mA4E485F973C6DF746B8DB54CA6F54192D4231CA2_gshared)(___source0, method);
}
// System.Collections.Generic.ICollection`1<TriangleNet.Topology.Triangle> TriangleNet.TriangleNetMesh::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleNetMesh_get_Triangles_m5C5067131FE736A5E8F3BE3675245089FF16F4D6 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::get_Count()
inline int32_t List_1_get_Count_m7E49788FAD3DCE41BA9A799BC09A9579E3778121_inline (List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::get_Item(System.Int32)
inline Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * List_1_get_Item_m1CC67123C61DF000870289CE37BE47F77C4B4355_inline (List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * (*) (List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// UnityEngine.Vector3 TriangleNet.Geometry.Vertex::op_Explicit(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vertex_op_Explicit_m30070DE0805F300B5083CF13AFE9978F29DC5B2A (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___p0, const RuntimeMethod* method);
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Triangle::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Triangle_GetVertex_mB78D128F58112AA47F729E7BE46A46305B0C6BBA (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<TriangleNet.Geometry.Vertex>::IndexOf(!0)
inline int32_t List_1_IndexOf_m8193C102AF5CE3B61691A045CDFCE90575A00265 (List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___item0, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 *, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *, const RuntimeMethod*))List_1_IndexOf_m4474628ACB239463EEF6742E298897E550641533_gshared)(__this, ___item0, method);
}
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737 (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Mesh::RecalculateNormals()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mFBFD09800EC434C90DC4745AFB0315C03010EE20 (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * __this, float ___x0, float ___y1, int32_t ___mark2, const RuntimeMethod* method);
// System.Void TriangleNet.Geometry.Point::.ctor(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Point__ctor_m41CDDB2ECFEA90308A5601F119735E187EA6DDAA (Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * __this, float ___x0, float ___y1, int32_t ___label2, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::.ctor(TriangleNet.Geometry.Vertex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter__ctor_mB3E082AA844B8F0D3A39E46DB6794150ADB42CCD (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ___points0, int32_t ___seed1, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::QuickSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_QuickSort_mC275D3DCF8FF386D9E352DA4A21A34A12943685B (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::AlternateAxes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_AlternateAxes_m6C6CC82E296BD0DA6A0BFA34A81FECA1D238E900 (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, int32_t ___axis2, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianX(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianX_m58A24FE379AF8CFC8679BB7FCCF4C02E5D86A2B6 (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method);
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianY(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianY_m95E7DCE7947D24BAA19176542D2A43EF627045C8 (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method);
// System.Void TriangleNet.Configuration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7292CB66E95F9DDF463E3976D1400043C1977A4 (U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * __this, const RuntimeMethod* method);
// TriangleNet.RobustPredicates TriangleNet.RobustPredicates::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059 * RobustPredicates_get_Default_m1E7FEB30F8AD3E8FC400834DE16301B6CE0F5A6A (const RuntimeMethod* method);
// System.Void TriangleNet.TrianglePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool__ctor_m5BADC5937E370D3421BC1C10B8CC5F9C993D2714 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method);
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE8479B695636214C9EEFB484C4B9B20FEB51CB1 (U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB * __this, const RuntimeMethod* method);
// System.Int32 System.Environment::get_CurrentManagedThreadId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D (const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool/<Sample>d__9::System.Collections.Generic.IEnumerable<TriangleNet.Topology.Triangle>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__9_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m861BECD84FBF0F9E915682C2105964D213C7DC73 (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Int32 TriangleNet.Geometry.Segment::get_Label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Segment_get_Label_m5781D6ECF5F933921063D2A589A814F895256930 (Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return label; }
		int32_t L_0 = __this->get_label_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return label; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void TriangleNet.Geometry.Segment::.ctor(TriangleNet.Geometry.Vertex,TriangleNet.Geometry.Vertex,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Segment__ctor_mA5210B720D726D62E835BA8B4E12040456AC41A5 (Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2 * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___v00, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___v11, int32_t ___label2, const RuntimeMethod* method)
{
	{
		// public Segment(Vertex v0, Vertex v1, int label)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.v0 = v0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_0 = ___v00;
		__this->set_v0_0(L_0);
		// this.v1 = v1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1 = ___v11;
		__this->set_v1_1(L_1);
		// this.label = label;
		int32_t L_2 = ___label2;
		__this->set_label_2(L_2);
		// }
		return;
	}
}
// TriangleNet.Geometry.Vertex TriangleNet.Geometry.Segment::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Segment_GetVertex_mB4E8DB6C1F7D016E62567FBE47D5C7F31BB5E17D (Segment_t0787E3A412E5A5C82740833A568F6DBAB5F2FFB2 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	bool V_0 = false;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_1 = NULL;
	bool V_2 = false;
	{
		// if (index == 0)
		int32_t L_0 = ___index0;
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// return v0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_2 = __this->get_v0_0();
		V_1 = L_2;
		goto IL_002b;
	}

IL_0013:
	{
		// if (index == 1)
		int32_t L_3 = ___index0;
		V_2 = (bool)((((int32_t)L_3) == ((int32_t)1))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// return v1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_5 = __this->get_v1_1();
		V_1 = L_5;
		goto IL_002b;
	}

IL_0025:
	{
		// throw new IndexOutOfRangeException();
		IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD * L_6 = (IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IndexOutOfRangeException_tDC9EF7A0346CE39E54DA1083F07BE6DFC3CE2EDD_il2cpp_TypeInfo_var)));
		IndexOutOfRangeException__ctor_m84F1D8D46E48427F4DFAC350A5F1E0D345C68523(L_6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Segment_GetVertex_mB4E8DB6C1F7D016E62567FBE47D5C7F31BB5E17D_RuntimeMethod_var)));
	}

IL_002b:
	{
		// }
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_7 = V_1;
		return L_7;
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
// System.Void TriangleNet.Tools.Statistic::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Statistic__cctor_m2BD4ECA39B621E50AFD255CB0A25CDBB16AE678D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static long InCircleCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_InCircleCount_0(((int64_t)((int64_t)0)));
		// public static long InCircleAdaptCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_InCircleAdaptCount_1(((int64_t)((int64_t)0)));
		// public static long CounterClockwiseCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CounterClockwiseCount_2(((int64_t)((int64_t)0)));
		// public static long CounterClockwiseAdaptCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CounterClockwiseAdaptCount_3(((int64_t)((int64_t)0)));
		// public static long Orient3dCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_Orient3dCount_4(((int64_t)((int64_t)0)));
		// public static long HyperbolaCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_HyperbolaCount_5(((int64_t)((int64_t)0)));
		// public static long CircumcenterCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CircumcenterCount_6(((int64_t)((int64_t)0)));
		// public static long CircleTopCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CircleTopCount_7(((int64_t)((int64_t)0)));
		// public static long RelocationCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_RelocationCount_8(((int64_t)((int64_t)0)));
		// static readonly int[] plus1Mod3 = { 1, 2, 0 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = L_0;
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)1);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)2);
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_plus1Mod3_9(L_2);
		// static readonly int[] minus1Mod3 = { 2, 0, 1 };
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3;
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = L_4;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)1);
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_minus1Mod3_10(L_5);
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
// System.Void TriangleNet.Topology.SubSegment::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubSegment__ctor_m85665E6615AAEC70A4323F10AE56B4B8DF902AB3 (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public SubSegment()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// vertices = new Vertex[4];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_0 = (VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0*)(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0*)SZArrayNew(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_vertices_2(L_0);
		// boundary = 0;
		__this->set_boundary_4(0);
		// subsegs = new Osub[2];
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_1 = (OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C*)(OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C*)SZArrayNew(OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_subsegs_1(L_1);
		// triangles = new Otri[2];
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_2 = (OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25*)(OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25*)SZArrayNew(OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_triangles_3(L_2);
		// }
		return;
	}
}
// System.Int32 TriangleNet.Topology.SubSegment::get_Label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubSegment_get_Label_m77CE25F3D984289A5CCB5469728D588A6BD830E0 (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// get { return this.boundary; }
		int32_t L_0 = __this->get_boundary_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.boundary; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.SubSegment::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * SubSegment_GetVertex_m5350204944A45317F5A9B7DF7FA4A9A061C53899 (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_0 = NULL;
	{
		// return this.vertices[index]; // TODO: Check range?
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_0 = __this->get_vertices_2();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_4 = V_0;
		return L_4;
	}
}
// System.Int32 TriangleNet.Topology.SubSegment::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SubSegment_GetHashCode_mF81C5A513E7CD88B2934AA2DC6ED06FE383FF681 (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return this.hash;
		int32_t L_0 = __this->get_hash_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String TriangleNet.Topology.SubSegment::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* SubSegment_ToString_m4153FC3C7FF8D2D9C5AF4D2D7C1E9EDC53D44D7B (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("SID {0}", hash);
		int32_t L_0 = __this->get_hash_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteral2F66A8A29A16B2D6A67CC31F3851754A957A045D, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
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
// System.Void TriangleNet.Topology.Triangle::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Triangle__ctor_m265A221606C6F3D725D12693BE1D693703668A41 (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public Triangle()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// vertices = new Vertex[3];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_0 = (VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0*)(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0*)SZArrayNew(VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_vertices_3(L_0);
		// subsegs = new Osub[3];
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_1 = (OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C*)(OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C*)SZArrayNew(OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_subsegs_4(L_1);
		// neighbors = new Otri[3];
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_2 = (OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25*)(OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25*)SZArrayNew(OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_neighbors_2(L_2);
		// }
		return;
	}
}
// TriangleNet.Geometry.Vertex TriangleNet.Topology.Triangle::GetVertex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * Triangle_GetVertex_mB78D128F58112AA47F729E7BE46A46305B0C6BBA (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_0 = NULL;
	{
		// return this.vertices[index]; // TODO: Check range?
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_0 = __this->get_vertices_3();
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		goto IL_000c;
	}

IL_000c:
	{
		// }
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_4 = V_0;
		return L_4;
	}
}
// System.Int32 TriangleNet.Topology.Triangle::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Triangle_GetHashCode_m7D5CBDA5CB66291125E4DF44B17313D4EF42B7E7 (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return this.hash;
		int32_t L_0 = __this->get_hash_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.String TriangleNet.Topology.Triangle::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Triangle_ToString_mF011C4F8367A64FA99B4F2978EDC8D2AA5940C28 (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// return String.Format("TID {0}", hash);
		int32_t L_0 = __this->get_hash_0();
		int32_t L_1 = L_0;
		RuntimeObject * L_2 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_1);
		String_t* L_3;
		L_3 = String_Format_mB3D38E5238C3164DB4D7D29339D9E225A4496D17(_stringLiteralF03EB1760FF64201D9E6B52DDDE64ED3F7125848, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		goto IL_0019;
	}

IL_0019:
	{
		// }
		String_t* L_4 = V_0;
		return L_4;
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
// System.Void TriangleNet.TriangleLocator::.ctor(TriangleNet.TriangleNetMesh,TriangleNet.IPredicates)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator__ctor_m36EC069EEE4FDD0424C2C9B8178F04ED17884FE9 (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, RuntimeObject* ___predicates1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public TriangleLocator(TriangleNetMesh triangleNetMesh, IPredicates predicates)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this._TriangleNetMesh = triangleNetMesh;
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_0 = ___triangleNetMesh0;
		__this->set__TriangleNetMesh_1(L_0);
		// this.predicates = predicates;
		RuntimeObject* L_1 = ___predicates1;
		__this->set_predicates_2(L_1);
		// sampler = new TriangleSampler(triangleNetMesh);
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_2 = ___triangleNetMesh0;
		TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * L_3 = (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 *)il2cpp_codegen_object_new(TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4_il2cpp_TypeInfo_var);
		TriangleSampler__ctor_mA1B34113378C785B22C594F0C018143DDB0D620B(L_3, L_2, /*hidden argument*/NULL);
		__this->set_sampler_0(L_3);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleLocator::Update(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleLocator_Update_m5BE85AAD15465C2702D94635C2E8062C24FF1BDE (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___otri0, const RuntimeMethod* method)
{
	{
		// otri.Copy(ref recenttri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_0 = ___otri0;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_1 = __this->get_address_of_recenttri_3();
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_0, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// TriangleNet.LocateResult TriangleNet.TriangleLocator::PreciseLocate(TriangleNet.Geometry.Point,TriangleNet.Topology.Otri&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_PreciseLocate_m6ADB9BA600BECFC71FA31A0894B182E3C40A6865 (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * ___searchpoint0, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___searchtri1, bool ___stopatsubsegment2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_2 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_3 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_4 = NULL;
	float V_5 = 0.0f;
	float V_6 = 0.0f;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B4_0 = 0;
	{
		// Otri backtracktri = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Osub checkedge = default(Osub);
		il2cpp_codegen_initobj((&V_1), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// forg = searchtri.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_0 = ___searchtri1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1;
		L_1 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		// fdest = searchtri.Dest();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_2 = ___searchtri1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_3;
		L_3 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		// fapex = searchtri.Apex();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_4 = ___searchtri1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_5;
		L_5 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_4, /*hidden argument*/NULL);
		V_4 = L_5;
		goto IL_0210;
	}

IL_002c:
	{
		// if ((fapex.x == searchpoint.x) && (fapex.y == searchpoint.y))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_6 = V_4;
		NullCheck(L_6);
		float L_7 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_6)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_8 = ___searchpoint0;
		NullCheck(L_8);
		float L_9 = L_8->get_x_2();
		if ((!(((float)L_7) == ((float)L_9))))
		{
			goto IL_004d;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_10 = V_4;
		NullCheck(L_10);
		float L_11 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_10)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_12 = ___searchpoint0;
		NullCheck(L_12);
		float L_13 = L_12->get_y_3();
		G_B4_0 = ((((float)L_11) == ((float)L_13))? 1 : 0);
		goto IL_004e;
	}

IL_004d:
	{
		G_B4_0 = 0;
	}

IL_004e:
	{
		V_8 = (bool)G_B4_0;
		bool L_14 = V_8;
		if (!L_14)
		{
			goto IL_0064;
		}
	}
	{
		// searchtri.Lprev();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_15 = ___searchtri1;
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_15, /*hidden argument*/NULL);
		// return LocateResult.OnVertex;
		V_9 = 2;
		goto IL_0218;
	}

IL_0064:
	{
		// destorient = predicates.CounterClockwise(forg, fapex, searchpoint);
		RuntimeObject* L_16 = __this->get_predicates_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_17 = V_2;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_18 = V_4;
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_19 = ___searchpoint0;
		NullCheck(L_16);
		float L_20;
		L_20 = InterfaceFuncInvoker3< float, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * >::Invoke(0 /* System.Single TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var, L_16, L_17, L_18, L_19);
		V_6 = L_20;
		// orgorient = predicates.CounterClockwise(fapex, fdest, searchpoint);
		RuntimeObject* L_21 = __this->get_predicates_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_22 = V_4;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_23 = V_3;
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_24 = ___searchpoint0;
		NullCheck(L_21);
		float L_25;
		L_25 = InterfaceFuncInvoker3< float, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * >::Invoke(0 /* System.Single TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var, L_21, L_22, L_23, L_24);
		V_5 = L_25;
		// if (destorient > 0.0)
		float L_26 = V_6;
		V_10 = (bool)((((double)((double)((double)L_26))) > ((double)(0.0)))? 1 : 0);
		bool L_27 = V_10;
		if (!L_27)
		{
			goto IL_0102;
		}
	}
	{
		// if (orgorient > 0.0)
		float L_28 = V_5;
		V_11 = (bool)((((double)((double)((double)L_28))) > ((double)(0.0)))? 1 : 0);
		bool L_29 = V_11;
		if (!L_29)
		{
			goto IL_00fa;
		}
	}
	{
		// moveleft = (fapex.x - searchpoint.x) * (fdest.x - forg.x) +
		//            (fapex.y - searchpoint.y) * (fdest.y - forg.y) > 0.0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_30 = V_4;
		NullCheck(L_30);
		float L_31 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_30)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_32 = ___searchpoint0;
		NullCheck(L_32);
		float L_33 = L_32->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_34 = V_3;
		NullCheck(L_34);
		float L_35 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_34)->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_36 = V_2;
		NullCheck(L_36);
		float L_37 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_36)->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_38 = V_4;
		NullCheck(L_38);
		float L_39 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_38)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_40 = ___searchpoint0;
		NullCheck(L_40);
		float L_41 = L_40->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_42 = V_3;
		NullCheck(L_42);
		float L_43 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_42)->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_44 = V_2;
		NullCheck(L_44);
		float L_45 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_44)->get_y_3();
		V_7 = (bool)((((double)((double)((double)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_31, (float)L_33)), (float)((float)il2cpp_codegen_subtract((float)L_35, (float)L_37)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_41)), (float)((float)il2cpp_codegen_subtract((float)L_43, (float)L_45))))))))) > ((double)(0.0)))? 1 : 0);
		goto IL_00ff;
	}

IL_00fa:
	{
		// moveleft = true;
		V_7 = (bool)1;
	}

IL_00ff:
	{
		goto IL_0170;
	}

IL_0102:
	{
		// if (orgorient > 0.0)
		float L_46 = V_5;
		V_12 = (bool)((((double)((double)((double)L_46))) > ((double)(0.0)))? 1 : 0);
		bool L_47 = V_12;
		if (!L_47)
		{
			goto IL_011e;
		}
	}
	{
		// moveleft = false;
		V_7 = (bool)0;
		goto IL_016f;
	}

IL_011e:
	{
		// if (destorient == 0.0)
		float L_48 = V_6;
		V_13 = (bool)((((double)((double)((double)L_48))) == ((double)(0.0)))? 1 : 0);
		bool L_49 = V_13;
		if (!L_49)
		{
			goto IL_0143;
		}
	}
	{
		// searchtri.Lprev();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_50 = ___searchtri1;
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_50, /*hidden argument*/NULL);
		// return LocateResult.OnEdge;
		V_9 = 1;
		goto IL_0218;
	}

IL_0143:
	{
		// if (orgorient == 0.0)
		float L_51 = V_5;
		V_14 = (bool)((((double)((double)((double)L_51))) == ((double)(0.0)))? 1 : 0);
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_0167;
		}
	}
	{
		// searchtri.Lnext();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_53 = ___searchtri1;
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_53, /*hidden argument*/NULL);
		// return LocateResult.OnEdge;
		V_9 = 1;
		goto IL_0218;
	}

IL_0167:
	{
		// return LocateResult.InTriangle;
		V_9 = 0;
		goto IL_0218;
	}

IL_016f:
	{
	}

IL_0170:
	{
		// if (moveleft)
		bool L_54 = V_7;
		V_15 = L_54;
		bool L_55 = V_15;
		if (!L_55)
		{
			goto IL_0188;
		}
	}
	{
		// searchtri.Lprev(ref backtracktri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_56 = ___searchtri1;
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_56, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// fdest = fapex;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_57 = V_4;
		V_3 = L_57;
		goto IL_0196;
	}

IL_0188:
	{
		// searchtri.Lnext(ref backtracktri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_58 = ___searchtri1;
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_58, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// forg = fapex;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_59 = V_4;
		V_2 = L_59;
	}

IL_0196:
	{
		// backtracktri.Sym(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_60 = ___searchtri1;
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_60, /*hidden argument*/NULL);
		// if (_TriangleNetMesh.checksegments && stopatsubsegment)
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_61 = __this->get__TriangleNetMesh_1();
		NullCheck(L_61);
		bool L_62 = L_61->get_checksegments_20();
		bool L_63 = ___stopatsubsegment2;
		V_16 = (bool)((int32_t)((int32_t)L_62&(int32_t)L_63));
		bool L_64 = V_16;
		if (!L_64)
		{
			goto IL_01e4;
		}
	}
	{
		// backtracktri.Pivot(ref checkedge);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), /*hidden argument*/NULL);
		// if (checkedge.seg.hash != TriangleNetMesh.DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_65 = V_1;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_66 = L_65.get_seg_0();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_hash_0();
		V_17 = (bool)((((int32_t)((((int32_t)L_67) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_17;
		if (!L_68)
		{
			goto IL_01e3;
		}
	}
	{
		// backtracktri.Copy(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_69 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_69, /*hidden argument*/NULL);
		// return LocateResult.Outside;
		V_9 = 3;
		goto IL_0218;
	}

IL_01e3:
	{
	}

IL_01e4:
	{
		// if (searchtri.tri.id == TriangleNetMesh.DUMMY)
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_70 = ___searchtri1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_71 = L_70->get_tri_0();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_id_1();
		V_18 = (bool)((((int32_t)L_72) == ((int32_t)(-1)))? 1 : 0);
		bool L_73 = V_18;
		if (!L_73)
		{
			goto IL_0207;
		}
	}
	{
		// backtracktri.Copy(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_74 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_74, /*hidden argument*/NULL);
		// return LocateResult.Outside;
		V_9 = 3;
		goto IL_0218;
	}

IL_0207:
	{
		// fapex = searchtri.Apex();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_75 = ___searchtri1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_76;
		L_76 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_75, /*hidden argument*/NULL);
		V_4 = L_76;
	}

IL_0210:
	{
		// while (true)
		V_19 = (bool)1;
		goto IL_002c;
	}

IL_0218:
	{
		// }
		int32_t L_77 = V_9;
		return L_77;
	}
}
// TriangleNet.LocateResult TriangleNet.TriangleLocator::Locate(TriangleNet.Geometry.Point,TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleLocator_Locate_m5BA48002B9FB57EFE6B6EB7D81E17D8D68442B34 (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * __this, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * ___searchpoint0, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___searchtri1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_1 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_2 = NULL;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	RuntimeObject* V_11 = NULL;
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	int32_t G_B5_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B31_0 = 0;
	int32_t G_B39_0 = 0;
	{
		// Otri sampletri = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// torg = searchtri.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_0 = ___searchtri1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1;
		L_1 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_0, /*hidden argument*/NULL);
		V_1 = L_1;
		// searchdist = (searchpoint.x - torg.x) * (searchpoint.x - torg.x) +
		//              (searchpoint.y - torg.y) * (searchpoint.y - torg.y);
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_2 = ___searchpoint0;
		NullCheck(L_2);
		float L_3 = L_2->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_4 = V_1;
		NullCheck(L_4);
		float L_5 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_4)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_6 = ___searchpoint0;
		NullCheck(L_6);
		float L_7 = L_6->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_8 = V_1;
		NullCheck(L_8);
		float L_9 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_8)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_10 = ___searchpoint0;
		NullCheck(L_10);
		float L_11 = L_10->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_12 = V_1;
		NullCheck(L_12);
		float L_13 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_12)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_14 = ___searchpoint0;
		NullCheck(L_14);
		float L_15 = L_14->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_16 = V_1;
		NullCheck(L_16);
		float L_17 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_16)->get_y_3();
		V_3 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_3, (float)L_5)), (float)((float)il2cpp_codegen_subtract((float)L_7, (float)L_9)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_11, (float)L_13)), (float)((float)il2cpp_codegen_subtract((float)L_15, (float)L_17))))));
		// if (recenttri.tri != null)
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_18 = __this->get_address_of_recenttri_3();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_19 = L_18->get_tri_0();
		V_6 = (bool)((!(((RuntimeObject*)(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)L_19) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_011c;
		}
	}
	{
		// if (!Otri.IsDead(recenttri.tri))
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_21 = __this->get_address_of_recenttri_3();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_22 = L_21->get_tri_0();
		IL2CPP_RUNTIME_CLASS_INIT(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Otri_IsDead_mB0440EED40E6CC5210B85872D0C48C9EB75CB7B6(L_22, /*hidden argument*/NULL);
		V_7 = (bool)((((int32_t)L_23) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_011b;
		}
	}
	{
		// torg = recenttri.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_25 = __this->get_address_of_recenttri_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_26;
		L_26 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_25, /*hidden argument*/NULL);
		V_1 = L_26;
		// if ((torg.x == searchpoint.x) && (torg.y == searchpoint.y))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_27 = V_1;
		NullCheck(L_27);
		float L_28 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_27)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_29 = ___searchpoint0;
		NullCheck(L_29);
		float L_30 = L_29->get_x_2();
		if ((!(((float)L_28) == ((float)L_30))))
		{
			goto IL_00a7;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_31 = V_1;
		NullCheck(L_31);
		float L_32 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_31)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_33 = ___searchpoint0;
		NullCheck(L_33);
		float L_34 = L_33->get_y_3();
		G_B5_0 = ((((float)L_32) == ((float)L_34))? 1 : 0);
		goto IL_00a8;
	}

IL_00a7:
	{
		G_B5_0 = 0;
	}

IL_00a8:
	{
		V_8 = (bool)G_B5_0;
		bool L_35 = V_8;
		if (!L_35)
		{
			goto IL_00c4;
		}
	}
	{
		// recenttri.Copy(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_36 = __this->get_address_of_recenttri_3();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_37 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_36, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_37, /*hidden argument*/NULL);
		// return LocateResult.OnVertex;
		V_9 = 2;
		goto IL_02e8;
	}

IL_00c4:
	{
		// dist = (searchpoint.x - torg.x) * (searchpoint.x - torg.x) +
		//        (searchpoint.y - torg.y) * (searchpoint.y - torg.y);
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_38 = ___searchpoint0;
		NullCheck(L_38);
		float L_39 = L_38->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_40 = V_1;
		NullCheck(L_40);
		float L_41 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_40)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_42 = ___searchpoint0;
		NullCheck(L_42);
		float L_43 = L_42->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_44 = V_1;
		NullCheck(L_44);
		float L_45 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_44)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_46 = ___searchpoint0;
		NullCheck(L_46);
		float L_47 = L_46->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_48 = V_1;
		NullCheck(L_48);
		float L_49 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_48)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_50 = ___searchpoint0;
		NullCheck(L_50);
		float L_51 = L_50->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_52 = V_1;
		NullCheck(L_52);
		float L_53 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_52)->get_y_3();
		V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_39, (float)L_41)), (float)((float)il2cpp_codegen_subtract((float)L_43, (float)L_45)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_47, (float)L_49)), (float)((float)il2cpp_codegen_subtract((float)L_51, (float)L_53))))));
		// if (dist < searchdist)
		float L_54 = V_4;
		float L_55 = V_3;
		V_10 = (bool)((((float)L_54) < ((float)L_55))? 1 : 0);
		bool L_56 = V_10;
		if (!L_56)
		{
			goto IL_011a;
		}
	}
	{
		// recenttri.Copy(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_57 = __this->get_address_of_recenttri_3();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_58 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_57, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_58, /*hidden argument*/NULL);
		// searchdist = dist;
		float L_59 = V_4;
		V_3 = L_59;
	}

IL_011a:
	{
	}

IL_011b:
	{
	}

IL_011c:
	{
		// sampler.Update();
		TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * L_60 = __this->get_sampler_0();
		NullCheck(L_60);
		TriangleSampler_Update_m98412827463F298E67ABC8142F5215F714D1863F(L_60, /*hidden argument*/NULL);
		// foreach (var t in sampler)
		TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * L_61 = __this->get_sampler_0();
		NullCheck(L_61);
		RuntimeObject* L_62;
		L_62 = TriangleSampler_GetEnumerator_m22812615C04A78905FE0B84631712221FAECF557(L_61, /*hidden argument*/NULL);
		V_11 = L_62;
	}

IL_0136:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01bf;
		}

IL_013b:
		{
			// foreach (var t in sampler)
			RuntimeObject* L_63 = V_11;
			NullCheck(L_63);
			Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_64;
			L_64 = InterfaceFuncInvoker0< Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var, L_63);
			V_12 = L_64;
			// sampletri.tri = t;
			Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_65 = V_12;
			(&V_0)->set_tri_0(L_65);
			// if (!Otri.IsDead(sampletri.tri))
			Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_66 = V_0;
			Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_67 = L_66.get_tri_0();
			IL2CPP_RUNTIME_CLASS_INIT(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_il2cpp_TypeInfo_var);
			bool L_68;
			L_68 = Otri_IsDead_mB0440EED40E6CC5210B85872D0C48C9EB75CB7B6(L_67, /*hidden argument*/NULL);
			V_13 = (bool)((((int32_t)L_68) == ((int32_t)0))? 1 : 0);
			bool L_69 = V_13;
			if (!L_69)
			{
				goto IL_01be;
			}
		}

IL_0162:
		{
			// torg = sampletri.Org();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_70;
			L_70 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
			V_1 = L_70;
			// dist = (searchpoint.x - torg.x) * (searchpoint.x - torg.x) +
			//        (searchpoint.y - torg.y) * (searchpoint.y - torg.y);
			Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_71 = ___searchpoint0;
			NullCheck(L_71);
			float L_72 = L_71->get_x_2();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_73 = V_1;
			NullCheck(L_73);
			float L_74 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_73)->get_x_2();
			Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_75 = ___searchpoint0;
			NullCheck(L_75);
			float L_76 = L_75->get_x_2();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_77 = V_1;
			NullCheck(L_77);
			float L_78 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_77)->get_x_2();
			Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_79 = ___searchpoint0;
			NullCheck(L_79);
			float L_80 = L_79->get_y_3();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_81 = V_1;
			NullCheck(L_81);
			float L_82 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_81)->get_y_3();
			Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_83 = ___searchpoint0;
			NullCheck(L_83);
			float L_84 = L_83->get_y_3();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_85 = V_1;
			NullCheck(L_85);
			float L_86 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_85)->get_y_3();
			V_4 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_72, (float)L_74)), (float)((float)il2cpp_codegen_subtract((float)L_76, (float)L_78)))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_80, (float)L_82)), (float)((float)il2cpp_codegen_subtract((float)L_84, (float)L_86))))));
			// if (dist < searchdist)
			float L_87 = V_4;
			float L_88 = V_3;
			V_14 = (bool)((((float)L_87) < ((float)L_88))? 1 : 0);
			bool L_89 = V_14;
			if (!L_89)
			{
				goto IL_01bd;
			}
		}

IL_01af:
		{
			// sampletri.Copy(ref searchtri);
			Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_90 = ___searchtri1;
			Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_90, /*hidden argument*/NULL);
			// searchdist = dist;
			float L_91 = V_4;
			V_3 = L_91;
		}

IL_01bd:
		{
		}

IL_01be:
		{
		}

IL_01bf:
		{
			// foreach (var t in sampler)
			RuntimeObject* L_92 = V_11;
			NullCheck(L_92);
			bool L_93;
			L_93 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_92);
			if (L_93)
			{
				goto IL_013b;
			}
		}

IL_01cb:
		{
			IL2CPP_LEAVE(0x1DA, FINALLY_01cd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_01cd;
	}

FINALLY_01cd:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_94 = V_11;
			if (!L_94)
			{
				goto IL_01d9;
			}
		}

IL_01d1:
		{
			RuntimeObject* L_95 = V_11;
			NullCheck(L_95);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_95);
		}

IL_01d9:
		{
			IL2CPP_END_FINALLY(461)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(461)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1DA, IL_01da)
	}

IL_01da:
	{
		// torg = searchtri.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_96 = ___searchtri1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_97;
		L_97 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_96, /*hidden argument*/NULL);
		V_1 = L_97;
		// tdest = searchtri.Dest();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_98 = ___searchtri1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_99;
		L_99 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_98, /*hidden argument*/NULL);
		V_2 = L_99;
		// if ((torg.x == searchpoint.x) && (torg.y == searchpoint.y))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_100 = V_1;
		NullCheck(L_100);
		float L_101 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_100)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_102 = ___searchpoint0;
		NullCheck(L_102);
		float L_103 = L_102->get_x_2();
		if ((!(((float)L_101) == ((float)L_103))))
		{
			goto IL_0206;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_104 = V_1;
		NullCheck(L_104);
		float L_105 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_104)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_106 = ___searchpoint0;
		NullCheck(L_106);
		float L_107 = L_106->get_y_3();
		G_B26_0 = ((((float)L_105) == ((float)L_107))? 1 : 0);
		goto IL_0207;
	}

IL_0206:
	{
		G_B26_0 = 0;
	}

IL_0207:
	{
		V_15 = (bool)G_B26_0;
		bool L_108 = V_15;
		if (!L_108)
		{
			goto IL_0216;
		}
	}
	{
		// return LocateResult.OnVertex;
		V_9 = 2;
		goto IL_02e8;
	}

IL_0216:
	{
		// if ((tdest.x == searchpoint.x) && (tdest.y == searchpoint.y))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_109 = V_2;
		NullCheck(L_109);
		float L_110 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_109)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_111 = ___searchpoint0;
		NullCheck(L_111);
		float L_112 = L_111->get_x_2();
		if ((!(((float)L_110) == ((float)L_112))))
		{
			goto IL_0234;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_113 = V_2;
		NullCheck(L_113);
		float L_114 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_113)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_115 = ___searchpoint0;
		NullCheck(L_115);
		float L_116 = L_115->get_y_3();
		G_B31_0 = ((((float)L_114) == ((float)L_116))? 1 : 0);
		goto IL_0235;
	}

IL_0234:
	{
		G_B31_0 = 0;
	}

IL_0235:
	{
		V_16 = (bool)G_B31_0;
		bool L_117 = V_16;
		if (!L_117)
		{
			goto IL_024b;
		}
	}
	{
		// searchtri.Lnext();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_118 = ___searchtri1;
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_118, /*hidden argument*/NULL);
		// return LocateResult.OnVertex;
		V_9 = 2;
		goto IL_02e8;
	}

IL_024b:
	{
		// ahead = predicates.CounterClockwise(torg, tdest, searchpoint);
		RuntimeObject* L_119 = __this->get_predicates_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_120 = V_1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_121 = V_2;
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_122 = ___searchpoint0;
		NullCheck(L_119);
		float L_123;
		L_123 = InterfaceFuncInvoker3< float, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * >::Invoke(0 /* System.Single TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var, L_119, L_120, L_121, L_122);
		V_5 = L_123;
		// if (ahead < 0.0)
		float L_124 = V_5;
		V_17 = (bool)((((double)((double)((double)L_124))) < ((double)(0.0)))? 1 : 0);
		bool L_125 = V_17;
		if (!L_125)
		{
			goto IL_027a;
		}
	}
	{
		// searchtri.Sym();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_126 = ___searchtri1;
		Otri_Sym_m6C2A3236460B31C82D4BB3815014236BCFB7D834((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_126, /*hidden argument*/NULL);
		goto IL_02db;
	}

IL_027a:
	{
		// else if (ahead == 0.0)
		float L_127 = V_5;
		V_18 = (bool)((((double)((double)((double)L_127))) == ((double)(0.0)))? 1 : 0);
		bool L_128 = V_18;
		if (!L_128)
		{
			goto IL_02db;
		}
	}
	{
		// if (((torg.x < searchpoint.x) == (searchpoint.x < tdest.x)) &&
		//     ((torg.y < searchpoint.y) == (searchpoint.y < tdest.y)))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_129 = V_1;
		NullCheck(L_129);
		float L_130 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_129)->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_131 = ___searchpoint0;
		NullCheck(L_131);
		float L_132 = L_131->get_x_2();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_133 = ___searchpoint0;
		NullCheck(L_133);
		float L_134 = L_133->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_135 = V_2;
		NullCheck(L_135);
		float L_136 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_135)->get_x_2();
		if ((!(((uint32_t)((((float)L_130) < ((float)L_132))? 1 : 0)) == ((uint32_t)((((float)L_134) < ((float)L_136))? 1 : 0)))))
		{
			goto IL_02cd;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_137 = V_1;
		NullCheck(L_137);
		float L_138 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_137)->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_139 = ___searchpoint0;
		NullCheck(L_139);
		float L_140 = L_139->get_y_3();
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_141 = ___searchpoint0;
		NullCheck(L_141);
		float L_142 = L_141->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_143 = V_2;
		NullCheck(L_143);
		float L_144 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_143)->get_y_3();
		G_B39_0 = ((((int32_t)((((float)L_138) < ((float)L_140))? 1 : 0)) == ((int32_t)((((float)L_142) < ((float)L_144))? 1 : 0)))? 1 : 0);
		goto IL_02ce;
	}

IL_02cd:
	{
		G_B39_0 = 0;
	}

IL_02ce:
	{
		V_19 = (bool)G_B39_0;
		bool L_145 = V_19;
		if (!L_145)
		{
			goto IL_02da;
		}
	}
	{
		// return LocateResult.OnEdge;
		V_9 = 1;
		goto IL_02e8;
	}

IL_02da:
	{
	}

IL_02db:
	{
		// return PreciseLocate(searchpoint, ref searchtri, false);
		Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * L_146 = ___searchpoint0;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_147 = ___searchtri1;
		int32_t L_148;
		L_148 = TriangleLocator_PreciseLocate_m6ADB9BA600BECFC71FA31A0894B182E3C40A6865(__this, L_146, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_147, (bool)0, /*hidden argument*/NULL);
		V_9 = L_148;
		goto IL_02e8;
	}

IL_02e8:
	{
		// }
		int32_t L_149 = V_9;
		return L_149;
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
// System.Collections.Generic.ICollection`1<TriangleNet.Geometry.Vertex> TriangleNet.TriangleNetMesh::get_Vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleNetMesh_get_Vertices_m722184BC80DEA4EA75466C8D38DBDFBCD4DDC515 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_mAE30ABED984864B036F4B2B843214354093F5F2D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// get { return this.vertices.Values; }
		Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * L_0 = __this->get_vertices_6();
		NullCheck(L_0);
		ValueCollection_t20B33BDC61DA4B5B122D750EA41D588E77887339 * L_1;
		L_1 = Dictionary_2_get_Values_mAE30ABED984864B036F4B2B843214354093F5F2D(L_0, /*hidden argument*/Dictionary_2_get_Values_mAE30ABED984864B036F4B2B843214354093F5F2D_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return this.vertices.Values; }
		RuntimeObject* L_2 = V_0;
		return L_2;
	}
}
// System.Collections.Generic.ICollection`1<TriangleNet.Topology.Triangle> TriangleNet.TriangleNetMesh::get_Triangles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleNetMesh_get_Triangles_m5C5067131FE736A5E8F3BE3675245089FF16F4D6 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return this.triangles; }
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_0 = __this->get_triangles_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return this.triangles; }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Void TriangleNet.TriangleNetMesh::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Initialize_m6B711456BAA4681940447FA981B63110D653BA2E (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// dummysub = new SubSegment();
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_0 = (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE *)il2cpp_codegen_object_new(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE_il2cpp_TypeInfo_var);
		SubSegment__ctor_m85665E6615AAEC70A4323F10AE56B4B8DF902AB3(L_0, /*hidden argument*/NULL);
		__this->set_dummysub_30(L_0);
		// dummysub.hash = DUMMY;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_1 = __this->get_dummysub_30();
		NullCheck(L_1);
		L_1->set_hash_0((-1));
		// dummysub.subsegs[0].seg = dummysub;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_2 = __this->get_dummysub_30();
		NullCheck(L_2);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_3 = L_2->get_subsegs_1();
		NullCheck(L_3);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_4 = __this->get_dummysub_30();
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_seg_0(L_4);
		// dummysub.subsegs[1].seg = dummysub;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_5 = __this->get_dummysub_30();
		NullCheck(L_5);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_6 = L_5->get_subsegs_1();
		NullCheck(L_6);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_7 = __this->get_dummysub_30();
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_seg_0(L_7);
		// dummytri = new Triangle();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_8 = (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)il2cpp_codegen_object_new(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412_il2cpp_TypeInfo_var);
		Triangle__ctor_m265A221606C6F3D725D12693BE1D693703668A41(L_8, /*hidden argument*/NULL);
		__this->set_dummytri_29(L_8);
		// dummytri.hash = dummytri.id = DUMMY;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_9 = __this->get_dummytri_29();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_10 = __this->get_dummytri_29();
		int32_t L_11 = (-1);
		V_0 = L_11;
		NullCheck(L_10);
		L_10->set_id_1(L_11);
		int32_t L_12 = V_0;
		NullCheck(L_9);
		L_9->set_hash_0(L_12);
		// dummytri.neighbors[0].tri = dummytri;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_13 = __this->get_dummytri_29();
		NullCheck(L_13);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_14 = L_13->get_neighbors_2();
		NullCheck(L_14);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_15 = __this->get_dummytri_29();
		((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_tri_0(L_15);
		// dummytri.neighbors[1].tri = dummytri;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_16 = __this->get_dummytri_29();
		NullCheck(L_16);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_17 = L_16->get_neighbors_2();
		NullCheck(L_17);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_18 = __this->get_dummytri_29();
		((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_tri_0(L_18);
		// dummytri.neighbors[2].tri = dummytri;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_19 = __this->get_dummytri_29();
		NullCheck(L_19);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_20 = L_19->get_neighbors_2();
		NullCheck(L_20);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_21 = __this->get_dummytri_29();
		((L_20)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_tri_0(L_21);
		// dummytri.subsegs[0].seg = dummysub;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_22 = __this->get_dummytri_29();
		NullCheck(L_22);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_23 = L_22->get_subsegs_4();
		NullCheck(L_23);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_24 = __this->get_dummysub_30();
		((L_23)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_seg_0(L_24);
		// dummytri.subsegs[1].seg = dummysub;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_25 = __this->get_dummytri_29();
		NullCheck(L_25);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_26 = L_25->get_subsegs_4();
		NullCheck(L_26);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_27 = __this->get_dummysub_30();
		((L_26)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_seg_0(L_27);
		// dummytri.subsegs[2].seg = dummysub;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_28 = __this->get_dummytri_29();
		NullCheck(L_28);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_29 = L_28->get_subsegs_4();
		NullCheck(L_29);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_30 = __this->get_dummysub_30();
		((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_seg_0(L_30);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::.ctor(TriangleNet.Configuration)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh__ctor_m630CCCC4786C3A777A057189C3405EFD59265585 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * ___config0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Behavior_t2779857273122045638AE8441EA00E4292C7F2C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m87410FF276D6163571AC471A3FD092374F09B4C3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_mFE1F8FC346067751DD43F607D50E77074C3F895B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m19FE6D911D2FF17FF9756DDE5DA30B4A4004B52D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_Invoke_m81FCE857CF006D7FB413CA7175AEEB7CD77E105D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD438DA6033A5A23B30A450B677C3D75259BF4429_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE4775C5B99ABA61560C85C51D8B318B894BE214C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Log_t3DF77E5CB24B18EDABF105EA029F53265CA76154_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_mDABF9B31C700A5027502D4EF6D1603CB0E22E70F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// internal int hash_vtx = 0;
		__this->set_hash_vtx_7(0);
		// internal int hash_seg = 0;
		__this->set_hash_seg_8(0);
		// internal int hash_tri = 0;
		__this->set_hash_tri_9(0);
		// public TriangleNetMesh(Configuration config)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// Initialize();
		TriangleNetMesh_Initialize_m6B711456BAA4681940447FA981B63110D653BA2E(__this, /*hidden argument*/NULL);
		// logger = Log.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(Log_t3DF77E5CB24B18EDABF105EA029F53265CA76154_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = Log_get_Instance_mCCF2C49ED7DD3B0CF391374CB6F75142C92A7A33(/*hidden argument*/NULL);
		__this->set_logger_1(L_0);
		// behavior = new Behavior();
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_1 = (Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 *)il2cpp_codegen_object_new(Behavior_t2779857273122045638AE8441EA00E4292C7F2C4_il2cpp_TypeInfo_var);
		Behavior__ctor_mE67534067E26236A634EE69CBD96C628890A396C(L_1, (bool)0, (20.0f), /*hidden argument*/NULL);
		__this->set_behavior_26(L_1);
		// vertices = new Dictionary<int, Vertex>();
		Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * L_2 = (Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B *)il2cpp_codegen_object_new(Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_mFE1F8FC346067751DD43F607D50E77074C3F895B(L_2, /*hidden argument*/Dictionary_2__ctor_mFE1F8FC346067751DD43F607D50E77074C3F895B_RuntimeMethod_var);
		__this->set_vertices_6(L_2);
		// subsegs = new Dictionary<int, SubSegment>();
		Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * L_3 = (Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 *)il2cpp_codegen_object_new(Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m87410FF276D6163571AC471A3FD092374F09B4C3(L_3, /*hidden argument*/Dictionary_2__ctor_m87410FF276D6163571AC471A3FD092374F09B4C3_RuntimeMethod_var);
		__this->set_subsegs_5(L_3);
		// triangles = config.TrianglePool();
		Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * L_4 = ___config0;
		NullCheck(L_4);
		Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * L_5;
		L_5 = Configuration_get_TrianglePool_m60FCEF10AD586D47177BC2A9E42B738FC6B242D1_inline(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_6;
		L_6 = Func_1_Invoke_m81FCE857CF006D7FB413CA7175AEEB7CD77E105D(L_5, /*hidden argument*/Func_1_Invoke_m81FCE857CF006D7FB413CA7175AEEB7CD77E105D_RuntimeMethod_var);
		__this->set_triangles_4(L_6);
		// flipstack = new Stack<Otri>();
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_7 = (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 *)il2cpp_codegen_object_new(Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660_il2cpp_TypeInfo_var);
		Stack_1__ctor_mDABF9B31C700A5027502D4EF6D1603CB0E22E70F(L_7, /*hidden argument*/Stack_1__ctor_mDABF9B31C700A5027502D4EF6D1603CB0E22E70F_RuntimeMethod_var);
		__this->set_flipstack_3(L_7);
		// holes = new List<Point>();
		List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE * L_8 = (List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE *)il2cpp_codegen_object_new(List_1_t25F59593DFC8F1686406A0115FF5023CA630A6CE_il2cpp_TypeInfo_var);
		List_1__ctor_mE4775C5B99ABA61560C85C51D8B318B894BE214C(L_8, /*hidden argument*/List_1__ctor_mE4775C5B99ABA61560C85C51D8B318B894BE214C_RuntimeMethod_var);
		__this->set_holes_10(L_8);
		// regions = new List<RegionPointer>();
		List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 * L_9 = (List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9 *)il2cpp_codegen_object_new(List_1_t36D2376223D2AE6D18A40DACAE961206F9F385A9_il2cpp_TypeInfo_var);
		List_1__ctor_mD438DA6033A5A23B30A450B677C3D75259BF4429(L_9, /*hidden argument*/List_1__ctor_mD438DA6033A5A23B30A450B677C3D75259BF4429_RuntimeMethod_var);
		__this->set_regions_11(L_9);
		// steinerleft = -1;
		__this->set_steinerleft_19((-1));
		// this.predicates = config.Predicates();
		Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * L_10 = ___config0;
		NullCheck(L_10);
		Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * L_11;
		L_11 = Configuration_get_Predicates_mF9ABF26217AC6995FA09F44C6D636F12436421AA_inline(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = Func_1_Invoke_m19FE6D911D2FF17FF9756DDE5DA30B4A4004B52D(L_11, /*hidden argument*/Func_1_Invoke_m19FE6D911D2FF17FF9756DDE5DA30B4A4004B52D_RuntimeMethod_var);
		__this->set_predicates_0(L_12);
		// this.locator = new TriangleLocator(this, predicates);
		RuntimeObject* L_13 = __this->get_predicates_0();
		TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * L_14 = (TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F *)il2cpp_codegen_object_new(TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F_il2cpp_TypeInfo_var);
		TriangleLocator__ctor_m36EC069EEE4FDD0424C2C9B8178F04ED17884FE9(L_14, __this, L_13, /*hidden argument*/NULL);
		__this->set_locator_25(L_14);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::Refine(TriangleNet.Meshing.QualityOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Refine_m7B4F05C4DD29CFE09A2207498C4AD1CA3DF6EC29 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A * ___quality0, bool ___delaunay1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mA3D1C0A6B47F2756754EFB196566FAE2F9AFE4D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Count_mE619F9A02E8EECF1AAB4B47938B77980539B2D1B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * G_B3_0 = NULL;
	TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * G_B4_1 = NULL;
	{
		// invertices = vertices.Count;
		Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * L_0 = __this->get_vertices_6();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Dictionary_2_get_Count_mA3D1C0A6B47F2756754EFB196566FAE2F9AFE4D7(L_0, /*hidden argument*/Dictionary_2_get_Count_mA3D1C0A6B47F2756754EFB196566FAE2F9AFE4D7_RuntimeMethod_var);
		__this->set_invertices_13(L_1);
		// if (behavior.Poly)
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_2 = __this->get_behavior_26();
		NullCheck(L_2);
		bool L_3;
		L_3 = Behavior_get_Poly_m269DB3C34CE60C41F7CF46D1FD21386DCA0B3A7C(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0049;
		}
	}
	{
		// insegments = behavior.useSegments ? subsegs.Count : hullsize;
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_5 = __this->get_behavior_26();
		NullCheck(L_5);
		bool L_6 = L_5->get_useSegments_14();
		G_B2_0 = __this;
		if (L_6)
		{
			G_B3_0 = __this;
			goto IL_0038;
		}
	}
	{
		int32_t L_7 = __this->get_hullsize_18();
		G_B4_0 = L_7;
		G_B4_1 = G_B2_0;
		goto IL_0043;
	}

IL_0038:
	{
		Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * L_8 = __this->get_subsegs_5();
		NullCheck(L_8);
		int32_t L_9;
		L_9 = Dictionary_2_get_Count_mE619F9A02E8EECF1AAB4B47938B77980539B2D1B(L_8, /*hidden argument*/Dictionary_2_get_Count_mE619F9A02E8EECF1AAB4B47938B77980539B2D1B_RuntimeMethod_var);
		G_B4_0 = L_9;
		G_B4_1 = G_B3_0;
	}

IL_0043:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_insegments_14(G_B4_0);
	}

IL_0049:
	{
		// Reset();
		TriangleNetMesh_Reset_mAF21C8682D9A865E2D1C3DE6FF7E5CFBB38EEAA0(__this, /*hidden argument*/NULL);
		// if (qualityMesher == null)
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_10 = __this->get_qualityMesher_2();
		V_1 = (bool)((((RuntimeObject*)(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 *)L_10) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_0070;
		}
	}
	{
		// qualityMesher = new QualityMesher(this, new Configuration());
		Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * L_12 = (Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 *)il2cpp_codegen_object_new(Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121_il2cpp_TypeInfo_var);
		Configuration__ctor_mF068F551667E26B32C0CCF31EDCCEE0B96E2A8A9(L_12, /*hidden argument*/NULL);
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_13 = (QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 *)il2cpp_codegen_object_new(QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92_il2cpp_TypeInfo_var);
		QualityMesher__ctor_m9460D93C0AFCCF107D57A74A62E380EB0D1F56ED(L_13, __this, L_12, /*hidden argument*/NULL);
		__this->set_qualityMesher_2(L_13);
	}

IL_0070:
	{
		// qualityMesher.Apply(quality, delaunay);
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_14 = __this->get_qualityMesher_2();
		QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A * L_15 = ___quality0;
		bool L_16 = ___delaunay1;
		NullCheck(L_14);
		QualityMesher_Apply_mA76DDA9699F25780DFD068176F25F53B72D81A4D(L_14, L_15, L_16, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::SetQualityMesher(TriangleNet.Meshing.QualityMesher)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_SetQualityMesher_m5C0E30DCCBEBD80CCD6A07BF3A2C0648E1D975F1 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * ___qmesher0, const RuntimeMethod* method)
{
	{
		// qualityMesher = qmesher;
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_0 = ___qmesher0;
		__this->set_qualityMesher_2(L_0);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Reset_mAF21C8682D9A865E2D1C3DE6FF7E5CFBB38EEAA0 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// numbering = NodeNumbering.None;
		__this->set_numbering_27(0);
		// undeads = 0;               // No eliminated input vertices yet.
		__this->set_undeads_15(0);
		// checksegments = false;     // There are no segments in the triangulation yet.
		__this->set_checksegments_20((bool)0);
		// checkquality = false;      // The quality triangulation stage has not begun.
		__this->set_checkquality_21((bool)0);
		// Statistic.InCircleCount = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var);
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_InCircleCount_0(((int64_t)((int64_t)0)));
		// Statistic.CounterClockwiseCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CounterClockwiseCount_2(((int64_t)((int64_t)0)));
		// Statistic.InCircleAdaptCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_InCircleAdaptCount_1(((int64_t)((int64_t)0)));
		// Statistic.CounterClockwiseAdaptCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CounterClockwiseAdaptCount_3(((int64_t)((int64_t)0)));
		// Statistic.Orient3dCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_Orient3dCount_4(((int64_t)((int64_t)0)));
		// Statistic.HyperbolaCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_HyperbolaCount_5(((int64_t)((int64_t)0)));
		// Statistic.CircleTopCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CircleTopCount_7(((int64_t)((int64_t)0)));
		// Statistic.CircumcenterCount = 0;
		((Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_StaticFields*)il2cpp_codegen_static_fields_for(Statistic_tAD1C0255B8B2B0D2DEF9AB3147DBE8EE32404849_il2cpp_TypeInfo_var))->set_CircumcenterCount_6(((int64_t)((int64_t)0)));
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::TransferNodes(System.Collections.Generic.IList`1<TriangleNet.Geometry.Vertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_TransferNodes_m6E970AA1BEA725EF16F1676A8FF77CC1F45F7F47 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, RuntimeObject* ___points0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6924032DE21DF7BF20445B5F77F87D3E1B39EB73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t2BFDB9BC7EF8593BA5C76E09D1E546AB80836AA5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_t4E20F2B8BF7762A292318FB266383A825CA0C5AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_tAFE3A527476AFC0C0C59E4603D8AE79E7FC0B18C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t65A046DEB5D4CA3905C1278497558884ACF25D7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_4 = NULL;
	bool V_5 = false;
	int32_t V_6 = 0;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// this.invertices = points.Count;
		RuntimeObject* L_0 = ___points0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriangleNet.Geometry.Vertex>::get_Count() */, ICollection_1_t2BFDB9BC7EF8593BA5C76E09D1E546AB80836AA5_il2cpp_TypeInfo_var, L_0);
		__this->set_invertices_13(L_1);
		// this.mesh_dim = 2;
		__this->set_mesh_dim_16(2);
		// this.bounds = new Rectangle();
		Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 * L_2 = (Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 *)il2cpp_codegen_object_new(Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707_il2cpp_TypeInfo_var);
		Rectangle__ctor_m745B6C0B526093613538D8812229CF7556C21E17(L_2, /*hidden argument*/NULL);
		__this->set_bounds_12(L_2);
		// if (this.invertices < 3)
		int32_t L_3 = __this->get_invertices_13();
		V_2 = (bool)((((int32_t)L_3) < ((int32_t)3))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_004e;
		}
	}
	{
		// logger.Error("Input must have at least three input vertices.", "Mesh.TransferNodes()");
		RuntimeObject* L_5 = __this->get_logger_1();
		NullCheck(L_5);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(0 /* System.Void TriangleNet.Logging.ILog`1<TriangleNet.Logging.LogItem>::Error(System.String,System.String) */, ((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ILog_1_tA7D752E61EA9D7A5C1CD3DE35132CFD919A13A06_il2cpp_TypeInfo_var)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral950A1778E213AC1D3E8C01967A940E21CDE3CFB0)), ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral545555946B54695BF600E149072998C05ECCF2FF)));
		// throw new Exception("Input must have at least three input vertices.");
		Exception_t * L_6 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_6, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral950A1778E213AC1D3E8C01967A940E21CDE3CFB0)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TriangleNetMesh_TransferNodes_m6E970AA1BEA725EF16F1676A8FF77CC1F45F7F47_RuntimeMethod_var)));
	}

IL_004e:
	{
		// var v = points[0];
		RuntimeObject* L_7 = ___points0;
		NullCheck(L_7);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_8;
		L_8 = InterfaceFuncInvoker1< Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TriangleNet.Geometry.Vertex>::get_Item(System.Int32) */, IList_1_t65A046DEB5D4CA3905C1278497558884ACF25D7E_il2cpp_TypeInfo_var, L_7, 0);
		V_0 = L_8;
		// bool userId = (v.id != points[1].id);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_9)->get_id_0();
		RuntimeObject* L_11 = ___points0;
		NullCheck(L_11);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_12;
		L_12 = InterfaceFuncInvoker1< Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *, int32_t >::Invoke(0 /* !0 System.Collections.Generic.IList`1<TriangleNet.Geometry.Vertex>::get_Item(System.Int32) */, IList_1_t65A046DEB5D4CA3905C1278497558884ACF25D7E_il2cpp_TypeInfo_var, L_11, 1);
		NullCheck(L_12);
		int32_t L_13 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_12)->get_id_0();
		V_1 = (bool)((((int32_t)((((int32_t)L_10) == ((int32_t)L_13))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// foreach (var p in points)
		RuntimeObject* L_14 = ___points0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TriangleNet.Geometry.Vertex>::GetEnumerator() */, IEnumerable_1_t4E20F2B8BF7762A292318FB266383A825CA0C5AF_il2cpp_TypeInfo_var, L_14);
		V_3 = L_15;
	}

IL_0076:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0104;
		}

IL_007b:
		{
			// foreach (var p in points)
			RuntimeObject* L_16 = V_3;
			NullCheck(L_16);
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_17;
			L_17 = InterfaceFuncInvoker0< Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Geometry.Vertex>::get_Current() */, IEnumerator_1_tAFE3A527476AFC0C0C59E4603D8AE79E7FC0B18C_il2cpp_TypeInfo_var, L_16);
			V_4 = L_17;
			// if (userId)
			bool L_18 = V_1;
			V_5 = L_18;
			bool L_19 = V_5;
			if (!L_19)
			{
				goto IL_00b7;
			}
		}

IL_008b:
		{
			// p.hash = p.id;
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_20 = V_4;
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_21 = V_4;
			NullCheck(L_21);
			int32_t L_22 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_21)->get_id_0();
			NullCheck(L_20);
			L_20->set_hash_4(L_22);
			// hash_vtx = Mathf.Max(p.hash + 1, hash_vtx);
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_23 = V_4;
			NullCheck(L_23);
			int32_t L_24 = L_23->get_hash_4();
			int32_t L_25 = __this->get_hash_vtx_7();
			int32_t L_26;
			L_26 = Mathf_Max_mAB2544BF70651EC36982F5F4EBD250AEE283335A(((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1)), L_25, /*hidden argument*/NULL);
			__this->set_hash_vtx_7(L_26);
			goto IL_00e0;
		}

IL_00b7:
		{
			// p.hash = p.id = hash_vtx++;
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_27 = V_4;
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_28 = V_4;
			int32_t L_29 = __this->get_hash_vtx_7();
			V_6 = L_29;
			int32_t L_30 = V_6;
			__this->set_hash_vtx_7(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
			int32_t L_31 = V_6;
			int32_t L_32 = L_31;
			V_6 = L_32;
			NullCheck(L_28);
			((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_28)->set_id_0(L_32);
			int32_t L_33 = V_6;
			NullCheck(L_27);
			L_27->set_hash_4(L_33);
		}

IL_00e0:
		{
			// this.vertices.Add(p.hash, p);
			Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * L_34 = __this->get_vertices_6();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_35 = V_4;
			NullCheck(L_35);
			int32_t L_36 = L_35->get_hash_4();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_37 = V_4;
			NullCheck(L_34);
			Dictionary_2_Add_m6924032DE21DF7BF20445B5F77F87D3E1B39EB73(L_34, L_36, L_37, /*hidden argument*/Dictionary_2_Add_m6924032DE21DF7BF20445B5F77F87D3E1B39EB73_RuntimeMethod_var);
			// this.bounds.Expand(p);
			Rectangle_tF85BE010C2D466AF9F10BB1606801F5AF109F707 * L_38 = __this->get_bounds_12();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_39 = V_4;
			NullCheck(L_38);
			Rectangle_Expand_mAECBADBE06E5D9AB6BE7166797C65CEDA6147B1D(L_38, L_39, /*hidden argument*/NULL);
		}

IL_0104:
		{
			// foreach (var p in points)
			RuntimeObject* L_40 = V_3;
			NullCheck(L_40);
			bool L_41;
			L_41 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_40);
			if (L_41)
			{
				goto IL_007b;
			}
		}

IL_010f:
		{
			IL2CPP_LEAVE(0x11C, FINALLY_0111);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0111;
	}

FINALLY_0111:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_42 = V_3;
			if (!L_42)
			{
				goto IL_011b;
			}
		}

IL_0114:
		{
			RuntimeObject* L_43 = V_3;
			NullCheck(L_43);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_43);
		}

IL_011b:
		{
			IL2CPP_END_FINALLY(273)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(273)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x11C, IL_011c)
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::MakeVertexMap()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_MakeVertexMap_m1156A513988CAACB2C8A1633128B9323A514F9E0 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * V_3 = NULL;
	bool V_4 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Otri tri = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// foreach (var t in this.triangles)
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_0 = __this->get_triangles_4();
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = TrianglePool_GetEnumerator_m2E063796AFE2F0496ACC97898EFE8AE7533D354F(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
	}

IL_0016:
	try
	{ // begin try (depth: 1)
		{
			goto IL_005f;
		}

IL_0018:
		{
			// foreach (var t in this.triangles)
			RuntimeObject* L_2 = V_2;
			NullCheck(L_2);
			Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_3;
			L_3 = InterfaceFuncInvoker0< Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var, L_2);
			V_3 = L_3;
			// tri.tri = t;
			Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_4 = V_3;
			(&V_0)->set_tri_0(L_4);
			// for (tri.orient = 0; tri.orient < 3; tri.orient++)
			(&V_0)->set_orient_1(0);
			goto IL_004f;
		}

IL_0032:
		{
			// triorg = tri.Org();
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_5;
			L_5 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
			V_1 = L_5;
			// triorg.tri = tri;
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_6 = V_1;
			Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_7 = V_0;
			NullCheck(L_6);
			L_6->set_tri_6(L_7);
			// for (tri.orient = 0; tri.orient < 3; tri.orient++)
			int32_t* L_8 = (&V_0)->get_address_of_orient_1();
			int32_t* L_9 = L_8;
			int32_t L_10 = *((int32_t*)L_9);
			*((int32_t*)L_9) = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
		}

IL_004f:
		{
			// for (tri.orient = 0; tri.orient < 3; tri.orient++)
			Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_11 = V_0;
			int32_t L_12 = L_11.get_orient_1();
			V_4 = (bool)((((int32_t)L_12) < ((int32_t)3))? 1 : 0);
			bool L_13 = V_4;
			if (L_13)
			{
				goto IL_0032;
			}
		}

IL_005e:
		{
		}

IL_005f:
		{
			// foreach (var t in this.triangles)
			RuntimeObject* L_14 = V_2;
			NullCheck(L_14);
			bool L_15;
			L_15 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_14);
			if (L_15)
			{
				goto IL_0018;
			}
		}

IL_0067:
		{
			IL2CPP_LEAVE(0x74, FINALLY_0069);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0069;
	}

FINALLY_0069:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_16 = V_2;
			if (!L_16)
			{
				goto IL_0073;
			}
		}

IL_006c:
		{
			RuntimeObject* L_17 = V_2;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_17);
		}

IL_0073:
		{
			IL2CPP_END_FINALLY(105)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(105)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x74, IL_0074)
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::MakeTriangle(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_MakeTriangle_m10BCD309D127593B2174035BA668B117A38E083F (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___newotri0, const RuntimeMethod* method)
{
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * V_0 = NULL;
	{
		// Triangle tri = triangles.Get();
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_0 = __this->get_triangles_4();
		NullCheck(L_0);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_1;
		L_1 = TrianglePool_Get_m4DD06D0CA6BA7D91D99E9B4F1B4992E91650AE73(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// tri.subsegs[0].seg = dummysub;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_2 = V_0;
		NullCheck(L_2);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_3 = L_2->get_subsegs_4();
		NullCheck(L_3);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_4 = __this->get_dummysub_30();
		((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_seg_0(L_4);
		// tri.subsegs[1].seg = dummysub;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_5 = V_0;
		NullCheck(L_5);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_6 = L_5->get_subsegs_4();
		NullCheck(L_6);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_7 = __this->get_dummysub_30();
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_seg_0(L_7);
		// tri.subsegs[2].seg = dummysub;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_8 = V_0;
		NullCheck(L_8);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_9 = L_8->get_subsegs_4();
		NullCheck(L_9);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_10 = __this->get_dummysub_30();
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_seg_0(L_10);
		// tri.neighbors[0].tri = dummytri;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_11 = V_0;
		NullCheck(L_11);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_12 = L_11->get_neighbors_2();
		NullCheck(L_12);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_13 = __this->get_dummytri_29();
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_tri_0(L_13);
		// tri.neighbors[1].tri = dummytri;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_14 = V_0;
		NullCheck(L_14);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_15 = L_14->get_neighbors_2();
		NullCheck(L_15);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_16 = __this->get_dummytri_29();
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_tri_0(L_16);
		// tri.neighbors[2].tri = dummytri;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_17 = V_0;
		NullCheck(L_17);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_18 = L_17->get_neighbors_2();
		NullCheck(L_18);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_19 = __this->get_dummytri_29();
		((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->set_tri_0(L_19);
		// newotri.tri = tri;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_20 = ___newotri0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_21 = V_0;
		L_20->set_tri_0(L_21);
		// newotri.orient = 0;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_22 = ___newotri0;
		L_22->set_orient_1(0);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::MakeSegment(TriangleNet.Topology.Osub&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_MakeSegment_mFAE9001C54F330A2B07A1CB6E896E4DC8B50AFEC (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___newsubseg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m160C5A2CB96E736A252CC75892BC75CE9E317AFC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var seg = new SubSegment();
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_0 = (SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE *)il2cpp_codegen_object_new(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE_il2cpp_TypeInfo_var);
		SubSegment__ctor_m85665E6615AAEC70A4323F10AE56B4B8DF902AB3(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		// seg.hash = this.hash_seg++;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_1 = V_0;
		int32_t L_2 = __this->get_hash_seg_8();
		V_1 = L_2;
		int32_t L_3 = V_1;
		__this->set_hash_seg_8(((int32_t)il2cpp_codegen_add((int32_t)L_3, (int32_t)1)));
		int32_t L_4 = V_1;
		NullCheck(L_1);
		L_1->set_hash_0(L_4);
		// seg.subsegs[0].seg = dummysub;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_5 = V_0;
		NullCheck(L_5);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_6 = L_5->get_subsegs_1();
		NullCheck(L_6);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_7 = __this->get_dummysub_30();
		((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_seg_0(L_7);
		// seg.subsegs[1].seg = dummysub;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_8 = V_0;
		NullCheck(L_8);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_9 = L_8->get_subsegs_1();
		NullCheck(L_9);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_10 = __this->get_dummysub_30();
		((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_seg_0(L_10);
		// seg.triangles[0].tri = dummytri;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_11 = V_0;
		NullCheck(L_11);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_12 = L_11->get_triangles_3();
		NullCheck(L_12);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_13 = __this->get_dummytri_29();
		((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->set_tri_0(L_13);
		// seg.triangles[1].tri = dummytri;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_14 = V_0;
		NullCheck(L_14);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_15 = L_14->get_triangles_3();
		NullCheck(L_15);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_16 = __this->get_dummytri_29();
		((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->set_tri_0(L_16);
		// newsubseg.seg = seg;
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_17 = ___newsubseg0;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_18 = V_0;
		L_17->set_seg_0(L_18);
		// newsubseg.orient = 0;
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_19 = ___newsubseg0;
		L_19->set_orient_1(0);
		// subsegs.Add(seg.hash, seg);
		Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * L_20 = __this->get_subsegs_5();
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_21 = V_0;
		NullCheck(L_21);
		int32_t L_22 = L_21->get_hash_0();
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_23 = V_0;
		NullCheck(L_20);
		Dictionary_2_Add_m160C5A2CB96E736A252CC75892BC75CE9E317AFC(L_20, L_22, L_23, /*hidden argument*/Dictionary_2_Add_m160C5A2CB96E736A252CC75892BC75CE9E317AFC_RuntimeMethod_var);
		// }
		return;
	}
}
// TriangleNet.InsertVertexResult TriangleNet.TriangleNetMesh::InsertVertex(TriangleNet.Geometry.Vertex,TriangleNet.Topology.Otri&,TriangleNet.Topology.Osub&,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TriangleNetMesh_InsertVertex_mF0D7DCBCBEAB97FFEC452F01DF077AA989C7DBDD (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___newvertex0, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___searchtri1, Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * ___splitseg2, bool ___segmentflaws3, bool ___triflaws4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_13;
	memset((&V_13), 0, sizeof(V_13));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_14;
	memset((&V_14), 0, sizeof(V_14));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_15;
	memset((&V_15), 0, sizeof(V_15));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_16;
	memset((&V_16), 0, sizeof(V_16));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_17;
	memset((&V_17), 0, sizeof(V_17));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_18;
	memset((&V_18), 0, sizeof(V_18));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_19;
	memset((&V_19), 0, sizeof(V_19));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_20;
	memset((&V_20), 0, sizeof(V_20));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_21;
	memset((&V_21), 0, sizeof(V_21));
	BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * V_22 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_23 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_24 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_25 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_26 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_27 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_28 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_29 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_30 = NULL;
	int32_t V_31 = 0;
	float V_32 = 0.0f;
	int32_t V_33 = 0;
	int32_t V_34 = 0;
	bool V_35 = false;
	bool V_36 = false;
	bool V_37 = false;
	bool V_38 = false;
	bool V_39 = false;
	bool V_40 = false;
	int32_t V_41 = 0;
	bool V_42 = false;
	bool V_43 = false;
	bool V_44 = false;
	bool V_45 = false;
	bool V_46 = false;
	bool V_47 = false;
	bool V_48 = false;
	bool V_49 = false;
	bool V_50 = false;
	bool V_51 = false;
	bool V_52 = false;
	bool V_53 = false;
	bool V_54 = false;
	bool V_55 = false;
	bool V_56 = false;
	bool V_57 = false;
	bool V_58 = false;
	bool V_59 = false;
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_60;
	memset((&V_60), 0, sizeof(V_60));
	bool V_61 = false;
	bool V_62 = false;
	bool V_63 = false;
	bool V_64 = false;
	bool V_65 = false;
	bool V_66 = false;
	bool V_67 = false;
	bool V_68 = false;
	bool V_69 = false;
	bool V_70 = false;
	bool V_71 = false;
	bool V_72 = false;
	bool V_73 = false;
	bool V_74 = false;
	bool V_75 = false;
	bool V_76 = false;
	bool V_77 = false;
	bool V_78 = false;
	bool V_79 = false;
	bool V_80 = false;
	bool V_81 = false;
	bool V_82 = false;
	bool V_83 = false;
	bool V_84 = false;
	bool V_85 = false;
	bool V_86 = false;
	bool V_87 = false;
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_88;
	memset((&V_88), 0, sizeof(V_88));
	bool V_89 = false;
	int32_t G_B11_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B83_0 = 0;
	int32_t G_B89_0 = 0;
	int32_t G_B95_0 = 0;
	int32_t G_B117_0 = 0;
	int32_t G_B132_0 = 0;
	{
		// Otri horiz = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri top = default(Otri);
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botleft = default(Otri), botright = default(Otri);
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botleft = default(Otri), botright = default(Otri);
		il2cpp_codegen_initobj((&V_3), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri topleft = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_4), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri topleft = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_5), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri newbotleft = default(Otri), newbotright = default(Otri);
		il2cpp_codegen_initobj((&V_6), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri newbotleft = default(Otri), newbotright = default(Otri);
		il2cpp_codegen_initobj((&V_7), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri newtopright = default(Otri);
		il2cpp_codegen_initobj((&V_8), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri);
		il2cpp_codegen_initobj((&V_9), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri);
		il2cpp_codegen_initobj((&V_10), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri toplcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_11), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri toplcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_12), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri testtri = default(Otri);
		il2cpp_codegen_initobj((&V_13), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_14), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_15), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub toplsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_16), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub toplsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_17), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub brokensubseg = default(Osub);
		il2cpp_codegen_initobj((&V_18), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub checksubseg = default(Osub);
		il2cpp_codegen_initobj((&V_19), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub rightsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_20), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub newsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_21), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// if (splitseg.seg == null)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_0 = ___splitseg2;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_1 = L_0->get_seg_0();
		V_38 = (bool)((((RuntimeObject*)(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE *)L_1) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_2 = V_38;
		if (!L_2)
		{
			goto IL_0125;
		}
	}
	{
		// if (searchtri.tri.id == DUMMY)
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_3 = ___searchtri1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_4 = L_3->get_tri_0();
		NullCheck(L_4);
		int32_t L_5 = L_4->get_id_1();
		V_39 = (bool)((((int32_t)L_5) == ((int32_t)(-1)))? 1 : 0);
		bool L_6 = V_39;
		if (!L_6)
		{
			goto IL_0106;
		}
	}
	{
		// horiz.tri = dummytri;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_7 = __this->get_dummytri_29();
		(&V_0)->set_tri_0(L_7);
		// horiz.orient = 0;
		(&V_0)->set_orient_1(0);
		// horiz.Sym();
		Otri_Sym_m6C2A3236460B31C82D4BB3815014236BCFB7D834((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// intersect = locator.Locate(newvertex, ref horiz);
		TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * L_8 = __this->get_locator_25();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_9 = ___newvertex0;
		NullCheck(L_8);
		int32_t L_10;
		L_10 = TriangleLocator_Locate_m5BA48002B9FB57EFE6B6EB7D81E17D8D68442B34(L_8, L_9, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_34 = L_10;
		goto IL_0122;
	}

IL_0106:
	{
		// searchtri.Copy(ref horiz);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_11 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_11, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// intersect = locator.PreciseLocate(newvertex, ref horiz, true);
		TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * L_12 = __this->get_locator_25();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_13 = ___newvertex0;
		NullCheck(L_12);
		int32_t L_14;
		L_14 = TriangleLocator_PreciseLocate_m6ADB9BA600BECFC71FA31A0894B182E3C40A6865(L_12, L_13, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (bool)1, /*hidden argument*/NULL);
		V_34 = L_14;
	}

IL_0122:
	{
		goto IL_0133;
	}

IL_0125:
	{
		// searchtri.Copy(ref horiz);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_15 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_15, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// intersect = LocateResult.OnEdge;
		V_34 = 1;
	}

IL_0133:
	{
		// if (intersect == LocateResult.OnVertex)
		int32_t L_16 = V_34;
		V_40 = (bool)((((int32_t)L_16) == ((int32_t)2))? 1 : 0);
		bool L_17 = V_40;
		if (!L_17)
		{
			goto IL_015e;
		}
	}
	{
		// horiz.Copy(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_18 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_18, /*hidden argument*/NULL);
		// locator.Update(ref horiz);
		TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * L_19 = __this->get_locator_25();
		NullCheck(L_19);
		TriangleLocator_Update_m5BE85AAD15465C2702D94635C2E8062C24FF1BDE(L_19, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// return InsertVertexResult.Duplicate;
		V_41 = 3;
		goto IL_0d28;
	}

IL_015e:
	{
		// if ((intersect == LocateResult.OnEdge) || (intersect == LocateResult.Outside))
		int32_t L_20 = V_34;
		if ((((int32_t)L_20) == ((int32_t)1)))
		{
			goto IL_016a;
		}
	}
	{
		int32_t L_21 = V_34;
		G_B11_0 = ((((int32_t)L_21) == ((int32_t)3))? 1 : 0);
		goto IL_016b;
	}

IL_016a:
	{
		G_B11_0 = 1;
	}

IL_016b:
	{
		V_42 = (bool)G_B11_0;
		bool L_22 = V_42;
		if (!L_22)
		{
			goto IL_05d4;
		}
	}
	{
		// if (checksegments && (splitseg.seg == null))
		bool L_23 = __this->get_checksegments_20();
		if (!L_23)
		{
			goto IL_0188;
		}
	}
	{
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_24 = ___splitseg2;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_25 = L_24->get_seg_0();
		G_B15_0 = ((((RuntimeObject*)(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE *)L_25) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		goto IL_0189;
	}

IL_0188:
	{
		G_B15_0 = 0;
	}

IL_0189:
	{
		V_43 = (bool)G_B15_0;
		bool L_26 = V_43;
		if (!L_26)
		{
			goto IL_0278;
		}
	}
	{
		// horiz.Pivot(ref brokensubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_18), /*hidden argument*/NULL);
		// if (brokensubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_27 = V_18;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_28 = L_27.get_seg_0();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_hash_0();
		V_44 = (bool)((((int32_t)((((int32_t)L_29) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_30 = V_44;
		if (!L_30)
		{
			goto IL_0277;
		}
	}
	{
		// if (segmentflaws)
		bool L_31 = ___segmentflaws3;
		V_45 = L_31;
		bool L_32 = V_45;
		if (!L_32)
		{
			goto IL_0258;
		}
	}
	{
		// enq = behavior.NoBisect != 2;
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_33 = __this->get_behavior_26();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Behavior_get_NoBisect_mCC26A418B7734CBEB4160580CD804CE4B282D8DC(L_33, /*hidden argument*/NULL);
		V_37 = (bool)((((int32_t)((((int32_t)L_34) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (enq && (behavior.NoBisect == 1))
		bool L_35 = V_37;
		if (!L_35)
		{
			goto IL_01ec;
		}
	}
	{
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_36 = __this->get_behavior_26();
		NullCheck(L_36);
		int32_t L_37;
		L_37 = Behavior_get_NoBisect_mCC26A418B7734CBEB4160580CD804CE4B282D8DC(L_36, /*hidden argument*/NULL);
		G_B21_0 = ((((int32_t)L_37) == ((int32_t)1))? 1 : 0);
		goto IL_01ed;
	}

IL_01ec:
	{
		G_B21_0 = 0;
	}

IL_01ed:
	{
		V_46 = (bool)G_B21_0;
		bool L_38 = V_46;
		if (!L_38)
		{
			goto IL_0213;
		}
	}
	{
		// horiz.Sym(ref testtri);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_13), /*hidden argument*/NULL);
		// enq = testtri.tri.id != DUMMY;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_39 = V_13;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_40 = L_39.get_tri_0();
		NullCheck(L_40);
		int32_t L_41 = L_40->get_id_1();
		V_37 = (bool)((((int32_t)((((int32_t)L_41) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0213:
	{
		// if (enq)
		bool L_42 = V_37;
		V_47 = L_42;
		bool L_43 = V_47;
		if (!L_43)
		{
			goto IL_0257;
		}
	}
	{
		// encroached = new BadSubseg();
		BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * L_44 = (BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B *)il2cpp_codegen_object_new(BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B_il2cpp_TypeInfo_var);
		BadSubseg__ctor_m1DD1FE3E6388EFF58804F72C2A1BB472DC37CE04(L_44, /*hidden argument*/NULL);
		V_22 = L_44;
		// encroached.subseg = brokensubseg;
		BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * L_45 = V_22;
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_46 = V_18;
		NullCheck(L_45);
		L_45->set_subseg_0(L_46);
		// encroached.org = brokensubseg.Org();
		BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * L_47 = V_22;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_48;
		L_48 = Osub_Org_m475631496F60117D479533DA0DEE932B1564E88E((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_47);
		L_47->set_org_1(L_48);
		// encroached.dest = brokensubseg.Dest();
		BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * L_49 = V_22;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_50;
		L_50 = Osub_Dest_m99E32F038F7BFD7E53DBF3BAE6156AE7A053847C((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_18), /*hidden argument*/NULL);
		NullCheck(L_49);
		L_49->set_dest_2(L_50);
		// qualityMesher.AddBadSubseg(encroached);
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_51 = __this->get_qualityMesher_2();
		BadSubseg_t47E4B143182A4796056C34ED0957F28F08E23E8B * L_52 = V_22;
		NullCheck(L_51);
		QualityMesher_AddBadSubseg_m2F8BB6EBF337A3789385A1C03B6DD4D99C78F61B(L_51, L_52, /*hidden argument*/NULL);
	}

IL_0257:
	{
	}

IL_0258:
	{
		// horiz.Copy(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_53 = ___searchtri1;
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_53, /*hidden argument*/NULL);
		// locator.Update(ref horiz);
		TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * L_54 = __this->get_locator_25();
		NullCheck(L_54);
		TriangleLocator_Update_m5BE85AAD15465C2702D94635C2E8062C24FF1BDE(L_54, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// return InsertVertexResult.Violating;
		V_41 = 2;
		goto IL_0d28;
	}

IL_0277:
	{
	}

IL_0278:
	{
		// horiz.Lprev(ref botright);
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// botright.Sym(ref botrcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_10), /*hidden argument*/NULL);
		// horiz.Sym(ref topright);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// mirrorflag = topright.tri.id != DUMMY;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_55 = V_5;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_56 = L_55.get_tri_0();
		NullCheck(L_56);
		int32_t L_57 = L_56->get_id_1();
		V_36 = (bool)((((int32_t)((((int32_t)L_57) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		// if (mirrorflag)
		bool L_58 = V_36;
		V_48 = L_58;
		bool L_59 = V_48;
		if (!L_59)
		{
			goto IL_02d1;
		}
	}
	{
		// topright.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// topright.Sym(ref toprcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_12), /*hidden argument*/NULL);
		// MakeTriangle(ref newtopright);
		TriangleNetMesh_MakeTriangle_m10BCD309D127593B2174035BA668B117A38E083F(__this, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), /*hidden argument*/NULL);
		goto IL_02e1;
	}

IL_02d1:
	{
		// hullsize++;
		int32_t L_60 = __this->get_hullsize_18();
		__this->set_hullsize_18(((int32_t)il2cpp_codegen_add((int32_t)L_60, (int32_t)1)));
	}

IL_02e1:
	{
		// MakeTriangle(ref newbotright);
		TriangleNetMesh_MakeTriangle_m10BCD309D127593B2174035BA668B117A38E083F(__this, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// rightvertex = horiz.Org();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_61;
		L_61 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_25 = L_61;
		// leftvertex = horiz.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_62;
		L_62 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_24 = L_62;
		// botvertex = horiz.Apex();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_63;
		L_63 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_26 = L_63;
		// newbotright.SetOrg(botvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_64 = V_26;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_64, /*hidden argument*/NULL);
		// newbotright.SetDest(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_65 = V_25;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_65, /*hidden argument*/NULL);
		// newbotright.SetApex(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_66 = ___newvertex0;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_66, /*hidden argument*/NULL);
		// horiz.SetOrg(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_67 = ___newvertex0;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_67, /*hidden argument*/NULL);
		// newbotright.tri.label = botright.tri.label;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_68 = V_7;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_69 = L_68.get_tri_0();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_70 = V_3;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_71 = L_70.get_tri_0();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_label_5();
		NullCheck(L_69);
		L_69->set_label_5(L_72);
		// if (behavior.VarArea)
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_73 = __this->get_behavior_26();
		NullCheck(L_73);
		bool L_74;
		L_74 = Behavior_get_VarArea_mEB44A72CD3E7F8D4FEE4B84CD33058A2D3AF8C34(L_73, /*hidden argument*/NULL);
		V_49 = L_74;
		bool L_75 = V_49;
		if (!L_75)
		{
			goto IL_036c;
		}
	}
	{
		// newbotright.tri.area = botright.tri.area;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_76 = V_7;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_77 = L_76.get_tri_0();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_78 = V_3;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_79 = L_78.get_tri_0();
		NullCheck(L_79);
		float L_80 = L_79->get_area_6();
		NullCheck(L_77);
		L_77->set_area_6(L_80);
	}

IL_036c:
	{
		// if (mirrorflag)
		bool L_81 = V_36;
		V_50 = L_81;
		bool L_82 = V_50;
		if (!L_82)
		{
			goto IL_03e8;
		}
	}
	{
		// topvertex = topright.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_83;
		L_83 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		V_27 = L_83;
		// newtopright.SetOrg(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_84 = V_25;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), L_84, /*hidden argument*/NULL);
		// newtopright.SetDest(topvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_85 = V_27;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), L_85, /*hidden argument*/NULL);
		// newtopright.SetApex(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_86 = ___newvertex0;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), L_86, /*hidden argument*/NULL);
		// topright.SetOrg(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_87 = ___newvertex0;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), L_87, /*hidden argument*/NULL);
		// newtopright.tri.label = topright.tri.label;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_88 = V_8;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_89 = L_88.get_tri_0();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_90 = V_5;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_91 = L_90.get_tri_0();
		NullCheck(L_91);
		int32_t L_92 = L_91->get_label_5();
		NullCheck(L_89);
		L_89->set_label_5(L_92);
		// if (behavior.VarArea)
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_93 = __this->get_behavior_26();
		NullCheck(L_93);
		bool L_94;
		L_94 = Behavior_get_VarArea_mEB44A72CD3E7F8D4FEE4B84CD33058A2D3AF8C34(L_93, /*hidden argument*/NULL);
		V_51 = L_94;
		bool L_95 = V_51;
		if (!L_95)
		{
			goto IL_03e7;
		}
	}
	{
		// newtopright.tri.area = topright.tri.area;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_96 = V_8;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_97 = L_96.get_tri_0();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_98 = V_5;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_99 = L_98.get_tri_0();
		NullCheck(L_99);
		float L_100 = L_99->get_area_6();
		NullCheck(L_97);
		L_97->set_area_6(L_100);
	}

IL_03e7:
	{
	}

IL_03e8:
	{
		// if (checksegments)
		bool L_101 = __this->get_checksegments_20();
		V_52 = L_101;
		bool L_102 = V_52;
		if (!L_102)
		{
			goto IL_047b;
		}
	}
	{
		// botright.Pivot(ref botrsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_15), /*hidden argument*/NULL);
		// if (botrsubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_103 = V_15;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_104 = L_103.get_seg_0();
		NullCheck(L_104);
		int32_t L_105 = L_104->get_hash_0();
		V_53 = (bool)((((int32_t)((((int32_t)L_105) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_106 = V_53;
		if (!L_106)
		{
			goto IL_0434;
		}
	}
	{
		// botright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_107 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), L_107, /*hidden argument*/NULL);
		// newbotright.SegBond(ref botrsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_15), /*hidden argument*/NULL);
	}

IL_0434:
	{
		// if (mirrorflag)
		bool L_108 = V_36;
		V_54 = L_108;
		bool L_109 = V_54;
		if (!L_109)
		{
			goto IL_047a;
		}
	}
	{
		// topright.Pivot(ref toprsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_17), /*hidden argument*/NULL);
		// if (toprsubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_110 = V_17;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_111 = L_110.get_seg_0();
		NullCheck(L_111);
		int32_t L_112 = L_111->get_hash_0();
		V_55 = (bool)((((int32_t)((((int32_t)L_112) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_113 = V_55;
		if (!L_113)
		{
			goto IL_0479;
		}
	}
	{
		// topright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_114 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), L_114, /*hidden argument*/NULL);
		// newtopright.SegBond(ref toprsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_17), /*hidden argument*/NULL);
	}

IL_0479:
	{
	}

IL_047a:
	{
	}

IL_047b:
	{
		// newbotright.Bond(ref botrcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_10), /*hidden argument*/NULL);
		// newbotright.Lprev();
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// newbotright.Bond(ref botright);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// newbotright.Lprev();
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// if (mirrorflag)
		bool L_115 = V_36;
		V_56 = L_115;
		bool L_116 = V_56;
		if (!L_116)
		{
			goto IL_04d7;
		}
	}
	{
		// newtopright.Bond(ref toprcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_12), /*hidden argument*/NULL);
		// newtopright.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), /*hidden argument*/NULL);
		// newtopright.Bond(ref topright);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// newtopright.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), /*hidden argument*/NULL);
		// newtopright.Bond(ref newbotright);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
	}

IL_04d7:
	{
		// if (splitseg.seg != null)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_117 = ___splitseg2;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_118 = L_117->get_seg_0();
		V_57 = (bool)((!(((RuntimeObject*)(SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE *)L_118) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_119 = V_57;
		if (!L_119)
		{
			goto IL_0589;
		}
	}
	{
		// splitseg.SetDest(newvertex);
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_120 = ___splitseg2;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_121 = ___newvertex0;
		Osub_SetDest_m524A588AF208CE6512BF8EE2BCDBED4442239694((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)L_120, L_121, /*hidden argument*/NULL);
		// segmentorg = splitseg.SegOrg();
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_122 = ___splitseg2;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_123;
		L_123 = Osub_SegOrg_mB5144DB2B28A149B5B27378FD2E98BA2669D1A27((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)L_122, /*hidden argument*/NULL);
		V_29 = L_123;
		// segmentdest = splitseg.SegDest();
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_124 = ___splitseg2;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_125;
		L_125 = Osub_SegDest_mF3C363ECF7020FD74462C6E9D0A61ABD32932D40((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)L_124, /*hidden argument*/NULL);
		V_30 = L_125;
		// splitseg.Sym();
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_126 = ___splitseg2;
		Osub_Sym_m15527263465FA17FD4F796A4CACC7EEB02AB7DC0((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)L_126, /*hidden argument*/NULL);
		// splitseg.Pivot(ref rightsubseg);
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_127 = ___splitseg2;
		Osub_Pivot_m2923FE034310E613B749534CCCF141DDBFBB625C((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)L_127, (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_20), /*hidden argument*/NULL);
		// InsertSubseg(ref newbotright, splitseg.seg.boundary);
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_128 = ___splitseg2;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_129 = L_128->get_seg_0();
		NullCheck(L_129);
		int32_t L_130 = L_129->get_boundary_4();
		TriangleNetMesh_InsertSubseg_m73F0BF215A92D4785EFC682D1116AE90369ECDE5(__this, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_130, /*hidden argument*/NULL);
		// newbotright.Pivot(ref newsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_21), /*hidden argument*/NULL);
		// newsubseg.SetSegOrg(segmentorg);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_131 = V_29;
		Osub_SetSegOrg_m4AB5D70688B4BF79E79EBB97693F6E6DE216D26E((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_21), L_131, /*hidden argument*/NULL);
		// newsubseg.SetSegDest(segmentdest);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_132 = V_30;
		Osub_SetSegDest_m5879B7B966454B00CF10BBC61EEFD6AED2242281((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_21), L_132, /*hidden argument*/NULL);
		// splitseg.Bond(ref newsubseg);
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_133 = ___splitseg2;
		Osub_Bond_m15266C15DF4D17A6C3126E9538DAE53E4993380D((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)L_133, (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_21), /*hidden argument*/NULL);
		// newsubseg.Sym();
		Osub_Sym_m15527263465FA17FD4F796A4CACC7EEB02AB7DC0((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_21), /*hidden argument*/NULL);
		// newsubseg.Bond(ref rightsubseg);
		Osub_Bond_m15266C15DF4D17A6C3126E9538DAE53E4993380D((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_21), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_20), /*hidden argument*/NULL);
		// splitseg.Sym();
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_134 = ___splitseg2;
		Osub_Sym_m15527263465FA17FD4F796A4CACC7EEB02AB7DC0((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)L_134, /*hidden argument*/NULL);
		// if (newvertex.label == 0)
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_135 = ___newvertex0;
		NullCheck(L_135);
		int32_t L_136 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_135)->get_label_1();
		V_58 = (bool)((((int32_t)L_136) == ((int32_t)0))? 1 : 0);
		bool L_137 = V_58;
		if (!L_137)
		{
			goto IL_0588;
		}
	}
	{
		// newvertex.label = splitseg.seg.boundary;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_138 = ___newvertex0;
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA * L_139 = ___splitseg2;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_140 = L_139->get_seg_0();
		NullCheck(L_140);
		int32_t L_141 = L_140->get_boundary_4();
		NullCheck(L_138);
		((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_138)->set_label_1(L_141);
	}

IL_0588:
	{
	}

IL_0589:
	{
		// if (checkquality)
		bool L_142 = __this->get_checkquality_21();
		V_59 = L_142;
		bool L_143 = V_59;
		if (!L_143)
		{
			goto IL_05c6;
		}
	}
	{
		// flipstack.Clear();
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_144 = __this->get_flipstack_3();
		NullCheck(L_144);
		Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9(L_144, /*hidden argument*/Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_RuntimeMethod_var);
		// flipstack.Push(default(Otri)); // Dummy flip (see UndoVertex)
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_145 = __this->get_flipstack_3();
		il2cpp_codegen_initobj((&V_60), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_146 = V_60;
		NullCheck(L_145);
		Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD(L_145, L_146, /*hidden argument*/Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_RuntimeMethod_var);
		// flipstack.Push(horiz);
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_147 = __this->get_flipstack_3();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_148 = V_0;
		NullCheck(L_147);
		Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD(L_147, L_148, /*hidden argument*/Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_RuntimeMethod_var);
	}

IL_05c6:
	{
		// horiz.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		goto IL_07d7;
	}

IL_05d4:
	{
		// horiz.Lnext(ref botleft);
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// horiz.Lprev(ref botright);
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// botleft.Sym(ref botlcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_9), /*hidden argument*/NULL);
		// botright.Sym(ref botrcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_10), /*hidden argument*/NULL);
		// MakeTriangle(ref newbotleft);
		TriangleNetMesh_MakeTriangle_m10BCD309D127593B2174035BA668B117A38E083F(__this, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// MakeTriangle(ref newbotright);
		TriangleNetMesh_MakeTriangle_m10BCD309D127593B2174035BA668B117A38E083F(__this, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// rightvertex = horiz.Org();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_149;
		L_149 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_25 = L_149;
		// leftvertex = horiz.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_150;
		L_150 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_24 = L_150;
		// botvertex = horiz.Apex();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_151;
		L_151 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_26 = L_151;
		// newbotleft.SetOrg(leftvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_152 = V_24;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), L_152, /*hidden argument*/NULL);
		// newbotleft.SetDest(botvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_153 = V_26;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), L_153, /*hidden argument*/NULL);
		// newbotleft.SetApex(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_154 = ___newvertex0;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), L_154, /*hidden argument*/NULL);
		// newbotright.SetOrg(botvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_155 = V_26;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_155, /*hidden argument*/NULL);
		// newbotright.SetDest(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_156 = V_25;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_156, /*hidden argument*/NULL);
		// newbotright.SetApex(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_157 = ___newvertex0;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_157, /*hidden argument*/NULL);
		// horiz.SetApex(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_158 = ___newvertex0;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_158, /*hidden argument*/NULL);
		// newbotleft.tri.label = horiz.tri.label;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_159 = V_6;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_160 = L_159.get_tri_0();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_161 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_162 = L_161.get_tri_0();
		NullCheck(L_162);
		int32_t L_163 = L_162->get_label_5();
		NullCheck(L_160);
		L_160->set_label_5(L_163);
		// newbotright.tri.label = horiz.tri.label;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_164 = V_7;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_165 = L_164.get_tri_0();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_166 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_167 = L_166.get_tri_0();
		NullCheck(L_167);
		int32_t L_168 = L_167->get_label_5();
		NullCheck(L_165);
		L_165->set_label_5(L_168);
		// if (behavior.VarArea)
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_169 = __this->get_behavior_26();
		NullCheck(L_169);
		bool L_170;
		L_170 = Behavior_get_VarArea_mEB44A72CD3E7F8D4FEE4B84CD33058A2D3AF8C34(L_169, /*hidden argument*/NULL);
		V_61 = L_170;
		bool L_171 = V_61;
		if (!L_171)
		{
			goto IL_06d7;
		}
	}
	{
		// area = horiz.tri.area;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_172 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_173 = L_172.get_tri_0();
		NullCheck(L_173);
		float L_174 = L_173->get_area_6();
		V_32 = L_174;
		// newbotleft.tri.area = area;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_175 = V_6;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_176 = L_175.get_tri_0();
		float L_177 = V_32;
		NullCheck(L_176);
		L_176->set_area_6(L_177);
		// newbotright.tri.area = area;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_178 = V_7;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_179 = L_178.get_tri_0();
		float L_180 = V_32;
		NullCheck(L_179);
		L_179->set_area_6(L_180);
	}

IL_06d7:
	{
		// if (checksegments)
		bool L_181 = __this->get_checksegments_20();
		V_62 = L_181;
		bool L_182 = V_62;
		if (!L_182)
		{
			goto IL_075d;
		}
	}
	{
		// botleft.Pivot(ref botlsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_14), /*hidden argument*/NULL);
		// if (botlsubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_183 = V_14;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_184 = L_183.get_seg_0();
		NullCheck(L_184);
		int32_t L_185 = L_184->get_hash_0();
		V_63 = (bool)((((int32_t)((((int32_t)L_185) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_186 = V_63;
		if (!L_186)
		{
			goto IL_0720;
		}
	}
	{
		// botleft.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_187 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), L_187, /*hidden argument*/NULL);
		// newbotleft.SegBond(ref botlsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_14), /*hidden argument*/NULL);
	}

IL_0720:
	{
		// botright.Pivot(ref botrsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_15), /*hidden argument*/NULL);
		// if (botrsubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_188 = V_15;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_189 = L_188.get_seg_0();
		NullCheck(L_189);
		int32_t L_190 = L_189->get_hash_0();
		V_64 = (bool)((((int32_t)((((int32_t)L_190) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_191 = V_64;
		if (!L_191)
		{
			goto IL_075c;
		}
	}
	{
		// botright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_192 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), L_192, /*hidden argument*/NULL);
		// newbotright.SegBond(ref botrsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_15), /*hidden argument*/NULL);
	}

IL_075c:
	{
	}

IL_075d:
	{
		// newbotleft.Bond(ref botlcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_9), /*hidden argument*/NULL);
		// newbotright.Bond(ref botrcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_10), /*hidden argument*/NULL);
		// newbotleft.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// newbotright.Lprev();
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// newbotleft.Bond(ref newbotright);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// newbotleft.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// botleft.Bond(ref newbotleft);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// newbotright.Lprev();
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// botright.Bond(ref newbotright);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// if (checkquality)
		bool L_193 = __this->get_checkquality_21();
		V_65 = L_193;
		bool L_194 = V_65;
		if (!L_194)
		{
			goto IL_07d6;
		}
	}
	{
		// flipstack.Clear();
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_195 = __this->get_flipstack_3();
		NullCheck(L_195);
		Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9(L_195, /*hidden argument*/Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_RuntimeMethod_var);
		// flipstack.Push(horiz);
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_196 = __this->get_flipstack_3();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_197 = V_0;
		NullCheck(L_196);
		Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD(L_196, L_197, /*hidden argument*/Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_RuntimeMethod_var);
	}

IL_07d6:
	{
	}

IL_07d7:
	{
		// success = InsertVertexResult.Successful;
		V_33 = 0;
		// if (newvertex.tri.tri != null)
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_198 = ___newvertex0;
		NullCheck(L_198);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_199 = L_198->get_address_of_tri_6();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_200 = L_199->get_tri_0();
		V_66 = (bool)((!(((RuntimeObject*)(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)L_200) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_201 = V_66;
		if (!L_201)
		{
			goto IL_081a;
		}
	}
	{
		// newvertex.tri.SetOrg(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_202 = ___newvertex0;
		NullCheck(L_202);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_203 = L_202->get_address_of_tri_6();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_204 = V_25;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_203, L_204, /*hidden argument*/NULL);
		// newvertex.tri.SetDest(leftvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_205 = ___newvertex0;
		NullCheck(L_205);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_206 = L_205->get_address_of_tri_6();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_207 = V_24;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_206, L_207, /*hidden argument*/NULL);
		// newvertex.tri.SetApex(botvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_208 = ___newvertex0;
		NullCheck(L_208);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_209 = L_208->get_address_of_tri_6();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_210 = V_26;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_209, L_210, /*hidden argument*/NULL);
	}

IL_081a:
	{
		// first = horiz.Org();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_211;
		L_211 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_23 = L_211;
		// rightvertex = first;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_212 = V_23;
		V_25 = L_212;
		// leftvertex = horiz.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_213;
		L_213 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_24 = L_213;
		goto IL_0d20;
	}

IL_0835:
	{
		// doflip = true;
		V_35 = (bool)1;
		// if (checksegments)
		bool L_214 = __this->get_checksegments_20();
		V_67 = L_214;
		bool L_215 = V_67;
		if (!L_215)
		{
			goto IL_0893;
		}
	}
	{
		// horiz.Pivot(ref checksubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_19), /*hidden argument*/NULL);
		// if (checksubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_216 = V_19;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_217 = L_216.get_seg_0();
		NullCheck(L_217);
		int32_t L_218 = L_217->get_hash_0();
		V_68 = (bool)((((int32_t)((((int32_t)L_218) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_219 = V_68;
		if (!L_219)
		{
			goto IL_0892;
		}
	}
	{
		// doflip = false;
		V_35 = (bool)0;
		// if (segmentflaws)
		bool L_220 = ___segmentflaws3;
		V_69 = L_220;
		bool L_221 = V_69;
		if (!L_221)
		{
			goto IL_0891;
		}
	}
	{
		// if (qualityMesher.CheckSeg4Encroach(ref checksubseg) > 0)
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_222 = __this->get_qualityMesher_2();
		NullCheck(L_222);
		int32_t L_223;
		L_223 = QualityMesher_CheckSeg4Encroach_mD4EF2B2BB9F7B8CB658AA1FDB157A97883EAA555(L_222, (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_19), /*hidden argument*/NULL);
		V_70 = (bool)((((int32_t)L_223) > ((int32_t)0))? 1 : 0);
		bool L_224 = V_70;
		if (!L_224)
		{
			goto IL_0890;
		}
	}
	{
		// success = InsertVertexResult.Encroaching;
		V_33 = 1;
	}

IL_0890:
	{
	}

IL_0891:
	{
	}

IL_0892:
	{
	}

IL_0893:
	{
		// if (doflip)
		bool L_225 = V_35;
		V_71 = L_225;
		bool L_226 = V_71;
		if (!L_226)
		{
			goto IL_0c7b;
		}
	}
	{
		// horiz.Sym(ref top);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// if (top.tri.id == DUMMY)
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_227 = V_1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_228 = L_227.get_tri_0();
		NullCheck(L_228);
		int32_t L_229 = L_228->get_id_1();
		V_72 = (bool)((((int32_t)L_229) == ((int32_t)(-1)))? 1 : 0);
		bool L_230 = V_72;
		if (!L_230)
		{
			goto IL_08c7;
		}
	}
	{
		// doflip = false;
		V_35 = (bool)0;
		goto IL_0c7a;
	}

IL_08c7:
	{
		// farvertex = top.Apex();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_231;
		L_231 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		V_28 = L_231;
		// if ((leftvertex == infvertex1) || (leftvertex == infvertex2) ||
		//     (leftvertex == infvertex3))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_232 = V_24;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_233 = __this->get_infvertex1_22();
		bool L_234;
		L_234 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_232, L_233, /*hidden argument*/NULL);
		if (L_234)
		{
			goto IL_08fe;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_235 = V_24;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_236 = __this->get_infvertex2_23();
		bool L_237;
		L_237 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_235, L_236, /*hidden argument*/NULL);
		if (L_237)
		{
			goto IL_08fe;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_238 = V_24;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_239 = __this->get_infvertex3_24();
		bool L_240;
		L_240 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_238, L_239, /*hidden argument*/NULL);
		G_B83_0 = ((int32_t)(L_240));
		goto IL_08ff;
	}

IL_08fe:
	{
		G_B83_0 = 1;
	}

IL_08ff:
	{
		V_73 = (bool)G_B83_0;
		bool L_241 = V_73;
		if (!L_241)
		{
			goto IL_0925;
		}
	}
	{
		// doflip = predicates.CounterClockwise(newvertex, rightvertex, farvertex) > 0.0f;
		RuntimeObject* L_242 = __this->get_predicates_0();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_243 = ___newvertex0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_244 = V_25;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_245 = V_28;
		NullCheck(L_242);
		float L_246;
		L_246 = InterfaceFuncInvoker3< float, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * >::Invoke(0 /* System.Single TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var, L_242, L_243, L_244, L_245);
		V_35 = (bool)((((float)L_246) > ((float)(0.0f)))? 1 : 0);
		goto IL_09ce;
	}

IL_0925:
	{
		// else if ((rightvertex == infvertex1) ||
		//          (rightvertex == infvertex2) ||
		//          (rightvertex == infvertex3))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_247 = V_25;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_248 = __this->get_infvertex1_22();
		bool L_249;
		L_249 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_247, L_248, /*hidden argument*/NULL);
		if (L_249)
		{
			goto IL_0952;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_250 = V_25;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_251 = __this->get_infvertex2_23();
		bool L_252;
		L_252 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_250, L_251, /*hidden argument*/NULL);
		if (L_252)
		{
			goto IL_0952;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_253 = V_25;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_254 = __this->get_infvertex3_24();
		bool L_255;
		L_255 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_253, L_254, /*hidden argument*/NULL);
		G_B89_0 = ((int32_t)(L_255));
		goto IL_0953;
	}

IL_0952:
	{
		G_B89_0 = 1;
	}

IL_0953:
	{
		V_74 = (bool)G_B89_0;
		bool L_256 = V_74;
		if (!L_256)
		{
			goto IL_0976;
		}
	}
	{
		// doflip = predicates.CounterClockwise(farvertex, leftvertex, newvertex) > 0.0f;
		RuntimeObject* L_257 = __this->get_predicates_0();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_258 = V_28;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_259 = V_24;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_260 = ___newvertex0;
		NullCheck(L_257);
		float L_261;
		L_261 = InterfaceFuncInvoker3< float, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * >::Invoke(0 /* System.Single TriangleNet.IPredicates::CounterClockwise(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var, L_257, L_258, L_259, L_260);
		V_35 = (bool)((((float)L_261) > ((float)(0.0f)))? 1 : 0);
		goto IL_09ce;
	}

IL_0976:
	{
		// else if ((farvertex == infvertex1) ||
		//          (farvertex == infvertex2) ||
		//          (farvertex == infvertex3))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_262 = V_28;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_263 = __this->get_infvertex1_22();
		bool L_264;
		L_264 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_262, L_263, /*hidden argument*/NULL);
		if (L_264)
		{
			goto IL_09a3;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_265 = V_28;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_266 = __this->get_infvertex2_23();
		bool L_267;
		L_267 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_265, L_266, /*hidden argument*/NULL);
		if (L_267)
		{
			goto IL_09a3;
		}
	}
	{
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_268 = V_28;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_269 = __this->get_infvertex3_24();
		bool L_270;
		L_270 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_268, L_269, /*hidden argument*/NULL);
		G_B95_0 = ((int32_t)(L_270));
		goto IL_09a4;
	}

IL_09a3:
	{
		G_B95_0 = 1;
	}

IL_09a4:
	{
		V_75 = (bool)G_B95_0;
		bool L_271 = V_75;
		if (!L_271)
		{
			goto IL_09b1;
		}
	}
	{
		// doflip = false;
		V_35 = (bool)0;
		goto IL_09ce;
	}

IL_09b1:
	{
		// doflip = predicates.InCircle(leftvertex, newvertex, rightvertex, farvertex) > 0.0f;
		RuntimeObject* L_272 = __this->get_predicates_0();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_273 = V_24;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_274 = ___newvertex0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_275 = V_25;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_276 = V_28;
		NullCheck(L_272);
		float L_277;
		L_277 = InterfaceFuncInvoker4< float, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * >::Invoke(1 /* System.Single TriangleNet.IPredicates::InCircle(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var, L_272, L_273, L_274, L_275, L_276);
		V_35 = (bool)((((float)L_277) > ((float)(0.0f)))? 1 : 0);
	}

IL_09ce:
	{
		// if (doflip)
		bool L_278 = V_35;
		V_76 = L_278;
		bool L_279 = V_76;
		if (!L_279)
		{
			goto IL_0c79;
		}
	}
	{
		// top.Lprev(ref topleft);
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		// topleft.Sym(ref toplcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_11), /*hidden argument*/NULL);
		// top.Lnext(ref topright);
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// topright.Sym(ref toprcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_12), /*hidden argument*/NULL);
		// horiz.Lnext(ref botleft);
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// botleft.Sym(ref botlcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_9), /*hidden argument*/NULL);
		// horiz.Lprev(ref botright);
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// botright.Sym(ref botrcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_10), /*hidden argument*/NULL);
		// topleft.Bond(ref botlcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_9), /*hidden argument*/NULL);
		// botleft.Bond(ref botrcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_10), /*hidden argument*/NULL);
		// botright.Bond(ref toprcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_12), /*hidden argument*/NULL);
		// topright.Bond(ref toplcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_11), /*hidden argument*/NULL);
		// if (checksegments)
		bool L_280 = __this->get_checksegments_20();
		V_77 = L_280;
		bool L_281 = V_77;
		if (!L_281)
		{
			goto IL_0b57;
		}
	}
	{
		// topleft.Pivot(ref toplsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_16), /*hidden argument*/NULL);
		// botleft.Pivot(ref botlsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_14), /*hidden argument*/NULL);
		// botright.Pivot(ref botrsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_15), /*hidden argument*/NULL);
		// topright.Pivot(ref toprsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_17), /*hidden argument*/NULL);
		// if (toplsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_282 = V_16;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_283 = L_282.get_seg_0();
		NullCheck(L_283);
		int32_t L_284 = L_283->get_hash_0();
		V_78 = (bool)((((int32_t)L_284) == ((int32_t)(-1)))? 1 : 0);
		bool L_285 = V_78;
		if (!L_285)
		{
			goto IL_0ab1;
		}
	}
	{
		// topright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_286 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), L_286, /*hidden argument*/NULL);
		goto IL_0abd;
	}

IL_0ab1:
	{
		// topright.SegBond(ref toplsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_16), /*hidden argument*/NULL);
	}

IL_0abd:
	{
		// if (botlsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_287 = V_14;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_288 = L_287.get_seg_0();
		NullCheck(L_288);
		int32_t L_289 = L_288->get_hash_0();
		V_79 = (bool)((((int32_t)L_289) == ((int32_t)(-1)))? 1 : 0);
		bool L_290 = V_79;
		if (!L_290)
		{
			goto IL_0ae4;
		}
	}
	{
		// topleft.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_291 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), L_291, /*hidden argument*/NULL);
		goto IL_0af0;
	}

IL_0ae4:
	{
		// topleft.SegBond(ref botlsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_14), /*hidden argument*/NULL);
	}

IL_0af0:
	{
		// if (botrsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_292 = V_15;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_293 = L_292.get_seg_0();
		NullCheck(L_293);
		int32_t L_294 = L_293->get_hash_0();
		V_80 = (bool)((((int32_t)L_294) == ((int32_t)(-1)))? 1 : 0);
		bool L_295 = V_80;
		if (!L_295)
		{
			goto IL_0b17;
		}
	}
	{
		// botleft.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_296 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), L_296, /*hidden argument*/NULL);
		goto IL_0b23;
	}

IL_0b17:
	{
		// botleft.SegBond(ref botrsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_15), /*hidden argument*/NULL);
	}

IL_0b23:
	{
		// if (toprsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_297 = V_17;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_298 = L_297.get_seg_0();
		NullCheck(L_298);
		int32_t L_299 = L_298->get_hash_0();
		V_81 = (bool)((((int32_t)L_299) == ((int32_t)(-1)))? 1 : 0);
		bool L_300 = V_81;
		if (!L_300)
		{
			goto IL_0b4a;
		}
	}
	{
		// botright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_301 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), L_301, /*hidden argument*/NULL);
		goto IL_0b56;
	}

IL_0b4a:
	{
		// botright.SegBond(ref toprsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_17), /*hidden argument*/NULL);
	}

IL_0b56:
	{
	}

IL_0b57:
	{
		// horiz.SetOrg(farvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_302 = V_28;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_302, /*hidden argument*/NULL);
		// horiz.SetDest(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_303 = ___newvertex0;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_303, /*hidden argument*/NULL);
		// horiz.SetApex(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_304 = V_25;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_304, /*hidden argument*/NULL);
		// top.SetOrg(newvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_305 = ___newvertex0;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), L_305, /*hidden argument*/NULL);
		// top.SetDest(farvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_306 = V_28;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), L_306, /*hidden argument*/NULL);
		// top.SetApex(leftvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_307 = V_24;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), L_307, /*hidden argument*/NULL);
		// region = Mathf.Min(top.tri.label, horiz.tri.label);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_308 = V_1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_309 = L_308.get_tri_0();
		NullCheck(L_309);
		int32_t L_310 = L_309->get_label_5();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_311 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_312 = L_311.get_tri_0();
		NullCheck(L_312);
		int32_t L_313 = L_312->get_label_5();
		int32_t L_314;
		L_314 = Mathf_Min_m8038BC2CE141C9AF3ECA2E31B88A9768423B1519(L_310, L_313, /*hidden argument*/NULL);
		V_31 = L_314;
		// top.tri.label = region;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_315 = V_1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_316 = L_315.get_tri_0();
		int32_t L_317 = V_31;
		NullCheck(L_316);
		L_316->set_label_5(L_317);
		// horiz.tri.label = region;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_318 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_319 = L_318.get_tri_0();
		int32_t L_320 = V_31;
		NullCheck(L_319);
		L_319->set_label_5(L_320);
		// if (behavior.VarArea)
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_321 = __this->get_behavior_26();
		NullCheck(L_321);
		bool L_322;
		L_322 = Behavior_get_VarArea_mEB44A72CD3E7F8D4FEE4B84CD33058A2D3AF8C34(L_321, /*hidden argument*/NULL);
		V_82 = L_322;
		bool L_323 = V_82;
		if (!L_323)
		{
			goto IL_0c51;
		}
	}
	{
		// if ((top.tri.area <= 0.0f) || (horiz.tri.area <= 0.0f))
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_324 = V_1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_325 = L_324.get_tri_0();
		NullCheck(L_325);
		float L_326 = L_325->get_area_6();
		if ((((float)L_326) <= ((float)(0.0f))))
		{
			goto IL_0c03;
		}
	}
	{
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_327 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_328 = L_327.get_tri_0();
		NullCheck(L_328);
		float L_329 = L_328->get_area_6();
		G_B117_0 = ((((int32_t)((!(((float)L_329) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0c04;
	}

IL_0c03:
	{
		G_B117_0 = 1;
	}

IL_0c04:
	{
		V_83 = (bool)G_B117_0;
		bool L_330 = V_83;
		if (!L_330)
		{
			goto IL_0c15;
		}
	}
	{
		// area = -1.0f;
		V_32 = (-1.0f);
		goto IL_0c36;
	}

IL_0c15:
	{
		// area = 0.5f * (top.tri.area + horiz.tri.area);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_331 = V_1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_332 = L_331.get_tri_0();
		NullCheck(L_332);
		float L_333 = L_332->get_area_6();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_334 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_335 = L_334.get_tri_0();
		NullCheck(L_335);
		float L_336 = L_335->get_area_6();
		V_32 = ((float)il2cpp_codegen_multiply((float)(0.5f), (float)((float)il2cpp_codegen_add((float)L_333, (float)L_336))));
	}

IL_0c36:
	{
		// top.tri.area = area;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_337 = V_1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_338 = L_337.get_tri_0();
		float L_339 = V_32;
		NullCheck(L_338);
		L_338->set_area_6(L_339);
		// horiz.tri.area = area;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_340 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_341 = L_340.get_tri_0();
		float L_342 = V_32;
		NullCheck(L_341);
		L_341->set_area_6(L_342);
	}

IL_0c51:
	{
		// if (checkquality)
		bool L_343 = __this->get_checkquality_21();
		V_84 = L_343;
		bool L_344 = V_84;
		if (!L_344)
		{
			goto IL_0c6c;
		}
	}
	{
		// flipstack.Push(horiz);
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_345 = __this->get_flipstack_3();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_346 = V_0;
		NullCheck(L_345);
		Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD(L_345, L_346, /*hidden argument*/Stack_1_Push_m8CA9E84917ABBD3A95F9BEB113414FC743767ECD_RuntimeMethod_var);
	}

IL_0c6c:
	{
		// horiz.Lprev();
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// leftvertex = farvertex;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_347 = V_28;
		V_24 = L_347;
	}

IL_0c79:
	{
	}

IL_0c7a:
	{
	}

IL_0c7b:
	{
		// if (!doflip)
		bool L_348 = V_35;
		V_85 = (bool)((((int32_t)L_348) == ((int32_t)0))? 1 : 0);
		bool L_349 = V_85;
		if (!L_349)
		{
			goto IL_0d1f;
		}
	}
	{
		// if (triflaws)
		bool L_350 = ___triflaws4;
		V_86 = L_350;
		bool L_351 = V_86;
		if (!L_351)
		{
			goto IL_0ca2;
		}
	}
	{
		// qualityMesher.TestTriangle(ref horiz);
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_352 = __this->get_qualityMesher_2();
		NullCheck(L_352);
		QualityMesher_TestTriangle_m156D106ABD726A99AC77724B69C840D5D791C6FC(L_352, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
	}

IL_0ca2:
	{
		// horiz.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// horiz.Sym(ref testtri);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_13), /*hidden argument*/NULL);
		// if ((leftvertex == first) || (testtri.tri.id == DUMMY))
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_353 = V_24;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_354 = V_23;
		bool L_355;
		L_355 = Point_op_Equality_m8A3763DEBBD2785FFFB63992E0B192EF29112110(L_353, L_354, /*hidden argument*/NULL);
		if (L_355)
		{
			goto IL_0cd0;
		}
	}
	{
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_356 = V_13;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_357 = L_356.get_tri_0();
		NullCheck(L_357);
		int32_t L_358 = L_357->get_id_1();
		G_B132_0 = ((((int32_t)L_358) == ((int32_t)(-1)))? 1 : 0);
		goto IL_0cd1;
	}

IL_0cd0:
	{
		G_B132_0 = 1;
	}

IL_0cd1:
	{
		V_87 = (bool)G_B132_0;
		bool L_359 = V_87;
		if (!L_359)
		{
			goto IL_0d07;
		}
	}
	{
		// horiz.Lnext(ref searchtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_360 = ___searchtri1;
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_360, /*hidden argument*/NULL);
		// Otri recenttri = default(Otri);
		il2cpp_codegen_initobj((&V_88), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// horiz.Lnext(ref recenttri);
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_88), /*hidden argument*/NULL);
		// locator.Update(ref recenttri);
		TriangleLocator_t3808FAD2B85B19C773B10511490793FD42550F2F * L_361 = __this->get_locator_25();
		NullCheck(L_361);
		TriangleLocator_Update_m5BE85AAD15465C2702D94635C2E8062C24FF1BDE(L_361, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_88), /*hidden argument*/NULL);
		// return success;
		int32_t L_362 = V_33;
		V_41 = L_362;
		goto IL_0d28;
	}

IL_0d07:
	{
		// testtri.Lnext(ref horiz);
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_13), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// rightvertex = leftvertex;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_363 = V_24;
		V_25 = L_363;
		// leftvertex = horiz.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_364;
		L_364 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_24 = L_364;
	}

IL_0d1f:
	{
	}

IL_0d20:
	{
		// while (true)
		V_89 = (bool)1;
		goto IL_0835;
	}

IL_0d28:
	{
		// }
		int32_t L_365 = V_41;
		return L_365;
	}
}
// System.Void TriangleNet.TriangleNetMesh::InsertSubseg(TriangleNet.Topology.Otri&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_InsertSubseg_m73F0BF215A92D4785EFC682D1116AE90369ECDE5 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___tri0, int32_t ___subsegmark1, const RuntimeMethod* method)
{
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_2 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	{
		// Otri oppotri = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Osub newsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_1), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// triorg = tri.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_0 = ___tri0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1;
		L_1 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		// tridest = tri.Dest();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_2 = ___tri0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_3;
		L_3 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_2, /*hidden argument*/NULL);
		V_3 = L_3;
		// if (triorg.label == 0)
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_4 = V_2;
		NullCheck(L_4);
		int32_t L_5 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_4)->get_label_1();
		V_4 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_4;
		if (!L_6)
		{
			goto IL_0037;
		}
	}
	{
		// triorg.label = subsegmark;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_7 = V_2;
		int32_t L_8 = ___subsegmark1;
		NullCheck(L_7);
		((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_7)->set_label_1(L_8);
	}

IL_0037:
	{
		// if (tridest.label == 0)
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_9 = V_3;
		NullCheck(L_9);
		int32_t L_10 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_9)->get_label_1();
		V_5 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_004f;
		}
	}
	{
		// tridest.label = subsegmark;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_12 = V_3;
		int32_t L_13 = ___subsegmark1;
		NullCheck(L_12);
		((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_12)->set_label_1(L_13);
	}

IL_004f:
	{
		// tri.Pivot(ref newsubseg);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_14 = ___tri0;
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_14, (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), /*hidden argument*/NULL);
		// if (newsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_15 = V_1;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_16 = L_15.get_seg_0();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_hash_0();
		V_6 = (bool)((((int32_t)L_17) == ((int32_t)(-1)))? 1 : 0);
		bool L_18 = V_6;
		if (!L_18)
		{
			goto IL_00cd;
		}
	}
	{
		// MakeSegment(ref newsubseg);
		TriangleNetMesh_MakeSegment_mFAE9001C54F330A2B07A1CB6E896E4DC8B50AFEC(__this, (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), /*hidden argument*/NULL);
		// newsubseg.SetOrg(tridest);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_19 = V_3;
		Osub_SetOrg_mBEB7BC3C89359CE6F09FFFCD67360F1E282F141E((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), L_19, /*hidden argument*/NULL);
		// newsubseg.SetDest(triorg);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_20 = V_2;
		Osub_SetDest_m524A588AF208CE6512BF8EE2BCDBED4442239694((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), L_20, /*hidden argument*/NULL);
		// newsubseg.SetSegOrg(tridest);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_21 = V_3;
		Osub_SetSegOrg_m4AB5D70688B4BF79E79EBB97693F6E6DE216D26E((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), L_21, /*hidden argument*/NULL);
		// newsubseg.SetSegDest(triorg);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_22 = V_2;
		Osub_SetSegDest_m5879B7B966454B00CF10BBC61EEFD6AED2242281((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), L_22, /*hidden argument*/NULL);
		// tri.SegBond(ref newsubseg);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_23 = ___tri0;
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_23, (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), /*hidden argument*/NULL);
		// tri.Sym(ref oppotri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_24 = ___tri0;
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_24, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// newsubseg.Sym();
		Osub_Sym_m15527263465FA17FD4F796A4CACC7EEB02AB7DC0((Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), /*hidden argument*/NULL);
		// oppotri.SegBond(ref newsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_1), /*hidden argument*/NULL);
		// newsubseg.seg.boundary = subsegmark;
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_25 = V_1;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_26 = L_25.get_seg_0();
		int32_t L_27 = ___subsegmark1;
		NullCheck(L_26);
		L_26->set_boundary_4(L_27);
		goto IL_00ef;
	}

IL_00cd:
	{
		// else if (newsubseg.seg.boundary == 0)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_28 = V_1;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_29 = L_28.get_seg_0();
		NullCheck(L_29);
		int32_t L_30 = L_29->get_boundary_4();
		V_7 = (bool)((((int32_t)L_30) == ((int32_t)0))? 1 : 0);
		bool L_31 = V_7;
		if (!L_31)
		{
			goto IL_00ef;
		}
	}
	{
		// newsubseg.seg.boundary = subsegmark;
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_32 = V_1;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_33 = L_32.get_seg_0();
		int32_t L_34 = ___subsegmark1;
		NullCheck(L_33);
		L_33->set_boundary_4(L_34);
	}

IL_00ef:
	{
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::Flip(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Flip_mC6BBF11FEDF5CB5629DF80B93F14232D3EBC7AFD (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___flipedge0, const RuntimeMethod* method)
{
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_13 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_14 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_15 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		// Otri botleft = default(Otri), botright = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botleft = default(Otri), botright = default(Otri);
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri topleft = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri topleft = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_3), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri top = default(Otri);
		il2cpp_codegen_initobj((&V_4), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri);
		il2cpp_codegen_initobj((&V_5), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri);
		il2cpp_codegen_initobj((&V_6), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri toplcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_7), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri toplcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_8), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_9), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_10), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub toplsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_11), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub toplsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_12), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// rightvertex = flipedge.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_0 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1;
		L_1 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_0, /*hidden argument*/NULL);
		V_14 = L_1;
		// leftvertex = flipedge.Dest();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_2 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_3;
		L_3 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_2, /*hidden argument*/NULL);
		V_13 = L_3;
		// botvertex = flipedge.Apex();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_4 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_5;
		L_5 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_4, /*hidden argument*/NULL);
		V_15 = L_5;
		// flipedge.Sym(ref top);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_6 = ___flipedge0;
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_6, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		// farvertex = top.Apex();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_7;
		L_7 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		V_16 = L_7;
		// top.Lprev(ref topleft);
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// topleft.Sym(ref toplcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// top.Lnext(ref topright);
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// topright.Sym(ref toprcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), /*hidden argument*/NULL);
		// flipedge.Lnext(ref botleft);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_8 = ___flipedge0;
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_8, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// botleft.Sym(ref botlcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// flipedge.Lprev(ref botright);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_9 = ___flipedge0;
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_9, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// botright.Sym(ref botrcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// topleft.Bond(ref botlcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// botleft.Bond(ref botrcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// botright.Bond(ref toprcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), /*hidden argument*/NULL);
		// topright.Bond(ref toplcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// if (checksegments)
		bool L_10 = __this->get_checksegments_20();
		V_17 = L_10;
		bool L_11 = V_17;
		if (!L_11)
		{
			goto IL_020e;
		}
	}
	{
		// topleft.Pivot(ref toplsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_11), /*hidden argument*/NULL);
		// botleft.Pivot(ref botlsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
		// botright.Pivot(ref botrsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_10), /*hidden argument*/NULL);
		// topright.Pivot(ref toprsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_12), /*hidden argument*/NULL);
		// if (toplsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_12 = V_11;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_13 = L_12.get_seg_0();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_hash_0();
		V_18 = (bool)((((int32_t)L_14) == ((int32_t)(-1)))? 1 : 0);
		bool L_15 = V_18;
		if (!L_15)
		{
			goto IL_0168;
		}
	}
	{
		// topright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_16 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), L_16, /*hidden argument*/NULL);
		goto IL_0174;
	}

IL_0168:
	{
		// topright.SegBond(ref toplsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_11), /*hidden argument*/NULL);
	}

IL_0174:
	{
		// if (botlsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_17 = V_9;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_18 = L_17.get_seg_0();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_hash_0();
		V_19 = (bool)((((int32_t)L_19) == ((int32_t)(-1)))? 1 : 0);
		bool L_20 = V_19;
		if (!L_20)
		{
			goto IL_019b;
		}
	}
	{
		// topleft.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_21 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), L_21, /*hidden argument*/NULL);
		goto IL_01a7;
	}

IL_019b:
	{
		// topleft.SegBond(ref botlsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
	}

IL_01a7:
	{
		// if (botrsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_22 = V_10;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_23 = L_22.get_seg_0();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_hash_0();
		V_20 = (bool)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0);
		bool L_25 = V_20;
		if (!L_25)
		{
			goto IL_01ce;
		}
	}
	{
		// botleft.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_26 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_26, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01ce:
	{
		// botleft.SegBond(ref botrsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_10), /*hidden argument*/NULL);
	}

IL_01da:
	{
		// if (toprsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_27 = V_12;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_28 = L_27.get_seg_0();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_hash_0();
		V_21 = (bool)((((int32_t)L_29) == ((int32_t)(-1)))? 1 : 0);
		bool L_30 = V_21;
		if (!L_30)
		{
			goto IL_0201;
		}
	}
	{
		// botright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_31 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), L_31, /*hidden argument*/NULL);
		goto IL_020d;
	}

IL_0201:
	{
		// botright.SegBond(ref toprsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_12), /*hidden argument*/NULL);
	}

IL_020d:
	{
	}

IL_020e:
	{
		// flipedge.SetOrg(farvertex);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_32 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_33 = V_16;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_32, L_33, /*hidden argument*/NULL);
		// flipedge.SetDest(botvertex);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_34 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_35 = V_15;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_34, L_35, /*hidden argument*/NULL);
		// flipedge.SetApex(rightvertex);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_36 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_37 = V_14;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_36, L_37, /*hidden argument*/NULL);
		// top.SetOrg(botvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_38 = V_15;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), L_38, /*hidden argument*/NULL);
		// top.SetDest(farvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_39 = V_16;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), L_39, /*hidden argument*/NULL);
		// top.SetApex(leftvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_40 = V_13;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::Unflip(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_Unflip_m8D6CE694471E6025E97A8101C1C7C9050F7BFDE6 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___flipedge0, const RuntimeMethod* method)
{
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_11;
	memset((&V_11), 0, sizeof(V_11));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_12;
	memset((&V_12), 0, sizeof(V_12));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_13 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_14 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_15 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	bool V_20 = false;
	bool V_21 = false;
	{
		// Otri botleft = default(Otri), botright = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botleft = default(Otri), botright = default(Otri);
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri topleft = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri topleft = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_3), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri top = default(Otri);
		il2cpp_codegen_initobj((&V_4), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri);
		il2cpp_codegen_initobj((&V_5), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri);
		il2cpp_codegen_initobj((&V_6), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri toplcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_7), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri toplcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_8), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_9), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_10), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub toplsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_11), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub toplsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_12), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// rightvertex = flipedge.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_0 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1;
		L_1 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_0, /*hidden argument*/NULL);
		V_14 = L_1;
		// leftvertex = flipedge.Dest();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_2 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_3;
		L_3 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_2, /*hidden argument*/NULL);
		V_13 = L_3;
		// botvertex = flipedge.Apex();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_4 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_5;
		L_5 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_4, /*hidden argument*/NULL);
		V_15 = L_5;
		// flipedge.Sym(ref top);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_6 = ___flipedge0;
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_6, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		// farvertex = top.Apex();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_7;
		L_7 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		V_16 = L_7;
		// top.Lprev(ref topleft);
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// topleft.Sym(ref toplcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// top.Lnext(ref topright);
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// topright.Sym(ref toprcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), /*hidden argument*/NULL);
		// flipedge.Lnext(ref botleft);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_8 = ___flipedge0;
		Otri_Lnext_mDF66BF8ABBFF9E382BD750D95171C3BEC99716D8((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_8, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// botleft.Sym(ref botlcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// flipedge.Lprev(ref botright);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_9 = ___flipedge0;
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_9, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// botright.Sym(ref botrcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// topleft.Bond(ref toprcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_8), /*hidden argument*/NULL);
		// botleft.Bond(ref toplcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// botright.Bond(ref botlcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// topright.Bond(ref botrcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// if (checksegments)
		bool L_10 = __this->get_checksegments_20();
		V_17 = L_10;
		bool L_11 = V_17;
		if (!L_11)
		{
			goto IL_020e;
		}
	}
	{
		// topleft.Pivot(ref toplsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_11), /*hidden argument*/NULL);
		// botleft.Pivot(ref botlsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
		// botright.Pivot(ref botrsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_10), /*hidden argument*/NULL);
		// topright.Pivot(ref toprsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_12), /*hidden argument*/NULL);
		// if (toplsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_12 = V_11;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_13 = L_12.get_seg_0();
		NullCheck(L_13);
		int32_t L_14 = L_13->get_hash_0();
		V_18 = (bool)((((int32_t)L_14) == ((int32_t)(-1)))? 1 : 0);
		bool L_15 = V_18;
		if (!L_15)
		{
			goto IL_0168;
		}
	}
	{
		// botleft.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_16 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_16, /*hidden argument*/NULL);
		goto IL_0174;
	}

IL_0168:
	{
		// botleft.SegBond(ref toplsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_11), /*hidden argument*/NULL);
	}

IL_0174:
	{
		// if (botlsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_17 = V_9;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_18 = L_17.get_seg_0();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_hash_0();
		V_19 = (bool)((((int32_t)L_19) == ((int32_t)(-1)))? 1 : 0);
		bool L_20 = V_19;
		if (!L_20)
		{
			goto IL_019b;
		}
	}
	{
		// botright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_21 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), L_21, /*hidden argument*/NULL);
		goto IL_01a7;
	}

IL_019b:
	{
		// botright.SegBond(ref botlsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
	}

IL_01a7:
	{
		// if (botrsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_22 = V_10;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_23 = L_22.get_seg_0();
		NullCheck(L_23);
		int32_t L_24 = L_23->get_hash_0();
		V_20 = (bool)((((int32_t)L_24) == ((int32_t)(-1)))? 1 : 0);
		bool L_25 = V_20;
		if (!L_25)
		{
			goto IL_01ce;
		}
	}
	{
		// topright.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_26 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), L_26, /*hidden argument*/NULL);
		goto IL_01da;
	}

IL_01ce:
	{
		// topright.SegBond(ref botrsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_10), /*hidden argument*/NULL);
	}

IL_01da:
	{
		// if (toprsubseg.seg.hash == DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_27 = V_12;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_28 = L_27.get_seg_0();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_hash_0();
		V_21 = (bool)((((int32_t)L_29) == ((int32_t)(-1)))? 1 : 0);
		bool L_30 = V_21;
		if (!L_30)
		{
			goto IL_0201;
		}
	}
	{
		// topleft.SegDissolve(dummysub);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_31 = __this->get_dummysub_30();
		Otri_SegDissolve_m0732C0546B2F77FE49A460E424F8ADC56E2720A1((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), L_31, /*hidden argument*/NULL);
		goto IL_020d;
	}

IL_0201:
	{
		// topleft.SegBond(ref toprsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_12), /*hidden argument*/NULL);
	}

IL_020d:
	{
	}

IL_020e:
	{
		// flipedge.SetOrg(botvertex);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_32 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_33 = V_15;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_32, L_33, /*hidden argument*/NULL);
		// flipedge.SetDest(farvertex);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_34 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_35 = V_16;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_34, L_35, /*hidden argument*/NULL);
		// flipedge.SetApex(leftvertex);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_36 = ___flipedge0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_37 = V_13;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_36, L_37, /*hidden argument*/NULL);
		// top.SetOrg(farvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_38 = V_16;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), L_38, /*hidden argument*/NULL);
		// top.SetDest(botvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_39 = V_15;
		Otri_SetDest_m167FC0C73BC23FBDB7115C3D99F960FA186B86BC((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), L_39, /*hidden argument*/NULL);
		// top.SetApex(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_40 = V_14;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), L_40, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::TriangulatePolygon(TriangleNet.Topology.Otri,TriangleNet.Topology.Otri,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_TriangulatePolygon_mB81172F0AFB98BB37F08A8B467897089CF730B78 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___firstedge0, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  ___lastedge1, int32_t ___edgecount2, bool ___doflip3, bool ___triflaws4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_3 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_4 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_5 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		// Otri testtri = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri besttri = default(Otri);
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri tempedge = default(Otri);
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// int bestnumber = 1;
		V_7 = 1;
		// leftbasevertex = lastedge.Apex();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_0;
		L_0 = Otri_Apex_m9901DC30A1D6B843EAA2D7C36579DC6543BDB016((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&___lastedge1), /*hidden argument*/NULL);
		V_3 = L_0;
		// rightbasevertex = firstedge.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1;
		L_1 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&___firstedge0), /*hidden argument*/NULL);
		V_4 = L_1;
		// firstedge.Onext(ref besttri);
		Otri_Onext_mD2F97F3A131C4CCEAA5B69B607B980142AB1F5F4((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&___firstedge0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// bestvertex = besttri.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_2;
		L_2 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		V_6 = L_2;
		// besttri.Copy(ref testtri);
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// for (int i = 2; i <= edgecount - 2; i++)
		V_8 = 2;
		goto IL_009b;
	}

IL_004f:
	{
		// testtri.Onext();
		Otri_Onext_m8EF7D2906A859E6AD144CC7F634EAA1E1B74BCFE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// testvertex = testtri.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_3;
		L_3 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		V_5 = L_3;
		// if (predicates.InCircle(leftbasevertex, rightbasevertex, bestvertex, testvertex) > 0.0f)
		RuntimeObject* L_4 = __this->get_predicates_0();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_5 = V_3;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_6 = V_4;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_7 = V_6;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_8 = V_5;
		NullCheck(L_4);
		float L_9;
		L_9 = InterfaceFuncInvoker4< float, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *, Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 * >::Invoke(1 /* System.Single TriangleNet.IPredicates::InCircle(TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point,TriangleNet.Geometry.Point) */, IPredicates_t94F613D83BF376F07FD37E8D9BC1C0A0B31841E5_il2cpp_TypeInfo_var, L_4, L_5, L_6, L_7, L_8);
		V_9 = (bool)((((float)L_9) > ((float)(0.0f)))? 1 : 0);
		bool L_10 = V_9;
		if (!L_10)
		{
			goto IL_0094;
		}
	}
	{
		// testtri.Copy(ref besttri);
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// bestvertex = testvertex;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_11 = V_5;
		V_6 = L_11;
		// bestnumber = i;
		int32_t L_12 = V_8;
		V_7 = L_12;
	}

IL_0094:
	{
		// for (int i = 2; i <= edgecount - 2; i++)
		int32_t L_13 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_009b:
	{
		// for (int i = 2; i <= edgecount - 2; i++)
		int32_t L_14 = V_8;
		int32_t L_15 = ___edgecount2;
		V_10 = (bool)((((int32_t)((((int32_t)L_14) > ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)2))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_10;
		if (L_16)
		{
			goto IL_004f;
		}
	}
	{
		// if (bestnumber > 1)
		int32_t L_17 = V_7;
		V_11 = (bool)((((int32_t)L_17) > ((int32_t)1))? 1 : 0);
		bool L_18 = V_11;
		if (!L_18)
		{
			goto IL_00d2;
		}
	}
	{
		// besttri.Oprev(ref tempedge);
		Otri_Oprev_m0758576315B80AF6FD7D1DFDFE1117573B649BA5((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// TriangulatePolygon(firstedge, tempedge, bestnumber + 1, true, triflaws);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_19 = ___firstedge0;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_20 = V_2;
		int32_t L_21 = V_7;
		bool L_22 = ___triflaws4;
		TriangleNetMesh_TriangulatePolygon_mB81172F0AFB98BB37F08A8B467897089CF730B78(__this, L_19, L_20, ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)), (bool)1, L_22, /*hidden argument*/NULL);
	}

IL_00d2:
	{
		// if (bestnumber < edgecount - 2)
		int32_t L_23 = V_7;
		int32_t L_24 = ___edgecount2;
		V_12 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)2))))? 1 : 0);
		bool L_25 = V_12;
		if (!L_25)
		{
			goto IL_0105;
		}
	}
	{
		// besttri.Sym(ref tempedge);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// TriangulatePolygon(besttri, lastedge, edgecount - bestnumber, true, triflaws);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_26 = V_1;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_27 = ___lastedge1;
		int32_t L_28 = ___edgecount2;
		int32_t L_29 = V_7;
		bool L_30 = ___triflaws4;
		TriangleNetMesh_TriangulatePolygon_mB81172F0AFB98BB37F08A8B467897089CF730B78(__this, L_26, L_27, ((int32_t)il2cpp_codegen_subtract((int32_t)L_28, (int32_t)L_29)), (bool)1, L_30, /*hidden argument*/NULL);
		// tempedge.Sym(ref besttri);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
	}

IL_0105:
	{
		// if (doflip)
		bool L_31 = ___doflip3;
		V_13 = L_31;
		bool L_32 = V_13;
		if (!L_32)
		{
			goto IL_013a;
		}
	}
	{
		// Flip(ref besttri);
		TriangleNetMesh_Flip_mC6BBF11FEDF5CB5629DF80B93F14232D3EBC7AFD(__this, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// if (triflaws)
		bool L_33 = ___triflaws4;
		V_14 = L_33;
		bool L_34 = V_14;
		if (!L_34)
		{
			goto IL_0139;
		}
	}
	{
		// besttri.Sym(ref testtri);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// qualityMesher.TestTriangle(ref testtri);
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_35 = __this->get_qualityMesher_2();
		NullCheck(L_35);
		QualityMesher_TestTriangle_m156D106ABD726A99AC77724B69C840D5D791C6FC(L_35, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
	}

IL_0139:
	{
	}

IL_013a:
	{
		// besttri.Copy(ref lastedge);
		Otri_Copy_m9F148D6DAEF16BCFA4DA557CA8363B3BF5F9491A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&___lastedge1), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::DeleteVertex(TriangleNet.Topology.Otri&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_DeleteVertex_mC27C00587C6AF8A4567C871543E564AD86E54614 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * ___deltri0, const RuntimeMethod* method)
{
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_10 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_11 = NULL;
	int32_t V_12 = 0;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	{
		// Otri countingtri = default(Otri);
		il2cpp_codegen_initobj((&V_0), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri firstedge = default(Otri), lastedge = default(Otri);
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri firstedge = default(Otri), lastedge = default(Otri);
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri deltriright = default(Otri);
		il2cpp_codegen_initobj((&V_3), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri lefttri = default(Otri), righttri = default(Otri);
		il2cpp_codegen_initobj((&V_4), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri lefttri = default(Otri), righttri = default(Otri);
		il2cpp_codegen_initobj((&V_5), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri leftcasing = default(Otri), rightcasing = default(Otri);
		il2cpp_codegen_initobj((&V_6), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri leftcasing = default(Otri), rightcasing = default(Otri);
		il2cpp_codegen_initobj((&V_7), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Osub leftsubseg = default(Osub), rightsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_8), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub leftsubseg = default(Osub), rightsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_9), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// delvertex = deltri.Org();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_0 = ___deltri0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_1;
		L_1 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_0, /*hidden argument*/NULL);
		V_10 = L_1;
		// VertexDealloc(delvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_2 = V_10;
		TriangleNetMesh_VertexDealloc_mBC7983001090B58D5FF73F5537580E83B05527DB(__this, L_2, /*hidden argument*/NULL);
		// deltri.Onext(ref countingtri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_3 = ___deltri0;
		Otri_Onext_mD2F97F3A131C4CCEAA5B69B607B980142AB1F5F4((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_3, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// edgecount = 1;
		V_12 = 1;
		goto IL_0080;
	}

IL_0070:
	{
		// edgecount++;
		int32_t L_4 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)1));
		// countingtri.Onext();
		Otri_Onext_m8EF7D2906A859E6AD144CC7F634EAA1E1B74BCFE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
	}

IL_0080:
	{
		// while (!deltri.Equals(countingtri))
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_5 = ___deltri0;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_6 = V_0;
		bool L_7;
		L_7 = Otri_Equals_m50BCA65E34345CEF53079CAF96BBFFC6862E64AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_5, L_6, /*hidden argument*/NULL);
		V_13 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_13;
		if (L_8)
		{
			goto IL_0070;
		}
	}
	{
		// if (edgecount > 3)
		int32_t L_9 = V_12;
		V_14 = (bool)((((int32_t)L_9) > ((int32_t)3))? 1 : 0);
		bool L_10 = V_14;
		if (!L_10)
		{
			goto IL_00c9;
		}
	}
	{
		// deltri.Onext(ref firstedge);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_11 = ___deltri0;
		Otri_Onext_mD2F97F3A131C4CCEAA5B69B607B980142AB1F5F4((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_11, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// deltri.Oprev(ref lastedge);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_12 = ___deltri0;
		Otri_Oprev_m0758576315B80AF6FD7D1DFDFE1117573B649BA5((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_12, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// TriangulatePolygon(firstedge, lastedge, edgecount, false, behavior.NoBisect == 0);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_13 = V_1;
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_14 = V_2;
		int32_t L_15 = V_12;
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_16 = __this->get_behavior_26();
		NullCheck(L_16);
		int32_t L_17;
		L_17 = Behavior_get_NoBisect_mCC26A418B7734CBEB4160580CD804CE4B282D8DC(L_16, /*hidden argument*/NULL);
		TriangleNetMesh_TriangulatePolygon_mB81172F0AFB98BB37F08A8B467897089CF730B78(__this, L_13, L_14, L_15, (bool)0, (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
	}

IL_00c9:
	{
		// deltri.Lprev(ref deltriright);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_18 = ___deltri0;
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_18, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// deltri.Dnext(ref lefttri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_19 = ___deltri0;
		Otri_Dnext_mDEA59F899E0D16E6CE41D55E6E98C0421DF2401A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_19, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		// lefttri.Sym(ref leftcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// deltriright.Oprev(ref righttri);
		Otri_Oprev_m0758576315B80AF6FD7D1DFDFE1117573B649BA5((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// righttri.Sym(ref rightcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// deltri.Bond(ref leftcasing);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_20 = ___deltri0;
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_20, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// deltriright.Bond(ref rightcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// lefttri.Pivot(ref leftsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_8), /*hidden argument*/NULL);
		// if (leftsubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_21 = V_8;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_22 = L_21.get_seg_0();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_hash_0();
		V_15 = (bool)((((int32_t)((((int32_t)L_23) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_24 = V_15;
		if (!L_24)
		{
			goto IL_0139;
		}
	}
	{
		// deltri.SegBond(ref leftsubseg);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_25 = ___deltri0;
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_25, (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_8), /*hidden argument*/NULL);
	}

IL_0139:
	{
		// righttri.Pivot(ref rightsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
		// if (rightsubseg.seg.hash != DUMMY)
		Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  L_26 = V_9;
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_27 = L_26.get_seg_0();
		NullCheck(L_27);
		int32_t L_28 = L_27->get_hash_0();
		V_16 = (bool)((((int32_t)((((int32_t)L_28) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_29 = V_16;
		if (!L_29)
		{
			goto IL_0167;
		}
	}
	{
		// deltriright.SegBond(ref rightsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
	}

IL_0167:
	{
		// neworg = lefttri.Org();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_30;
		L_30 = Otri_Org_m587C667B84F1726A0230D6F0476B2D602DCCA5FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		V_11 = L_30;
		// deltri.SetOrg(neworg);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_31 = ___deltri0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_32 = V_11;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_31, L_32, /*hidden argument*/NULL);
		// if (behavior.NoBisect == 0)
		Behavior_t2779857273122045638AE8441EA00E4292C7F2C4 * L_33 = __this->get_behavior_26();
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Behavior_get_NoBisect_mCC26A418B7734CBEB4160580CD804CE4B282D8DC(L_33, /*hidden argument*/NULL);
		V_17 = (bool)((((int32_t)L_34) == ((int32_t)0))? 1 : 0);
		bool L_35 = V_17;
		if (!L_35)
		{
			goto IL_019c;
		}
	}
	{
		// qualityMesher.TestTriangle(ref deltri);
		QualityMesher_tD55452AE8F5DB11A2C776C025401DBCCCA206F92 * L_36 = __this->get_qualityMesher_2();
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE * L_37 = ___deltri0;
		NullCheck(L_36);
		QualityMesher_TestTriangle_m156D106ABD726A99AC77724B69C840D5D791C6FC(L_36, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)L_37, /*hidden argument*/NULL);
	}

IL_019c:
	{
		// TriangleDealloc(lefttri.tri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_38 = V_4;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_39 = L_38.get_tri_0();
		TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2(__this, L_39, /*hidden argument*/NULL);
		// TriangleDealloc(righttri.tri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_40 = V_5;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_41 = L_40.get_tri_0();
		TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2(__this, L_41, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::UndoVertex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_UndoVertex_m73679826B34F330B877ED91E273EF70BDFF38B99 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_mD3C25F051AFADFD95370C2C3432E727728141ECC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mC0CB42657A1DEB5EED6F0A6076FBB982B733B4CC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_4;
	memset((&V_4), 0, sizeof(V_4));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_6;
	memset((&V_6), 0, sizeof(V_6));
	Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  V_7;
	memset((&V_7), 0, sizeof(V_7));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_8;
	memset((&V_8), 0, sizeof(V_8));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA  V_10;
	memset((&V_10), 0, sizeof(V_10));
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_11 = NULL;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	{
		// Otri botleft = default(Otri), botright = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_1), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botleft = default(Otri), botright = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_2), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botleft = default(Otri), botright = default(Otri), topright = default(Otri);
		il2cpp_codegen_initobj((&V_3), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_4), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_5), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri botlcasing = default(Otri), botrcasing = default(Otri), toprcasing = default(Otri);
		il2cpp_codegen_initobj((&V_6), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Otri gluetri = default(Otri);
		il2cpp_codegen_initobj((&V_7), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_8), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_9), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// Osub botlsubseg = default(Osub), botrsubseg = default(Osub), toprsubseg = default(Osub);
		il2cpp_codegen_initobj((&V_10), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		goto IL_0243;
	}

IL_0056:
	{
		// fliptri = flipstack.Pop();
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_0 = __this->get_flipstack_3();
		NullCheck(L_0);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_1;
		L_1 = Stack_1_Pop_mC0CB42657A1DEB5EED6F0A6076FBB982B733B4CC(L_0, /*hidden argument*/Stack_1_Pop_mC0CB42657A1DEB5EED6F0A6076FBB982B733B4CC_RuntimeMethod_var);
		V_0 = L_1;
		// if (flipstack.Count == 0)
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_2 = __this->get_flipstack_3();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_inline(L_2, /*hidden argument*/Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_RuntimeMethod_var);
		V_13 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_13;
		if (!L_4)
		{
			goto IL_0132;
		}
	}
	{
		// fliptri.Dprev(ref botleft);
		Otri_Dprev_m06E43F4F40024360C5DA1BA7C579EDAF36A92243((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// botleft.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		// fliptri.Onext(ref botright);
		Otri_Onext_mD2F97F3A131C4CCEAA5B69B607B980142AB1F5F4((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// botright.Lprev();
		Otri_Lprev_m20DF73C7DDE4C6A53B8C3388AD2BA02C5FA63C70((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// botleft.Sym(ref botlcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		// botright.Sym(ref botrcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// botvertex = botleft.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_5;
		L_5 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), /*hidden argument*/NULL);
		V_11 = L_5;
		// fliptri.SetApex(botvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_6 = V_11;
		Otri_SetApex_m6D5E86E3DA37E16B4BB7CF53B3E8F11EDE0FEAEF((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_6, /*hidden argument*/NULL);
		// fliptri.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// fliptri.Bond(ref botlcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_4), /*hidden argument*/NULL);
		// botleft.Pivot(ref botlsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_1), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_8), /*hidden argument*/NULL);
		// fliptri.SegBond(ref botlsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_8), /*hidden argument*/NULL);
		// fliptri.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
		// fliptri.Bond(ref botrcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// botright.Pivot(ref botrsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
		// fliptri.SegBond(ref botrsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
		// TriangleDealloc(botleft.tri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_7 = V_1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_8 = L_7.get_tri_0();
		TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2(__this, L_8, /*hidden argument*/NULL);
		// TriangleDealloc(botright.tri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_9 = V_2;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_10 = L_9.get_tri_0();
		TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2(__this, L_10, /*hidden argument*/NULL);
		goto IL_0242;
	}

IL_0132:
	{
		// else if (flipstack.Peek().tri == null) // Dummy flip
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_11 = __this->get_flipstack_3();
		NullCheck(L_11);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_12;
		L_12 = Stack_1_Peek_mD3C25F051AFADFD95370C2C3432E727728141ECC(L_11, /*hidden argument*/Stack_1_Peek_mD3C25F051AFADFD95370C2C3432E727728141ECC_RuntimeMethod_var);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_13 = L_12.get_tri_0();
		V_14 = (bool)((((RuntimeObject*)(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)L_13) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_14 = V_14;
		if (!L_14)
		{
			goto IL_0237;
		}
	}
	{
		// fliptri.Lprev(ref gluetri);
		Otri_Lprev_mFE8F692702326807C5FD7032E456D95BA85E88AA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// gluetri.Sym(ref botright);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// botright.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		// botright.Sym(ref botrcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// rightvertex = botright.Dest();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_15;
		L_15 = Otri_Dest_m7E47E4CEEBE1AFF87BBA2A022551A9D12F9F0199((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), /*hidden argument*/NULL);
		V_12 = L_15;
		// fliptri.SetOrg(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_16 = V_12;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), L_16, /*hidden argument*/NULL);
		// gluetri.Bond(ref botrcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_5), /*hidden argument*/NULL);
		// botright.Pivot(ref botrsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_2), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
		// gluetri.SegBond(ref botrsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_9), /*hidden argument*/NULL);
		// TriangleDealloc(botright.tri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_17 = V_2;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_18 = L_17.get_tri_0();
		TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2(__this, L_18, /*hidden argument*/NULL);
		// fliptri.Sym(ref gluetri);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// if (gluetri.tri.id != DUMMY)
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_19 = V_7;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_20 = L_19.get_tri_0();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_id_1();
		V_15 = (bool)((((int32_t)((((int32_t)L_21) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_15;
		if (!L_22)
		{
			goto IL_0228;
		}
	}
	{
		// gluetri.Lnext();
		Otri_Lnext_m7BEFFB9F881AC5858C48FD0FB7127A59CD98A43F((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), /*hidden argument*/NULL);
		// gluetri.Dnext(ref topright);
		Otri_Dnext_mDEA59F899E0D16E6CE41D55E6E98C0421DF2401A((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), /*hidden argument*/NULL);
		// topright.Sym(ref toprcasing);
		Otri_Sym_mEC0061EBCB14B0A6B102FB6DE625A4DCA8A4784D((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// gluetri.SetOrg(rightvertex);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_23 = V_12;
		Otri_SetOrg_m26520C2073C8D25A70BBAE16174282EDB3CDB205((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), L_23, /*hidden argument*/NULL);
		// gluetri.Bond(ref toprcasing);
		Otri_Bond_mA7E8496F295D66E1EC995293CD756F43759814BA((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_6), /*hidden argument*/NULL);
		// topright.Pivot(ref toprsubseg);
		Otri_Pivot_m5DCD3B8514386F97D1094D9E9CAD10FDD89B10FE((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_3), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_10), /*hidden argument*/NULL);
		// gluetri.SegBond(ref toprsubseg);
		Otri_SegBond_m620A3BFF76B69FF67758C6D4F86C6B347CEE6C1B((Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_7), (Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA *)(&V_10), /*hidden argument*/NULL);
		// TriangleDealloc(topright.tri);
		Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE  L_24 = V_3;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_25 = L_24.get_tri_0();
		TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2(__this, L_25, /*hidden argument*/NULL);
	}

IL_0228:
	{
		// flipstack.Clear();
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_26 = __this->get_flipstack_3();
		NullCheck(L_26);
		Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9(L_26, /*hidden argument*/Stack_1_Clear_mF5A529B7E2014AB17E4B6E070C69DDC61BAC8BE9_RuntimeMethod_var);
		goto IL_0242;
	}

IL_0237:
	{
		// Unflip(ref fliptri);
		TriangleNetMesh_Unflip_m8D6CE694471E6025E97A8101C1C7C9050F7BFDE6(__this, (Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE *)(&V_0), /*hidden argument*/NULL);
	}

IL_0242:
	{
	}

IL_0243:
	{
		// while (flipstack.Count > 0)
		Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * L_27 = __this->get_flipstack_3();
		NullCheck(L_27);
		int32_t L_28;
		L_28 = Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_inline(L_27, /*hidden argument*/Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_28) > ((int32_t)0))? 1 : 0);
		bool L_29 = V_16;
		if (L_29)
		{
			goto IL_0056;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::TriangleDealloc(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_TriangleDealloc_mE13C43BF284F0531A226BC7EFF4BD08288C4AFF2 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___dyingtriangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Otri.Kill(dyingtriangle);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = ___dyingtriangle0;
		IL2CPP_RUNTIME_CLASS_INIT(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE_il2cpp_TypeInfo_var);
		Otri_Kill_m7C8A56B68679BD804CFFB08317F34BD7940F5FBA(L_0, /*hidden argument*/NULL);
		// triangles.Release(dyingtriangle);
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_1 = __this->get_triangles_4();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_2 = ___dyingtriangle0;
		NullCheck(L_1);
		TrianglePool_Release_m001908A11B998E42090E07F288791B3844FF9DF6(L_1, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::VertexDealloc(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_VertexDealloc_mBC7983001090B58D5FF73F5537580E83B05527DB (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___dyingvertex0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m66BD6051DF63A145C41F9D8C1A15C79D92516FB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// dyingvertex.type = VertexType.DeadVertex;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_0 = ___dyingvertex0;
		NullCheck(L_0);
		L_0->set_type_5(3);
		// vertices.Remove(dyingvertex.hash);
		Dictionary_2_t897CE7856D5CAA4A57CD77139C826965E4A6F78B * L_1 = __this->get_vertices_6();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_2 = ___dyingvertex0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_hash_4();
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_m66BD6051DF63A145C41F9D8C1A15C79D92516FB2(L_1, L_3, /*hidden argument*/Dictionary_2_Remove_m66BD6051DF63A145C41F9D8C1A15C79D92516FB2_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleNetMesh::SubsegDealloc(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleNetMesh_SubsegDealloc_m0608FFFE272CB7CD42C951941A6522C5CCBC1DB1 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * __this, SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___dyingsubseg0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_mDABD45B8ED6589E8E8F6BC8E12E4BA8702F00F84_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Osub.Kill(dyingsubseg);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_0 = ___dyingsubseg0;
		Osub_Kill_mF538D7A4909E7F272D5C0AEA99B6DB1659429B70(L_0, /*hidden argument*/NULL);
		// subsegs.Remove(dyingsubseg.hash);
		Dictionary_2_t3F09FC6BB32CD4F42736FBEFF585AB23AB13A281 * L_1 = __this->get_subsegs_5();
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_2 = ___dyingsubseg0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_hash_0();
		NullCheck(L_1);
		bool L_4;
		L_4 = Dictionary_2_Remove_mDABD45B8ED6589E8E8F6BC8E12E4BA8702F00F84(L_1, L_3, /*hidden argument*/Dictionary_2_Remove_mDABD45B8ED6589E8E8F6BC8E12E4BA8702F00F84_RuntimeMethod_var);
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
// System.Void TriangleNet.TrianglePool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool__ctor_m5BADC5937E370D3421BC1C10B8CC5F9C993D2714 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m04685073CD474456B3EB0E4B588D6701F139B26D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// public TrianglePool()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// size = 0;
		__this->set_size_1(0);
		// int n = Math.Max(1, 65536 / BLOCKSIZE);
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(1, ((int32_t)64), /*hidden argument*/NULL);
		V_0 = L_0;
		// pool = new Triangle[n][];
		int32_t L_1 = V_0;
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_2 = (TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2*)(TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2*)SZArrayNew(TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2_il2cpp_TypeInfo_var, (uint32_t)L_1);
		__this->set_pool_3(L_2);
		// pool[0] = new Triangle[BLOCKSIZE];
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_3 = __this->get_pool_3();
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_4 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)SZArrayNew(TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, L_4);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(0), (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)L_4);
		// stack = new Stack<Triangle>(BLOCKSIZE);
		Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * L_5 = (Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF *)il2cpp_codegen_object_new(Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF_il2cpp_TypeInfo_var);
		Stack_1__ctor_m04685073CD474456B3EB0E4B588D6701F139B26D(L_5, ((int32_t)1024), /*hidden argument*/Stack_1__ctor_m04685073CD474456B3EB0E4B588D6701F139B26D_RuntimeMethod_var);
		__this->set_stack_4(L_5);
		// }
		return;
	}
}
// TriangleNet.Topology.Triangle TriangleNet.TrianglePool::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * TrianglePool_Get_m4DD06D0CA6BA7D91D99E9B4F1B4992E91650AE73 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisTriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_m0DF6405FF2051446D2F841015C63AF703B2874D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mA2023738F668A9D1D3428B0D610593F1EC550CA7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * V_7 = NULL;
	{
		// if (stack.Count > 0)
		Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * L_0 = __this->get_stack_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_inline(L_0, /*hidden argument*/Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_RuntimeMethod_var);
		V_1 = (bool)((((int32_t)L_1) > ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_003d;
		}
	}
	{
		// triangle = stack.Pop();
		Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * L_3 = __this->get_stack_4();
		NullCheck(L_3);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_4;
		L_4 = Stack_1_Pop_mA2023738F668A9D1D3428B0D610593F1EC550CA7(L_3, /*hidden argument*/Stack_1_Pop_mA2023738F668A9D1D3428B0D610593F1EC550CA7_RuntimeMethod_var);
		V_0 = L_4;
		// triangle.hash = -triangle.hash - 1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_5 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_6 = V_0;
		NullCheck(L_6);
		int32_t L_7 = L_6->get_hash_0();
		NullCheck(L_5);
		L_5->set_hash_0(((int32_t)il2cpp_codegen_subtract((int32_t)((-L_7)), (int32_t)1)));
		// Cleanup(triangle);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_8 = V_0;
		TrianglePool_Cleanup_m468AAD77C0AFE1350E34CA2E8937E8305B016623(__this, L_8, /*hidden argument*/NULL);
		goto IL_0146;
	}

IL_003d:
	{
		// else if (count < size)
		int32_t L_9 = __this->get_count_2();
		int32_t L_10 = __this->get_size_1();
		V_2 = (bool)((((int32_t)L_9) < ((int32_t)L_10))? 1 : 0);
		bool L_11 = V_2;
		if (!L_11)
		{
			goto IL_0099;
		}
	}
	{
		// triangle = pool[count / BLOCKSIZE][count % BLOCKSIZE];
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_12 = __this->get_pool_3();
		int32_t L_13 = __this->get_count_2();
		NullCheck(L_12);
		int32_t L_14 = ((int32_t)((int32_t)L_13/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_15 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		int32_t L_16 = __this->get_count_2();
		NullCheck(L_15);
		int32_t L_17 = ((int32_t)((int32_t)L_16%(int32_t)((int32_t)1024)));
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		V_0 = L_18;
		// triangle.id = triangle.hash;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_19 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_20 = V_0;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_hash_0();
		NullCheck(L_19);
		L_19->set_id_1(L_21);
		// Cleanup(triangle);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_22 = V_0;
		TrianglePool_Cleanup_m468AAD77C0AFE1350E34CA2E8937E8305B016623(__this, L_22, /*hidden argument*/NULL);
		// count++;
		int32_t L_23 = __this->get_count_2();
		__this->set_count_2(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		goto IL_0146;
	}

IL_0099:
	{
		// triangle = new Triangle();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_24 = (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)il2cpp_codegen_object_new(Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412_il2cpp_TypeInfo_var);
		Triangle__ctor_m265A221606C6F3D725D12693BE1D693703668A41(L_24, /*hidden argument*/NULL);
		V_0 = L_24;
		// triangle.hash = size;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_25 = V_0;
		int32_t L_26 = __this->get_size_1();
		NullCheck(L_25);
		L_25->set_hash_0(L_26);
		// triangle.id = triangle.hash;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_27 = V_0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_28 = V_0;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_hash_0();
		NullCheck(L_27);
		L_27->set_id_1(L_29);
		// int block = size / BLOCKSIZE;
		int32_t L_30 = __this->get_size_1();
		V_3 = ((int32_t)((int32_t)L_30/(int32_t)((int32_t)1024)));
		// if (pool[block] == null)
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_31 = __this->get_pool_3();
		int32_t L_32 = V_3;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_34 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		V_4 = (bool)((((RuntimeObject*)(TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)L_34) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_35 = V_4;
		if (!L_35)
		{
			goto IL_0115;
		}
	}
	{
		// pool[block] = new Triangle[BLOCKSIZE];
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_36 = __this->get_pool_3();
		int32_t L_37 = V_3;
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_38 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)SZArrayNew(TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_il2cpp_TypeInfo_var, (uint32_t)((int32_t)1024));
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, L_38);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)L_38);
		// if (block + 1 == pool.Length)
		int32_t L_39 = V_3;
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_40 = __this->get_pool_3();
		NullCheck(L_40);
		V_5 = (bool)((((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1))) == ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length)))))? 1 : 0);
		bool L_41 = V_5;
		if (!L_41)
		{
			goto IL_0114;
		}
	}
	{
		// Array.Resize(ref pool, 2 * pool.Length);
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2** L_42 = __this->get_address_of_pool_3();
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_43 = __this->get_pool_3();
		NullCheck(L_43);
		Array_Resize_TisTriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_m0DF6405FF2051446D2F841015C63AF703B2874D7((TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2**)L_42, ((int32_t)il2cpp_codegen_multiply((int32_t)2, (int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))), /*hidden argument*/Array_Resize_TisTriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306_m0DF6405FF2051446D2F841015C63AF703B2874D7_RuntimeMethod_var);
	}

IL_0114:
	{
	}

IL_0115:
	{
		// pool[block][size % BLOCKSIZE] = triangle;
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_44 = __this->get_pool_3();
		int32_t L_45 = V_3;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_47 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		int32_t L_48 = __this->get_size_1();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_49 = V_0;
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_49);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)((int32_t)L_48%(int32_t)((int32_t)1024)))), (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)L_49);
		// count = ++size;
		int32_t L_50 = __this->get_size_1();
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
		int32_t L_51 = V_6;
		__this->set_size_1(L_51);
		int32_t L_52 = V_6;
		__this->set_count_2(L_52);
	}

IL_0146:
	{
		// return triangle;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_53 = V_0;
		V_7 = L_53;
		goto IL_014b;
	}

IL_014b:
	{
		// }
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_54 = V_7;
		return L_54;
	}
}
// System.Void TriangleNet.TrianglePool::Release(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Release_m001908A11B998E42090E07F288791B3844FF9DF6 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___triangle0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mC0014A9790A831F368DC1C7EA79744EFF1B722C5_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// stack.Push(triangle);
		Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * L_0 = __this->get_stack_4();
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_1 = ___triangle0;
		NullCheck(L_0);
		Stack_1_Push_mC0014A9790A831F368DC1C7EA79744EFF1B722C5(L_0, L_1, /*hidden argument*/Stack_1_Push_mC0014A9790A831F368DC1C7EA79744EFF1B722C5_RuntimeMethod_var);
		// triangle.hash = -triangle.hash - 1;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_2 = ___triangle0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_3 = ___triangle0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_hash_0();
		NullCheck(L_2);
		L_2->set_hash_0(((int32_t)il2cpp_codegen_subtract((int32_t)((-L_4)), (int32_t)1)));
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::Sample(System.Int32,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_Sample_m312E1ADC86671C6B6FF23561182B9BE4E9F8E74B (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, int32_t ___k0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_0 = (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 *)il2cpp_codegen_object_new(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77_il2cpp_TypeInfo_var);
		U3CSampleU3Ed__9__ctor_m3E04BBED9F37F681FFDEB83B2F8E994B072068CF(L_0, ((int32_t)-2), /*hidden argument*/NULL);
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_7(__this);
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_2 = L_1;
		int32_t L_3 = ___k0;
		NullCheck(L_2);
		L_2->set_U3CU3E3__k_4(L_3);
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_4 = L_2;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_5 = ___random1;
		NullCheck(L_4);
		L_4->set_U3CU3E3__random_6(L_5);
		return L_4;
	}
}
// System.Void TriangleNet.TrianglePool::Cleanup(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Cleanup_m468AAD77C0AFE1350E34CA2E8937E8305B016623 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___triangle0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// triangle.label = 0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = ___triangle0;
		NullCheck(L_0);
		L_0->set_label_5(0);
		// triangle.area = 0.0f;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_1 = ___triangle0;
		NullCheck(L_1);
		L_1->set_area_6((0.0f));
		// triangle.infected = false;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_2 = ___triangle0;
		NullCheck(L_2);
		L_2->set_infected_7((bool)0);
		// for (int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0051;
	}

IL_001e:
	{
		// triangle.vertices[i] = null;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_3 = ___triangle0;
		NullCheck(L_3);
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_4 = L_3->get_vertices_3();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, NULL);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)NULL);
		// triangle.subsegs[i] = default(Osub);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_6 = ___triangle0;
		NullCheck(L_6);
		OsubU5BU5D_t4CBEE5DBBA1C53D6265F26785503C8870681F48C* L_7 = L_6->get_subsegs_4();
		int32_t L_8 = V_0;
		NullCheck(L_7);
		il2cpp_codegen_initobj(((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), sizeof(Osub_tD37C4143F927DA0610077B96350D7B58C309C0FA ));
		// triangle.neighbors[i] = default(Otri);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_9 = ___triangle0;
		NullCheck(L_9);
		OtriU5BU5D_t50574ABE8AC1B54A7365759333FD1102A6441F25* L_10 = L_9->get_neighbors_2();
		int32_t L_11 = V_0;
		NullCheck(L_10);
		il2cpp_codegen_initobj(((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11))), sizeof(Otri_tE083ED507AFEF306A54C9F0B9B13C8E5542627DE ));
		// for (int i = 0; i < 3; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_0051:
	{
		// for (int i = 0; i < 3; i++)
		int32_t L_13 = V_0;
		V_1 = (bool)((((int32_t)L_13) < ((int32_t)3))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_001e;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TriangleNet.TrianglePool::Add(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Add_mDD1E2DA8081FBF7F9CE403DC0AC12B64574E8ADD (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___item0, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrianglePool_Add_mDD1E2DA8081FBF7F9CE403DC0AC12B64574E8ADD_RuntimeMethod_var)));
	}
}
// System.Void TriangleNet.TrianglePool::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_Clear_mB22EA18BFE99D6013E39DC0CBE8577C704C282DE (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_m95E54568877C801655BAE2FF81747F08AC66B130_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	{
		// stack.Clear();
		Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * L_0 = __this->get_stack_4();
		NullCheck(L_0);
		Stack_1_Clear_m95E54568877C801655BAE2FF81747F08AC66B130(L_0, /*hidden argument*/Stack_1_Clear_m95E54568877C801655BAE2FF81747F08AC66B130_RuntimeMethod_var);
		// int blocks = (size / BLOCKSIZE) + 1;
		int32_t L_1 = __this->get_size_1();
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_1/(int32_t)((int32_t)1024))), (int32_t)1));
		// for (int i = 0; i < blocks; i++)
		V_1 = 0;
		goto IL_0061;
	}

IL_0020:
	{
		// var block = pool[i];
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_2 = __this->get_pool_3();
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_5 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// int length = (size - i * BLOCKSIZE) % BLOCKSIZE;
		int32_t L_6 = __this->get_size_1();
		int32_t L_7 = V_1;
		V_3 = ((int32_t)((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_7, (int32_t)((int32_t)1024)))))%(int32_t)((int32_t)1024)));
		// for (int j = 0; j < length; j++)
		V_4 = 0;
		goto IL_0051;
	}

IL_0044:
	{
		// block[j] = null;
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_8 = V_2;
		int32_t L_9 = V_4;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, NULL);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(L_9), (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)NULL);
		// for (int j = 0; j < length; j++)
		int32_t L_10 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0051:
	{
		// for (int j = 0; j < length; j++)
		int32_t L_11 = V_4;
		int32_t L_12 = V_3;
		V_5 = (bool)((((int32_t)L_11) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_5;
		if (L_13)
		{
			goto IL_0044;
		}
	}
	{
		// for (int i = 0; i < blocks; i++)
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1));
	}

IL_0061:
	{
		// for (int i = 0; i < blocks; i++)
		int32_t L_15 = V_1;
		int32_t L_16 = V_0;
		V_6 = (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
		bool L_17 = V_6;
		if (L_17)
		{
			goto IL_0020;
		}
	}
	{
		// size = count = 0;
		int32_t L_18 = 0;
		V_7 = L_18;
		__this->set_count_2(L_18);
		int32_t L_19 = V_7;
		__this->set_size_1(L_19);
		// }
		return;
	}
}
// System.Boolean TriangleNet.TrianglePool::Contains(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_Contains_mF26622EB6E1BA00FDF6E85DAEBF3E82DCD427F7F (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___item0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B3_0 = 0;
	{
		// int i = item.hash;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = ___item0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_hash_0();
		V_0 = L_1;
		// if (i < 0 || i > size)
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) < ((int32_t)0)))
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		int32_t L_4 = __this->get_size_1();
		G_B3_0 = ((((int32_t)L_3) > ((int32_t)L_4))? 1 : 0);
		goto IL_0018;
	}

IL_0017:
	{
		G_B3_0 = 1;
	}

IL_0018:
	{
		V_1 = (bool)G_B3_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0021;
		}
	}
	{
		// return false;
		V_2 = (bool)0;
		goto IL_0045;
	}

IL_0021:
	{
		// return pool[i / BLOCKSIZE][i % BLOCKSIZE].hash >= 0;
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_6 = __this->get_pool_3();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = ((int32_t)((int32_t)L_7/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_9 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		int32_t L_10 = V_0;
		NullCheck(L_9);
		int32_t L_11 = ((int32_t)((int32_t)L_10%(int32_t)((int32_t)1024)));
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		int32_t L_13 = L_12->get_hash_0();
		V_2 = (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0045;
	}

IL_0045:
	{
		// }
		bool L_14 = V_2;
		return L_14;
	}
}
// System.Void TriangleNet.TrianglePool::CopyTo(TriangleNet.Topology.Triangle[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrianglePool_CopyTo_m89840DFD7110C3268F11D3906FCB3B5FC9C59501 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* ___array0, int32_t ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		// var enumerator = GetEnumerator();
		RuntimeObject* L_0;
		L_0 = TrianglePool_GetEnumerator_m2E063796AFE2F0496ACC97898EFE8AE7533D354F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_001a;
	}

IL_000a:
	{
		// array[index] = enumerator.Current;
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_1 = ___array0;
		int32_t L_2 = ___index1;
		RuntimeObject* L_3 = V_0;
		NullCheck(L_3);
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_4;
		L_4 = InterfaceFuncInvoker0< Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_4);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 *)L_4);
		// index++;
		int32_t L_5 = ___index1;
		___index1 = ((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1));
	}

IL_001a:
	{
		// while (enumerator.MoveNext())
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		bool L_7;
		L_7 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_6);
		V_1 = L_7;
		bool L_8 = V_1;
		if (L_8)
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 TriangleNet.TrianglePool::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TrianglePool_get_Count_mB38723CAAF548A3A7A9BF5E1A95F1D406C5EFBD5 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return count - stack.Count; }
		int32_t L_0 = __this->get_count_2();
		Stack_1_t78D2C88556359AB44ACC004D6CF86F3EF729F4DF * L_1 = __this->get_stack_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_inline(L_1, /*hidden argument*/Stack_1_get_Count_mBD2AA27D9649E4962004754DF0276431FD92D264_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_2));
		goto IL_0016;
	}

IL_0016:
	{
		// get { return count - stack.Count; }
		int32_t L_3 = V_0;
		return L_3;
	}
}
// System.Boolean TriangleNet.TrianglePool::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_get_IsReadOnly_m50A640AFF955B9A6BC27BBC69E2722A482022E28 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// get { return true; }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return true; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Boolean TriangleNet.TrianglePool::Remove(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TrianglePool_Remove_mE8A10A1F680AB3C773D595BA67D6F8A8389BE8E9 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___item0, const RuntimeMethod* method)
{
	{
		// throw new NotImplementedException();
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_0 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var)));
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&TrianglePool_Remove_mE8A10A1F680AB3C773D595BA67D6F8A8389BE8E9_RuntimeMethod_var)));
	}
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_GetEnumerator_m2E063796AFE2F0496ACC97898EFE8AE7533D354F (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new Enumerator(this);
		Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * L_0 = (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 *)il2cpp_codegen_object_new(Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365_il2cpp_TypeInfo_var);
		Enumerator__ctor_mACAD0608F558ED14DB4D88B90C019482AF9E6647(L_0, __this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Collections.IEnumerator TriangleNet.TrianglePool::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrianglePool_System_Collections_IEnumerable_GetEnumerator_mFC7EE407584DD6DC60784B1BE02C873DB0B778C7 (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = TrianglePool_GetEnumerator_m2E063796AFE2F0496ACC97898EFE8AE7533D354F(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
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
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.TriangleNetMesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mA1B34113378C785B22C594F0C018143DDB0D620B (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(triangleNetMesh, new Random(RANDOM_SEED))
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_0 = ___triangleNetMesh0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_1, ((int32_t)110503), /*hidden argument*/NULL);
		TriangleSampler__ctor_mC6312DB8530B26A394501C61E7E6B21597D5C4B6(__this, L_0, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleSampler::.ctor(TriangleNet.TriangleNetMesh,System.Random)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler__ctor_mC6312DB8530B26A394501C61E7E6B21597D5C4B6 (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * ___random1, const RuntimeMethod* method)
{
	{
		// private int samples = 1;
		__this->set_samples_4(1);
		// private int triangleCount = 0;
		__this->set_triangleCount_5(0);
		// public TriangleSampler(TriangleNetMesh triangleNetMesh, Random random)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this._TriangleNetMesh = triangleNetMesh;
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_0 = ___triangleNetMesh0;
		__this->set__TriangleNetMesh_3(L_0);
		// this.random = random;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_1 = ___random1;
		__this->set_random_2(L_1);
		// }
		return;
	}
}
// System.Void TriangleNet.TriangleSampler::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriangleSampler_Update_m98412827463F298E67ABC8142F5215F714D1863F (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		// int count = _TriangleNetMesh.triangles.Count;
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_0 = __this->get__TriangleNetMesh_3();
		NullCheck(L_0);
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_1 = L_0->get_triangles_4();
		NullCheck(L_1);
		int32_t L_2;
		L_2 = TrianglePool_get_Count_mB38723CAAF548A3A7A9BF5E1A95F1D406C5EFBD5(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// if (triangleCount != count)
		int32_t L_3 = __this->get_triangleCount_5();
		int32_t L_4 = V_0;
		V_1 = (bool)((((int32_t)((((int32_t)L_3) == ((int32_t)L_4))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_005b;
		}
	}
	{
		// triangleCount = count;
		int32_t L_6 = V_0;
		__this->set_triangleCount_5(L_6);
		goto IL_003c;
	}

IL_002c:
	{
		// samples++;
		int32_t L_7 = __this->get_samples_4();
		__this->set_samples_4(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
	}

IL_003c:
	{
		// while (samplefactor * samples * samples * samples < count)
		int32_t L_8 = __this->get_samples_4();
		int32_t L_9 = __this->get_samples_4();
		int32_t L_10 = __this->get_samples_4();
		int32_t L_11 = V_0;
		V_2 = (bool)((((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)11), (int32_t)L_8)), (int32_t)L_9)), (int32_t)L_10))) < ((int32_t)L_11))? 1 : 0);
		bool L_12 = V_2;
		if (L_12)
		{
			goto IL_002c;
		}
	}
	{
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TriangleSampler::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_GetEnumerator_m22812615C04A78905FE0B84631712221FAECF557 (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tEDCD60608127291B2EDFC1EFA26B3ECB5A057DE8_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return _TriangleNetMesh.triangles.Sample(samples, random).GetEnumerator();
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_0 = __this->get__TriangleNetMesh_3();
		NullCheck(L_0);
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_1 = L_0->get_triangles_4();
		int32_t L_2 = __this->get_samples_4();
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_3 = __this->get_random_2();
		NullCheck(L_1);
		RuntimeObject* L_4;
		L_4 = TrianglePool_Sample_m312E1ADC86671C6B6FF23561182B9BE4E9F8E74B(L_1, L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle>::GetEnumerator() */, IEnumerable_1_tEDCD60608127291B2EDFC1EFA26B3ECB5A057DE8_il2cpp_TypeInfo_var, L_4);
		V_0 = L_5;
		goto IL_0025;
	}

IL_0025:
	{
		// }
		RuntimeObject* L_6 = V_0;
		return L_6;
	}
}
// System.Collections.IEnumerator TriangleNet.TriangleSampler::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TriangleSampler_System_Collections_IEnumerable_GetEnumerator_m7BB8F11B36AFC58F3F7DC14BAF77874274566095 (TriangleSampler_t7EDFAC8057C5D53713D912B4DFE3DF7E17BA86D4 * __this, const RuntimeMethod* method)
{
	RuntimeObject* V_0 = NULL;
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = TriangleSampler_GetEnumerator_m22812615C04A78905FE0B84631712221FAECF557(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
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
// UnityEngine.Mesh TriangleNet.UnityExtentions::GenerateUnityMesh(TriangleNet.TriangleNetMesh,TriangleNet.Meshing.QualityOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * UnityExtentions_GenerateUnityMesh_mAF023C57766410369B104AE31C6017AC6B2EDB14 (TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * ___triangleNetMesh0, QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A * ___options1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisVertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8_m340EBC8BD529AE566FDD1CDA053B4BDDD6C54D38_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tA1F35A298BD0BFBA657B7E5BF9E5B77CA32C77B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_1_tEDCD60608127291B2EDFC1EFA26B3ECB5A057DE8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_IndexOf_m8193C102AF5CE3B61691A045CDFCE90575A00265_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m7E49788FAD3DCE41BA9A799BC09A9579E3778121_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m1CC67123C61DF000870289CE37BE47F77C4B4355_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_0 = NULL;
	List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* V_3 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_4 = NULL;
	int32_t V_5 = 0;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	RuntimeObject* V_9 = NULL;
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * V_13 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// if (options != null)
		QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A * L_0 = ___options1;
		V_6 = (bool)((!(((RuntimeObject*)(QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A *)L_0) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
		bool L_1 = V_6;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		// triangleNetMesh.Refine(options);
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_2 = ___triangleNetMesh0;
		QualityOptions_tA2003286B415B6D5E8ED6BDB56943608B81C162A * L_3 = ___options1;
		NullCheck(L_2);
		TriangleNetMesh_Refine_m7B4F05C4DD29CFE09A2207498C4AD1CA3DF6EC29(L_2, L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0016:
	{
		// Mesh mesh = new Mesh();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_4 = (Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 *)il2cpp_codegen_object_new(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6_il2cpp_TypeInfo_var);
		Mesh__ctor_mA3D8570373462201AD7B8C9586A7F9412E49C2F6(L_4, /*hidden argument*/NULL);
		V_0 = L_4;
		// var triangleNetVerts = triangleNetMesh.Vertices.ToList();
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_5 = ___triangleNetMesh0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = TriangleNetMesh_get_Vertices_m722184BC80DEA4EA75466C8D38DBDFBCD4DDC515(L_5, /*hidden argument*/NULL);
		List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * L_7;
		L_7 = Enumerable_ToList_TisVertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8_m340EBC8BD529AE566FDD1CDA053B4BDDD6C54D38(L_6, /*hidden argument*/Enumerable_ToList_TisVertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8_m340EBC8BD529AE566FDD1CDA053B4BDDD6C54D38_RuntimeMethod_var);
		V_1 = L_7;
		// var triangles = triangleNetMesh.Triangles;
		TriangleNetMesh_t44DC554F72889ADBF55ACF43DFE9D020669526FF * L_8 = ___triangleNetMesh0;
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = TriangleNetMesh_get_Triangles_m5C5067131FE736A5E8F3BE3675245089FF16F4D6(L_8, /*hidden argument*/NULL);
		V_2 = L_9;
		// Vector3[] verts = new Vector3[triangleNetVerts.Count];
		List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = List_1_get_Count_m7E49788FAD3DCE41BA9A799BC09A9579E3778121_inline(L_10, /*hidden argument*/List_1_get_Count_m7E49788FAD3DCE41BA9A799BC09A9579E3778121_RuntimeMethod_var);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_12 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)L_11);
		V_3 = L_12;
		// int[] trisIndex = new int[triangles.Count * 3];
		RuntimeObject* L_13 = V_2;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<TriangleNet.Topology.Triangle>::get_Count() */, ICollection_1_tA1F35A298BD0BFBA657B7E5BF9E5B77CA32C77B2_il2cpp_TypeInfo_var, L_13);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_14, (int32_t)3)));
		V_4 = L_15;
		// for (int i = 0; i < verts.Length; i++)
		V_7 = 0;
		goto IL_006c;
	}

IL_004f:
	{
		// verts[i] = (Vector3) triangleNetVerts[i];
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_16 = V_3;
		int32_t L_17 = V_7;
		List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * L_18 = V_1;
		int32_t L_19 = V_7;
		NullCheck(L_18);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_20;
		L_20 = List_1_get_Item_m1CC67123C61DF000870289CE37BE47F77C4B4355_inline(L_18, L_19, /*hidden argument*/List_1_get_Item_m1CC67123C61DF000870289CE37BE47F77C4B4355_RuntimeMethod_var);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21;
		L_21 = Vertex_op_Explicit_m30070DE0805F300B5083CF13AFE9978F29DC5B2A(L_20, /*hidden argument*/NULL);
		NullCheck(L_16);
		(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_21);
		// for (int i = 0; i < verts.Length; i++)
		int32_t L_22 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_006c:
	{
		// for (int i = 0; i < verts.Length; i++)
		int32_t L_23 = V_7;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_24 = V_3;
		NullCheck(L_24);
		V_8 = (bool)((((int32_t)L_23) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_24)->max_length)))))? 1 : 0);
		bool L_25 = V_8;
		if (L_25)
		{
			goto IL_004f;
		}
	}
	{
		// int k = 0;
		V_5 = 0;
		// foreach (var triangle in triangles)
		RuntimeObject* L_26 = V_2;
		NullCheck(L_26);
		RuntimeObject* L_27;
		L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<!0> System.Collections.Generic.IEnumerable`1<TriangleNet.Topology.Triangle>::GetEnumerator() */, IEnumerable_1_tEDCD60608127291B2EDFC1EFA26B3ECB5A057DE8_il2cpp_TypeInfo_var, L_26);
		V_9 = L_27;
	}

IL_0085:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c7;
		}

IL_0087:
		{
			// foreach (var triangle in triangles)
			RuntimeObject* L_28 = V_9;
			NullCheck(L_28);
			Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_29;
			L_29 = InterfaceFuncInvoker0< Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * >::Invoke(0 /* !0 System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle>::get_Current() */, IEnumerator_1_t3AB5569011B65768A3A829BDBA7B5E2AB572EBC2_il2cpp_TypeInfo_var, L_28);
			V_10 = L_29;
			// for (int i = 2; i >= 0; i--)
			V_11 = 2;
			goto IL_00b8;
		}

IL_0096:
		{
			// trisIndex[k] = triangleNetVerts.IndexOf(triangle.GetVertex(i));
			Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_30 = V_4;
			int32_t L_31 = V_5;
			List_1_t990FCDA3F735FA77A8CB5AC957F86FE3CA49D067 * L_32 = V_1;
			Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_33 = V_10;
			int32_t L_34 = V_11;
			NullCheck(L_33);
			Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_35;
			L_35 = Triangle_GetVertex_mB78D128F58112AA47F729E7BE46A46305B0C6BBA(L_33, L_34, /*hidden argument*/NULL);
			NullCheck(L_32);
			int32_t L_36;
			L_36 = List_1_IndexOf_m8193C102AF5CE3B61691A045CDFCE90575A00265(L_32, L_35, /*hidden argument*/List_1_IndexOf_m8193C102AF5CE3B61691A045CDFCE90575A00265_RuntimeMethod_var);
			NullCheck(L_30);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(L_31), (int32_t)L_36);
			// k++;
			int32_t L_37 = V_5;
			V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_37, (int32_t)1));
			// for (int i = 2; i >= 0; i--)
			int32_t L_38 = V_11;
			V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_38, (int32_t)1));
		}

IL_00b8:
		{
			// for (int i = 2; i >= 0; i--)
			int32_t L_39 = V_11;
			V_12 = (bool)((((int32_t)((((int32_t)L_39) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			bool L_40 = V_12;
			if (L_40)
			{
				goto IL_0096;
			}
		}

IL_00c6:
		{
		}

IL_00c7:
		{
			// foreach (var triangle in triangles)
			RuntimeObject* L_41 = V_9;
			NullCheck(L_41);
			bool L_42;
			L_42 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_41);
			if (L_42)
			{
				goto IL_0087;
			}
		}

IL_00d0:
		{
			IL2CPP_LEAVE(0xDF, FINALLY_00d2);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d2;
	}

FINALLY_00d2:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_43 = V_9;
			if (!L_43)
			{
				goto IL_00de;
			}
		}

IL_00d6:
		{
			RuntimeObject* L_44 = V_9;
			NullCheck(L_44);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_44);
		}

IL_00de:
		{
			IL2CPP_END_FINALLY(210)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(210)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDF, IL_00df)
	}

IL_00df:
	{
		// mesh.vertices = verts;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_45 = V_0;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_46 = V_3;
		NullCheck(L_45);
		Mesh_set_vertices_m38F0908D0FDFE484BE19E94BE9D6176667469AAD(L_45, L_46, /*hidden argument*/NULL);
		// mesh.triangles = trisIndex;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_47 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_48 = V_4;
		NullCheck(L_47);
		Mesh_set_triangles_mF1D92E67523CD5FDC66A4378FC4AD8D4AD0D5FEC(L_47, L_48, /*hidden argument*/NULL);
		// mesh.RecalculateBounds();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_49 = V_0;
		NullCheck(L_49);
		Mesh_RecalculateBounds_mC39556595CFE3E4D8EFA777476ECD22B97FC2737(L_49, /*hidden argument*/NULL);
		// mesh.RecalculateNormals();
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_50 = V_0;
		NullCheck(L_50);
		Mesh_RecalculateNormals_mEBF9ED932D0B463E4EF3947D232CC8BEECAE1A4A(L_50, /*hidden argument*/NULL);
		// return mesh;
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_51 = V_0;
		V_13 = L_51;
		goto IL_0103;
	}

IL_0103:
	{
		// }
		Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * L_52 = V_13;
		return L_52;
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
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_m1A369A3F0B11C2AAC0D0D119419D7FC0E822D7DD (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		// : this(x, y, 0)
		float L_0 = ___x0;
		float L_1 = ___y1;
		Vertex__ctor_mFBFD09800EC434C90DC4745AFB0315C03010EE20(__this, L_0, L_1, 0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.Geometry.Vertex::.ctor(System.Single,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vertex__ctor_mFBFD09800EC434C90DC4745AFB0315C03010EE20 (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * __this, float ___x0, float ___y1, int32_t ___mark2, const RuntimeMethod* method)
{
	{
		// : base(x, y, mark)
		float L_0 = ___x0;
		float L_1 = ___y1;
		int32_t L_2 = ___mark2;
		Point__ctor_m41CDDB2ECFEA90308A5601F119735E187EA6DDAA(__this, L_0, L_1, L_2, /*hidden argument*/NULL);
		// this.type = VertexType.InputVertex;
		__this->set_type_5(0);
		// }
		return;
	}
}
// System.Int32 TriangleNet.Geometry.Vertex::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vertex_GetHashCode_mCDB6FDCF9F8005FFA4D4B47F3E854B560431A76E (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return this.hash;
		int32_t L_0 = __this->get_hash_4();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// UnityEngine.Vector3 TriangleNet.Geometry.Vertex::op_Explicit(TriangleNet.Geometry.Vertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vertex_op_Explicit_m30070DE0805F300B5083CF13AFE9978F29DC5B2A (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * ___p0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// return new Vector3(p.x, p.y);
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_0 = ___p0;
		NullCheck(L_0);
		float L_1 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_0)->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_2 = ___p0;
		NullCheck(L_2);
		float L_3 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_2)->get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		// }
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
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
// System.Void TriangleNet.Tools.VertexSorter::.ctor(TriangleNet.Geometry.Vertex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter__ctor_mB3E082AA844B8F0D3A39E46DB6794150ADB42CCD (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ___points0, int32_t ___seed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// VertexSorter(Vertex[] points, int seed)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.points = points;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_0 = ___points0;
		__this->set_points_1(L_0);
		// this.rand = new Random(seed);
		int32_t L_1 = ___seed1;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_2 = (Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 *)il2cpp_codegen_object_new(Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118_il2cpp_TypeInfo_var);
		Random__ctor_m4372E46E0155A2BA0FA18FB6C0244C6AF650FBB4(L_2, L_1, /*hidden argument*/NULL);
		__this->set_rand_0(L_2);
		// }
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::Sort(TriangleNet.Geometry.Vertex[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Sort_m34C6B8203A825DBC2AAAED62DA03091514FB778C (VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ___array0, int32_t ___seed1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * V_0 = NULL;
	{
		// var qs = new VertexSorter(array, seed);
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_0 = ___array0;
		int32_t L_1 = ___seed1;
		VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * L_2 = (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D *)il2cpp_codegen_object_new(VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D_il2cpp_TypeInfo_var);
		VertexSorter__ctor_mB3E082AA844B8F0D3A39E46DB6794150ADB42CCD(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// qs.QuickSort(0, array.Length - 1);
		VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * L_3 = V_0;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_4 = ___array0;
		NullCheck(L_4);
		NullCheck(L_3);
		VertexSorter_QuickSort_mC275D3DCF8FF386D9E352DA4A21A34A12943685B(L_3, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))), (int32_t)1)), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::Alternate(TriangleNet.Geometry.Vertex[],System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_Alternate_mFCBA9C0B507629DB99D6E174EAE47E13D87513B5 (VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* ___array0, int32_t ___length1, int32_t ___seed2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * V_0 = NULL;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// var qs = new VertexSorter(array, seed);
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_0 = ___array0;
		int32_t L_1 = ___seed2;
		VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * L_2 = (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D *)il2cpp_codegen_object_new(VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D_il2cpp_TypeInfo_var);
		VertexSorter__ctor_mB3E082AA844B8F0D3A39E46DB6794150ADB42CCD(L_2, L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// int divider = length >> 1;
		int32_t L_3 = ___length1;
		V_1 = ((int32_t)((int32_t)L_3>>(int32_t)1));
		// if (length - divider >= 2)
		int32_t L_4 = ___length1;
		int32_t L_5 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)L_5))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0041;
		}
	}
	{
		// if (divider >= 2)
		int32_t L_7 = V_1;
		V_3 = (bool)((((int32_t)((((int32_t)L_7) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0034;
		}
	}
	{
		// qs.AlternateAxes(0, divider - 1, 1);
		VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		VertexSorter_AlternateAxes_m6C6CC82E296BD0DA6A0BFA34A81FECA1D238E900(L_9, 0, ((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// qs.AlternateAxes(divider, length - 1, 1);
		VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * L_11 = V_0;
		int32_t L_12 = V_1;
		int32_t L_13 = ___length1;
		NullCheck(L_11);
		VertexSorter_AlternateAxes_m6C6CC82E296BD0DA6A0BFA34A81FECA1D238E900(L_11, L_12, ((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)), 1, /*hidden argument*/NULL);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::QuickSort(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_QuickSort_mC275D3DCF8FF386D9E352DA4A21A34A12943685B (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_6 = NULL;
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* V_7 = NULL;
	bool V_8 = false;
	int32_t V_9 = 0;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_10 = NULL;
	int32_t V_11 = 0;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B9_0 = 0;
	int32_t G_B11_0 = 0;
	int32_t G_B13_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B28_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B38_0 = 0;
	{
		// int oleft = left;
		int32_t L_0 = ___left0;
		V_0 = L_0;
		// int oright = right;
		int32_t L_1 = ___right1;
		V_1 = L_1;
		// int arraysize = right - left + 1;
		int32_t L_2 = ___right1;
		int32_t L_3 = ___left0;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)L_3)), (int32_t)1));
		// var array = this.points;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_4 = __this->get_points_1();
		V_7 = L_4;
		// if (arraysize < 32)
		int32_t L_5 = V_2;
		V_8 = (bool)((((int32_t)L_5) < ((int32_t)((int32_t)32)))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_00c3;
		}
	}
	{
		// for (int i = left + 1; i <= right; i++)
		int32_t L_7 = ___left0;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
		goto IL_00ad;
	}

IL_002c:
	{
		// var a = array[i];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_8 = V_7;
		int32_t L_9 = V_9;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_10 = L_11;
		// int j = i - 1;
		int32_t L_12 = V_9;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1));
		goto IL_0050;
	}

IL_003c:
	{
		// array[j + 1] = array[j];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_13 = V_7;
		int32_t L_14 = V_11;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_15 = V_7;
		int32_t L_16 = V_11;
		NullCheck(L_15);
		int32_t L_17 = L_16;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_18);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1))), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_18);
		// j--;
		int32_t L_19 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_19, (int32_t)1));
	}

IL_0050:
	{
		// while (j >= left && (array[j].x > a.x || (array[j].x == a.x && array[j].y > a.y)))
		int32_t L_20 = V_11;
		int32_t L_21 = ___left0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_0096;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_22 = V_7;
		int32_t L_23 = V_11;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		float L_26 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_25)->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_27 = V_10;
		NullCheck(L_27);
		float L_28 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_27)->get_x_2();
		if ((((float)L_26) > ((float)L_28)))
		{
			goto IL_0093;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_29 = V_7;
		int32_t L_30 = V_11;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_32 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		NullCheck(L_32);
		float L_33 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_32)->get_x_2();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_34 = V_10;
		NullCheck(L_34);
		float L_35 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_34)->get_x_2();
		if ((!(((float)L_33) == ((float)L_35))))
		{
			goto IL_0090;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_36 = V_7;
		int32_t L_37 = V_11;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		float L_40 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_39)->get_y_3();
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_41 = V_10;
		NullCheck(L_41);
		float L_42 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_41)->get_y_3();
		G_B9_0 = ((((float)L_40) > ((float)L_42))? 1 : 0);
		goto IL_0091;
	}

IL_0090:
	{
		G_B9_0 = 0;
	}

IL_0091:
	{
		G_B11_0 = G_B9_0;
		goto IL_0094;
	}

IL_0093:
	{
		G_B11_0 = 1;
	}

IL_0094:
	{
		G_B13_0 = G_B11_0;
		goto IL_0097;
	}

IL_0096:
	{
		G_B13_0 = 0;
	}

IL_0097:
	{
		V_12 = (bool)G_B13_0;
		bool L_43 = V_12;
		if (L_43)
		{
			goto IL_003c;
		}
	}
	{
		// array[j + 1] = a;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_44 = V_7;
		int32_t L_45 = V_11;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_46 = V_10;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, L_46);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add((int32_t)L_45, (int32_t)1))), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_46);
		// for (int i = left + 1; i <= right; i++)
		int32_t L_47 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)L_47, (int32_t)1));
	}

IL_00ad:
	{
		// for (int i = left + 1; i <= right; i++)
		int32_t L_48 = V_9;
		int32_t L_49 = ___right1;
		V_13 = (bool)((((int32_t)((((int32_t)L_48) > ((int32_t)L_49))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_50 = V_13;
		if (L_50)
		{
			goto IL_002c;
		}
	}
	{
		// return;
		goto IL_01d5;
	}

IL_00c3:
	{
		// pivot = rand.Next(left, right);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_51 = __this->get_rand_0();
		int32_t L_52 = ___left0;
		int32_t L_53 = ___right1;
		NullCheck(L_51);
		int32_t L_54;
		L_54 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_51, L_52, L_53);
		V_3 = L_54;
		// pivotx = array[pivot].x;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_55 = V_7;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		float L_59 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_58)->get_x_2();
		V_4 = L_59;
		// pivoty = array[pivot].y;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_60 = V_7;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		float L_64 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_63)->get_y_3();
		V_5 = L_64;
		// left--;
		int32_t L_65 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		// right++;
		int32_t L_66 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		goto IL_019a;
	}

IL_00f6:
	{
	}

IL_00f7:
	{
		// left++;
		int32_t L_67 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		// while ((left <= right) && ((array[left].x < pivotx) ||
		//     ((array[left].x == pivotx) && (array[left].y < pivoty))));
		int32_t L_68 = ___left0;
		int32_t L_69 = ___right1;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_0131;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_70 = V_7;
		int32_t L_71 = ___left0;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		float L_74 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_73)->get_x_2();
		float L_75 = V_4;
		if ((((float)L_74) < ((float)L_75)))
		{
			goto IL_012e;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_76 = V_7;
		int32_t L_77 = ___left0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		float L_80 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_79)->get_x_2();
		float L_81 = V_4;
		if ((!(((float)L_80) == ((float)L_81))))
		{
			goto IL_012b;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_82 = V_7;
		int32_t L_83 = ___left0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		float L_86 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_85)->get_y_3();
		float L_87 = V_5;
		G_B24_0 = ((((float)L_86) < ((float)L_87))? 1 : 0);
		goto IL_012c;
	}

IL_012b:
	{
		G_B24_0 = 0;
	}

IL_012c:
	{
		G_B26_0 = G_B24_0;
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		G_B28_0 = G_B26_0;
		goto IL_0132;
	}

IL_0131:
	{
		G_B28_0 = 0;
	}

IL_0132:
	{
		V_14 = (bool)G_B28_0;
		bool L_88 = V_14;
		if (L_88)
		{
			goto IL_00f7;
		}
	}

IL_0138:
	{
		// right--;
		int32_t L_89 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1));
		// while ((left <= right) && ((array[right].x > pivotx) ||
		//     ((array[right].x == pivotx) && (array[right].y > pivoty))));
		int32_t L_90 = ___left0;
		int32_t L_91 = ___right1;
		if ((((int32_t)L_90) > ((int32_t)L_91)))
		{
			goto IL_0172;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_92 = V_7;
		int32_t L_93 = ___right1;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		float L_96 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_95)->get_x_2();
		float L_97 = V_4;
		if ((((float)L_96) > ((float)L_97)))
		{
			goto IL_016f;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_98 = V_7;
		int32_t L_99 = ___right1;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		float L_102 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_101)->get_x_2();
		float L_103 = V_4;
		if ((!(((float)L_102) == ((float)L_103))))
		{
			goto IL_016c;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_104 = V_7;
		int32_t L_105 = ___right1;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		float L_108 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_107)->get_y_3();
		float L_109 = V_5;
		G_B34_0 = ((((float)L_108) > ((float)L_109))? 1 : 0);
		goto IL_016d;
	}

IL_016c:
	{
		G_B34_0 = 0;
	}

IL_016d:
	{
		G_B36_0 = G_B34_0;
		goto IL_0170;
	}

IL_016f:
	{
		G_B36_0 = 1;
	}

IL_0170:
	{
		G_B38_0 = G_B36_0;
		goto IL_0173;
	}

IL_0172:
	{
		G_B38_0 = 0;
	}

IL_0173:
	{
		V_15 = (bool)G_B38_0;
		bool L_110 = V_15;
		if (L_110)
		{
			goto IL_0138;
		}
	}
	{
		// if (left < right)
		int32_t L_111 = ___left0;
		int32_t L_112 = ___right1;
		V_16 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_16;
		if (!L_113)
		{
			goto IL_0199;
		}
	}
	{
		// temp = array[left];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_114 = V_7;
		int32_t L_115 = ___left0;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_6 = L_117;
		// array[left] = array[right];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_118 = V_7;
		int32_t L_119 = ___left0;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_120 = V_7;
		int32_t L_121 = ___right1;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_123);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_123);
		// array[right] = temp;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_124 = V_7;
		int32_t L_125 = ___right1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_126 = V_6;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_126);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_126);
	}

IL_0199:
	{
	}

IL_019a:
	{
		// while (left < right)
		int32_t L_127 = ___left0;
		int32_t L_128 = ___right1;
		V_17 = (bool)((((int32_t)L_127) < ((int32_t)L_128))? 1 : 0);
		bool L_129 = V_17;
		if (L_129)
		{
			goto IL_00f6;
		}
	}
	{
		// if (left > oleft)
		int32_t L_130 = ___left0;
		int32_t L_131 = V_0;
		V_18 = (bool)((((int32_t)L_130) > ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_18;
		if (!L_132)
		{
			goto IL_01bc;
		}
	}
	{
		// QuickSort(oleft, left);
		int32_t L_133 = V_0;
		int32_t L_134 = ___left0;
		VertexSorter_QuickSort_mC275D3DCF8FF386D9E352DA4A21A34A12943685B(__this, L_133, L_134, /*hidden argument*/NULL);
	}

IL_01bc:
	{
		// if (oright > right + 1)
		int32_t L_135 = V_1;
		int32_t L_136 = ___right1;
		V_19 = (bool)((((int32_t)L_135) > ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_136, (int32_t)1))))? 1 : 0);
		bool L_137 = V_19;
		if (!L_137)
		{
			goto IL_01d5;
		}
	}
	{
		// QuickSort(right + 1, oright);
		int32_t L_138 = ___right1;
		int32_t L_139 = V_1;
		VertexSorter_QuickSort_mC275D3DCF8FF386D9E352DA4A21A34A12943685B(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1)), L_139, /*hidden argument*/NULL);
	}

IL_01d5:
	{
		// }
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::AlternateAxes(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_AlternateAxes_m6C6CC82E296BD0DA6A0BFA34A81FECA1D238E900 (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, int32_t ___axis2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	{
		// int size = right - left + 1;
		int32_t L_0 = ___right1;
		int32_t L_1 = ___left0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		// int divider = size >> 1;
		int32_t L_2 = V_0;
		V_1 = ((int32_t)((int32_t)L_2>>(int32_t)1));
		// if (size <= 3)
		int32_t L_3 = V_0;
		V_2 = (bool)((((int32_t)((((int32_t)L_3) > ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_001b;
		}
	}
	{
		// axis = 0;
		___axis2 = 0;
	}

IL_001b:
	{
		// if (axis == 0)
		int32_t L_5 = ___axis2;
		V_3 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0033;
		}
	}
	{
		// VertexMedianX(left, right, left + divider);
		int32_t L_7 = ___left0;
		int32_t L_8 = ___right1;
		int32_t L_9 = ___left0;
		int32_t L_10 = V_1;
		VertexSorter_VertexMedianX_m58A24FE379AF8CFC8679BB7FCCF4C02E5D86A2B6(__this, L_7, L_8, ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)L_10)), /*hidden argument*/NULL);
		goto IL_0041;
	}

IL_0033:
	{
		// VertexMedianY(left, right, left + divider);
		int32_t L_11 = ___left0;
		int32_t L_12 = ___right1;
		int32_t L_13 = ___left0;
		int32_t L_14 = V_1;
		VertexSorter_VertexMedianY_m95E7DCE7947D24BAA19176542D2A43EF627045C8(__this, L_11, L_12, ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)L_14)), /*hidden argument*/NULL);
	}

IL_0041:
	{
		// if (size - divider >= 2)
		int32_t L_15 = V_0;
		int32_t L_16 = V_1;
		V_4 = (bool)((((int32_t)((((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_15, (int32_t)L_16))) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_4;
		if (!L_17)
		{
			goto IL_007f;
		}
	}
	{
		// if (divider >= 2)
		int32_t L_18 = V_1;
		V_5 = (bool)((((int32_t)((((int32_t)L_18) < ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_0070;
		}
	}
	{
		// AlternateAxes(left, left + divider - 1, 1 - axis);
		int32_t L_20 = ___left0;
		int32_t L_21 = ___left0;
		int32_t L_22 = V_1;
		int32_t L_23 = ___axis2;
		VertexSorter_AlternateAxes_m6C6CC82E296BD0DA6A0BFA34A81FECA1D238E900(__this, L_20, ((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)L_22)), (int32_t)1)), ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_23)), /*hidden argument*/NULL);
	}

IL_0070:
	{
		// AlternateAxes(left + divider, right, 1 - axis);
		int32_t L_24 = ___left0;
		int32_t L_25 = V_1;
		int32_t L_26 = ___right1;
		int32_t L_27 = ___axis2;
		VertexSorter_AlternateAxes_m6C6CC82E296BD0DA6A0BFA34A81FECA1D238E900(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)L_25)), L_26, ((int32_t)il2cpp_codegen_subtract((int32_t)1, (int32_t)L_27)), /*hidden argument*/NULL);
	}

IL_007f:
	{
		// }
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianX(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianX_m58A24FE379AF8CFC8679BB7FCCF4C02E5D86A2B6 (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_6 = NULL;
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B31_0 = 0;
	{
		// int arraysize = right - left + 1;
		int32_t L_0 = ___right1;
		int32_t L_1 = ___left0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		// int oleft = left, oright = right;
		int32_t L_2 = ___left0;
		V_1 = L_2;
		// int oleft = left, oright = right;
		int32_t L_3 = ___right1;
		V_2 = L_3;
		// var array = this.points;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_4 = __this->get_points_1();
		V_7 = L_4;
		// if (arraysize == 2)
		int32_t L_5 = V_0;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		// if ((array[left].x > array[right].x) ||
		//     ((array[left].x == array[right].x) &&
		//      (array[left].y > array[right].y)))
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_7 = V_7;
		int32_t L_8 = ___left0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		float L_11 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_10)->get_x_2();
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_12 = V_7;
		int32_t L_13 = ___right1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		float L_16 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_15)->get_x_2();
		if ((((float)L_11) > ((float)L_16)))
		{
			goto IL_005f;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_17 = V_7;
		int32_t L_18 = ___left0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		float L_21 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_20)->get_x_2();
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_22 = V_7;
		int32_t L_23 = ___right1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		float L_26 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_25)->get_x_2();
		if ((!(((float)L_21) == ((float)L_26))))
		{
			goto IL_005c;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_27 = V_7;
		int32_t L_28 = ___left0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		float L_31 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_30)->get_y_3();
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_32 = V_7;
		int32_t L_33 = ___right1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		float L_36 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_35)->get_y_3();
		G_B5_0 = ((((float)L_31) > ((float)L_36))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		G_B7_0 = G_B5_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 1;
	}

IL_0060:
	{
		V_9 = (bool)G_B7_0;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_007c;
		}
	}
	{
		// temp = array[right];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_38 = V_7;
		int32_t L_39 = ___right1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = L_41;
		// array[right] = array[left];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_42 = V_7;
		int32_t L_43 = ___right1;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_44 = V_7;
		int32_t L_45 = ___left0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_47);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_47);
		// array[left] = temp;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_48 = V_7;
		int32_t L_49 = ___left0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_50 = V_6;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_50);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_50);
	}

IL_007c:
	{
		// return;
		goto IL_0197;
	}

IL_0081:
	{
		// pivot = rand.Next(left, right);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_51 = __this->get_rand_0();
		int32_t L_52 = ___left0;
		int32_t L_53 = ___right1;
		NullCheck(L_51);
		int32_t L_54;
		L_54 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_51, L_52, L_53);
		V_3 = L_54;
		// pivot1 = array[pivot].x;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_55 = V_7;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		float L_59 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_58)->get_x_2();
		V_4 = L_59;
		// pivot2 = array[pivot].y;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_60 = V_7;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		float L_64 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_63)->get_y_3();
		V_5 = L_64;
		// left--;
		int32_t L_65 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		// right++;
		int32_t L_66 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		goto IL_0158;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		// left++;
		int32_t L_67 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		// while ((left <= right) && ((array[left].x < pivot1) ||
		//     ((array[left].x == pivot1) && (array[left].y < pivot2))));
		int32_t L_68 = ___left0;
		int32_t L_69 = ___right1;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_00ef;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_70 = V_7;
		int32_t L_71 = ___left0;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		float L_74 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_73)->get_x_2();
		float L_75 = V_4;
		if ((((float)L_74) < ((float)L_75)))
		{
			goto IL_00ec;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_76 = V_7;
		int32_t L_77 = ___left0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		float L_80 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_79)->get_x_2();
		float L_81 = V_4;
		if ((!(((float)L_80) == ((float)L_81))))
		{
			goto IL_00e9;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_82 = V_7;
		int32_t L_83 = ___left0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		float L_86 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_85)->get_y_3();
		float L_87 = V_5;
		G_B17_0 = ((((float)L_86) < ((float)L_87))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B17_0 = 0;
	}

IL_00ea:
	{
		G_B19_0 = G_B17_0;
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B19_0 = 1;
	}

IL_00ed:
	{
		G_B21_0 = G_B19_0;
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B21_0 = 0;
	}

IL_00f0:
	{
		V_10 = (bool)G_B21_0;
		bool L_88 = V_10;
		if (L_88)
		{
			goto IL_00b5;
		}
	}

IL_00f6:
	{
		// right--;
		int32_t L_89 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1));
		// while ((left <= right) && ((array[right].x > pivot1) ||
		//     ((array[right].x == pivot1) && (array[right].y > pivot2))));
		int32_t L_90 = ___left0;
		int32_t L_91 = ___right1;
		if ((((int32_t)L_90) > ((int32_t)L_91)))
		{
			goto IL_0130;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_92 = V_7;
		int32_t L_93 = ___right1;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		float L_96 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_95)->get_x_2();
		float L_97 = V_4;
		if ((((float)L_96) > ((float)L_97)))
		{
			goto IL_012d;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_98 = V_7;
		int32_t L_99 = ___right1;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		float L_102 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_101)->get_x_2();
		float L_103 = V_4;
		if ((!(((float)L_102) == ((float)L_103))))
		{
			goto IL_012a;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_104 = V_7;
		int32_t L_105 = ___right1;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		float L_108 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_107)->get_y_3();
		float L_109 = V_5;
		G_B27_0 = ((((float)L_108) > ((float)L_109))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B27_0 = 0;
	}

IL_012b:
	{
		G_B29_0 = G_B27_0;
		goto IL_012e;
	}

IL_012d:
	{
		G_B29_0 = 1;
	}

IL_012e:
	{
		G_B31_0 = G_B29_0;
		goto IL_0131;
	}

IL_0130:
	{
		G_B31_0 = 0;
	}

IL_0131:
	{
		V_11 = (bool)G_B31_0;
		bool L_110 = V_11;
		if (L_110)
		{
			goto IL_00f6;
		}
	}
	{
		// if (left < right)
		int32_t L_111 = ___left0;
		int32_t L_112 = ___right1;
		V_12 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_12;
		if (!L_113)
		{
			goto IL_0157;
		}
	}
	{
		// temp = array[left];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_114 = V_7;
		int32_t L_115 = ___left0;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_6 = L_117;
		// array[left] = array[right];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_118 = V_7;
		int32_t L_119 = ___left0;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_120 = V_7;
		int32_t L_121 = ___right1;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_123);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_123);
		// array[right] = temp;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_124 = V_7;
		int32_t L_125 = ___right1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_126 = V_6;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_126);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_126);
	}

IL_0157:
	{
	}

IL_0158:
	{
		// while (left < right)
		int32_t L_127 = ___left0;
		int32_t L_128 = ___right1;
		V_13 = (bool)((((int32_t)L_127) < ((int32_t)L_128))? 1 : 0);
		bool L_129 = V_13;
		if (L_129)
		{
			goto IL_00b4;
		}
	}
	{
		// if (left > median)
		int32_t L_130 = ___left0;
		int32_t L_131 = ___median2;
		V_14 = (bool)((((int32_t)L_130) > ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_14;
		if (!L_132)
		{
			goto IL_017d;
		}
	}
	{
		// VertexMedianX(oleft, left - 1, median);
		int32_t L_133 = V_1;
		int32_t L_134 = ___left0;
		int32_t L_135 = ___median2;
		VertexSorter_VertexMedianX_m58A24FE379AF8CFC8679BB7FCCF4C02E5D86A2B6(__this, L_133, ((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)1)), L_135, /*hidden argument*/NULL);
	}

IL_017d:
	{
		// if (right < median - 1)
		int32_t L_136 = ___right1;
		int32_t L_137 = ___median2;
		V_15 = (bool)((((int32_t)L_136) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)1))))? 1 : 0);
		bool L_138 = V_15;
		if (!L_138)
		{
			goto IL_0197;
		}
	}
	{
		// VertexMedianX(right + 1, oright, median);
		int32_t L_139 = ___right1;
		int32_t L_140 = V_2;
		int32_t L_141 = ___median2;
		VertexSorter_VertexMedianX_m58A24FE379AF8CFC8679BB7FCCF4C02E5D86A2B6(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1)), L_140, L_141, /*hidden argument*/NULL);
	}

IL_0197:
	{
		// }
		return;
	}
}
// System.Void TriangleNet.Tools.VertexSorter::VertexMedianY(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexSorter_VertexMedianY_m95E7DCE7947D24BAA19176542D2A43EF627045C8 (VertexSorter_t8A243AE44F96EFD35A09257DA3811BCD6740E87D * __this, int32_t ___left0, int32_t ___right1, int32_t ___median2, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * V_6 = NULL;
	VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	bool V_15 = false;
	int32_t G_B5_0 = 0;
	int32_t G_B7_0 = 0;
	int32_t G_B17_0 = 0;
	int32_t G_B19_0 = 0;
	int32_t G_B21_0 = 0;
	int32_t G_B27_0 = 0;
	int32_t G_B29_0 = 0;
	int32_t G_B31_0 = 0;
	{
		// int arraysize = right - left + 1;
		int32_t L_0 = ___right1;
		int32_t L_1 = ___left0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1)), (int32_t)1));
		// int oleft = left, oright = right;
		int32_t L_2 = ___left0;
		V_1 = L_2;
		// int oleft = left, oright = right;
		int32_t L_3 = ___right1;
		V_2 = L_3;
		// var array = this.points;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_4 = __this->get_points_1();
		V_7 = L_4;
		// if (arraysize == 2)
		int32_t L_5 = V_0;
		V_8 = (bool)((((int32_t)L_5) == ((int32_t)2))? 1 : 0);
		bool L_6 = V_8;
		if (!L_6)
		{
			goto IL_0081;
		}
	}
	{
		// if ((array[left].y > array[right].y) ||
		//     ((array[left].y == array[right].y) &&
		//      (array[left].x > array[right].x)))
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_7 = V_7;
		int32_t L_8 = ___left0;
		NullCheck(L_7);
		int32_t L_9 = L_8;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_10 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		float L_11 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_10)->get_y_3();
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_12 = V_7;
		int32_t L_13 = ___right1;
		NullCheck(L_12);
		int32_t L_14 = L_13;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_15 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		float L_16 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_15)->get_y_3();
		if ((((float)L_11) > ((float)L_16)))
		{
			goto IL_005f;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_17 = V_7;
		int32_t L_18 = ___left0;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		float L_21 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_20)->get_y_3();
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_22 = V_7;
		int32_t L_23 = ___right1;
		NullCheck(L_22);
		int32_t L_24 = L_23;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_25 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		float L_26 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_25)->get_y_3();
		if ((!(((float)L_21) == ((float)L_26))))
		{
			goto IL_005c;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_27 = V_7;
		int32_t L_28 = ___left0;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		float L_31 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_30)->get_x_2();
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_32 = V_7;
		int32_t L_33 = ___right1;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		float L_36 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_35)->get_x_2();
		G_B5_0 = ((((float)L_31) > ((float)L_36))? 1 : 0);
		goto IL_005d;
	}

IL_005c:
	{
		G_B5_0 = 0;
	}

IL_005d:
	{
		G_B7_0 = G_B5_0;
		goto IL_0060;
	}

IL_005f:
	{
		G_B7_0 = 1;
	}

IL_0060:
	{
		V_9 = (bool)G_B7_0;
		bool L_37 = V_9;
		if (!L_37)
		{
			goto IL_007c;
		}
	}
	{
		// temp = array[right];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_38 = V_7;
		int32_t L_39 = ___right1;
		NullCheck(L_38);
		int32_t L_40 = L_39;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_41 = (L_38)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		V_6 = L_41;
		// array[right] = array[left];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_42 = V_7;
		int32_t L_43 = ___right1;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_44 = V_7;
		int32_t L_45 = ___left0;
		NullCheck(L_44);
		int32_t L_46 = L_45;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_47 = (L_44)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, L_47);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_47);
		// array[left] = temp;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_48 = V_7;
		int32_t L_49 = ___left0;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_50 = V_6;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, L_50);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(L_49), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_50);
	}

IL_007c:
	{
		// return;
		goto IL_0197;
	}

IL_0081:
	{
		// pivot = rand.Next(left, right);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_51 = __this->get_rand_0();
		int32_t L_52 = ___left0;
		int32_t L_53 = ___right1;
		NullCheck(L_51);
		int32_t L_54;
		L_54 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_51, L_52, L_53);
		V_3 = L_54;
		// pivot1 = array[pivot].y;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_55 = V_7;
		int32_t L_56 = V_3;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_58 = (L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		float L_59 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_58)->get_y_3();
		V_4 = L_59;
		// pivot2 = array[pivot].x;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_60 = V_7;
		int32_t L_61 = V_3;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_63);
		float L_64 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_63)->get_x_2();
		V_5 = L_64;
		// left--;
		int32_t L_65 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		// right++;
		int32_t L_66 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_add((int32_t)L_66, (int32_t)1));
		goto IL_0158;
	}

IL_00b4:
	{
	}

IL_00b5:
	{
		// left++;
		int32_t L_67 = ___left0;
		___left0 = ((int32_t)il2cpp_codegen_add((int32_t)L_67, (int32_t)1));
		// while ((left <= right) && ((array[left].y < pivot1) ||
		//     ((array[left].y == pivot1) && (array[left].x < pivot2))));
		int32_t L_68 = ___left0;
		int32_t L_69 = ___right1;
		if ((((int32_t)L_68) > ((int32_t)L_69)))
		{
			goto IL_00ef;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_70 = V_7;
		int32_t L_71 = ___left0;
		NullCheck(L_70);
		int32_t L_72 = L_71;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_73 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		NullCheck(L_73);
		float L_74 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_73)->get_y_3();
		float L_75 = V_4;
		if ((((float)L_74) < ((float)L_75)))
		{
			goto IL_00ec;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_76 = V_7;
		int32_t L_77 = ___left0;
		NullCheck(L_76);
		int32_t L_78 = L_77;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_79 = (L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		NullCheck(L_79);
		float L_80 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_79)->get_y_3();
		float L_81 = V_4;
		if ((!(((float)L_80) == ((float)L_81))))
		{
			goto IL_00e9;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_82 = V_7;
		int32_t L_83 = ___left0;
		NullCheck(L_82);
		int32_t L_84 = L_83;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_85 = (L_82)->GetAt(static_cast<il2cpp_array_size_t>(L_84));
		NullCheck(L_85);
		float L_86 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_85)->get_x_2();
		float L_87 = V_5;
		G_B17_0 = ((((float)L_86) < ((float)L_87))? 1 : 0);
		goto IL_00ea;
	}

IL_00e9:
	{
		G_B17_0 = 0;
	}

IL_00ea:
	{
		G_B19_0 = G_B17_0;
		goto IL_00ed;
	}

IL_00ec:
	{
		G_B19_0 = 1;
	}

IL_00ed:
	{
		G_B21_0 = G_B19_0;
		goto IL_00f0;
	}

IL_00ef:
	{
		G_B21_0 = 0;
	}

IL_00f0:
	{
		V_10 = (bool)G_B21_0;
		bool L_88 = V_10;
		if (L_88)
		{
			goto IL_00b5;
		}
	}

IL_00f6:
	{
		// right--;
		int32_t L_89 = ___right1;
		___right1 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_89, (int32_t)1));
		// while ((left <= right) && ((array[right].y > pivot1) ||
		//     ((array[right].y == pivot1) && (array[right].x > pivot2))));
		int32_t L_90 = ___left0;
		int32_t L_91 = ___right1;
		if ((((int32_t)L_90) > ((int32_t)L_91)))
		{
			goto IL_0130;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_92 = V_7;
		int32_t L_93 = ___right1;
		NullCheck(L_92);
		int32_t L_94 = L_93;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_95 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_94));
		NullCheck(L_95);
		float L_96 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_95)->get_y_3();
		float L_97 = V_4;
		if ((((float)L_96) > ((float)L_97)))
		{
			goto IL_012d;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_98 = V_7;
		int32_t L_99 = ___right1;
		NullCheck(L_98);
		int32_t L_100 = L_99;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_101 = (L_98)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		NullCheck(L_101);
		float L_102 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_101)->get_y_3();
		float L_103 = V_4;
		if ((!(((float)L_102) == ((float)L_103))))
		{
			goto IL_012a;
		}
	}
	{
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_104 = V_7;
		int32_t L_105 = ___right1;
		NullCheck(L_104);
		int32_t L_106 = L_105;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_107 = (L_104)->GetAt(static_cast<il2cpp_array_size_t>(L_106));
		NullCheck(L_107);
		float L_108 = ((Point_tDD650EBCC38670D9CAAB706728FA3606A1F43E39 *)L_107)->get_x_2();
		float L_109 = V_5;
		G_B27_0 = ((((float)L_108) > ((float)L_109))? 1 : 0);
		goto IL_012b;
	}

IL_012a:
	{
		G_B27_0 = 0;
	}

IL_012b:
	{
		G_B29_0 = G_B27_0;
		goto IL_012e;
	}

IL_012d:
	{
		G_B29_0 = 1;
	}

IL_012e:
	{
		G_B31_0 = G_B29_0;
		goto IL_0131;
	}

IL_0130:
	{
		G_B31_0 = 0;
	}

IL_0131:
	{
		V_11 = (bool)G_B31_0;
		bool L_110 = V_11;
		if (L_110)
		{
			goto IL_00f6;
		}
	}
	{
		// if (left < right)
		int32_t L_111 = ___left0;
		int32_t L_112 = ___right1;
		V_12 = (bool)((((int32_t)L_111) < ((int32_t)L_112))? 1 : 0);
		bool L_113 = V_12;
		if (!L_113)
		{
			goto IL_0157;
		}
	}
	{
		// temp = array[left];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_114 = V_7;
		int32_t L_115 = ___left0;
		NullCheck(L_114);
		int32_t L_116 = L_115;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_117 = (L_114)->GetAt(static_cast<il2cpp_array_size_t>(L_116));
		V_6 = L_117;
		// array[left] = array[right];
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_118 = V_7;
		int32_t L_119 = ___left0;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_120 = V_7;
		int32_t L_121 = ___right1;
		NullCheck(L_120);
		int32_t L_122 = L_121;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_123 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_122));
		NullCheck(L_118);
		ArrayElementTypeCheck (L_118, L_123);
		(L_118)->SetAt(static_cast<il2cpp_array_size_t>(L_119), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_123);
		// array[right] = temp;
		VertexU5BU5D_tD7CC5381F992E9739670E97DB9CE677903A9EAB0* L_124 = V_7;
		int32_t L_125 = ___right1;
		Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 * L_126 = V_6;
		NullCheck(L_124);
		ArrayElementTypeCheck (L_124, L_126);
		(L_124)->SetAt(static_cast<il2cpp_array_size_t>(L_125), (Vertex_t9F06CC90A103C547D4C6C36CD56A506BE0522DC8 *)L_126);
	}

IL_0157:
	{
	}

IL_0158:
	{
		// while (left < right)
		int32_t L_127 = ___left0;
		int32_t L_128 = ___right1;
		V_13 = (bool)((((int32_t)L_127) < ((int32_t)L_128))? 1 : 0);
		bool L_129 = V_13;
		if (L_129)
		{
			goto IL_00b4;
		}
	}
	{
		// if (left > median)
		int32_t L_130 = ___left0;
		int32_t L_131 = ___median2;
		V_14 = (bool)((((int32_t)L_130) > ((int32_t)L_131))? 1 : 0);
		bool L_132 = V_14;
		if (!L_132)
		{
			goto IL_017d;
		}
	}
	{
		// VertexMedianY(oleft, left - 1, median);
		int32_t L_133 = V_1;
		int32_t L_134 = ___left0;
		int32_t L_135 = ___median2;
		VertexSorter_VertexMedianY_m95E7DCE7947D24BAA19176542D2A43EF627045C8(__this, L_133, ((int32_t)il2cpp_codegen_subtract((int32_t)L_134, (int32_t)1)), L_135, /*hidden argument*/NULL);
	}

IL_017d:
	{
		// if (right < median - 1)
		int32_t L_136 = ___right1;
		int32_t L_137 = ___median2;
		V_15 = (bool)((((int32_t)L_136) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_137, (int32_t)1))))? 1 : 0);
		bool L_138 = V_15;
		if (!L_138)
		{
			goto IL_0197;
		}
	}
	{
		// VertexMedianY(right + 1, oright, median);
		int32_t L_139 = ___right1;
		int32_t L_140 = V_2;
		int32_t L_141 = ___median2;
		VertexSorter_VertexMedianY_m95E7DCE7947D24BAA19176542D2A43EF627045C8(__this, ((int32_t)il2cpp_codegen_add((int32_t)L_139, (int32_t)1)), L_140, L_141, /*hidden argument*/NULL);
	}

IL_0197:
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void TriangleNet.Configuration/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mBF9BD4196374890D38936AD71D6883EB0DF407EE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * L_0 = (U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB *)il2cpp_codegen_object_new(U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mE7292CB66E95F9DDF463E3976D1400043C1977A4(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TriangleNet.Configuration/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mE7292CB66E95F9DDF463E3976D1400043C1977A4 (U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// TriangleNet.IPredicates TriangleNet.Configuration/<>c::<.ctor>b__0_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__0_0_m568587B48E7E1E3D1349DBA85A8B3B5B254A18F9 (U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(() => RobustPredicates.Default, () => new TrianglePool())
		IL2CPP_RUNTIME_CLASS_INIT(RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059_il2cpp_TypeInfo_var);
		RobustPredicates_t49F1D8DBFD4682F15813A66303ADD4F3BE5EA059 * L_0;
		L_0 = RobustPredicates_get_Default_m1E7FEB30F8AD3E8FC400834DE16301B6CE0F5A6A(/*hidden argument*/NULL);
		return L_0;
	}
}
// TriangleNet.TrianglePool TriangleNet.Configuration/<>c::<.ctor>b__0_1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * U3CU3Ec_U3C_ctorU3Eb__0_1_m7EBD78CE71CCAB1DE121BEA64B8B53576F09E85E (U3CU3Ec_t932B2FFA11D8F135EA66C3DF67FBBA4471BF14AB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : this(() => RobustPredicates.Default, () => new TrianglePool())
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_0 = (TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 *)il2cpp_codegen_object_new(TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50_il2cpp_TypeInfo_var);
		TrianglePool__ctor_m5BADC5937E370D3421BC1C10B8CC5F9C993D2714(L_0, /*hidden argument*/NULL);
		return L_0;
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
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m047F727C467977089C11F321D5639FA21EC42232 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB * L_0 = (U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB *)il2cpp_codegen_object_new(U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_mAE8479B695636214C9EEFB484C4B9B20FEB51CB1(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mAE8479B695636214C9EEFB484C4B9B20FEB51CB1 (U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TriangleNet.Meshing.Iterators.RegionIterator/<>c::<Process>b__3_0(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CProcessU3Eb__3_0_m5D37151D3CEFFBE4A34054984B4782636FC4E1E4 (U3CU3Ec_t64ACB63DAB94CE86A5E9887C8494D9CF7DCF29BB * __this, SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___seg0, const RuntimeMethod* method)
{
	{
		// ProcessRegion(action, seg => seg.hash == TriangleNetMesh.DUMMY);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_0 = ___seg0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_hash_0();
		return (bool)((((int32_t)L_1) == ((int32_t)(-1)))? 1 : 0);
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
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_mCD065C34973B76C3EFC6F0797B70F69AB7EE1AF4 (U3CU3Ec__DisplayClass2_0_t906AAD0F0069727736A8049C61CE46D978E212E7 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass2_0::<Process>b__0(TriangleNet.Topology.Triangle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0_U3CProcessU3Eb__0_m4B49F3B8FD276777CE2C419BAA9F55988E9ABB9C (U3CU3Ec__DisplayClass2_0_t906AAD0F0069727736A8049C61CE46D978E212E7 * __this, Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * ___tri0, const RuntimeMethod* method)
{
	{
		// tri.label = triangle.label;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = ___tri0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_1 = __this->get_triangle_0();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_label_5();
		NullCheck(L_0);
		L_0->set_label_5(L_2);
		// tri.area = triangle.area;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_3 = ___tri0;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_4 = __this->get_triangle_0();
		NullCheck(L_4);
		float L_5 = L_4->get_area_6();
		NullCheck(L_3);
		L_3->set_area_6(L_5);
		// }, boundary);
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
// System.Void TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m50372AEEEED801811375B95ADAA1072A4DBC49FF (U3CU3Ec__DisplayClass3_0_t27EB9821E7E4999215A204A2A496EDB33460477D * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean TriangleNet.Meshing.Iterators.RegionIterator/<>c__DisplayClass3_0::<Process>b__1(TriangleNet.Topology.SubSegment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec__DisplayClass3_0_U3CProcessU3Eb__1_m17BDEB51603C3FBBEABE9D79C57F7E487454344A (U3CU3Ec__DisplayClass3_0_t27EB9821E7E4999215A204A2A496EDB33460477D * __this, SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * ___seg0, const RuntimeMethod* method)
{
	{
		// ProcessRegion(action, seg => seg.boundary != boundary);
		SubSegment_t21AD44AEE8DF5DCD023570AFAAC83DE8359E63EE * L_0 = ___seg0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_boundary_4();
		int32_t L_2 = __this->get_boundary_0();
		return (bool)((((int32_t)((((int32_t)L_1) == ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
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
// System.Void TriangleNet.TrianglePool/<Sample>d__9::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9__ctor_m3E04BBED9F37F681FFDEB83B2F8E994B072068CF (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		int32_t L_1;
		L_1 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		__this->set_U3CU3El__initialThreadId_2(L_1);
		return;
	}
}
// System.Void TriangleNet.TrianglePool/<Sample>d__9::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9_System_IDisposable_Dispose_m169943BBFF1C34189F420637B64D824915C2A746 (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TriangleNet.TrianglePool/<Sample>d__9::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSampleU3Ed__9_MoveNext_m8CA23E10E2372C8B1FAF69543B7874C081EB95AB (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00d8;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int i, count = this.Count;
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_3 = __this->get_U3CU3E4__this_7();
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TrianglePool_get_Count_mB38723CAAF548A3A7A9BF5E1A95F1D406C5EFBD5(L_3, /*hidden argument*/NULL);
		__this->set_U3CcountU3E5__2_9(L_4);
		// if (k > count)
		int32_t L_5 = __this->get_k_3();
		int32_t L_6 = __this->get_U3CcountU3E5__2_9();
		V_1 = (bool)((((int32_t)L_5) > ((int32_t)L_6))? 1 : 0);
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0054;
		}
	}
	{
		// k = count;
		int32_t L_8 = __this->get_U3CcountU3E5__2_9();
		__this->set_k_3(L_8);
	}

IL_0054:
	{
		goto IL_00e1;
	}

IL_0059:
	{
		// i = random.Next(0, count);
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_9 = __this->get_random_5();
		int32_t L_10 = __this->get_U3CcountU3E5__2_9();
		NullCheck(L_9);
		int32_t L_11;
		L_11 = VirtFuncInvoker2< int32_t, int32_t, int32_t >::Invoke(5 /* System.Int32 System.Random::Next(System.Int32,System.Int32) */, L_9, 0, L_10);
		__this->set_U3CiU3E5__1_8(L_11);
		// t = pool[i / BLOCKSIZE][i % BLOCKSIZE];
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_12 = __this->get_U3CU3E4__this_7();
		NullCheck(L_12);
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_13 = L_12->get_pool_3();
		int32_t L_14 = __this->get_U3CiU3E5__1_8();
		NullCheck(L_13);
		int32_t L_15 = ((int32_t)((int32_t)L_14/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_16 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		int32_t L_17 = __this->get_U3CiU3E5__1_8();
		NullCheck(L_16);
		int32_t L_18 = ((int32_t)((int32_t)L_17%(int32_t)((int32_t)1024)));
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_19 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		__this->set_U3CtU3E5__3_10(L_19);
		// if (t.hash >= 0)
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_20 = __this->get_U3CtU3E5__3_10();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_hash_0();
		V_2 = (bool)((((int32_t)((((int32_t)L_21) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_22 = V_2;
		if (!L_22)
		{
			goto IL_00e0;
		}
	}
	{
		// k--;
		int32_t L_23 = __this->get_k_3();
		V_3 = L_23;
		int32_t L_24 = V_3;
		__this->set_k_3(((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)1)));
		// yield return t;
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_25 = __this->get_U3CtU3E5__3_10();
		__this->set_U3CU3E2__current_1(L_25);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00d8:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00e0:
	{
	}

IL_00e1:
	{
		// while (k > 0)
		int32_t L_26 = __this->get_k_3();
		V_4 = (bool)((((int32_t)L_26) > ((int32_t)0))? 1 : 0);
		bool L_27 = V_4;
		if (L_27)
		{
			goto IL_0059;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/<Sample>d__9::System.Collections.Generic.IEnumerator<TriangleNet.Topology.Triangle>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * U3CSampleU3Ed__9_System_Collections_Generic_IEnumeratorU3CTriangleNet_Topology_TriangleU3E_get_Current_m4C87BF4243E52B724B2D06EC1A3CC605C05E8729 (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method)
{
	{
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TriangleNet.TrianglePool/<Sample>d__9::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSampleU3Ed__9_System_Collections_IEnumerator_Reset_mF90AC1796681A8C8C090D73CBCEB94370326AE27 (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSampleU3Ed__9_System_Collections_IEnumerator_Reset_mF90AC1796681A8C8C090D73CBCEB94370326AE27_RuntimeMethod_var)));
	}
}
// System.Object TriangleNet.TrianglePool/<Sample>d__9::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSampleU3Ed__9_System_Collections_IEnumerator_get_Current_mD62D83C2C30A011765D2F9B1886F21F3B4151FCA (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method)
{
	{
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Collections.Generic.IEnumerator`1<TriangleNet.Topology.Triangle> TriangleNet.TrianglePool/<Sample>d__9::System.Collections.Generic.IEnumerable<TriangleNet.Topology.Triangle>.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__9_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m861BECD84FBF0F9E915682C2105964D213C7DC73 (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * V_0 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-2)))))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_1 = __this->get_U3CU3El__initialThreadId_2();
		int32_t L_2;
		L_2 = Environment_get_CurrentManagedThreadId_m09DBD4166BFD399056B2F81C77A3A182339BF92D(/*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)L_2))))
		{
			goto IL_0022;
		}
	}
	{
		__this->set_U3CU3E1__state_0(0);
		V_0 = __this;
		goto IL_0035;
	}

IL_0022:
	{
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_3 = (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 *)il2cpp_codegen_object_new(U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77_il2cpp_TypeInfo_var);
		U3CSampleU3Ed__9__ctor_m3E04BBED9F37F681FFDEB83B2F8E994B072068CF(L_3, 0, /*hidden argument*/NULL);
		V_0 = L_3;
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_4 = V_0;
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_5 = __this->get_U3CU3E4__this_7();
		NullCheck(L_4);
		L_4->set_U3CU3E4__this_7(L_5);
	}

IL_0035:
	{
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_6 = V_0;
		int32_t L_7 = __this->get_U3CU3E3__k_4();
		NullCheck(L_6);
		L_6->set_k_3(L_7);
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_8 = V_0;
		Random_t6C9E9775A149D0ADCFEB4B252C408F03EE870118 * L_9 = __this->get_U3CU3E3__random_6();
		NullCheck(L_8);
		L_8->set_random_5(L_9);
		U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * L_10 = V_0;
		return L_10;
	}
}
// System.Collections.IEnumerator TriangleNet.TrianglePool/<Sample>d__9::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CSampleU3Ed__9_System_Collections_IEnumerable_GetEnumerator_m5CE922A6249901ED59F8AB725413693A3A4507FC (U3CSampleU3Ed__9_tF120C7CC70736310FC118272D84E3A6CB51ACF77 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject* L_0;
		L_0 = U3CSampleU3Ed__9_System_Collections_Generic_IEnumerableU3CTriangleNet_Topology_TriangleU3E_GetEnumerator_m861BECD84FBF0F9E915682C2105964D213C7DC73(__this, /*hidden argument*/NULL);
		return L_0;
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
// System.Void TriangleNet.TrianglePool/Enumerator::.ctor(TriangleNet.TrianglePool)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator__ctor_mACAD0608F558ED14DB4D88B90C019482AF9E6647 (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * __this, TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * ___pool0, const RuntimeMethod* method)
{
	{
		// public Enumerator(TrianglePool pool)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.count = pool.Count;
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_0 = ___pool0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = TrianglePool_get_Count_mB38723CAAF548A3A7A9BF5E1A95F1D406C5EFBD5(L_0, /*hidden argument*/NULL);
		__this->set_count_0(L_1);
		// this.pool = pool.pool;
		TrianglePool_t3190B60719DF649E3DC999D4DB6FB02382971C50 * L_2 = ___pool0;
		NullCheck(L_2);
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_3 = L_2->get_pool_3();
		__this->set_pool_1(L_3);
		// index = 0;
		__this->set_index_3(0);
		// offset = 0;
		__this->set_offset_4(0);
		// }
		return;
	}
}
// TriangleNet.Topology.Triangle TriangleNet.TrianglePool/Enumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * Enumerator_get_Current_mEAEF886EA1B187E631738E58592C00D2456E7090 (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * __this, const RuntimeMethod* method)
{
	Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * V_0 = NULL;
	{
		// get { return current; }
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = __this->get_current_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return current; }
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_1 = V_0;
		return L_1;
	}
}
// System.Void TriangleNet.TrianglePool/Enumerator::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m84EDA441252FCC85FC846953C92ABAA65976A3AA (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Object TriangleNet.TrianglePool/Enumerator::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_System_Collections_IEnumerator_get_Current_mB7D20102BAE48318A7D2F3F61436E533538BDF8C (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		// get { return current; }
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_0 = __this->get_current_2();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return current; }
		RuntimeObject * L_1 = V_0;
		return L_1;
	}
}
// System.Boolean TriangleNet.TrianglePool/Enumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m539BFDD4569A1F987AA8A7D5691856B23297D891 (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		goto IL_0061;
	}

IL_0003:
	{
		// current = pool[offset / BLOCKSIZE][offset % BLOCKSIZE];
		TriangleU5BU5DU5BU5D_t673EADD40F8C823831222B12CF2358BE742E0CD2* L_0 = __this->get_pool_1();
		int32_t L_1 = __this->get_offset_4();
		NullCheck(L_0);
		int32_t L_2 = ((int32_t)((int32_t)L_1/(int32_t)((int32_t)1024)));
		TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306* L_3 = (TriangleU5BU5D_t46AB448E88FB8A134D28536D953CC92683225306*)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = __this->get_offset_4();
		NullCheck(L_3);
		int32_t L_5 = ((int32_t)((int32_t)L_4%(int32_t)((int32_t)1024)));
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		__this->set_current_2(L_6);
		// offset++;
		int32_t L_7 = __this->get_offset_4();
		__this->set_offset_4(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// if (current.hash >= 0)
		Triangle_t3FF807541EEF7804C8067D932DE37CDF3E1CA412 * L_8 = __this->get_current_2();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_hash_0();
		V_0 = (bool)((((int32_t)((((int32_t)L_9) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_0;
		if (!L_10)
		{
			goto IL_0060;
		}
	}
	{
		// index++;
		int32_t L_11 = __this->get_index_3();
		__this->set_index_3(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// return true;
		V_1 = (bool)1;
		goto IL_0077;
	}

IL_0060:
	{
	}

IL_0061:
	{
		// while (index < count)
		int32_t L_12 = __this->get_index_3();
		int32_t L_13 = __this->get_count_0();
		V_2 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_2;
		if (L_14)
		{
			goto IL_0003;
		}
	}
	{
		// return false;
		V_1 = (bool)0;
		goto IL_0077;
	}

IL_0077:
	{
		// }
		bool L_15 = V_1;
		return L_15;
	}
}
// System.Void TriangleNet.TrianglePool/Enumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Reset_m2E304290B00BA4436D04F90D57B84548E6482E24 (Enumerator_tE3299499F5ABBFD2C2362D218581F942C2267365 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// index = offset = 0;
		int32_t L_0 = 0;
		V_0 = L_0;
		__this->set_offset_4(L_0);
		int32_t L_1 = V_0;
		__this->set_index_3(L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * Configuration_get_TrianglePool_m60FCEF10AD586D47177BC2A9E42B738FC6B242D1_inline (Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * __this, const RuntimeMethod* method)
{
	{
		// public Func<TrianglePool> TrianglePool { get; set; }
		Func_1_t537EFC9FA8B859EDA427D70611C1808D4777BA17 * L_0 = __this->get_U3CTrianglePoolU3Ek__BackingField_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * Configuration_get_Predicates_mF9ABF26217AC6995FA09F44C6D636F12436421AA_inline (Configuration_t38718C8EF466EA3E523DBD146B8479C6093EB121 * __this, const RuntimeMethod* method)
{
	{
		// public Func<IPredicates> Predicates { get; set; }
		Func_1_t86D8908136AA6781E47EB4543E07521ADC0F861A * L_0 = __this->get_U3CPredicatesU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_mF7FCDE24496D619F4BB1A0BA44AF17DCB5D697FF_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		__this->set_z_4((0.0f));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mB71B362A3AA794697E9EBFE09F180BDFEFA926AD_gshared_inline (Stack_1_tB1D116B5DD328F0746C1A7B398AB9DC3760A4660 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mFD1C100DE65847CAB033057C77027AA5DB427B54_gshared_inline (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_1();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
