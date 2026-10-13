package k8;

import com.facebook.cache.disk.DiskCacheConfig;
import com.facebook.common.internal.Supplier;

/* loaded from: classes3.dex */
public final class c implements Supplier {
    public final /* synthetic */ int a;

    /* renamed from: b, reason: collision with root package name */
    public final /* synthetic */ Object f13206b;

    public /* synthetic */ c(int i5, Object obj) {
        this.a = i5;
        this.f13206b = obj;
    }

    @Override // com.facebook.common.internal.Supplier
    public final Object get() {
        switch (this.a) {
            case 0:
                DiskCacheConfig diskCacheConfig = (DiskCacheConfig) this.f13206b;
                diskCacheConfig.j.getClass();
                return diskCacheConfig.j.getApplicationContext().getCacheDir();
            default:
                return this.f13206b;
        }
    }
}
