package ha;

import a5.a0;
import com.facebook.cache.common.CacheKey;
import com.facebook.imagepipeline.image.EncodedImage;
import com.facebook.react.runtime.o;
import java.io.FileInputStream;
import java.io.IOException;
import java.util.HashMap;
import java.util.concurrent.Executor;
import kotlin.jvm.internal.Intrinsics;
import qa.p;
import qa.q;
import qa.r;

/* loaded from: classes3.dex */
public final class b {
    public final k8.i a;

    /* renamed from: b, reason: collision with root package name */
    public final e4.c f9593b;

    /* renamed from: c, reason: collision with root package name */
    public final a0 f9594c;

    /* renamed from: d, reason: collision with root package name */
    public final Executor f9595d;

    /* renamed from: e, reason: collision with root package name */
    public final Executor f9596e;

    /* renamed from: f, reason: collision with root package name */
    public final k f9597f;

    /* renamed from: g, reason: collision with root package name */
    public final l f9598g;

    public b(k8.i fileCache, e4.c pooledByteBufferFactory, a0 pooledByteStreams, Executor readExecutor, Executor writeExecutor, k imageCacheStatsTracker) {
        Intrinsics.checkNotNullParameter(fileCache, "fileCache");
        Intrinsics.checkNotNullParameter(pooledByteBufferFactory, "pooledByteBufferFactory");
        Intrinsics.checkNotNullParameter(pooledByteStreams, "pooledByteStreams");
        Intrinsics.checkNotNullParameter(readExecutor, "readExecutor");
        Intrinsics.checkNotNullParameter(writeExecutor, "writeExecutor");
        Intrinsics.checkNotNullParameter(imageCacheStatsTracker, "imageCacheStatsTracker");
        this.a = fileCache;
        this.f9593b = pooledByteBufferFactory;
        this.f9594c = pooledByteStreams;
        this.f9595d = readExecutor;
        this.f9596e = writeExecutor;
        this.f9597f = imageCacheStatsTracker;
        l lVar = new l();
        lVar.f9613d = new HashMap();
        Intrinsics.checkNotNullExpressionValue(lVar, "getInstance(...)");
        this.f9598g = lVar;
    }

    public final void a() {
        this.f9598g.O();
        try {
            j4.e.a(new f4.e(1, this), this.f9596e);
        } catch (Exception e9) {
            p8.a.u(e9, "Failed to schedule disk-cache clear", new Object[0]);
            j4.e.b(e9);
        }
    }

    public final boolean b(CacheKey key) {
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(key, "key");
        l lVar = this.f9598g;
        synchronized (lVar) {
            key.getClass();
            if (((HashMap) lVar.f9613d).containsKey(key)) {
                EncodedImage encodedImage = (EncodedImage) ((HashMap) lVar.f9613d).get(key);
                synchronized (encodedImage) {
                    if (EncodedImage.isValid(encodedImage)) {
                        return true;
                    }
                    ((HashMap) lVar.f9613d).remove(key);
                    p8.a.t(l.class, "Found closed reference %d for key %s (%d)", Integer.valueOf(System.identityHashCode(encodedImage)), key.c(), Integer.valueOf(System.identityHashCode(key)));
                }
            }
            if (((k8.g) this.a).f(key)) {
                return true;
            }
            k kVar = this.f9597f;
            EncodedImage S = this.f9598g.S(key);
            if (S != null) {
                S.close();
                p8.a.q("Found image for %s in staging area", key.c(), b.class);
                kVar.getClass();
                return true;
            }
            p8.a.q("Did not find image for %s in staging area", key.c(), b.class);
            kVar.getClass();
            try {
                return ((k8.g) this.a).e(key);
            } catch (Exception unused) {
                return false;
            }
        }
    }

    public final q c(CacheKey cacheKey) {
        k kVar = this.f9597f;
        try {
            p8.a.q("Disk cache read for %s", cacheKey.c(), b.class);
            i8.a c6 = ((k8.g) this.a).c(cacheKey);
            if (c6 == null) {
                p8.a.q("Disk cache miss for %s", cacheKey.c(), b.class);
                kVar.getClass();
                return null;
            }
            p8.a.q("Found entry in disk cache for %s", cacheKey.c(), b.class);
            kVar.getClass();
            FileInputStream inputStream = new FileInputStream(c6.a);
            try {
                e4.c cVar = this.f9593b;
                int length = (int) c6.a.length();
                cVar.getClass();
                Intrinsics.checkNotNullParameter(inputStream, "inputStream");
                r outputStream = new r((p) cVar.f7939e, length);
                try {
                    Intrinsics.checkNotNullParameter(inputStream, "inputStream");
                    Intrinsics.checkNotNullParameter(outputStream, "outputStream");
                    ((a0) cVar.f7940i).m(inputStream, outputStream);
                    q f2 = outputStream.f();
                    inputStream.close();
                    p8.a.q("Successful read from disk cache for %s", cacheKey.c(), b.class);
                    return f2;
                } finally {
                    outputStream.close();
                }
            } catch (Throwable th2) {
                inputStream.close();
                throw th2;
            }
        } catch (IOException e9) {
            p8.a.u(e9, "Exception reading from cache for %s", cacheKey.c());
            kVar.getClass();
            throw e9;
        }
    }

    public final void d(CacheKey key) {
        Intrinsics.checkNotNullParameter(key, "key");
        this.f9598g.X(key);
        try {
            j4.e.a(new o(2, this, key), this.f9596e);
        } catch (Exception e9) {
            p8.a.u(e9, "Failed to schedule disk-cache remove for %s", key.c());
            j4.e.b(e9);
        }
    }

    public final void e(CacheKey cacheKey, EncodedImage encodedImage) {
        p8.a.q("About to write to disk-cache for key %s", cacheKey.c(), b.class);
        try {
            ((k8.g) this.a).g(cacheKey, new cc.i(14, encodedImage, this));
            this.f9597f.getClass();
            p8.a.q("Successful disk-cache write for key %s", cacheKey.c(), b.class);
        } catch (IOException e9) {
            p8.a.u(e9, "Failed to write to disk-cache for key %s", cacheKey.c());
        }
    }
}
