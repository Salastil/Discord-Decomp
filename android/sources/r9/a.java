package r9;

import com.facebook.common.references.CloseableReference;
import java.io.Closeable;
import kotlin.jvm.internal.Intrinsics;

/* loaded from: classes3.dex */
public final class a implements Closeable {

    /* renamed from: d, reason: collision with root package name */
    public final int f17149d;

    /* renamed from: e, reason: collision with root package name */
    public final CloseableReference f17150e;

    public a(int i5, CloseableReference bitmap) {
        Intrinsics.checkNotNullParameter(bitmap, "bitmap");
        this.f17149d = i5;
        this.f17150e = bitmap;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
        this.f17150e.close();
    }
}
