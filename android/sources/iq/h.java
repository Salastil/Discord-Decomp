package iq;

import com.google.android.gms.internal.play_billing.w1;
import java.io.UnsupportedEncodingException;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.Map;

/* loaded from: classes3.dex */
public final class h {

    /* renamed from: c, reason: collision with root package name */
    public static final h f12209c = new h(0);
    public final y a = new y(16);

    /* renamed from: b, reason: collision with root package name */
    public boolean f12210b;

    public h() {
    }

    public static int c(i0 i0Var, Object obj) {
        switch (i0Var.ordinal()) {
            case 0:
                ((Double) obj).getClass();
                return 8;
            case 1:
                ((Float) obj).getClass();
                return 4;
            case 2:
                return w1.i(((Long) obj).longValue());
            case 3:
                return w1.i(((Long) obj).longValue());
            case 4:
                return w1.e(((Integer) obj).intValue());
            case 5:
                ((Long) obj).getClass();
                return 8;
            case 6:
                ((Integer) obj).getClass();
                return 4;
            case 7:
                ((Boolean) obj).getClass();
                return 1;
            case 8:
                try {
                    byte[] bytes = ((String) obj).getBytes("UTF-8");
                    return w1.h(bytes.length) + bytes.length;
                } catch (UnsupportedEncodingException e9) {
                    throw new RuntimeException("UTF-8 not supported.", e9);
                }
            case 9:
                return ((a) obj).c();
            case 10:
                return w1.g((a) obj);
            case 11:
                if (obj instanceof d) {
                    d dVar = (d) obj;
                    return dVar.size() + w1.h(dVar.size());
                }
                byte[] bArr = (byte[]) obj;
                return w1.h(bArr.length) + bArr.length;
            case 12:
                return w1.h(((Integer) obj).intValue());
            case 13:
                return obj instanceof o ? w1.e(((o) obj).a()) : w1.e(((Integer) obj).intValue());
            case 14:
                ((Integer) obj).getClass();
                return 4;
            case 15:
                ((Long) obj).getClass();
                return 8;
            case 16:
                int intValue = ((Integer) obj).intValue();
                return w1.h((intValue >> 31) ^ (intValue << 1));
            case 17:
                long longValue = ((Long) obj).longValue();
                return w1.i((longValue >> 63) ^ (longValue << 1));
            default:
                throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
        }
    }

    public static int d(l lVar, Object obj) {
        i0 i0Var = lVar.f12230e;
        int i5 = lVar.f12229d;
        if (!lVar.f12231i) {
            int j = w1.j(i5);
            if (i0Var == i0.f12214w) {
                j *= 2;
            }
            return c(i0Var, obj) + j;
        }
        int i6 = 0;
        for (Object obj2 : (List) obj) {
            int j5 = w1.j(i5);
            if (i0Var == i0.f12214w) {
                j5 *= 2;
            }
            i6 += c(i0Var, obj2) + j5;
        }
        return i6;
    }

    public static boolean e(Map.Entry entry) {
        l lVar = (l) entry.getKey();
        if (lVar.f12230e.f12217d != j0.G) {
            return true;
        }
        if (!lVar.f12231i) {
            Object value = entry.getValue();
            if (value instanceof a) {
                return ((a) value).b();
            }
            throw new IllegalArgumentException("Wrong object type used with protocol message reflection.");
        }
        Iterator it = ((List) entry.getValue()).iterator();
        while (it.hasNext()) {
            if (!((a) it.next()).b()) {
                return false;
            }
        }
        return true;
    }

    public static Object h(e eVar, i0 i0Var) {
        switch (i0Var.ordinal()) {
            case 0:
                return Double.valueOf(Double.longBitsToDouble(eVar.j()));
            case 1:
                return Float.valueOf(Float.intBitsToFloat(eVar.i()));
            case 2:
                return Long.valueOf(eVar.l());
            case 3:
                return Long.valueOf(eVar.l());
            case 4:
                return Integer.valueOf(eVar.k());
            case 5:
                return Long.valueOf(eVar.j());
            case 6:
                return Integer.valueOf(eVar.i());
            case 7:
                return Boolean.valueOf(eVar.l() != 0);
            case 8:
                int k = eVar.k();
                int i5 = eVar.f12199b;
                int i6 = eVar.f12201d;
                if (k > i5 - i6 || k <= 0) {
                    return k == 0 ? "" : new String(eVar.h(k), "UTF-8");
                }
                String str = new String(eVar.a, i6, k, "UTF-8");
                eVar.f12201d += k;
                return str;
            case 9:
                throw new IllegalArgumentException("readPrimitiveField() cannot handle nested groups.");
            case 10:
                throw new IllegalArgumentException("readPrimitiveField() cannot handle embedded messages.");
            case 11:
                return eVar.e();
            case 12:
                return Integer.valueOf(eVar.k());
            case 13:
                throw new IllegalArgumentException("readPrimitiveField() cannot handle enums.");
            case 14:
                return Integer.valueOf(eVar.i());
            case 15:
                return Long.valueOf(eVar.j());
            case 16:
                int k5 = eVar.k();
                return Integer.valueOf((-(k5 & 1)) ^ (k5 >>> 1));
            case 17:
                long l6 = eVar.l();
                return Long.valueOf((-(l6 & 1)) ^ (l6 >>> 1));
            default:
                throw new RuntimeException("There is no way to get here, but the compiler thinks otherwise.");
        }
    }

    /* JADX WARN: Code restructure failed: missing block: B:13:0x0024, code lost:
    
        if ((r3 instanceof byte[]) == false) goto L11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:7:0x0018, code lost:
    
        if ((r3 instanceof iq.o) == false) goto L11;
     */
    /* JADX WARN: Code restructure failed: missing block: B:8:0x001b, code lost:
    
        r0 = false;
     */
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public static void j(i0 i0Var, Object obj) {
        obj.getClass();
        boolean z5 = true;
        boolean z6 = false;
        switch (i0Var.f12217d) {
            case f12221e:
                z6 = obj instanceof Integer;
                break;
            case f12222i:
                z6 = obj instanceof Long;
                break;
            case f12223v:
                z6 = obj instanceof Float;
                break;
            case f12224w:
                z6 = obj instanceof Double;
                break;
            case f12225x:
                z6 = obj instanceof Boolean;
                break;
            case f12226y:
                z6 = obj instanceof String;
                break;
            case E:
                if (!(obj instanceof d)) {
                    break;
                }
                z6 = z5;
                break;
            case F:
                if (!(obj instanceof Integer)) {
                    break;
                }
                z6 = z5;
                break;
            case G:
                z6 = obj instanceof a;
                break;
        }
        if (!z6) {
            throw new IllegalArgumentException("Wrong object type used with protocol message reflection.");
        }
    }

    public static void k(w1 w1Var, i0 i0Var, Object obj) {
        switch (i0Var.ordinal()) {
            case 0:
                double doubleValue = ((Double) obj).doubleValue();
                w1Var.getClass();
                w1Var.z(Double.doubleToRawLongBits(doubleValue));
                break;
            case 1:
                float floatValue = ((Float) obj).floatValue();
                w1Var.getClass();
                w1Var.y(Float.floatToRawIntBits(floatValue));
                break;
            case 2:
                w1Var.B(((Long) obj).longValue());
                break;
            case 3:
                w1Var.B(((Long) obj).longValue());
                break;
            case 4:
                w1Var.s(((Integer) obj).intValue());
                break;
            case 5:
                w1Var.z(((Long) obj).longValue());
                break;
            case 6:
                w1Var.y(((Integer) obj).intValue());
                break;
            case 7:
                w1Var.v(((Boolean) obj).booleanValue() ? 1 : 0);
                break;
            case 8:
                w1Var.getClass();
                byte[] bytes = ((String) obj).getBytes("UTF-8");
                w1Var.A(bytes.length);
                w1Var.x(bytes);
                break;
            case 9:
                w1Var.getClass();
                ((a) obj).f(w1Var);
                break;
            case 10:
                w1Var.u((a) obj);
                break;
            case 11:
                if (!(obj instanceof d)) {
                    byte[] bArr = (byte[]) obj;
                    w1Var.getClass();
                    w1Var.A(bArr.length);
                    w1Var.x(bArr);
                    break;
                } else {
                    d dVar = (d) obj;
                    w1Var.getClass();
                    w1Var.A(dVar.size());
                    w1Var.w(dVar);
                    break;
                }
            case 12:
                w1Var.A(((Integer) obj).intValue());
                break;
            case 13:
                if (!(obj instanceof o)) {
                    w1Var.s(((Integer) obj).intValue());
                    break;
                } else {
                    w1Var.s(((o) obj).a());
                    break;
                }
            case 14:
                w1Var.y(((Integer) obj).intValue());
                break;
            case 15:
                w1Var.z(((Long) obj).longValue());
                break;
            case 16:
                int intValue = ((Integer) obj).intValue();
                w1Var.A((intValue >> 31) ^ (intValue << 1));
                break;
            case 17:
                long longValue = ((Long) obj).longValue();
                w1Var.B((longValue >> 63) ^ (longValue << 1));
                break;
        }
    }

    public final void a(l lVar, Object obj) {
        List list;
        if (!lVar.f12231i) {
            throw new IllegalArgumentException("addRepeatedField() can only be called on repeated fields.");
        }
        j(lVar.f12230e, obj);
        y yVar = this.a;
        Object obj2 = yVar.get(lVar);
        if (obj2 == null) {
            list = new ArrayList();
            yVar.put(lVar, list);
        } else {
            list = (List) obj2;
        }
        list.add(obj);
    }

    /* renamed from: b, reason: merged with bridge method [inline-methods] */
    public final h clone() {
        y yVar;
        h hVar = new h();
        int i5 = 0;
        while (true) {
            yVar = this.a;
            if (i5 >= yVar.f12252e.size()) {
                break;
            }
            Map.Entry entry = (Map.Entry) yVar.f12252e.get(i5);
            hVar.i((l) entry.getKey(), entry.getValue());
            i5++;
        }
        for (Map.Entry entry2 : yVar.c()) {
            hVar.i((l) entry2.getKey(), entry2.getValue());
        }
        return hVar;
    }

    public final void f() {
        if (this.f12210b) {
            return;
        }
        y yVar = this.a;
        if (!yVar.f12254v) {
            for (int i5 = 0; i5 < yVar.f12252e.size(); i5++) {
                Map.Entry entry = (Map.Entry) yVar.f12252e.get(i5);
                if (((l) entry.getKey()).f12231i) {
                    entry.setValue(Collections.unmodifiableList((List) entry.getValue()));
                }
            }
            for (Map.Entry entry2 : yVar.c()) {
                if (((l) entry2.getKey()).f12231i) {
                    entry2.setValue(Collections.unmodifiableList((List) entry2.getValue()));
                }
            }
        }
        if (!yVar.f12254v) {
            yVar.f12253i = yVar.f12253i.isEmpty() ? Collections.EMPTY_MAP : Collections.unmodifiableMap(yVar.f12253i);
            yVar.f12254v = true;
        }
        this.f12210b = true;
    }

    public final void g(Map.Entry entry) {
        l lVar = (l) entry.getKey();
        Object value = entry.getValue();
        boolean z5 = lVar.f12231i;
        y yVar = this.a;
        if (z5) {
            Object obj = yVar.get(lVar);
            if (obj == null) {
                obj = new ArrayList();
            }
            for (Object obj2 : (List) value) {
                List list = (List) obj;
                if (obj2 instanceof byte[]) {
                    byte[] bArr = (byte[]) obj2;
                    byte[] bArr2 = new byte[bArr.length];
                    System.arraycopy(bArr, 0, bArr2, 0, bArr.length);
                    obj2 = bArr2;
                }
                list.add(obj2);
            }
            yVar.put(lVar, obj);
            return;
        }
        if (lVar.f12230e.f12217d != j0.G) {
            if (value instanceof byte[]) {
                byte[] bArr3 = (byte[]) value;
                byte[] bArr4 = new byte[bArr3.length];
                System.arraycopy(bArr3, 0, bArr4, 0, bArr3.length);
                value = bArr4;
            }
            yVar.put(lVar, value);
            return;
        }
        Object obj3 = yVar.get(lVar);
        if (obj3 != null) {
            yVar.put(lVar, ((a) obj3).e().e((n) ((a) value)).c());
            return;
        }
        if (value instanceof byte[]) {
            byte[] bArr5 = (byte[]) value;
            byte[] bArr6 = new byte[bArr5.length];
            System.arraycopy(bArr5, 0, bArr6, 0, bArr5.length);
            value = bArr6;
        }
        yVar.put(lVar, value);
    }

    public final void i(l lVar, Object obj) {
        boolean z5 = lVar.f12231i;
        i0 i0Var = lVar.f12230e;
        if (!z5) {
            j(i0Var, obj);
        } else {
            if (!(obj instanceof List)) {
                throw new IllegalArgumentException("Wrong object type used with protocol message reflection.");
            }
            ArrayList arrayList = new ArrayList();
            arrayList.addAll((List) obj);
            Iterator it = arrayList.iterator();
            while (it.hasNext()) {
                j(i0Var, it.next());
            }
            obj = arrayList;
        }
        this.a.put(lVar, obj);
    }

    public h(int i5) {
        f();
    }
}
