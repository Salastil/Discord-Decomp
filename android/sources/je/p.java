package je;

import java.util.Comparator;

/* loaded from: classes3.dex */
public final /* synthetic */ class p implements Comparator {
    @Override // java.util.Comparator
    public final int compare(Object obj, Object obj2) {
        i iVar = (i) obj;
        i iVar2 = (i) obj2;
        long j = iVar.f12739x;
        long j5 = iVar2.f12739x;
        return j - j5 == 0 ? iVar.compareTo(iVar2) : j < j5 ? -1 : 1;
    }
}
