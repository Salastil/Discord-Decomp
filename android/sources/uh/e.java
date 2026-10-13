package uh;

import java.io.File;
import java.io.FileInputStream;
import java.io.InputStream;
import java.io.SequenceInputStream;
import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.TreeMap;
import th.l0;
import th.t;
import th.u;
import th.y0;

/* loaded from: classes3.dex */
public final class e extends d {

    /* renamed from: d, reason: collision with root package name */
    public final u f18905d;

    /* renamed from: e, reason: collision with root package name */
    public final long f18906e;

    /* renamed from: i, reason: collision with root package name */
    public final long f18907i;

    public e(u uVar, long j, long j5) {
        this.f18905d = uVar;
        long f2 = f(j);
        this.f18906e = f2;
        this.f18907i = f(f2 + j5);
    }

    public final InputStream c(long j, long j5) {
        long f2 = f(this.f18906e);
        long f10 = f(j5 + f2) - f2;
        u uVar = this.f18905d;
        TreeMap treeMap = uVar.f18594d;
        if (f2 < 0 || f10 < 0) {
            StringBuilder n6 = k0.d.n(f2, "Invalid input parameters ", ", ");
            n6.append(f10);
            throw new l0(n6.toString());
        }
        long j7 = f2 + f10;
        if (j7 > uVar.c()) {
            StringBuilder n10 = k0.d.n(uVar.c(), "Trying to access archive out of bounds. Archive ends at: ", ". Tried accessing: ");
            n10.append(j7);
            throw new l0(n10.toString());
        }
        Long l6 = (Long) treeMap.floorKey(Long.valueOf(f2));
        Long l7 = (Long) treeMap.floorKey(Long.valueOf(j7));
        if (l6.equals(l7)) {
            return new t(uVar.f(f2, l6), f10);
        }
        ArrayList arrayList = new ArrayList();
        arrayList.add(uVar.f(f2, l6));
        Collection values = treeMap.subMap(l6, false, l7, false).values();
        if (!values.isEmpty()) {
            arrayList.add(new y0(Collections.enumeration(values)));
        }
        arrayList.add(new t(new FileInputStream((File) treeMap.get(l7)), f10 - (l7.longValue() - f2)));
        return new SequenceInputStream(Collections.enumeration(arrayList));
    }

    public final long f(long j) {
        if (j < 0) {
            return 0L;
        }
        u uVar = this.f18905d;
        return j > uVar.c() ? uVar.c() : j;
    }

    @Override // java.io.Closeable, java.lang.AutoCloseable
    public final void close() {
    }
}
