package app.rive.runtime.kotlin.renderers;

import android.os.Trace;
import app.rive.RiveLog;
import app.rive.runtime.kotlin.controllers.RiveFileController;
import app.rive.runtime.kotlin.core.Alignment;
import app.rive.runtime.kotlin.core.Artboard;
import app.rive.runtime.kotlin.core.File;
import app.rive.runtime.kotlin.core.Fit;
import app.rive.runtime.kotlin.core.RendererType;
import app.rive.runtime.kotlin.core.Rive;
import com.discord.js_watchdog.SharedPreferencesKey;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import kotlin.jvm.internal.SourceDebugExtension;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000>\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000b\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0007\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0002\b\u0007\b\u0017\u0018\u0000 \u001c2\u00020\u0001:\u0001\u001cB!\u0012\b\b\u0002\u0010\u0002\u001a\u00020\u0003\u0012\b\b\u0002\u0010\u0004\u001a\u00020\u0005\u0012\u0006\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\u0010\u0010\u0015\u001a\u00020\u00162\u0006\u0010\u0017\u001a\u00020\u0012H\u0017J\b\u0010\u0018\u001a\u00020\u0016H\u0014J\b\u0010\u0019\u001a\u00020\u0016H\u0017J\u0006\u0010\u001a\u001a\u00020\u0016J\b\u0010\u001b\u001a\u00020\u0016H\u0017R\u0014\u0010\t\u001a\u00020\n8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u000b\u0010\fR\u000e\u0010\u0006\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0014\u0010\r\u001a\u00020\u000e8BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u000f\u0010\u0010R\u0014\u0010\u0011\u001a\u00020\u00128BX\u0082\u0004¢\u0006\u0006\u001a\u0004\b\u0013\u0010\u0014¨\u0006\u001d"}, d2 = {"Lapp/rive/runtime/kotlin/renderers/RiveArtboardRenderer;", "Lapp/rive/runtime/kotlin/renderers/Renderer;", SharedPreferencesKey.TRACE, "", "rendererType", "Lapp/rive/runtime/kotlin/core/RendererType;", "controller", "Lapp/rive/runtime/kotlin/controllers/RiveFileController;", "(ZLapp/rive/runtime/kotlin/core/RendererType;Lapp/rive/runtime/kotlin/controllers/RiveFileController;)V", "alignment", "Lapp/rive/runtime/kotlin/core/Alignment;", "getAlignment", "()Lapp/rive/runtime/kotlin/core/Alignment;", "fit", "Lapp/rive/runtime/kotlin/core/Fit;", "getFit", "()Lapp/rive/runtime/kotlin/core/Fit;", "scaleFactor", "", "getScaleFactor", "()F", "advance", "", "elapsed", "disposeDependencies", "draw", "reset", "resizeArtboard", "Companion", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
@SourceDebugExtension({"SMAP\nRiveArtboardRenderer.kt\nKotlin\n*S Kotlin\n*F\n+ 1 RiveArtboardRenderer.kt\napp/rive/runtime/kotlin/renderers/RiveArtboardRenderer\n+ 2 RiveLog.kt\napp/rive/RiveLog\n+ 3 Tracing.kt\napp/rive/core/TracingKt\n+ 4 fake.kt\nkotlin/jvm/internal/FakeKt\n*L\n1#1,119:1\n57#2:120\n57#2:133\n12#3,6:121\n12#3,6:127\n1#4:134\n*S KotlinDebug\n*F\n+ 1 RiveArtboardRenderer.kt\napp/rive/runtime/kotlin/renderers/RiveArtboardRenderer\n*L\n30#1:120\n106#1:133\n44#1:121,6\n62#1:127,6\n*E\n"})
/* loaded from: classes.dex */
public class RiveArtboardRenderer extends Renderer {

    @NotNull
    public static final String TAG = "RiveL/RiveArtboardRenderer";

    @NotNull
    private RiveFileController controller;
    public static final int $stable = 8;

    public /* synthetic */ RiveArtboardRenderer(boolean z5, RendererType rendererType, RiveFileController riveFileController, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this((i5 & 1) != 0 ? false : z5, (i5 & 2) != 0 ? Rive.INSTANCE.getDefaultRendererType() : rendererType, riveFileController);
    }

    private final Alignment getAlignment() {
        return this.controller.getAlignment();
    }

    private final Fit getFit() {
        return this.controller.getFit();
    }

    private final float getScaleFactor() {
        return this.controller.getLayoutScaleFactorActive$kotlin_release();
    }

    @Override // app.rive.runtime.kotlin.renderers.Renderer
    public void advance(float elapsed) {
        if (getHasCppObject()) {
            if (this.controller.getIsActive()) {
                this.controller.advance(elapsed);
            }
            synchronized (this.controller.getStartStopLock()) {
                try {
                    if (!this.controller.isAdvancing()) {
                        stopThread$kotlin_release();
                    }
                    Unit unit = Unit.a;
                } catch (Throwable th2) {
                    throw th2;
                }
            }
        }
    }

    @Override // app.rive.runtime.kotlin.renderers.Renderer
    public void disposeDependencies() {
        Object obj;
        File file = this.controller.getFile();
        if (file == null || (obj = file.getFileLock()) == null) {
            obj = this;
        }
        synchronized (obj) {
            super.disposeDependencies();
            Unit unit = Unit.a;
        }
    }

    @Override // app.rive.runtime.kotlin.renderers.Renderer
    public void draw() {
        if (this.controller.getRequireArtboardResize().getAndSet(false)) {
            resizeArtboard();
        }
        synchronized (getFrameLock()) {
            if (getHasCppObject() && this.controller.getIsActive()) {
                Artboard activeArtboard = this.controller.getActiveArtboard();
                if (activeArtboard != null) {
                    activeArtboard.draw(getCppPointer(), getFit(), getAlignment(), getScaleFactor());
                    Unit unit = Unit.a;
                }
            }
        }
    }

    public final void reset() {
        RiveLog.INSTANCE.getLogger().d(TAG, new Function0<String>() { // from class: app.rive.runtime.kotlin.renderers.RiveArtboardRenderer$reset$1
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Reset.";
            }
        });
        this.controller.stopAnimations();
        this.controller.reset$kotlin_release();
        stop();
        RiveFileController.selectArtboard$default(this.controller, null, 1, null);
        start();
    }

    /* JADX WARN: Removed duplicated region for block: B:21:0x005b A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /* JADX WARN: Removed duplicated region for block: B:54:0x0098 A[EXC_TOP_SPLITTER, SYNTHETIC] */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public void resizeArtboard() {
        Object obj;
        Object obj2;
        if (getFit() == Fit.LAYOUT) {
            Trace.beginSection("Rive/Layout/ResizeArtboard");
            try {
                synchronized (getFrameLock()) {
                    try {
                        if (getHasCppObject() && this.controller.getIsActive()) {
                            Float valueOf = Float.valueOf(getWidth() / getScaleFactor());
                            Float valueOf2 = Float.valueOf(getHeight() / getScaleFactor());
                            float floatValue = valueOf.floatValue();
                            float floatValue2 = valueOf2.floatValue();
                            File file = this.controller.getFile();
                            if (file != null) {
                                obj2 = file.getFileLock();
                                if (obj2 == null) {
                                }
                                synchronized (obj2) {
                                    Artboard activeArtboard = this.controller.getActiveArtboard();
                                    if (activeArtboard != null) {
                                        activeArtboard.setWidth(floatValue);
                                        activeArtboard.setHeight(floatValue2);
                                    }
                                }
                                Trace.endSection();
                                return;
                            }
                            obj2 = this;
                            synchronized (obj2) {
                            }
                        }
                        Trace.endSection();
                        return;
                    } finally {
                    }
                }
            } finally {
            }
        }
        Trace.beginSection("Rive/Layout/ResetArtboardSize");
        try {
            File file2 = this.controller.getFile();
            if (file2 != null) {
                obj = file2.getFileLock();
                if (obj == null) {
                }
                synchronized (obj) {
                    Artboard activeArtboard2 = this.controller.getActiveArtboard();
                    if (activeArtboard2 != null) {
                        activeArtboard2.resetArtboardSize();
                        Unit unit = Unit.a;
                    }
                }
                Trace.endSection();
                return;
            }
            obj = this;
            synchronized (obj) {
            }
        } finally {
        }
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveArtboardRenderer(boolean z5, @NotNull RendererType rendererType, @NotNull RiveFileController controller) {
        super(rendererType, z5);
        Intrinsics.checkNotNullParameter(rendererType, "rendererType");
        Intrinsics.checkNotNullParameter(controller, "controller");
        this.controller = controller;
        RiveLog.INSTANCE.getLogger().d(TAG, new Function0<String>() { // from class: app.rive.runtime.kotlin.renderers.RiveArtboardRenderer.1
            @Override // kotlin.jvm.functions.Function0
            @NotNull
            public final String invoke() {
                return "Initializing.";
            }
        });
        RiveFileController riveFileController = this.controller;
        riveFileController.setOnStart(new RiveArtboardRenderer$2$1(this));
        riveFileController.acquire();
        getDependencies().add(riveFileController);
    }
}
