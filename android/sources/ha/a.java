package ha;

import android.net.Uri;
import android.os.SystemClock;
import com.facebook.cache.common.CacheKey;
import com.facebook.common.time.RealtimeSinceBootClock;
import com.facebook.imagepipeline.common.ImageDecodeOptions;
import com.facebook.imagepipeline.common.ResizeOptions;
import com.facebook.imagepipeline.common.RotationOptions;
import kotlin.jvm.internal.Intrinsics;
import kotlin.text.StringsKt;

/* loaded from: classes3.dex */
public final class a implements CacheKey {
    public final String a;

    /* renamed from: b, reason: collision with root package name */
    public final ResizeOptions f9586b;

    /* renamed from: c, reason: collision with root package name */
    public final RotationOptions f9587c;

    /* renamed from: d, reason: collision with root package name */
    public final ImageDecodeOptions f9588d;

    /* renamed from: e, reason: collision with root package name */
    public final CacheKey f9589e;

    /* renamed from: f, reason: collision with root package name */
    public final String f9590f;

    /* renamed from: g, reason: collision with root package name */
    public Object f9591g;

    /* renamed from: h, reason: collision with root package name */
    public final int f9592h;

    public a(String sourceString, ResizeOptions resizeOptions, RotationOptions rotationOptions, ImageDecodeOptions imageDecodeOptions, CacheKey cacheKey, String str) {
        Intrinsics.checkNotNullParameter(sourceString, "sourceString");
        Intrinsics.checkNotNullParameter(rotationOptions, "rotationOptions");
        Intrinsics.checkNotNullParameter(imageDecodeOptions, "imageDecodeOptions");
        this.a = sourceString;
        this.f9586b = resizeOptions;
        this.f9587c = rotationOptions;
        this.f9588d = imageDecodeOptions;
        this.f9589e = cacheKey;
        this.f9590f = str;
        this.f9592h = ((((imageDecodeOptions.hashCode() + ((rotationOptions.hashCode() + (((sourceString.hashCode() * 31) + (resizeOptions != null ? resizeOptions.hashCode() : 0)) * 31)) * 31)) * 31) + (cacheKey != null ? cacheKey.hashCode() : 0)) * 31) + (str != null ? str.hashCode() : 0);
        RealtimeSinceBootClock.get().getClass();
        SystemClock.elapsedRealtime();
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean a(Uri uri) {
        Intrinsics.checkNotNullParameter(uri, "uri");
        String uri2 = uri.toString();
        Intrinsics.checkNotNullExpressionValue(uri2, "toString(...)");
        return StringsKt.D(this.a, uri2, false);
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean b() {
        return false;
    }

    @Override // com.facebook.cache.common.CacheKey
    public final String c() {
        return this.a;
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (!Intrinsics.areEqual(a.class, obj != null ? obj.getClass() : null)) {
            return false;
        }
        Intrinsics.checkNotNull(obj, "null cannot be cast to non-null type com.facebook.imagepipeline.cache.BitmapMemoryCacheKey");
        a aVar = (a) obj;
        return Intrinsics.areEqual(this.a, aVar.a) && Intrinsics.areEqual(this.f9586b, aVar.f9586b) && Intrinsics.areEqual(this.f9587c, aVar.f9587c) && Intrinsics.areEqual(this.f9588d, aVar.f9588d) && Intrinsics.areEqual(this.f9589e, aVar.f9589e) && Intrinsics.areEqual(this.f9590f, aVar.f9590f);
    }

    public final int hashCode() {
        return this.f9592h;
    }

    public final String toString() {
        return "BitmapMemoryCacheKey(sourceString=" + this.a + ", resizeOptions=" + this.f9586b + ", rotationOptions=" + this.f9587c + ", imageDecodeOptions=" + this.f9588d + ", postprocessorCacheKey=" + this.f9589e + ", postprocessorName=" + this.f9590f + ")";
    }
}
