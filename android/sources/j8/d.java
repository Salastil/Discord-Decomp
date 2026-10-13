package j8;

import android.net.Uri;
import com.facebook.cache.common.CacheKey;

/* loaded from: classes3.dex */
public final class d implements CacheKey {
    public final String a;

    public d(String str) {
        str.getClass();
        this.a = str;
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean a(Uri uri) {
        return this.a.contains(uri.toString());
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
        if (obj == this) {
            return true;
        }
        if (obj instanceof d) {
            return this.a.equals(((d) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return this.a;
    }
}
