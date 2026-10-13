package q4;

import androidx.collection.LruCache;
import l4.i;

/* loaded from: classes.dex */
public final class g {

    /* renamed from: b, reason: collision with root package name */
    public static final g f16682b = new g();
    public final LruCache a = new LruCache(20);

    public final i a(String str) {
        if (str == null) {
            return null;
        }
        return (i) this.a.a(str);
    }
}
