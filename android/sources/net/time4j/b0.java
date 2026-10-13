package net.time4j;

import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.io.Serializable;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

/* loaded from: classes3.dex */
public final class b0 extends com.facebook.imagepipeline.nativecode.b implements Serializable {
    public static final bg.s E;
    private static final long serialVersionUID = -6321211763598951499L;

    /* renamed from: x, reason: collision with root package name */
    public static final char f15223x;

    /* renamed from: y, reason: collision with root package name */
    public static final b0 f15224y;

    /* renamed from: v, reason: collision with root package name */
    public final transient List f15225v;

    /* renamed from: w, reason: collision with root package name */
    public final transient boolean f15226w;

    static {
        f15223x = Boolean.getBoolean("net.time4j.format.iso.decimal.dot") ? '.' : ',';
        f15224y = new b0();
        P(true, false);
        P(true, true);
        P(false, false);
        P(false, true);
        new z(t.class, "hh[:mm[:ss[,fffffffff]]]");
        new z(t.class, "hh[mm[ss[,fffffffff]]]");
        E = new bg.s(9);
        k kVar = m.E;
        new a0(new m[]{m.f15278v, m.f15280x, kVar});
        new a0(new t[]{t.f15314d, t.f15315e, t.f15316i, t.f15319x});
        new a0(new f0[]{m1.f15286d, m.f15281y, kVar});
    }

    public b0() {
        super(false);
        this.f15225v = Collections.EMPTY_LIST;
        this.f15226w = false;
    }

    public static void P(boolean z5, boolean z6) {
        new z(m.class, z5 ? z6 ? "YYYY-DDD" : "YYYY-MM-DD" : z6 ? "YYYYDDD" : "YYYYMMDD");
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(6, this);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof b0) {
            b0 b0Var = (b0) b0.class.cast(obj);
            if (this.f15226w == b0Var.f15226w && this.f15225v.equals(b0Var.f15225v)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        int hashCode = this.f15225v.hashCode();
        if (this.f15226w) {
            return 0;
        }
        return hashCode;
    }

    @Override // com.facebook.imagepipeline.nativecode.b
    public final String toString() {
        m1 m1Var;
        List list = this.f15225v;
        int size = list.size();
        for (int i5 = 0; i5 < size; i5++) {
            long j = 0;
            if (((ks.t) list.get(i5)).a() > 0) {
                StringBuilder sb2 = new StringBuilder();
                if (this.f15226w) {
                    sb2.append('-');
                }
                sb2.append('P');
                int size2 = list.size();
                long j5 = 0;
                long j7 = 0;
                int i6 = 0;
                boolean z5 = false;
                boolean z6 = false;
                while (true) {
                    m1Var = m1.f15286d;
                    if (i6 >= size2) {
                        break;
                    }
                    ks.t tVar = (ks.t) list.get(i6);
                    long j10 = j;
                    h0 h0Var = (h0) tVar.b();
                    if (!z5 && !h0Var.b()) {
                        sb2.append('T');
                        z5 = true;
                    }
                    long j11 = j5;
                    long a = tVar.a();
                    char a10 = h0Var.a();
                    if (h0Var == m1Var) {
                        z6 = true;
                    }
                    if (a10 <= '0' || a10 > '9') {
                        if (a10 == 'S') {
                            j7 = a;
                        } else {
                            sb2.append(a);
                            if (a10 == 0) {
                                sb2.append('{');
                                sb2.append(h0Var);
                                sb2.append('}');
                            } else {
                                sb2.append(a10);
                            }
                        }
                        j5 = j11;
                    } else {
                        j5 = a;
                    }
                    i6++;
                    j = j10;
                }
                long j12 = j;
                long j13 = j5;
                if (j13 != j12) {
                    sb2.append(w3.q.z(j7, j13 / 1000000000));
                    sb2.append(f15223x);
                    String valueOf = String.valueOf(j13 % 1000000000);
                    int length = 9 - valueOf.length();
                    for (int i10 = 0; i10 < length; i10++) {
                        sb2.append('0');
                    }
                    sb2.append(valueOf);
                    sb2.append('S');
                } else if (j7 != j12) {
                    sb2.append(j7);
                    sb2.append('S');
                }
                if (z6) {
                    boolean z7 = !z5;
                    if (!z5) {
                        int size3 = list.size();
                        int i11 = 0;
                        while (true) {
                            if (i11 >= size3) {
                                break;
                            }
                            Object b10 = ((ks.t) list.get(i11)).b();
                            if (b10 != m1Var && b10 != m.f15281y && b10 != m.E) {
                                z7 = false;
                                break;
                            }
                            i11++;
                        }
                    }
                    if (!z7) {
                        int indexOf = sb2.indexOf("Y");
                        sb2.replace(indexOf, indexOf + 1, "{WEEK_BASED_YEARS}");
                    }
                }
                return sb2.toString();
            }
        }
        return "PT0S";
    }

    public b0(ArrayList arrayList, boolean z5) {
        super(false);
        boolean isEmpty = arrayList.isEmpty();
        if (isEmpty) {
            this.f15225v = Collections.EMPTY_LIST;
        } else {
            Collections.sort(arrayList, E);
            this.f15225v = Collections.unmodifiableList(arrayList);
        }
        this.f15226w = !isEmpty && z5;
    }
}
