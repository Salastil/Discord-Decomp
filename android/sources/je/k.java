package je;

import java.util.ArrayList;
import java.util.TreeSet;

/* loaded from: classes3.dex */
public final class k {
    public final int a;

    /* renamed from: b, reason: collision with root package name */
    public final String f12741b;

    /* renamed from: c, reason: collision with root package name */
    public final TreeSet f12742c = new TreeSet();

    /* renamed from: d, reason: collision with root package name */
    public final ArrayList f12743d = new ArrayList();

    /* renamed from: e, reason: collision with root package name */
    public o f12744e;

    public k(int i5, String str, o oVar) {
        this.a = i5;
        this.f12741b = str;
        this.f12744e = oVar;
    }

    public final boolean a(long j, long j5) {
        int i5 = 0;
        while (true) {
            ArrayList arrayList = this.f12743d;
            if (i5 >= arrayList.size()) {
                return false;
            }
            j jVar = (j) arrayList.get(i5);
            long j7 = jVar.a;
            long j10 = jVar.f12740b;
            if (j10 == -1) {
                if (j >= j7) {
                    return true;
                }
            } else if (j5 != -1 && j7 <= j && j + j5 <= j7 + j10) {
                return true;
            }
            i5++;
        }
    }

    public final boolean equals(Object obj) {
        if (this == obj) {
            return true;
        }
        if (obj != null && k.class == obj.getClass()) {
            k kVar = (k) obj;
            if (this.a == kVar.a && this.f12741b.equals(kVar.f12741b) && this.f12742c.equals(kVar.f12742c) && this.f12744e.equals(kVar.f12744e)) {
                return true;
            }
        }
        return false;
    }

    public final int hashCode() {
        return this.f12744e.hashCode() + a3.e.d(this.a * 31, 31, this.f12741b);
    }
}
