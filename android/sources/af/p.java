package af;

import androidx.work.impl.foreground.SystemForegroundService;
import java.util.ArrayList;
import java.util.List;

/* loaded from: classes3.dex */
public final class p implements Runnable {

    /* renamed from: d, reason: collision with root package name */
    public final /* synthetic */ int f579d;

    /* renamed from: e, reason: collision with root package name */
    public final int f580e;

    /* renamed from: i, reason: collision with root package name */
    public final Object f581i;

    public /* synthetic */ p(int i5, int i6, Object obj) {
        this.f579d = i6;
        this.f581i = obj;
        this.f580e = i5;
    }

    @Override // java.lang.Runnable
    public final void run() {
        switch (this.f579d) {
            case 0:
                ((q) this.f581i).g(this.f580e);
                break;
            case 1:
                ((com.google.android.material.datepicker.l) this.f581i).E.smoothScrollToPosition(this.f580e);
                break;
            case 2:
                ((SystemForegroundService) this.f581i).f2595w.cancel(this.f580e);
                break;
            case 3:
                ((fh.e) this.f581i).k(this.f580e);
                break;
            case 4:
                a1.b bVar = (a1.b) ((u4.b) this.f581i).f18810e;
                if (bVar != null) {
                    bVar.g(this.f580e);
                    break;
                }
                break;
            default:
                ArrayList arrayList = (ArrayList) this.f581i;
                int size = arrayList.size();
                int i5 = 0;
                if (this.f580e == 1) {
                    while (i5 < size) {
                        ((k2.h) arrayList.get(i5)).b();
                        i5++;
                    }
                    break;
                } else {
                    while (i5 < size) {
                        ((k2.h) arrayList.get(i5)).a();
                        i5++;
                    }
                    break;
                }
        }
    }

    public p(List list, int i5, Throwable th2) {
        this.f579d = 5;
        ta.a.k(list, "initCallbacks cannot be null");
        this.f581i = new ArrayList(list);
        this.f580e = i5;
    }
}
