package ti;

import android.util.Base64;
import android.util.JsonWriter;
import java.io.BufferedWriter;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;
import ri.f;
import ri.g;

/* loaded from: classes3.dex */
public final class e implements ri.e, g {
    public final boolean a = true;

    /* renamed from: b, reason: collision with root package name */
    public final JsonWriter f18650b;

    /* renamed from: c, reason: collision with root package name */
    public final Map f18651c;

    /* renamed from: d, reason: collision with root package name */
    public final Map f18652d;

    /* renamed from: e, reason: collision with root package name */
    public final ri.d f18653e;

    /* renamed from: f, reason: collision with root package name */
    public final boolean f18654f;

    public e(BufferedWriter bufferedWriter, HashMap hashMap, HashMap hashMap2, a aVar, boolean z5) {
        this.f18650b = new JsonWriter(bufferedWriter);
        this.f18651c = hashMap;
        this.f18652d = hashMap2;
        this.f18653e = aVar;
        this.f18654f = z5;
    }

    @Override // ri.e
    public final ri.e a(ri.c cVar, Object obj) {
        g(obj, cVar.a);
        return this;
    }

    @Override // ri.g
    public final g b(String str) {
        h();
        this.f18650b.value(str);
        return this;
    }

    @Override // ri.g
    public final g c(boolean z5) {
        h();
        this.f18650b.value(z5);
        return this;
    }

    @Override // ri.e
    public final ri.e d(ri.c cVar, int i5) {
        String str = cVar.a;
        h();
        JsonWriter jsonWriter = this.f18650b;
        jsonWriter.name(str);
        h();
        jsonWriter.value(i5);
        return this;
    }

    @Override // ri.e
    public final ri.e e(ri.c cVar, long j) {
        String str = cVar.a;
        h();
        JsonWriter jsonWriter = this.f18650b;
        jsonWriter.name(str);
        h();
        jsonWriter.value(j);
        return this;
    }

    public final void f(Object obj) {
        JsonWriter jsonWriter = this.f18650b;
        if (obj == null) {
            jsonWriter.nullValue();
            return;
        }
        if (obj instanceof Number) {
            jsonWriter.value((Number) obj);
            return;
        }
        if (!obj.getClass().isArray()) {
            if (obj instanceof Collection) {
                jsonWriter.beginArray();
                Iterator it = ((Collection) obj).iterator();
                while (it.hasNext()) {
                    f(it.next());
                }
                jsonWriter.endArray();
                return;
            }
            if (obj instanceof Map) {
                jsonWriter.beginObject();
                for (Map.Entry entry : ((Map) obj).entrySet()) {
                    Object key = entry.getKey();
                    try {
                        g(entry.getValue(), (String) key);
                    } catch (ClassCastException e9) {
                        throw new ri.b(String.format("Only String keys are currently supported in maps, got %s of type %s instead.", key, key.getClass()), e9);
                    }
                }
                jsonWriter.endObject();
                return;
            }
            ri.d dVar = (ri.d) this.f18651c.get(obj.getClass());
            if (dVar != null) {
                jsonWriter.beginObject();
                dVar.a(obj, this);
                jsonWriter.endObject();
                return;
            }
            f fVar = (f) this.f18652d.get(obj.getClass());
            if (fVar != null) {
                fVar.a(obj, this);
                return;
            }
            if (obj instanceof Enum) {
                String name = ((Enum) obj).name();
                h();
                jsonWriter.value(name);
                return;
            } else {
                jsonWriter.beginObject();
                this.f18653e.a(obj, this);
                jsonWriter.endObject();
                return;
            }
        }
        if (obj instanceof byte[]) {
            h();
            jsonWriter.value(Base64.encodeToString((byte[]) obj, 2));
            return;
        }
        jsonWriter.beginArray();
        int i5 = 0;
        if (obj instanceof int[]) {
            int length = ((int[]) obj).length;
            while (i5 < length) {
                jsonWriter.value(r6[i5]);
                i5++;
            }
        } else if (obj instanceof long[]) {
            long[] jArr = (long[]) obj;
            int length2 = jArr.length;
            while (i5 < length2) {
                long j = jArr[i5];
                h();
                jsonWriter.value(j);
                i5++;
            }
        } else if (obj instanceof double[]) {
            double[] dArr = (double[]) obj;
            int length3 = dArr.length;
            while (i5 < length3) {
                jsonWriter.value(dArr[i5]);
                i5++;
            }
        } else if (obj instanceof boolean[]) {
            boolean[] zArr = (boolean[]) obj;
            int length4 = zArr.length;
            while (i5 < length4) {
                jsonWriter.value(zArr[i5]);
                i5++;
            }
        } else if (obj instanceof Number[]) {
            Number[] numberArr = (Number[]) obj;
            int length5 = numberArr.length;
            while (i5 < length5) {
                f(numberArr[i5]);
                i5++;
            }
        } else {
            Object[] objArr = (Object[]) obj;
            int length6 = objArr.length;
            while (i5 < length6) {
                f(objArr[i5]);
                i5++;
            }
        }
        jsonWriter.endArray();
    }

    public final void g(Object obj, String str) {
        boolean z5 = this.f18654f;
        JsonWriter jsonWriter = this.f18650b;
        if (z5) {
            if (obj == null) {
                return;
            }
            h();
            jsonWriter.name(str);
            f(obj);
            return;
        }
        h();
        jsonWriter.name(str);
        if (obj == null) {
            jsonWriter.nullValue();
        } else {
            f(obj);
        }
    }

    public final void h() {
        if (!this.a) {
            throw new IllegalStateException("Parent context used since this context was created. Cannot use this context anymore.");
        }
    }
}
