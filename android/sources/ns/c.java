package ns;

import androidx.recyclerview.widget.RecyclerView;
import java.util.ArrayList;
import java.util.Arrays;
import java.util.Collections;
import java.util.Comparator;
import java.util.Iterator;
import java.util.List;
import java.util.Map;
import java.util.TreeSet;
import java.util.concurrent.CopyOnWriteArrayList;
import net.time4j.w0;
import tn.g;
import w3.q;

/* loaded from: classes3.dex */
public final class c implements Iterable, Comparator {
    public static final b[] E;
    public static final c F;

    /* renamed from: x, reason: collision with root package name */
    public static final boolean f15687x = Boolean.getBoolean("net.time4j.scale.leapseconds.suppressed");

    /* renamed from: y, reason: collision with root package name */
    public static final boolean f15688y = Boolean.getBoolean("net.time4j.scale.leapseconds.final");

    /* renamed from: d, reason: collision with root package name */
    public final a f15689d;

    /* renamed from: e, reason: collision with root package name */
    public final List f15690e;

    /* renamed from: i, reason: collision with root package name */
    public final b[] f15691i;

    /* renamed from: v, reason: collision with root package name */
    public volatile b[] f15692v;

    /* renamed from: w, reason: collision with root package name */
    public final boolean f15693w;

    static {
        System.getProperty("net.time4j.scale.leapseconds.path", "data/leapseconds.data");
        E = new b[0];
        F = new c();
    }

    public c() {
        a aVar;
        int i5;
        boolean z5 = false;
        if (f15687x) {
            aVar = null;
            i5 = 0;
        } else {
            aVar = null;
            i5 = 0;
            for (a aVar2 : is.c.f12272b.d(a.class)) {
                int size = Collections.unmodifiableMap(((os.a) aVar2).f16244f).size();
                if (size > i5) {
                    aVar = aVar2;
                    i5 = size;
                }
            }
        }
        if (aVar == null || i5 == 0) {
            this.f15689d = null;
            this.f15690e = Collections.EMPTY_LIST;
            b[] bVarArr = E;
            this.f15691i = bVarArr;
            this.f15692v = bVarArr;
            this.f15693w = false;
            return;
        }
        TreeSet treeSet = new TreeSet(this);
        os.a aVar3 = (os.a) aVar;
        for (Map.Entry entry : Collections.unmodifiableMap(aVar3.f16244f).entrySet()) {
            treeSet.add(new b((is.a) entry.getKey(), q.B(q.D(g.y(r6.a(), r6.b(), r6.c()), 40587L), 86400L) - 62985601, ((Integer) entry.getValue()).intValue()));
        }
        ArrayList arrayList = new ArrayList(treeSet.size());
        Iterator it = treeSet.iterator();
        int i6 = 0;
        while (it.hasNext()) {
            b bVar = (b) it.next();
            if (bVar.d() == Long.MIN_VALUE) {
                i6 += bVar.b();
                arrayList.add(new b(bVar, i6));
            } else {
                arrayList.add(bVar);
            }
        }
        treeSet.clear();
        treeSet.addAll(arrayList);
        boolean z6 = f15688y;
        if (z6) {
            this.f15690e = Collections.unmodifiableList(new ArrayList(treeSet));
        } else {
            this.f15690e = new CopyOnWriteArrayList(treeSet);
        }
        List list = this.f15690e;
        ArrayList arrayList2 = new ArrayList(list.size());
        arrayList2.addAll(list);
        Collections.reverse(arrayList2);
        b[] bVarArr2 = (b[]) arrayList2.toArray(new b[arrayList2.size()]);
        this.f15691i = bVarArr2;
        this.f15692v = bVarArr2;
        this.f15689d = aVar;
        if (!z6) {
            this.f15693w = true;
            return;
        }
        boolean isEmpty = aVar3.f16244f.isEmpty();
        boolean z7 = !isEmpty;
        if (!isEmpty) {
            Iterator it2 = this.f15690e.iterator();
            while (true) {
                if (it2.hasNext()) {
                    if (((b) it2.next()).b() < 0) {
                        z5 = true;
                        break;
                    }
                } else {
                    break;
                }
            }
            z7 = z5;
        }
        this.f15693w = z7;
    }

    public final long b(long j) {
        long j5 = j - 63072000;
        if (j > 0) {
            for (b bVar : d()) {
                if (bVar.c() < j5) {
                    return q.z(j5, bVar.d() - bVar.c());
                }
            }
        }
        return j5;
    }

    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        is.a a = ((b) obj).a();
        is.a a10 = ((b) obj2).a();
        int a11 = a.a();
        int a12 = a10.a();
        if (a11 < a12) {
            return -1;
        }
        if (a11 > a12) {
            return 1;
        }
        int b10 = a.b();
        int b11 = a10.b();
        if (b10 < b11) {
            return -1;
        }
        if (b10 > b11) {
            return 1;
        }
        int c6 = a.c();
        int c8 = a10.c();
        if (c6 < c8) {
            return -1;
        }
        return c6 == c8 ? 0 : 1;
    }

    public final b[] d() {
        return (f15687x || f15688y) ? this.f15691i : this.f15692v;
    }

    public final boolean e() {
        return !this.f15690e.isEmpty();
    }

    @Override // java.lang.Iterable
    public final Iterator iterator() {
        return Collections.unmodifiableList(Arrays.asList(d())).iterator();
    }

    public final long j(long j) {
        if (j <= 0) {
            return j + 63072000;
        }
        for (b bVar : d()) {
            if (bVar.d() - bVar.b() < j || (this.f15693w && bVar.b() < 0 && bVar.d() < j)) {
                j = q.z(j, bVar.c() - bVar.d());
                break;
            }
        }
        return j + 63072000;
    }

    public final String toString() {
        StringBuilder sb2 = new StringBuilder(RecyclerView.ItemAnimator.FLAG_MOVED);
        sb2.append("[PROVIDER=");
        a aVar = this.f15689d;
        sb2.append(aVar);
        if (aVar != null) {
            sb2.append(",EXPIRES=");
            if (!e()) {
                throw new IllegalStateException("Leap seconds not activated.");
            }
            w0 w0Var = ((os.a) aVar).f16243e;
            sb2.append(String.format("%1$04d-%2$02d-%3$02d", Integer.valueOf(w0Var.a()), Integer.valueOf(w0Var.b()), Integer.valueOf(w0Var.c())));
        }
        sb2.append(",EVENTS=[");
        if (e()) {
            boolean z5 = true;
            for (Object obj : this.f15690e) {
                if (z5) {
                    z5 = false;
                } else {
                    sb2.append('|');
                }
                sb2.append(obj);
            }
        } else {
            sb2.append("NOT SUPPORTED");
        }
        sb2.append("]]");
        return sb2.toString();
    }
}
