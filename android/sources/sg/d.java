package sg;

import af.k;
import android.util.Log;
import androidx.customview.widget.ViewDragHelper;
import androidx.work.Worker;
import com.google.android.material.bottomsheet.BottomSheetBehavior;
import java.io.IOException;
import java.util.concurrent.ThreadPoolExecutor;
import java.util.logging.Level;
import kotlin.Unit;
import kotlin.jvm.internal.Intrinsics;
import rd.u;

/* loaded from: classes3.dex */
public final class d implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f18018d;

    /* renamed from: e, reason: collision with root package name */
    public final /* synthetic */ Object f18019e;

    public /* synthetic */ d(int i5, Object obj) {
        this.f18018d = i5;
        this.f18019e = obj;
    }

    @Override // java.lang.Runnable
    public final void run() {
        ss.a c6;
        long j;
        switch (this.f18018d) {
            case 0:
                k kVar = (k) this.f18019e;
                kVar.f565c = false;
                BottomSheetBehavior bottomSheetBehavior = (BottomSheetBehavior) kVar.f564b;
                ViewDragHelper viewDragHelper = bottomSheetBehavior.O;
                if (viewDragHelper != null && viewDragHelper.g()) {
                    kVar.g(kVar.f566d);
                    return;
                } else {
                    if (bottomSheetBehavior.N == 2) {
                        bottomSheetBehavior.Q(kVar.f566d);
                        return;
                    }
                    return;
                }
            case 1:
                break;
            case 2:
                t9.a aVar = (t9.a) this.f18019e;
                aVar.unscheduleSelf(this);
                aVar.invalidateSelf();
                return;
            case 3:
                Worker worker = (Worker) this.f18019e;
                try {
                    worker.f2564w.j(worker.f());
                    return;
                } catch (Throwable th2) {
                    worker.f2564w.k(th2);
                    return;
                }
            default:
                if (((jg.g) this.f18019e).c(new IOException("TIMEOUT"))) {
                    Log.w("Rpc", "No response");
                    return;
                }
                return;
        }
        while (true) {
            ss.c cVar = (ss.c) this.f18019e;
            synchronized (cVar) {
                c6 = cVar.c();
            }
            if (c6 == null) {
                return;
            }
            ss.b bVar = c6.f18134c;
            Intrinsics.checkNotNull(bVar);
            ss.c cVar2 = (ss.c) this.f18019e;
            boolean isLoggable = ss.c.f18142i.isLoggable(Level.FINE);
            if (isLoggable) {
                u uVar = bVar.a.a;
                j = System.nanoTime();
                e4.f.a(c6, bVar, "starting");
            } else {
                j = -1;
            }
            try {
                try {
                    ss.c.a(cVar2, c6);
                    Unit unit = Unit.a;
                    if (isLoggable) {
                        u uVar2 = bVar.a.a;
                        e4.f.a(c6, bVar, Intrinsics.stringPlus("finished run in ", e4.f.p(System.nanoTime() - j)));
                    }
                } catch (Throwable th3) {
                    if (isLoggable) {
                        u uVar3 = bVar.a.a;
                        e4.f.a(c6, bVar, Intrinsics.stringPlus("failed a run in ", e4.f.p(System.nanoTime() - j)));
                    }
                    throw th3;
                }
            } catch (Throwable th4) {
                u uVar4 = cVar2.a;
                Intrinsics.checkNotNullParameter(this, "runnable");
                ((ThreadPoolExecutor) uVar4.f17275e).execute(this);
                throw th4;
            }
        }
    }
}
