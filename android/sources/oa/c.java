package oa;

import com.facebook.imagepipeline.image.ImageInfo;
import java.io.Closeable;

/* loaded from: classes3.dex */
public interface c extends Closeable, ImageInfo, w9.a {
    k G();

    @Override // java.io.Closeable, java.lang.AutoCloseable
    void close();

    int getHeight();

    int getWidth();

    boolean h0();

    boolean isClosed();

    int j();
}
