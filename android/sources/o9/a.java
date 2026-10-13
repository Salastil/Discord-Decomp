package o9;

import android.net.Uri;
import com.facebook.cache.common.CacheKey;
import k0.d;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.x;

/* loaded from: classes3.dex */
public final class a implements CacheKey {
    public final boolean a;

    /* renamed from: b, reason: collision with root package name */
    public final String f15795b;

    public a(int i5, boolean z5) {
        this.a = z5;
        this.f15795b = d.i(i5, "anim://");
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean a(Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        String uri2 = uri.toString();
        Intrinsics.checkNotNullExpressionValue(uri2, "toString(...)");
        return x.o(uri2, this.f15795b, false);
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean b() {
        return false;
    }

    @Override // com.facebook.cache.common.CacheKey
    public final String c() {
        return this.f15795b;
    }

    public final boolean equals(Object obj) {
        if (!this.a) {
            return super.equals(obj);
        }
        if (this == obj) {
            return true;
        }
        if (obj == null || !Intrinsics.areEqual(a.class, obj.getClass())) {
            return false;
        }
        return Intrinsics.areEqual(this.f15795b, ((a) obj).f15795b);
    }

    public final int hashCode() {
        return !this.a ? super.hashCode() : this.f15795b.hashCode();
    }
}
