package androidx.collection;

import j8.c;
import java.util.Map;
import java.util.Set;
import kotlin.Unit;
import kotlin.collections.CollectionsKt;
import kotlin.jvm.internal.Intrinsics;
import t.a;
import t.b;

/* loaded from: classes.dex */
public class LruCache {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final b f1200b;

    /* renamed from: c, reason: collision with root package name */
    public final c f1201c;

    /* renamed from: d, reason: collision with root package name */
    public int f1202d;

    /* renamed from: e, reason: collision with root package name */
    public int f1203e;

    /* renamed from: f, reason: collision with root package name */
    public int f1204f;

    public LruCache(int i5) {
        this.a = i5;
        if (i5 <= 0) {
            a.c("maxSize <= 0");
            throw null;
        }
        this.f1200b = new b(0);
        this.f1201c = new c();
    }

    public final Object a(Object key) {
        Intrinsics.checkNotNullParameter(key, "key");
        synchronized (this.f1201c) {
            b bVar = this.f1200b;
            bVar.getClass();
            Intrinsics.checkNotNullParameter(key, "key");
            Object obj = bVar.a.get(key);
            if (obj != null) {
                this.f1203e++;
                return obj;
            }
            this.f1204f++;
            Intrinsics.checkNotNullParameter(key, "key");
            return null;
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:23:0x00d3, code lost:
    
        kotlin.jvm.internal.Intrinsics.checkNotNullParameter("LruCache.sizeOf() is reporting inconsistent results!", "message");
     */
    /* JADX WARN: Code restructure failed: missing block: B:24:0x00df, code lost:
    
        throw new java.lang.IllegalStateException("LruCache.sizeOf() is reporting inconsistent results!");
     */
    /* JADX WARN: Code restructure failed: missing block: B:42:0x00d2, code lost:
    
        return r7;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final Object b(Object key, Object value) {
        Object oldValue;
        Object key2;
        Object oldValue2;
        Intrinsics.checkNotNullParameter(key, "key");
        Intrinsics.checkNotNullParameter(value, "value");
        synchronized (this.f1201c) {
            try {
                int i5 = this.f1202d;
                Intrinsics.checkNotNullParameter(key, "key");
                Intrinsics.checkNotNullParameter(value, "value");
                this.f1202d = i5 + 1;
                b bVar = this.f1200b;
                bVar.getClass();
                Intrinsics.checkNotNullParameter(key, "key");
                Intrinsics.checkNotNullParameter(value, "value");
                oldValue = bVar.a.put(key, value);
                if (oldValue != null) {
                    int i6 = this.f1202d;
                    Intrinsics.checkNotNullParameter(key, "key");
                    Intrinsics.checkNotNullParameter(oldValue, "value");
                    this.f1202d = i6 - 1;
                }
                Unit unit = Unit.a;
            } catch (Throwable th2) {
                throw th2;
            }
        }
        if (oldValue != null) {
            Intrinsics.checkNotNullParameter(key, "key");
            Intrinsics.checkNotNullParameter(oldValue, "oldValue");
        }
        int i10 = this.a;
        while (true) {
            synchronized (this.f1201c) {
                try {
                    if (this.f1202d < 0 || (this.f1200b.a.isEmpty() && this.f1202d != 0)) {
                        break;
                    }
                    if (this.f1202d <= i10 || this.f1200b.a.isEmpty()) {
                        break;
                    }
                    Set entrySet = this.f1200b.a.entrySet();
                    Intrinsics.checkNotNullExpressionValue(entrySet, "<get-entries>(...)");
                    Map.Entry entry = (Map.Entry) CollectionsKt.L(entrySet);
                    if (entry == null) {
                        return oldValue;
                    }
                    key2 = entry.getKey();
                    oldValue2 = entry.getValue();
                    b bVar2 = this.f1200b;
                    bVar2.getClass();
                    Intrinsics.checkNotNullParameter(key2, "key");
                    bVar2.a.remove(key2);
                    int i11 = this.f1202d;
                    Intrinsics.checkNotNullParameter(key2, "key");
                    Intrinsics.checkNotNullParameter(oldValue2, "value");
                    this.f1202d = i11 - 1;
                } catch (Throwable th3) {
                    throw th3;
                }
            }
            Intrinsics.checkNotNullParameter(key2, "key");
            Intrinsics.checkNotNullParameter(oldValue2, "oldValue");
        }
    }

    public final String toString() {
        String str;
        synchronized (this.f1201c) {
            try {
                int i5 = this.f1203e;
                int i6 = this.f1204f + i5;
                str = "LruCache[maxSize=" + this.a + ",hits=" + this.f1203e + ",misses=" + this.f1204f + ",hitRate=" + (i6 != 0 ? (i5 * 100) / i6 : 0) + "%]";
            } catch (Throwable th2) {
                throw th2;
            }
        }
        return str;
    }
}
