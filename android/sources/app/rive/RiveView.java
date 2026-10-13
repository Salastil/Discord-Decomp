package app.rive;

import android.content.Context;
import android.graphics.SurfaceTexture;
import android.util.AttributeSet;
import android.view.TextureView;
import android.widget.FrameLayout;
import androidx.lifecycle.LifecycleOwner;
import androidx.lifecycle.c1;
import app.rive.core.ArtboardHandle;
import app.rive.core.CommandQueue;
import app.rive.core.RiveSurface;
import app.rive.core.StateMachineHandle;
import app.rive.core.SurfaceTextureSurface;
import fo.o;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import nr.x;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000^\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\b\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\b\u0005\n\u0002\u0010\u0002\n\u0002\b\u0003\n\u0002\u0018\u0002\n\u0000\n\u0002\u0010\u000e\n\u0000\b\u0007\u0018\u00002\u00020\u0001B%\b\u0007\u0012\u0006\u0010\u0002\u001a\u00020\u0003\u0012\n\b\u0002\u0010\u0004\u001a\u0004\u0018\u00010\u0005\u0012\b\b\u0002\u0010\u0006\u001a\u00020\u0007¢\u0006\u0002\u0010\bJ\u0018\u0010\u001c\u001a\u00020\u000e2\u0006\u0010\u001d\u001a\u00020\f2\u0006\u0010\u0015\u001a\u00020\u0016H\u0002J\b\u0010\u001e\u001a\u00020\u001fH\u0014J\b\u0010 \u001a\u00020\u001fH\u0014J&\u0010!\u001a\u00020\u001f2\u0006\u0010\u001d\u001a\u00020\f2\n\b\u0002\u0010\"\u001a\u0004\u0018\u00010#2\n\b\u0002\u0010$\u001a\u0004\u0018\u00010%R\u0016\u0010\t\u001a\u0004\u0018\u00010\nX\u0082\u000eø\u0001\u0000ø\u0001\u0001¢\u0006\u0002\n\u0000R\u0010\u0010\u000b\u001a\u0004\u0018\u00010\fX\u0082\u000e¢\u0006\u0002\n\u0000R\"\u0010\u000f\u001a\u0004\u0018\u00010\u000e2\b\u0010\r\u001a\u0004\u0018\u00010\u000e@BX\u0082\u000e¢\u0006\b\n\u0000\"\u0004\b\u0010\u0010\u0011R\u0016\u0010\u0012\u001a\u0004\u0018\u00010\u0013X\u0082\u000eø\u0001\u0000ø\u0001\u0001¢\u0006\u0002\n\u0000R\u000e\u0010\u0014\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0010\u0010\u0015\u001a\u0004\u0018\u00010\u0016X\u0082\u000e¢\u0006\u0002\n\u0000R\u000e\u0010\u0017\u001a\u00020\u0007X\u0082\u000e¢\u0006\u0002\n\u0000R\u0011\u0010\u0018\u001a\u00020\u0019¢\u0006\b\n\u0000\u001a\u0004\b\u001a\u0010\u001b\u0082\u0002\u000b\n\u0005\b¡\u001e0\u0001\n\u0002\b!¨\u0006&"}, d2 = {"Lapp/rive/RiveView;", "Landroid/widget/FrameLayout;", "context", "Landroid/content/Context;", "attrs", "Landroid/util/AttributeSet;", "defStyle", "", "(Landroid/content/Context;Landroid/util/AttributeSet;I)V", "artboardHandle", "Lapp/rive/core/ArtboardHandle;", "riveFile", "Lapp/rive/RiveFile;", "value", "Lapp/rive/core/RiveSurface;", "riveSurface", "setRiveSurface", "(Lapp/rive/core/RiveSurface;)V", "stateMachineHandle", "Lapp/rive/core/StateMachineHandle;", "surfaceHeight", "surfaceTexture", "Landroid/graphics/SurfaceTexture;", "surfaceWidth", "textureView", "Landroid/view/TextureView;", "getTextureView", "()Landroid/view/TextureView;", "createRiveSurface", "file", "onAttachedToWindow", "", "onDetachedFromWindow", "setRiveFile", "artboard", "Lapp/rive/Artboard;", "stateMachineName", "", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RiveView extends FrameLayout {
    public static final int $stable = 8;
    private ArtboardHandle artboardHandle;
    private RiveFile riveFile;
    private RiveSurface riveSurface;
    private StateMachineHandle stateMachineHandle;
    private int surfaceHeight;
    private SurfaceTexture surfaceTexture;
    private int surfaceWidth;

    @NotNull
    private final TextureView textureView;

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public RiveView(@NotNull Context context) {
        this(context, null, 0, 6, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final RiveSurface createRiveSurface(RiveFile file, SurfaceTexture surfaceTexture) {
        return file.getRiveWorker().createRiveSurface(new SurfaceTextureSurface(surfaceTexture));
    }

    public static /* synthetic */ void setRiveFile$default(RiveView riveView, RiveFile riveFile, Artboard artboard, String str, int i5, Object obj) {
        if ((i5 & 2) != 0) {
            artboard = null;
        }
        if ((i5 & 4) != 0) {
            str = null;
        }
        riveView.setRiveFile(riveFile, artboard, str);
    }

    /* JADX INFO: Access modifiers changed from: private */
    public final void setRiveSurface(RiveSurface riveSurface) {
        RiveSurface riveSurface2 = this.riveSurface;
        if (riveSurface2 != null && riveSurface2 != null) {
            riveSurface2.close();
        }
        this.riveSurface = riveSurface;
    }

    @NotNull
    public final TextureView getTextureView() {
        return this.textureView;
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onAttachedToWindow() {
        CommandQueue riveWorker;
        super.onAttachedToWindow();
        LifecycleOwner b10 = c1.b(this);
        if (b10 == null) {
            throw new IllegalStateException("RiveView must be hosted under a LifecycleOwner.");
        }
        RiveFile riveFile = this.riveFile;
        if (riveFile != null && (riveWorker = riveFile.getRiveWorker()) != null) {
            riveWorker.acquire("RiveView");
        }
        x.t(c1.c(b10), null, new RiveView$onAttachedToWindow$1(b10, this, null), 3);
    }

    @Override // android.view.ViewGroup, android.view.View
    public void onDetachedFromWindow() {
        CommandQueue riveWorker;
        super.onDetachedFromWindow();
        RiveFile riveFile = this.riveFile;
        if (riveFile == null || (riveWorker = riveFile.getRiveWorker()) == null) {
            return;
        }
        riveWorker.release("RiveView", "Detached from window");
    }

    public final void setRiveFile(@NotNull RiveFile file, Artboard artboard, String stateMachineName) {
        StateMachineHandle m220boximpl;
        Intrinsics.checkNotNullParameter(file, "file");
        this.riveFile = file;
        this.artboardHandle = ArtboardHandle.m104boximpl(artboard != null ? artboard.getArtboardHandle() : file.getRiveWorker().m128createDefaultArtboard6NrLy0M(file.getFileHandle()));
        if (stateMachineName != null) {
            CommandQueue riveWorker = file.getRiveWorker();
            ArtboardHandle artboardHandle = this.artboardHandle;
            Intrinsics.checkNotNull(artboardHandle);
            m220boximpl = StateMachineHandle.m220boximpl(riveWorker.m130createStateMachineByNameItmKBmM(artboardHandle.m110unboximpl(), stateMachineName));
        } else {
            CommandQueue riveWorker2 = file.getRiveWorker();
            ArtboardHandle artboardHandle2 = this.artboardHandle;
            Intrinsics.checkNotNull(artboardHandle2);
            m220boximpl = StateMachineHandle.m220boximpl(riveWorker2.m129createDefaultStateMachinexY8vNfM(artboardHandle2.m110unboximpl()));
        }
        this.stateMachineHandle = m220boximpl;
        SurfaceTexture surfaceTexture = this.surfaceTexture;
        if (surfaceTexture == null || this.riveSurface != null) {
            return;
        }
        Intrinsics.checkNotNull(surfaceTexture);
        setRiveSurface(createRiveSurface(file, surfaceTexture));
    }

    /* JADX WARN: 'this' call moved to the top of the method (can break code semantics) */
    public RiveView(@NotNull Context context, AttributeSet attributeSet) {
        this(context, attributeSet, 0, 4, null);
        Intrinsics.checkNotNullParameter(context, "context");
    }

    public /* synthetic */ RiveView(Context context, AttributeSet attributeSet, int i5, int i6, DefaultConstructorMarker defaultConstructorMarker) {
        this(context, (i6 & 2) != 0 ? null : attributeSet, (i6 & 4) != 0 ? 0 : i5);
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveView(@NotNull Context context, AttributeSet attributeSet, int i5) {
        super(context, attributeSet, i5);
        Intrinsics.checkNotNullParameter(context, "context");
        TextureView textureView = new TextureView(context);
        textureView.setLayoutParams(new FrameLayout.LayoutParams(-1, -1));
        textureView.setSurfaceTextureListener(new TextureView.SurfaceTextureListener() { // from class: app.rive.RiveView$textureView$1$1
            @Override // android.view.TextureView.SurfaceTextureListener
            public void onSurfaceTextureAvailable(@NotNull SurfaceTexture newSurfaceTexture, int width, int height) {
                RiveFile riveFile;
                RiveSurface createRiveSurface;
                Intrinsics.checkNotNullParameter(newSurfaceTexture, "newSurfaceTexture");
                RiveView.this.surfaceTexture = newSurfaceTexture;
                RiveView.this.surfaceWidth = width;
                RiveView.this.surfaceHeight = height;
                riveFile = RiveView.this.riveFile;
                if (riveFile != null) {
                    RiveView riveView = RiveView.this;
                    createRiveSurface = riveView.createRiveSurface(riveFile, newSurfaceTexture);
                    riveView.setRiveSurface(createRiveSurface);
                }
            }

            @Override // android.view.TextureView.SurfaceTextureListener
            public boolean onSurfaceTextureDestroyed(@NotNull SurfaceTexture destroyedSurfaceTexture) {
                Intrinsics.checkNotNullParameter(destroyedSurfaceTexture, "destroyedSurfaceTexture");
                RiveView.this.setRiveSurface(null);
                return false;
            }

            @Override // android.view.TextureView.SurfaceTextureListener
            public void onSurfaceTextureSizeChanged(@NotNull SurfaceTexture surfaceTexture, int width, int height) {
                Intrinsics.checkNotNullParameter(surfaceTexture, "surfaceTexture");
                throw new o("An operation is not implemented: Not yet implemented");
            }

            @Override // android.view.TextureView.SurfaceTextureListener
            public void onSurfaceTextureUpdated(@NotNull SurfaceTexture surfaceTexture) {
                Intrinsics.checkNotNullParameter(surfaceTexture, "surfaceTexture");
            }
        });
        this.textureView = textureView;
        addView(textureView, new FrameLayout.LayoutParams(-1, -1));
    }
}
