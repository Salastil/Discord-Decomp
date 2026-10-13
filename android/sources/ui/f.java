package ui;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.ByteArrayOutputStream;
import java.io.OutputStream;
import java.lang.annotation.Annotation;
import java.nio.ByteBuffer;
import java.nio.ByteOrder;
import java.nio.charset.Charset;
import java.util.Collection;
import java.util.HashMap;
import java.util.Iterator;
import java.util.Map;

/* loaded from: classes3.dex */
public final class f implements ri.e {

    /* renamed from: f, reason: collision with root package name */
    public static final Charset f18935f = Charset.forName("UTF-8");

    /* renamed from: g, reason: collision with root package name */
    public static final ri.c f18936g = new ri.c("key", s4.h.j(s4.h.i(e.class, new a(1))));

    /* renamed from: h, reason: collision with root package name */
    public static final ri.c f18937h = new ri.c("value", s4.h.j(s4.h.i(e.class, new a(2))));

    /* renamed from: i, reason: collision with root package name */
    public static final ti.a f18938i = new ti.a(1);
    public OutputStream a;

    /* renamed from: b, reason: collision with root package name */
    public final HashMap f18939b;

    /* renamed from: c, reason: collision with root package name */
    public final HashMap f18940c;

    /* renamed from: d, reason: collision with root package name */
    public final ri.d f18941d;

    /* renamed from: e, reason: collision with root package name */
    public final h f18942e = new h(this);

    public f(ByteArrayOutputStream byteArrayOutputStream, HashMap hashMap, HashMap hashMap2, ri.d dVar) {
        this.a = byteArrayOutputStream;
        this.f18939b = hashMap;
        this.f18940c = hashMap2;
        this.f18941d = dVar;
    }

    public static int g(ri.c cVar) {
        e eVar = (e) ((Annotation) cVar.f17388b.get(e.class));
        if (eVar != null) {
            return ((a) eVar).f18931b;
        }
        throw new ri.b("Field has no @Protobuf config");
    }

    @Override // ri.e
    public final ri.e a(ri.c cVar, Object obj) {
        c(cVar, obj, true);
        return this;
    }

    public final void b(ri.c cVar, int i5, boolean z5) {
        if (z5 && i5 == 0) {
            return;
        }
        e eVar = (e) ((Annotation) cVar.f17388b.get(e.class));
        if (eVar == null) {
            throw new ri.b("Field has no @Protobuf config");
        }
        h(((a) eVar).f18931b << 3);
        h(i5);
    }

    public final void c(ri.c cVar, Object obj, boolean z5) {
        if (obj == null) {
            return;
        }
        if (obj instanceof CharSequence) {
            CharSequence charSequence = (CharSequence) obj;
            if (z5 && charSequence.length() == 0) {
                return;
            }
            h((g(cVar) << 3) | 2);
            byte[] bytes = charSequence.toString().getBytes(f18935f);
            h(bytes.length);
            this.a.write(bytes);
            return;
        }
        if (obj instanceof Collection) {
            Iterator it = ((Collection) obj).iterator();
            while (it.hasNext()) {
                c(cVar, it.next(), false);
            }
            return;
        }
        if (obj instanceof Map) {
            Iterator it2 = ((Map) obj).entrySet().iterator();
            while (it2.hasNext()) {
                f(f18938i, cVar, (Map.Entry) it2.next(), false);
            }
            return;
        }
        if (obj instanceof Double) {
            double doubleValue = ((Double) obj).doubleValue();
            if (z5 && doubleValue == 0.0d) {
                return;
            }
            h((g(cVar) << 3) | 1);
            this.a.write(ByteBuffer.allocate(8).order(ByteOrder.LITTLE_ENDIAN).putDouble(doubleValue).array());
            return;
        }
        if (obj instanceof Float) {
            float floatValue = ((Float) obj).floatValue();
            if (z5 && floatValue == 0.0f) {
                return;
            }
            h((g(cVar) << 3) | 5);
            this.a.write(ByteBuffer.allocate(4).order(ByteOrder.LITTLE_ENDIAN).putFloat(floatValue).array());
            return;
        }
        if (obj instanceof Number) {
            long longValue = ((Number) obj).longValue();
            if (z5 && longValue == 0) {
                return;
            }
            e eVar = (e) ((Annotation) cVar.f17388b.get(e.class));
            if (eVar == null) {
                throw new ri.b("Field has no @Protobuf config");
            }
            h(((a) eVar).f18931b << 3);
            i(longValue);
            return;
        }
        if (obj instanceof Boolean) {
            b(cVar, ((Boolean) obj).booleanValue() ? 1 : 0, z5);
            return;
        }
        if (obj instanceof byte[]) {
            byte[] bArr = (byte[]) obj;
            if (z5 && bArr.length == 0) {
                return;
            }
            h((g(cVar) << 3) | 2);
            h(bArr.length);
            this.a.write(bArr);
            return;
        }
        ri.d dVar = (ri.d) this.f18939b.get(obj.getClass());
        if (dVar != null) {
            f(dVar, cVar, obj, z5);
            return;
        }
        ri.f fVar = (ri.f) this.f18940c.get(obj.getClass());
        if (fVar != null) {
            h hVar = this.f18942e;
            hVar.a = false;
            hVar.f18944c = cVar;
            hVar.f18943b = z5;
            fVar.a(obj, hVar);
            return;
        }
        if (obj instanceof c) {
            b(cVar, ((c) obj).a(), true);
        } else if (obj instanceof Enum) {
            b(cVar, ((Enum) obj).ordinal(), true);
        } else {
            f(this.f18941d, cVar, obj, z5);
        }
    }

    @Override // ri.e
    public final ri.e d(ri.c cVar, int i5) {
        b(cVar, i5, true);
        return this;
    }

    @Override // ri.e
    public final ri.e e(ri.c cVar, long j) {
        if (j == 0) {
            return this;
        }
        e eVar = (e) ((Annotation) cVar.f17388b.get(e.class));
        if (eVar == null) {
            throw new ri.b("Field has no @Protobuf config");
        }
        h(((a) eVar).f18931b << 3);
        i(j);
        return this;
    }

    public final void f(ri.d dVar, ri.c cVar, Object obj, boolean z5) {
        b bVar = new b();
        bVar.f18932d = 0L;
        try {
            OutputStream outputStream = this.a;
            this.a = bVar;
            try {
                dVar.a(obj, this);
                this.a = outputStream;
                long j = bVar.f18932d;
                bVar.close();
                if (z5 && j == 0) {
                    return;
                }
                h((g(cVar) << 3) | 2);
                i(j);
                dVar.a(obj, this);
            } catch (Throwable th2) {
                this.a = outputStream;
                throw th2;
            }
        } catch (Throwable th3) {
            try {
                bVar.close();
            } catch (Throwable th4) {
                th3.addSuppressed(th4);
            }
            throw th3;
        }
    }

    public final void h(int i5) {
        while ((i5 & (-128)) != 0) {
            this.a.write((i5 & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            i5 >>>= 7;
        }
        this.a.write(i5 & 127);
    }

    public final void i(long j) {
        while (((-128) & j) != 0) {
            this.a.write((((int) j) & 127) | IntBufferBatchMountItem.INSTRUCTION_UPDATE_LAYOUT);
            j >>>= 7;
        }
        this.a.write(((int) j) & 127);
    }
}
