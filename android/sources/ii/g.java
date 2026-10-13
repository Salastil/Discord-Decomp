package ii;

import sun.misc.Unsafe;

/* loaded from: classes3.dex */
public abstract /* synthetic */ class g {
    public static /* synthetic */ boolean a(Unsafe unsafe, m mVar, long j, l lVar, l lVar2) {
        while (!unsafe.compareAndSwapObject(mVar, j, lVar, lVar2)) {
            if (unsafe.getObject(mVar, j) != lVar) {
                return false;
            }
        }
        return true;
    }
}
