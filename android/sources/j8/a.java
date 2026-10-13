package j8;

import android.net.Uri;
import com.facebook.cache.common.CacheKey;
import java.util.ArrayList;

/* loaded from: classes3.dex */
public final class a implements CacheKey {
    public final ArrayList a;

    public a(ArrayList arrayList) {
        this.a = arrayList;
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean a(Uri uri) {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.a;
            if (i5 >= arrayList.size()) {
                return false;
            }
            if (((CacheKey) arrayList.get(i5)).a(uri)) {
                return true;
            }
            i5++;
        }
    }

    @Override // com.facebook.cache.common.CacheKey
    public final boolean b() {
        return false;
    }

    @Override // com.facebook.cache.common.CacheKey
    public final String c() {
        return ((CacheKey) this.a.get(0)).c();
    }

    public final boolean equals(Object obj) {
        if (obj == this) {
            return true;
        }
        if (obj instanceof a) {
            return this.a.equals(((a) obj).a);
        }
        return false;
    }

    public final int hashCode() {
        return this.a.hashCode();
    }

    public final String toString() {
        return "MultiCacheKey:" + this.a.toString();
    }
}
