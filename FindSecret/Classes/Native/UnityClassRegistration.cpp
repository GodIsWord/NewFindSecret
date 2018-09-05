template <typename T> void RegisterClass();
template <typename T> void RegisterStrippedTypeInfo(int, const char*, const char*);

void InvokeRegisterStaticallyLinkedModuleClasses()
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_AI();
	RegisterModule_AI();

	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Cloth();
	RegisterModule_Cloth();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_ParticlesLegacy();
	RegisterModule_ParticlesLegacy();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_Terrain();
	RegisterModule_Terrain();

	void RegisterModule_TerrainPhysics();
	RegisterModule_TerrainPhysics();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_Vehicles();
	RegisterModule_Vehicles();

	void RegisterModule_Video();
	RegisterModule_Video();

	void RegisterModule_UnityAnalytics();
	RegisterModule_UnityAnalytics();

	void RegisterModule_UnityAds();
	RegisterModule_UnityAds();

	void RegisterModule_CrashReporting();
	RegisterModule_CrashReporting();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_VR();
	RegisterModule_VR();

	void RegisterModule_JSONSerialize();
	RegisterModule_JSONSerialize();

	void RegisterModule_UNET();
	RegisterModule_UNET();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

	void RegisterModule_UnityWebRequestAudio();
	RegisterModule_UnityWebRequestAudio();

	void RegisterModule_Input();
	RegisterModule_Input();

	void RegisterModule_Web();
	RegisterModule_Web();

}

class EditorExtension; template <> void RegisterClass<EditorExtension>();
namespace Unity { class Component; } template <> void RegisterClass<Unity::Component>();
class Behaviour; template <> void RegisterClass<Behaviour>();
class Animation; template <> void RegisterClass<Animation>();
class Animator; template <> void RegisterClass<Animator>();
class AudioBehaviour; template <> void RegisterClass<AudioBehaviour>();
class AudioListener; template <> void RegisterClass<AudioListener>();
class AudioSource; template <> void RegisterClass<AudioSource>();
class AudioFilter; template <> void RegisterClass<AudioFilter>();
class AudioChorusFilter; template <> void RegisterClass<AudioChorusFilter>();
class AudioDistortionFilter; template <> void RegisterClass<AudioDistortionFilter>();
class AudioEchoFilter; template <> void RegisterClass<AudioEchoFilter>();
class AudioHighPassFilter; template <> void RegisterClass<AudioHighPassFilter>();
class AudioLowPassFilter; template <> void RegisterClass<AudioLowPassFilter>();
class AudioReverbFilter; template <> void RegisterClass<AudioReverbFilter>();
class AudioReverbZone; template <> void RegisterClass<AudioReverbZone>();
class Camera; template <> void RegisterClass<Camera>();
namespace UI { class Canvas; } template <> void RegisterClass<UI::Canvas>();
namespace UI { class CanvasGroup; } template <> void RegisterClass<UI::CanvasGroup>();
namespace Unity { class Cloth; } template <> void RegisterClass<Unity::Cloth>();
class Collider2D; template <> void RegisterClass<Collider2D>();
class BoxCollider2D; template <> void RegisterClass<BoxCollider2D>();
class CapsuleCollider2D; template <> void RegisterClass<CapsuleCollider2D>();
class CircleCollider2D; template <> void RegisterClass<CircleCollider2D>();
class CompositeCollider2D; template <> void RegisterClass<CompositeCollider2D>();
class EdgeCollider2D; template <> void RegisterClass<EdgeCollider2D>();
class PolygonCollider2D; template <> void RegisterClass<PolygonCollider2D>();
class ConstantForce; template <> void RegisterClass<ConstantForce>();
class Effector2D; template <> void RegisterClass<Effector2D>();
class AreaEffector2D; template <> void RegisterClass<AreaEffector2D>();
class BuoyancyEffector2D; template <> void RegisterClass<BuoyancyEffector2D>();
class PlatformEffector2D; template <> void RegisterClass<PlatformEffector2D>();
class PointEffector2D; template <> void RegisterClass<PointEffector2D>();
class SurfaceEffector2D; template <> void RegisterClass<SurfaceEffector2D>();
class FlareLayer; template <> void RegisterClass<FlareLayer>();
class GUIElement; template <> void RegisterClass<GUIElement>();
namespace TextRenderingPrivate { class GUIText; } template <> void RegisterClass<TextRenderingPrivate::GUIText>();
class GUITexture; template <> void RegisterClass<GUITexture>();
class GUILayer; template <> void RegisterClass<GUILayer>();
class Halo; template <> void RegisterClass<Halo>();
class HaloLayer; 
class Joint2D; template <> void RegisterClass<Joint2D>();
class AnchoredJoint2D; template <> void RegisterClass<AnchoredJoint2D>();
class DistanceJoint2D; template <> void RegisterClass<DistanceJoint2D>();
class FixedJoint2D; template <> void RegisterClass<FixedJoint2D>();
class FrictionJoint2D; template <> void RegisterClass<FrictionJoint2D>();
class HingeJoint2D; template <> void RegisterClass<HingeJoint2D>();
class SliderJoint2D; template <> void RegisterClass<SliderJoint2D>();
class SpringJoint2D; template <> void RegisterClass<SpringJoint2D>();
class WheelJoint2D; template <> void RegisterClass<WheelJoint2D>();
class RelativeJoint2D; template <> void RegisterClass<RelativeJoint2D>();
class TargetJoint2D; template <> void RegisterClass<TargetJoint2D>();
class LensFlare; template <> void RegisterClass<LensFlare>();
class Light; template <> void RegisterClass<Light>();
class LightProbeGroup; template <> void RegisterClass<LightProbeGroup>();
class LightProbeProxyVolume; template <> void RegisterClass<LightProbeProxyVolume>();
class MonoBehaviour; template <> void RegisterClass<MonoBehaviour>();
class NavMeshAgent; template <> void RegisterClass<NavMeshAgent>();
class NavMeshObstacle; template <> void RegisterClass<NavMeshObstacle>();
class NetworkView; template <> void RegisterClass<NetworkView>();
class OffMeshLink; template <> void RegisterClass<OffMeshLink>();
class PhysicsUpdateBehaviour2D; template <> void RegisterClass<PhysicsUpdateBehaviour2D>();
class ConstantForce2D; template <> void RegisterClass<ConstantForce2D>();
class Projector; template <> void RegisterClass<Projector>();
class ReflectionProbe; template <> void RegisterClass<ReflectionProbe>();
class Skybox; template <> void RegisterClass<Skybox>();
class SortingGroup; template <> void RegisterClass<SortingGroup>();
class Terrain; template <> void RegisterClass<Terrain>();
class VideoPlayer; template <> void RegisterClass<VideoPlayer>();
class WindZone; template <> void RegisterClass<WindZone>();
namespace UI { class CanvasRenderer; } template <> void RegisterClass<UI::CanvasRenderer>();
class Collider; template <> void RegisterClass<Collider>();
class BoxCollider; template <> void RegisterClass<BoxCollider>();
class CapsuleCollider; template <> void RegisterClass<CapsuleCollider>();
class CharacterController; template <> void RegisterClass<CharacterController>();
class MeshCollider; template <> void RegisterClass<MeshCollider>();
class SphereCollider; template <> void RegisterClass<SphereCollider>();
class TerrainCollider; template <> void RegisterClass<TerrainCollider>();
class WheelCollider; template <> void RegisterClass<WheelCollider>();
namespace Unity { class Joint; } template <> void RegisterClass<Unity::Joint>();
namespace Unity { class CharacterJoint; } template <> void RegisterClass<Unity::CharacterJoint>();
namespace Unity { class ConfigurableJoint; } template <> void RegisterClass<Unity::ConfigurableJoint>();
namespace Unity { class FixedJoint; } template <> void RegisterClass<Unity::FixedJoint>();
namespace Unity { class HingeJoint; } template <> void RegisterClass<Unity::HingeJoint>();
namespace Unity { class SpringJoint; } template <> void RegisterClass<Unity::SpringJoint>();
class LODGroup; template <> void RegisterClass<LODGroup>();
class MeshFilter; template <> void RegisterClass<MeshFilter>();
class OcclusionArea; template <> void RegisterClass<OcclusionArea>();
class OcclusionPortal; template <> void RegisterClass<OcclusionPortal>();
class ParticleAnimator; template <> void RegisterClass<ParticleAnimator>();
class ParticleEmitter; template <> void RegisterClass<ParticleEmitter>();
class EllipsoidParticleEmitter; template <> void RegisterClass<EllipsoidParticleEmitter>();
class MeshParticleEmitter; template <> void RegisterClass<MeshParticleEmitter>();
class ParticleSystem; template <> void RegisterClass<ParticleSystem>();
class Renderer; template <> void RegisterClass<Renderer>();
class BillboardRenderer; template <> void RegisterClass<BillboardRenderer>();
class LineRenderer; template <> void RegisterClass<LineRenderer>();
class MeshRenderer; template <> void RegisterClass<MeshRenderer>();
class ParticleRenderer; template <> void RegisterClass<ParticleRenderer>();
class ParticleSystemRenderer; template <> void RegisterClass<ParticleSystemRenderer>();
class SkinnedMeshRenderer; template <> void RegisterClass<SkinnedMeshRenderer>();
class SpriteRenderer; template <> void RegisterClass<SpriteRenderer>();
class TrailRenderer; template <> void RegisterClass<TrailRenderer>();
class Rigidbody; template <> void RegisterClass<Rigidbody>();
class Rigidbody2D; template <> void RegisterClass<Rigidbody2D>();
namespace TextRenderingPrivate { class TextMesh; } template <> void RegisterClass<TextRenderingPrivate::TextMesh>();
class Transform; template <> void RegisterClass<Transform>();
namespace UI { class RectTransform; } template <> void RegisterClass<UI::RectTransform>();
class Tree; template <> void RegisterClass<Tree>();
class WorldAnchor; 
class WorldParticleCollider; template <> void RegisterClass<WorldParticleCollider>();
class GameObject; template <> void RegisterClass<GameObject>();
class NamedObject; template <> void RegisterClass<NamedObject>();
class AssetBundle; template <> void RegisterClass<AssetBundle>();
class AssetBundleManifest; template <> void RegisterClass<AssetBundleManifest>();
class AudioMixer; template <> void RegisterClass<AudioMixer>();
class AudioMixerController; 
class AudioMixerGroup; template <> void RegisterClass<AudioMixerGroup>();
class AudioMixerGroupController; 
class AudioMixerSnapshot; template <> void RegisterClass<AudioMixerSnapshot>();
class AudioMixerSnapshotController; 
class Avatar; template <> void RegisterClass<Avatar>();
class AvatarMask; template <> void RegisterClass<AvatarMask>();
class BillboardAsset; template <> void RegisterClass<BillboardAsset>();
class ComputeShader; template <> void RegisterClass<ComputeShader>();
class Flare; template <> void RegisterClass<Flare>();
namespace TextRendering { class Font; } template <> void RegisterClass<TextRendering::Font>();
class LightProbes; template <> void RegisterClass<LightProbes>();
class Material; template <> void RegisterClass<Material>();
class ProceduralMaterial; template <> void RegisterClass<ProceduralMaterial>();
class Mesh; template <> void RegisterClass<Mesh>();
class Motion; template <> void RegisterClass<Motion>();
class AnimationClip; template <> void RegisterClass<AnimationClip>();
class PreviewAnimationClip; 
class NavMeshData; template <> void RegisterClass<NavMeshData>();
class OcclusionCullingData; 
class PhysicMaterial; template <> void RegisterClass<PhysicMaterial>();
class PhysicsMaterial2D; template <> void RegisterClass<PhysicsMaterial2D>();
class PreloadData; template <> void RegisterClass<PreloadData>();
class RuntimeAnimatorController; template <> void RegisterClass<RuntimeAnimatorController>();
class AnimatorController; template <> void RegisterClass<AnimatorController>();
class AnimatorOverrideController; template <> void RegisterClass<AnimatorOverrideController>();
class SampleClip; template <> void RegisterClass<SampleClip>();
class AudioClip; template <> void RegisterClass<AudioClip>();
class Shader; template <> void RegisterClass<Shader>();
class ShaderVariantCollection; template <> void RegisterClass<ShaderVariantCollection>();
class SpeedTreeWindAsset; template <> void RegisterClass<SpeedTreeWindAsset>();
class Sprite; template <> void RegisterClass<Sprite>();
class SubstanceArchive; 
class TerrainData; template <> void RegisterClass<TerrainData>();
class TextAsset; template <> void RegisterClass<TextAsset>();
class CGProgram; 
class MonoScript; template <> void RegisterClass<MonoScript>();
class Texture; template <> void RegisterClass<Texture>();
class BaseVideoTexture; template <> void RegisterClass<BaseVideoTexture>();
class MovieTexture; 
class WebCamTexture; template <> void RegisterClass<WebCamTexture>();
class CubemapArray; template <> void RegisterClass<CubemapArray>();
class LowerResBlitTexture; template <> void RegisterClass<LowerResBlitTexture>();
class ProceduralTexture; template <> void RegisterClass<ProceduralTexture>();
class RenderTexture; template <> void RegisterClass<RenderTexture>();
class CustomRenderTexture; 
class SparseTexture; template <> void RegisterClass<SparseTexture>();
class Texture2D; template <> void RegisterClass<Texture2D>();
class Cubemap; template <> void RegisterClass<Cubemap>();
class Texture2DArray; template <> void RegisterClass<Texture2DArray>();
class Texture3D; template <> void RegisterClass<Texture3D>();
class VideoClip; template <> void RegisterClass<VideoClip>();
class GameManager; template <> void RegisterClass<GameManager>();
class GlobalGameManager; template <> void RegisterClass<GlobalGameManager>();
class AudioManager; template <> void RegisterClass<AudioManager>();
class BuildSettings; template <> void RegisterClass<BuildSettings>();
class CloudWebServicesManager; template <> void RegisterClass<CloudWebServicesManager>();
class CrashReportManager; template <> void RegisterClass<CrashReportManager>();
class DelayedCallManager; template <> void RegisterClass<DelayedCallManager>();
class GraphicsSettings; template <> void RegisterClass<GraphicsSettings>();
class InputManager; template <> void RegisterClass<InputManager>();
class MasterServerInterface; template <> void RegisterClass<MasterServerInterface>();
class MonoManager; template <> void RegisterClass<MonoManager>();
class NavMeshProjectSettings; template <> void RegisterClass<NavMeshProjectSettings>();
class NetworkManager; template <> void RegisterClass<NetworkManager>();
class PerformanceReportingManager; 
class Physics2DSettings; template <> void RegisterClass<Physics2DSettings>();
class PhysicsManager; template <> void RegisterClass<PhysicsManager>();
class PlayerSettings; template <> void RegisterClass<PlayerSettings>();
class QualitySettings; template <> void RegisterClass<QualitySettings>();
class ResourceManager; template <> void RegisterClass<ResourceManager>();
class RuntimeInitializeOnLoadManager; template <> void RegisterClass<RuntimeInitializeOnLoadManager>();
class ScriptMapper; template <> void RegisterClass<ScriptMapper>();
class TagManager; template <> void RegisterClass<TagManager>();
class TimeManager; template <> void RegisterClass<TimeManager>();
class UnityAdsManager; template <> void RegisterClass<UnityAdsManager>();
class UnityAnalyticsManager; template <> void RegisterClass<UnityAnalyticsManager>();
class UnityConnectSettings; template <> void RegisterClass<UnityConnectSettings>();
class LevelGameManager; template <> void RegisterClass<LevelGameManager>();
class LightmapSettings; template <> void RegisterClass<LightmapSettings>();
class NavMeshSettings; template <> void RegisterClass<NavMeshSettings>();
class OcclusionCullingSettings; 
class RenderSettings; template <> void RegisterClass<RenderSettings>();
class NScreenBridge; 

void RegisterAllClasses()
{
void RegisterBuiltinTypes();
RegisterBuiltinTypes();
	//Total: 186 non stripped classes
	//0. AssetBundle
	RegisterClass<AssetBundle>();
	//1. NamedObject
	RegisterClass<NamedObject>();
	//2. EditorExtension
	RegisterClass<EditorExtension>();
	//3. AssetBundleManifest
	RegisterClass<AssetBundleManifest>();
	//4. Behaviour
	RegisterClass<Behaviour>();
	//5. Unity::Component
	RegisterClass<Unity::Component>();
	//6. BillboardAsset
	RegisterClass<BillboardAsset>();
	//7. BillboardRenderer
	RegisterClass<BillboardRenderer>();
	//8. Renderer
	RegisterClass<Renderer>();
	//9. Camera
	RegisterClass<Camera>();
	//10. ComputeShader
	RegisterClass<ComputeShader>();
	//11. FlareLayer
	RegisterClass<FlareLayer>();
	//12. GameObject
	RegisterClass<GameObject>();
	//13. OcclusionArea
	RegisterClass<OcclusionArea>();
	//14. OcclusionPortal
	RegisterClass<OcclusionPortal>();
	//15. RenderSettings
	RegisterClass<RenderSettings>();
	//16. LevelGameManager
	RegisterClass<LevelGameManager>();
	//17. GameManager
	RegisterClass<GameManager>();
	//18. QualitySettings
	RegisterClass<QualitySettings>();
	//19. GlobalGameManager
	RegisterClass<GlobalGameManager>();
	//20. Halo
	RegisterClass<Halo>();
	//21. MeshFilter
	RegisterClass<MeshFilter>();
	//22. SkinnedMeshRenderer
	RegisterClass<SkinnedMeshRenderer>();
	//23. Flare
	RegisterClass<Flare>();
	//24. LensFlare
	RegisterClass<LensFlare>();
	//25. Projector
	RegisterClass<Projector>();
	//26. Skybox
	RegisterClass<Skybox>();
	//27. TrailRenderer
	RegisterClass<TrailRenderer>();
	//28. LineRenderer
	RegisterClass<LineRenderer>();
	//29. LightProbes
	RegisterClass<LightProbes>();
	//30. LightmapSettings
	RegisterClass<LightmapSettings>();
	//31. MeshRenderer
	RegisterClass<MeshRenderer>();
	//32. GUIElement
	RegisterClass<GUIElement>();
	//33. GUITexture
	RegisterClass<GUITexture>();
	//34. GUILayer
	RegisterClass<GUILayer>();
	//35. Light
	RegisterClass<Light>();
	//36. LightProbeGroup
	RegisterClass<LightProbeGroup>();
	//37. LightProbeProxyVolume
	RegisterClass<LightProbeProxyVolume>();
	//38. LODGroup
	RegisterClass<LODGroup>();
	//39. Mesh
	RegisterClass<Mesh>();
	//40. MonoBehaviour
	RegisterClass<MonoBehaviour>();
	//41. NetworkView
	RegisterClass<NetworkView>();
	//42. ReflectionProbe
	RegisterClass<ReflectionProbe>();
	//43. GraphicsSettings
	RegisterClass<GraphicsSettings>();
	//44. Shader
	RegisterClass<Shader>();
	//45. Material
	RegisterClass<Material>();
	//46. ShaderVariantCollection
	RegisterClass<ShaderVariantCollection>();
	//47. Sprite
	RegisterClass<Sprite>();
	//48. SpriteRenderer
	RegisterClass<SpriteRenderer>();
	//49. ProceduralMaterial
	RegisterClass<ProceduralMaterial>();
	//50. ProceduralTexture
	RegisterClass<ProceduralTexture>();
	//51. Texture
	RegisterClass<Texture>();
	//52. TextAsset
	RegisterClass<TextAsset>();
	//53. Texture2D
	RegisterClass<Texture2D>();
	//54. Cubemap
	RegisterClass<Cubemap>();
	//55. Texture3D
	RegisterClass<Texture3D>();
	//56. Texture2DArray
	RegisterClass<Texture2DArray>();
	//57. CubemapArray
	RegisterClass<CubemapArray>();
	//58. SparseTexture
	RegisterClass<SparseTexture>();
	//59. RenderTexture
	RegisterClass<RenderTexture>();
	//60. WindZone
	RegisterClass<WindZone>();
	//61. Transform
	RegisterClass<Transform>();
	//62. UI::RectTransform
	RegisterClass<UI::RectTransform>();
	//63. SortingGroup
	RegisterClass<SortingGroup>();
	//64. ParticleSystem
	RegisterClass<ParticleSystem>();
	//65. ParticleSystemRenderer
	RegisterClass<ParticleSystemRenderer>();
	//66. WorldParticleCollider
	RegisterClass<WorldParticleCollider>();
	//67. Rigidbody
	RegisterClass<Rigidbody>();
	//68. Unity::Joint
	RegisterClass<Unity::Joint>();
	//69. Unity::HingeJoint
	RegisterClass<Unity::HingeJoint>();
	//70. Unity::SpringJoint
	RegisterClass<Unity::SpringJoint>();
	//71. Unity::FixedJoint
	RegisterClass<Unity::FixedJoint>();
	//72. Unity::CharacterJoint
	RegisterClass<Unity::CharacterJoint>();
	//73. Unity::ConfigurableJoint
	RegisterClass<Unity::ConfigurableJoint>();
	//74. ConstantForce
	RegisterClass<ConstantForce>();
	//75. Collider
	RegisterClass<Collider>();
	//76. BoxCollider
	RegisterClass<BoxCollider>();
	//77. SphereCollider
	RegisterClass<SphereCollider>();
	//78. MeshCollider
	RegisterClass<MeshCollider>();
	//79. CapsuleCollider
	RegisterClass<CapsuleCollider>();
	//80. PhysicMaterial
	RegisterClass<PhysicMaterial>();
	//81. CharacterController
	RegisterClass<CharacterController>();
	//82. Rigidbody2D
	RegisterClass<Rigidbody2D>();
	//83. Collider2D
	RegisterClass<Collider2D>();
	//84. CircleCollider2D
	RegisterClass<CircleCollider2D>();
	//85. BoxCollider2D
	RegisterClass<BoxCollider2D>();
	//86. EdgeCollider2D
	RegisterClass<EdgeCollider2D>();
	//87. CapsuleCollider2D
	RegisterClass<CapsuleCollider2D>();
	//88. CompositeCollider2D
	RegisterClass<CompositeCollider2D>();
	//89. PolygonCollider2D
	RegisterClass<PolygonCollider2D>();
	//90. Joint2D
	RegisterClass<Joint2D>();
	//91. AnchoredJoint2D
	RegisterClass<AnchoredJoint2D>();
	//92. SpringJoint2D
	RegisterClass<SpringJoint2D>();
	//93. DistanceJoint2D
	RegisterClass<DistanceJoint2D>();
	//94. FrictionJoint2D
	RegisterClass<FrictionJoint2D>();
	//95. HingeJoint2D
	RegisterClass<HingeJoint2D>();
	//96. RelativeJoint2D
	RegisterClass<RelativeJoint2D>();
	//97. SliderJoint2D
	RegisterClass<SliderJoint2D>();
	//98. TargetJoint2D
	RegisterClass<TargetJoint2D>();
	//99. FixedJoint2D
	RegisterClass<FixedJoint2D>();
	//100. WheelJoint2D
	RegisterClass<WheelJoint2D>();
	//101. PhysicsMaterial2D
	RegisterClass<PhysicsMaterial2D>();
	//102. PhysicsUpdateBehaviour2D
	RegisterClass<PhysicsUpdateBehaviour2D>();
	//103. ConstantForce2D
	RegisterClass<ConstantForce2D>();
	//104. Effector2D
	RegisterClass<Effector2D>();
	//105. AreaEffector2D
	RegisterClass<AreaEffector2D>();
	//106. BuoyancyEffector2D
	RegisterClass<BuoyancyEffector2D>();
	//107. PointEffector2D
	RegisterClass<PointEffector2D>();
	//108. PlatformEffector2D
	RegisterClass<PlatformEffector2D>();
	//109. SurfaceEffector2D
	RegisterClass<SurfaceEffector2D>();
	//110. WheelCollider
	RegisterClass<WheelCollider>();
	//111. Unity::Cloth
	RegisterClass<Unity::Cloth>();
	//112. NavMeshData
	RegisterClass<NavMeshData>();
	//113. NavMeshAgent
	RegisterClass<NavMeshAgent>();
	//114. NavMeshObstacle
	RegisterClass<NavMeshObstacle>();
	//115. OffMeshLink
	RegisterClass<OffMeshLink>();
	//116. AudioClip
	RegisterClass<AudioClip>();
	//117. SampleClip
	RegisterClass<SampleClip>();
	//118. AudioBehaviour
	RegisterClass<AudioBehaviour>();
	//119. AudioListener
	RegisterClass<AudioListener>();
	//120. AudioSource
	RegisterClass<AudioSource>();
	//121. AudioReverbZone
	RegisterClass<AudioReverbZone>();
	//122. AudioLowPassFilter
	RegisterClass<AudioLowPassFilter>();
	//123. AudioFilter
	RegisterClass<AudioFilter>();
	//124. AudioHighPassFilter
	RegisterClass<AudioHighPassFilter>();
	//125. AudioDistortionFilter
	RegisterClass<AudioDistortionFilter>();
	//126. AudioEchoFilter
	RegisterClass<AudioEchoFilter>();
	//127. AudioChorusFilter
	RegisterClass<AudioChorusFilter>();
	//128. AudioReverbFilter
	RegisterClass<AudioReverbFilter>();
	//129. AudioMixer
	RegisterClass<AudioMixer>();
	//130. AudioMixerSnapshot
	RegisterClass<AudioMixerSnapshot>();
	//131. AudioMixerGroup
	RegisterClass<AudioMixerGroup>();
	//132. WebCamTexture
	RegisterClass<WebCamTexture>();
	//133. BaseVideoTexture
	RegisterClass<BaseVideoTexture>();
	//134. AnimatorOverrideController
	RegisterClass<AnimatorOverrideController>();
	//135. RuntimeAnimatorController
	RegisterClass<RuntimeAnimatorController>();
	//136. AnimationClip
	RegisterClass<AnimationClip>();
	//137. Motion
	RegisterClass<Motion>();
	//138. Animation
	RegisterClass<Animation>();
	//139. Animator
	RegisterClass<Animator>();
	//140. Avatar
	RegisterClass<Avatar>();
	//141. AvatarMask
	RegisterClass<AvatarMask>();
	//142. TerrainData
	RegisterClass<TerrainData>();
	//143. Terrain
	RegisterClass<Terrain>();
	//144. Tree
	RegisterClass<Tree>();
	//145. SpeedTreeWindAsset
	RegisterClass<SpeedTreeWindAsset>();
	//146. TextRenderingPrivate::GUIText
	RegisterClass<TextRenderingPrivate::GUIText>();
	//147. TextRenderingPrivate::TextMesh
	RegisterClass<TextRenderingPrivate::TextMesh>();
	//148. TextRendering::Font
	RegisterClass<TextRendering::Font>();
	//149. UI::Canvas
	RegisterClass<UI::Canvas>();
	//150. UI::CanvasGroup
	RegisterClass<UI::CanvasGroup>();
	//151. UI::CanvasRenderer
	RegisterClass<UI::CanvasRenderer>();
	//152. TerrainCollider
	RegisterClass<TerrainCollider>();
	//153. UnityConnectSettings
	RegisterClass<UnityConnectSettings>();
	//154. VideoPlayer
	RegisterClass<VideoPlayer>();
	//155. VideoClip
	RegisterClass<VideoClip>();
	//156. ParticleEmitter
	RegisterClass<ParticleEmitter>();
	//157. EllipsoidParticleEmitter
	RegisterClass<EllipsoidParticleEmitter>();
	//158. MeshParticleEmitter
	RegisterClass<MeshParticleEmitter>();
	//159. ParticleAnimator
	RegisterClass<ParticleAnimator>();
	//160. ParticleRenderer
	RegisterClass<ParticleRenderer>();
	//161. PreloadData
	RegisterClass<PreloadData>();
	//162. LowerResBlitTexture
	RegisterClass<LowerResBlitTexture>();
	//163. TimeManager
	RegisterClass<TimeManager>();
	//164. AudioManager
	RegisterClass<AudioManager>();
	//165. InputManager
	RegisterClass<InputManager>();
	//166. Physics2DSettings
	RegisterClass<Physics2DSettings>();
	//167. PhysicsManager
	RegisterClass<PhysicsManager>();
	//168. TagManager
	RegisterClass<TagManager>();
	//169. ScriptMapper
	RegisterClass<ScriptMapper>();
	//170. DelayedCallManager
	RegisterClass<DelayedCallManager>();
	//171. MonoScript
	RegisterClass<MonoScript>();
	//172. MonoManager
	RegisterClass<MonoManager>();
	//173. NavMeshProjectSettings
	RegisterClass<NavMeshProjectSettings>();
	//174. PlayerSettings
	RegisterClass<PlayerSettings>();
	//175. BuildSettings
	RegisterClass<BuildSettings>();
	//176. ResourceManager
	RegisterClass<ResourceManager>();
	//177. NetworkManager
	RegisterClass<NetworkManager>();
	//178. MasterServerInterface
	RegisterClass<MasterServerInterface>();
	//179. RuntimeInitializeOnLoadManager
	RegisterClass<RuntimeInitializeOnLoadManager>();
	//180. CloudWebServicesManager
	RegisterClass<CloudWebServicesManager>();
	//181. AnimatorController
	RegisterClass<AnimatorController>();
	//182. NavMeshSettings
	RegisterClass<NavMeshSettings>();
	//183. UnityAnalyticsManager
	RegisterClass<UnityAnalyticsManager>();
	//184. UnityAdsManager
	RegisterClass<UnityAdsManager>();
	//185. CrashReportManager
	RegisterClass<CrashReportManager>();

}
