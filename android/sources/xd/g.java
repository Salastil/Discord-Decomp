package xd;

import wd.i;

/* loaded from: classes3.dex */
public final class g extends i implements Comparable {
    public long G;

    @Override // java.lang.Comparable
    public final int compareTo(Object obj) {
        g gVar = (g) obj;
        if (c(4) != gVar.c(4)) {
            return c(4) ? 1 : -1;
        }
        long j = this.f14438x - gVar.f14438x;
        if (j == 0) {
            j = this.G - gVar.G;
            if (j == 0) {
                return 0;
            }
        }
        return j > 0 ? 1 : -1;
    }
}
