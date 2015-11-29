struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_ParticleSystem();
	RegisterModule_ParticleSystem();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

}

void RegisterAllClasses()
{
	//Total: 66 classes
	//0. AssetBundle
	void RegisterClass_AssetBundle();
	RegisterClass_AssetBundle();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//4. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//5. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//6. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//7. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//8. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//9. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//10. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//11. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//12. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//13. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//14. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//15. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//16. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//17. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//18. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//19. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//20. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//21. ParticleSystem
	void RegisterClass_ParticleSystem();
	RegisterClass_ParticleSystem();

	//22. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//23. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//24. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//25. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//26. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//27. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//28. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//29. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//30. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//31. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//32. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//33. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//34. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//35. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//36. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//37. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//38. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//39. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//40. PolygonCollider2D
	void RegisterClass_PolygonCollider2D();
	RegisterClass_PolygonCollider2D();

	//41. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//42. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//43. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//44. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//45. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//46. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//47. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//48. ParticleSystemRenderer
	void RegisterClass_ParticleSystemRenderer();
	RegisterClass_ParticleSystemRenderer();

	//49. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//50. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//51. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//52. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//53. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//54. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//55. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//56. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//57. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//58. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//59. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//60. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//61. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//62. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//63. NetworkManager
	//Skipping NetworkManager

	//64. MasterServerInterface
	//Skipping MasterServerInterface

	//65. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
