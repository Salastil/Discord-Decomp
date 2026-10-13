package androidx.recyclerview.widget;

import java.util.Comparator;

/* loaded from: classes.dex */
public final class s implements Comparator {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f2453d;

    public /* synthetic */ s(int i5) {
        this.f2453d = i5;
    }

    /* JADX WARN: Code restructure failed: missing block: B:10:0x001b, code lost:
    
        if (r0 == null) goto L19;
     */
    /* JADX WARN: Code restructure failed: missing block: B:11:0x0026, code lost:
    
        return -1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:14:?, code lost:
    
        return 1;
     */
    /* JADX WARN: Code restructure failed: missing block: B:17:0x0024, code lost:
    
        if (r0 != false) goto L18;
     */
    @Override // java.util.Comparator
    /*
        Code decompiled incorrectly, please refer to instructions dump.
    */
    public final int compare(Object obj, Object obj2) {
        switch (this.f2453d) {
            case 0:
                return ((t) obj).a - ((t) obj2).a;
            default:
                d0 d0Var = (d0) obj;
                d0 d0Var2 = (d0) obj2;
                RecyclerView recyclerView = d0Var.f2387d;
                if ((recyclerView == null) == (d0Var2.f2387d == null)) {
                    boolean z5 = d0Var.a;
                    if (z5 == d0Var2.a) {
                        int i5 = d0Var2.f2385b - d0Var.f2385b;
                        if (i5 != 0) {
                            return i5;
                        }
                        int i6 = d0Var.f2386c - d0Var2.f2386c;
                        if (i6 != 0) {
                            return i6;
                        }
                        return 0;
                    }
                }
                break;
        }
    }
}
