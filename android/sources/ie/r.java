package ie;

import android.os.SystemClock;

/* loaded from: classes3.dex */
public final /* synthetic */ class r {
    public final /* synthetic */ s a;

    public final void a(int i5) {
        s sVar = this.a;
        synchronized (sVar) {
            int i6 = sVar.f10751i;
            if (i6 == 0 || sVar.f10747e) {
                if (i6 == i5) {
                    return;
                }
                sVar.f10751i = i5;
                if (i5 != 1 && i5 != 0 && i5 != 8) {
                    sVar.f10752l = sVar.a(i5);
                    sVar.f10746d.getClass();
                    long elapsedRealtime = SystemClock.elapsedRealtime();
                    sVar.b(sVar.f10748f > 0 ? (int) (elapsedRealtime - sVar.f10749g) : 0, sVar.f10750h, sVar.f10752l);
                    sVar.f10749g = elapsedRealtime;
                    sVar.f10750h = 0L;
                    sVar.k = 0L;
                    sVar.j = 0L;
                    r0 r0Var = sVar.f10745c;
                    r0Var.f10731b.clear();
                    r0Var.f10733d = -1;
                    r0Var.f10734e = 0;
                    r0Var.f10735f = 0;
                }
            }
        }
    }
}
