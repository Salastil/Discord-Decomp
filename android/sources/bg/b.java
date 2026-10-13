package bg;

import com.facebook.react.devsupport.StackTraceHelper;
import java.io.IOException;
import java.math.RoundingMode;
import java.nio.charset.StandardCharsets;
import java.util.Collection;
import java.util.Comparator;
import java.util.Iterator;
import java.util.Map;
import java.util.SortedSet;
import java.util.TreeMap;
import java.util.logging.Level;
import java.util.logging.Logger;

/* loaded from: classes3.dex */
public abstract class b {

    /* renamed from: e, reason: collision with root package name */
    public static volatile ap.a f2930e;

    /* renamed from: d, reason: collision with root package name */
    public static final Object f2929d = new Object();

    /* renamed from: i, reason: collision with root package name */
    public static final f1 f2931i = new f1(StackTraceHelper.ID_KEY);

    /* renamed from: v, reason: collision with root package name */
    public static final f1 f2932v = new f1("type");

    public static int a(int i5, int i6) {
        RoundingMode roundingMode = RoundingMode.CEILING;
        roundingMode.getClass();
        if (i6 == 0) {
            throw new ArithmeticException("/ by zero");
        }
        int i10 = i5 / i6;
        int i11 = i5 - (i6 * i10);
        if (i11 == 0) {
            return i10;
        }
        int i12 = ((i5 ^ i6) >> 31) | 1;
        switch (r0.a[roundingMode.ordinal()]) {
            case 1:
                throw new ArithmeticException("mode was UNNECESSARY, but rounding was necessary");
            case 2:
                return i10;
            case 3:
                if (i12 >= 0) {
                    return i10;
                }
                break;
            case 4:
                break;
            case 5:
                if (i12 <= 0) {
                    return i10;
                }
                break;
            case 6:
            case 7:
            case 8:
                int abs = Math.abs(i11);
                int abs2 = abs - (Math.abs(i6) - abs);
                if (abs2 == 0) {
                    RoundingMode roundingMode2 = RoundingMode.HALF_UP;
                    RoundingMode roundingMode3 = RoundingMode.HALF_EVEN;
                    return i10;
                }
                if (abs2 <= 0) {
                    return i10;
                }
                break;
            default:
                throw new AssertionError();
        }
        return i10 + i12;
    }

    public static int b(r rVar) {
        Iterator it = rVar.iterator();
        int i5 = 0;
        while (it.hasNext()) {
            Object next = it.next();
            i5 += next != null ? next.hashCode() : 0;
        }
        return i5;
    }

    public static String c(w0 w0Var) {
        StringBuilder sb2 = new StringBuilder(w0Var.e());
        for (int i5 = 0; i5 < w0Var.e(); i5++) {
            byte a = w0Var.a(i5);
            if (a == 34) {
                sb2.append("\\\"");
            } else if (a == 39) {
                sb2.append("\\'");
            } else if (a != 92) {
                switch (a) {
                    case 7:
                        sb2.append("\\a");
                        break;
                    case 8:
                        sb2.append("\\b");
                        break;
                    case 9:
                        sb2.append("\\t");
                        break;
                    case 10:
                        sb2.append("\\n");
                        break;
                    case 11:
                        sb2.append("\\v");
                        break;
                    case 12:
                        sb2.append("\\f");
                        break;
                    case 13:
                        sb2.append("\\r");
                        break;
                    default:
                        if (a < 32 || a > 126) {
                            sb2.append('\\');
                            sb2.append((char) (((a >>> 6) & 3) + 48));
                            sb2.append((char) (((a >>> 3) & 7) + 48));
                            sb2.append((char) ((a & 7) + 48));
                            break;
                        } else {
                            sb2.append((char) a);
                            break;
                        }
                        break;
                }
            } else {
                sb2.append("\\\\");
            }
        }
        return sb2.toString();
    }

    public static String d(String str, Object... objArr) {
        int length;
        int length2;
        int indexOf;
        String g6;
        int i5 = 0;
        int i6 = 0;
        while (true) {
            length = objArr.length;
            if (i6 >= length) {
                break;
            }
            Object obj = objArr[i6];
            if (obj == null) {
                g6 = "null";
            } else {
                try {
                    g6 = obj.toString();
                } catch (Exception e9) {
                    String l6 = k0.d.l(obj.getClass().getName(), "@", Integer.toHexString(System.identityHashCode(obj)));
                    Logger.getLogger("com.google.common.base.Strings").logp(Level.WARNING, "com.google.common.base.Strings", "lenientToString", "Exception during lenientFormat for ".concat(l6), (Throwable) e9);
                    g6 = s4.h.g("<", l6, " threw ", e9.getClass().getName(), ">");
                }
            }
            objArr[i6] = g6;
            i6++;
        }
        StringBuilder sb2 = new StringBuilder(str.length() + (length * 16));
        int i10 = 0;
        while (true) {
            length2 = objArr.length;
            if (i5 >= length2 || (indexOf = str.indexOf("%s", i10)) == -1) {
                break;
            }
            sb2.append((CharSequence) str, i10, indexOf);
            sb2.append(objArr[i5]);
            i5++;
            i10 = indexOf + 2;
        }
        sb2.append((CharSequence) str, i10, str.length());
        if (i5 < length2) {
            sb2.append(" [");
            sb2.append(objArr[i5]);
            for (int i11 = i5 + 1; i11 < objArr.length; i11++) {
                sb2.append(", ");
                sb2.append(objArr[i11]);
            }
            sb2.append(']');
        }
        return sb2.toString();
    }

    public static void e(int i5, int i6) {
        String d6;
        if (i5 < 0 || i5 >= i6) {
            if (i5 < 0) {
                d6 = d("%s (%s) must not be negative", "index", Integer.valueOf(i5));
            } else {
                if (i6 < 0) {
                    throw new IllegalArgumentException(k0.d.i(i6, "negative size: "));
                }
                d6 = d("%s (%s) must be less than size (%s)", "index", Integer.valueOf(i5), Integer.valueOf(i6));
            }
            throw new IndexOutOfBoundsException(d6);
        }
    }

    public static void f(Object obj, Object obj2) {
        if (obj == null) {
            throw new NullPointerException("null key in entry: null=".concat(String.valueOf(obj2)));
        }
        if (obj2 == null) {
            throw new NullPointerException(s4.h.f("null value in entry: ", obj.toString(), "=null"));
        }
    }

    public static final void g(StringBuilder sb2, Iterator it, j8.b bVar) {
        if (it.hasNext()) {
            Map.Entry entry = (Map.Entry) it.next();
            sb2.append(j8.b.m(entry.getKey()));
            sb2.append(" : ");
            sb2.append(j8.b.m(entry.getValue()));
            while (it.hasNext()) {
                sb2.append(",\n  ");
                Map.Entry entry2 = (Map.Entry) it.next();
                sb2.append(j8.b.m(entry2.getKey()));
                sb2.append(" : ");
                sb2.append(j8.b.m(entry2.getValue()));
            }
        }
    }

    public static boolean h(Object obj, Object obj2) {
        if (obj != obj2) {
            return obj != null && obj.equals(obj2);
        }
        return true;
    }

    public static boolean i(Comparator comparator, Collection collection) {
        Object obj;
        comparator.getClass();
        collection.getClass();
        if (collection instanceof SortedSet) {
            obj = ((SortedSet) collection).comparator();
            if (obj == null) {
                obj = z.f3008e;
            }
        } else {
            if (!(collection instanceof g0)) {
                return false;
            }
            obj = ((w) ((g0) collection)).f3001v;
        }
        return comparator.equals(obj);
    }

    public static byte[] j(byte[]... bArr) {
        long j = 0;
        int i5 = 0;
        while (true) {
            if (i5 >= bArr.length) {
                break;
            }
            j += bArr[i5].length;
            i5++;
        }
        int i6 = (int) j;
        if (j != i6) {
            throw new IllegalArgumentException(d("the total number of elements (%s) in the arrays must fit in an int", Long.valueOf(j)));
        }
        byte[] bArr2 = new byte[i6];
        int i10 = 0;
        for (byte[] bArr3 : bArr) {
            int length = bArr3.length;
            System.arraycopy(bArr3, 0, bArr2, i10, length);
            i10 += length;
        }
        return bArr2;
    }

    public static final h1 k(j1 j1Var) {
        try {
            i1 i5 = j1Var.i();
            if (i5 == null) {
                throw new c1("Parser being asked to parse an empty input stream");
            }
            try {
                try {
                    byte b10 = i5.a;
                    byte b11 = i5.f2953b;
                    int i6 = 0;
                    if (b10 == Byte.MIN_VALUE) {
                        long c6 = j1Var.c();
                        if (c6 > 1000) {
                            throw new c1("Parser being asked to read a large CBOR array");
                        }
                        l(b11, c6);
                        h1[] h1VarArr = new h1[(int) c6];
                        while (i6 < c6) {
                            h1VarArr[i6] = k(j1Var);
                            i6++;
                        }
                        return new z0(p.m(h1VarArr));
                    }
                    if (b10 != -96) {
                        if (b10 == -64) {
                            throw new c1("Tags are currently unsupported");
                        }
                        if (b10 == -32) {
                            return new a1(j1Var.l());
                        }
                        if (b10 == 0 || b10 == 32) {
                            long f2 = j1Var.f();
                            l(b11, f2 > 0 ? f2 : ~f2);
                            return new d1(f2);
                        }
                        if (b10 == 64) {
                            j1Var.r((byte) 64);
                            byte[] x5 = j1Var.x();
                            int length = x5.length;
                            l(b11, length);
                            return new b1(w0.k(x5, length));
                        }
                        if (b10 == 96) {
                            j1Var.r((byte) 96);
                            String str = new String(j1Var.x(), StandardCharsets.UTF_8);
                            l(b11, str.length());
                            return new f1(str);
                        }
                        throw new c1("Unidentifiable major type: " + ((b10 >> 5) & 7));
                    }
                    long g6 = j1Var.g();
                    if (g6 > 1000) {
                        throw new c1("Parser being asked to read a large CBOR map");
                    }
                    l(b11, g6);
                    int i10 = (int) g6;
                    e4.e[] eVarArr = new e4.e[i10];
                    h1 h1Var = null;
                    int i11 = 0;
                    while (i11 < g6) {
                        h1 k = k(j1Var);
                        if (h1Var != null && k.compareTo(h1Var) <= 0) {
                            throw new y0("Keys in CBOR Map not in strictly ascending natural order:\nPrevious key: " + h1Var.toString() + "\nCurrent key: " + k.toString());
                        }
                        eVarArr[i11] = new e4.e(5, k, k(j1Var));
                        i11++;
                        h1Var = k;
                    }
                    TreeMap treeMap = new TreeMap();
                    while (i6 < i10) {
                        e4.e eVar = eVarArr[i6];
                        if (treeMap.containsKey((h1) eVar.f7943e)) {
                            throw new y0("Attempted to add duplicate key to canonical CBOR Map.");
                        }
                        treeMap.put((h1) eVar.f7943e, (h1) eVar.f7944i);
                        i6++;
                    }
                    return new e1(v.b(treeMap));
                } catch (IOException | RuntimeException e9) {
                    e = e9;
                    throw new c1(e);
                }
            } catch (RuntimeException e10) {
                e = e10;
                throw new c1(e);
            }
        } catch (IOException e11) {
            throw new c1(e11);
        }
    }

    public static final void l(byte b10, long j) {
        switch (b10) {
            case 24:
                if (j < 24) {
                    throw new y0(a3.e.g(j, "Integer value ", " after add info could have been represented in 0 additional bytes, but used 1"));
                }
                return;
            case 25:
                if (j < 256) {
                    throw new y0(a3.e.g(j, "Integer value ", " after add info could have been represented in 0-1 additional bytes, but used 2"));
                }
                return;
            case 26:
                if (j < 65536) {
                    throw new y0(a3.e.g(j, "Integer value ", " after add info could have been represented in 0-2 additional bytes, but used 4"));
                }
                return;
            case 27:
                if (j < 4294967296L) {
                    throw new y0(a3.e.g(j, "Integer value ", " after add info could have been represented in 0-4 additional bytes, but used 8"));
                }
                return;
            default:
                return;
        }
    }

    public static void m(int i5, int i6, int i10) {
        if (i5 < 0 || i6 < i5 || i6 > i10) {
            throw new IndexOutOfBoundsException((i5 < 0 || i5 > i10) ? n(i5, i10, "start index") : (i6 < 0 || i6 > i10) ? n(i6, i10, "end index") : d("end index (%s) must not be less than start index (%s)", Integer.valueOf(i6), Integer.valueOf(i5)));
        }
    }

    public static String n(int i5, int i6, String str) {
        if (i5 < 0) {
            return d("%s (%s) must not be negative", str, Integer.valueOf(i5));
        }
        if (i6 >= 0) {
            return d("%s (%s) must not be greater than size (%s)", str, Integer.valueOf(i5), Integer.valueOf(i6));
        }
        throw new IllegalArgumentException(k0.d.i(i6, "negative size: "));
    }
}
