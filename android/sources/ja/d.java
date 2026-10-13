package ja;

import com.facebook.cache.disk.DiskCacheConfig;
import com.facebook.common.internal.Supplier;
import com.facebook.imagepipeline.core.DefaultExecutorSupplier;
import com.facebook.imagepipeline.core.ImagePipelineConfig;
import fo.l;
import fo.m;
import ha.k;
import kotlin.jvm.internal.Intrinsics;
import qa.v;

/* loaded from: classes3.dex */
public final class d implements Supplier {
    public final io.sentry.hints.j a;

    /* renamed from: b, reason: collision with root package name */
    public final v f12448b;

    /* renamed from: c, reason: collision with root package name */
    public final e f12449c;

    /* renamed from: d, reason: collision with root package name */
    public final k f12450d;

    /* renamed from: e, reason: collision with root package name */
    public final DiskCacheConfig f12451e;

    /* renamed from: f, reason: collision with root package name */
    public final DiskCacheConfig f12452f;

    /* renamed from: g, reason: collision with root package name */
    public final Object f12453g;

    public d(io.sentry.hints.j fileCacheFactory, ImagePipelineConfig config) {
        Intrinsics.checkNotNullParameter(fileCacheFactory, "fileCacheFactory");
        Intrinsics.checkNotNullParameter(config, "config");
        v poolFactory = config.f4615n;
        DefaultExecutorSupplier executorSupplier = config.f4611h;
        k imageCacheStatsTracker = config.f4612i;
        DiskCacheConfig mainDiskCacheConfig = config.k;
        DiskCacheConfig smallImageDiskCacheConfig = config.f4621t;
        Intrinsics.checkNotNullParameter(fileCacheFactory, "fileCacheFactory");
        Intrinsics.checkNotNullParameter(poolFactory, "poolFactory");
        Intrinsics.checkNotNullParameter(executorSupplier, "executorSupplier");
        Intrinsics.checkNotNullParameter(imageCacheStatsTracker, "imageCacheStatsTracker");
        Intrinsics.checkNotNullParameter(mainDiskCacheConfig, "mainDiskCacheConfig");
        Intrinsics.checkNotNullParameter(smallImageDiskCacheConfig, "smallImageDiskCacheConfig");
        this.a = fileCacheFactory;
        this.f12448b = poolFactory;
        this.f12449c = executorSupplier;
        this.f12450d = imageCacheStatsTracker;
        this.f12451e = mainDiskCacheConfig;
        this.f12452f = smallImageDiskCacheConfig;
        this.f12453g = l.b(m.f8826d, new a(this, 0));
    }

    /* JADX WARN: Type inference failed for: r0v0, types: [java.lang.Object, kotlin.Lazy] */
    @Override // com.facebook.common.internal.Supplier
    public final Object get() {
        return (c) this.f12453g.getValue();
    }
}
