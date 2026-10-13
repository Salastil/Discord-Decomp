package app.rive.runtime.kotlin;

import app.rive.runtime.kotlin.core.File;
import app.rive.runtime.kotlin.core.FileAssetLoader;
import app.rive.runtime.kotlin.core.RendererType;
import c5.h;
import c5.m;
import c5.o;
import c5.p;
import c5.q;
import java.io.UnsupportedEncodingException;
import kotlin.Metadata;
import kotlin.jvm.internal.DefaultConstructorMarker;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000@\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\u0010\u000e\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0004\n\u0002\u0010\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0002\b\u0006\b\u0007\u0018\u00002\b\u0012\u0004\u0012\u00020\u00020\u0001B9\u0012\u0006\u0010\u0004\u001a\u00020\u0003\u0012\u0006\u0010\u0006\u001a\u00020\u0005\u0012\f\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\u0007\u0012\u0006\u0010\n\u001a\u00020\t\u0012\n\b\u0002\u0010\f\u001a\u0004\u0018\u00010\u000b¢\u0006\u0004\b\r\u0010\u000eJ\u0017\u0010\u0011\u001a\u00020\u00102\u0006\u0010\u000f\u001a\u00020\u0002H\u0014¢\u0006\u0004\b\u0011\u0010\u0012J\u001f\u0010\u0015\u001a\b\u0012\u0004\u0012\u00020\u00020\u00142\b\u0010\u000f\u001a\u0004\u0018\u00010\u0013H\u0014¢\u0006\u0004\b\u0015\u0010\u0016R\u0014\u0010\u0006\u001a\u00020\u00058\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\u0006\u0010\u0017R\u001a\u0010\b\u001a\b\u0012\u0004\u0012\u00020\u00020\u00078\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\b\u0010\u0018R\u0016\u0010\f\u001a\u0004\u0018\u00010\u000b8\u0002X\u0082\u0004¢\u0006\u0006\n\u0004\b\f\u0010\u0019¨\u0006\u001a"}, d2 = {"Lapp/rive/runtime/kotlin/RiveFileRequest;", "Lc5/m;", "Lapp/rive/runtime/kotlin/core/File;", "", "url", "Lapp/rive/runtime/kotlin/core/RendererType;", "rendererType", "Lc5/p;", "listener", "Lc5/o;", "errorListener", "Lapp/rive/runtime/kotlin/core/FileAssetLoader;", "assetLoader", "<init>", "(Ljava/lang/String;Lapp/rive/runtime/kotlin/core/RendererType;Lc5/p;Lc5/o;Lapp/rive/runtime/kotlin/core/FileAssetLoader;)V", "response", "", "deliverResponse", "(Lapp/rive/runtime/kotlin/core/File;)V", "Lc5/h;", "Lc5/q;", "parseNetworkResponse", "(Lc5/h;)Lc5/q;", "Lapp/rive/runtime/kotlin/core/RendererType;", "Lc5/p;", "Lapp/rive/runtime/kotlin/core/FileAssetLoader;", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class RiveFileRequest extends m {
    public static final int $stable = 8;
    private final FileAssetLoader assetLoader;

    @NotNull
    private final p listener;

    @NotNull
    private final RendererType rendererType;

    public /* synthetic */ RiveFileRequest(String str, RendererType rendererType, p pVar, o oVar, FileAssetLoader fileAssetLoader, int i5, DefaultConstructorMarker defaultConstructorMarker) {
        this(str, rendererType, pVar, oVar, (i5 & 16) != 0 ? null : fileAssetLoader);
    }

    @Override // c5.m
    @NotNull
    public q parseNetworkResponse(h response) {
        byte[] bArr;
        if (response != null) {
            try {
                bArr = response.a;
            } catch (UnsupportedEncodingException e9) {
                q qVar = new q(new c5.a(e9));
                Intrinsics.checkNotNull(qVar);
                return qVar;
            }
        } else {
            bArr = null;
        }
        if (bArr == null) {
            bArr = new byte[0];
        }
        q qVar2 = new q(new File(bArr, this.rendererType, this.assetLoader), ki.b.M(response));
        Intrinsics.checkNotNull(qVar2);
        return qVar2;
    }

    /* JADX WARN: 'super' call moved to the top of the method (can break code semantics) */
    public RiveFileRequest(@NotNull String url, @NotNull RendererType rendererType, @NotNull p listener, @NotNull o errorListener, FileAssetLoader fileAssetLoader) {
        super(url, errorListener);
        Intrinsics.checkNotNullParameter(url, "url");
        Intrinsics.checkNotNullParameter(rendererType, "rendererType");
        Intrinsics.checkNotNullParameter(listener, "listener");
        Intrinsics.checkNotNullParameter(errorListener, "errorListener");
        this.rendererType = rendererType;
        this.listener = listener;
        this.assetLoader = fileAssetLoader;
    }

    @Override // c5.m
    public void deliverResponse(@NotNull File response) {
        Intrinsics.checkNotNullParameter(response, "response");
        RiveAnimationView.loadFromNetwork$lambda$4(((a) this.listener).f2609d, response);
    }
}
