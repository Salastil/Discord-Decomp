package da;

import android.net.Uri;
import com.facebook.cache.common.CacheKey;
import k2.r;
import o8.h;

/* loaded from: classes3.dex */
public final class c implements CacheKey {
    public final o9.a a;

    /* renamed from: b, reason: collision with root package name */
    public final int f7465b;

    public c(o9.a aVar, int i5) {
        this.a = aVar;
        this.f7465b = i5;
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean a(Uri uri) {
        return this.a.a(uri);
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean b() {
        return false;
    }

    @Override // com.facebook.cache.common.CacheKey
    public final String c() {
        return null;
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (!(obj instanceof c)) {
            return false;
        }
        c cVar = (c) obj;
        return this.f7465b == cVar.f7465b && this.a.equals(cVar.a);
    }

    public final int hashCode() {
        return (this.a.hashCode() * 1013) + this.f7465b;
    }

    public final String toString() {
        r j = h.j(this);
        j.h(this.a, "imageCacheKey");
        j.f(this.f7465b, "frameIndex");
        return j.toString();
    }
}
