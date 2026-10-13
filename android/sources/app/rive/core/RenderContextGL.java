package app.rive.core;

import a3.e;
import android.opengl.EGL14;
import android.opengl.EGLConfig;
import android.opengl.EGLContext;
import android.opengl.EGLDisplay;
import android.opengl.EGLSurface;
import app.rive.RiveInitializationException;
import app.rive.RiveLog;
import app.rive.RiveRenderException;
import app.rive.RiveShutdownException;
import app.rive.core.RenderContextGL;
import com.discord.jank_stats.JankRecordStore;
import com.facebook.react.uimanager.ViewProps;
import kotlin.Metadata;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;
import s4.h;

@Metadata(d1 = {"\u0000t\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0006\n\u0002\u0018\u0002\n\u0002\b\t\n\u0002\u0010\t\n\u0002\b\u0002\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u000b\n\u0000\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0002\b\u0002\b\u0080\b\u0018\u0000 82\u00020\u00012\u00020\u0002:\u00018B#\u0012\b\b\u0002\u0010\u0003\u001a\u00020\u0004\u0012\b\b\u0002\u0010\u0005\u001a\u00020\u0006\u0012\b\b\u0002\u0010\u0007\u001a\u00020\b¢\u0006\u0002\u0010\tJ\t\u0010\u0014\u001a\u00020\u0004HÆ\u0003J\t\u0010\u0015\u001a\u00020\u0006HÆ\u0003J\t\u0010\u0016\u001a\u00020\bHÆ\u0003J'\u0010\u0017\u001a\u00020\u00002\b\b\u0002\u0010\u0003\u001a\u00020\u00042\b\b\u0002\u0010\u0005\u001a\u00020\u00062\b\b\u0002\u0010\u0007\u001a\u00020\bHÆ\u0001J\u0019\u0010\u0018\u001a\u00020\u00192\u0006\u0010\u0003\u001a\u00020\u00192\u0006\u0010\u0007\u001a\u00020\u0019H\u0082 J\u0019\u0010\u001a\u001a\u00020\u00192\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001cH\u0082 J\u0011\u0010\u001e\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u0019H\u0082 J\u0011\u0010!\u001a\u00020\u001f2\u0006\u0010 \u001a\u00020\u0019H\u0082 J2\u0010\"\u001a\u00020#2\u0006\u0010\u001b\u001a\u00020\u001c2\u0006\u0010\u001d\u001a\u00020\u001c2\u0006\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020'H\u0010ø\u0001\u0000¢\u0006\u0004\b(\u0010)J*\u0010*\u001a\u00020#2\u0006\u0010+\u001a\u00020,2\u0006\u0010$\u001a\u00020%2\u0006\u0010&\u001a\u00020'H\u0010ø\u0001\u0000¢\u0006\u0004\b-\u0010.J\u0010\u0010/\u001a\u00020\u001f2\u0006\u00100\u001a\u00020\u0019H\u0002J\u0013\u00101\u001a\u0002022\b\u00103\u001a\u0004\u0018\u000104HÖ\u0003J\t\u00105\u001a\u00020\u001cHÖ\u0001J\t\u00106\u001a\u000207HÖ\u0001R\u0011\u0010\u0005\u001a\u00020\u0006¢\u0006\b\n\u0000\u001a\u0004\b\n\u0010\u000bR\u0011\u0010\u0007\u001a\u00020\b¢\u0006\b\n\u0000\u001a\u0004\b\f\u0010\rR\u0014\u0010\u000e\u001a\u00020\u000fX\u0094\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0010\u0010\u0011R\u0011\u0010\u0003\u001a\u00020\u0004¢\u0006\b\n\u0000\u001a\u0004\b\u0012\u0010\u0013\u0082\u0002\u0007\n\u0005\b¡\u001e0\u0001¨\u00069"}, d2 = {"Lapp/rive/core/RenderContextGL;", "Lapp/rive/core/RenderContext;", "Lapp/rive/core/CheckableAutoCloseable;", ViewProps.DISPLAY, "Landroid/opengl/EGLDisplay;", "config", "Landroid/opengl/EGLConfig;", "context", "Landroid/opengl/EGLContext;", "(Landroid/opengl/EGLDisplay;Landroid/opengl/EGLConfig;Landroid/opengl/EGLContext;)V", "getConfig", "()Landroid/opengl/EGLConfig;", "getContext", "()Landroid/opengl/EGLContext;", "cppPointer", "Lapp/rive/core/UniquePointer;", "getCppPointer", "()Lapp/rive/core/UniquePointer;", "getDisplay", "()Landroid/opengl/EGLDisplay;", "component1", "component2", "component3", "copy", "cppConstructor", "", "cppCreateRiveRenderTarget", "width", "", "height", "cppDelete", "", "pointer", "cppDeleteRiveRenderTarget", "createImageSurface", "Lapp/rive/core/RiveSurface;", "drawKey", "Lapp/rive/core/DrawKey;", "commandQueue", "Lapp/rive/core/CommandQueue;", "createImageSurface-i4dAsZ4$kotlin_release", "(IIJLapp/rive/core/CommandQueue;)Lapp/rive/core/RiveSurface;", "createSurface", "surface", "Lapp/rive/core/CloseableSurface;", "createSurface-mDlYe8U$kotlin_release", "(Lapp/rive/core/CloseableSurface;JLapp/rive/core/CommandQueue;)Lapp/rive/core/RiveSurface;", "dispose", "address", "equals", "", JankRecordStore.SCREEN_OTHER, "", "hashCode", "toString", "", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nRenderContext.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RenderContext.kt\napp/rive/core/RenderContextGL\n+ 2 RiveLog.kt\napp/rive/RiveLog\n+ 3 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,622:1\n57#2:623\n69#2,2:624\n57#2:626\n69#2,2:627\n57#2:629\n57#2:630\n69#2,2:631\n57#2:633\n57#2:635\n69#2,2:636\n1#3:634\n*S KotlinDebug\n*F\n+ 1 RenderContext.kt\napp/rive/core/RenderContextGL\n*L\n269#1:623\n273#1:624,2\n277#1:626\n281#1:627,2\n285#1:629\n313#1:630\n323#1:631,2\n334#1:633\n389#1:635\n398#1:636,2\n*E\n"})
/* loaded from: classes.dex */
public final /* data */ class RenderContextGL extends RenderContext implements CheckableAutoCloseable {

    @NotNull
    public static final String TAG = "Rive/RenderContextGL";

    @NotNull
    private final EGLConfig config;

    @NotNull
    private final EGLContext context;

    @NotNull
    private final UniquePointer cppPointer;

    @NotNull
    private final EGLDisplay display;

    /* renamed from: Companion, reason: from kotlin metadata */
    @NotNull
    public static final Companion INSTANCE = new Companion(null);
    public static final int $stable = 8;

    @Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0010\u0000\n\u0002\b\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\b\u0086\u0003\u0018\u00002\u00020\u0001B\u0007\b\u0002¢\u0006\u0002\u0010\u0002J\u0010\u0010\u0005\u001a\u00020\u00062\u0006\u0010\u0007\u001a\u00020\bH\u0002J\u0018\u0010\t\u001a\u00020\n2\u0006\u0010\u0007\u001a\u00020\b2\u0006\u0010\u000b\u001a\u00020\u0006H\u0002J\b\u0010\f\u001a\u00020\bH\u0002R\u000e\u0010\u0003\u001a\u00020\u0004X\u0086T¢\u0006\u0002\n\u0000¨\u0006\r"}, d2 = {"Lapp/rive/core/RenderContextGL$Companion;", "", "()V", "TAG", "", "createConfig", "Landroid/opengl/EGLConfig;", ViewProps.DISPLAY, "Landroid/opengl/EGLDisplay;", "createContext", "Landroid/opengl/EGLContext;", "config", "createDisplay", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
    @SourceDebugExtension({"SMAP\nRenderContext.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RenderContext.kt\napp/rive/core/RenderContextGL$Companion\n+ 2 RiveLog.kt\napp/rive/RiveLog\n*L\n1#1,622:1\n57#2:623\n69#2,2:624\n57#2:626\n69#2,2:627\n57#2:629\n57#2:630\n69#2,2:631\n69#2,2:633\n57#2:635\n57#2:636\n69#2,2:637\n*S KotlinDebug\n*F\n+ 1 RenderContext.kt\napp/rive/core/RenderContextGL$Companion\n*L\n133#1:623\n137#1:624,2\n141#1:626\n146#1:627,2\n149#1:629\n179#1:630\n194#1:631,2\n200#1:633,2\n210#1:635\n236#1:636\n246#1:637,2\n*E\n"})
    public static final class Companion {
        public /* synthetic */ Companion(DefaultConstructorMarker defaultConstructorMarker) {
            this();
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final EGLConfig createConfig(final EGLDisplay display) {
            final EGLConfig eGLConfig;
            RenderContextGL$Companion$createConfig$1 renderContextGL$Companion$createConfig$1 = new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createConfig$1
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Choosing EGL config";
                }
            };
            RiveLog riveLog = RiveLog.INSTANCE;
            riveLog.getLogger().d(RenderContextGL.TAG, renderContextGL$Companion$createConfig$1);
            int[] iArr = new int[1];
            EGLConfig[] eGLConfigArr = new EGLConfig[1];
            if (!EGL14.eglChooseConfig(display, new int[]{12352, 4, 12339, 5, 12324, 8, 12323, 8, 12322, 8, 12321, 8, 12325, 0, 12326, 8, 12344}, 0, eGLConfigArr, 0, 1, iArr, 0)) {
                final String errorString = EGLError.INSTANCE.errorString(EGL14.eglGetError());
                riveLog.getLogger().e(RenderContextGL.TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createConfig$2
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.k("eglChooseConfig failed with error: ", errorString);
                    }
                });
                throw new RiveInitializationException(e.k("EGL config creation failed: ", errorString), new Throwable(errorString));
            }
            if (iArr[0] <= 0 || (eGLConfig = eGLConfigArr[0]) == null) {
                riveLog.getLogger().e(RenderContextGL.TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createConfig$3
                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return "eglChooseConfig could not find a suitable config";
                    }
                });
                throw new RiveInitializationException("Unable to find a suitable EGL config", null, 2, null);
            }
            Intrinsics.checkNotNull(eGLConfig);
            riveLog.getLogger().d(RenderContextGL.TAG, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createConfig$4
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    int createConfig$attr;
                    int createConfig$attr2;
                    int createConfig$attr3;
                    int createConfig$attr4;
                    int createConfig$attr5;
                    int createConfig$attr6;
                    createConfig$attr = RenderContextGL.Companion.createConfig$attr(display, eGLConfig, 12324);
                    createConfig$attr2 = RenderContextGL.Companion.createConfig$attr(display, eGLConfig, 12323);
                    createConfig$attr3 = RenderContextGL.Companion.createConfig$attr(display, eGLConfig, 12322);
                    createConfig$attr4 = RenderContextGL.Companion.createConfig$attr(display, eGLConfig, 12321);
                    createConfig$attr5 = RenderContextGL.Companion.createConfig$attr(display, eGLConfig, 12325);
                    createConfig$attr6 = RenderContextGL.Companion.createConfig$attr(display, eGLConfig, 12326);
                    StringBuilder q5 = e.q(createConfig$attr, "EGL config chosen successfully:\n  R=", createConfig$attr2, "\n  G=", "\n  B=");
                    e.y(q5, createConfig$attr3, "\n  A=", createConfig$attr4, "\n  Depth=");
                    q5.append(createConfig$attr5);
                    q5.append("\n  Stencil=");
                    q5.append(createConfig$attr6);
                    return q5.toString();
                }
            });
            return eGLConfig;
        }

        /* JADX INFO: Access modifiers changed from: private */
        public static final int createConfig$attr(EGLDisplay eGLDisplay, EGLConfig eGLConfig, int i5) {
            int[] iArr = new int[1];
            EGL14.eglGetConfigAttrib(eGLDisplay, eGLConfig, i5, iArr, 0);
            return iArr[0];
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final EGLContext createContext(EGLDisplay display, EGLConfig config) {
            RenderContextGL$Companion$createContext$1 renderContextGL$Companion$createContext$1 = new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createContext$1
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Creating EGL context";
                }
            };
            RiveLog riveLog = RiveLog.INSTANCE;
            riveLog.getLogger().d(RenderContextGL.TAG, renderContextGL$Companion$createContext$1);
            EGLContext eglCreateContext = EGL14.eglCreateContext(display, config, EGL14.EGL_NO_CONTEXT, new int[]{12440, 2, 12344}, 0);
            if (!Intrinsics.areEqual(eglCreateContext, EGL14.EGL_NO_CONTEXT)) {
                Intrinsics.checkNotNull(eglCreateContext);
                return eglCreateContext;
            }
            final String errorString = EGLError.INSTANCE.errorString(EGL14.eglGetError());
            riveLog.getLogger().e(RenderContextGL.TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createContext$2
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("eglCreateContext failed with error: ", errorString);
                }
            });
            throw new RiveInitializationException("Unable to create EGL context", new Throwable(errorString));
        }

        /* JADX INFO: Access modifiers changed from: private */
        public final EGLDisplay createDisplay() {
            RenderContextGL$Companion$createDisplay$1 renderContextGL$Companion$createDisplay$1 = new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createDisplay$1
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Getting EGL display";
                }
            };
            RiveLog riveLog = RiveLog.INSTANCE;
            riveLog.getLogger().d(RenderContextGL.TAG, renderContextGL$Companion$createDisplay$1);
            EGLDisplay eglGetDisplay = EGL14.eglGetDisplay(0);
            if (Intrinsics.areEqual(eglGetDisplay, EGL14.EGL_NO_DISPLAY)) {
                final String errorString = EGLError.INSTANCE.errorString(EGL14.eglGetError());
                riveLog.getLogger().e(RenderContextGL.TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createDisplay$2
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.k("eglGetDisplay failed with error: ", errorString);
                    }
                });
                throw new RiveInitializationException("Unable to get EGL display", new Throwable(errorString));
            }
            riveLog.getLogger().d(RenderContextGL.TAG, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createDisplay$3
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Initializing EGL";
                }
            });
            final int[] iArr = new int[1];
            final int[] iArr2 = new int[1];
            if (EGL14.eglInitialize(eglGetDisplay, iArr, 0, iArr2, 0)) {
                riveLog.getLogger().d(RenderContextGL.TAG, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createDisplay$5
                    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                    {
                        super(0);
                    }

                    @Override // kotlin.jvm.functions.Function0
                    @NotNull
                    public final String invoke() {
                        return e.f(iArr[0], iArr2[0], "EGL initialized with version ", ".");
                    }
                });
                Intrinsics.checkNotNull(eglGetDisplay);
                return eglGetDisplay;
            }
            final String errorString2 = EGLError.INSTANCE.errorString(EGL14.eglGetError());
            riveLog.getLogger().e(RenderContextGL.TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$Companion$createDisplay$4
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("eglInitialize failed with error: ", errorString2);
                }
            });
            throw new RiveInitializationException("Unable to initialize EGL", new Throwable(errorString2));
        }

        private Companion() {
        }
    }

    public RenderContextGL() {
        this(null, null, null, 7, null);
    }

    public static /* synthetic */ RenderContextGL copy$default(RenderContextGL renderContextGL, EGLDisplay eGLDisplay, EGLConfig eGLConfig, EGLContext eGLContext, int i5, Object obj) {
        if ((i5 & 1) != 0) {
            eGLDisplay = renderContextGL.display;
        }
        if ((i5 & 2) != 0) {
            eGLConfig = renderContextGL.config;
        }
        if ((i5 & 4) != 0) {
            eGLContext = renderContextGL.context;
        }
        return renderContextGL.copy(eGLDisplay, eGLConfig, eGLContext);
    }

    private final native long cppConstructor(long display, long context);

    private final native long cppCreateRiveRenderTarget(int width, int height);

    private final native void cppDelete(long pointer);

    private final native void cppDeleteRiveRenderTarget(long pointer);

    /* JADX INFO: Access modifiers changed from: private */
    public final void dispose(long address) {
        RenderContextGL$dispose$1 renderContextGL$dispose$1 = new Function0<String>() { // from class: app.rive.core.RenderContextGL$dispose$1
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Destroying EGL context";
            }
        };
        RiveLog riveLog = RiveLog.INSTANCE;
        riveLog.getLogger().d(TAG, renderContextGL$dispose$1);
        if (!EGL14.eglDestroyContext(this.display, this.context)) {
            final String errorString = EGLError.INSTANCE.errorString(EGL14.eglGetError());
            riveLog.getLogger().e(TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$dispose$2
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("eglDestroyContext failed with error: ", errorString);
                }
            });
            throw new RiveShutdownException("Unable to destroy EGL context", new Throwable(errorString));
        }
        riveLog.getLogger().d(TAG, new Function0<String>() { // from class: app.rive.core.RenderContextGL$dispose$3
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Terminating EGL display";
            }
        });
        if (EGL14.eglTerminate(this.display)) {
            riveLog.getLogger().d(TAG, new Function0<String>() { // from class: app.rive.core.RenderContextGL$dispose$5
                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return "Deleting RenderContextGL native object";
                }
            });
            cppDelete(address);
        } else {
            final String errorString2 = EGLError.INSTANCE.errorString(EGL14.eglGetError());
            riveLog.getLogger().e(TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$dispose$4
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("eglTerminate failed with error: ", errorString2);
                }
            });
            throw new RiveShutdownException("Unable to terminate EGL display", new Throwable(errorString2));
        }
    }

    @NotNull
    /* renamed from: component1, reason: from getter */
    public final EGLDisplay getDisplay() {
        return this.display;
    }

    @NotNull
    /* renamed from: component2, reason: from getter */
    public final EGLConfig getConfig() {
        return this.config;
    }

    @NotNull
    /* renamed from: component3, reason: from getter */
    public final EGLContext getContext() {
        return this.context;
    }

    @NotNull
    public final RenderContextGL copy(@NotNull EGLDisplay display, @NotNull EGLConfig config, @NotNull EGLContext context) {
        Intrinsics.checkNotNullParameter(display, "display");
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(context, "context");
        return new RenderContextGL(display, config, context);
    }

    @Override // app.rive.core.RenderContext
    @NotNull
    /* renamed from: createImageSurface-i4dAsZ4$kotlin_release */
    public RiveSurface mo215createImageSurfacei4dAsZ4$kotlin_release(final int width, final int height, long drawKey, @NotNull CommandQueue commandQueue) {
        EGLSurface eGLSurface;
        Throwable th2;
        long j;
        Intrinsics.checkNotNullParameter(commandQueue, "commandQueue");
        if (width <= 0 || height <= 0) {
            throw new IllegalArgumentException("Image surfaces require a positive width and height.");
        }
        Function0<String> function0 = new Function0<String>() { // from class: app.rive.core.RenderContextGL$createImageSurface$2
            /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return h.d(width, "Creating EGL PBuffer surface (", height, " x ", ")");
            }
        };
        RiveLog riveLog = RiveLog.INSTANCE;
        riveLog.getLogger().d(TAG, function0);
        EGLSurface eglCreatePbufferSurface = EGL14.eglCreatePbufferSurface(this.display, this.config, new int[]{12375, width, 12374, height, 12344}, 0);
        if (Intrinsics.areEqual(eglCreatePbufferSurface, EGL14.EGL_NO_SURFACE)) {
            final String errorString = EGLError.INSTANCE.errorString(EGL14.eglGetError());
            riveLog.getLogger().e(TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$createImageSurface$3
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("eglCreatePbufferSurface failed with error: ", errorString);
                }
            });
            throw new RiveRenderException("Unable to create EGL PBuffer surface", new Throwable(errorString));
        }
        try {
            j = cppCreateRiveRenderTarget(width, height);
            try {
                Intrinsics.checkNotNull(eglCreatePbufferSurface);
                eGLSurface = eglCreatePbufferSurface;
            } catch (Throwable th3) {
                th = th3;
                eGLSurface = eglCreatePbufferSurface;
            }
        } catch (Throwable th4) {
            eGLSurface = eglCreatePbufferSurface;
            th2 = th4;
            j = 0;
        }
        try {
            return new RiveEGLPBufferSurface(eGLSurface, this.display, commandQueue, j, drawKey, width, height, null);
        } catch (Throwable th5) {
            th = th5;
            th2 = th;
            if (j != 0) {
                cppDeleteRiveRenderTarget(j);
            }
            EGL14.eglDestroySurface(this.display, eGLSurface);
            throw th2;
        }
    }

    /* JADX WARN: Removed duplicated region for block: B:19:0x0087  */
    @Override // app.rive.core.RenderContext
    @NotNull
    /* renamed from: createSurface-mDlYe8U$kotlin_release */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public RiveSurface mo216createSurfacemDlYe8U$kotlin_release(@NotNull CloseableSurface surface, long drawKey, @NotNull CommandQueue commandQueue) {
        EGLSurface eGLSurface;
        long j;
        final int i5;
        final int i6;
        Intrinsics.checkNotNullParameter(surface, "surface");
        Intrinsics.checkNotNullParameter(commandQueue, "commandQueue");
        if (!surface.getSurface().isValid()) {
            throw new RiveRenderException("Unable to create Android Surface", null, 2, null);
        }
        RenderContextGL$createSurface$1 renderContextGL$createSurface$1 = new Function0<String>() { // from class: app.rive.core.RenderContextGL$createSurface$1
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Creating EGL window surface";
            }
        };
        RiveLog riveLog = RiveLog.INSTANCE;
        riveLog.getLogger().d(TAG, renderContextGL$createSurface$1);
        EGLSurface eglCreateWindowSurface = EGL14.eglCreateWindowSurface(this.display, this.config, surface.getSurface(), new int[]{12344}, 0);
        if (Intrinsics.areEqual(eglCreateWindowSurface, EGL14.EGL_NO_SURFACE)) {
            final String errorString = EGLError.INSTANCE.errorString(EGL14.eglGetError());
            riveLog.getLogger().e(TAG, null, new Function0<String>() { // from class: app.rive.core.RenderContextGL$createSurface$2
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return e.k("eglCreateWindowSurface failed with error: ", errorString);
                }
            });
            throw new RiveRenderException("Unable to create EGL surface", new Throwable(errorString));
        }
        try {
            int[] iArr = new int[2];
            EGL14.eglQuerySurface(this.display, eglCreateWindowSurface, 12375, iArr, 0);
            EGL14.eglQuerySurface(this.display, eglCreateWindowSurface, 12374, iArr, 1);
            i5 = iArr[0];
            i6 = iArr[1];
            riveLog.getLogger().d(TAG, new Function0<String>() { // from class: app.rive.core.RenderContextGL$createSurface$3
                /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
                {
                    super(0);
                }

                @Override // kotlin.jvm.functions.Function0
                @NotNull
                public final String invoke() {
                    return h.d(i5, "Created EGL surface (", i6, " x ", ")");
                }
            });
            eGLSurface = eglCreateWindowSurface;
        } catch (Throwable th2) {
            th = th2;
            eGLSurface = eglCreateWindowSurface;
        }
        try {
            j = cppCreateRiveRenderTarget(i5, i6);
            try {
                Intrinsics.checkNotNull(eGLSurface);
                return new RiveEGLSurface(eGLSurface, this.display, surface, commandQueue, j, drawKey, i5, i6, null);
            } catch (Throwable th3) {
                th = th3;
                if (j != 0) {
                    cppDeleteRiveRenderTarget(j);
                }
                EGL14.eglDestroySurface(this.display, eGLSurface);
                throw th;
            }
        } catch (Throwable th4) {
            th = th4;
            j = 0;
            if (j != 0) {
            }
            EGL14.eglDestroySurface(this.display, eGLSurface);
            throw th;
        }
    }

    public boolean equals(Object other) {
        if (this == other) {
            return true;
        }
        if (!(other instanceof RenderContextGL)) {
            return false;
        }
        RenderContextGL renderContextGL = (RenderContextGL) other;
        return Intrinsics.areEqual(this.display, renderContextGL.display) && Intrinsics.areEqual(this.config, renderContextGL.config) && Intrinsics.areEqual(this.context, renderContextGL.context);
    }

    @NotNull
    public final EGLConfig getConfig() {
        return this.config;
    }

    @NotNull
    public final EGLContext getContext() {
        return this.context;
    }

    @Override // app.rive.core.RenderContext
    @NotNull
    public UniquePointer getCppPointer() {
        return this.cppPointer;
    }

    @NotNull
    public final EGLDisplay getDisplay() {
        return this.display;
    }

    public int hashCode() {
        return this.context.hashCode() + ((this.config.hashCode() + (this.display.hashCode() * 31)) * 31);
    }

    @NotNull
    public String toString() {
        return "RenderContextGL(display=" + this.display + ", config=" + this.config + ", context=" + this.context + ")";
    }

    /* JADX WARN: Illegal instructions before constructor call */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public /* synthetic */ RenderContextGL(EGLDisplay eGLDisplay, EGLConfig eGLConfig, EGLContext eGLContext, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(eGLDisplay, eGLConfig, (i5 & 4) != 0 ? INSTANCE.createContext(eGLDisplay, eGLConfig) : eGLContext);
        eGLDisplay = (i5 & 1) != 0 ? INSTANCE.createDisplay() : eGLDisplay;
        eGLConfig = (i5 & 2) != 0 ? INSTANCE.createConfig(eGLDisplay) : eGLConfig;
    }

    public RenderContextGL(@NotNull EGLDisplay display, @NotNull EGLConfig config, @NotNull EGLContext context) {
        Intrinsics.checkNotNullParameter(display, "display");
        Intrinsics.checkNotNullParameter(config, "config");
        Intrinsics.checkNotNullParameter(context, "context");
        this.display = display;
        this.config = config;
        this.context = context;
        this.cppPointer = new UniquePointer(cppConstructor(display.getNativeHandle(), context.getNativeHandle()), TAG, new RenderContextGL$cppPointer$1(this));
    }
}
