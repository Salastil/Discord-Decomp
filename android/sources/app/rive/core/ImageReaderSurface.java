package app.rive.core;

import android.media.ImageReader;
import android.view.Surface;
import kotlin.Metadata;
import kotlin.Unit;
import kotlin.jvm.functions.Function0;
import kotlin.jvm.internal.Intrinsics;
import org.jetbrains.annotations.NotNull;

@Metadata(d1 = {"\u0000&\n\u0002\u0018\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0002\n\u0002\u0018\u0002\n\u0000\n\u0002\u0018\u0002\n\u0002\b\u0003\n\u0002\u0010\u0002\n\u0000\b\u0007\u0018\u00002\u00020\u0001B\r\u0012\u0006\u0010\u0002\u001a\u00020\u0003¢\u0006\u0002\u0010\u0004J\b\u0010\u000b\u001a\u00020\fH\u0016R\u000e\u0010\u0005\u001a\u00020\u0006X\u0082\u0004¢\u0006\u0002\n\u0000R\u000e\u0010\u0002\u001a\u00020\u0003X\u0082\u0004¢\u0006\u0002\n\u0000R\u0014\u0010\u0007\u001a\u00020\bX\u0096\u0004¢\u0006\b\n\u0000\u001a\u0004\b\t\u0010\n¨\u0006\r"}, d2 = {"Lapp/rive/core/ImageReaderSurface;", "Lapp/rive/core/CloseableSurface;", "imageReader", "Landroid/media/ImageReader;", "(Landroid/media/ImageReader;)V", "closer", "Lapp/rive/core/CloseOnce;", "surface", "Landroid/view/Surface;", "getSurface", "()Landroid/view/Surface;", "close", "", "kotlin_release"}, k = 1, mv = {1, 9, 0}, xi = 48)
/* loaded from: classes.dex */
public final class ImageReaderSurface implements CloseableSurface {
    public static final int $stable = 8;

    @NotNull
    private final CloseOnce closer;

    @NotNull
    private final ImageReader imageReader;

    @NotNull
    private final Surface surface;

    public ImageReaderSurface(@NotNull ImageReader imageReader) {
        Intrinsics.checkNotNullParameter(imageReader, "imageReader");
        this.imageReader = imageReader;
        Surface surface = imageReader.getSurface();
        Intrinsics.checkNotNullExpressionValue(surface, "getSurface(...)");
        this.surface = surface;
        this.closer = new CloseOnce("ImageReaderSurface", new Function0<Unit>() { // from class: app.rive.core.ImageReaderSurface$closer$1
            {
                super(0);
            }

            @Override // kotlin.jvm.functions.Function0
            public /* bridge */ /* synthetic */ Object invoke() {
                m214invoke();
                return Unit.a;
            }

            /* renamed from: invoke, reason: collision with other method in class */
            public final void m214invoke() {
                ImageReader imageReader2;
                imageReader2 = ImageReaderSurface.this.imageReader;
                imageReader2.close();
            }
        });
    }

    @Override // app.rive.core.CloseableSurface, java.lang.AutoCloseable
    public void close() {
        this.closer.close();
    }

    @Override // app.rive.core.CloseableSurface
    @NotNull
    public Surface getSurface() {
        return this.surface;
    }
}
