package net.time4j.tz.model;

import com.facebook.react.fabric.mounting.mountitems.IntBufferBatchMountItem;
import java.io.InvalidObjectException;
import java.io.ObjectInputStream;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Iterator;
import java.util.List;
import java.util.concurrent.ConcurrentHashMap;
import net.time4j.c1;
import net.time4j.q0;
import net.time4j.w0;
import net.time4j.z0;
import w3.q;

/* loaded from: classes3.dex */
public final class m extends o {
    private static final long serialVersionUID = 2456700806862862287L;

    /* renamed from: e, reason: collision with root package name */
    public final transient net.time4j.tz.n f15370e;

    /* renamed from: i, reason: collision with root package name */
    public final transient List f15371i;

    /* renamed from: v, reason: collision with root package name */
    public final transient List f15372v;

    static {
        tn.g.z(ks.l.MODIFIED_JULIAN_DATE.b(o.a(100), ks.l.UNIX));
    }

    public m(net.time4j.tz.n nVar, List list) {
        String str;
        int i5;
        net.time4j.tz.n nVar2;
        int i6;
        long j;
        new ConcurrentHashMap();
        if (list.isEmpty()) {
            throw new IllegalArgumentException("Missing daylight saving rules.");
        }
        if (list.size() >= 128) {
            throw new IllegalArgumentException("Too many daylight saving rules: " + list);
        }
        Collections.sort(list, n.f15373d);
        net.time4j.tz.n nVar3 = null;
        int i10 = 1;
        if (list.size() > 1) {
            Iterator it = list.iterator();
            str = null;
            while (it.hasNext()) {
                d dVar = (d) it.next();
                if (str == null) {
                    dVar.getClass();
                    str = "iso8601";
                } else {
                    dVar.getClass();
                    if (!str.equals("iso8601")) {
                        throw new IllegalArgumentException("Rules with different calendar systems not permitted.");
                    }
                }
            }
        } else {
            str = null;
        }
        "iso8601".equals(str);
        if (nVar.c() != Long.MIN_VALUE) {
            long max = Math.max(nVar.c(), nVar.c());
            int e9 = nVar.e();
            int size = list.size();
            int i11 = Integer.MIN_VALUE;
            int i12 = 0;
            while (nVar3 == null) {
                int i13 = i12 % size;
                d dVar2 = (d) list.get(i13);
                d dVar3 = (d) list.get(((i12 - 1) + size) % size);
                int b10 = b(dVar2, e9, dVar3.f15364v);
                if (i12 == 0) {
                    i6 = i10;
                    j = max;
                    i11 = e(dVar2, j + b10);
                } else {
                    i6 = i10;
                    j = max;
                    if (i13 == 0) {
                        i11++;
                    }
                }
                long c6 = c(dVar2, i11, b10);
                if (c6 > j) {
                    int i14 = e9 + dVar3.f15364v;
                    int i15 = dVar2.f15364v;
                    nVar3 = new net.time4j.tz.n(c6, i14, e9 + i15, i15);
                }
                i12++;
                i10 = i6;
                max = j;
            }
            i5 = i10;
            if (nVar.f() != nVar3.d()) {
                throw new IllegalArgumentException("Inconsistent model: " + nVar + " / " + list);
            }
            nVar2 = nVar;
        } else {
            if (nVar.b() != 0) {
                throw new IllegalArgumentException("Initial transition must not have any dst-offset: " + nVar);
            }
            i5 = 1;
            nVar2 = new net.time4j.tz.n(((q0) q0.E.f13688y).f15306d, nVar.e(), nVar.e(), 0);
        }
        this.f15370e = nVar2;
        List unmodifiableList = Collections.unmodifiableList(list);
        this.f15371i = unmodifiableList;
        this.f15372v = d(nVar2, unmodifiableList, 0L, o.a(i5));
    }

    public static int b(d dVar, int i5, int i6) {
        l lVar = dVar.f15363i;
        int ordinal = lVar.ordinal();
        if (ordinal == 0) {
            return 0;
        }
        if (ordinal == 1) {
            return i5;
        }
        if (ordinal == 2) {
            return i5 + i6;
        }
        throw new UnsupportedOperationException(lVar.name());
    }

    public static long c(d dVar, int i5, int i6) {
        g gVar = (g) dVar;
        w0 w0Var = (w0) gVar.b(i5).l(gVar.f15361d, net.time4j.m.E);
        z0 z0Var = dVar.f15362e;
        w0Var.getClass();
        c1 c1Var = new c1(w0Var, z0Var);
        net.time4j.tz.m e9 = net.time4j.tz.m.e(i6, 0);
        w0 w0Var2 = c1Var.f15234d;
        w0Var2.getClass();
        long B = q.B(w0.V.n(w0Var2) + 730, 86400L);
        long j = B + (r0.f15411d * 3600) + (r0.f15412e * 60) + r0.f15413i;
        long j5 = j - e9.f15347d;
        int i10 = c1Var.f15235e.f15414v - e9.f15348e;
        if (i10 < 0) {
            i10 += 1000000000;
            j5--;
        } else if (i10 >= 1000000000) {
            i10 -= 1000000000;
            j5++;
        }
        return q0.s(j5, i10, ns.e.f15694d).f15306d;
    }

    public static List d(net.time4j.tz.n nVar, List list, long j, long j5) {
        List list2 = list;
        long j7 = j;
        long c6 = nVar.c();
        if (j7 > j5) {
            throw new IllegalArgumentException("Start after end.");
        }
        if (j5 <= c6 || j7 == j5) {
            return Collections.EMPTY_LIST;
        }
        ArrayList arrayList = new ArrayList();
        int size = list2.size();
        int e9 = nVar.e();
        int i5 = Integer.MIN_VALUE;
        int i6 = 0;
        while (true) {
            int i10 = i6 % size;
            d dVar = (d) list2.get(i10);
            d dVar2 = (d) list2.get(((i6 - 1) + size) % size);
            int b10 = b(dVar, e9, dVar2.f15364v);
            if (i6 == 0) {
                i5 = e(dVar, Math.max(j7, c6) + b10);
            } else if (i10 == 0) {
                i5++;
            }
            long c8 = c(dVar, i5, b10);
            i6++;
            if (c8 >= j5) {
                return Collections.unmodifiableList(arrayList);
            }
            if (c8 >= j && c8 > c6) {
                int i11 = e9 + dVar2.f15364v;
                int i12 = dVar.f15364v;
                arrayList.add(new net.time4j.tz.n(c8, i11, e9 + i12, i12));
            }
            list2 = list;
            j7 = j;
        }
    }

    public static int e(d dVar, long j) {
        return (int) (tn.g.z(ks.l.MODIFIED_JULIAN_DATE.b(q.m(86400, j), ks.l.UNIX)) >> 32);
    }

    private void readObject(ObjectInputStream objectInputStream) {
        throw new InvalidObjectException("Serialization proxy required.");
    }

    private Object writeReplace() {
        return new SPX(125, this);
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj instanceof m) {
            m mVar = (m) obj;
            if (this.f15370e.equals(mVar.f15370e) && this.f15371i.equals(mVar.f15371i)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return (this.f15371i.hashCode() * 37) + (this.f15370e.hashCode() * 17);
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(IntBufferBatchMountItem.INSTRUCTION_UPDATE_EVENT_EMITTER);
        a3.e.v(m.class, sb2, "[initial=");
        sb2.append(this.f15370e);
        sb2.append(",rules=");
        sb2.append(this.f15371i);
        sb2.append(']');
        return sb2.toString();
    }
}
